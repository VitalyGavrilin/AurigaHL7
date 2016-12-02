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

// CAddressXAD dialog

class CAddressXAD : public CDialogEx, public CHelper
{
	DECLARE_DYNAMIC(CAddressXAD)

public:
	CAddressXAD(CWnd* pParent = NULL);   // standard constructor
    CAddressXAD( HL7_24::XAD* pXAD, CWnd* pParent = NULL );
    virtual ~CAddressXAD( );

// Dialog Data
	enum { IDD = IDD_ADDRESSXAD };

protected:
     HL7_24::XAD* psXAD;

     virtual void DoDataExchange( CDataExchange* pDX );    // DDX/DDV support
    string IsNotShowed( HL7_24::XAD* pXAD );

	DECLARE_MESSAGE_MAP()
public:
     afx_msg void OnEnChangeEdit1( );
     afx_msg void OnBnClickedOk();
     virtual BOOL OnInitDialog();
};
