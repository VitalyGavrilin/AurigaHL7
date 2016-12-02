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
          return read( fd, buf, count );
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
atomic_t must_terminate = ATOMIC_INIT( 0 );
#endif //WIN32

#define TEST_SOCKET_ERROR( obj, sock_num, message1, message2, func, level, info ) \
     { \
          obj sock( sock_num ); \
          read_num = 0; \
          error_test_level = level; \
          test_msg = message1; \
          strcpy( buffer, message2 ); \
          buf_len = strlen( buffer ); \
          len = sock.##func( test_msg ); \
          if ( -1 != len ) \
          { \
               bOk = false; \
               cout << "FAIL ERROR test for " << #obj << "::" << #func << \
                                                            " - " << info << endl; \
          } \
     }

#define COMPARE_OK \
     ( test_msg.length() != len ) || \
          ( memcmp( test_msg.c_str(), buffer, len ) != 0 )

#define COMPARE_ERROR \
     test_msg.length() == len

#define COMPARE_OK_RCV( message ) \
     ( strlen( message ) != len ) || \
          ( memcmp( test_msg.c_str(), buffer, len ) != 0 )

#define COMPARE_ERROR_RCV( message ) \
     strlen( message ) == len

#define COMPARE_MLLP_OK \
     ( test_msg.length() != ( len - 3 ) ) || \
     ( buffer[0] != 0x0b ) || \
     ( memcmp( test_msg.c_str(), buffer + 1, len - 3 ) != 0 ) || \
     ( buffer[ len - 2 ] != 0x1c ) || ( buffer[ len - 1 ] != 0x0d )

#define COMPARE_MLLP_ERROR \
     test_msg.length() == ( len - 3 )

#define COMPARE_OK_MMLP_RCV( message ) \
     ( strlen( message ) != len ) || \
          ( memcmp( test_msg.c_str(), message, len ) != 0 )

#define COMPARE_ERROR_MLLP_RCV( message ) \
     message.length() == len

