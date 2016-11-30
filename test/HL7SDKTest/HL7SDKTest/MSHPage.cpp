/*
 * This file is part of HCPPL.
 *
 * HCPPL is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * HCPPL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with HCPPL.  If not, see <http://www.gnu.org/licenses/>.
 */

// MSHPage.cpp : implementation file
//

#include "stdafx.h"
#include "HL7SDKTest.h"
#include "MSHPage.h"
#include "afxdialogex.h"

#include "Tables.h"
#include "Defines.h"
#include "TSDateTime.h"

//#include "message.h"
//#include "util.h"
//#include "message\ADT_A01.h"

using namespace std;
using namespace HL7_24;

// CMSHPage dialog

DATA_TYPE MessageTypeTbl[] = {
     { L"ACK", L"General acknowledgment message" },
     { L"ADT", L"ADT message" },
     { L"ORU", L"Unsolicited observation report" },
     { L"", L"Unknown message" },
     { L"", L"" },
};

DATA_TYPE EventTypeTbl[] = {
     { L"A01", L"ADT/ACK - Admit/visit notification" },
     { L"A04", L"ADT/ACK - Register a patient" },
     { L"R01", L"ORU/ACK - Unsolicited transmission of an observation message" },
     { L"", L"Unknown message" },
     { L"", L"" },
};

IMPLEMENT_DYNAMIC(CMSHPage, CPropertyPage)

CMSHPage::CMSHPage()
	: CPropertyPage(CMSHPage::IDD)
    , csSendingApp( _T( "" ) )
{

}

CMSHPage::CMSHPage( HL7_24::MSH* pMSH )
     : CPropertyPage( CMSHPage::IDD )
{
     pMSH->getVersionID()->getVersionID()->getData( version );
     if ( version == "2.4" )
     {
          psMSH = pMSH;
          show_missed = IsNotShowed( psMSH );
          return;
     }
     CString strLine;
     strLine.Format( _T( "ERROR: Message with unsupported HL7 version - %S." ), version );
     MessageBox( strLine, _T( "HL7 error" ), MB_ICONERROR | MB_OK );
}

CMSHPage::~CMSHPage()
{
}

void CMSHPage::DoDataExchange(CDataExchange* pDX)
{
     CPropertyPage::DoDataExchange( pDX );
     DDX_Text( pDX, IDC_EDIT_SENDING_APPLICATION, csSendingApp );
}


BEGIN_MESSAGE_MAP(CMSHPage, CPropertyPage)
     ON_CBN_SELCHANGE( IDC_COMBO_EVENT_TYPE, &CMSHPage::OnSelchangeComboEventType )
     ON_BN_CLICKED( IDC_BUTTON1, &CMSHPage::OnBnClickedButton1 )
     ON_EN_CHANGE( IDC_EDIT_SENDING_APPLICATION, &CMSHPage::OnEnChangeEditSendingApplication )
     ON_EN_CHANGE( IDC_EDIT_SENDING_FACILITY, &CMSHPage::OnEnChangeEditSendingFacility )
     ON_EN_CHANGE( IDC_EDIT_RECEIVING_APPLICATION, &CMSHPage::OnEnChangeEditReceivingApplication )
     ON_CBN_SELCHANGE( IDC_COMBO_MESSAGE_TYPE, &CMSHPage::OnCbnSelchangeComboMessageType )
     ON_EN_CHANGE( IDC_EDIT_MESSAGE_STRUCTURE_MSH, &CMSHPage::OnEnChangeEditMessageStructureMsh )
     ON_EN_CHANGE( IDC_EDIT_RECEIVING_FACILITY, &CMSHPage::OnEnChangeEditReceivingFacility )
     ON_EN_CHANGE( IDC_EDIT_CONTROLID, &CMSHPage::OnEnChangeEditControlid )
     ON_EN_CHANGE( IDC_EDIT_VERSIONID, &CMSHPage::OnEnChangeEditVersionid )
     ON_EN_CHANGE( IDC_EDIT_PROCESSINGID, &CMSHPage::OnEnChangeEditProcessingid )
