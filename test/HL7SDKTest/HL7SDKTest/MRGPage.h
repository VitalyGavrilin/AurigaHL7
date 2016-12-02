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
#include "segment\MRG.h"
#include "message\ADT_A01.h"

#include "Helper.h"

using namespace std;
using namespace HL7_24;

// CMRGPage dialog

class CMRGPage : public CPropertyPage, public CHelper
{
	DECLARE_DYNAMIC(CMRGPage)

public:
	CMRGPage();
    CMRGPage( HL7_24::MRG* pMRG );
    virtual ~CMRGPage();

// Dialog Data
	enum { IDD = IDD_MRGPAGE };

protected:
     HL7_24::MRG* psMRG;
     
     virtual void DoDataExchange( CDataExchange* pDX );    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

    string IsNotShowed( HL7_24::MRG* pMRG );
public:
     virtual BOOL OnInitDialog();
     virtual void OnOK();
     CString csPatientID;
     CString csPatientAccc;
     afx_msg void OnEnChangeEditPriorPatientIdMrg();
     afx_msg void OnEnChangeEditPriorPatientAccnumMrg();
};
