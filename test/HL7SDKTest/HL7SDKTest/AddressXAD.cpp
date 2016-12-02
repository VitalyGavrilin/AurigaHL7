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

// AddressXAD.cpp : implementation file
//


#include "stdafx.h"
#include "HL7SDKTest.h"
#include "AddressXAD.h"
#include "afxdialogex.h"

#include "Tables.h"
#include "AddressXAD.h"
#include "Defines.h"
//#include "datatype\XAD.h"

//using namespace std;
//using namespace HL7_24;

extern DATA_TYPE CountryTypeTbl[ ];
// CAddressXAD dialog

IMPLEMENT_DYNAMIC(CAddressXAD, CDialogEx)

CAddressXAD::CAddressXAD(CWnd* pParent /*=NULL*/)
	: CDialogEx(CAddressXAD::IDD, pParent)
{
}

CAddressXAD::CAddressXAD( HL7_24::XAD* pXAD, CWnd* pParent /*=NULL*/ )
     : CDialogEx( CAddressXAD::IDD, pParent )
{
     show_missed = IsNotShowed( pXAD );
     psXAD = pXAD;
}

CAddressXAD::~CAddressXAD()
{
}

void CAddressXAD::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CAddressXAD, CDialogEx)
     ON_EN_CHANGE( IDC_EDIT1, &CAddressXAD::OnEnChangeEdit1 )
     ON_BN_CLICKED( IDOK, &CAddressXAD::OnBnClickedOk )
END_MESSAGE_MAP()


// CAddressXAD message handlers


void CAddressXAD::OnEnChangeEdit1()
{
     // TODO:  If this is a RICHEDIT control, the control will not
     // send this notification unless you override the CDialogEx::OnInitDialog()
     // function and call CRichEditCtrl().SetEventMask()
     // with the ENM_CHANGE flag ORed into the mask.

     // TODO:  Add your control notification handler code here
}

#define ADDED_NOT_SHOWN_XAD( number ) ADDED_NOT_SHOWN_SUB( XAD, number )
#define ADDED_NOT_SHOWN_ITEM_PID( number, func ) ADDED_NOT_SHOWN_ITEM_SUB( PID, number, func )
#define ADDED_NOT_SHOWN_ITEM_SUB_COMP_PID( number, func ) ADDED_NOT_SHOWN_ITEM_SUB_COMP( PID, number, func )

string CAddressXAD::IsNotShowed( HL7_24::XAD* pXAD )
{
     string result;
     ADDED_NOT_SHOWN_XAD( 7 ); // address type( ID )
     ADDED_NOT_SHOWN_XAD( 8 ); // other geographic designation( ST )
     ADDED_NOT_SHOWN_XAD( 9 ); // county / parish code( IS )
     ADDED_NOT_SHOWN_XAD( 10 ); // census tract( IS )
     ADDED_NOT_SHOWN_XAD( 11 ); // address representation code( ID )
     ADDED_NOT_SHOWN_XAD( 12 ); // address validity range( DR )
     return result;
}


void CAddressXAD::OnBnClickedOk()
{
     CString message;
     // TODO: Add your control notification handler code here
     ( (CEdit*)GetDlgItem( IDC_EDIT_STREET_NUMBER_SAD ) )->GetWindowTextW( message );
     psXAD->getStreetAddress( )->getDwellingNumber( )->setData( getAString( message.GetString() ) );
     ( (CEdit*)GetDlgItem( IDC_EDIT_STREET_SAD ) )->GetWindowTextW( message );
     psXAD->getStreetAddress( )->getStreetName( )->setData( getAString( message.GetString( ) ) );
     ( (CEdit*)GetDlgItem( IDC_EDIT_MAILING_ADDRESS_SAD ) )->GetWindowTextW( message );
     psXAD->getStreetAddress( )->getStreetOrMailingAddress( )->setData( getAString( message.GetString( ) ) );
     ( (CEdit*)GetDlgItem( IDC_EDIT_OTHERD_XAD ) )->GetWindowTextW( message );
     psXAD->getOtherDesignation( )->setData( getAString( message.GetString( ) ) );
     ( (CEdit*)GetDlgItem( IDC_EDIT_CITY_XAD ) )->GetWindowTextW( message );
     psXAD->getCity( )->setData( getAString( message.GetString( ) ) );
     ( (CEdit*)GetDlgItem( IDC_EDIT_PROVINCE_XAD ) )->GetWindowTextW( message );
     psXAD->getStateOrProvince( )->setData( getAString( message.GetString( ) ) );
     ( (CComboBox*)GetDlgItem( IDC_COMBO_COUNTRY_XAD ) )->GetWindowTextW( message );
     Tables<KNOWN_COUNTRY_TYPE::KNOWN_COUNTRY_TYPE> countryType( (wchar_t*)message.GetString( ), CountryTypeTbl );
     psXAD->getCountry()->setData( getAString( countryType.getData() ) );
     ( (CEdit*)GetDlgItem( IDC_EDIT_POSTAL_CODE_XAD ) )->GetWindowTextW( message );
     psXAD->getZipOrPostalCode( )->setData( getAString( message.GetString( ) ) );
     CDialogEx::OnOK( );
}


