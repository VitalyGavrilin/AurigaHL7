/*
 * This file is part of AurigaHL7.
 *
 * AurigaHL7 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * AurigaHL7 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with AurigaHL7.  If not, see <http://www.gnu.org/licenses/>.
 */

// FitToHL7.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <Windows.h>
#include "curl/curl.h"
#include <string>
#include <vector>
//#include <map>
#include "common.h"
#include "GoogleAuth.h"
#include "rapidjson/document.h"
#include "rapidjson/pointer.h"
#include "message/ORU_R01.h"
#include "message/QRY_A19.h"
//#include <sys/timeb.h>
#include "dataencode.h"
#include "HL7func.h"
#include "utils.h"
#include "RESTProcess.h"

//using namespace std;

int main( int argc, char* argv[] )
{
     DWORD error = 0;
     CURL *curl;
     CURLcode res;
     FIT_SESSION sHeadPars;

     // init session
     initSession( sHeadPars );

     // Pars command line parameters
     if ( !parsCommandLine( argc, argv, sHeadPars ) )
          return 0;

     // Initing socket system
     WSADATA	wsaData;
     WORD wVersionRequested = MAKEWORD( 2, 2 );
     error = WSAStartup( wVersionRequested, &wsaData );
     if ( error )
     {
          printf( "ERROR initing WSA = 0x%X", error );
          return 0;
     }

     // start main work
     do
     {
          // Init CURL
          curl = curlInit( &sHeadPars );
          if ( !curl )
               break;

          // create state random
          sHeadPars.state = createRandom( curl );

          HL7_24::ORU_R01 oru_gen;
          //__timeb64 tm;
          //std::string encoded_val;
          //std::string encoded_start_val;

          //SYSTEMTIME stime;
          //int fractionOfSec;
          //int offset;

          if ( !GoogleAuth( curl, &sHeadPars ) )
          {
               printf( "ERROR authenticate google api.\n" );
               break;
          }

          // ORU message base structure and definitions
          //if ( !initBaseORUMessageData( oru_gen, "324812218814-sf225socbl5k556r6samql1e2fiurilf.apps.googleusercontent.com", &sHeadPars ) )
          if ( !initBaseORUMessageData( oru_gen, sHeadPars.client_ID, &sHeadPars ) )
               break;

          // Token control time
          FILETIME tokenStart;
          FILETIME tokenEnd;
          GetSystemTimeAsFileTime( &tokenStart );

          do
          {
               //Request fit data sources
               std::string tokenReq = "Authorization: Bearer " + sHeadPars.access_token;
               sHeadPars.headers.empty();
               sHeadPars.headers.push_back( tokenReq );
               res = Request( curl, REQUEST_GET, PROTO_HTTPS, "www.googleapis.com", "/fitness/v1/users/me/dataSources", NULL, &sHeadPars, NULL );
               if ( res != CURLE_OK )
               {
                    printf( "ERROR get google auth token %d.\n", res );
                    break;
               }

               //ORU^R01 Unsolicited Observation Message Chapter
               //MSH Message Header 2
               //{
               //     [
               //          PID Patient Identification 3
               //     ]
               //     {
               //          OBR Observations Report ID 7
               //          {
               //               [OBX] Observation / Result 7
               //          }
               //     }
               //}
               //[ DSC ] Continuation Pointer 2
               //https://developers.google.com/fit/rest/v1/reference/users/dataSources/datasets/get
               if ( ( sHeadPars.dType == JSON_DATA ) && sHeadPars.structed_data )
               {
                    // Pars JSON dataSource
                    rapidjson::Document doc;
                    doc.Parse( (char*)sHeadPars.structed_data, sHeadPars.structed_len );

                    if ( doc.HasMember( "dataSource" ) )
                    {
                         const rapidjson::Value& ds = doc[ "dataSource" ];
                         if ( ds.IsArray() )
                         {
                              // Go through dataSources
                              //SYSTEMTIME syst;
                              //FILETIME ft;
                              for ( rapidjson::SizeType i = 0; i < ds.Size(); i++ )
                              {
                                   //const rapidjson::Value& ri = ds[ i ];
                                   //const rapidjson::Value& dt = ds[ i ][ "dataType" ];

                                   if ( !ds[ i ].HasMember( "dataStreamId" ) )
                                        continue;
                                   //request GoogleFit datasets
                                   char* req = curl_easy_escape( curl, ds[ i ][ "dataStreamId" ].GetString(), ds[ i ][ "dataStreamId" ].GetStringLength() );
                                   tokenReq = "/fitness/v1/users/me/dataSources/" + std::string( req ) + "/datasets/" +
                                        FileTimeToNanoString( &sHeadPars.startTyme, &sHeadPars.ft_offset ) + "-" +
                                        FileTimeToNanoString( &sHeadPars.endTime, &sHeadPars.ft_offset );
                                   res = Request( curl, REQUEST_GET, PROTO_HTTPS, "www.googleapis.com", (char*)tokenReq.c_str(), NULL, &sHeadPars, NULL );
                                   if ( res != CURLE_OK )
                                   {
                                        printf( "ERROR get fitness data %d.\n", res );
                                        continue;
                                   }

                                   HL7_24::ORU_R01 oru;
                                   oru = oru_gen;

                                   // Pars datasets JSON
                                   rapidjson::Document dataset;
                                   dataset.Parse( (char*)sHeadPars.structed_data, sHeadPars.structed_len );

                                   if ( !initORUMessageData( oru, &sHeadPars, req, ds[ i ], dataset ) )
                                        continue;

                                   if ( !sendORU( oru, &sHeadPars ) )
                                        continue;
                              }
                         }
                    }
               }
//break;
               GetSystemTimeAsFileTime( &tokenEnd );
               //if ( sHeadPars.expires_in <= ( ( ( ( *( (__int64*)&tokenEnd ) - *( (__int64*)&tokenStart ) ) / 10000 ) ) + DATA_REQUEST_TIME_INTERVAL ) )
               if ( sHeadPars.expires_in <= ( ( ( ( *( (__int64*)&tokenEnd ) - *( (__int64*)&tokenStart ) ) / 10000 ) ) + sHeadPars.time_interval ) )
               {
                    if ( !GoogleAuthRefresh( curl, &sHeadPars ) )
                    {
                         if ( !GoogleAuth( curl, &sHeadPars ) )
                         {
                              printf( "ERROR authenticate google api.\n" );
                              break;
                         }
                    }
                    GetSystemTimeAsFileTime( &tokenStart );
               }
               //Sleep( DATA_REQUEST_TIME_INTERVAL * 1000 );
               Sleep( sHeadPars.time_interval * 1000 );
          } while ( 1 );
     } while ( 0 );

     // free resources
     if ( sHeadPars.pDebug )
          fclose( sHeadPars.pDebug );
     resetData( &sHeadPars );
     if ( sHeadPars.state )
          curl_free( sHeadPars.state );
     if ( sHeadPars.code )
          free( sHeadPars.code );
     if ( curl )
          curl_easy_cleanup( curl );
     //if ( chProxy )
     //     free( chProxy );
     WSACleanup();
     return 1;
}

