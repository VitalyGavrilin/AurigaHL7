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

#include <string>
#include "hl7socket.h"

struct HL7MLLP : private HL7Socket
{
     HL7MLLP( const std::string& host, const std::string& port )
          : HL7Socket( host, port )
     {
     }

     HL7MLLP( int sockfd ) : HL7Socket( sockfd ){}

     ~HL7MLLP(){}

     bool isInited(){ return ( getSocket() != -1 ); }

     size_t
          send_msg_mllp( const std::string& data )
     {
          char* mllp_data = 0;

          mllp_data = new char[ data.length() + 3 ];
          if ( !mllp_data )
               return 0;
          mllp_data[ 0 ] = 0x0b;
          strcpy( mllp_data + 1, data.c_str() );
          mllp_data[ data.length() + 1] = 0x1c;
          mllp_data[ data.length() + 2 ] = 0x0d;
          size_t len = write( getSocket(), mllp_data, data.length() + 3 );

          //std::cout << len << std::endl;
          if ( len != data.length() + 3 )
          {
               std::cerr << "Error: partial/failed write" << std::endl;
          }
          delete mllp_data;
          return len;
     }


     size_t
          read_msg_mllp( std::string& data )
     {
          std::string buffer;
          bool bStart = true;
          bool bFinish = false;

          size_t n = read_msg( buffer );
          if ( n == -1 )
               return n;
          while ( n > 0 )
          {
               size_t iS = 0;
               if ( bStart )
               {
                    while ( ( buffer[ iS ] != 0x0b ) && ( iS < n ) )
                         iS++;
                    if ( ( iS + 1 ) < n )
                    {
                         bStart = false;
                         bFinish = true;
                    }
               }
               if ( bFinish )
               {
                    size_t iF = iS;
                    while ( iF < n )
                    {
                         if ( ( buffer[ iF ] == 0x1c ) && ( iF < ( n - 1 ) ) && ( buffer[ iF + 1 ] == 0x0d ) )
                         {
                              buffer[ iF ] = 0;
                              bFinish = false;
                              break;
                         }
                         iF++;
                    }
                    data = buffer;
               }
               data = buffer.c_str() + iS + 1;
               if ( !bStart && !bFinish )
                    break;
               buffer.clear();
               n = read_msg( buffer );
          }
          return data.length();
     }
//#ifdef TESTS
//     void setSocket( int new_sock ){ HL7Socket::setSocket( new_sock ); }
//#endif // TESTS
};

