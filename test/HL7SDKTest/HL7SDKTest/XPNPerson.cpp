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

// XPNPerson.cpp : implementation file
//

#include "stdafx.h"
#include "HL7SDKTest.h"
#include "XPNPerson.h"
#include "afxdialogex.h"

#include "Tables.h"
#include "Defines.h"

// CXPNPerson dialog

DATA_TYPE DegreeTypeTbl[ ] = {
     { L"AAS", L"Associate of Applied Science" },
     { L"AA", L"Associate of Arts" },
     { L"ABA", L"Associate of Business Administration" },
     { L"AE", L"Associate of Engineering" },
     { L"AS", L"Associate of Science" },
     { L"BA", L"Bachelor of Arts" },
     { L"BBA", L"Bachelor of Business Administration" },
     { L"BE", L"Bachelor or Engineering" },
     { L"BFA", L"Bachelor of Fine Arts" },
     { L"BN", L"Bachelor of Nursing" },
     { L"BS", L"Bachelor of Science" },
     { L"BSL", L"Bachelor of Science – Law" },
     { L"BT", L"Bachelor of Theology" },
     { L"CER", L"Certificate" },
     { L"DIP", L"Diploma" },
     { L"DBA", L"Doctor of Business Administration" },
     { L"DED", L"Doctor of Education" },
     { L"PharmD", L"Doctor of Pharmacy" },
     { L"PHE", L"Doctor of Engineering" },
     { L"PHD", L"Doctor of Philosophy" },
     { L"PHS", L"Doctor of Science" },
     { L"MD", L"Doctor of Medicine" },
     { L"DO", L"Doctor of Osteopathy" },
     { L"HS", L"High School Graduate" },
     { L"JD", L"Juris Doctor" },
     { L"MA", L"Master of Arts" },
     { L"MBA", L"Master of Business Administration" },
     { L"MCE", L"Master of Civil Engineering" },
     { L"MDI", L"Master of Divinity" },
     { L"MED", L"Master of Education" },
     { L"MEE", L"Master of Electrical Engineering" },
     { L"ME", L"Master of Engineering" },
     { L"MFA", L"Master of Fine Arts" },
     { L"MME", L"Master of Mechanical Engineering" },
     { L"MS", L"Master of Science" },
     { L"MSL", L"Master of Science – Law" },
     { L"MT", L"Master of Theology" },
     { L"NG", L"Non - Graduate" },
     { L"SEC", L"Secretarial Certificate" },
     { L"TS", L"Trade School Graduate" },
     { L"", L"Not set" },
     { L"", L"" },
};

IMPLEMENT_DYNAMIC( CXPNPerson, CDialogEx )

CXPNPerson::CXPNPerson(CWnd* pParent /*=NULL*/)
	: CDialogEx(CXPNPerson::IDD, pParent)
    , bXCN( FALSE )
{

}

CXPNPerson::CXPNPerson( HL7_24::XPN* pXPN, CString name, CWnd* pParent /*=NULL*/ )
     : CDialogEx( CXPNPerson::IDD, pParent )
     , bXCN( FALSE )
{
     save_name = name;
     show_missed = IsNotShowed( pXPN );
     psXPN = pXPN;
}

CXPNPerson::CXPNPerson( HL7_24::XPN* pXPN, CString name, CString ID, CWnd* pParent /*=NULL*/ )
     : CDialogEx( CXPNPerson::IDD, pParent )
     , bXCN( TRUE )
{
     save_name = name;
     show_missed = IsNotShowed( pXPN );
     psXPN = pXPN;
     sIDNumber = ID;
}

CXPNPerson::~CXPNPerson()
{
}

void CXPNPerson::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CXPNPerson, CDialogEx)
     ON_BN_CLICKED( IDOK, &CXPNPerson::OnBnClickedOk )
END_MESSAGE_MAP()


// CXPNPerson message handlers

string CXPNPerson::IsNotShowed( HL7_24::XPN* pXPN )
{
     string result;
     return result;
}