END_MESSAGE_MAP()


// CMSHPage message handlers


void CMSHPage::OnSelchangeComboEventType()
{
     //CStringW evt;
     ( (CComboBox*)GetDlgItem( IDC_COMBO_EVENT_TYPE ) )->GetLBText( ( (CComboBox*)GetDlgItem( IDC_COMBO_EVENT_TYPE ) )->GetCurSel(), csEvtType );

     Tables<KNOWN_EVENT_TYPE::KNOWN_EVENT_TYPE> evtType( csEvtType.GetBuffer(), EventTypeTbl );
     ( (CEdit*)GetDlgItem( IDC_EDIT_MESSAGE_DESC ) )->SetWindowText( evtType.getDesc() );

     //GetDlgItem( IDC_COMBO_MESSAGE_TYPE )->GetWindowTextW( csMessType );
}

#define ADDED_NOT_SHOWN_MSH( number ) ADDED_NOT_SHOWN_SUB( MSH, number )
#define ADDED_NOT_SHOWN_ITEM( number, func ) ADDED_NOT_SHOWN_ITEM_SUB( MSH, number, func )

string CMSHPage::IsNotShowed( HL7_24::MSH* pMSH )
{
     string result;
     //ADDED_NOT_SHOWN_MSH( 7 ); // MSH - 7 : Date / Time Of Message( TS ) <b> < / b>
     //ADDED_NOT_SHOWN_MSH( 8 ); // MSH - 8 : Security( ST ) <b>optional < / b>
     //ADDED_NOT_SHOWN_ITEM( 9, MessageStructure ); // MSH - 9 : Message Type( MSG ) <b> < / b>
     //ADDED_NOT_SHOWN_MSH( 13 ); // MSH - 13 : Sequence Number( NM ) <b>optional < / b>
     //ADDED_NOT_SHOWN_MSH( 14 ); // MSH - 14 : Continuation Pointer( ST ) <b>optional < / b>
     //ADDED_NOT_SHOWN_MSH( 15 ); // MSH - 15 : Accept Acknowledgment Type( ID ) <b>optional < / b>
     //ADDED_NOT_SHOWN_MSH( 16 ); // MSH - 16 : Application Acknowledgment Type( ID ) <b>optional < / b>
     //ADDED_NOT_SHOWN_MSH( 17 ); // MSH - 17 : Country Code( ID ) <b>optional < / b>
     //ADDED_NOT_SHOWN_MSH( 18 ); // MSH - 18 : Character Set( ID ) <b>optional repeating< / b>
     //ADDED_NOT_SHOWN_MSH( 19 ); // MSH - 19 : Principal Language Of Message( CE ) <b>optional < / b>
     //ADDED_NOT_SHOWN_MSH( 20 ); // MSH - 20 : Alternate Character Set Handling Scheme( ID ) <b>optional < / b>
     //ADDED_NOT_SHOWN_MSH( 21 ); // MSH - 21 : Conformance Statement ID( ID ) <b>optional repeating< / b>
     return result;
}



void CMSHPage::OnBnClickedButton1()
{
     CTSDateTime DTe( psMSH->getDateTimeOfMessage( ), L"Date and time of message" );
     if ( IDOK == DTe.DoModal( ) )
          SHOW_EDIT_TIME_DATA( IDC_EDIT_MESSAGE_DT_MSH, psMSH->getDateTimeOfMessage( ) );
}


