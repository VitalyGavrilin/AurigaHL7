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
#include "message\ADT_A01.h"

#include "Helper.h"

using namespace std;
using namespace HL7_24;

// CIN1Page dialog

namespace KNOWN_RELATIONS_TYPE
{
     typedef enum _KNOWN_RELATIONS_TYPE
     {
          BRO_RELTYPE,
          CH_RELTYPE,
          D_RELTYPE,
          E_RELTYPE,
          EC_RELTYPE,
          F_RELTYPE,
          FR_RELTYPE,
          GC_RELTYPE,
          GF_RELTYPE,
          GM_RELTYPE,
          GP_RELTYPE,
          H_RELTYPE,
          M_RELTYPE,
          P_RELTYPE,
          S_RELTYPE,
          SIB_RELTYPE,
          SIS_RELTYPE,
          SP_RELTYPE,
          W_RELTYPE,
          UNKNOWN,
          ENUM_LEN,
     }KNOWN_RELATIONS_TYPE;
};

class CIN1Page : public CPropertyPage, public CHelper
{
	DECLARE_DYNAMIC(CIN1Page)

public:
	CIN1Page();
    CIN1Page( HL7_24::IN1* pIN1 );
    virtual ~CIN1Page( );

// Dialog Data
	enum { IDD = IDD_IN1PAGE };

protected:
     HL7_24::IN1* psIN1;
     CString csTitle;
     virtual void DoDataExchange( CDataExchange* pDX );    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

    string IsNotShowed( HL7_24::IN1* pIN1 );
public:
     afx_msg void OnBnClickedButton1();
     afx_msg void OnBnClickedButton3();
     afx_msg void OnBnClickedButton2();
     afx_msg void OnBnClickedButton4();
     virtual BOOL OnInitDialog();
     afx_msg void OnBnClickedButton5();
     virtual void OnOK();
     CString csInPolicyNum;
     CString csInCompany;
     CString csInPhone;
     CString csInCompanyID;
     CString csInPlan;
     CString csInGrpNum;
     CString csInGrpNam;
     CString csInRelat;
     afx_msg void OnEnChangeEditInsPolicynumIn1();
     afx_msg void OnEnChangeEditInCompanyIn1();
     afx_msg void OnEnChangeEditInsPhoneIn1();
     afx_msg void OnEnChangeEditInsuranceCompanyIdIn1();
     afx_msg void OnEnChangeEditInsPlanIn1();
     afx_msg void OnEnChangeEditInsGrpnumIn1();
     afx_msg void OnEnChangeEditInsGrpnameIn1();
     afx_msg void OnCbnSelchangeComboInsuredRelationsIn1();
};
