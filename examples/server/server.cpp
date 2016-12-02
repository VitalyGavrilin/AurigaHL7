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

// server.cpp : Defines the entry point for the console application.
//

#include "hl7mllp.h" // place hl7mllp.h file as first include in the source file
#include "hl7socket.h"
#include <Windows.h>
#include <string>
#include <sys/timeb.h>
#include "util.h"
#include "message/QRY_A19.h"
#include "message/ADR_A19.h"
#include "message/ACK.h"
#include "ObjToPipe.h"
#include "dataencode.h"
#include "validation.h"

// encde string time stamp in TS format from SYSTEMTIME and timezone
std::string encodeTimeStamp( SYSTEMTIME& st, short zone )
{
     std::string encoded_val;
     try
     {
          // use dataencode functtion for TS data encoding
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

int main( int argc, char* argv[] )
{
     std::string data;
     __timeb64 tm;
     SYSTEMTIME time;

     _ftime64( &tm );
     GetSystemTime( &time );

     // create socket server
     HL7SocketServer serv( 7711 );
     // accept client connection
     HL7Socket* client = serv.run();
     if ( !client )
     {
          printf( "ERROR accepting client connection.\n" );
          return -1;
     }
     // init MLLP object to receive MLLP rotocol messages
     HL7MLLP mllp( client->getSocket() );
     try
     {
          // read client request
          mllp.read_msg_mllp( data );
          printf( "Get message from client:\n%s\n", data.c_str() );
     }
     catch ( ... )
     {
          printf( "ERROR receiving client request.\n" );
          return -1;
     }
     HL7_24::QRY_A19 qry; // request PID message
     HL7_24::ADR_A19 adr; // answer message
     bool bError = false;
     try
     {
          std::string errorMes = "";
          HL7_24::ERR err;

          // convert request to message
          pipeToMsg( &qry, data );

          // create validation object
          verify vrf( getMsgVersion( qry ) );

          // validate received message
          do
          {
               // check version
               if ( 0 != memcmp( getMsgVersion( qry ), "2.4", 3 ) )
               {
                    printf( "ERROR receiving invalid version <%s>.\n", getMsgVersion( qry ) );
                    errorMes = "Unsupported version";
                    err.getErrorCodeAndLocation()->getSegmentID()->setData( qry.getMSH_1()->getName() );
                    bError = true;
                    break;
               }
               // check message type
               if ( ( 0 != memcmp( qry.getMSH_1()->getMessageType()->getMessageType()->getData(), "QRY", 3 ) ) ||
                    ( 0 != memcmp( qry.getMSH_1()->getMessageType()->getTriggerEvent()->getData(), "A19", 3 ) ) ||
                    ( 0 != memcmp( qry.getMSH_1()->getMessageType()->getMessageStructure()->getData(), "QRY_A19", 7 ) ) )
               {
                    printf( "ERROR receiving invalid messaage <%s>.\n",
                         qry.getMSH_1()->getMessageType()->getMessageStructure()->getData() );
                    errorMes = "Unsupported message";
                    err.getErrorCodeAndLocation()->getSegmentID()->setData( qry.getMSH_1()->getName() );
                    bError = true;
                    break;
               }
               // validate TS field of header
               if ( !vrf.test( qry.getMSH_1()->getDateTimeOfMessage()->getTimeOfAnEvent()->getName(),
                    qry.getMSH_1()->getDateTimeOfMessage()->getTimeOfAnEvent()->getData() ) )
               {
                    printf( "ERROR receiving invalid TS format <%s>.\n",
                         qry.getMSH_1()->getDateTimeOfMessage()->getTimeOfAnEvent()->getData() );
                    errorMes = "Invalid TS format";
                    err.getErrorCodeAndLocation()->getSegmentID()->setData( qry.getMSH_1()->getName() );
                    bError = true;
                    break;
               }
               // validate TS field of query
               if ( !vrf.test( qry.getQRD_2()->getQueryDateTime()->getTimeOfAnEvent()->getName(),
                    qry.getQRD_2()->getQueryDateTime()->getTimeOfAnEvent()->getData() ) )
               {
                    printf( "ERROR receiving invalid TS format <%s>.\n",
                         qry.getQRD_2()->getQueryDateTime()->getTimeOfAnEvent()->getData() );
                    errorMes = "Invalid TS format";
                    err.getErrorCodeAndLocation()->getSegmentID()->setData( qry.getQRD_2()->getName() );
                    bError = true;
                    break;
               }
               // get subject ID number to find
               if ( 0 != memcmp( qry.getQRD_2()->getWhoSubjectFilter( 0 )->getIDNumber()->getData(),
                    "some_token_110022", 18 ) )
               {
                    printf( "ERROR receiving unknown ID number <%s>.\n",
                         qry.getQRD_2()->getWhoSubjectFilter( 0 )->getIDNumber()->getData() );
                    errorMes = "Invalid identifier";
                    err.getErrorCodeAndLocation()->getSegmentID()->setData( qry.getQRD_2()->getName() );
                    bError = true;
                    break;
               }
          } while ( 0 );
          // copy header data
          *adr.getMSH_1() = *qry.getMSH_1();
          adr.getMSH_1()->getSendingApplication()->getNamespaceID()->setData( "server" );
          adr.getMSH_1()->getReceivingApplication()->getNamespaceID()->setData( "HL7SDKtest" );
          adr.getMSH_1()->getMessageType()->getMessageType()->setData( "ADR" );
          adr.getMSH_1()->getMessageType()->getTriggerEvent()->setData( "A19" );
          adr.getMSH_1()->getMessageType()->getMessageStructure()->setData( "ADR_A19" );
          std::string curTime = encodeTimeStamp( time, tm.timezone );
          adr.getMSH_1()->getDateTimeOfMessage()->getTimeOfAnEvent()->setData( curTime );
          adr.getMSH_1()->getMessageControlID()->setData( "token__110023" );

          // init MSA segment
          adr.getMSA_2()->getMessageControlID()->setData( "token__110024" );
          if ( bError )
          {
               // with error acknoledge code
               adr.getMSA_2()->getAcknowledgementCode()->setData( "AR" ); // AE-error, AR-reject
               adr.getMSA_2()->getTextMessage()->setData( errorMes );

               // create ERR segment
               err.getErrorCodeAndLocation()->getCodeIdentifyingError()->setData( "102" );
               *adr.getERR_4() = err;
          }
          else
          {
               // with OK acknoledge code
               adr.getMSA_2()->getAcknowledgementCode()->setData( "AA" ); 

               // copy QRD segment from request
               *adr.getQRD_9() = *qry.getQRD_2();

               // add PID segment with user data
               adr.getQUERY_RESPONSE()->getPID_17()->getSetIDPID()->setData( "1" );
               adr.getQUERY_RESPONSE()->getPID_17()->getPatientIdentifierList( 0 )->getID()->setData( "some_token_110022_ID" );
               adr.getQUERY_RESPONSE()->getPID_17()->getIdentityReliabilityCode( 0 )->setData( "AL" );
               adr.getQUERY_RESPONSE()->getPID_17()->getPatientName( 0 )->getFamilyName()->getSurname()->setData( "Tester" ); //XPN
               adr.getQUERY_RESPONSE()->getPID_17()->getPatientName( 0 )->getNameTypeCode()->setData( "A" );
               // construct phone number
               encodePhoneNumber( 10, 903, "919-6677", 99, -1, "after 6 o'clock", data );
               // verify constructed data and set to object
               vrf.test_set( adr.getQUERY_RESPONSE()->getPID_17()->getPhoneNumberHome()->getXTN_1(),
                    adr.getQUERY_RESPONSE()->getPID_17()->getPhoneNumberHome()->getXTN_1()->getName(), data );

               // add PV1 segment
               adr.getQUERY_RESPONSE()->getPV1_31()->getSetIDPV1()->setData( "1" );
               adr.getQUERY_RESPONSE()->getPV1_31()->getPatientClass()->setData( "N" );
          }

          // convert string to pipe
          msgToPipe( &adr, data );
          printf( "created ADR_A19 message:\n%s\n", data.c_str() );

          // send answer
          mllp.send_msg_mllp( data );
     }
     catch ( ... )
     {
          printf( "ERROR processing QRY_A19 message of client.\n" );
          return -1;
     }
     return 0;
}

