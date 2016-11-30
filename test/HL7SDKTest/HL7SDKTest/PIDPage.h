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

#pragma once

#include <string>
#include "message\ADT_A01.h"

#include "Helper.h"

using namespace std;
using namespace HL7_24;

// CPIDPage dialog

namespace KNOWN_SEX_TYPE
{
     typedef enum _KNOWN_SEX_TYPE
     {
          F_SEX,
          M_SEX,
          UNKNOWN,
          ENUM_LEN,
     }KNOWN_SEX_TYPE;
};

namespace KNOWN_RACE_TYPE
{
     typedef enum _KNOWN_RACE_TYPE
     {
          W_RACE,
          A_RACE,
          B_RACE,
          O_RACE,
          UNKNOWN,
          ENUM_LEN,
     }KNOWN_RACE_TYPE;
};

namespace KNOWN_MERITAL_TYPE
{
     typedef enum _KNOWN_MERITAL_TYPE
     {
          A_MER_TYPE,
          D_MER_TYPE,
          M_MER_TYPE,
          S_MER_TYPE,
          W_MER_TYPE,
          C_MER_TYPE,
          G_MER_TYPE,
          P_MER_TYPE,
          R_MER_TYPE,
          E_MER_TYPE,
          N_MER_TYPE,
          I_MER_TYPE,
          B_MER_TYPE,
          U_MER_TYPE,
          O_MER_TYPE,
          T_MER_TYPE,
          UNKNOWN,
          ENUM_LEN,
     }KNOWN_MERITAL_TYPE;
};

namespace KNOWN_RELIGION_TYPE
{
     typedef enum _KNOWN_RELIGION_TYPE
     {
          AGN_RELIGION,
          ATH_RELIGION,
          BAH_RELIGION,
          BUD_RELIGION,
          BMA_RELIGION,
          BTH_RELIGION,
          BTA_RELIGION,
          BOT_RELIGION,
          CFR_RELIGION,
          CHR_RELIGION,
          ABC_RELIGION,
          AMT_RELIGION,
          AME_RELIGION,
          ANG_RELIGION,
          AOG_RELIGION,
          BAP_RELIGION,
          CAT_RELIGION,
          CRR_RELIGION,
          CHS_RELIGION,
          CMA_RELIGION,
          COC_RELIGION,
          COG_RELIGION,
          COI_RELIGION,
          COM_RELIGION,
          COL_RELIGION,
          EOT_RELIGION,
          EVC_RELIGION,
          EPI_RELIGION,
          FWB_RELIGION,
          FRQ_RELIGION,
          GRE_RELIGION,
          JWN_RELIGION,
          LUT_RELIGION,
          LMS_RELIGION,
          MEN_RELIGION,
          MET_RELIGION,
          MOM_RELIGION,
          NAZ_RELIGION,
          ORT_RELIGION,
          COT_RELIGION,
          PRC_RELIGION,
          PEN_RELIGION,
          COP_RELIGION,
          PRE_RELIGION,
          PRO_RELIGION,
          QUA_RELIGION,
          REC_RELIGION,
          REO_RELIGION,
          SAA_RELIGION,
          SEV_RELIGION,
          SOU_RELIGION,
          UCC_RELIGION,
          UMD_RELIGION,
          UNI_RELIGION,
          UNU_RELIGION,
          WES_RELIGION,
          WMC_RELIGION,
          CNF_RELIGION,
          ERL_RELIGION,
          HIN_RELIGION,
          HVA_RELIGION,
          HSH_RELIGION,
          HOT_RELIGION,
          JAI_RELIGION,
          JEW_RELIGION,
          JCO_RELIGION,
          JOR_RELIGION,
          JOT_RELIGION,
          JRC_RELIGION,
          JRF_RELIGION,
          JRN_RELIGION,
          MOS_RELIGION,
          MSU_RELIGION,
          MSH_RELIGION,
          MOT_RELIGION,
          NAM_RELIGION,
          NRL_RELIGION,
          NOE_RELIGION,
          OTH_RELIGION,
          SHN_RELIGION,
          SIK_RELIGION,
          SPI_RELIGION,
          VAR_RELIGION,
          UNKNOWN,
          ENUM_LEN,
     }KNOWN_RELIGION_TYPE;
};

namespace KNOWN_ETHNIK_TYPE
{
     typedef enum _KNOWN_ETHNIK_TYPE
     {
          H_ETHNIK,
          N_ETHNIK,
          U_ETHNIK,
          UNKNOWN,
          ENUM_LEN,
     }KNOWN_ETHNIK_TYPE;
};

namespace KNOWN_NATION_TYPE
{
     typedef enum _KNOWN_NATION_TYPE
     {
          FRA_NATION,
          DEU_NATION,
          ITA_NATION,
          NLD_NATION,
          ESP_NATION,
          USA_NATION,
          UNKNOWN,
          ENUM_LEN,
     }KNOWN_NATION_TYPE;
};

class CPIDPage : public CPropertyPage, public CHelper
{
	DECLARE_DYNAMIC(CPIDPage)

public:
	CPIDPage();
    CPIDPage( HL7_24::PID* pPID );
    virtual ~CPIDPage( );

// Dialog Data
	enum { IDD = IDD_PIDPAGE };

protected:
     HL7_24::PID* psPID;
     virtual void DoDataExchange( CDataExchange* pDX );    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

    string IsNotShowed( HL7_24::PID* pPID );

public:
     afx_msg void OnCbnSelchangeComboDegreePid();
     afx_msg void OnBnClickedButton1();
     afx_msg void OnBnClickedButton2();
     afx_msg void OnBnClickedButton3();
     virtual BOOL OnInitDialog();
     virtual void OnOK();
     CString csSex;
     CString csRace;
     CString csMerital;
     CString csRelig;
     CString csEthnik;
     CString csExtId;
     CString csIntPId;
     CString csAltId;
     CString csLang;
     CString csAcc;
     CString csSsn;
     afx_msg void OnEnChangeEditExternalidPid();
     afx_msg void OnEnChangeEditInternalPatientId();
     afx_msg void OnEnChangeEditAltPid();
     afx_msg void OnEnChangeEditPatientAccountPid();
     afx_msg void OnEnChangeEditSsnPid();
     afx_msg void OnEnChangeEditPrimLangPid();
     afx_msg void OnCbnSelchangeComboSexPid();
     afx_msg void OnCbnSelchangeComboMeritalPid();
     afx_msg void OnCbnSelchangeComboReligionPid();
     afx_msg void OnCbnSelchangeComboEthnikPid();
     afx_msg void OnCbnSelchangeComboRacePid();
     afx_msg void OnCbnSelchangeComboNationPid();
};
