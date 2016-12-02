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

#include "curl/curl.h"

typedef enum _PROTOCOL_TYPE{
     PROTO_HTTP,
     PROTO_HTTPS,
}PROTOCOL_TYPE;

typedef enum _REQUEST_TYPE{
     REQUEST_DEFAULT = 0,
     REQUEST_POST,
     REQUEST_GET,
}REQUEST_TYPE;

static size_t write_data( void *ptr, size_t size, size_t nmemb, void *stream );
static size_t write_head( void *ptr, size_t size, size_t nmemb, void *stream );
static int write_trace( CURL* curl, curl_infotype type, char* data, size_t dSize, void* context );
CURLcode Request( CURL *curl, REQUEST_TYPE RequestType, PROTOCOL_TYPE ProtoType,
     char* chServer, char* path, char* query, pFIT_SESSION pSession, char* chData );

CURL* curlInit( FIT_SESSION* sessin );
char* createRandom( CURL* curl );

bool checkIfDataType( char* ptr, int size, char* chType, int dTypeSize );
DWORD GetProtoType( char* str, PROTOCOL_TYPE dType );

TYPE_DATA* getValTypeMap( const rapidjson::Value& dt, int* size );