BOOL CAddressXAD::OnInitDialog()
{
     std::string param;
     __super::OnInitDialog();

     Tables<KNOWN_COUNTRY_TYPE::KNOWN_COUNTRY_TYPE> countryType( NULL, CountryTypeTbl );
     CComboBox* pComboCountry = (CComboBox*)GetDlgItem( IDC_COMBO_COUNTRY_XAD );
     const DATA_TYPE* nextItem = countryType.startEnum();
     while ( nextItem )
     {
          pComboCountry->AddString( nextItem->desc );
          nextItem = countryType.nextEnum();
     }

     SHOW_EDIT_DATA( IDC_EDIT_POSTAL_CODE_XAD, psXAD->getZipOrPostalCode() );
     //( (CEdit*)GetDlgItem( IDC_EDIT_POSTAL_CODE_XAD ) )->SetWindowText( getWString( psXAD->getZipOrPostalCode()->getData() ).c_str() );
     psXAD->getCountry()->getData( param );
     countryType.setName( (wchar_t*)getWString( param ).c_str() );
     pComboCountry->SelectString( -1, countryType.getDesc() );
     SHOW_EDIT_DATA( IDC_EDIT_PROVINCE_XAD, psXAD->getStateOrProvince() );
     //( (CEdit*)GetDlgItem( IDC_EDIT_PROVINCE_XAD ) )->SetWindowText( getWString( psXAD->getStateOrProvince()->getData() ).c_str() );
     SHOW_EDIT_DATA( IDC_EDIT_CITY_XAD, psXAD->getCity() );
     //( (CEdit*)GetDlgItem( IDC_EDIT_CITY_XAD ) )->SetWindowText( getWString( psXAD->getCity()->getData() ).c_str() );
     SHOW_EDIT_DATA( IDC_EDIT_OTHERD_XAD, psXAD->getOtherDesignation() );
     //( (CEdit*)GetDlgItem( IDC_EDIT_OTHERD_XAD ) )->SetWindowText( getWString( psXAD->getOtherDesignation()->getData() ).c_str() );
     SHOW_EDIT_DATA( IDC_EDIT_MAILING_ADDRESS_SAD, psXAD->getStreetAddress()->getStreetOrMailingAddress() );
     //( (CEdit*)GetDlgItem( IDC_EDIT_MAILING_ADDRESS_SAD ) )->SetWindowText( getWString( psXAD->getStreetAddress()->getStreetOrMailingAddress()->getData() ).c_str() );
     SHOW_EDIT_DATA( IDC_EDIT_STREET_SAD, psXAD->getStreetAddress()->getStreetName() );
     //( (CEdit*)GetDlgItem( IDC_EDIT_STREET_SAD ) )->SetWindowText( getWString( psXAD->getStreetAddress()->getStreetName()->getData() ).c_str() );
     SHOW_EDIT_DATA( IDC_EDIT_STREET_NUMBER_SAD, psXAD->getStreetAddress()->getDwellingNumber() );
     //( (CEdit*)GetDlgItem( IDC_EDIT_STREET_NUMBER_SAD ) )->SetWindowText( getWString( psXAD->getStreetAddress()->getDwellingNumber()->getData() ).c_str() );

     return TRUE;  // return TRUE unless you set the focus to a control
     // EXCEPTION: OCX Property Pages should return FALSE
}
