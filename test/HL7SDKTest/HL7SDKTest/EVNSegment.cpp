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

// EVNSegment.cpp : implementation file
//

#include "stdafx.h"
#include "HL7SDKTest.h"
#include "EVNSegment.h"
#include "afxdialogex.h"

#include "Tables.h"
#include "Defines.h"

#include "TSDateTime.h"


// CEVNSegment dialog
using namespace std;
using namespace HL7_24;

IMPLEMENT_DYNAMIC(CEVNSegment, CPropertyPage)

CEVNSegment::CEVNSegment()
	: CPropertyPage(CEVNSegment::IDD)
{

}

CEVNSegment::CEVNSegment( HL7_24::EVN* pEVN )
     : CPropertyPage( CEVNSegment::IDD )
{
     show_missed = IsNotShowed( pEVN );
     psEVN = pEVN;
}

CEVNSegment::~CEVNSegment( )
{
}

void CEVNSegment::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CEVNSegment, CPropertyPage)
     ON_BN_CLICKED( IDC_BUTTON1, &CEVNSegment::OnBnClickedButton1 )
     ON_BN_CLICKED( IDC_BUTTON2, &CEVNSegment::OnBnClickedButton2 )
     ON_EN_CHANGE( IDC_EDIT_EVT_CODE, &CEVNSegment::OnEnChangeEditEvtCode )
END_MESSAGE_MAP()


// CEVNSegment message handlers



#define ADDED_NOT_SHOWN_EVN( number ) ADDED_NOT_SHOWN_SUB( EVN, number )


string CEVNSegment::IsNotShowed( HL7_24::EVN* pEVN )
{
     string result;
     ADDED_NOT_SHOWN_EVN( 2 ); //EVN - 2 : Recorded Date / Time( TS ) <b> < / b>
     ADDED_NOT_SHOWN_EVN( 3 ); //EVN - 3 : Date / Time Planned Event( TS ) <b>optional < / b>
     ADDED_NOT_SHOWN_EVN( 4 ); //EVN - 4 : Event Reason Code( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_EVN( 5 ); //EVN - 5 : Operator ID( XCN ) <b>optional repeating< / b>
     ADDED_NOT_SHOWN_EVN( 6 ); //EVN - 6 : Event Occurred( TS ) <b>optional < / b>
     ADDED_NOT_SHOWN_EVN( 7 ); //EVN - 7 : Event Facility( HD ) <b>optional < / b>
     return result;
}


void CEVNSegment::OnBnClickedButton1()
{
     CTSDateTime DTe( psEVN->getEventOccurred(), L"Event ocurred" );
     if ( IDOK == DTe.DoModal( ) )
          SHOW_EDIT_TIME_DATA( IDC_EDIT_EVENT_OCUR_EVT, psEVN->getEventOccurred( ) );
}


BOOL CEVNSegment::OnInitDialog()
{
     std::string param;
     __super::OnInitDialog();

     SHOW_EDIT_DATA( IDC_EDIT_EVT_CODE, psEVN->getEventTypeCode() );
     //( (CEdit*)GetDlgItem( IDC_EDIT_EVT_CODE ) )->SetWindowText( getWString( psEVN->getEventTypeCode()->getData() ).c_str() );
     SHOW_EDIT_TIME_DATA( IDC_EDIT_EVENT_OCUR_EVT, psEVN->getEventOccurred() );
     SHOW_EDIT_TIME_DATA( IDC_EDIT_RECORDED_DT_EVN, psEVN->getRecordedDateTime( ) );

     return TRUE;  // return TRUE unless you set the focus to a control
     // EXCEPTION: OCX Property Pages should return FALSE
}


void CEVNSegment::OnBnClickedButton2()
{
     CTSDateTime DTe( psEVN->getRecordedDateTime( ), L"Recorded Date/Time" );
     if ( IDOK == DTe.DoModal( ) )
          SHOW_EDIT_TIME_DATA( IDC_EDIT_RECORDED_DT_EVN, psEVN->getRecordedDateTime( ) );
}


//void CEVNSegment::OnBnClickedOk()
//{
//     CString message;
//
//     GET_EDIT_DATA( IDC_EDIT_EVT_CODE, message, psEVN->getEventTypeCode( ) );
//}


void CEVNSegment::OnOK()
{
     CString message;

     //GET_EDIT_DATA( IDC_EDIT_EVT_CODE, message, psEVN->getEventTypeCode() );
     SAVE_DATA( csEvtCode, psEVN->getEventTypeCode() );
     __super::OnOK();
}


void CEVNSegment::OnEnChangeEditEvtCode()
{
     GetDlgItem( IDC_EDIT_EVT_CODE )->GetWindowTextW( csEvtCode );
}
