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

#include <iostream>
#ifdef WIN32
#include <Winsock2.h>
#else //NOT WIN32
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <netdb.h> 
#include <pthread.h>
#endif //WIN32

// start test init
#define TEST_START( obj ) \
     { \
          bOk = true; \
          std::string object = obj; \
          cout << object << " object tests" << endl;

// end test with result output
#define TEST_END( name ) \
          if ( !bOk ) \
          { \
               cout << "FAIL !!!! verify test for <" << name << ">" << endl; \
          } \
          else \
          { \
               cout << "PASS verify test for <" << name << ">" << endl; \
          } \
     }

// tests define
#define TESTS

#define TEST_SOCKET 8156 // ok test socket
#define ERROR_TEST_SOCKET 8856 // bad test socket
#define ERROR_SOCKET_NOT_INITED -1 // invalid test socket

#define TEST_SOCKET_STR "8156" // ok test socket string

#define TEST_MISS_ERROR 0 // no special mining
#define TEST_IOCTL_ERROR 1 // test first IOCTL for errr return
#define TEST_SECOND_IOCTL_ERROR 2 // test second IOCTL for error return
#define TEST_SECOND_READ_ERROR 3 // test second read for error return
#define TEST_DOUBLE_RECEIVE 4 // test for partial receiving in 2 buffers
#define TEST_REAL_FUNCTIONS 5 // test in real functions

bool b_partial_test; // enable partial reading test
int error_test_level; // apply special state modifications
int read_num; // number of read calls
size_t buf_len; // buffer length
char buffer[ 1024 ]; // data buffer

// replaced write socket function
size_t write_test( int fd, const void *buf, size_t count )
{
     if ( error_test_level == TEST_REAL_FUNCTIONS )
#ifdef WIN32
          return (size_t)send( (SOCKET)fd, (const char*)buf, (int)count, 0 );
#else // WIN32
          return write( fd, buf, count );
#endif //WIN32
     if ( ( fd != TEST_SOCKET ) || ( fd == ERROR_SOCKET_NOT_INITED ) )
          return -1;
     if ( count == 10 )
          return -1;
     memset( &buffer, 0, 1024 );
     int ret = count;
     if ( b_partial_test )
          ret = 10;
     memcpy( buffer, buf, ret );
     return ret;
}

// replaced read socket function
size_t read_test( int fd, const void *buf, size_t count )
{
     if ( error_test_level == TEST_REAL_FUNCTIONS )
#ifdef WIN32
          return (size_t)recv( (SOCKET)fd, (char*)buf, (int)count, 0 );
#else // WIN32
          return read( fd, (void*)buf, count );
#endif //WIN32
     if ( ( fd != TEST_SOCKET ) || ( fd == ERROR_SOCKET_NOT_INITED ) )
          return -1;
     if ( !buf )
          return -1;
     int len = count;
     if ( count > buf_len )
          len = buf_len;
     if ( ( error_test_level == TEST_SECOND_READ_ERROR ) && ( read_num > 1 ) )
          return -1;
     if ( b_partial_test )
          len -= 10;
     read_num++;
     memcpy( (void*)buf, buffer, len );
     for ( int i = len; i < (int)buf_len; i++ )
          buffer[ i - len ] = buffer[ i ];
     buffer[ buf_len - len ] = 0;
     buf_len -= len;
     return len;
}

// replaced socket ioctl function
int ioctl_test( int fd, unsigned long cmd, int* argp )
{
     if ( error_test_level == TEST_REAL_FUNCTIONS )
#ifdef WIN32
          return ioctlsocket( (SOCKET)fd, cmd, (unsigned long*)argp );
#else // WIN32
          return ioctl( fd, cmd, argp );
#endif //WIN32
     if ( ( fd != TEST_SOCKET ) || ( fd == ERROR_SOCKET_NOT_INITED ) )
          return -1;
     if ( !argp )
          return -1;
     if ( error_test_level == TEST_IOCTL_ERROR )
          return -1;
     if ( ( error_test_level == TEST_SECOND_IOCTL_ERROR ) && ( read_num > 1 ) )
          return -1;
     *argp = buf_len;
     if ( error_test_level == TEST_DOUBLE_RECEIVE )
     {
          if ( *argp <= 50 )
          {
               *argp = 1;
               error_test_level = TEST_MISS_ERROR;
          }
          else
               *argp -= 50;
     }
     return 0;
}

