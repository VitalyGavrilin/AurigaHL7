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

// DG1Page.cpp : implementation file
//

#include "stdafx.h"
#include "HL7SDKTest.h"
#include "DG1Page.h"
#include "afxdialogex.h"

#include "Tables.h"
#include "Defines.h"
#include "Helper.h"


// CDG1Page dialog

IMPLEMENT_DYNAMIC(CDG1Page, CPropertyPage)

DATA_TYPE DgTypeTypeTbl[ ] = {
     { L"A", L"Admitting" },
     { L"W", L"Working" },
     { L"F", L"Final" },
     { L"", L"Unknown" },
     { L"", L"" },
};

CDG1Page::CDG1Page( )
	: CPropertyPage(CDG1Page::IDD)
{
     csTitle = (CString)L"Diagnosis";
     m_psp.dwFlags |= PSP_USETITLE;
     m_psp.pszTitle = csTitle;
}

CDG1Page::CDG1Page( HL7_24::DG1* pDG1 )
     : CPropertyPage( CDG1Page::IDD )
{
     std::string param;
     show_missed = IsNotShowed( pDG1 );
     psDG1 = pDG1;
     //csTitle = (CString)L"Diagnosis " + getWString( psDG1->getSetIDDG1()->getComparator()->getData() ).c_str();
     psDG1->getSetIDDG1()->getData( param );
     csTitle = (CString)L"Diagnosis " + getWString( param ).c_str();
     m_psp.dwFlags |= PSP_USETITLE;
     m_psp.pszTitle = csTitle;
}

CDG1Page::~CDG1Page()
{
}

void CDG1Page::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDG1Page, CPropertyPage)
     ON_EN_CHANGE( IDC_EDIT_DIAG_ID_DG1, &CDG1Page::OnEnChangeEditDiagIdDg1 )
     ON_EN_CHANGE( IDC_EDIT_DIAG_DESC_DG1, &CDG1Page::OnEnChangeEditDiagDescDg1 )
     ON_CBN_SELCHANGE( IDC_COMBO_DIAG_TYPE_DG1, &CDG1Page::OnCbnSelchangeComboDiagTypeDg1 )
     ON_EN_CHANGE( IDC_EDIT_DG_RELATED_GRP_DG1, &CDG1Page::OnEnChangeEditDgRelatedGrpDg1 )
END_MESSAGE_MAP()


// CDG1Page message handlers
#define ADDED_NOT_SHOWN_DG1( number ) ADDED_NOT_SHOWN_SUB( DG1, number )

string CDG1Page::IsNotShowed( HL7_24::DG1* pDG1 )
{
     string result;
     //ADDED_NOT_SHOWN_DG1( 2 ); // DG1 - 2 : Diagnosis Coding Method( ID ) <b>optional < / b>
     //ADDED_NOT_SHOWN_DG1( 5 ); // DG1 - 5 : Diagnosis Date / Time( TS ) <b>optional < / b>
     //ADDED_NOT_SHOWN_DG1( 7 ); // DG1 - 7 : Major Diagnostic Category( CE ) <b>optional < / b>
     //ADDED_NOT_SHOWN_DG1( 8 ); // DG1 - 8 : Diagnostic Related Group( CE ) <b>optional < / b>
     //ADDED_NOT_SHOWN_DG1( 9 ); // DG1 - 9 : DRG Approval Indicator( ID ) <b>optional < / b>
     //ADDED_NOT_SHOWN_DG1( 10 ); // DG1 - 10 : DRG Grouper Review Code( IS ) <b>optional < / b>
     //ADDED_NOT_SHOWN_DG1( 11 ); // DG1 - 11 : Outlier Type( CE ) <b>optional < / b>
     //ADDED_NOT_SHOWN_DG1( 12 ); // DG1 - 12 : Outlier Days( NM ) <b>optional < / b>
     //ADDED_NOT_SHOWN_DG1( 13 ); // DG1 - 13 : Outlier Cost( CP ) <b>optional < / b>
     //ADDED_NOT_SHOWN_DG1( 14 ); // DG1 - 14 : Grouper Version And Type( ST ) <b>optional < / b>
     //ADDED_NOT_SHOWN_DG1( 15 ); // DG1 - 15 : Diagnosis Priority( ID ) <b>optional < / b>
     //ADDED_NOT_SHOWN_DG1( 16 ); // DG1 - 16 : Diagnosing Clinician( XCN ) <b>optional repeating< / b>
     //ADDED_NOT_SHOWN_DG1( 17 ); // DG1 - 17 : Diagnosis Classification( IS ) <b>optional < / b>
     //ADDED_NOT_SHOWN_DG1( 18 ); // DG1 - 18 : Confidential Indicator( ID ) <b>optional < / b>
     //ADDED_NOT_SHOWN_DG1( 19 ); // DG1 - 19 : Attestation Date / Time( TS ) <b>optional < / b>
     return result;
}


