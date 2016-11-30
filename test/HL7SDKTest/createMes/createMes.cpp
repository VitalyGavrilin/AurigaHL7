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

// createMes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <string>
#include <sys/timeb.h>
#include "ObjToPipe.h"
#include "message/ADR_A19.h"
#include "dataencode.h"

std::string encodeTimeStamp( SYSTEMTIME& st, short zone )
{
     std::string encoded_val;
     try
     {
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

int _tmain(int argc, _TCHAR* argv[])
{
     HL7_24::ADR_A19 adr;
     std::string data;
     __timeb64 tm;
     char number[ 25 ];
     SYSTEMTIME endTime;
     int hl7req_num = 1;
     std::string state = "KJZDHRUYRSB7KJDBFVLJH87ZSDLKH";
     std::string clientId = "324812218814-sf225socbl5k556r6samql1e2fiurilf.apps.googleusercontent.com";
     try
     {
          HL7_24::MSH* msh = adr.getMSH_1();
          msh->getEncodingCharacters()->setData( "^~\\&" );
          msh->getSendingApplication()->getNamespaceID()->setData( "HIS" );
          msh->getReceivingApplication()->getNamespaceID()->setData( "FitToHIS" );
          msh->getMessageType()->getMessageType()->setData( "ADR" );
          msh->getMessageType()->getTriggerEvent()->setData( "A19" );
          msh->getMessageType()->getMessageStructure()->setData( "ADR_A19" );
          msh->getProcessingID()->getProcessingID()->setData( "T" );
          msh->getAcceptAcknowledgmentType()->setData( "AL" );
          msh->getApplicationAcknowledgmentType()->setData( "AL" );
          msh->getCountryCode()->setData( "RUS" );
          msh->getCharacterSet()->setData( "ASCII" );
          msh->getVersionID()->getVID_1()->setData( "2.4" );
          _ftime64( &tm );
          GetSystemTime( &endTime );
          data = encodeTimeStamp( endTime, tm.timezone );
          msh->getDateTimeOfMessage()->getTimeOfAnEvent()->setData( data );
          sprintf( number, "__%d", hl7req_num );
          std::string tokenReq = state + std::string( number );
          msh->getMessageControlID()->setData( tokenReq );

          HL7_24::MSA* msa = adr.getMSA_2();
          msa->getAcknowledgementCode()->setData( "AA" ); //AE-error, AR-reject
          hl7req_num++;
          sprintf( number, "__%d", hl7req_num );
          tokenReq = state + std::string( number );
          msa->getMessageControlID()->setData( tokenReq );

          HL7_24::QRD* qrd = adr.getQRD_9();
          qrd->getQueryFormatCode()->setData( "R" );
          qrd->getQueryPriority()->setData( "I" );
          qrd->getQuantityLimitedRequest()->getQuantity()->setData( "1" );
          qrd->getQuantityLimitedRequest()->getUnits()->getIdentifier()->setData( "RD" );
          qrd->getWhatSubjectFilter()->getIdentifier()->setData( "APN" );
          qrd->getQueryResultsLevel()->setData( "R" );
          qrd->getWhoSubjectFilter( 0 )->getIDNumber()->setData( clientId );
          sprintf( number, "__%d", hl7req_num );
          data = std::string( "QRY_" ) + state + std::string( number );
          qrd->getQueryID()->setData( data );
          data = encodeTimeStamp( endTime, tm.timezone );
          qrd->getQueryDateTime()->getTimeOfAnEvent()->setData( data );

          HL7_24::PID* pid = adr.getQUERY_RESPONSE()->getPID_17();
          pid->getSetIDPID()->setData( "1" );
          pid->getPatientIdentifierList( 0 )->getID()->setData( clientId );
          pid->getIdentityReliabilityCode( 0 )->setData( "AL" );
          pid->getPatientName( 0 )->getFamilyName()->getSurname()->setData( clientId ); //XPN
          pid->getPatientName( 0 )->getNameTypeCode()->setData( "S" );

          HL7_24::PV1* pv1 = adr.getQUERY_RESPONSE()->getPV1_31();
          pv1->getSetIDPV1()->setData( "1" );
          pv1->getPatientClass()->setData( "N" );

          data = "";
          msgToPipe( &adr, data );
          FILE* fl = fopen( "adr_a19.txt", "a+" );
          fprintf( fl, "%s", data.c_str() );
          fclose( fl );
     }
     catch ( ... )
     {
          printf( "ERROR constructing ADR_A19.\n" );
     }
     return 0;
}

