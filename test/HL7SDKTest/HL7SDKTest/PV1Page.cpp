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

// PV1Page.cpp : implementation file
//

#include "stdafx.h"
#include "HL7SDKTest.h"
#include "PV1Page.h"
#include "afxdialogex.h"

#include "Tables.h"
#include "Defines.h"
#include "Helper.h"

#include "TSDateTime.h"
#include "XPNPerson.h"

// CPV1Page dialog

IMPLEMENT_DYNAMIC(CPV1Page, CPropertyPage)

CPV1Page::CPV1Page()
	: CPropertyPage(CPV1Page::IDD)
{

}

CPV1Page::CPV1Page( HL7_24::PV1* pPV1 )
     : CPropertyPage( CPV1Page::IDD )
{
     show_missed = IsNotShowed( pPV1 );
     psPV1 = pPV1;
}

CPV1Page::~CPV1Page()
{
}

void CPV1Page::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPV1Page, CPropertyPage)
     ON_BN_CLICKED( IDC_BUTTON_ADMTIME_EDIT, &CPV1Page::OnBnClickedButtonAdmtimeEdit )
     ON_BN_CLICKED( IDC_BUTTONDISTIME_EDIT, &CPV1Page::OnBnClickedButtondistimeEdit )
     ON_BN_CLICKED( IDC_BUTTON_ATTDOC_EDIT, &CPV1Page::OnBnClickedButtonAttdocEdit )
     ON_BN_CLICKED( IDC_BUTTON_REFDOC_EDIT, &CPV1Page::OnBnClickedButtonRefdocEdit )
     ON_BN_CLICKED( IDC_BUTTON_CONDOC_EDIT, &CPV1Page::OnBnClickedButtonCondocEdit )
     ON_BN_CLICKED( IDC_BUTTON_ADMDOC_EDIT, &CPV1Page::OnBnClickedButtonAdmdocEdit )
     ON_EN_CHANGE( IDC_EDIT_LOC_CARE_UNIT_PRIOR_PV1, &CPV1Page::OnEnChangeEditLocCareUnitPriorPv1 )
     ON_EN_CHANGE( IDC_EDIT_LOC_ROOM_PRIOR_PV1, &CPV1Page::OnEnChangeEditLocRoomPriorPv1 )
     ON_EN_CHANGE( IDC_EDIT_LOC_BED_PRIOR_PV1, &CPV1Page::OnEnChangeEditLocBedPriorPv1 )
     ON_EN_CHANGE( IDC_EDIT_LOC_CARE_UNIT_CUR_PV1, &CPV1Page::OnEnChangeEditLocCareUnitCurPv1 )
     ON_EN_CHANGE( IDC_EDIT_LOC_ROOM_CUR_PV1, &CPV1Page::OnEnChangeEditLocRoomCurPv1 )
     ON_EN_CHANGE( IDC_EDIT_LOC_BED_CUR_PV1, &CPV1Page::OnEnChangeEditLocBedCurPv1 )
END_MESSAGE_MAP()


// CPV1Page message handlers


#define ADDED_NOT_SHOWN_PV1( number ) ADDED_NOT_SHOWN_SUB( PV1, number )

