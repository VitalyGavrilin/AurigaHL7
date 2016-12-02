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

// IN1Page.cpp : implementation file
//

#include "stdafx.h"
#include "HL7SDKTest.h"
#include "IN1Page.h"
#include "afxdialogex.h"

#include "Tables.h"
#include "Defines.h"
#include "Helper.h"

#include "AddressXAD.h"
#include "XPNPerson.h"
#include "TSDateTime.h"

// CIN1Page dialog

IMPLEMENT_DYNAMIC(CIN1Page, CPropertyPage)

DATA_TYPE RelationsTypeTbl[ ] = {
     { L"BRO", L"Brother" },
     { L"CH", L"Child" },
     { L"D", L"Daughter" },
     { L"E", L"Employer" },
     { L"EC", L"Emergency Contact" },
     { L"F", L"Father" },
     { L"FR", L"Friend" },
     { L"GC", L"Grand Child" },
     { L"GF", L"Grand Father" },
     { L"GM", L"Grand Mother" },
     { L"GP", L"Grand Parent" },
     { L"H", L"Husband" },
     { L"M", L"Mother" },
     { L"P", L"Parent" },
     { L"S", L"Son" },
     { L"SIB", L"Sibling" },
     { L"SIS", L"Sister" },
     { L"SP", L"Spouse" },
     { L"W", L"Wife" },
     { L"", L"Unknown" },
     { L"", L"" },
};

CIN1Page::CIN1Page()
	: CPropertyPage(CIN1Page::IDD)
{
     csTitle = (CString)L"Insurance";
     m_psp.dwFlags |= PSP_USETITLE;
     m_psp.pszTitle = csTitle;
}

CIN1Page::CIN1Page( HL7_24::IN1* pIN1 )
     : CPropertyPage( CIN1Page::IDD )
{
     std::string param;
     show_missed = IsNotShowed( pIN1 );
     psIN1 = pIN1;
     psIN1->getSetIDIN1()->getData( param );
     csTitle = (CString)L"Insurance " + getWString( param ).c_str();
     m_psp.dwFlags |= PSP_USETITLE;
     m_psp.pszTitle = csTitle;
}

CIN1Page::~CIN1Page()
{
}

void CIN1Page::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CIN1Page, CPropertyPage)
     ON_BN_CLICKED( IDC_BUTTON1, &CIN1Page::OnBnClickedButton1 )
     ON_BN_CLICKED( IDC_BUTTON3, &CIN1Page::OnBnClickedButton3 )
     ON_BN_CLICKED( IDC_BUTTON2, &CIN1Page::OnBnClickedButton2 )
     ON_BN_CLICKED( IDC_BUTTON4, &CIN1Page::OnBnClickedButton4 )
     ON_BN_CLICKED( IDC_BUTTON5, &CIN1Page::OnBnClickedButton5 )
     ON_EN_CHANGE( IDC_EDIT_INS_POLICYNUM_IN1, &CIN1Page::OnEnChangeEditInsPolicynumIn1 )
     ON_EN_CHANGE( IDC_EDIT_IN_COMPANY_IN1, &CIN1Page::OnEnChangeEditInCompanyIn1 )
     ON_EN_CHANGE( IDC_EDIT_INS_PHONE_IN1, &CIN1Page::OnEnChangeEditInsPhoneIn1 )
     ON_EN_CHANGE( IDC_EDIT_INSURANCE_COMPANY_ID_IN1, &CIN1Page::OnEnChangeEditInsuranceCompanyIdIn1 )
     ON_EN_CHANGE( IDC_EDIT_INS_PLAN_IN1, &CIN1Page::OnEnChangeEditInsPlanIn1 )
     ON_EN_CHANGE( IDC_EDIT_INS_GRPNUM_IN1, &CIN1Page::OnEnChangeEditInsGrpnumIn1 )
     ON_EN_CHANGE( IDC_EDIT_INS_GRPNAME_IN1, &CIN1Page::OnEnChangeEditInsGrpnameIn1 )
     ON_CBN_SELCHANGE( IDC_COMBO_INSURED_RELATIONS_IN1, &CIN1Page::OnCbnSelchangeComboInsuredRelationsIn1 )