// replaced exit function
#define exit \
     _socketfd = -1; \
     return;

#define write write_test
#define ioctl ioctl_test
#define read read_test

#include "../../common/hl7socket.h"
#include "../../common/hl7mllp.h"

#ifdef WIN32
// initing WSA system in Windows
#define SOCKET_TEST_INIT \
     WSADATA	wsaData; \
     int wsa_err = WSAStartup( MAKEWORD( 2, 2 ), &wsaData ); \
     if ( wsa_err ) \
     { \
          std::cerr << "Error: WSAStartup:" << gai_strerror( wsa_err ) << \
                                                                 std::endl; \
     }

// deiniting WSA system in Windows
#define SOCKET_TEST_FINISH \
     WSACleanup();
#else
int must_terminate = 0;
#endif //WIN32

using namespace std;

//#define TEST_SOCKET_ERROR( obj, sock_num, message1, message2, func, level, info ) 
bool testHL7SocketErrorSend( int sock_num, const char* message1,
     const char* message2, int level, const char* info )
{ 
     bool bRes = true;
     HL7Socket sock( sock_num );
     read_num = 0;
     error_test_level = level;
     std::string test_msg = message1;
     strcpy( buffer, message2 );
     buf_len = strlen( buffer );
     int len = sock.send_msg( test_msg );
     if ( -1 != len )
     {
          bRes = false;
          cout << "FAIL ERROR test for HL7Socket::send_msg - " << info << endl;
     } 
     return bRes;
}

bool testHL7SocketErrorRecv( int sock_num, const char* message1,
     const char* message2, int level, const char* info )
{
     bool bRes = true;
     HL7Socket sock( sock_num );
     read_num = 0;
     error_test_level = level;
     std::string test_msg = message1;
     strcpy( buffer, message2 );
     buf_len = strlen( buffer );
     int len = sock.read_msg( test_msg );
     if ( -1 != len )
     {
          bRes = false;
          cout << "FAIL ERROR test for HL7Socket::send_msg - " << info << endl;
     }
     return bRes;
}

bool testHL7MLLPErrorSend( int sock_num, const char* message1,
     const char* message2, int level, const char* info )
{
     bool bRes = true;
     HL7MLLP sock( sock_num );
     read_num = 0;
     error_test_level = level;
     std::string test_msg = message1;
     strcpy( buffer, message2 );
     buf_len = strlen( buffer );
     int len = sock.send_msg_mllp( test_msg );
     if ( -1 != len )
     {
          bRes = false;
          cout << "FAIL ERROR test for HL7MLLP::send_msg_mllp - " << info << endl;
     }
     return bRes;
}

bool testHL7MLLPErrorRecv( int sock_num, const char* message1,
     const char* message2, int level, const char* info )
{
     bool bRes = true;
     HL7MLLP sock( sock_num );
     read_num = 0;
     error_test_level = level;
     std::string test_msg = message1;
     strcpy( buffer, message2 );
     buf_len = strlen( buffer );
     int len = sock.read_msg_mllp( test_msg );
     if ( -1 != len )
     {
          bRes = false;
          cout << "FAIL ERROR test for HL7MLLP::read_msg_mllp - " << info << endl;
     }
     return bRes;
}

