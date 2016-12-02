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

#ifndef HL7SOCKET_H_
#define HL7SOCKET_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

#ifdef WIN32
#include <Winsock2.h>
#include <Ws2tcpip.h>
#define close closesocket
#else //NOT WIN32
#include <unistd.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <netdb.h> 
#endif //WIN32

#include <string>
#include <iostream>
#include "HL7Exception.h"

#define MAX_INSIDE_BUFFER_LEN 256

#ifdef WIN32
#ifndef TESTS
size_t write( int fd, const void *buf, size_t count )
{
	return (size_t)send( (SOCKET)fd, (const char*)buf, (int)count, 0 );
}
size_t read( int fd, const void *buf, size_t count )
{
     return (size_t)recv( (SOCKET)fd, (char*)buf, (int)count, 0 );
}
int ioctl( int fd, unsigned long cmd, int* argp )
{
     return ioctlsocket( (SOCKET)fd, cmd, (unsigned long*)argp );
}
#endif // TESTS
void bzero( char* buffer, int max_len )
{
     memset( buffer, 0, max_len );
     return;
}
#endif

struct HL7Socket
{
	HL7Socket(const std::string& host, 
			const std::string& port)
	{
		addrinfo hints;
#ifdef WIN32
        WSADATA	wsaData;
        int wsa_err = WSAStartup( MAKEWORD( 2, 2 ), &wsaData );
        if ( wsa_err )
        {
             std::cerr << "Error: WSAStartup:" << gai_strerror( wsa_err ) << std::endl;
             exit( EXIT_FAILURE );
        }
#endif // WIN32
		memset(&hints, 0, sizeof(hints));
		hints.ai_family = AF_UNSPEC;    /* Allow IPv4 or IPv6 */
		hints.ai_socktype = SOCK_STREAM; /* Datagram socket */
		hints.ai_flags = 0;
		hints.ai_protocol = 0;          /* Any protocol */

		addrinfo *result;
		int s = getaddrinfo(
				host.c_str(), 
				port.c_str(), 
				&hints, 
				&result);

		if (s != 0)
		{
			std::cerr<<"Error: getaddrinfo:"<<gai_strerror(s)<<std::endl;
#ifdef WIN32
            WSACleanup();
#endif // WIN32
            exit( EXIT_FAILURE );
		}
		addrinfo * rp;
		for (rp = result; rp != NULL; rp = rp->ai_next)
		{
			_socketfd = socket(rp->ai_family, rp->ai_socktype, rp->ai_protocol);
			if (_socketfd == -1)
				continue;
			if (connect(_socketfd, rp->ai_addr, rp->ai_addrlen) != -1)
				break;
			close(_socketfd);
		}
		if (rp == NULL)
		{
			std::cerr<<"Error: Could not connect"<<std::endl;
#ifdef WIN32
            WSACleanup();
#endif // WIN32
            exit( EXIT_FAILURE );
		}
		freeaddrinfo(result);
	}

    HL7Socket( int new_sock ){ _socketfd = new_sock; }

     ~HL7Socket()
	{
		close(_socketfd);
#ifdef WIN32
        WSACleanup();
#endif // WIN32
    }

	size_t
		send_msg(const std::string& data)
		{
			size_t len = write(_socketfd, data.c_str(), data.length());

			//std::cout<<len<<std::endl;
			if (len != data.length())
			{
				std::cerr<<"Error: partial/failed write"<<std::endl;
			}
			return len;
		}

    size_t
		read_msg(std::string& data)
		{
            char buffer[ MAX_INSIDE_BUFFER_LEN + 1 ];
            const size_t max_len = MAX_INSIDE_BUFFER_LEN;

			bzero(buffer, max_len + 1);

            size_t n = read( _socketfd, buffer, max_len );
            if ( n == -1 )
                 return n;
			//std::cout<<"READ:"<<n<<std::endl;
			data = buffer;
            while ( n > 0 )
            {
                 bzero( buffer, max_len + 1 );
                 if ( 0 != ioctl( _socketfd, FIONREAD, (int*)&n ) )
                 {
                      return -1;
                 }
                 if ( n != 0 )
                 {
                      n = read( _socketfd, buffer, max_len );
                      if ( n == -1 )
                           return n;
                      data += buffer;
                 }
            }

		  return data.length();
	 }
    int getSocket(){ return _socketfd; }
//#ifdef TESTS
//    void setSocket( int new_sock ){ _socketfd = new_sock; }
//#endif // TESTS

private:
	 int _socketfd;
};

