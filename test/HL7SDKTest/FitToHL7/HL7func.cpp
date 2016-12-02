/*
 * This file is part of Auriga HL7 library.
 *
 * Auriga HL7 library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Auriga HL7 library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Auriga HL7 library.  If not, see <http://www.gnu.org/licenses/>.
 */

//#include "hl7socket.h"
#include "hl7mllp.h"
//#include "pipe.h"
#include <Windows.h>
#include <string>
#include <sys/timeb.h>
#include "common.h"
#include "message/ORU_R01.h"
#include "message/QRY_A19.h"
#include "message/ADR_A19.h"
#include "message/ACK.h"
#include "ObjToPipe.h"
#include "HL7Object.h"
#include "dataencode.h"
#include "rapidjson/document.h"
#include "RESTProcess.h"
#include "HL7func.h"
#include "utils.h"

std::string encodeTimeStamp( SYSTEMTIME& st, short zone )
{
     std::string encoded_val;
     try
     {
          if ( !encodeTS( encoded_val, st.wYear, st.wMonth, st.wDay,
               st.wHour, st.wMinute, st.wSecond, st.wMilliseconds, zone ) )
          {
               encoded_val = "000000000000";
          }
     }
     catch ( ... )
     {
          printf( "ERROR constructing TS data.\n" );
          encoded_val = "000000000000";
     }
     return encoded_val;
}
bool initBaseMSH( HL7_24::MSH* msh )
{
     bool res = false;
     try
     {
          msh->getEncodingCharacters()->setData( "^~\\&" );
          msh->getSendingApplication()->getNamespaceID()->setData( "FitToHIS" );
          msh->getReceivingApplication()->getNamespaceID()->setData( "HIS" );
          msh->getMessageType()->getMessageType()->setData( "ORU" );
          msh->getMessageType()->getTriggerEvent()->setData( "R01" );
          msh->getMessageType()->getMessageStructure()->setData( "ORU_R01" );
          msh->getProcessingID()->getProcessingID()->setData( "T" );
          msh->getAcceptAcknowledgmentType()->setData( "AL" );
          msh->getApplicationAcknowledgmentType()->setData( "AL" );
          msh->getCountryCode()->setData( "RUS" );
          msh->getCharacterSet()->setData( "ASCII" );
          msh->getVersionID()->getVID_1()->setData( "2.4" );
          res = true;
     }
     catch ( ... )
     {
          printf( "ERROR constructing base MSH segment.\n" );
     }
     return res;
}

bool initBaseOBR( HL7_24::OBR* obr )
{
     bool res = false;
     try
     {
          obr->getFillerOrderNumber()->getNamespaceID()->setData( "FitToHL7" );
          obr->getUniversalServiceIdentifier()->getIdentifier()->setData( "GoogleFit" );
          //9 20 CQ O 00243 Collection Volume *
          //13 300 ST O 00247 Relevant Clinical Info.
          obr->getDiagnosticServSectID()->setData( "PHY" );
          obr->getResultStatus()->setData( "F" );
          //27 200 TQ O Y 00221 Quantity / Timing
          //45 250 CE O Y 0340 01316 Procedure Code Modifier
          res = true;
     }
     catch ( ... )
     {
          printf( "ERROR constructing base OBR segment.\n" );
     }
     return res;
}

bool initMSH( HL7_24::MSH* msh, std::string curTime, FIT_SESSION* pSession )
{
     bool res = false;
     try
     {
          char number[ 25 ];
          msh->getDateTimeOfMessage()->getTimeOfAnEvent()->setData( curTime );
          sprintf( number, "__%d", pSession->hl7req_num );
          pSession->hl7req_num++;
          std::string tokenReq = pSession->state + std::string( number );
          msh->getMessageControlID()->setData( tokenReq );
          //14 180 ST O 00014 Continuation Pointer
          res = true;
     }
     catch ( ... )
     {
          printf( "ERROR constructing real MSH segment.\n" );
     }
     return res;
}

