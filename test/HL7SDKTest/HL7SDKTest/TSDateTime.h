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
#include "datatype\TM.h"
#include "message\ADT_A01.h"
//#include "alexey_primitives\TS.h"
//#include "alexey_primitives\DT.h"
//#include "alexey_primitives\TM.h"

#include "Helper.h"

using namespace std;
using namespace HL7_24;
//using namespace HL7_CORE;

// CTSDateTime dialog

class CTSDateTime : public CDialogEx, public CHelper
{
	DECLARE_DYNAMIC(CTSDateTime)

public:
     CTSDateTime(CWnd* pParent = NULL);   // standard constructor
     CTSDateTime( HL7_24::TS* pTS, CString name, CWnd* pParent = NULL );
     CTSDateTime( HL7_24::DT* pTS, CString name, CWnd* pParent = NULL );
     CTSDateTime( HL7_24::TM* pTS, CString name, CWnd* pParent = NULL );
     virtual ~CTSDateTime();

// Dialog Data
	enum { IDD = IDD_TSDATETIME };

protected:
     //HL7_CORE::TS ts_decr;
     HL7_24::TS* psTS;
     //HL7_CORE::DT dt_decr;
     HL7_24::DT* psDT;
     //HL7_CORE::TM tm_decr;
     HL7_24::TM* psTM;
     SYSTEMTIME stime;
     int fractionOfSec;
     int offset;
     std::string precision;
     BOOL bDate;
     BOOL bTime;
     CString save_name;
     virtual void DoDataExchange( CDataExchange* pDX );    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
     afx_msg void OnBnClickedCheckIsPrecision();
     afx_msg void OnBnClickedCheckIsTsOffset();
     afx_msg void OnBnClickedCheckIsPrecisionTs();
     afx_msg void OnBnClickedOk();
     virtual BOOL OnInitDialog();
};
