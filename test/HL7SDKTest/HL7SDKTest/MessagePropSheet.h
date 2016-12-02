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

#include <vector>
#include "MessagePage.h"
#include "MSHPage.h"
#include "EVNSegment.h"
#include "PIDPage.h"
#include "AL1Page.h"
#include "IN1Page.h"

#include "Tables.h"
#include "Helper.h"

using namespace std;

// CMessagePropSheet

class CMessagePropSheet : public CPropertySheet, public CHelper
{
	DECLARE_DYNAMIC(CMessagePropSheet)

public:
     CMessagePropSheet( UINT nIDCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0 );
     CMessagePropSheet(LPCTSTR pszCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
     CMessagePropSheet( CString name, CString& message, CWnd* pParentWnd = NULL, UINT iSelectPage = 0 );
     CMessagePropSheet( HL7_VERSION_ENUM ver, CString name, CString& message, CWnd* pParentWnd = NULL, UINT iSelectPage = 0 );
     virtual ~CMessagePropSheet();

     //void FinalyzeInit( CString name, CString& message );

     void setHL7Message( CString message ){ ( (CEdit*)GetDlgItem( IDC_EDIT_MESSAGE ) )->SetWindowText( message ); }
     CString getHL7Message()
     {
          return message_save;
          //CString message;
          //( (CEdit*)GetDlgItem( IDC_EDIT_MESSAGE ) )->GetWindowTextW( message );
          //return message;
     }

protected:
     CMessagePage* Message;
     void* mes_buf;
     CString message_save;

     DECLARE_MESSAGE_MAP( )

    void makeADT_A01Editor( HL7_VERSION_ENUM ver, CString& message );
    void makeADT_A09Editor( HL7_VERSION_ENUM ver, CString& message );
    void makeORU_R01Editor( HL7_VERSION_ENUM ver, CString& message );
    void initPages();

    vector<CPropertyPage*> pages;
public:
     virtual BOOL OnInitDialog();
     afx_msg void OnIdok();
};