bool testHL7SocketSend( int sock_num, const char* message1, 
     bool partial, bool bOk, const char* info )
{
     bool bRes = true;
     HL7Socket sock( sock_num );
     b_partial_test = partial;
     read_num = 0;
     std::string test_msg = message1;
     strcpy( buffer, "" );
     buf_len = strlen( buffer );
     int len = sock.send_msg( test_msg );
     if ( ( bOk && ( ( test_msg.length() != len ) || 
                    ( memcmp( test_msg.c_str(), buffer, len ) != 0 ) ) ) ||
          ( !bOk && ( test_msg.length() == len ) ) )
     { 
          bRes = false; \
          int req_len = test_msg.length();
          cout << "FAIL ";
          if ( bOk )
               cout << "OK";
          else
               cout << "ERROR";
          cout << " test for HL7Socket::send_msg " << info << 
               " (to requested=" << req_len << "; real=" << len << ")" << endl; 
     }
     return bRes;
}

bool testHL7SocketRecv( int sock_num, const char* message2, 
     const bool partial, bool bOk, const char* info )
{
     bool bRes = true;
     HL7Socket sock( sock_num );
     b_partial_test = partial;
     read_num = 0;
     std::string test_msg = "";
     strcpy( buffer, message2 );
     buf_len = strlen( buffer );
     int len = sock.read_msg( test_msg );
     strcpy( buffer, message2 );
     if ( ( bOk && ( ( strlen( message2 ) != len ) || 
                    ( memcmp( test_msg.c_str(), buffer, len ) != 0 ) ) ) ||
          ( !bOk && ( strlen( message2 ) == len ) ) )
     {
          bRes = false;
          int req_len = strlen( buffer );
          cout << "FAIL ";
          if ( bOk )
               cout << "OK";
          else
               cout << "ERROR";
          cout << " test for HL7Socket::send_msg " << info <<
               " (to requested=" << req_len << "; real=" << len << ")" << endl;
     }
     return bRes;
}

bool testHL7MLLPSend( int sock_num, const char* message1, 
     const char* message2, bool partial, bool bOk, const char* info )
{
     bool bRes = true;
     HL7MLLP sock( sock_num );
     b_partial_test = partial;
     read_num = 0;
     std::string test_msg = message1;
     strcpy( buffer, "" );
     buf_len = strlen( buffer );
     int len = sock.send_msg_mllp( test_msg );
     if ( ( bOk && ( ( test_msg.length() != ( len - 3 ) ) || 
               ( buffer[ 0 ] != 0x0b ) || 
               ( memcmp( test_msg.c_str(), buffer + 1, len - 3 ) != 0 ) || 
               ( buffer[ len - 2 ] != 0x1c ) || 
               ( buffer[ len - 1 ] != 0x0d ) ) ) ||
          ( !bOk && ( test_msg.length() == ( len - 3 ) ) ) )
     {
          bRes = false;
          int req_len = test_msg.length();
          cout << "FAIL ";
          if ( bOk )
               cout << "OK";
          else
               cout << "ERROR";
          cout << " test for HL7MLLP::send_msg_mllp " << info <<
               " (to requested=" << req_len << "; real=" << len << ")" << endl;
     }
     return bRes;
}

bool testHL7MLLPRecv( int sock_num, const char* message2, const char* cmp_mes,
     bool partial, bool bOk, const char* info )
{
     bool bRes = true;
     HL7MLLP sock( sock_num );
     b_partial_test = partial;
     read_num = 0;
     std::string test_msg = "";
     strcpy( buffer, message2 );
     buf_len = strlen( buffer );
     int len = sock.read_msg_mllp( test_msg );
     strcpy( buffer, message2 );
     if ( ( bOk && ( ( strlen( cmp_mes ) != len ) || 
               ( memcmp( test_msg.c_str(), cmp_mes, len ) != 0 ) ) ) ||
          ( !bOk && ( strlen( cmp_mes ) == len ) ) )
     {
          bRes = false;
          int req_len = strlen( buffer );
          cout << "FAIL ";
          if ( bOk )
               cout << "OK";
          else
               cout << "ERROR";
          cout << " test for HL7MLLP::send_msg_mllp " << info <<
               " (to requested=" << req_len << "; real=" << len << ")" << endl;
     }
     return bRes;
}

