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

// NK1Page.cpp : implementation file
//

#include "stdafx.h"
#include "HL7SDKTest.h"
#include "NK1Page.h"
#include "afxdialogex.h"

#include "Tables.h"
#include "Defines.h"
#include "Helper.h"

#include "IN1Page.h"
#include "XPNPerson.h"
#include "AddressXAD.h"

// CNK1Page dialog

IMPLEMENT_DYNAMIC( CNK1Page, CPropertyPage )

extern DATA_TYPE RelationsTypeTbl[];

CNK1Page::CNK1Page()
	: CPropertyPage(CNK1Page::IDD)
{

}

CNK1Page::CNK1Page( HL7_24::NK1* pNK1 )
     : CPropertyPage( CNK1Page::IDD )
{
     show_missed = IsNotShowed( pNK1 );
     psNK1 = pNK1;
}

CNK1Page::~CNK1Page()
{
}

void CNK1Page::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CNK1Page, CPropertyPage)
     ON_BN_CLICKED( IDC_BUTTON1, &CNK1Page::OnBnClickedButton1 )
     ON_BN_CLICKED( IDC_BUTTON2, &CNK1Page::OnBnClickedButton2 )
     ON_CBN_SELCHANGE( IDC_COMBO_NKRELAT_NK1, &CNK1Page::OnCbnSelchangeComboNkrelatNk1 )
     ON_EN_CHANGE( IDC_EDIT_PHONE_NK1, &CNK1Page::OnEnChangeEditPhoneNk1 )
     ON_EN_CHANGE( IDC_EDIT_BIS_PHONE_NK1, &CNK1Page::OnEnChangeEditBisPhoneNk1 )
END_MESSAGE_MAP()


// CNK1Page message handlers
#define ADDED_NOT_SHOWN_NK1( number ) ADDED_NOT_SHOWN_SUB( NK1, number )

string CNK1Page::IsNotShowed( HL7_24::NK1* pNK1 )
{
     string result;
     //ADDED_NOT_SHOWN_NK1( 7 ); // NK1 - 7 : Contact Role( CE ) <b>optional < / b>
     //ADDED_NOT_SHOWN_NK1( 8 ); // NK1 - 8 : Start Date( DT ) <b>optional < / b>
     //ADDED_NOT_SHOWN_NK1( 9 ); // NK1 - 9 : End Date( DT ) <b>optional < / b>
     //ADDED_NOT_SHOWN_NK1( 10 ); // NK1 - 10 : Next of Kin / Associated Parties Job Title( ST ) <b>optional < / b>
     //ADDED_NOT_SHOWN_NK1( 11 ); // NK1 - 11 : Next of Kin / Associated Parties Job Code / Class( JCC ) <b>optional < / b>
     //ADDED_NOT_SHOWN_NK1( 12 ); // NK1 - 12 : Next of Kin / Associated Parties Employee Number( CX ) <b>optional < / b>
     //ADDED_NOT_SHOWN_NK1( 13 ); // NK1 - 13 : Organization Name - NK1( XON ) <b>optional repeating< / b>
     //ADDED_NOT_SHOWN_NK1( 14 ); // NK1 - 14 : Marital Status( CE ) <b>optional < / b>
     //ADDED_NOT_SHOWN_NK1( 15 ); // NK1 - 15 : Administrative Sex( IS ) <b>optional < / b>
     //ADDED_NOT_SHOWN_NK1( 16 ); // NK1 - 16 : Date / Time Of Birth( TS ) <b>optional < / b>
     //ADDED_NOT_SHOWN_NK1( 17 ); // NK1 - 17 : Living Dependency( IS ) <b>optional repeating< / b>
     //ADDED_NOT_SHOWN_NK1( 18 ); // NK1 - 18 : Ambulatory Status( IS ) <b>optional repeating< / b>
     //ADDED_NOT_SHOWN_NK1( 19 ); // NK1 - 19 : Citizenship( CE ) <b>optional repeating< / b>
     //ADDED_NOT_SHOWN_NK1( 20 ); // NK1 - 20 : Primary Language( CE ) <b>optional < / b>
     //ADDED_NOT_SHOWN_NK1( 21 ); // NK1 - 21 : Living Arrangement( IS ) <b>optional < / b>
     //ADDED_NOT_SHOWN_NK1( 22 ); // NK1 - 22 : Publicity Code( CE ) <b>optional < / b>
     //ADDED_NOT_SHOWN_NK1( 23 ); // NK1 - 23 : Protection Indicator( ID ) <b>optional < / b>
     //ADDED_NOT_SHOWN_NK1( 24 ); // NK1 - 24 : Student Indicator( IS ) <b>optional < / b>
     //ADDED_NOT_SHOWN_NK1( 25 ); // NK1 - 25 : Religion( CE ) <b>optional < / b>
     //ADDED_NOT_SHOWN_NK1( 26 ); // NK1 - 26 : Mother's Maiden Name (XPN) <b>optional repeating</b>
     //ADDED_NOT_SHOWN_NK1( 27 ); // NK1 - 27 : Nationality( CE ) <b>optional < / b>
     //ADDED_NOT_SHOWN_NK1( 28 ); // NK1 - 28 : Ethnic Group( CE ) <b>optional repeating< / b>
     //ADDED_NOT_SHOWN_NK1( 29 ); // NK1 - 29 : Contact Reason( CE ) <b>optional repeating< / b>
     //ADDED_NOT_SHOWN_NK1( 30 ); // NK1 - 30 : Contact Person's Name (XPN) <b>optional repeating</b>
     //ADDED_NOT_SHOWN_NK1( 31 ); // NK1 - 31 : Contact Person's Telephone Number (XTN) <b>optional repeating</b>
     //ADDED_NOT_SHOWN_NK1( 32 ); // NK1 - 32 : Contact Person's Address (XAD) <b>optional repeating</b>
     //ADDED_NOT_SHOWN_NK1( 33 ); // NK1 - 33 : Next of Kin / Associated Party's Identifiers (CX) <b>optional repeating</b>
     //ADDED_NOT_SHOWN_NK1( 34 ); // NK1 - 34 : Job Status( IS ) <b>optional < / b>
     //ADDED_NOT_SHOWN_NK1( 35 ); // NK1 - 35 : Race( CE ) <b>optional repeating< / b>
     //ADDED_NOT_SHOWN_NK1( 36 ); // NK1 - 36 : Handicap( IS ) <b>optional < / b>
     //ADDED_NOT_SHOWN_NK1( 37 ); // NK1 - 37 : Contact Person Social Security Number( ST ) <b>optional < / b>
     return result;
}


