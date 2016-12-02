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

#include "common.h"
#include <Windows.h>
#include "pugixml.hpp"
#include "utils.h"
#include <string>
#include <algorithm>
#include "dataencode.h"


std::string FileTimeToNanoString( SYSTEMTIME* st, FILETIME* offset )
{
     FILETIME ft;
     char number[ 25 ];
     SystemTimeToFileTime( st, &ft );
     *( (__int64*)&ft ) = ( *( (__int64*)&ft ) - *( (__int64*)offset ) ) * 100;
     sprintf( number, "%I64d", *( (__int64*)&ft ) );
     return std::string( number );
}

void subMonth( SYSTEMTIME* time )
{
     if ( time->wMonth < 2 )
     {
          time->wYear--;
          time->wMonth = 12;
     }
     else
          time->wMonth--;
}

void subDay( SYSTEMTIME* time )
{
     if ( time->wDay < 2 )
     {
          subMonth( time );
          if ( ( time->wMonth == 4 ) || ( time->wMonth == 6 ) || ( time->wMonth == 9 ) || ( time->wMonth == 11 ) )
               time->wDay = 30;
          else
          {
               if ( time->wMonth != 2 )
                    time->wDay = 31;
               else
               {
                    if ( ( time->wYear & 3 ) == 3 )
                         time->wDay = 29;
                    else
                         time->wDay = 28;
               }
          }
     }
     else
          time->wDay--;
}

void subHour( SYSTEMTIME* time )
{
     if ( time->wHour < 1 )
     {
          subDay( time );
          time->wHour = 23;
     }
     else
          time->wHour--;
}

void subTimeInHour( int offset, SYSTEMTIME* time )
{
     FILETIME fTime;
     __int64 r_offset;
     SystemTimeToFileTime( time, &fTime );
     r_offset = offset * 36000000000;
     *((__int64*)&fTime) -= r_offset;
     FileTimeToSystemTime( &fTime, time );
     return;
}

VALUE_TYPE getType( std::string val )
{
     if ( val == "blob" )
          return BLOB_TYPE;
     if ( val == "floatList" )
          return FLOAT_LIST_TYPE;
     if ( val == "integer" )
          return INTEGER_TYPE;
     if ( val == "integerList" )
          return INTEGER_LIST_TYPE;
     if ( val == "floatPoint" )
          return FLOATPOINT_TYPE;
     if ( val == "map" )
          return MAP_TYPE;
     return STRING_TYPE;
}

void resetData( pFIT_SESSION pSession )
{
     if ( !pSession )
          return;
     if ( 0 != pSession->structed_data )
          delete pSession->structed_data;
     pSession->structed_data = NULL;
     pSession->dType = UNSORTED_DATA;
}

void initSession( FIT_SESSION& sessin )
{
     sessin.state = 0;
     sessin.code = 0;
     sessin.dType = UNSORTED_DATA;
     sessin.structed_data = 0;
     sessin.structed_len = 0;
     sessin.expires_in = 0;
     sessin.pDebug = 0;
     sessin.hl7req_num = 0;
     //sessin.chProxy = 0;

     // get epoch offset
     memset( &sessin.endTime, 0, sizeof( SYSTEMTIME ) );
     sessin.endTime.wYear = 1970;
     sessin.endTime.wMonth = 1;
     sessin.endTime.wDay = 1;
     sessin.endTime.wDayOfWeek = 4;
     SystemTimeToFileTime( &sessin.endTime, &sessin.ft_offset );

     // Get datasets time range
     GetSystemTime( &sessin.endTime );
     memcpy( &sessin.startTyme, &sessin.endTime, sizeof( SYSTEMTIME ) );
     subHour( &sessin.startTyme );

     //sessin.endTime.wHour = 20;
     //sessin.startTyme.wHour = 16;
     //FILETIME ft1;
     //FILETIME ft2;
     //SystemTimeToFileTime( &sessin.endTime, &ft1 );
     //SystemTimeToFileTime( &sessin.startTyme, &ft2 );
     //__int64 offset = *( (__int64*)&ft1 ) - *( (__int64*)&ft2 );
}