END_MESSAGE_MAP()


// CIN1Page message handlers

#define ADDED_NOT_SHOWN_IN1( number ) ADDED_NOT_SHOWN_SUB( IN1, number )

string CIN1Page::IsNotShowed( HL7_24::IN1* pIN1 )
{
     string result;
     ADDED_NOT_SHOWN_IN1( 3 ); // IN1 - 3 : Insurance Company ID( CX ) <b> repeating< / b>
     ADDED_NOT_SHOWN_IN1( 6 ); // IN1 - 6 : Insurance Co Contact Person( XPN ) <b>optional repeating< / b>
     ADDED_NOT_SHOWN_IN1( 10 ); // IN1 - 10 : Insured's Group Emp ID (CX) <b>optional repeating</b>
     ADDED_NOT_SHOWN_IN1( 11 ); // IN1 - 11 : Insured's Group Emp Name (XON) <b>optional repeating</b>
     ADDED_NOT_SHOWN_IN1( 12 ); // IN1 - 12 : Plan Effective Date( DT ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 13 ); // IN1 - 13 : Plan Expiration Date( DT ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 14 ); // IN1 - 14 : Authorization Information( AUI ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 15 ); // IN1 - 15 : Plan Type( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 20 ); // IN1 - 20 : Assignment Of Benefits( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 21 ); // IN1 - 21 : Coordination Of Benefits( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 22 ); // IN1 - 22 : Coord Of Ben.Priority( ST ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 23 ); // IN1 - 23 : Notice Of Admission Flag( ID ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 24 ); // IN1 - 24 : Notice Of Admission Date( DT ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 25 ); // IN1 - 25 : Report Of Eligibility Flag( ID ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 26 ); // IN1 - 26 : Report Of Eligibility Date( DT ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 27 ); // IN1 - 27 : Release Information Code( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 28 ); // IN1 - 28 : Pre - Admit Cert( PAC ) ( ST ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 29 ); // IN1 - 29 : Verification Date / Time( TS ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 30 ); // IN1 - 30 : Verification By( XCN ) <b>optional repeating< / b>
     ADDED_NOT_SHOWN_IN1( 31 ); // IN1 - 31 : Type Of Agreement Code( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 32 ); // IN1 - 32 : Billing Status( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 33 ); // IN1 - 33 : Lifetime Reserve Days( NM ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 34 ); // IN1 - 34 : Delay Before L.R.Day( NM ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 35 ); // IN1 - 35 : Company Plan Code( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 37 ); // IN1 - 37 : Policy Deductible( CP ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 38 ); // IN1 - 38 : Policy Limit - Amount( CP ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 39 ); // IN1 - 39 : Policy Limit - Days( NM ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 40 ); // IN1 - 40 : Room Rate - Semi - Private( CP ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 41 ); // IN1 - 41 : Room Rate - Private( CP ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 42 ); // IN1 - 42 : Insured's Employment Status (CE) <b>optional </b>
     ADDED_NOT_SHOWN_IN1( 43 ); // IN1 - 43 : Insured's Administrative Sex (IS) <b>optional </b>
     ADDED_NOT_SHOWN_IN1( 44 ); // IN1 - 44 : Insured's Employer's Address( XAD ) <b>optional repeating< / b>
     ADDED_NOT_SHOWN_IN1( 45 ); // IN1 - 45 : Verification Status( ST ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 46 ); // IN1 - 46 : Prior Insurance Plan ID( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 47 ); // IN1 - 47 : Coverage Type( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 48 ); // IN1 - 48 : Handicap( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_IN1( 49 ); // IN1 - 49 : Insured's ID Number (CX) <b>optional repeating</b>
     return result;
}


void CIN1Page::OnBnClickedButton1()
{
     CAddressXAD XADEdit( psIN1->getInsuranceCompanyAddress( ) );
     if ( IDOK == XADEdit.DoModal( ) )
          SHOW_EDIT_ADDRESS_DATA( IDC_EDIT_INS_ADDRESS_IN1, psIN1->getInsuranceCompanyAddress( ) );
}


