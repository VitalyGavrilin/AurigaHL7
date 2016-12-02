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

// CPV1Page dialog

class CPV1Page : public CPropertyPage, public CHelper
{
	DECLARE_DYNAMIC(CPV1Page)

public:
	CPV1Page();
    CPV1Page( HL7_24::PV1* pPV1 );
    virtual ~CPV1Page();

// Dialog Data
	enum { IDD = IDD_PV1PAGE };

protected:
     HL7_24::PV1* psPV1;
     
     virtual void DoDataExchange( CDataExchange* pDX );    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

    string IsNotShowed( HL7_24::PV1* pPV1 );
public:
     afx_msg void OnBnClickedButtonAdmtimeEdit();
     afx_msg void OnBnClickedButtondistimeEdit();
     virtual BOOL OnInitDialog();
     afx_msg void OnBnClickedButtonAttdocEdit();
     afx_msg void OnBnClickedButtonRefdocEdit();
     afx_msg void OnBnClickedButtonCondocEdit();
     afx_msg void OnBnClickedButtonAdmdocEdit();
     virtual void OnOK();
     CString csCareUnitPr;
     CString csRoomPr;
     CString csBedPr;
     CString csCareUnitCur;
     CString csRoomCur;
     CString csBedCur;
     afx_msg void OnEnChangeEditLocCareUnitPriorPv1();
     afx_msg void OnEnChangeEditLocRoomPriorPv1();
     afx_msg void OnEnChangeEditLocBedPriorPv1();
     afx_msg void OnEnChangeEditLocCareUnitCurPv1();
     afx_msg void OnEnChangeEditLocRoomCurPv1();
     afx_msg void OnEnChangeEditLocBedCurPv1();
};
