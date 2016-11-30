/*
 * This file is part of HCPPL.
 *
 * HCPPL is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * HCPPL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with HCPPL.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include "curl/curl.h"
#include "rapidjson/document.h"
#include "common.h"
#include "RESTProcess.h"
#include "utils.h"

static size_t write_data( void *ptr, size_t size, size_t nmemb, void *stream )
{
     pFIT_SESSION pHeadPars = (pFIT_SESSION)stream;
     //char* str = (char*)ptr;
     int written = size * nmemb;
     //printf( "DATA SIZE: %d\n", written );
     //printf( "DATA: %s\n", (char*)ptr );
     //switch ( pHeadPars->dType )
     //{
     //     //case JSON_DATA:
     //     //     pHeadPars->structed_data = new rapidjson::Document();
     //     //     if ( pHeadPars->structed_data )
     //     //          ( ( rapidjson::Document* )pHeadPars->structed_data )->Parse( (char*)ptr, written );
     //     //     break;
     //default:
     //     {
               void* mem_cpy = NULL;
               int len_cpy = 0;
               if ( pHeadPars->structed_data )
               {
                    mem_cpy = pHeadPars->structed_data;
                    len_cpy = pHeadPars->structed_len;
                    pHeadPars->structed_data = NULL;
                    pHeadPars->structed_len = 0;
               }
               pHeadPars->structed_data = new char[ written + len_cpy + 1 ];
               if ( pHeadPars->structed_data )
               {
                    memset( pHeadPars->structed_data, 0, written + len_cpy + 1 );
                    if ( len_cpy && mem_cpy )
                    {
                         memcpy( pHeadPars->structed_data, mem_cpy, len_cpy );
                         free( mem_cpy );
                    }
                    memcpy( (char*)pHeadPars->structed_data + len_cpy, ptr, written );
                    pHeadPars->structed_len = written + len_cpy;
               }
          //}
     //     break;
     //}

     return written;
}

static size_t write_head( void *ptr, size_t size, size_t nmemb, void *stream )
{
     int written = 0;
     pFIT_SESSION pHeadPars = (pFIT_SESSION)stream;
     written = size * nmemb;
     if ( pHeadPars )
     {
          do
          {
               // Content-Type:
               if ( ( written >= CONTENT_TYPE_PATTERN_SIZE ) && !_strnicmp( (char*)ptr, CONTENT_TYPE_PATTERN, CONTENT_TYPE_PATTERN_SIZE ) )
               {// Get data type
                    int start = CONTENT_TYPE_PATTERN_SIZE;
                    while ( *( (char*)ptr + start ) == ' ' )
                         start++;
                    if ( checkIfDataType( (char*)ptr + start, written - start, JSON_TYPE_DATA_INDICATOR, JSON_TYPE_DATA_INDICATOR_SIZE ) )
                         pHeadPars->dType = JSON_DATA;
                    break;
               }
          } while ( 0 );
          ////auth
     }
     return written;
}

static int write_trace( CURL* curl, curl_infotype type, char* data, size_t dSize, void* context )
{
     pFIT_SESSION pHeadPars = (pFIT_SESSION)context;
     if ( !pHeadPars->debug_file.length() )
          return 0;
     char* mem = (char*)malloc( dSize + 1 );
     if ( !mem )
     {
          return 0;
     }
     memset( mem, 0, dSize + 1 );
     memcpy( mem, data, dSize );
     if ( !pHeadPars->pDebug )
          pHeadPars->pDebug = fopen( pHeadPars->debug_file.c_str(), "w" );
     //printf( "%s", mem );
     fputs( mem, pHeadPars->pDebug );
     fflush( pHeadPars->pDebug );
     free( mem );
     return 0;
}

CURLcode Request(
     CURL *curl,
     REQUEST_TYPE RequestType,
     PROTOCOL_TYPE ProtoType,
     char* chServer,
     char* path,
     char* query,
     pFIT_SESSION pSession,
     char* chData
     )
{
     CURLcode res;
     struct curl_slist* auth_head = NULL;
     DWORD dPostType = 0;

     switch ( RequestType )
     {
     case REQUEST_POST:
          curl_easy_setopt( curl, CURLOPT_POST, 1 );
          if ( chData && strlen( chData ) )
          {
               curl_easy_setopt( curl, CURLOPT_POSTFIELDSIZE, strlen( chData ) );
               curl_easy_setopt( curl, CURLOPT_POSTFIELDS, chData );
          }
          else
               curl_easy_setopt( curl, CURLOPT_POSTFIELDSIZE, 0 );
          break;
     case REQUEST_GET:
          curl_easy_setopt( curl, CURLOPT_HTTPGET, 1 );
          break;
     default:
          break;
     }

     DWORD dUrlLen =
          GetProtoType( NULL, ProtoType ) +
          3 +
          strlen( chServer ) +
          strlen( path ) +
          ( ( query ) ? ( strlen( query ) + 1 ) : 0 );
     if ( !dUrlLen )
     {
          return CURLE_OUT_OF_MEMORY;
     }
     dUrlLen++;
     char* url = (char*)malloc( dUrlLen );
     if ( !url )
     {
          return CURLE_OUT_OF_MEMORY;
     }

     if ( pSession->headers.size() )
     {
          for ( int it = 0; it < (int)pSession->headers.size(); it++ )
          {
               auth_head = curl_slist_append( auth_head, pSession->headers[ it ].c_str() );
          }
          curl_easy_setopt( curl, CURLOPT_HTTPHEADER, auth_head );
     }

     curl_easy_setopt( curl, CURLOPT_WRITEHEADER, pSession );
     curl_easy_setopt( curl, CURLOPT_WRITEDATA, pSession );

     GetProtoType( url, ProtoType );
     strcat( url, "://" );
     strcat( url, chServer );
     strcat( url, path );
     if ( query )
     {
          strcat( url, "?" );
          strcat( url, query );
     }
     curl_easy_setopt( curl, CURLOPT_URL, url );

     resetData( pSession );

     /////////
     res = curl_easy_perform( curl );

     if ( auth_head )
          curl_slist_free_all( auth_head );
     return res;
}

bool checkIfDataType( char* ptr, int size, char* chType, int dTypeSize )
{
     int ind = 0;
     while ( ind < ( size - dTypeSize ) )
     {
          if ( !_strnicmp( (char*)ptr + ind, chType, dTypeSize ) )
               return true;
          while ( ( *( (char*)ptr + ind ) != ',' ) && ( *( (char*)ptr + ind ) != ';' ) && ( *( (char*)ptr + ind ) != '\r' ) && ( *( (char*)ptr + ind ) != '\n' ) && ( *( (char*)ptr + ind ) != 0 ) )
               ind++;
          while ( *( (char*)ptr + ind ) == ' ' )
               ind++;
     }
     return false;
}

DWORD GetProtoType( char* str, PROTOCOL_TYPE dType )
{
     if ( dType == PROTO_HTTPS )
     {
          if ( str )
          {
               strcpy( str, "https" );
          }
          return 5;
     }
     if ( str )
     {
          strcpy( str, "http" );
     }
     return 4;
}

CURL* curlInit( FIT_SESSION* sessin )
{
     CURL* curl = curl_easy_init();
     if ( !curl )
     {
          printf( "ERROR starting curl_easy_init.\n" );
          return curl;
     }

     if ( sessin->chProxy.length() )
          curl_easy_setopt( curl, CURLOPT_PROXY, sessin->chProxy.c_str() );

     curl_easy_setopt( curl, CURLOPT_VERBOSE, 1L );
     curl_easy_setopt( curl, CURLOPT_WRITEFUNCTION, write_data );
     curl_easy_setopt( curl, CURLOPT_HEADERFUNCTION, write_head );
     curl_easy_setopt( curl, CURLOPT_DEBUGFUNCTION, write_trace );
     curl_easy_setopt( curl, CURLOPT_DEBUGDATA, sessin );
     curl_easy_setopt( curl, CURLOPT_USERAGENT, AGENT_NAME );
     curl_easy_setopt( curl, CURLOPT_SSL_VERIFYPEER, FALSE );
     curl_easy_setopt( curl, CURLOPT_HTTP_VERSION, CURL_HTTP_VERSION_1_1 );
     return curl;
}

char* createRandom( CURL* curl )
{
     char* res = NULL;
     DWORD state_len = STATE_LEN + STATE_LEN;
     char state[ STATE_LEN + STATE_LEN ];
     int state_num[ 8 ];
     memset( state, 0, state_len );
     memset( state_num, 0, 16 );
     for ( int i = 0; i < 8; i++ )
          state_num[ i ] = rand();
     if ( CryptBinaryToStringA( (BYTE*)state_num, 32, CRYPT_STRING_BASE64 | CRYPT_STRING_NOCRLF, state, &state_len ) )
     {
          res = curl_easy_escape( curl, state, 32 );
     }
     return res;
}

TYPE_DATA* getValTypeMap( const rapidjson::Value& dt, int* size )
{
     *size = dt[ "field" ].Size();
     TYPE_DATA* val_map = (TYPE_DATA*)malloc( ( *size ) * sizeof( TYPE_DATA ) );
     if ( !val_map )
     {
          printf( "ERROR allocating memory.\n" );
          return NULL;
     }
     memset( val_map, 0, ( *size ) * sizeof( TYPE_DATA ) );
     for ( int count = 0; count < (int)dt[ "field" ].Size(); count++ )
     {
          val_map[ count ].name = new std::string( dt[ "field" ][ count ][ "name" ].GetString() );
          //val_map[ count ].name = dt[ "field" ][ count ][ "name" ].GetString();
          val_map[ count ].type = getType( dt[ "field" ][ count ][ "format" ].GetString() );
     }
     return val_map;
}