bool initOBR( HL7_24::OBR* obr, std::string startTime, std::string endTime, char* dataStreamName )
{
     bool res = false;
     try
     {
          std::string tokenReq = "OBR_" + endTime;
          obr->getFillerOrderNumber()->getEntityIdentifier()->setData( tokenReq );
          obr->getObservationDateTime()->getTimeOfAnEvent()->setData( startTime );
          obr->getObservationEndDateTime()->getTimeOfAnEvent()->setData( endTime );
          //9 20 CQ O 00243 Collection Volume *
          //13 300 ST O 00247 Relevant Clinical Info.
          obr->getResultsRptStatusChngDateTime()->getTimeOfAnEvent()->setData( endTime );
          //27 200 TQ O Y 00221 Quantity / Timing
          obr->getProcedureCode()->getIdentifier()->setData( dataStreamName ); // dataStreamName
          //45 250 CE O Y 0340 01316 Procedure Code Modifier
          res = true;
     }
     catch ( ... )
     {
          printf( "ERROR constructing real OBR segment.\n" );
          res = false;
     }
     return res;
}

std::string GoogleFitValueToHL7( VALUE_TYPE type )
{
     switch ( type )
     {
     case STRING_TYPE:
          return "ST";
     case INTEGER_TYPE:
     case FLOATPOINT_TYPE:
          return "NM";
     case INTEGER_LIST_TYPE:
     case FLOAT_LIST_TYPE:
          return "NA";
     case MAP_TYPE:
          return "CE";
     default:
          return "ED";
     }
}