BOOL CMSHPage::OnInitDialog()
{
     std::string param;
     __super::OnInitDialog();

     ( (CEdit*)GetDlgItem( IDC_EDIT_VERSIONID ) )->SetWindowText( getWString( version ).c_str() );

     Tables<KNOWN_MESSAGE_TYPE::KNOWN_MESSAGE_TYPE> msgType( NULL, MessageTypeTbl );
     CComboBox* pComboMessage = (CComboBox*)GetDlgItem( IDC_COMBO_MESSAGE_TYPE );
     const DATA_TYPE* nextItem = msgType.startEnum();
     while ( nextItem )
     {
          pComboMessage->AddString( nextItem->value );
          nextItem = msgType.nextEnum();
     }

     Tables<KNOWN_EVENT_TYPE::KNOWN_EVENT_TYPE> evtType( NULL, EventTypeTbl );
     CComboBox* pComboEvent = (CComboBox*)GetDlgItem( IDC_COMBO_EVENT_TYPE );
     nextItem = evtType.startEnum();
     while ( nextItem )
     {
          pComboEvent->AddString( nextItem->value );
          nextItem = evtType.nextEnum();
     }

     SHOW_EDIT_DATA( IDC_EDIT_SENDING_APPLICATION, psMSH->getSendingApplication()->getNamespaceID() );
     //( (CEdit*)GetDlgItem( IDC_EDIT_SENDING_APPLICATION ) )->SetWindowText( getWString( psMSH->getSendingApplication()->getNamespaceID()->getData() ).c_str() );
     SHOW_EDIT_DATA( IDC_EDIT_SENDING_FACILITY, psMSH->getSendingFacility()->getNamespaceID() );
     //( (CEdit*)GetDlgItem( IDC_EDIT_SENDING_FACILITY ) )->SetWindowText( getWString( psMSH->getSendingFacility()->getNamespaceID()->getData() ).c_str() );
     SHOW_EDIT_DATA( IDC_EDIT_RECEIVING_APPLICATION, psMSH->getReceivingApplication()->getNamespaceID() );
     //( (CEdit*)GetDlgItem( IDC_EDIT_RECEIVING_APPLICATION ) )->SetWindowText( getWString( psMSH->getReceivingApplication()->getNamespaceID()->getData() ).c_str() );
     SHOW_EDIT_DATA( IDC_EDIT_RECEIVING_FACILITY, psMSH->getReceivingFacility()->getNamespaceID() );
     //( (CEdit*)GetDlgItem( IDC_EDIT_RECEIVING_FACILITY ) )->SetWindowText( getWString( psMSH->getReceivingFacility()->getNamespaceID()->getData() ).c_str() );
     SHOW_EDIT_TIME_DATA( IDC_EDIT_MESSAGE_DT_MSH, psMSH->getDateTimeOfMessage() );

     string data;
     psMSH->getMessageType()->getMessageType()->getData( data );
     wstring dataW( data.begin(), data.end() );
     msgType.setName( (wchar_t*)dataW.c_str() );
     pComboMessage->SelectString( -1, msgType.getData() );

     psMSH->getMessageType()->getTriggerEvent()->getData( data );
     dataW.assign( data.begin(), data.end() );
     evtType.setName( (wchar_t*)dataW.c_str() );
     pComboEvent->SelectString( -1, evtType.getData() );
     ( (CEdit*)GetDlgItem( IDC_EDIT_MESSAGE_DESC ) )->SetWindowText( evtType.getDesc( ) );

     SHOW_EDIT_DATA( IDC_EDIT_MESSAGE_STRUCTURE_MSH, psMSH->getMessageType()->getMessageStructure() );
     SHOW_EDIT_DATA( IDC_EDIT_CONTROLID, psMSH->getMessageControlID() );
     //( (CEdit*)GetDlgItem( IDC_EDIT_CONTROLID ) )->SetWindowText( getWString( psMSH->getMessageControlID()->getData() ).c_str() );
     SHOW_EDIT_DATA( IDC_EDIT_PROCESSINGID, psMSH->getProcessingID()->getProcessingID() );
     //( (CEdit*)GetDlgItem( IDC_EDIT_PROCESSINGID ) )->SetWindowText( getWString( psMSH->getProcessingID()->getProcessingID()->getData() ).c_str() );
     if ( show_missed != "" )
     {
          //TODO check if there unknown data    
     }

     return TRUE;  // return TRUE unless you set the focus to a control
     // EXCEPTION: OCX Property Pages should return FALSE
}


void CMSHPage::OnEnChangeEditSendingApplication()
{
     GetDlgItem( IDC_EDIT_SENDING_APPLICATION )->GetWindowTextW( csSendingApp );
}