//com.google.activity.sample              Instantaneous sample of the current activity.                    Activity       activity( int—enum )
//     "dataStreamId": "derived:com.google.activity.samples:com.google.android.gms:InFocus:InFocus M808:2efec051:detailed",
//          "dataStreamName" : "detailed",
//          "dataType" : { "name": "com.google.activity.samples",
//          "field" : [{
//          "name": "activity_confidence",
//               "format" : "map"
//     }] },
//com.google.activity.segment             Continuous time interval of a single activity.                   Activity       activity( int—enum )
//     "dataStreamId": "derived:com.google.activity.segment:com.google.android.gms:InFocus:InFocus M808:2efec051:activity_from_steps",
//     "dataStreamName" : "activity_from_steps",
//     "dataType" : { "name": "com.google.activity.segment",
//     "field" : [{
//          "name": "activity",
//               "format" : "integer"
//     }] },
//     "dataStreamId": "derived:com.google.activity.segment:com.google.android.gms:InFocus:InFocus M808:2efec051:from_activity_samples\u003c-derived:com.google.activity.samples:com.google.android.gms:InFocus:InFocus M808:2efec051:detailed",
//     "dataStreamName" : "from_activity_samples\u003c-derived:com.google.activity.samples:com.google.android.gms:InFocus:InFocus M808:2efec051:detailed",
//     "dataType" : { "name": "com.google.activity.segment",
//     "field" : [{
//          "name": "activity",
//               "format" : "integer"
//     }] },
//     "dataStreamId": "derived:com.google.activity.segment:com.google.android.gms:merge_activity_segments",
//     "dataStreamName" : "merge_activity_segments",
//     "dataType" : { "name": "com.google.activity.segment",
//     "field" : [{
//          "name": "activity",
//          "format" : "integer"
//     }] },
//     "dataStreamId" : "derived:com.google.activity.segment:com.google.android.gms:platform_activity_segments",
//     "dataStreamName" : "platform_activity_segments",
//     "dataType" : { "name": "com.google.activity.segment",
//     "field" : [{
//          "name": "activity",
//          "format" : "integer"
//     }]
//com.google.calories.expended            Total calories expended over a time interval.                    Activity       calories( float—kcal )
//        "dataStreamId": "derived:com.google.calories.expended:com.google.android.gms:from_activities",
//        "dataStreamName": "from_activities",
//        "dataType": { "name": "com.google.calories.expended",
//         "field": [ {
//           "name": "calories",
//           "format": "floatPoint"
//          } ] },
//        "dataStreamId": "derived:com.google.calories.expended:com.google.android.gms:from_bmr",
//        "dataStreamName": "from_bmr",
//        "dataType": { "name": "com.google.calories.expended",
//         "field": [ {
//           "name": "calories",
//           "format": "floatPoint"
//          } ] },
//        "dataStreamId": "derived:com.google.calories.expended:com.google.android.gms:merge_calories_expended",
//        "dataStreamName": "merge_calories_expended",
//        "dataType": { "name": "com.google.calories.expended",
//         "field": [ {
//           "name": "calories",
//           "format": "floatPoint"
//          } ] },
//        "dataStreamId": "derived:com.google.calories.expended:com.google.android.gms:platform_calories_expended",
//        "dataStreamName": "platform_calories_expended",
//        "dataType": { "name": "com.google.calories.expended",
//         "field": [ {
//           "name": "calories",
//           "format": "floatPoint"
//          } ] },
//com.google.calories.bmr               ???.                                                             Activity       calories( float—kcal )
//     "dataStreamId": "derived:com.google.calories.bmr:com.google.android.gms:from_height&weight",
//     "dataStreamName" : "from_height&weight",
//     "dataType" : { "name": "com.google.calories.bmr",
//     "field" : [{
//          "name": "calories",
//          "format" : "floatPoint"
//     }] },
//     "dataStreamId": "derived:com.google.calories.bmr:com.google.android.gms:merged",
//     "dataStreamName" : "merged",
//     "dataType" : { "name": "com.google.calories.bmr",
//     "field" : [{
//          "name": "calories",
//          "format" : "floatPoint"
//     }] },
//com.google.cycling.pedaling.cadence     Instantaneous pedaling rate in crank revolutions per minute.     Activity       rpm( float—rpm )
//com.google.cycling.wheel_revolution.rpm Instantaneous wheel speed.                                       Location       rpm( float—rpm )
//com.google.distance.delta               Distance covered since the last reading.                         Location       distance( float—meters )
//     "dataStreamId": "derived:com.google.distance.delta:com.google.android.gms:InFocus:InFocus M808:2efec051:from_activity\u003c-raw:com.google.location.sample:com.google.android.gms:InFocus:InFocus M808:2efec051:live_location",
//     "dataStreamName" : "from_activity\u003c-raw:com.google.location.sample:com.google.android.gms:InFocus:InFocus M808:2efec051:live_location",
//     "dataType" : { "name": "com.google.distance.delta",
//     "field" : [{
//          "name": "distance",
//          "format" : "floatPoint"
//     }] },
//     "dataStreamId": "derived:com.google.distance.delta:com.google.android.gms:InFocus:InFocus M808:2efec051:from_location\u003c-raw:com.google.location.sample:com.google.android.gms:InFocus:InFocus M808:2efec051:live_location",
//     "dataStreamName" : "from_location\u003c-raw:com.google.location.sample:com.google.android.gms:InFocus:InFocus M808:2efec051:live_location",
//     "dataType" : { "name": "com.google.distance.delta",
//     "field" : [{
//          "name": "distance",
//          "format" : "floatPoint"
//     }] },
//     "dataStreamId": "derived:com.google.distance.delta:com.google.android.gms:from_high_accuracy_location\u003c-derived:com.google.location.sample:com.google.android.gms:merge_high_fidelity",
//     "dataStreamName" : "from_high_accuracy_location\u003c-derived:com.google.location.sample:com.google.android.gms:merge_high_fidelity",
//     "dataType" : { "name": "com.google.distance.delta",
//     "field" : [{
//          "name": "distance",
//          "format" : "floatPoint"
//     }] },
//     "dataStreamId": "derived:com.google.distance.delta:com.google.android.gms:from_steps\u003c-merge_step_deltas",
//     "dataStreamName" : "from_steps\u003c-merge_step_deltas",
//     "dataType" : { "name": "com.google.distance.delta",
//     "field" : [{
//          "name": "distance",
//          "format" : "floatPoint"
//     }] },
//     "dataStreamId": "derived:com.google.distance.delta:com.google.android.gms:high_fidelity_from_activity\u003c-derived:com.google.location.sample:com.google.android.gms:merge_high_fidelity",
//     "dataStreamName" : "high_fidelity_from_activity\u003c-derived:com.google.location.sample:com.google.android.gms:merge_high_fidelity",
//     "dataType" : { "name": "com.google.distance.delta",
//     "field" : [{
//          "name": "distance",
//          "format" : "floatPoint"
//     }] },
//     "dataStreamId": "derived:com.google.distance.delta:com.google.android.gms:merge_distance_delta",
//     "dataStreamName" : "merge_distance_delta",
//     "dataType" : { "name": "com.google.distance.delta",
//     "field" : [{
//          "name": "distance",
//          "format" : "floatPoint"
//     }] },
//     "dataStreamId": "derived:com.google.distance.delta:com.google.android.gms:platform_distance_delta",
//     "dataStreamName" : "platform_distance_delta",
//     "dataType" : { "name": "com.google.distance.delta",
//     "field" : [{
//          "name": "distance",
//          "format" : "floatPoint"
//     }] },
//     "dataStreamId": "derived:com.google.distance.delta:com.google.android.gms:pruned_distance",
//     "dataStreamName" : "pruned_distance",
//     "dataType" : { "name": "com.google.distance.delta",
//     "field" : [{
//          "name": "distance",
//          "format" : "floatPoint"
//     }] },
//com.google.heart_rate.bpm               Heart rate in beats per minute.                                  Body           bpm( float—bpm )
//com.google.height                       The user's height, in meters.                                    Body           height (float—meters) 
//     "dataStreamId": "derived:com.google.height:com.google.android.gms:merge_height",
//     "dataStreamName" : "merge_height",
//     "dataType" : { "name": "com.google.height",
//     "field" : [{
//          "name": "height",
//          "format" : "floatPoint"
//     }] },
//     "dataStreamId": "raw:com.google.height:com.google.android.apps.fitness:InFocus:InFocus M808:2efec051:user_input",
//     "dataStreamName" : "user_input",
//     "dataType" : { "name": "com.google.height",
//     "field" : [{
//          "name": "height",
//          "format" : "floatPoint"
//     }] },
//com.google.location.sample              The user's current location.                                     Location       latitude (float—degrees)
//                                                                                                                        longitude( float—degrees )
//                                                                                                                        accuracy( float—meters )
//                                                                                                                        altitude( float—meters )
//     "dataStreamId": "derived:com.google.location.sample:com.google.android.gms:merge_high_fidelity",
//     "dataStreamName" : "merge_high_fidelity",
//     "dataType" : { "name": "com.google.location.sample",
//     "field" : [{
//          "name": "latitude",
//          "format" : "floatPoint"
//     }, {
//          "name": "longitude",
//          "format" : "floatPoint"
//     }, {
//          "name": "accuracy",
//          "format" : "floatPoint"
//     }, {
//          "name": "altitude",
//          "format" : "floatPoint",
//          "optional" : true
//     } ] },
//     "dataStreamId": "derived:com.google.location.sample:com.google.android.gms:merge_location_samples",
//     "dataStreamName" : "merge_location_samples",
//     "dataType" : { "name": "com.google.location.sample",
//     "field" : [{
//          "name": "latitude",
//          "format" : "floatPoint"
//     }, {
//          "name": "longitude",
//          "format" : "floatPoint"
//     }, {
//          "name": "accuracy",
//          "format" : "floatPoint"
//     }, {
//          "name": "altitude",
//          "format" : "floatPoint",
//          "optional" : true
//     } ] },
//     "dataStreamId": "raw:com.google.location.sample:com.google.android.gms:InFocus:InFocus M808:2efec051:live_location",
//     "dataStreamName" : "live_location",
//     "dataType" : { "name": "com.google.location.sample",
//     "field" : [{
//          "name": "latitude",
//          "format" : "floatPoint"
//     }, {
//          "name": "longitude",
//          "format" : "floatPoint"
//     }, {
//          "name": "accuracy",
//          "format" : "floatPoint"
//     }, {
//          "name": "altitude",
//          "format" : "floatPoint",
//          "optional" : true
//     } ] },
//com.google.nutrition                    Food item information                                            Nutrition      nutrients( Map<String, float>—calories / grams / IU ) 
//                                                                                                                        meal_type( int—enum )
//                                                                                                                        food_item( String—n / a )
//com.google.power.sample                 Instantaneous power generated while performing an activity.      Activity       watts( float—watts )
//com.google.speed                        Instantaneous speed over ground.                                 Location       speed( float—m / s )
//     "dataStreamId": "derived:com.google.speed:com.google.android.gms:InFocus:InFocus M808:2efec051:live_gps_speed",
//     "dataStreamName" : "live_gps_speed",
//     "dataType" : { "name": "com.google.speed",
//     "field" : [{
//          "name": "speed",
//          "format" : "floatPoint"
//     }] },
//     "dataStreamId": "derived:com.google.speed:com.google.android.gms:merge_speed",
//     "dataStreamName" : "merge_speed",
//     "dataType" : { "name": "com.google.speed",
//     "field" : [{
//          "name": "speed",
//          "format" : "floatPoint"
//     }] },
//     "dataStreamId": "derived:com.google.speed:com.google.android.gms:smoothed_speed\u003c-merge_speed",
//     "dataStreamName" : "smoothed_speed\u003c-merge_speed",
//     "dataType" : { "name": "com.google.speed",
//     "field" : [{
//          "name": "speed",
//          "format" : "floatPoint"
//     }] },
//com.google.step_count.cadence           Instantaneous cadence in steps per minute.                       Activity       rpm( float—steps / min )
//     "dataStreamId": "derived:com.google.step_count.cadence:com.google.android.gms:InFocus:InFocus M808:2efec051:derive_step_cadence\u003c-derived:com.google.step_count.cumulative:com.google.android.gms:InFocus:InFocus M808:2efec051:soft_step_counter",
//     "dataStreamName" : "derive_step_cadence\u003c-derived:com.google.step_count.cumulative:com.google.android.gms:InFocus:InFocus M808:2efec051:soft_step_counter",
//     "dataType" : { "name": "com.google.step_count.cadence",
//     "field" : [{
//          "name": "rpm",
//          "format" : "floatPoint"
//     }] },
//com.google.step_count.delta             Number of new steps since the last reading.                      Activity       steps( int—count )
//     "dataStreamId": "derived:com.google.step_count.delta:com.google.android.gms:InFocus:InFocus M808:2efec051:derive_step_deltas\u003c-derived:com.google.step_count.cumulative:com.google.android.gms:InFocus:InFocus M808:2efec051:soft_step_counter",
//     "dataStreamName" : "derive_step_deltas\u003c-derived:com.google.step_count.cumulative:com.google.android.gms:InFocus:InFocus M808:2efec051:soft_step_counter",
//     "dataType" : { "name": "com.google.step_count.delta",
//     "field" : [{
//          "name": "steps",
//          "format" : "integer"
//     }] },
//     "dataStreamId": "derived:com.google.step_count.delta:com.google.android.gms:estimated_steps",
//     "dataStreamName" : "estimated_steps",
//     "dataType" : { "name": "com.google.step_count.delta",
//     "field" : [{
//          "name": "steps",
//          "format" : "integer"
//     }] },
//     "dataStreamId": "derived:com.google.step_count.delta:com.google.android.gms:merge_step_deltas",
//     "dataStreamName" : "merge_step_deltas",
//     "dataType" : { "name": "com.google.step_count.delta",
//     "field" : [{
//          "name": "steps",
//          "format" : "integer"
//     }] },
//com.google.step_count.cumulative      ???                                                              Activity       steps( int—count )
//     "dataStreamId": "derived:com.google.step_count.cumulative:com.google.android.gms:InFocus:InFocus M808:2efec051:soft_step_counter",
//     "dataStreamName" : "soft_step_counter",
//     "dataType" : { "name": "com.google.step_count.cumulative",
//     "field" : [{
//          "name": "steps",
//          "format" : "integer"
//     }] },
//com.google.weight                       The user's weight.                                               Body           weight (float—kg) 
//     "dataStreamId": "derived:com.google.weight:com.google.android.gms:merge_weight",
//     "dataStreamName" : "merge_weight",
//     "dataType" : { "name": "com.google.weight",
//     "field" : [{
//          "name": "weight",
//          "format" : "floatPoint"
//     }] },
//     "dataStreamId": "raw:com.google.weight:com.google.android.apps.fitness:user_input",
//     "dataStreamName" : "user_input",
//     "dataType" : { "name": "com.google.weight",
//     "field" : [{
//          "name": "weight",
//          "format" : "floatPoint"
//     }] },
//com.google.activity.exercise            A user's continuous workout routine.                             Activity       exercise (int—enum)
//                                                                                                                        repetitions( int—count )
//                                                                                                                        resistance type( int—enum )
//                                                                                                                        resistance( float—kg )
//                                                                                                                        duration( int—milliseconds )