bool parsCommandLine( int argc, char* argv[], FIT_SESSION& sessin )
{
     for ( int i = 1; i < argc; i++ )
     {
          if ( !_strnicmp( argv[ i ], "--proxy=", 8 ) )
          {
               sessin.chProxy = argv[ i ] + 8;
               continue;
          }
          if ( !_strnicmp( argv[ i ], "--dbg", 5 ) )
          {
               if ( *( argv[ i ] + 5 ) == '=' )
                    sessin.debug_file = argv[ i ] + 6;
               else
                    sessin.debug_file = "fthtrace.txt";
               continue;
          }
          if ( !_strnicmp( argv[ i ], "--month", 7 ) )
          {
               subMonth( &sessin.startTyme );
               continue;
          }
          if ( !_strnicmp( argv[ i ], "--day", 7 ) )
          {
               subDay( &sessin.startTyme );
               continue;
          }
          if ( !_strnicmp( argv[ i ], "--clientid=", 11 ) )
          {
               sessin.client_ID = argv[ i ] + 11;
               continue;
          }
          if ( !_strnicmp( argv[ i ], "--clnsecret=", 12 ) )
          {
               sessin.clientSecret = argv[ i ] + 12;
               continue;
          }
          if ( !_strnicmp( argv[ i ], "--hisip=", 8 ) )
          {
               sessin.HISHost = argv[ i ] + 8;
               continue;
          }
          if ( !_strnicmp( argv[ i ], "--hisportin=", 12 ) )
          {
               sessin.HISPortIn = argv[ i ] + 12;
               continue;
          }
          if ( !_strnicmp( argv[ i ], "--clnportin=", 12 ) )
          {
               sessin.HISPortOut = argv[ i ] + 12;
               continue;
          }
          if ( !_strnicmp( argv[ i ], "--set=", 6 ) )
          {
               loadXMLSettings( argv[ i ] + 6, &sessin );
               continue;
          }
          // is command line help request
          if ( !_strnicmp( argv[ i ], "--h", 3 ) ||
               !_strnicmp( argv[ i ], "--?", 3 )
               )
          {
               printf( USAGE );
               return false;
          }
     }
     if ( !sessin.client_ID.length() )
     {
          loadXMLSettings( "FitToHL7.xml", &sessin );
     }
     if ( sessin.bDbg && !sessin.debug_file.length() )
          sessin.debug_file = "fthtrace.txt";
     return true;
}

bool icompare( const std::string& str1, const std::string& str2 )
{
     std::string str1Cpy( str1 );
     std::string str2Cpy( str2 );
     std::transform( str1Cpy.begin(), str1Cpy.end(), str1Cpy.begin(), ::tolower );
     std::transform( str2Cpy.begin(), str2Cpy.end(), str2Cpy.begin(), ::tolower );
     return ( str1Cpy == str2Cpy );
}

void saveData( std::string type, std::string data, void* context )
{
     FIT_SESSION* session = (FIT_SESSION*)context;
     if ( type == "IP" )
     {
          session->HISHost = data;
          return;
     }
     if ( type == "SendPort" )
     {
          session->HISPortIn = data;
          return;
     }
     if ( type == "RecvPort" )
     {
          session->HISPortOut = data;
          return;
     }
     if ( type == "Client_ID" )
     {
          session->client_ID = data;
          return;
     }
     if ( type == "ClientSecret" )
     {
          session->clientSecret = data;
          return;
     }
     if ( type == "Proxy" )
     {
          session->chProxy = data;
          return;
     }
     if ( type == "DBG" )
     {
          session->bDbg = ( data == "true" ) ? true : false;
          return;
     }
     if ( type == "DBGFile" )
     {
          session->debug_file = data;
          return;
     }
     if ( type == "GeneralUpdatePeriodHour" )
     {
          if ( !parseInt64( session->time_interval, data ) )
               session->time_interval = 1;
          session->time_interval = session->time_interval * 60;
          return;
     }
     if ( type == "FirstUpdatePeriodHour" )
     {
          int i;
          if ( parseInt( i, data ) )
               subTimeInHour( i, &session->startTyme );
          return;
     }
     return;
}

void enumValues( pugi::xml_node& node, fn_CallBack call, void* context )
{
     pugi::xml_node cur_node;

     for ( cur_node = node.first_child(); cur_node; cur_node = cur_node.next_sibling() )
     {
          if ( cur_node.type() == pugi::node_pcdata )
          //if ( ( cur_node->type == XML_ELEMENT_NODE ) && cur_node->content )
          {
               call( cur_node.parent().name(), cur_node.text().get(), context );
          }

          enumValues( cur_node, call, context );
     }
}

void loadXMLSettings( std::string file, FIT_SESSION* sessin )
{
     pugi::xml_document doc;

     try
     {
          pugi::xml_parse_result result = doc.load_file( file.c_str() );
          if ( !result )
          {
               char cur_dir[ MAX_PATH ];
               GetCurrentDirectoryA( MAX_PATH, cur_dir );
               printf( "ERROR reading XML file %s\\%s\n", cur_dir, file.c_str() );
               printf( "ERROR description: %s; offset: %s\n", result.description(), result.offset );
               throw;
          }
          enumValues( doc, saveData, (void*)sessin );

          //LIBXML_TEST_VERSION;
          //doc = xmlReadFile( file.c_str(), NULL, 0 );
          //if ( !doc )
          //{
          //     char cur_dir[ MAX_PATH ];
          //     GetCurrentDirectoryA( MAX_PATH, cur_dir );
          //     printf( "ERROR reading XML file %s\\%s\n", cur_dir, file.c_str() );
          //     throw;
          //}
          //root_element = xmlDocGetRootElement( doc );

          //enumValues( root_element, saveData, (void*)sessin );

          //xmlFreeDoc( doc );
          //xmlCleanupParser();
     }
     catch ( ... )
     {}
}
