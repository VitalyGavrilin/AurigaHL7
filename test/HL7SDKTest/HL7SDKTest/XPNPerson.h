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

// CXPNPerson dialog

namespace KNOWN_DEGREE_TYPE
{
     typedef enum _KNOWN_DEGREE_TYPE
     {
          AAS_DEGREE,
          AA_DEGREE,
          ABA_DEGREE,
          AE_DEGREE,
          AS_DEGREE,
          BA_DEGREE,
          BBA_DEGREE,
          BE_DEGREE,
          BFA_DEGREE,
          BN_DEGREE,
          BS_DEGREE,
          BSL_DEGREE,
          BT_DEGREE,
          CER_DEGREE,
          DIP_DEGREE,
          DBA_DEGREE,
          DED_DEGREE,
          PharmD_DEGREE,
          PHE_DEGREE,
          PHD_DEGREE,
          PHS_DEGREE,
          MD_DEGREE,
          DO_DEGREE,
          HS_DEGREE,
          JD_DEGREE,
          MA_DEGREE,
          MBA_DEGREE,
          MCE_DEGREE,
          MDI_DEGREE,
          MED_DEGREE,
          MEE_DEGREE,
          ME_DEGREE,
          MFA_DEGREE,
          MME_DEGREE,
          MS_DEGREE,
          MSL_DEGREE,
          MT_DEGREE,
          NG_DEGREE,
          SEC_DEGREE,
          TS_DEGREE,
          UNKNOWN,
          ENUM_LEN,
     }KNOWN_DEGREE_TYPE;
};

class CXPNPerson : public CDialogEx, public CHelper
{
	DECLARE_DYNAMIC(CXPNPerson)

public:
     CXPNPerson(CWnd* pParent = NULL);   // standard constructor
     CXPNPerson( HL7_24::XPN* pXPN, CString name, CWnd* pParent = NULL );
     CXPNPerson( HL7_24::XPN* pXPN, CString name, CString ID, CWnd* pParent = NULL );
     virtual ~CXPNPerson();

// Dialog Data
	enum { IDD = IDD_XPNPERSON };

protected:
     HL7_24::XPN* psXPN;
     CString save_name;
     BOOL bXCN;
     CString sIDNumber;

	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

    string IsNotShowed( HL7_24::XPN* pXPN );

public:
     //string show_missed;
     afx_msg void OnBnClickedOk();
     virtual BOOL OnInitDialog();

     CString getID(){ return sIDNumber; }
};