#define COMPLEATE_LONG_STRING( val, size, str ) \
     for ( int i = 0; i < size; i++ ) \
          val += str;

#define TEST_DATA "test data"

typedef struct _TEST_PARAM
{
     bool bOk;
     bool bInited;
     int s;
}TEST_PARAM;

#ifdef WIN32
DWORD __stdcall sock_serv_test( LPVOID lpParameter )
#else // WIN32
void* sock_serv_test( void* lpParameter )
#endif // WIN32
{
     TEST_PARAM* tst = (TEST_PARAM*)lpParameter;

     if ( !tst )
     {
          cout << "FAIL OK test for HL7SocketServer - error creating" \
               " thread" << endl;
#ifdef WIN32
          return -1;
#else // WIN32
          must_terminate++;
          return NULL;
#endif //WIN32
     }

     HL7SocketServer sock( TEST_SOCKET ); // ok - creating server object
     if ( sock.sockfd == ERROR_SOCKET_NOT_INITED )
     {
          tst->bOk = false;
          cout << "FAIL OK test for HL7SocketServer creation - " \
               "error creating object" << endl;
#ifdef WIN32
          return 0;
#else // WIN32
          must_terminate++;
          return NULL;
#endif //WIN32
     }
     int type = SOCK_RAW;
     int len = sizeof( int );
#ifdef WIN32
     if ( 0 != getsockopt( sock.sockfd,
          SOL_SOCKET, SO_TYPE, (char*)&type, &len ) )
#else // WIN32
     if ( 0 != getsockopt( sock.sockfd,
          SOL_SOCKET, SO_TYPE, (char*)&type, (unsigned int*)&len ) )
#endif // WIN32
     {
          tst->bOk = false;
          cout << "FAIL OK test for HL7SocketServer creation"\
               " - getsockopt error" << endl;
#ifdef WIN32
          return 0;
#else // WIN32
          must_terminate++;
          return NULL;
#endif //WIN32
     }
     if ( type != SOCK_STREAM )
     {
          tst->bOk = false;
          cout << "FAIL OK test for HL7SocketServer creation" \
               " - invalid socket type" << endl;
#ifdef WIN32
          return 0;
#else // WIN32
          must_terminate++;
          return NULL;
#endif //WIN32
     }

     tst->bInited = true;
     tst->s = sock.sockfd;
     HL7Socket* sock_cln = sock.run();
     if ( !sock_cln || ( sock_cln->getSocket() == ERROR_SOCKET_NOT_INITED ) )
     {
          tst->bOk = false;
          cout << "FAIL OK test for HL7SocketServer creation - " \
               "error listen for connection" << endl;
#ifdef WIN32
          return 0;
#else // WIN32
          must_terminate++;
          return NULL;
#endif //WIN32
     }
     std::string data;
     if ( ( sock_cln->read_msg(data) != strlen( TEST_DATA ) ) ||
          ( data != TEST_DATA ) )
     {
          tst->bOk = false;
          cout << "FAIL OK test for HL7SocketServer creation " \
               "error read in result client" << endl;
     }
     delete sock_cln;
#ifdef WIN32
     return 0;
#else // WIN32
     must_terminate++;
     return NULL;
#endif //WIN32
}