bool initOBX( HL7_24::OBX* obx, int index, int val_index, TYPE_DATA* val_map, int map_index,
     __int64 ft_offset, short zone, const rapidjson::Value& ds, const rapidjson::Value& point )
{
     bool res = false;
     SYSTEMTIME syst;
     try
     {
          if ( !ds.HasMember( "dataType" ) || !ds[ "dataType" ].HasMember( "name" ) || !point.HasMember( "value" ) )
               return res;
          toStr( *obx->getSetIDOBX(), index );
          obx->getValueType()->setData( GoogleFitValueToHL7( val_map[ val_index ].type ) );
          std::string tokenReq = std::string( "ANT_" ) + ds[ "dataType" ][ "name" ].GetString(); //CH7-13
          obx->getObservationIdentifier()->getIdentifier()->setData( tokenReq );
          obx->getObservationIdentifier()->getText()->setData( getGFitSourceDescription( ds[ "dataType" ][ "name" ].GetString() ) );
          obx->getObservationSubId()->setData( *val_map[ val_index ].name );
          setVariesTypeData( obx->getObservationValue(), val_map[ val_index ].type, point[ "value" ][ val_index ], map_index );
          obx->getUnits()->getIdentifier()->setData( getUnitsByGFitSource( ds[ "dataType" ][ "name" ].GetString() ) );
          obx->getUnits()->getText()->setData( getUnitsDescriptionByGFitSource( ds[ "dataType" ][ "name" ].GetString() ) );
          //7 60 ST O 00575 References Range
          obx->getObservationResultStatus()->setData( "F" );
          if ( point.HasMember( "endTimeNanos" ) )
          {
               __int64 time_nano;
               if ( point["endTimeNanos"].IsInt64() )
                    time_nano = point[ "endTimeNanos" ].GetInt64();
               else
               {
                    std::string param = point[ "endTimeNanos" ].GetString();
                    //if ( point[ "endTimeNanos" ].IsString() )
                    if ( !parseInt64( time_nano, param, 10 ) )
                         return res;
               }
               time_nano = time_nano / 100 + ft_offset;
               FileTimeToSystemTime( (FILETIME*)&time_nano, &syst );
               std::string dt_observ = encodeTimeStamp( syst, zone );
               obx->getDateTimeOfTheAnalysis()->getTimeOfAnEvent()->setData( dt_observ );
               //obx->getDateTimeOfTheObservation()->getTimeOfAnEvent()->setData( dt_observ );
          }
          if ( point.HasMember( "startTimeNanos" ) )
          {
               __int64 time_nano;
               if ( point[ "startTimeNanos" ].IsInt64() )
                    time_nano = point[ "startTimeNanos" ].GetInt64();
               else
               {
                    std::string param = point[ "startTimeNanos" ].GetString();
                    //if ( point[ "endTimeNanos" ].IsString() )
                    if ( !parseInt64( time_nano, param, 10 ) )
                         return res;
               }
               time_nano = time_nano / 100 + ft_offset;
               FileTimeToSystemTime( (FILETIME*)&time_nano, &syst );
               std::string dt_observ = encodeTimeStamp( syst, zone );
               obx->getDateTimeOfTheObservation()->getTimeOfAnEvent()->setData( dt_observ );
          }
          if ( ds.HasMember( "application" ) )
          {
               obx->getProducerSID()->getIdentifier()->setData(
                    ( ( ds[ "application" ].HasMember( "name" ) ) ? ds[ "application" ][ "name" ].GetString() : "" ) + 
                    std::string( "_" ) +
                    ( ( ds[ "application" ].HasMember( "packageName" ) ) ? ds[ "application" ][ "packageName" ].GetString() : "" ) + 
                    std::string( "_" ) +
                    ( ( ds[ "application" ].HasMember( "version" ) ) ? ds[ "application" ][ "version" ].GetString() : "" ) );
          }
          if ( ds.HasMember( "device" ) )
          {
               obx->getEquipmentInstanceIdentifier()->getEntityIdentifier()->setData(
                    ( ( ds[ "device" ].HasMember( "type" ) ) ? ds[ "device" ][ "type" ].GetString() : "" ) + 
                    std::string( "_" ) +
                    ( ( ds[ "device" ].HasMember( "manufacturer" ) ) ? ds[ "device" ][ "manufacturer" ].GetString() : "" ) + 
                    std::string( "_" ) +
                    ( ( ds[ "device" ].HasMember( "model" ) ) ? ds[ "device" ][ "model" ].GetString() : "" ) + 
                    std::string( "_" ) +
                    ( ( ds[ "device" ].HasMember( "version" ) ) ? ds[ "device" ][ "version" ].GetString() : "" ) );
          }
          res = true;
     }
     catch ( ... )
     {
          printf( "ERROR constructing real OBX segment.\n" );
     }
     return res;
}

bool initQRD( HL7_24::QRD* qrd, std::string clientId, FIT_SESSION* session )
{
     bool res = false;
     char number[ 25 ];
     std::string data;
     __timeb64 tm;

     try
     {
          qrd->getQueryFormatCode()->setData( "R" );
          qrd->getQueryPriority()->setData( "I" );
          qrd->getQuantityLimitedRequest()->getQuantity()->setData( "1" );
          qrd->getQuantityLimitedRequest()->getUnits()->getIdentifier()->setData( "RD" );
          qrd->getWhatSubjectFilter()->getIdentifier()->setData( "APN" );
          qrd->getQueryResultsLevel()->setData( "R" );
          qrd->getWhoSubjectFilter( 0 )->getIDNumber()->setData( clientId );
          sprintf( number, "__%d", session->hl7req_num );
          session->hl7req_num++;
          data = std::string( "QRY_" ) + session->state + std::string( number );
          qrd->getQueryID()->setData( data );
          _ftime64( &tm );
          data = encodeTimeStamp( session->endTime, tm.timezone );
          qrd->getQueryDateTime()->getTimeOfAnEvent()->setData( data );
          res = true;
     }
     catch ( ... )
     {
          printf( "ERROR constructing real QRD segment.\n" );
     }
     return res;
}