void CNK1Page::OnBnClickedButton1()
{
     CXPNPerson XPNEdit( psNK1->getName(), L"Name" );
     if ( IDOK == XPNEdit.DoModal() )
          SHOW_EDIT_NAME_DATA( IDC_EDIT_NKNAME_NK1, psNK1->getName() );
}


void CNK1Page::OnBnClickedButton2()
{
     CAddressXAD XADEdit( psNK1->getAddress() );
     if ( IDOK == XADEdit.DoModal() )
          SHOW_EDIT_ADDRESS_DATA( IDC_EDIT_ADDRESS_NK1, psNK1->getAddress() );
}


BOOL CNK1Page::OnInitDialog()
{
     std::string param;
     __super::OnInitDialog();

     CComboBox* pComboRelation = NULL;
     CString name;
     CPropertyPage::GetWindowTextW( name );
     psNK1->getSetIDNK1()->getData( param );
     name += ( wstring( L" " ) + getWString( param ) ).c_str();
     CPropertyPage::SetWindowTextW( name );

     TABLE_LOAD( KNOWN_RELATIONS_TYPE, relationType, RelationsTypeTbl, pComboRelation, IDC_COMBO_NKRELAT_NK1 );

     SHOW_EDIT_NAME_DATA( IDC_EDIT_NKNAME_NK1, psNK1->getName() );
     SHOW_COMBO_DATA( relationType, pComboRelation, psNK1->getRelationship()->getIdentifier() );
     SHOW_EDIT_ADDRESS_DATA( IDC_EDIT_ADDRESS_NK1, psNK1->getAddress() );
     SHOW_EDIT_DATA( IDC_EDIT_PHONE_NK1, psNK1->getPhoneNumber()->getXTN_1() );
     SHOW_EDIT_DATA( IDC_EDIT_BIS_PHONE_NK1, psNK1->getBusinessPhoneNumber()->getXTN_1() );

     return TRUE;  // return TRUE unless you set the focus to a control
     // EXCEPTION: OCX Property Pages should return FALSE
}


void CNK1Page::OnOK()
{
     CString message;

     //( (CEdit*)GetDlgItem( IDC_EDIT_VERSIONID ) )->SetWindowText( getWString( version ).c_str( ) );
     //GET_EDIT_DATA( IDC_COMBO_NKRELAT_NK1, message, psNK1->getRelationship()->getIdentifier() );
     SAVE_DATA( csRelat, psNK1->getRelationship()->getIdentifier() );
     //GET_EDIT_DATA( IDC_EDIT_PHONE_NK1, message, psNK1->getPhoneNumber()->getTn() );
     SAVE_DATA( csPhone, psNK1->getPhoneNumber()->getXTN_1() );
     //GET_EDIT_DATA( IDC_EDIT_BIS_PHONE_NK1, message, psNK1->getBusinessPhoneNumber()->getTn() );
     SAVE_DATA( csPhoneB, psNK1->getBusinessPhoneNumber()->getXTN_1() );
     __super::OnOK();
}

void CNK1Page::OnCbnSelchangeComboNkrelatNk1()
{
     ( (CComboBox*)GetDlgItem( IDC_COMBO_NKRELAT_NK1 ) )->GetLBText( ( (CComboBox*)GetDlgItem( IDC_COMBO_NKRELAT_NK1 ) )->GetCurSel(), csRelat );
}

void CNK1Page::OnEnChangeEditPhoneNk1()
{
     GetDlgItem( IDC_EDIT_PHONE_NK1 )->GetWindowTextW( csPhone );
}

void CNK1Page::OnEnChangeEditBisPhoneNk1()
{
     GetDlgItem( IDC_EDIT_BIS_PHONE_NK1 )->GetWindowTextW( csPhoneB );
}