void CIN1Page::OnBnClickedButton3()
{
     CAddressXAD XADEdit( psIN1->getInsuredSAddress( ) );
     if ( IDOK == XADEdit.DoModal( ) )
          SHOW_EDIT_ADDRESS_DATA( IDC_EDIT_INSURED_ADDRESS_IN1, psIN1->getInsuredSAddress( ) );
}


void CIN1Page::OnBnClickedButton2()
{
     CXPNPerson XPNEdit( psIN1->getNameOfInsured( ), L"Name Of Insured" );
     if ( IDOK == XPNEdit.DoModal( ) )
          SHOW_EDIT_NAME_DATA( IDC_EDIT_INSURED_NAME_IN1, psIN1->getNameOfInsured( ) );
}


void CIN1Page::OnBnClickedButton4()
{
     CTSDateTime DTe( psIN1->getInsuredSDateOfBirth( ), L"Insured's date of birth" );
     if ( IDOK == DTe.DoModal( ) )
          SHOW_EDIT_TIME_DATA( IDC_EDIT_INSURED_BIRTHDAY_IN1, psIN1->getInsuredSDateOfBirth( ) );
}


BOOL CIN1Page::OnInitDialog()
{
     std::string param;
     __super::OnInitDialog();

     CComboBox* pComboRelation = NULL;
     //CString name;
     //CPropertyPage::GetWindowTextW( name );
     //name += ( wstring( L" " ) + getWString( psIN1->getSetIDIN1()->getComparator()->getData() ) ).c_str();
     //CPropertyPage::SetWindowTextW( name );

     TABLE_LOAD( KNOWN_RELATIONS_TYPE, relationType, RelationsTypeTbl, pComboRelation, IDC_COMBO_INSURED_RELATIONS_IN1 );

     SHOW_EDIT_DATA( IDC_EDIT_INS_PLAN_IN1, psIN1->getInsurancePlanID()->getIdentifier() );
     SHOW_EDIT_DATA( IDC_EDIT_INSURANCE_COMPANY_ID_IN1, psIN1->getInsuranceCompanyID()->getID() );
     SHOW_EDIT_DATA( IDC_EDIT_IN_COMPANY_IN1, psIN1->getInsuranceCompanyName()->getOrganizationName() );
     SHOW_EDIT_ADDRESS_DATA( IDC_EDIT_INS_ADDRESS_IN1, psIN1->getInsuranceCompanyAddress() );
     SHOW_EDIT_NAME_DATA( IDC_EDIT_INCO_CONTACT_PERSON_IN1, psIN1->getInsuranceCoContactPerson() );
     SHOW_EDIT_DATA( IDC_EDIT_INS_PHONE_IN1, psIN1->getInsuranceCoPhoneNumber()->getXTN_1() );
     SHOW_EDIT_DATA( IDC_EDIT_INS_GRPNUM_IN1, psIN1->getGroupNumber() );
     SHOW_EDIT_DATA( IDC_EDIT_INS_GRPNAME_IN1, psIN1->getGroupName()->getOrganizationName() );
     SHOW_EDIT_NAME_DATA( IDC_EDIT_INSURED_NAME_IN1, psIN1->getNameOfInsured() );
     SHOW_EDIT_ADDRESS_DATA( IDC_EDIT_INSURED_ADDRESS_IN1, psIN1->getInsuredSAddress() );
     SHOW_EDIT_TIME_DATA( IDC_EDIT_INSURED_BIRTHDAY_IN1, psIN1->getInsuredSDateOfBirth() );
     SHOW_COMBO_DATA( relationType, pComboRelation, psIN1->getInsuredSRelationshipToPatient()->getIdentifier() );
     SHOW_EDIT_DATA( IDC_EDIT_INS_POLICYNUM_IN1, psIN1->getPolicyNumber() );

     return TRUE;  // return TRUE unless you set the focus to a control
     // EXCEPTION: OCX Property Pages should return FALSE
}


void CIN1Page::OnBnClickedButton5()
{
     CXPNPerson XPNEdit( psIN1->getInsuranceCoContactPerson(), L"Contact person" );
     if ( IDOK == XPNEdit.DoModal() )
          SHOW_EDIT_NAME_DATA( IDC_EDIT_INCO_CONTACT_PERSON_IN1, psIN1->getInsuranceCoContactPerson() );
}