bool initPsevdoPID( std::string clientId, FIT_SESSION* session, HL7_24::PID* pid )
{
     //HL7_24::PID pid;
     try
     {
          pid->getSetIDPID()->setData( "1" );
          pid->getPatientIdentifierList( 0 )->getID()->setData( clientId );
          pid->getIdentityReliabilityCode( 0 )->setData( "AL" );
          pid->getPatientName( 0 )->getFamilyName()->getSurname()->setData( clientId );
          pid->getPatientName( 0 )->getNameTypeCode()->setData( "S" );
     }
     catch ( ... ) { }
     return true;
}

bool initBaseORUMessageData( HL7_24::ORU_R01& oru, std::string clientId, FIT_SESSION* session )
{
     // MSH segment definitions
     if ( !initBaseMSH( oru.getMSH_1() ) )
          return false;
     try
     {
          if ( !getClientPID( *oru.getMSH_1(), clientId, session, oru.getPATIENT_RESULT( 0 )->getPATIENT()->getPID_4() ) )
               throw;
     }
     catch ( ... )
     {
          printf( "ERROR constructing base PID segment.\n" );
          return false;
     }
     try
     {
          if ( !initBaseOBR( oru.getPATIENT_RESULT( 0 )->getORDER_OBSERVATION( 0 )->getOBR_29() ) )
               throw;
     }
     catch ( ... )
     {
          printf( "ERROR constructing base PID segment.\n" );
          return false;
     }
     return true;
}

bool initORUMessageData( HL7_24::ORU_R01& oru, FIT_SESSION* session, 
     char* dataStreamName, const rapidjson::Value& ds, rapidjson::Document& dataset )
{
     // Encode TimeStamps
     __timeb64 tm;
     _ftime64( &tm );
     std::string endTime = encodeTimeStamp( session->endTime, tm.timezone );
     std::string startTime = encodeTimeStamp( session->startTyme, tm.timezone );

     // Create map value types
     int val_map_size = 0;
     if ( !ds.HasMember( "dataType" ) )
          return false;
     TYPE_DATA* val_map = getValTypeMap( ds[ "dataType" ], &val_map_size );
     if ( !val_map )
          return false;

     // Init MSH segment
     if ( !initMSH( oru.getMSH_1(), endTime, session ) )
     {
          freeMap( val_map, val_map_size );
          return false;
     }

     // Init OBR segment
     try
     {
          if ( !initOBR( oru.getPATIENT_RESULT( 0 )->getORDER_OBSERVATION( 0 )->getOBR_29(), startTime, endTime, dataStreamName ) )
               throw;
     }
     catch ( ... )
     {
          printf( "ERROR constructing real OBR segment.\n" );
          freeMap( val_map, val_map_size );
          return false;
     }

     // Init OBX segments with real data
     try
     {
          if ( !dataset.HasMember( "point" ) )
               return false;
          const rapidjson::Value& point_arr = dataset[ "point" ];
          if ( !point_arr.IsArray() || !point_arr.Size() )
               return false;
          for ( int point_count = 0, whole_count = 0; point_count < (int)point_arr.Size(); point_count++ )
          {
               const rapidjson::Value& point = point_arr[ point_count ];
               if ( !point.HasMember( "value" ) )
                    continue;
               for ( int value_count = 0;
                    ( value_count < (int)point[ "value" ].Size() ) && ( value_count < val_map_size );
                    value_count++ )
               {
                    if ( ( val_map[ value_count ].type == MAP_TYPE ) &&
                         point[ "value" ][ value_count ].HasMember( "mapVal" ) &&
                         point[ "value" ][ value_count ][ "mapVal" ].IsArray() )
                    {
                         for ( int map_index = 0;
                              map_index < (int)point[ "value" ][ value_count ][ "mapVal" ].Size();
                              map_index++, whole_count++ )
                         {
                              if ( !initOBX( oru.getPATIENT_RESULT( 0 )->getORDER_OBSERVATION( 0 )->getOBSERVATION( whole_count )->getOBX_40(),
                                   whole_count, value_count, val_map, map_index, *( (__int64*)&session->ft_offset ), tm.timezone, ds, point ) )
                                   throw;
                         }
                    }
                    else
                    {
                         if ( !initOBX( oru.getPATIENT_RESULT( 0 )->getORDER_OBSERVATION( 0 )->getOBSERVATION( whole_count )->getOBX_40(),
                              whole_count, value_count, val_map, 0, *( (__int64*)&session->ft_offset ), tm.timezone, ds, point ) )
                              throw;
                         whole_count++;
                    }
               }
          }
     }
     catch ( ... )
     {
          printf( "ERROR constructing real OBR segment.\n" );
          freeMap( val_map, val_map_size );
          return false;
     }
     freeMap( val_map, val_map_size );
     return true;
}