struct HL7SocketServer
{
	HL7SocketServer(int port_no)
		: sockfd(-1), portno (port_no)
	{     
#ifdef WIN32
         WSADATA	wsaData;
         int wsa_err = WSAStartup( MAKEWORD( 2, 2 ), &wsaData );
         if ( wsa_err )
         {
              std::cerr << "Error: WSAStartup:" << gai_strerror( wsa_err ) << std::endl;
              return;
         }
#endif // WIN32
         sockfd = socket( AF_INET, SOCK_STREAM, 0 );
		if (sockfd < 0) 
		{
             std::cerr << "ERROR opening socket" << std::endl;
#ifdef WIN32
             WSACleanup();
#endif // WIN32
             return;
		}

		bzero((char *) &serv_addr, sizeof(serv_addr));
		serv_addr.sin_family = AF_INET;
		serv_addr.sin_addr.s_addr = INADDR_ANY;
		serv_addr.sin_port = htons(portno);

		if (bind(sockfd, (struct sockaddr *) &serv_addr,
					sizeof(serv_addr)) < 0) 
		{
			std::cerr<<"ERROR on binding\n";
            close( sockfd );
            sockfd = -1;
#ifdef WIN32
            WSACleanup();
#endif // WIN32
            return;
		}
	}

	~HL7SocketServer()
	{
		close(sockfd);
#ifdef WIN32
        WSACleanup();
#endif // WIN32
    }

    HL7Socket*
		run()
		{
             struct sockaddr_in cli_addr;
             listen( sockfd, 5 );
			socklen_t clilen = sizeof(cli_addr);
            int newsockfd = accept( sockfd,
					(struct sockaddr *) &cli_addr, 
					&clilen);
			if (newsockfd < 0) 
			{
                 throw HL7Exception( "HL7SocketServer::run() ERROR on accept." );
			}
            return new HL7Socket( newsockfd );
		}

	int sockfd;
	int portno;
    struct sockaddr_in serv_addr;
};

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 * =====================================================================================
 */
void socket_test()
{
	std::string hl7_message = "MSH|^~\\&|system1|W|system2|UHN|200105231927||ADT^A01^ADT_A01|22139243|P|2.4\t\
EVN|A01|200105231927|\t\
PID||9999999999^^|2216506^||Duck^Donald^^^MR.^MR.||19720227|M|||123 Foo ST.^^TORONTO^ON^M6G 3E6^CA^H^~123 Foo ST.^^TORONTO^ON^M6G 3E6^CA^M^|1811|( 416 )111 - 1111||E^ENGLISH|S|PATIENT DID NOT INDICATE|211004554^||||||||||||\t\
PV1|||ZFAST TRACK^WAITING^13|E^EMERGENCY||369^6^13^U EM EMERGENCY DEPARTMENT^ZFAST TRACK WAITING^FT WAIT 13^FTWAIT13^FT WAITING^FTWAIT13|^MOUSE^MICKEY^M^^DR.^MD|||SUR||||||||I|211004554^||||||||||||||||||||W|||||200105231927|||||\t\
PV2||F|^R / O APPENDICIAL ABSCESS|||||||||||||||||||||||||\t\
IN1|1||001001|OHIP||||||||||||^^^^^|||^^^^^^M^|||||||||||||||||||||||||^^^^^^M^|||||\t\
ACC|";

	std::string host = "192.168.150.8";
	std::string port = "6661";

	HL7Socket hs(host, port);
	hs.send_msg(hl7_message);

	//HL7SocketServer server(1234);
	//server.run()
}

#endif //HL7SOCKET_H_
