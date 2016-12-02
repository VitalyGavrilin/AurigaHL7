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

#pragma once

#include <string>
#include "message\ADT_A01.h"

#include "Helper.h"

using namespace HL7_24;
using namespace std;

// CEVNSegment dialog

class CEVNSegment : public CPropertyPage, public CHelper
{
	DECLARE_DYNAMIC(CEVNSegment)

public:
	CEVNSegment();
    CEVNSegment( HL7_24::EVN* pEVN );
    virtual ~CEVNSegment( );

// Dialog Data
	enum { IDD = IDD_EVNSEGMENT };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

    string IsNotShowed( HL7_24::EVN* pEVN );
public:
     HL7_24::EVN* psEVN;

     afx_msg void OnBnClickedCheckIsEvnOffset();
     afx_msg void OnBnClickedCheckIsPrecision();
     afx_msg void OnBnClickedButton1();
     virtual BOOL OnInitDialog();
     afx_msg void OnBnClickedButton2();
     virtual void OnOK();
     CString csEvtCode;
     afx_msg void OnEnChangeEditEvtCode();
};