void freeMap( TYPE_DATA* data, int size )
{
     for ( int i = 0; i < size; i++ )
     {
          if ( data[ i ].name )
               delete data[ i ].name;
     }
     free( data );
}

std::string getGFitSourceDescription( std::string stream )
{
     if ( stream == "com.google.activity.samples" )
          return "Enumeration samples of activity.";
     if ( stream == "com.google.activity.sample" )
          return "Instantaneous sample of the current activity.";
     if ( stream == "com.google.activity.segment" )
          return "Continuous time interval of a single activity.";
     if ( stream == "com.google.calories.expended" )
          return "Total calories expended over a time interval.";
     if ( stream == "com.google.calories.bmr" )
          return "";
     if ( stream == "com.google.cycling.pedaling.cadence" )
          return "Instantaneous pedaling rate in crank revolutions per minute.";
     if ( stream == "com.google.cycling.wheel_revolution.rpm" )
          return "Instantaneous wheel speed.";
     if ( stream == "com.google.distance.delta" )
          return "Distance covered since the last reading.";
     if ( stream == "com.google.heart_rate.bpm" )
          return "Heart rate in beats per minute.";
     if ( stream == "com.google.height" )
          return "Height of the user , in meters.";
     if ( stream == "com.google.location.sample" )
          return "Current location of the user.";
     if ( stream == "com.google.nutrition" )
          return "Food item information";
     if ( stream == "com.google.power.sample" )
          return "Instantaneous power generated while performing an activity.";
     if ( stream == "com.google.speed" )
          return "Instantaneous speed over ground.";
     if ( stream == "com.google.step_count.cadence" )
          return "Instantaneous cadence in steps per minute.";
     if ( stream == "com.google.step_count.delta" )
          return "Number of new steps since the last reading.";
     if ( stream == "com.google.step_count.cumulative" )
          return "Cumulative steps count";
     if ( stream == "com.google.weight" )
          return "Weight of the user.";
     if ( stream == "com.google.activity.exercise" )
          return "Continuous workout routine of a user.";
     return "Custome type.";
}

std::string getUnitsByGFitSource( std::string stream )
{
     if ( stream == "com.google.activity.sample" )
          return "";
     if ( stream == "com.google.activity.segment" )
          return "";
     if ( stream == "com.google.calories.expended" )
          return "kcal"; // 4,1868 kJ (êÄæîóëü)
     if ( stream == "com.google.calories.bmr" )
          return "kcal"; // 4,1868 kJ (êÄæîóëü)
     if ( stream == "com.google.cycling.pedaling.cadence" )
          return "rpm"; // ( 1 / 60 ) Hz
     if ( stream == "com.google.cycling.wheel_revolution.rpm" )
          return "rpm"; // ( 1 / 60 ) Hz
     if ( stream == "com.google.distance.delta" )
          return "m";
     if ( stream == "com.google.heart_rate.bpm" )
          return "bpm";
     if ( stream == "com.google.height" )
          return "m";
     if ( stream == "com.google.location.sample" )
          return ""; // deg, deg, m, m
     if ( stream == "com.google.nutrition" )
          return ""; // nutrients( Map<String, float>—calories / grams / IU ); meal_type( int—enum ), food_item( String—n / a )
     if ( stream == "com.google.power.sample" )
          return "w";
     if ( stream == "com.google.speed" )
          return "m/s";
     if ( stream == "com.google.step_count.cadence" )
          return "steps/min";
     if ( stream == "com.google.step_count.delta" )
          return "";
     if ( stream == "com.google.step_count.cumulative" )
          return "";
     if ( stream == "com.google.weight" )
          return "kg";
     if ( stream == "com.google.activity.exercise" )
          return "";
     return "";
}