#define TEST_SOCKED_SEND( obj, sock_num, message1, message2, partial,\
                                                  func, cmp, type, info ) \
     { \
          obj sock( sock_num ); \
          b_partial_test = partial; \
          read_num = 0; \
          test_msg = message1; \
          strcpy( buffer, message2 ); \
          buf_len = strlen( buffer ); \
          len = sock.##func( test_msg ); \
          if ( strlen( message1 ) < strlen( message2 ) ) \
               strcpy( buffer, message2 ); \
          if ( cmp ) \
          { \
               bOk = false; \
               int req_len = test_msg.length(); \
               if ( strlen( message1 ) < strlen( message2 ) ) \
                    req_len = strlen( buffer ); \
               cout << "FAIL " << type << " test for " << #obj << "::" << \
                    #func << " " << info << " (to requested=" << req_len << \
                    "; real=" << len << ")" << endl; \
          } \
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

using namespace std;

DWORD __stdcall sock_serv_test( LPVOID lpParameter )
{
     TEST_PARAM* tst = (TEST_PARAM*)lpParameter;

     if ( !tst )
     {
          cout << "FAIL OK test for HL7SocketServer - error creating" \
               " thread" << endl;
#ifndef WIN32
          atomic_inc( &must_terminate );
#endif //WIN32
          return -1;
     }

     HL7SocketServer sock( TEST_SOCKET ); // ok - creating server object
     if ( sock.sockfd == ERROR_SOCKET_NOT_INITED )
     {
          tst->bOk = false;
          cout << "FAIL OK test for HL7SocketServer creation - " \
               "error creating object" << endl;
#ifndef WIN32
          atomic_inc( &must_terminate );
#endif //WIN32
          return 0;
     }
     int type = SOCK_RAW;
     int len = sizeof( int );
     if ( 0 != getsockopt( sock.sockfd,
          SOL_SOCKET, SO_TYPE, (char*)&type, &len ) )
     {
          tst->bOk = false;
          cout << "FAIL OK test for HL7SocketServer creation"\
               " - getsockopt error" << endl;
#ifndef WIN32
          atomic_inc( &must_terminate );
#endif //WIN32
          return 0;
     }
     if ( type != SOCK_STREAM )
     {
          tst->bOk = false;
          cout << "FAIL OK test for HL7SocketServer creation" \
               " - invalid socket type" << endl;
#ifndef WIN32
          atomic_inc( &must_terminate );
#endif //WIN32
          return 0;
     }

     tst->bInited = true;
     tst->s = sock.sockfd;
     HL7Socket* sock_cln = sock.run();
     if ( !sock_cln || ( sock_cln->getSocket() == ERROR_SOCKET_NOT_INITED ) )
     {
          tst->bOk = false;
          cout << "FAIL OK test for HL7SocketServer creation - " \
               "error listen for connection" << endl;
#ifndef WIN32
          atomic_inc( &must_terminate );
#endif //WIN32
          return 0;
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
#ifndef WIN32
     atomic_inc( &must_terminate );
#endif //WIN32
     return 0;
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
               size_t len;
               std::string test_msg;

               // test send OK
               TEST_SOCKED_SEND( HL7Socket, TEST_SOCKET, "test |&^", "", false,
                                             send_msg, COMPARE_OK, "OK", "" );
               // send error - sended data len less then required
               TEST_SOCKED_SEND( HL7Socket, TEST_SOCKET, "test message|&^", "", 
                                        true, send_msg, COMPARE_ERROR, "ERROR", 
                                        "invalid received length" );
               // error - using invalid socket
               TEST_SOCKET_ERROR( HL7Socket, ERROR_TEST_SOCKET, "test |&^", "",
                    send_msg, TEST_MISS_ERROR, "invalid socket processing" );
               // error - using uninited socket
               TEST_SOCKET_ERROR( HL7Socket, ERROR_SOCKET_NOT_INITED, 
                    "test |&^", "", send_msg, TEST_MISS_ERROR, 
                    "uninited socket processing" );
#ifdef WIN32
               SOCKET_TEST_FINISH;
#endif // WIN32
          }
          { // read_msg test
#ifdef WIN32
               SOCKET_TEST_INIT;
#endif // WIN32
               //HL7Socket sock( "test.qa", "101" );
               size_t len;
               std::string test_msg;
               std::string long_test;
               COMPLEATE_LONG_STRING( long_test, 11, 
                    "test long text parsing\t|&^//lxhbls 04un8 ;jfu84m ?" );

               // read OK 1 cicle
               TEST_SOCKED_SEND( HL7Socket, TEST_SOCKET, "", "test |&^", false,
                              read_msg, COMPARE_OK_RCV( "test |&^" ), "OK", 
                              "read in one cicle" );
               // read OK more then 1 cicle
               TEST_SOCKED_SEND( HL7Socket, TEST_SOCKET, "", long_test.c_str(), 
                    false, read_msg, COMPARE_OK_RCV( long_test.c_str() ), 
                    "OK", "read in more then one cicle" );
               // error read not full
               TEST_SOCKED_SEND( HL7Socket, TEST_SOCKET, "", long_test.c_str(), 
                    true, read_msg, COMPARE_ERROR_RCV( long_test.c_str() ), 
                    "OK", "partial read" );
               // error - using invalid socket
               TEST_SOCKET_ERROR( HL7Socket, ERROR_TEST_SOCKET, "", "test |&^",
                    read_msg, TEST_MISS_ERROR, "invalid socket processing" );
               // error - using uninited socket
               TEST_SOCKET_ERROR( HL7Socket, ERROR_SOCKET_NOT_INITED, "", 
                                   "test |&^", read_msg, TEST_MISS_ERROR, 
                                   "uninited socket processing" );
               // error first ioctl
               TEST_SOCKET_ERROR( HL7Socket, ERROR_SOCKET_NOT_INITED, "",
                    long_test.c_str(), read_msg, TEST_IOCTL_ERROR,
                    "failed first ioctl" );
               // error second ioctl
               TEST_SOCKET_ERROR( HL7Socket, ERROR_SOCKET_NOT_INITED, "",
                    long_test.c_str(), read_msg, TEST_SECOND_IOCTL_ERROR, 
                    "failed second ioctl" );
               // error second read
               TEST_SOCKET_ERROR( HL7Socket, ERROR_SOCKET_NOT_INITED, "",
                    long_test.c_str(), read_msg, TEST_SECOND_READ_ERROR, 
                    "failed second read" );

#ifdef WIN32
               SOCKET_TEST_FINISH;
#endif // WIN32
          }
     TEST_END( "HL7Socket" );
     TEST_START( "HL7SocketServer" );
          //{ // HL7SocketServer::HL7SocketServer test
          //     HL7SocketServer sock( -2 ); // error - unknown port
          //     if ( sock.sockfd != ERROR_SOCKET_NOT_INITED )
          //     {
          //          bOk = false;
          //          cout << "FAIL ERROR test for HL7SocketServer creation for" \
          //               " nonexistent port = 0" << endl;
          //     }
          //}
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
               if ( pthread_create( &threadID, NULL, 
                                             sock_serv_test, &test_param );
               if ( ( hand == -1 ) || ( !hand ) )
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
                         if ( atomic_read( &must_terminate ) != 0 )
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
                         if ( 0 != getsockopt( test_param.s, SOL_SOCKET, 
                                        SO_ACCEPTCONN, (char*)&type, &len ) )
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
                    if ( atomic_read( &must_terminate ) == 0 )
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
               //HL7MLLP sock( "test.qa", "101" );
               size_t len;
               std::string test_msg;

               // test send OK
               TEST_SOCKED_SEND( HL7MLLP, TEST_SOCKET, "test |&^", "", false,
                    send_msg_mllp, COMPARE_MLLP_OK, "OK", "" );
               // send error - sended data len less then required
               TEST_SOCKED_SEND( HL7MLLP, TEST_SOCKET, "test message|&^", "", 
                    true, send_msg_mllp, COMPARE_MLLP_ERROR, "ERROR",
                    "invalid received length" );
               // error - using invalid socket
               TEST_SOCKET_ERROR( HL7MLLP, ERROR_TEST_SOCKET, "test |&^", "",
                    send_msg_mllp, TEST_MISS_ERROR, 
                    "invalid socket processing" );
               // error - using uninited socket
               TEST_SOCKET_ERROR( HL7MLLP, ERROR_SOCKET_NOT_INITED, 
                    "test |&^", "", send_msg_mllp, TEST_MISS_ERROR, 
                    "uninited socket processing" );
#ifdef WIN32
               SOCKET_TEST_FINISH;
#endif // WIN32
          }
          { // read_msg test
#ifdef WIN32
               SOCKET_TEST_INIT;
#endif // WIN32
               HL7MLLP sock( "test.qa", "101" );
               size_t len;
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
               TEST_SOCKED_SEND( HL7MLLP, TEST_SOCKET, "", short_test_buffer, 
                    false, read_msg_mllp, 
                    COMPARE_OK_MMLP_RCV( short_test.c_str() ), 
                    "OK", "read in one cicle" );
               // read OK more then 1 cicle
               TEST_SOCKED_SEND( HL7MLLP, TEST_SOCKET, "", long_test_buffer, 
                    false, read_msg_mllp, 
                    COMPARE_OK_MMLP_RCV( long_test.c_str() ),
                    "OK", "read in more then one cicle" );
               // more then 1 read OK 1 cicle
               error_test_level = TEST_DOUBLE_RECEIVE;
               TEST_SOCKED_SEND( HL7MLLP, TEST_SOCKET, "", short_test_buffer, 
                    false, read_msg_mllp, 
                    COMPARE_OK_MMLP_RCV( short_test.c_str() ), 
                    "OK", "read in one cicle" );
               // more then 1 read OK more then 1 cicle
               error_test_level = TEST_DOUBLE_RECEIVE;
               TEST_SOCKED_SEND( HL7MLLP, TEST_SOCKET, "", long_test_buffer, 
                    false, read_msg_mllp, 
                    COMPARE_OK_MMLP_RCV( long_test.c_str() ),
                    "OK", "read in more then one cicle" );
               // error read not full
               error_test_level = TEST_MISS_ERROR;
               TEST_SOCKED_SEND( HL7MLLP, TEST_SOCKET, "", long_test_buffer, 
                    true, read_msg_mllp, 
                    COMPARE_ERROR_MLLP_RCV( long_test ), "OK", 
                    "partial read" );
               // error more then 1 read not full
               error_test_level = TEST_DOUBLE_RECEIVE;
               TEST_SOCKED_SEND( HL7MLLP, TEST_SOCKET, "", long_test_buffer, 
                    true, read_msg_mllp, 
                    COMPARE_ERROR_MLLP_RCV( long_test ), "OK", 
                    "partial read" );
               // error - using invalid socket
               error_test_level = TEST_MISS_ERROR;
               TEST_SOCKET_ERROR( HL7MLLP, ERROR_TEST_SOCKET, "", 
                    short_test_buffer, read_msg_mllp, TEST_MISS_ERROR, 
                    "invalid socket processing" );
               // error - using uninited socket
               TEST_SOCKET_ERROR( HL7MLLP, ERROR_SOCKET_NOT_INITED, "", 
                    short_test_buffer, read_msg_mllp, TEST_MISS_ERROR, 
                    "uninited socket processing" );
               // error first ioctl
               TEST_SOCKET_ERROR( HL7MLLP, ERROR_SOCKET_NOT_INITED, "",
                    long_test_buffer, read_msg_mllp, TEST_IOCTL_ERROR,
                    "failed first ioctl" );
               // error second ioctl
               TEST_SOCKET_ERROR( HL7MLLP, ERROR_SOCKET_NOT_INITED, "",
                    long_test_buffer, read_msg_mllp, TEST_SECOND_IOCTL_ERROR,
                    "failed second ioctl" );
               // error second read
               TEST_SOCKET_ERROR( HL7MLLP, ERROR_SOCKET_NOT_INITED, "",
                    long_test_buffer, read_msg_mllp, TEST_SECOND_READ_ERROR,
                    "failed second read" );

#ifdef WIN32
               SOCKET_TEST_FINISH;
#endif // WIN32
          }
     TEST_END( "HL7MLLP" );
     return 0;
}

