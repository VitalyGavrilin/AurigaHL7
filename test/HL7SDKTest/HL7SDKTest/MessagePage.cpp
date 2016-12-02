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

// MessagePage.cpp : implementation file
//

#include "stdafx.h"
#include "HL7SDKTest.h"
#include "MessagePage.h"
#include "afxdialogex.h"

#include "message\ADT_A01.h"
#include "message\ADT_A09.h"
#include "message\ORU_R01.h"
#include "ObjToPipe.h"
//#include "pipe.h"
#include "Tables.h"

//using namespace HL7_24;
//
// CMessagePage dialog

IMPLEMENT_DYNAMIC(CMessagePage, CPropertyPage)

CMessagePage::CMessagePage()
	: CPropertyPage(CMessagePage::IDD)
{
}

CMessagePage::CMessagePage( CString name, CString& message )
     : CPropertyPage( CMessagePage::IDD )
{
     save_name = name;
     save_message = message;
}

CMessagePage::~CMessagePage()
{
}

void CMessagePage::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMessagePage, CPropertyPage)
END_MESSAGE_MAP()


// CMessagePage message handlers
void CMessagePage::setMessageName( CString name ){ ( (CEdit*)GetDlgItem( IDC_MESSAGE_NAME ) )->SetWindowText( name ); }

void CMessagePage::setHL7Message( CString message )
{
     CString mShow = message;
     mShow.Replace( L"\r", L"\r\n" );
     ( (CEdit*)GetDlgItem( IDC_EDIT_MESSAGE ) )->SetWindowText( mShow );
}

CString CMessagePage::getHL7Message()
{
     CString message;
     ( (CEdit*)GetDlgItem( IDC_EDIT_MESSAGE ) )->GetWindowTextW( message );
     message.Replace( L"\r\n", L"\r" );
     return message;
}

HL7_VERSION_ENUM CMessagePage::getMessageVersion( )
{
     switch ( getMessageType() )
     {
     case ADT_A01_TYPE:
          {
               CString mes = getHL7Message();
               HL7_24::ADT_A01 adt;
               pipeToMsg( &adt, getAString( mes.GetString() ) );
               std::string ver_s = getMsgVersion( adt );
               if ( ver_s == "2.3" )
                    return HL7_23_VERSION;
               if ( ver_s == "2.4" )
                    return HL7_24_VERSION;
          }
          break;
     case ADT_A11_TYPE:
     case ADT_A09_TYPE:
          {
               CString mes = getHL7Message();
               HL7_24::ADT_A09 adt;
               pipeToMsg( &adt, getAString( mes.GetString() ) );
               std::string ver_s = getMsgVersion( adt );
               if ( ver_s == "2.3" )
                    return HL7_23_VERSION;
               if ( ver_s == "2.4" )
                    return HL7_24_VERSION;
          }
          break;
     case ORU_R01_TYPE:
          {
               CString mes = getHL7Message();
               HL7_24::ORU_R01 oru;
               pipeToMsg( &oru, getAString( mes.GetString() ) );
               std::string ver_s = getMsgVersion( oru );
               if ( ver_s == "2.3" )
                    return HL7_23_VERSION;
               if ( ver_s == "2.4" )
                    return HL7_24_VERSION;
          }
          break;
     }
     return HL7_UNSUPPORTED_VERSION;
}


BOOL CMessagePage::OnInitDialog()
{
     __super::OnInitDialog();

     setMessageName( save_name );
     setHL7Message( save_message );

     return TRUE;  // return TRUE unless you set the focus to a control
     // EXCEPTION: OCX Property Pages should return FALSE
}