std::string getUnitsDescriptionByGFitSource( std::string stream )
{
     if ( stream == "com.google.activity.sample" )
          return "Activity enum";
     if ( stream == "com.google.activity.segment" )
          return "Activity enum";
     if ( stream == "com.google.calories.expended" )
          return "calories";
     if ( stream == "com.google.calories.bmr" )
          return "calories";
     if ( stream == "com.google.cycling.pedaling.cadence" )
          return "revolutions per minute";
     if ( stream == "com.google.cycling.wheel_revolution.rpm" )
          return "revolutions per minute"; 
     if ( stream == "com.google.distance.delta" )
          return "distance";
     if ( stream == "com.google.heart_rate.bpm" )
          return "beats per minute";
     if ( stream == "com.google.height" )
          return "";
     if ( stream == "com.google.location.sample" )
          return "";
     if ( stream == "com.google.nutrition" )
          return "";
     if ( stream == "com.google.power.sample" )
          return "";
     if ( stream == "com.google.speed" )
          return "speed";
     if ( stream == "com.google.step_count.cadence" )
          return "steps per minute.";
     if ( stream == "com.google.step_count.delta" )
          return "steps";
     if ( stream == "com.google.step_count.cumulative" )
          return "steps";
     if ( stream == "com.google.weight" )
          return "weight.";
     if ( stream == "com.google.activity.exercise" )
          return ""; // exercise (int—enum); repetitions( int—count ); resistance type( int—enum ); resistance( float—kg ); duration( int—milliseconds )
     return "";
}