void CMSHPage::OnOK()
{
     CString message;

     //( (CEdit*)GetDlgItem( IDC_EDIT_VERSIONID ) )->SetWindowText( getWString( version ).c_str( ) );
     //GET_EDIT_DATA( IDC_COMBO_MESSAGE_TYPE, message, psMSH->getMessageType()->getMessageType() );
     SAVE_DATA( csMessType, psMSH->getMessageType()->getMessageType() );
     //GET_EDIT_DATA( IDC_COMBO_EVENT_TYPE, message, psMSH->getMessageType()->getTriggerEvent() );
     SAVE_DATA( csEvtType, psMSH->getMessageType()->getTriggerEvent() );
     //GET_EDIT_DATA( IDC_EDIT_MESSAGE_STRUCTURE_MSH, message, psMSH->getMessageType()->getMessageStructure() );
     SAVE_DATA( csMessStruct, psMSH->getMessageType()->getMessageStructure() );
     //GET_EDIT_DATA( IDC_EDIT_SENDING_APPLICATION, message, psMSH->getSendingApplication( )->getNamespaceId( ) );
     SAVE_DATA( csSendingApp, psMSH->getSendingApplication()->getNamespaceID() );
     //GET_EDIT_DATA( IDC_EDIT_SENDING_FACILITY, message, psMSH->getSendingFacility()->getNamespaceId() );
     SAVE_DATA( csSendingFacil, psMSH->getSendingFacility()->getNamespaceID() );
     //GET_EDIT_DATA( IDC_EDIT_RECEIVING_APPLICATION, message, psMSH->getReceivingApplication()->getNamespaceId() );
     SAVE_DATA( csReceivingApp, psMSH->getReceivingApplication()->getNamespaceID() );
     //GET_EDIT_DATA( IDC_EDIT_RECEIVING_FACILITY, message, psMSH->getReceivingFacility()->getNamespaceId() );
     SAVE_DATA( csReceivingFacil, psMSH->getReceivingFacility()->getNamespaceID() );
     //GET_EDIT_DATA( IDC_EDIT_CONTROLID, message, psMSH->getMessageControlID() );
     SAVE_DATA( csMessCtrlId, psMSH->getMessageControlID() );
     //GET_EDIT_DATA( IDC_EDIT_PROCESSINGID, message, psMSH->getProcessingID()->getProcessingId() );
     SAVE_DATA( csProcessingId, psMSH->getProcessingID()->getProcessingID() );
     
     __super::OnOK();
}

void CMSHPage::OnEnChangeEditSendingFacility()
{
     GetDlgItem( IDC_EDIT_SENDING_FACILITY )->GetWindowTextW( csSendingFacil );
}

void CMSHPage::OnEnChangeEditReceivingApplication()
{
     GetDlgItem( IDC_EDIT_RECEIVING_APPLICATION )->GetWindowTextW( csReceivingApp );
}

void CMSHPage::OnCbnSelchangeComboMessageType()
{
     ( (CComboBox*)GetDlgItem( IDC_COMBO_MESSAGE_TYPE ) )->GetLBText( ( (CComboBox*)GetDlgItem( IDC_COMBO_MESSAGE_TYPE ) )->GetCurSel(), csMessType );
}


void CMSHPage::OnEnChangeEditMessageStructureMsh()
{
     GetDlgItem( IDC_EDIT_MESSAGE_STRUCTURE_MSH )->GetWindowTextW( csMessStruct );
}


void CMSHPage::OnEnChangeEditReceivingFacility()
{
     GetDlgItem( IDC_EDIT_RECEIVING_FACILITY )->GetWindowTextW( csReceivingFacil );
}


void CMSHPage::OnEnChangeEditControlid()
{
     GetDlgItem( IDC_EDIT_CONTROLID )->GetWindowTextW( csMessCtrlId );
}


void CMSHPage::OnEnChangeEditVersionid()
{
}


void CMSHPage::OnEnChangeEditProcessingid()
{
     GetDlgItem( IDC_EDIT_PROCESSINGID )->GetWindowTextW( csProcessingId );
}
