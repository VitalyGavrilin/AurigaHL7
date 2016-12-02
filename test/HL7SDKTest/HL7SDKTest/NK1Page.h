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

using namespace std;
using namespace HL7_24;

// CNK1Page dialog

class CNK1Page : public CPropertyPage, public CHelper
{
	DECLARE_DYNAMIC(CNK1Page)

public:
	CNK1Page();
    CNK1Page( HL7_24::NK1* pNK1 );
    virtual ~CNK1Page( );

// Dialog Data
	enum { IDD = IDD_NK1PAGE };

protected:
     HL7_24::NK1* psNK1;
     
     virtual void DoDataExchange( CDataExchange* pDX );    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

    string IsNotShowed( HL7_24::NK1* pNK1 );
public:
     afx_msg void OnBnClickedButton1();
     afx_msg void OnBnClickedButton2();
     virtual BOOL OnInitDialog();
     virtual void OnOK();
     CString csRelat;
     CString csPhone;
     CString csPhoneB;
     afx_msg void OnCbnSelchangeComboNkrelatNk1();
     afx_msg void OnEnChangeEditPhoneNk1();
     afx_msg void OnEnChangeEditBisPhoneNk1();
};
