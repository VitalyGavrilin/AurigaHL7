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

// CDG1Page dialog

namespace KNOWN_DIAGNOSIS_TYPE_TYPE
{
     typedef enum _KNOWN_DIAGNOSIS_TYPE_TYPE
     {
          A_DIAGTYPE,
          W_DIAGTYPE,
          F_DIAGTYPE,
          UNKNOWN,
          ENUM_LEN,
     }KNOWN_DIAGNOSIS_TYPE_TYPE;
};

class CDG1Page : public CPropertyPage, public CHelper
{
	DECLARE_DYNAMIC(CDG1Page)

public:
	CDG1Page();
    CDG1Page( HL7_24::DG1* pDG1 );
    virtual ~CDG1Page( );

// Dialog Data
	enum { IDD = IDD_DG1PAGE };

protected:
     //DG1* psDG1;
     HL7_24::DG1* psDG1;
     CString csTitle;
     
     virtual void DoDataExchange( CDataExchange* pDX );    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

    string IsNotShowed( HL7_24::DG1* pDG1 );
public:
     virtual BOOL OnInitDialog();
     virtual void OnOK();
     CString csDiagID;
     CString csDiagDesc;
     CString csDiagType;
     CString csDgGrp;
     afx_msg void OnEnChangeEditDiagIdDg1();
     afx_msg void OnEnChangeEditDiagDescDg1();
     afx_msg void OnCbnSelchangeComboDiagTypeDg1();
     afx_msg void OnEnChangeEditDgRelatedGrpDg1();
};