bool getClientPID( HL7_24::MSH& head, std::string clientId, FIT_SESSION* session, HL7_24::PID* res_pid )
{
     HL7_24::PID pid;
     HL7_24::QRY_A19 qry;
     HL7_24::ADR_A19 adr;
     std::string data;
     std::string param1;
     std::string param2;
     bool bRes = false;

     try
     {
          do
          {
               // Construct QRY message for PID request
               // Copy MSH segment
               *qry.getMSH_1() = head;
               // Set real message parameters
               qry.getMSH_1()->getMessageType()->getMessageType()->setData( "QRY" );
               qry.getMSH_1()->getMessageType()->getTriggerEvent()->setData( "A19" );
               qry.getMSH_1()->getMessageType()->getMessageStructure()->setData( "QRY_A19" );
               // Construct QRD segment with request parameters or construct psevdo PID segment if error

               // Init MSH segment
               __timeb64 tm;
               _ftime64( &tm );
               std::string endTime = encodeTimeStamp( session->endTime, tm.timezone );
               if ( !initMSH( qry.getMSH_1(), endTime, session ) )
                    break;

               HL7_24::QRD* qrd = qry.getQRD_2();
               if ( !initQRD( qry.getQRD_2(), clientId, session ) )
                    break;
               // Send QRY message to HIS
               HL7MLLP sock( session->HISHost, session->HISPortIn );
               msgToPipe( &qry, data );
               if ( session->bDbg )
               {
                    char head[] = "\nQRY_A19:\n";
                    char back[] = "\n\n";
                    if ( !session->pDebug )
                         session->pDebug = fopen( session->debug_file.c_str(), "w" );
                    if ( session->pDebug )
                    {
                         fputs( head, session->pDebug );
                         fputs( data.c_str(), session->pDebug );
                         fputs( back, session->pDebug );
                    }
                    fflush( session->pDebug );
               }
               sock.send_msg_mllp( data );
               // Receive HIS answer and construct ADR message
               sock.read_msg_mllp( data );
               if ( session->bDbg )
               {
                    char head[] = "\nADR_A19:\n";
                    char back[] = "\n\n";
                    if ( !session->pDebug )
                         session->pDebug = fopen( session->debug_file.c_str(), "w" );
                    if ( session->pDebug )
                    {
                         fputs( head, session->pDebug );
                         fputs( data.c_str(), session->pDebug );
                         fputs( back, session->pDebug );
                    }
                    fflush( session->pDebug );
               }
               pipeToMsg( &adr, data );
               // Check if there error
               adr.getMSA_2()->getAcknowledgementCode()->getData( data );
               if ( ( !icompare( data, "AA" ) ) && ( !icompare( data, "CA" ) ) )
               {
                    if ( adr.isERR_4() )
                    {
                         adr.getERR_4()->getErrorCodeAndLocation()->getSegmentID()->getData( param1 );
                         adr.getERR_4()->getErrorCodeAndLocation()->getSequence()->getData( param2 );
                         printf( "ERROR Acknowledgment code = <%s>, segment = <%s>, sequence = <%s>, field = <",
                              data.c_str(), param1.c_str(), param2.c_str() );
                         adr.getERR_4()->getErrorCodeAndLocation()->getFieldPosition()->getData( param1 );
                         adr.getERR_4()->getErrorCodeAndLocation()->getCodeIdentifyingError()->getIdentifier()->getData( param2 );
                         printf( "%s>; = %s .\n", param1.c_str(), param2.c_str() );
                    }
                    else
                    {
                         adr.getMSA_2()->getErrorCondition()->getIdentifier()->getData( param1 );
                         adr.getMSA_2()->getTextMessage()->getData( param2 );
                         printf( "ERROR Acknowledgment code = <%s>, Error Condition = <%s>, Text Message = <%s>.\n",
                              data.c_str(),
                              param1.c_str(),
                              param2.c_str() );
                    }
                    break;
               }
               adr.getMSA_2()->getMessageControlID()->getData( param1 );
               if ( !qry.getMSH_1()->getMessageControlID()->isEmpty() )
                    qry.getMSH_1()->getMessageControlID()->getData( param2 );
               else
                    param2 = "";
               if ( param1 != param2 )
               {
                    printf( "ERROR answer MessageControlID <%s> does not equal to request MessageControlID <%s>.\n", 
                         param1.c_str(), param2.c_str() );
                    break;
               }
               if ( ( !adr.isQUERY_RESPONSE( 0 ) ) || ( !adr.getQUERY_RESPONSE( 0 )->isPID_17() ) )
               {
                    data = "";
                    msgToPipe( &adr, data );
                    printf( "ERROR no PID segment in answer <%s>.\n", data.c_str() );
                    break;
               }
               *res_pid = *adr.getQUERY_RESPONSE( 0 )->getPID_17();
               bRes = true;
          } while ( 0 );
     }
     catch ( ... )
     {
     }
     if ( !bRes )
          initPsevdoPID( clientId, session, res_pid );
     return true;
}

