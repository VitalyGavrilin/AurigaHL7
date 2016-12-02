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

#pragma once

#include <string>
#include "datatype\XPN.h"
#include "datatype\XAD.h"
#include "datatype\XCN.h"
#include "datatype\DT.h"
//#include "alexey_primitives\TS.h"
//#include "alexey_primitives\DT.h"

using namespace std;
using namespace HL7_24;

namespace KNOWN_COUNTRY_TYPE
{
     typedef enum _KNOWN_COUNTRY_TYPE
     {
          ABW_COUNTRY,
          AFG_COUNTRY,
          AFT_COUNTRY,
          AGO_COUNTRY,
          AIA_COUNTRY,
          ALB_COUNTRY,
          AND_COUNTRY,
          ANT_COUNTRY,
          ARE_COUNTRY,
          ARG_COUNTRY,
          ARM_COUNTRY,
          ASM_COUNTRY,
          ATA_COUNTRY,
          ATG_COUNTRY,
          AUS_COUNTRY,
          AUT_COUNTRY,
          AZE_COUNTRY,
          BDI_COUNTRY,
          BEL_COUNTRY,
          BEN_COUNTRY,
          BFA_COUNTRY,
          BGD_COUNTRY,
          BGR_COUNTRY,
          BHR_COUNTRY,
          BHS_COUNTRY,
          BIH_COUNTRY,
          BLR_COUNTRY,
          BLZ_COUNTRY,
          BMU_COUNTRY,
          BOL_COUNTRY,
          BRA_COUNTRY,
          BRB_COUNTRY,
          BRN_COUNTRY,
          BTN_COUNTRY,
          BVT_COUNTRY,
          BWA_COUNTRY,
          CAF_COUNTRY,
          CAN_COUNTRY,
          CCK_COUNTRY,
          CHE_COUNTRY,
          CHL_COUNTRY,
          CHN_COUNTRY,
          CIV_COUNTRY,
          CMR_COUNTRY,
          COD_COUNTRY,
          COG_COUNTRY,
          COK_COUNTRY,
          COL_COUNTRY,
          COM_COUNTRY,
          CPV_COUNTRY,
          CRI_COUNTRY,
          CUB_COUNTRY,
          CXR_COUNTRY,
          CYM_COUNTRY,
          CYP_COUNTRY,
          CZE_COUNTRY,
          DEU_COUNTRY,
          DJI_COUNTRY,
          DMA_COUNTRY,
          DNK_COUNTRY,
          DOM_COUNTRY,
          DZA_COUNTRY,
          ECU_COUNTRY,
          EGY_COUNTRY,
          ERI_COUNTRY,
          ESH_COUNTRY,
          ESP_COUNTRY,
          EST_COUNTRY,
          ETH_COUNTRY,
          FIN_COUNTRY,
          FJI_COUNTRY,
          FLK_COUNTRY,
          FRA_COUNTRY,
          FRO_COUNTRY,
          FSM_COUNTRY,
          GAB_COUNTRY,
          GBR_COUNTRY,
          GEO_COUNTRY,
          GHA_COUNTRY,
          GIB_COUNTRY,
          GIN_COUNTRY,
          GLP_COUNTRY,
          GMB_COUNTRY,
          GNB_COUNTRY,
          GNQ_COUNTRY,
          GRC_COUNTRY,
          GRD_COUNTRY,
          GRL_COUNTRY,
          GTM_COUNTRY,
          GUF_COUNTRY,
          GUM_COUNTRY,
          GUY_COUNTRY,
          HKG_COUNTRY,
          HMD_COUNTRY,
          HND_COUNTRY,
          HRV_COUNTRY,
          HTI_COUNTRY,
          HUN_COUNTRY,
          IDN_COUNTRY,
          IND_COUNTRY,
          IOT_COUNTRY,
          IRL_COUNTRY,
          IRN_COUNTRY,
          IRQ_COUNTRY,
          ISL_COUNTRY,
          ISR_COUNTRY,
          ITA_COUNTRY,
          JAM_COUNTRY,
          JOR_COUNTRY,
          JPN_COUNTRY,
          KAZ_COUNTRY,
          KEN_COUNTRY,
          KGZ_COUNTRY,
          KHM_COUNTRY,
          KIR_COUNTRY,
          KNA_COUNTRY,
          KOR_COUNTRY,
          KWT_COUNTRY,
          LAO_COUNTRY,
          LBN_COUNTRY,
          LBR_COUNTRY,
          LBY_COUNTRY,
          LCA_COUNTRY,
          LIE_COUNTRY,
          LKA_COUNTRY,
          LSO_COUNTRY,
          LTU_COUNTRY,
          LUX_COUNTRY,
          LVA_COUNTRY,
          MAC_COUNTRY,
          MAR_COUNTRY,
          MCO_COUNTRY,
          MDA_COUNTRY,
          MDG_COUNTRY,
          MDV_COUNTRY,
          MEX_COUNTRY,
          MHL_COUNTRY,
          MKD_COUNTRY,
          MLI_COUNTRY,
          MLT_COUNTRY,
          MMR_COUNTRY,
          MNG_COUNTRY,
          MNP_COUNTRY,
          MOZ_COUNTRY,
          MRT_COUNTRY,
          MSR_COUNTRY,
          MTQ_COUNTRY,
          MUS_COUNTRY,
          MWI_COUNTRY,
          MYS_COUNTRY,
          MYT_COUNTRY,
          NAM_COUNTRY,
          NCL_COUNTRY,
          NER_COUNTRY,
          NFK_COUNTRY,
          NGA_COUNTRY,
          NIC_COUNTRY,
          NIU_COUNTRY,
          NLD_COUNTRY,
          NOR_COUNTRY,
          NPL_COUNTRY,
          NRU_COUNTRY,
          NZL_COUNTRY,
          OMN_COUNTRY,
          PAK_COUNTRY,
          PAN_COUNTRY,
          PCN_COUNTRY,
          PER_COUNTRY,
          PHL_COUNTRY,
          PLW_COUNTRY,
          PNG_COUNTRY,
          POL_COUNTRY,
          PRI_COUNTRY,
          PRK_COUNTRY,
          PRT_COUNTRY,
          PRY_COUNTRY,
          PYF_COUNTRY,
          QAT_COUNTRY,
          REU_COUNTRY,
          ROM_COUNTRY,
          RUS_COUNTRY,
          RWA_COUNTRY,
          SAU_COUNTRY,
          SDN_COUNTRY,
          SEN_COUNTRY,
          SGP_COUNTRY,
          SGS_COUNTRY,
          SHN_COUNTRY,
          SJM_COUNTRY,
          SLB_COUNTRY,
          SLE_COUNTRY,
          SLV_COUNTRY,
          SMR_COUNTRY,
          SOM_COUNTRY,
          SPM_COUNTRY,
          STP_COUNTRY,
          SUR_COUNTRY,
          SVK_COUNTRY,
          SVN_COUNTRY,
          SWE_COUNTRY,
          SWZ_COUNTRY,
          SYC_COUNTRY,
          SYR_COUNTRY,
          TCA_COUNTRY,
          TCD_COUNTRY,
          TGO_COUNTRY,
          THA_COUNTRY,
          TJK_COUNTRY,
          TKL_COUNTRY,
          TKM_COUNTRY,
          TMP_COUNTRY,
          TON_COUNTRY,
          TTO_COUNTRY,
          TUN_COUNTRY,
          TUR_COUNTRY,
          TUV_COUNTRY,
          TWN_COUNTRY,
          TZA_COUNTRY,
          UGA_COUNTRY,
          UKR_COUNTRY,
          UMI_COUNTRY,
          URY_COUNTRY,
          USA_COUNTRY,
          UZB_COUNTRY,
          VAT_COUNTRY,
          VCT_COUNTRY,
          VEN_COUNTRY,
          VGB_COUNTRY,
          VIR_COUNTRY,
          VNM_COUNTRY,
          VUT_COUNTRY,
          WLF_COUNTRY,
          WSM_COUNTRY,
          YEM_COUNTRY,
          YUG_COUNTRY,
          ZAF_COUNTRY,
          ZMB_COUNTRY,
          ZWE_COUNTRY,
          UNKNOWN,
          ENUM_LEN,
     }KNOWN_COUNTRY_TYPE;
};

