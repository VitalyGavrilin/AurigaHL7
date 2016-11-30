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

#include <string>
#include "curl/curl.h"
#include "rapidjson/document.h"
#include "common.h"
#include "GoogleAuth.h"
#include "RESTProcess.h"

using namespace std;

static int wait_on_socket( curl_socket_t sockfd, int for_recv, long timeout_ms )
{
     struct timeval tv;
     fd_set infd, outfd, errfd;
     int res;

     tv.tv_sec = timeout_ms / 1000;
     tv.tv_usec = ( timeout_ms % 1000 ) * 1000;

     FD_ZERO( &infd );
     FD_ZERO( &outfd );
     FD_ZERO( &errfd );

     FD_SET( sockfd, &errfd );

     if ( for_recv )
     {
          FD_SET( sockfd, &infd );
     }
     else
     {
          FD_SET( sockfd, &outfd );
     }

     res = select( sockfd + 1, &infd, &outfd, &errfd, &tv );
     return res;
}

bool GoogleAuth( CURL *curl, FIT_SESSION* pSession )
{
     bool bAuthenticated = false;
     SOCKET redir_sock = INVALID_SOCKET;
     SOCKET s_client = INVALID_SOCKET;

     //string google_auth_url = "https://accounts.google.com/o/oauth2/v2/auth?"\
     //     "response_type=code&scope=openid%20profile%20https://www.googleapis.com/auth/fitness.activity.read%20"\
     //     "https://www.googleapis.com/auth/fitness.location.read%20https://www.googleapis.com/auth/fitness.body.read&redirect_uri=http://127.0.0.1:9909"\
     //     "&client_id=324812218814-sf225socbl5k556r6samql1e2fiurilf.apps.googleusercontent.com&access_type=offline&state=";
     string google_auth_url = "https://accounts.google.com/o/oauth2/v2/auth?"\
          "response_type=code&scope=openid%20profile%20https://www.googleapis.com/auth/fitness.activity.read%20"\
          "https://www.googleapis.com/auth/fitness.location.read%20https://www.googleapis.com/auth/fitness.body.read&redirect_uri=http://127.0.0.1:9909"\
          "&client_id=";
     google_auth_url += pSession->client_ID;
     google_auth_url += "&access_type=offline&state=";
     google_auth_url += pSession->state;

     do
     {
          redir_sock = socket( AF_INET, SOCK_STREAM, 0 );
          if ( INVALID_SOCKET == redir_sock )
          {
               printf( "ERROR openning redirection socket = 0x%X", ::WSAGetLastError() );
               break;
          }

          SOCKADDR_IN address;
          memset( &address, 0, sizeof address );
          address.sin_family = AF_INET;
          address.sin_port = htons( 9909 );
          address.sin_addr.s_addr = inet_addr( "127.0.0.1" );

          if ( SOCKET_ERROR == bind( redir_sock, (PSOCKADDR)&address, sizeof address ) )
          {
               printf( "ERROR bind redirect socket = 0x%X", ::WSAGetLastError() );
               break;
          }

          // Start authentication
          ShellExecuteA( NULL, "open", google_auth_url.c_str(), NULL, NULL, SW_SHOW );

          if ( SOCKET_ERROR == listen( redir_sock, SOMAXCONN ) )
          {
               printf( "ERROR listen redirect socket = 0x%X", ::WSAGetLastError() );
          }

          struct sockaddr_in cl_in_addr;
          int len = sizeof( SOCKADDR_IN );
          s_client = accept( redir_sock, (sockaddr*)&cl_in_addr, &len );
          if ( INVALID_SOCKET == s_client )
          {
               printf( "ERROR accept redirect socket for client = 0x%X", ::WSAGetLastError() );
               break;
          }

          char buffer[ 4096 ];
          len = 0;
          memset( buffer, 0, 4096 );
          len = recv( s_client, buffer, 4096, 0 );
          if ( SOCKET_ERROR == len )
          {
               printf( "ERROR receiving redirect answer = 0x%X", ::WSAGetLastError() );
               break;
          }
          char error_ind[] = "error=";
          bool bState = false;
          int i;
          for ( i = 0; i < len; i++ )
          {
               if ( ( ( buffer[ i ] == '&' ) || ( buffer[ i ] == '?' ) ) && ( !memcmp( ( buffer + i + 1 ), error_ind, 6 ) ) )
               {
                    i = i + 7;
                    int end = i;
                    while ( ( buffer[ end ] != 0 ) && ( buffer[ end ] != '&' ) )
                         end++;
                    buffer[ end ] = 0;
                    printf( "receiving redirect answer with error = %s", buffer + i );
                    break;
               }
          }
          if ( bState )
               break;
          char state[] = "state=";
          bState = false;
          for ( i = 0; i < len; i++ )
          {
               if ( ( ( buffer[ i ] == '&' ) || ( buffer[ i ] == '?' ) ) && ( !memcmp( ( buffer + i + 1 ), state, 6 ) ) )
               {
                    i = i + 7;
                    int end = i;
                    while ( ( buffer[ end ] != 0 ) && ( buffer[ end ] != '&' ) )
                         end++;
                    if ( !memcmp( pSession->state, buffer + i, end - i ) != 0 )
                         bState = true;
                    break;
               }
          }
          if ( !bState )
          {
               printf( "ERROR redirect state not the same as in request" );
               break;
          }
          char code[] = "code=";
          bState = false;
          for ( i = 0; i < len; i++ )
          {
               if ( ( ( buffer[ i ] == '&' ) || ( buffer[ i ] == '?' ) ) && ( !memcmp( ( buffer + i + 1 ), code, 5 ) ) )
               {
                    i = i + 6;
                    int end = i;
                    while ( ( buffer[ end ] != 0 ) && ( buffer[ end ] != '&' ) )
                         end++;
                    pSession->code = (char*)malloc( ( end - i ) + 1 );
                    memset( pSession->code, 0, ( end - i ) + 1 );
                    if ( pSession->code )
                         memcpy( pSession->code, buffer + i, end - i );
                    bState = true;
                    break;
               }
          }
          if ( !bState )
          {
               printf( "ERROR redirect state not the same as in request" );
               break;
          }
          //printf( "answer:\n%s\n", buffer );

          // Request google token
          std::string tokenReq = "code=";
          tokenReq += pSession->code;
          tokenReq += "&client_id=";
          tokenReq += pSession->client_ID;
          tokenReq += "&client_secret=";
          tokenReq += pSession->clientSecret;
          tokenReq += "&redirect_uri=http://127.0.0.1:9909&grant_type=authorization_code";
          //tokenReq += "&client_id=324812218814-sf225socbl5k556r6samql1e2fiurilf.apps.googleusercontent.com&client_secret=EpQFuXTnG-wZduSpSluqDnBk&redirect_uri=http://127.0.0.1:9909&grant_type=authorization_code";
          pSession->headers.push_back( std::string( "Content-Type: application/x-www-form-urlencoded" ) );
          CURLcode res = Request( curl, REQUEST_POST, PROTO_HTTPS, "www.googleapis.com", "/oauth2/v4/token", NULL, pSession, (char*)tokenReq.c_str() );
          if ( res != CURLE_OK )
          {
               printf( "ERROR get google auth token %d.\n", res );
               break;
          }

          // Get auth and refresh tokens and save to settings
          if ( ( pSession->dType == JSON_DATA ) && pSession->structed_data )
          {
               rapidjson::Document doc;
               doc.Parse( (char*)pSession->structed_data, pSession->structed_len );
               pSession->access_token = doc[ "access_token" ].GetString();
               pSession->refresh_token = doc[ "refresh_token" ].GetString();
               pSession->expires_in = doc[ "expires_in" ].GetInt();
               bAuthenticated = true;
          }
     } while ( 0 );
     if ( INVALID_SOCKET != s_client )
          closesocket( s_client );
     if ( INVALID_SOCKET != redir_sock )
          closesocket( redir_sock );
     return bAuthenticated;
}