bool sendORU( HL7_24::ORU_R01& oru, FIT_SESSION* session )
{
     bool res = false;
     std::string data;
     HL7_24::ACK ack;
     try
     {
          // Send QRY message to HIS
          HL7MLLP sock( session->HISHost, session->HISPortIn );
          msgToPipe( &oru, data );
          if ( session->bDbg )
          {
               char head[] = "\nORU_R01:\n";
               char back[] = "\n\n";
               if ( !session->pDebug )
                    session->pDebug = fopen( session->debug_file.c_str(), "w" );
               if ( session->pDebug )
               {
                    fputs( head, session->pDebug );
                    fputs( data.c_str(), session->pDebug );
                    fputs( back, session->pDebug );
               }
               fflush( session->pDebug );
          }
          sock.send_msg_mllp( data );
          // Receive HIS answer and construct ADR message
          sock.read_msg_mllp( data );
          if ( session->bDbg )
          {
               char head[] = "\nACK_R01:\n";
               char back[] = "\n\n";
               if ( !session->pDebug )
                    session->pDebug = fopen( session->debug_file.c_str(), "w" );
               if ( session->pDebug )
               {
                    fputs( head, session->pDebug );
                    fputs( data.c_str(), session->pDebug );
                    fputs( back, session->pDebug );
               }
               fflush( session->pDebug );
          }
          pipeToMsg( &ack, data );
          ack.getMSA_2()->getAcknowledgementCode()->getData( data );
          if ( ( !icompare( data, "AA" ) ) && ( !icompare( data, "CA" ) ) )
          {
               printf( "ERROR Acknowledgment code = <%s>, Error Condition = <", data.c_str() );
               ack.getMSA_2()->getErrorCondition()->getIdentifier()->getData( data );
               printf( "%s>, Text Message = <", data.c_str() );
               ack.getMSA_2()->getTextMessage()->getData( data );
               printf( "%s>.\n", data.c_str() );
               throw;
          }
          res = true;
     }
     catch ( ... )
     { 
          res = false;
     }
     return res;
}

bool setVariesTypeData( HL7Object* val, VALUE_TYPE type, const rapidjson::Value& json, int map_index )
{
     std::string data;
     switch ( type )
     { 
     case STRING_TYPE:
          if ( !json.HasMember( "stringVal" ) )
               return false;
          val->setData( json[ "stringVal" ].GetString() );
          return true;
     case INTEGER_TYPE:
          if ( !json.HasMember( "intVal" ) )
               return false;
          //val->setData( json[ "intVal" ].GetInt() );
          toStr( *val, json[ "intVal" ].GetInt() );
          return true;
     case FLOATPOINT_TYPE:
          if ( !json.HasMember( "fpVal" ) )
               return false;
          //val->setData( json[ "fpVal" ].GetString() );
          toStr( *val, json[ "fpVal" ].GetFloat() );
          return true;
     //case INTEGER_LIST_TYPE:
     //case FLOAT_LIST_TYPE:
     //     return "NA";
     case MAP_TYPE:
          {
               //HL7_24::CE ce;
               if ( !json.HasMember( "mapVal" ) || !json[ "mapVal" ].IsArray() || 
                    !json[ "mapVal" ][ map_index ].HasMember( "value" ) || !json[ "mapVal" ][ map_index ][ "value" ].HasMember( "fpVal" ) )
                    return false;
               //float flt = json[ "mapVal" ][ map_index ][ "value" ][ "fpVal" ].GetFloat();
               toStr( *( ( HL7_24::CE* )val )->getIdentifier(), (float)json[ "mapVal" ][ map_index ][ "value" ][ "fpVal" ].GetFloat() );
               if ( json[ "mapVal" ][ map_index ].HasMember( "key" ) )
                    ( ( HL7_24::CE* )val )->getText()->setData( json[ "mapVal" ][ map_index ][ "key" ].GetString() );

               //toStr( *ce.getIdentifier(), (float)json[ "mapVal" ][ map_index ][ "value" ][ "fpVal" ].GetFloat() );
               //if ( json[ "mapVal" ][ map_index ].HasMember( "key" ) )
               //     ce.getText()->setData( json[ "mapVal" ][ map_index ][ "key" ].GetString() );

               //Delimiter delim;
               //delim.config( &ce );
               //dataToPipe( &ce, data, delim );
               //val->setData( data );
          }
          return true;
     default:
          break;
     }
     return false;
}
