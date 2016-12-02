/*
 * This file is part of AurigaHL7.
 *
 * AurigaHL7 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * AurigaHL7 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with AurigaHL7.  If not, see <http://www.gnu.org/licenses/>.
 */

// client.cpp : Defines the entry point for the console application.
//

#include "hl7mllp.h" // place hl7mllp.h file as first include in the source file
#include <stdio.h>
#include <Windows.h>
#include <string>
#include <sys/timeb.h>
#include "message/QRY_A19.h"
#include "message/ADR_A19.h"
#include "message/ACK.h"
#include "dataencode.h"
#include "ObjToPipe.h"

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

int main(int argc, char* argv[])
{
     // create QRY_A19 message
     HL7_24::QRY_A19 qry; // request PID message
     HL7_24::ADR_A19 adr; // answer message
     __timeb64 tm;
     SYSTEMTIME time;
     std::string data;
     std::string result;

     _ftime64( &tm );
     GetSystemTime( &time );

     try
     {
          // init MSH segment
          qry.getMSH_1()->getEncodingCharacters()->setData( "^~\\&" );
          qry.getMSH_1()->getSendingApplication()->getNamespaceID()->setData( "HL7SDKtest" );
          qry.getMSH_1()->getReceivingApplication()->getNamespaceID()->setData( "server" );
          qry.getMSH_1()->getMessageType()->getMessageType()->setData( "QRY" );
          qry.getMSH_1()->getMessageType()->getTriggerEvent()->setData( "A19" );
          qry.getMSH_1()->getMessageType()->getMessageStructure()->setData( "QRY_A19" );
          qry.getMSH_1()->getProcessingID()->getProcessingID()->setData( "T" );
          qry.getMSH_1()->getAcceptAcknowledgmentType()->setData( "AL" );
          qry.getMSH_1()->getApplicationAcknowledgmentType()->setData( "AL" );
          qry.getMSH_1()->getCountryCode()->setData( "RUS" );
          qry.getMSH_1()->getCharacterSet()->setData( "ASCII" );
          qry.getMSH_1()->getVersionID()->getVID_1()->setData( "2.4" );
          std::string curTime = encodeTimeStamp( time, tm.timezone );
          qry.getMSH_1()->getDateTimeOfMessage()->getTimeOfAnEvent()->setData( curTime );
          qry.getMSH_1()->getMessageControlID()->setData( "token__110022" );

          // init QRD segment
          qry.getQRD_2()->getQueryFormatCode()->setData( "R" );
          qry.getQRD_2()->getQueryPriority()->setData( "I" );
          qry.getQRD_2()->getQuantityLimitedRequest()->getQuantity()->setData( "1" );
          qry.getQRD_2()->getQuantityLimitedRequest()->getUnits()->getIdentifier()->setData( "RD" );
          qry.getQRD_2()->getWhatSubjectFilter()->getIdentifier()->setData( "APN" );
          qry.getQRD_2()->getQueryResultsLevel()->setData( "R" );
          qry.getQRD_2()->getWhoSubjectFilter( 0 )->getIDNumber()->setData( "some_token_110022" );
          qry.getQRD_2()->getQueryID()->setData( "QRY__token__110022" );
          qry.getQRD_2()->getQueryDateTime()->getTimeOfAnEvent()->setData( curTime );

          // convert string to pipe
          msgToPipe( &qry, data );
          printf( "created QRY_A19 message:\n%s\n", data.c_str() );
     }
     catch ( ... )
     {
          printf( "ERROR constructing QRY_A19 message.\n" );
          return -1;
     }
     // create MLLP client socket
     HL7MLLP sock( "127.0.0.1", "7711" );
     try
     {
          // send request
          sock.send_msg_mllp( data );
          // receive answer
          sock.read_msg_mllp( result );
          printf( "received answer message:\n%s\n", result.c_str() );
     }
     catch ( ... )
     {
          printf( "ERROR sending QRY_A19 message or receiving result.\n" );
          return -1;
     }
     try
     {
          std::string param;
          // convert answer to message
          pipeToMsg( &adr, result );
          // get answer acknowledgement code
          adr.getMSA_2()->getAcknowledgementCode()->getData( data );
          if ( ( data != "AA" ) && ( data != "CA" ) ) // check if there error
          {
               // check if there is extended error
               if ( adr.isERR_4() )
               {
                    // print extended error data
                    adr.getERR_4()->getErrorCodeAndLocation()->getSegmentID()->getData( param );
                    printf( "ERROR Acknowledgment code = <%s>, segment = <%s>, sequence = <",
                         data.c_str(), param.c_str() );
                    adr.getERR_4()->getErrorCodeAndLocation()->getSequence()->getData( param );
                    printf( "%s>, field = <", param.c_str() );
                    adr.getERR_4()->getErrorCodeAndLocation()->getFieldPosition()->getData( param );
                    printf( "%s>; = ", param.c_str() );
                    adr.getERR_4()->getErrorCodeAndLocation()->getCodeIdentifyingError()->getIdentifier()->getData( param );
                    printf( "%s .\n", param.c_str() );
               }
               else
               {
                    // print short error data
                    adr.getMSA_2()->getErrorCondition()->getIdentifier()->getData( param );
                    printf( "ERROR Acknowledgment code = <%s>, Error Condition = <",
                         data.c_str(), param.c_str() );
                    adr.getMSA_2()->getTextMessage()->getData( param );
                    printf( "%s>.\n", param.c_str() );
               }
               return -1;
          }
          // check if it is answer for our request
          adr.getMSA_2()->getMessageControlID()->getData( param );
          if ( !qry.getMSH_1()->getMessageControlID()->isEmpty() )
               qry.getMSH_1()->getMessageControlID()->getData( data );
          else
               data = "";
          if ( param != data )
          {
               // it is not our answer
               printf( "ERROR answer MessageControlID <%s> does not equal to request MessageControlID <%s>.\n",
                    param.c_str(), data.c_str() );
               return -1;
          }
          // check if answer has requested data (PID segment)
          if ( ( !adr.isQUERY_RESPONSE( 0 ) ) || ( !adr.getQUERY_RESPONSE( 0 )->isPID_17() ) )
          {
               printf( "ERROR no PID segment in answer <%s>.\n", data.c_str() );
               return -1;
          }
     }
     catch ( ... )
     {
          printf( "ERROR sending QRY_A19 message or receiving result.\n" );
          return -1;
     }
     // print family name of requested user
     printf( "Correct answer received for %s user.\n", 
          adr.getQUERY_RESPONSE( 0 )->getPID_17()->getPatientName()->getFamilyName()->getData() );
     return 0;
}