BOOL CDG1Page::OnInitDialog()
{
     std::string param;
     __super::OnInitDialog();

     CComboBox* pComboDgType = NULL;
     //CString name;
     //CPropertyPage::GetWindowTextW( name );
     //name += ( wstring( L" " ) + getWString( psDG1->getSetIDDG1()->getComparator()->getData() ) ).c_str();
     //CPropertyPage::SetWindowTextW( name );

     TABLE_LOAD( KNOWN_DIAGNOSIS_TYPE_TYPE, DgTypeType, DgTypeTypeTbl, pComboDgType, IDC_COMBO_DIAG_TYPE_DG1 );

     SHOW_EDIT_DATA( IDC_EDIT_DIAG_ID_DG1, psDG1->getDiagnosisCodeDG1()->getIdentifier() );
     if ( psDG1->getDiagnosisCodeDG1()->isCE_0051_2() )
     {
          SHOW_EDIT_DATA( IDC_EDIT_DIAG_DESC_DG1, psDG1->getDiagnosisCodeDG1()->getText() );
     }
     else
     {
          SHOW_EDIT_DATA( IDC_EDIT_DIAG_DESC_DG1, psDG1->getDiagnosisDescription() );
     }
     SHOW_COMBO_DATA( DgTypeType, pComboDgType, psDG1->getDiagnosisType() );
     SHOW_EDIT_DATA( IDC_EDIT_DG_RELATED_GRP_DG1, psDG1->getDiagnosticRelatedGroup()->getIdentifier() );

     return TRUE;  // return TRUE unless you set the focus to a control
     // EXCEPTION: OCX Property Pages should return FALSE
}


void CDG1Page::OnOK()
{
     CString message;

     //GET_EDIT_DATA( IDC_COMBO_DIAG_TYPE_DG1, message, psDG1->getDiagnosisType() );
     SAVE_DATA( csDiagType, psDG1->getDiagnosisType() );
     //GET_EDIT_DATA( IDC_EDIT_DIAG_ID_DG1, message, psDG1->getDiagnosisCodeDG1()->getIdentifier() );
     SAVE_DATA( csDiagID, psDG1->getDiagnosisCodeDG1()->getIdentifier() );
     //GET_EDIT_DATA( IDC_EDIT_DIAG_DESC_DG1, message, psDG1->getDiagnosisCodeDG1()->getText() );
     SAVE_DATA( csDiagDesc, psDG1->getDiagnosisCodeDG1()->getText() );
     //GET_EDIT_DATA( IDC_EDIT_DIAG_DESC_DG1, message, psDG1->getDiagnosisDescription() );
     SAVE_DATA( csDiagDesc, psDG1->getDiagnosisDescription() );
     //GET_EDIT_DATA( IDC_EDIT_DG_RELATED_GRP_DG1, message, psDG1->getDiagnosticRelatedGroup()->getIdentifier() );
     SAVE_DATA( csDgGrp, psDG1->getDiagnosticRelatedGroup()->getIdentifier() );
     
     __super::OnOK();
}


void CDG1Page::OnEnChangeEditDiagIdDg1()
{
     GetDlgItem( IDC_EDIT_DIAG_ID_DG1 )->GetWindowTextW( csDiagID );
}


void CDG1Page::OnEnChangeEditDiagDescDg1()
{
     GetDlgItem( IDC_EDIT_DIAG_DESC_DG1 )->GetWindowTextW( csDiagDesc );
}


void CDG1Page::OnCbnSelchangeComboDiagTypeDg1()
{
     ( (CComboBox*)GetDlgItem( IDC_COMBO_DIAG_TYPE_DG1 ) )->GetLBText( ( (CComboBox*)GetDlgItem( IDC_COMBO_DIAG_TYPE_DG1 ) )->GetCurSel(), csDiagType );
}


void CDG1Page::OnEnChangeEditDgRelatedGrpDg1()
{
     GetDlgItem( IDC_EDIT_DG_RELATED_GRP_DG1 )->GetWindowTextW( csDgGrp );
}