bool GoogleAuthRefresh( CURL *curl, FIT_SESSION* pSession )
{
     bool bRefreshed = false;
     do
     {
          // Request google token
          //std::string tokenReq = "client_id=324812218814-sf225socbl5k556r6samql1e2fiurilf.apps.googleusercontent.com&client_secret=EpQFuXTnG-wZduSpSluqDnBk&refresh_token=";
          std::string tokenReq = "client_id=";
          tokenReq += pSession->client_ID + "&client_secret=" + pSession->clientSecret + "&refresh_token=";
          tokenReq = tokenReq + pSession->refresh_token + "&grant_type=refresh_token";
          pSession->headers.push_back( std::string( "Content-Type: application/x-www-form-urlencoded" ) );
          CURLcode res = Request( curl, REQUEST_POST, PROTO_HTTPS, "www.googleapis.com", "/oauth2/v4/token", NULL, pSession, (char*)tokenReq.c_str() );
          if ( res != CURLE_OK )
          {
               printf( "ERROR get google auth token %d.\n", res );
               break;
          }

          // Get auth and refresh tokens and save to settings
          if ( ( pSession->dType == JSON_DATA ) && pSession->structed_data )
          {
               rapidjson::Document doc;
               doc.Parse( (char*)pSession->structed_data, pSession->structed_len );
               pSession->access_token = doc[ "access_token" ].GetString();
               pSession->expires_in = doc[ "expires_in" ].GetInt();
               bRefreshed = true;
          }
     } while ( 0 );
     return bRefreshed;
}
