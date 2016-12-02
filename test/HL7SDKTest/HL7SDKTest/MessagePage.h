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

#include "Helper.h"
#include "Tables.h"

// CMessagePage dialog

class CMessagePage : public CPropertyPage, public CHelper
{
	DECLARE_DYNAMIC(CMessagePage)

public:
	CMessagePage();
    CMessagePage( CString name, CString& message );
    virtual ~CMessagePage();

// Dialog Data
	enum { IDD = IDD_MESSAGEPAGE };

    void setMessageName( CString name );
    void setHL7Message( CString message );
    CString getHL7Message();

    HL7_KNOWN_MESSAGES_TYPE getMessageType()
    {
         CString name;
         ( (CEdit*)GetDlgItem( IDC_MESSAGE_NAME ) )->GetWindowTextW( name );
         return CMessageHelper::getMessageType( name );
         //if ( name == "ADT_A01" )
         //     return ADT_A01_TYPE;
         //return UNKNOWN_TYPE;
    }

    HL7_VERSION_ENUM getMessageVersion();

protected:
     CString save_name;
     CString save_message;
     
     virtual void DoDataExchange( CDataExchange* pDX );    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

public:
     virtual BOOL OnInitDialog();
};