void CIN1Page::OnOK()
{
     CString message;

     //GET_EDIT_DATA( IDC_COMBO_INSURED_RELATIONS_IN1, message, psIN1->getInsuredsRelationshipToPatient()->getIdentifier() );
     SAVE_DATA( csInRelat, psIN1->getInsuredSRelationshipToPatient()->getIdentifier() );
     //GET_EDIT_DATA( IDC_EDIT_INSURANCE_COMPANY_ID_IN1, message, psIN1->getInsuranceCompanyID()->getId() );
     SAVE_DATA( csInCompanyID, psIN1->getInsuranceCompanyID()->getID() );
     //GET_EDIT_DATA( IDC_EDIT_INS_PLAN_IN1, message, psIN1->getInsurancePlanID()->getIdentifier() );
     SAVE_DATA( csInPlan, psIN1->getInsurancePlanID()->getIdentifier() );
     //GET_EDIT_DATA( IDC_EDIT_IN_COMPANY_IN1, message, psIN1->getInsuranceCompanyName()->getOrganizationName() );
     SAVE_DATA( csInCompany, psIN1->getInsuranceCompanyName()->getOrganizationName() );
     //GET_EDIT_DATA( IDC_EDIT_INS_PHONE_IN1, message, psIN1->getInsuranceCoPhoneNumber()->getTn() );
     SAVE_DATA( csInPhone, psIN1->getInsuranceCoPhoneNumber()->getXTN_1() );
     //GET_EDIT_DATA( IDC_EDIT_INS_GRPNUM_IN1, message, psIN1->getGroupNumber() );
     SAVE_DATA( csInGrpNum, psIN1->getGroupNumber() );
     //GET_EDIT_DATA( IDC_EDIT_INS_GRPNAME_IN1, message, psIN1->getGroupName()->getOrganizationName() );
     SAVE_DATA( csInGrpNam, psIN1->getGroupName()->getOrganizationName() );
     //GET_EDIT_DATA( IDC_EDIT_INS_POLICYNUM_IN1, message, psIN1->getPolicyNumber() );
     SAVE_DATA( csInPolicyNum, psIN1->getPolicyNumber() );
     __super::OnOK();
}

void CIN1Page::OnEnChangeEditInsPolicynumIn1()
{
     GetDlgItem( IDC_EDIT_INS_POLICYNUM_IN1 )->GetWindowTextW( csInPolicyNum );
}

void CIN1Page::OnEnChangeEditInCompanyIn1()
{
     GetDlgItem( IDC_EDIT_IN_COMPANY_IN1 )->GetWindowTextW( csInCompany );
}

void CIN1Page::OnEnChangeEditInsPhoneIn1()
{
     GetDlgItem( IDC_EDIT_INS_PHONE_IN1 )->GetWindowTextW( csInPhone );
}

void CIN1Page::OnEnChangeEditInsuranceCompanyIdIn1()
{
     GetDlgItem( IDC_EDIT_INSURANCE_COMPANY_ID_IN1 )->GetWindowTextW( csInCompanyID );
}

void CIN1Page::OnEnChangeEditInsPlanIn1()
{
     GetDlgItem( IDC_EDIT_INS_PLAN_IN1 )->GetWindowTextW( csInPlan );
}

void CIN1Page::OnEnChangeEditInsGrpnumIn1()
{
     GetDlgItem( IDC_EDIT_INS_GRPNUM_IN1 )->GetWindowTextW( csInGrpNum );
}

void CIN1Page::OnEnChangeEditInsGrpnameIn1()
{
     GetDlgItem( IDC_EDIT_INS_GRPNAME_IN1 )->GetWindowTextW( csInGrpNam );
}


void CIN1Page::OnCbnSelchangeComboInsuredRelationsIn1()
{
     ( (CComboBox*)GetDlgItem( IDC_COMBO_INSURED_RELATIONS_IN1 ) )->GetLBText( ( (CComboBox*)GetDlgItem( IDC_COMBO_INSURED_RELATIONS_IN1 ) )->GetCurSel(), csInRelat );
}
