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

#include <Windows.h>
#include <vector>
#include <string>

#define CONTENT_TYPE_PATTERN "Content-Type:"
#define CONTENT_TYPE_PATTERN_SIZE 13

#define JSON_TYPE_DATA_INDICATOR "application/json"
#define JSON_TYPE_DATA_INDICATOR_SIZE 16

#define AGENT_NAME "GoogleFitToHL7"
#define STATE_LEN 32

#define DATA_REQUEST_TIME_INTERVAL 60 * 59 // 59 minutes in seconds

typedef enum _DATA_TYPE
{
     JSON_DATA,
     UNSORTED_DATA,
}DATA_TYPE;

typedef enum _VALUE_TYPE
{
     STRING_TYPE,
     INTEGER_TYPE,
     INTEGER_LIST_TYPE,
     FLOATPOINT_TYPE,
     FLOAT_LIST_TYPE,
     BLOB_TYPE,
     MAP_TYPE,
}VALUE_TYPE;

typedef struct _TYPE_DATA
{
     std::string* name;
     VALUE_TYPE type;
}TYPE_DATA;

typedef struct _FIT_SESSION
{
     std::string client_ID;
     std::string clientSecret;
     std::string HISHost;
     std::string HISPortIn;
     std::string HISPortOut;
     char* state; // Google auth state
     char* code; // Google auth code
     std::vector<std::string> headers;
     DATA_TYPE dType;
     void* structed_data;
     int structed_len;
     std::string access_token;
     std::string refresh_token;
     int expires_in;
     //std::string trace_file;
     //FILE* pTrace;
     bool bDbg;
     std::string debug_file;
     FILE* pDebug;
     int hl7req_num;
     SYSTEMTIME startTyme;
     SYSTEMTIME endTime;
     FILETIME ft_offset;
     __int64 time_interval; // in seconds
     //bool bProxy = false;
     std::string chProxy;
}FIT_SESSION, *pFIT_SESSION;