void CXPNPerson::OnBnClickedOk()
{
     CString message;
     //GET_TABLE_DATA( IDC_COMBO_DEGREE_PID, message, KNOWN_DEGREE_TYPE, degreeType, DegreeTypeTbl, psXPN->getDegreeMd()->setData );
     //GET_EDIT_DATA( IDC_EDIT_FAMNAME, message, psXPN->getFamilyName()->getSurname()->setData );
     GetDlgItem( IDC_COMBO_DEGREE_PID )->GetWindowTextW( message );
     Tables<KNOWN_DEGREE_TYPE::KNOWN_DEGREE_TYPE> degreeType( (wchar_t*)message.GetString( ), DegreeTypeTbl );
     psXPN->getDegree( )->setData( getAString( degreeType.getData( ) ) );
     ( (CEdit*)GetDlgItem( IDC_EDIT_FAMNAME ) )->GetWindowTextW( message );
     psXPN->getFamilyName( )->getSurname()->setData( getAString( message.GetString( ) ) );
     ( (CEdit*)GetDlgItem( IDC_EDIT_GIVNAME ) )->GetWindowTextW( message );
     psXPN->getGivenName( )->setData( getAString( message.GetString( ) ) );
     ( (CEdit*)GetDlgItem( IDC_EDIT_SGIVNAME ) )->GetWindowTextW( message );
     psXPN->getSecondAndFurtherGivenNamesOrInitialsThereof( )->setData( getAString( message.GetString( ) ) );
     ( (CEdit*)GetDlgItem( IDC_EDIT_SUFFIX_PID ) )->GetWindowTextW( message );
     psXPN->getSuffix( )->setData( getAString( message.GetString( ) ) );
     ( (CEdit*)GetDlgItem( IDC_EDIT_PREFIX_PID ) )->GetWindowTextW( message );
     psXPN->getPrefix( )->setData( getAString( message.GetString( ) ) );
     if ( bXCN )
     {
          GetDlgItem( IDC_EDIT_LOC_CARE_UNIT_PRIOR_PV1 )->GetWindowTextW( sIDNumber );
     }
     CDialogEx::OnOK();
}


BOOL CXPNPerson::OnInitDialog()
{
     __super::OnInitDialog();

     CDialogEx::SetWindowTextW( save_name );

     //CComboBox* pComboDegree = NULL;
     //TABLE_LOAD( KNOWN_DEGREE_TYPE, degreeType, DegreeTypeTbl, pComboDegree, IDC_COMBO_DEGREE_PID );
     //SHOW_EDIT_DATA( IDC_EDIT_FAMNAME, pXPN->getFamilyName()->getName() );
     //SHOW_COMBO_DATA( degreeType, pComboDegree, pXPN->getDegreeMd()->getData() );

     Tables<KNOWN_DEGREE_TYPE::KNOWN_DEGREE_TYPE> degreeType( NULL, DegreeTypeTbl );
     CComboBox* pComboDegree = (CComboBox*)GetDlgItem( IDC_COMBO_DEGREE_PID );
     const DATA_TYPE* nextItem = degreeType.startEnum();
     while ( nextItem )
     {
          pComboDegree->AddString( nextItem->desc );
          nextItem = degreeType.nextEnum();
     }

     std::string param;
     psXPN->getFamilyName()->getSurname()->getData( param );
     ( (CEdit*)GetDlgItem( IDC_EDIT_FAMNAME ) )->SetWindowText( getWString( param ).c_str() );
     psXPN->getGivenName()->getData( param );
     ( (CEdit*)GetDlgItem( IDC_EDIT_GIVNAME ) )->SetWindowText( getWString( param ).c_str() );
     psXPN->getSecondAndFurtherGivenNamesOrInitialsThereof()->getData( param );
     ( (CEdit*)GetDlgItem( IDC_EDIT_SGIVNAME ) )->SetWindowText( getWString( param ).c_str() );
     psXPN->getSuffix()->getData( param );
     ( (CEdit*)GetDlgItem( IDC_EDIT_SUFFIX_PID ) )->SetWindowText( getWString( param ).c_str() );
     psXPN->getPrefix()->getData( param );
     ( (CEdit*)GetDlgItem( IDC_EDIT_PREFIX_PID ) )->SetWindowText( getWString( param ).c_str() );
     psXPN->getDegree()->getData( param );
     degreeType.setName( (wchar_t*)getWString( param ).c_str() );
     pComboDegree->SelectString( -1, degreeType.getDesc() );

     if ( bXCN )
     {
          GetDlgItem( IDC_STATIC_ID_XCN )->ShowWindow( SW_SHOWNORMAL );
          GetDlgItem( IDC_EDIT_ID_NUMBER_XCN )->ShowWindow( SW_SHOWNORMAL );
          GetDlgItem( IDC_EDIT_ID_NUMBER_XCN )->SetWindowText( sIDNumber );
     }
     else
     {
          GetDlgItem( IDC_STATIC_ID_XCN )->ShowWindow( SW_HIDE );
          GetDlgItem( IDC_EDIT_ID_NUMBER_XCN )->ShowWindow( SW_HIDE );
     }
     return TRUE;  // return TRUE unless you set the focus to a control
     // EXCEPTION: OCX Property Pages should return FALSE
}