class CHelper
{
public:
     CHelper();
     ~CHelper();

     wstring getWString( string val )
     {
          wstring dataW( val.begin( ), val.end( ) );
          return dataW;
     }
     string getAString( wstring val )
     {
          string dataW( val.begin( ), val.end( ) );
          return dataW;
     }
     wstring constructAddress( HL7_24::XAD* pXAD );
     wstring constructName( HL7_24::XPN* pXPN );
     wstring constructName( HL7_24::XCN* pXCN );
     wstring constructDateTime( HL7_24::TS* pTS );
     wstring constructDateTime( HL7_24::DT* pTS );
     HL7_24::XPN* getAsXPN( HL7_24::XCN* pXCN );


     string show_missed;
};

typedef enum _HL7_KNOWN_MESSAGES_TYPE
{
     UNKNOWN_TYPE,
     ADT_A01_TYPE,
     ADT_A09_TYPE,
     ADT_A11_TYPE,
     ORU_R01_TYPE,
}HL7_KNOWN_MESSAGES_TYPE;

class CMessageHelper
{
public:
     static HL7_KNOWN_MESSAGES_TYPE getMessageType( std::wstring mes )
     {
          if ( mes == L"ADT_A01" )
               return ADT_A01_TYPE;
          if ( mes == L"ADT_A09" )
               return ADT_A09_TYPE;
          if ( mes == L"ADT_A11" )
               return ADT_A11_TYPE;
          if ( mes == L"ORU_R01" )
               return ORU_R01_TYPE;
          return UNKNOWN_TYPE;
     }
     static HL7_KNOWN_MESSAGES_TYPE getMessageType( std::string mes )
     {
          return getMessageType( getWString( mes ) );
          //if ( mes == "ADT_A01" )
          //     return ADT_A01_TYPE;
          //return UNKNOWN_TYPE;
     }
     static HL7_KNOWN_MESSAGES_TYPE getMessageType( CString mes )
     {
          return getMessageType( ( std::wstring )mes );
          //     if ( mes == L"ADT_A01" )
          //     return ADT_A01_TYPE;
          //return UNKNOWN_TYPE;
     }
     static string getAString( wstring val )
     {
          string dataW( val.begin(), val.end() );
          return dataW;
     }
private:
     static wstring getWString( string val )
     {
          wstring dataW( val.begin(), val.end() );
          return dataW;
     }
};