string CPV1Page::IsNotShowed( HL7_24::PV1* pPV1 )
{
     string result;
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 1: Set ID - PV1( SI ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 2 ); // PV1 - 2 : Patient Class( IS ) <b> < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 4 : Admission Type( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 5 : Preadmit Number( CX ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 10 : Hospital Service( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 11 : Temporary Location( PL ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 12 : Preadmit Test Indicator( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 13 : Re - admission Indicator( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 14 : Admit Source( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 15 : Ambulatory Status( IS ) <b>optional repeating< / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 16 : VIP Indicator( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 18 : Patient Type( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 19 : Visit Number( CX ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 20 : Financial Class( FC ) <b>optional repeating< / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 21 : Charge Price Indicator( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 22 : Courtesy Code( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 23 : Credit Rating( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 24 : Contract Code( IS ) <b>optional repeating< / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 25 : Contract Effective Date( DT ) <b>optional repeating< / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 26 : Contract Amount( NM ) <b>optional repeating< / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 27 : Contract Period( NM ) <b>optional repeating< / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 28 : Interest Code( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 29 : Transfer to Bad Debt Code( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 30 : Transfer to Bad Debt Date( DT ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 31 : Bad Debt Agency Code( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 32 : Bad Debt Transfer Amount( NM ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 33 : Bad Debt Recovery Amount( NM ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 34 : Delete Account Indicator( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 35 : Delete Account Date( DT ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 36 : Discharge Disposition( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 37 : Discharged to Location( DLD ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 38 : Diet Type( CE ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 39 : Servicing Facility( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 40 : Bed Status( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 41 : Account Status( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 42 : Pending Location( PL ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 43 : Prior Temporary Location( PL ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 46 : Current Patient Balance( NM ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 47 : Total Charges( NM ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 48 : Total Adjustments( NM ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 49 : Total Payments( NM ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 50 : Alternate Visit ID( CX ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 51 : Visit Indicator( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_PV1( 1 ); // PV1 - 52 : Other Healthcare Provider( XCN ) <b>optional repeating< / b>
     return result;
}



void CPV1Page::OnBnClickedButtonAdmtimeEdit()
{
     CTSDateTime DTe( psPV1->getAdmitDateTime( ), L"Admit date and time" );
     if ( IDOK == DTe.DoModal( ) )
          SHOW_EDIT_TIME_DATA( IDC_EDIT1_ADMTIME_PV1, psPV1->getAdmitDateTime( ) );
}


void CPV1Page::OnBnClickedButtondistimeEdit()
{
     CTSDateTime DTe( psPV1->getDischargeDateTime( ), L"Discharge date and time" );
     if ( IDOK == DTe.DoModal( ) )
          SHOW_EDIT_TIME_DATA( IDC_EDIT1_DISTIME_PV1, psPV1->getDischargeDateTime( ) );
}


BOOL CPV1Page::OnInitDialog()
{
     std::string param;
     __super::OnInitDialog();

     SHOW_EDIT_DATA( IDC_EDIT_LOC_CARE_UNIT_PRIOR_PV1, psPV1->getPriorPatientLocation()->getPointOfCare() );
     SHOW_EDIT_DATA( IDC_EDIT_LOC_ROOM_PRIOR_PV1, psPV1->getPriorPatientLocation()->getRoom() );
     SHOW_EDIT_DATA( IDC_EDIT_LOC_BED_PRIOR_PV1, psPV1->getPriorPatientLocation()->getBed() );
     SHOW_EDIT_DATA( IDC_EDIT_LOC_CARE_UNIT_CUR_PV1, psPV1->getAssignedPatientLocation()->getPointOfCare() );
     SHOW_EDIT_DATA( IDC_EDIT_LOC_ROOM_CUR_PV1, psPV1->getAssignedPatientLocation()->getRoom() );
     SHOW_EDIT_DATA( IDC_EDIT_LOC_BED_CUR_PV1, psPV1->getAssignedPatientLocation()->getBed() );
     SHOW_EDIT_NAME_DATA( IDC_EDIT_ATTDOC_PV1, psPV1->getAttendingDoctor() );
     SHOW_EDIT_NAME_DATA( IDC_EDIT_REFDOC_PV1, psPV1->getReferringDoctor() );
     SHOW_EDIT_NAME_DATA( IDC_EDIT_CONDOC_PV1, psPV1->getConsultingDoctor() );
     SHOW_EDIT_NAME_DATA( IDC_EDIT_ADMDOC_PV1, psPV1->getAdmittingDoctor() );

     SHOW_EDIT_TIME_DATA( IDC_EDIT1_ADMTIME_PV1, psPV1->getAdmitDateTime() );
     SHOW_EDIT_TIME_DATA( IDC_EDIT1_DISTIME_PV1, psPV1->getDischargeDateTime() );

     return TRUE;  // return TRUE unless you set the focus to a control
     // EXCEPTION: OCX Property Pages should return FALSE
}