int main()
{
     bool bOk = true;
     cout << "---------------tests----------------" << endl;
     cout << "---------------version 2.4----------------" << endl;
     TEST_START( "HL7Socket" );
          cout << "TODO: correct cout and cerr usage" << endl;
          { // HL7Socket::HL7Socket test
               HL7Socket sock( "test.qa", "101" ); // error - unknown address
               if ( sock.getSocket() != ERROR_SOCKET_NOT_INITED )
               {
                    bOk = false;
                    cout << "FAIL ERROR test for HL7Socket creation for" \
                                   " nonexistent DNS name - test.qa" << endl;
               }
          }
          { // // HL7Socket::HL7Socket test
               HL7Socket sock( "localhost", "919999" ); // error - no cnnection
               if ( sock.getSocket() != ERROR_SOCKET_NOT_INITED )
               {
                    bOk = false;
                    cout << "FAIL ERROR test for HL7Socket creation for " \
                                             "nonexistent connection" << endl;
               }
          }
          { // HL7Socket::HL7Socket test
               HL7Socket sock( TEST_SOCKET ); // ok - correct socket
               if ( sock.getSocket() != TEST_SOCKET )
               {
                    bOk = false;
                    cout << "FAIL OK test for HL7Socket creation with" \
                         " correct socket" << endl;
               }
          }
          { // HL7Socket::HL7Socket test - ok - uncorrect socket
               HL7Socket sock( ERROR_SOCKET_NOT_INITED );
               if ( sock.getSocket() != ERROR_SOCKET_NOT_INITED )
               {
                    bOk = false;
                    cout << "FAIL OK test for HL7Socket creation with" \
                         " uncorrect socket" << endl;
               }
          }
          { // send_msg test
#ifdef WIN32
               SOCKET_TEST_INIT;
#endif // WIN32
               //HL7Socket sock( "test.qa", "101" );
               std::string test_msg;

               // test send OK
               if ( !testHL7SocketSend( TEST_SOCKET, "test |&^",
                                                       false, true, "" ) )
                    bOk = false;
               // send error - sended data len less then required
               if ( !testHL7SocketSend( TEST_SOCKET, "test message|&^",
                                   true, false, "invalid received length" ) )
                    bOk = false;
               // error - using invalid socket
               if ( !testHL7SocketErrorSend( ERROR_TEST_SOCKET, "test |&^", "", 
                              TEST_MISS_ERROR, "invalid socket processing" ) )
                    bOk = false;
               // error - using uninited socket
               if ( !testHL7SocketErrorSend( ERROR_SOCKET_NOT_INITED, "test |&^", "",
                              TEST_MISS_ERROR, "uninited socket processing" ) )
                    bOk = false;
#ifdef WIN32
               SOCKET_TEST_FINISH;
#endif // WIN32
          }
          { // read_msg test
#ifdef WIN32
               SOCKET_TEST_INIT;
#endif // WIN32
               std::string test_msg;
               std::string long_test;
               COMPLEATE_LONG_STRING( long_test, 11, 
                    "test long text parsing\t|&^//lxhbls 04un8 ;jfu84m ?" );

               // read OK 1 cicle
               if ( !testHL7SocketRecv( TEST_SOCKET, "test |&^", 
                                        false, true, "read in one cicle" ) )
                    bOk = false;
               // read OK more then 1 cicle
               if ( !testHL7SocketRecv( TEST_SOCKET, 
                                        (char*)long_test.c_str(), false, true, 
                                        "read in more then one cicle" ) )
                    bOk = false;
               // error read not full
               if ( !testHL7SocketRecv( TEST_SOCKET, 
                    (char*)long_test.c_str(), true, false, "partial read" ) )
                    bOk = false;
               // error - using invalid socket
               if ( !testHL7SocketErrorRecv( ERROR_TEST_SOCKET, "", "test |&^",
                              TEST_MISS_ERROR, "invalid socket processing" ) )
                    bOk = false;
               // error - using uninited socket
               if ( !testHL7SocketErrorRecv( ERROR_SOCKET_NOT_INITED, "",
                              "test |&^", TEST_MISS_ERROR, 
                              "uninited socket processing" ) )
                    bOk = false;
               // error first ioctl
               if ( !testHL7SocketErrorRecv( ERROR_SOCKET_NOT_INITED, "",
                              (char*)long_test.c_str(), TEST_IOCTL_ERROR,
                              "failed first ioctl" ) )
                    bOk = false;
               // error second ioctl
               if ( !testHL7SocketErrorRecv( ERROR_SOCKET_NOT_INITED, "",
                              (char*)long_test.c_str(), TEST_SECOND_IOCTL_ERROR,
                              "failed second ioctl" ) )
                    bOk = false;
               // error second read
               if ( !testHL7SocketErrorRecv( ERROR_SOCKET_NOT_INITED, "",
                              (char*)long_test.c_str(), TEST_SECOND_READ_ERROR,
                              "failed second read" ) )
                    bOk = false;

#ifdef WIN32
               SOCKET_TEST_FINISH;
#endif // WIN32
          }
     TEST_END( "HL7Socket" );
     TEST_START( "HL7SocketServer" );
          { // HL7SocketServer::HL7SocketServer test
               TEST_PARAM test_param;
               error_test_level = TEST_REAL_FUNCTIONS;
               test_param.bOk = true;
               test_param.bInited = false;
#ifdef WIN32
               unsigned long threadID;
               int hand = (int)CreateThread( NULL, 0,
                                   sock_serv_test, &test_param, 0, &threadID );
               if ( ( hand == -1 ) || ( !hand ) )
               {
                    bOk = false;
                    cout << "FAIL ERROR test for HL7SocketServer creation " \
                                        "- thread creation error" << endl;
               }
#else // WIN32
               pthread_t threadID;
               if ( 0 != pthread_create( &threadID, NULL, sock_serv_test, &test_param ) )
               {
                    bOk = false;
                    cout << "FAIL ERROR test for HL7SocketServer creation " \
                         "- thread creation error" << endl;
               }
#endif // WIN32
               else
               {
                    while ( !test_param.bInited )
                    {
#ifdef WIN32
                         if ( WaitForSingleObject( (HANDLE)hand, 100 ) ==
                                                            WAIT_OBJECT_0 )
#else // WIN32
                         if ( must_terminate != 0 )
#endif // WIN32
                              break;
#ifndef WIN32
                         sleep(1);
#endif // WIN32
                    }
                    if ( test_param.bInited )
                    {
                         bool type = false;
                         int len = sizeof( bool );
#ifdef WIN32
                         if ( 0 != getsockopt( test_param.s, SOL_SOCKET,
                              SO_ACCEPTCONN, (char*)&type, &len ) )
#else // WIN32
                         if ( 0 != getsockopt( test_param.s, SOL_SOCKET,
                              SO_ACCEPTCONN, (char*)&type, (unsigned int*)&len ) )
#endif // WIN32
                         {
                              bOk = false;
                              cout << "FAIL OK test for HL7SocketServer creation"\
                                   " - getsockopt error" << endl;
                         }
                         if ( type != true )
                         {
                              bOk = false;
                              cout << "FAIL OK test for HL7SocketServer creation" \
                                   " - invalid socket state (not listen)" << endl;
                         }
                         HL7Socket cl_sock( "localhost", TEST_SOCKET_STR );
                         if ( cl_sock.send_msg( TEST_DATA ) != strlen( TEST_DATA ) )
                         {
                              bOk = false;
                              cout << "FAIL OK test for HL7SocketServer read" \
                                   " - invalid transmition" << endl;
                         }
                    }
#ifdef WIN32
                    if ( WaitForSingleObject( (HANDLE)hand, 100 ) !=
                         WAIT_OBJECT_0 )
                         TerminateProcess( (HANDLE)hand, 0 );
#else // WIN32
                    sleep(3);
                    if ( must_terminate == 0 )
                         pthread_cancel( threadID );
#endif // WIN32
                    if ( !test_param.bInited )
                         bOk = false;
               }
               error_test_level = TEST_MISS_ERROR;
          }
     TEST_END( "HL7SocketServer" );
     TEST_START( "HL7MLLP" );
          { // HL7MLLP::HL7MLLP test
               HL7MLLP sock( "test.qa", "101" ); // error - unknown address
               if ( sock.isInited() )
               {
                    bOk = false;
                    cout << "FAIL ERROR test for HL7MLLP creation for" \
                         " nonexistent DNS name - test.qa" << endl;
               }
          }
          { // HL7MLLP::HL7MLLP test
               HL7MLLP sock( "localhost", "919999" ); // error - no cnnection
               if ( sock.isInited() )
               {
                    bOk = false;
                    cout << "FAIL ERROR test for HL7MLLP creation for " \
                         "nonexistent connection" << endl;
               }
          }
          { // HL7MLLP::HL7MLLP test
               HL7MLLP sock( TEST_SOCKET ); // ok - correct socket
               if ( !sock.isInited() )
               {
                    bOk = false;
                    cout << "FAIL OK test for HL7MLLP creation with" \
                         " correct socket" << endl;
               }
          }
          { // HL7MLLP::HL7MLLP test - ok - uncorrect socket
               HL7MLLP sock( ERROR_SOCKET_NOT_INITED );
               if ( sock.isInited() )
               {
                    bOk = false;
                    cout << "FAIL OK test for HL7MLLP creation with" \
                         " uncorrect socket" << endl;
               }
          }
          { // send_msg_mllp test
#ifdef WIN32
               SOCKET_TEST_INIT;
#endif // WIN32
               std::string test_msg;

               // test send OK
               if ( !testHL7MLLPSend( TEST_SOCKET, "test |&^", "",
                                                       false, true, "" ) )
                    bOk = false;
               // send error - sended data len less then required
               if ( !testHL7MLLPSend( TEST_SOCKET, "test message|&^", "",
                    true, false, "invalid received length" ) )
                    bOk = false;
               // error - using invalid socket
               if ( !testHL7MLLPErrorSend( ERROR_TEST_SOCKET, "test |&^", "", 
                              TEST_MISS_ERROR, "invalid socket processing" ) )
                    bOk = false;
               // error - using uninited socket
               if ( !testHL7MLLPErrorSend( ERROR_SOCKET_NOT_INITED, "test |&^", "",
                              TEST_MISS_ERROR, "uninited socket processing" ) )
                    bOk = false;
#ifdef WIN32
               SOCKET_TEST_FINISH;
#endif // WIN32
          }
          { // read_msg test
#ifdef WIN32
               SOCKET_TEST_INIT;
#endif // WIN32
               HL7MLLP sock( "test.qa", "101" );
               //size_t len;
               std::string test_msg;
               std::string short_test = "MSH|^~\\&|system1|W|system2|UHN|\
                              200105231927||ADT^A01^ADT_A01|22139243|P|2.4\t";
               char short_test_buffer[ 2048 ];
               memset( short_test_buffer, 0, 2048 );
               short_test_buffer[ 0 ] = 0x0b;
               memcpy( short_test_buffer + 1, 
                                   short_test.c_str(), short_test.length() );
               short_test_buffer[ short_test.length() + 1 ] = 0x1c;
               short_test_buffer[ short_test.length() + 2 ] = 0x0d;
               std::string long_test = "MSH|^~\\&|system1|W|\
                    system2|UHN|200105231927||ADT^A01^ADT_A01|22139243|P|2.4\t\
                                        EVN|A01|200105231927|\t\
                                        PID||9999999999^^|2216506^||Duck^\
                    Donald^^^MR.^MR.||19720227|M|||123 Foo ST.^^TORONTO^ON^\
                    M6G 3E6^CA^H^~123 Foo ST.^^TORONTO^ON^M6G 3E6^CA^M^|1811|\
                    ( 416 )111 - 1111||E^ENGLISH|S|PATIENT DID NOT INDICATE|\
                    211004554^||||||||||||\t\
                                        PV1|||ZFAST TRACK^WAITING^13|E^\
                    EMERGENCY||369^6^13^U EM EMERGENCY DEPARTMENT^\
                    ZFAST TRACK WAITING^FT WAIT 13^FTWAIT13^FT WAITING^\
                    FTWAIT13|^MOUSE^MICKEY^M^^DR.^MD|||SUR||||||||I|211004554^\
                    ||||||||||||||||||||W|||||200105231927|||||\t\
                                        PV2||F|^R / O APPENDICIAL ABSCESS|||||\
                    ||||||||||||||||||||\t\
                                        IN1|1||001001|OHIP||||||||||||^^^^^|||\
                    ^^^^^^M^|||||||||||||||||||||||||^^^^^^M^|||||\t\
                                        ACC|";
               char long_test_buffer[ 2048 ];
               memset( long_test_buffer, 0, 2048 );
               long_test_buffer[ 0 ] = 0x0b;
               memcpy( long_test_buffer + 1, 
                                   long_test.c_str(), long_test.length() );
               long_test_buffer[ long_test.length() + 1 ] = 0x1c;
               long_test_buffer[ long_test.length() + 2 ] = 0x0d;

               
               // read OK 1 cicle
               if ( !testHL7MLLPRecv( TEST_SOCKET, short_test_buffer, 
                                   (char*)short_test.c_str(), false, true, 
                                   "read in one cicle" ) )
                    bOk = false;
               // read OK more then 1 cicle
               if ( !testHL7MLLPRecv( TEST_SOCKET, long_test_buffer,
                                   (char*)long_test.c_str(), false, true,
                                   "read in more then one cicle" ) )
                    bOk = false;
               // more then 1 read OK 1 cicle
               error_test_level = TEST_DOUBLE_RECEIVE;
               if ( !testHL7MLLPRecv( TEST_SOCKET, short_test_buffer,
                                   (char*)short_test.c_str(), false, true,
                                   "double read in one cicle" ) )
                    bOk = false;
               // more then 1 read OK more then 1 cicle
               error_test_level = TEST_DOUBLE_RECEIVE;
               if ( !testHL7MLLPRecv( TEST_SOCKET, long_test_buffer,
                                   (char*)long_test.c_str(), false, true,
                                   "double read in more then one cicle" ) )
                    bOk = false;
               // error read not full
               error_test_level = TEST_MISS_ERROR;
               if ( !testHL7MLLPRecv( TEST_SOCKET, long_test_buffer,
                                   (char*)long_test.c_str(), true, false,
                                   "partial read" ) )
                    bOk = false;
               // error more then 1 read not full
               error_test_level = TEST_DOUBLE_RECEIVE;
               if ( !testHL7MLLPRecv( TEST_SOCKET, long_test_buffer,
                                   (char*)long_test.c_str(), true, false,
                                   "partial read" ) )
                    bOk = false;
               // error - using invalid socket
               error_test_level = TEST_MISS_ERROR;
               if ( !testHL7MLLPErrorRecv( ERROR_TEST_SOCKET, "",
                                   short_test_buffer, TEST_MISS_ERROR, 
                                   "invalid socket processing" ) )
                    bOk = false;
               // error - using uninited socket
               if ( !testHL7MLLPErrorRecv( ERROR_SOCKET_NOT_INITED, "",
                                   short_test_buffer, TEST_MISS_ERROR,
                                   "uninited socket processing" ) )
                    bOk = false;
               // error first ioctl
               if ( !testHL7MLLPErrorRecv( ERROR_SOCKET_NOT_INITED, "",
                                   long_test_buffer, TEST_IOCTL_ERROR,
                                   "failed first ioctl" ) )
                    bOk = false;
               // error second ioctl
               if ( !testHL7MLLPErrorRecv( ERROR_SOCKET_NOT_INITED, "",
                                   long_test_buffer, TEST_SECOND_IOCTL_ERROR,
                                   "failed second ioctl" ) )
                    bOk = false;
               // error second read
               if ( !testHL7MLLPErrorRecv( ERROR_SOCKET_NOT_INITED, "",
                                   long_test_buffer, TEST_SECOND_READ_ERROR,
                                   "failed second read" ) )
                    bOk = false;

#ifdef WIN32
               SOCKET_TEST_FINISH;
#endif // WIN32
          }
     TEST_END( "HL7MLLP" );
     return 0;
}