void CPV1Page::OnBnClickedButtonAttdocEdit()
{
     SHOW_XPN_DLG( psPV1->getAttendingDoctor(), L"Attending doctor", IDC_EDIT_NKNAME_NK1 );
}


void CPV1Page::OnBnClickedButtonRefdocEdit()
{
     SHOW_XPN_DLG( psPV1->getReferringDoctor(), L"Referring doctor", IDC_EDIT_REFDOC_PV1 );
}


void CPV1Page::OnBnClickedButtonCondocEdit()
{
     SHOW_XPN_DLG( psPV1->getConsultingDoctor(), L"Consulting doctor", IDC_EDIT_CONDOC_PV1 );
}


void CPV1Page::OnBnClickedButtonAdmdocEdit()
{
     SHOW_XPN_DLG( psPV1->getAdmittingDoctor(), L"Admitting doctor", IDC_EDIT_ADMDOC_PV1 );
}


void CPV1Page::OnOK()
{
     CString message;

     //GET_EDIT_DATA( IDC_EDIT_LOC_CARE_UNIT_PRIOR_PV1, message, psPV1->getPriorPatientLocation()->getPointOfCare() );
     SAVE_DATA( csCareUnitPr, psPV1->getPriorPatientLocation()->getPointOfCare() );
     //GET_EDIT_DATA( IDC_EDIT_LOC_ROOM_PRIOR_PV1, message, psPV1->getPriorPatientLocation()->getRoom() );
     SAVE_DATA( csRoomPr, psPV1->getPriorPatientLocation()->getRoom() );
     //GET_EDIT_DATA( IDC_EDIT_LOC_BED_PRIOR_PV1, message, psPV1->getPriorPatientLocation()->getBed() );
     SAVE_DATA( csBedPr, psPV1->getPriorPatientLocation()->getBed() );
     //GET_EDIT_DATA( IDC_EDIT_LOC_CARE_UNIT_CUR_PV1, message, psPV1->getAssignedPatientLocation()->getPointOfCare() );
     SAVE_DATA( csCareUnitCur, psPV1->getAssignedPatientLocation()->getPointOfCare() );
     //GET_EDIT_DATA( IDC_EDIT_LOC_ROOM_CUR_PV1, message, psPV1->getAssignedPatientLocation()->getRoom() );
     SAVE_DATA( csRoomCur, psPV1->getAssignedPatientLocation()->getRoom() );
     //GET_EDIT_DATA( IDC_EDIT_LOC_BED_CUR_PV1, message, psPV1->getAssignedPatientLocation()->getBed() );
     SAVE_DATA( csBedCur, psPV1->getAssignedPatientLocation()->getBed() );
     __super::OnOK();
}

void CPV1Page::OnEnChangeEditLocCareUnitPriorPv1()
{
     GetDlgItem( IDC_EDIT_LOC_CARE_UNIT_PRIOR_PV1 )->GetWindowTextW( csCareUnitPr );
}

void CPV1Page::OnEnChangeEditLocRoomPriorPv1()
{
     GetDlgItem( IDC_EDIT_LOC_ROOM_PRIOR_PV1 )->GetWindowTextW( csRoomPr );
}

void CPV1Page::OnEnChangeEditLocBedPriorPv1()
{
     GetDlgItem( IDC_EDIT_LOC_BED_PRIOR_PV1 )->GetWindowTextW( csBedPr );
}

void CPV1Page::OnEnChangeEditLocCareUnitCurPv1()
{
     GetDlgItem( IDC_EDIT_LOC_CARE_UNIT_CUR_PV1 )->GetWindowTextW( csCareUnitCur );
}

void CPV1Page::OnEnChangeEditLocRoomCurPv1()
{
     GetDlgItem( IDC_EDIT_LOC_ROOM_CUR_PV1 )->GetWindowTextW( csRoomCur );
}

void CPV1Page::OnEnChangeEditLocBedCurPv1()
{
     GetDlgItem( IDC_EDIT_LOC_BED_CUR_PV1 )->GetWindowTextW( csBedCur );
}
