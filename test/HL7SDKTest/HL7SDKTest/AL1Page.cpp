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

// AL1Page.cpp : implementation file

#include "stdafx.h"
#include "HL7SDKTest.h"
#include "AL1Page.h"
#include "afxdialogex.h"

#include "Tables.h"
#include "Defines.h"

#include "TSDateTime.h"

// CAL1Page dialog

IMPLEMENT_DYNAMIC(CAL1Page, CPropertyPage)

DATA_TYPE AllergyTypeTbl[ ] = {
     { L"DA", L"Drug Allergy" },
     { L"FA", L"Food Allergy" },
     { L"MA", L"Miscellaneous Allergy" },
     { L"MC", L"Miscellaneous Contraindication" },
     { L"EA", L"Environmental Allergy" },
     { L"AA", L"Animal Allergy" },
     { L"PA", L"Plant Allergy" },
     { L"LA", L"Pollen Allergy" },
     { L"", L"Unknown" },
     { L"", L"" },
};

DATA_TYPE AllergySevTypeTbl[ ] = {
     { L"SV", L"Severe" },
     { L"MO", L"Moderate" },
     { L"MI", L"Mild" },
     { L"", L"Unknown" },
     { L"", L"" },
};

CAL1Page::CAL1Page( )
	: CPropertyPage(CAL1Page::IDD)
{
     csTitle = (CString)L"Patient allergy information";
     m_psp.dwFlags |= PSP_USETITLE;
     m_psp.pszTitle = csTitle;
}

CAL1Page::CAL1Page( HL7_24::AL1* pAL1 )
     : CPropertyPage( CAL1Page::IDD )
{
     std::string param;
     show_missed = IsNotShowed( pAL1 );
     psAL1 = pAL1;
     psAL1->getSetIDAL1()->getIdentifier()->getData( param );
     csTitle = ( CString )L"Patient allergy information " + getWString( param ).c_str();
     m_psp.dwFlags |= PSP_USETITLE;
     m_psp.pszTitle = csTitle;
}

CAL1Page::~CAL1Page()
{
}

void CAL1Page::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CAL1Page, CPropertyPage)
     ON_BN_CLICKED( IDC_BUTTON1, &CAL1Page::OnBnClickedButton1 )
     ON_CBN_SELCHANGE( IDC_COMBO_AL_TYPE_AL1, &CAL1Page::OnCbnSelchangeComboAlTypeAl1 )
     ON_CBN_SELCHANGE( IDC_COMBO_AL_SEVERITY_AL1, &CAL1Page::OnCbnSelchangeComboAlSeverityAl1 )
     ON_EN_CHANGE( IDC_EDIT_AL_CODE_AL1, &CAL1Page::OnEnChangeEditAlCodeAl1 )
     ON_EN_CHANGE( IDC_EDIT_REACTION_AL1, &CAL1Page::OnEnChangeEditReactionAl1 )
END_MESSAGE_MAP()

#define ADDED_NOT_SHOWN_AL1( number ) ADDED_NOT_SHOWN_SUB( AL1, number )

// CAL1Page message handlers
string CAL1Page::IsNotShowed( HL7_24::AL1* pAL1 )
{
     string result;
     ADDED_NOT_SHOWN_AL1( 1 ); // 1: Set ID - AL1( CE ) <b> < / b>
     ADDED_NOT_SHOWN_AL1( 6 ); // 6 : Identification Date( DT ) <b>optional < / b>
     return result;
}


BOOL CAL1Page::OnInitDialog()
{
     std::string param;
     __super::OnInitDialog();

     Tables<KNOWN_ALLERGY_TYPE::KNOWN_ALLERGY_TYPE> allergyType( NULL, AllergyTypeTbl );
     CComboBox* pComboAllergy = (CComboBox*)GetDlgItem( IDC_COMBO_AL_TYPE_AL1 );
     const DATA_TYPE* nextItem = allergyType.startEnum();
     while ( nextItem )
     {
          pComboAllergy->AddString( nextItem->desc );
          nextItem = allergyType.nextEnum();
     }

     Tables<KNOWN_ALLERGY_SEV_TYPE::KNOWN_ALLERGY_SEV_TYPE> allergySevType( NULL, AllergySevTypeTbl );
     CComboBox* pComboAllergySev = (CComboBox*)GetDlgItem( IDC_COMBO_AL_SEVERITY_AL1 );
     nextItem = allergySevType.startEnum();
     while ( nextItem )
     {
          pComboAllergySev->AddString( nextItem->desc );
          nextItem = allergySevType.nextEnum();
     }

     psAL1->getAllergenTypeCode()->getIdentifier()->getData( param );
     allergyType.setName( (wchar_t*)getWString( param ).c_str() );
     pComboAllergy->SelectString( -1, allergyType.getDesc() );
     SHOW_EDIT_DATA( IDC_EDIT_AL_CODE_AL1, psAL1->getAllergenCodeMnemonicDescription()->getIdentifier() );
     //( (CEdit*)GetDlgItem( IDC_EDIT_AL_CODE_AL1 ) )->SetWindowText( getWString( psAL1->getAllergenCodeMnemonicDescription()->getIdentifier()->getData() ).c_str() );
     psAL1->getAllergySeverityCode()->getIdentifier()->getData( param );
     allergySevType.setName( (wchar_t*)getWString( param ).c_str() );
     pComboAllergySev->SelectString( -1, allergySevType.getDesc() );
     SHOW_EDIT_DATA( IDC_EDIT_REACTION_AL1, psAL1->getAllergyReactionCode() );
     //( (CEdit*)GetDlgItem( IDC_EDIT_REACTION_AL1 ) )->SetWindowText( getWString( psAL1->getAllergyReactionCode()->getData() ).c_str() );

     SHOW_EDIT_TIME_DATA( IDC_EDIT_IDENTIFICATION_DATE_AL1, psAL1->getIdentificationDate() );

     return TRUE;  // return TRUE unless you set the focus to a control
     // EXCEPTION: OCX Property Pages should return FALSE
}


void CAL1Page::OnBnClickedButton1()
{
     CTSDateTime DTe( psAL1->getIdentificationDate(), L"Identification date" );
     if ( IDOK == DTe.DoModal() )
          SHOW_EDIT_TIME_DATA( IDC_EDIT_IDENTIFICATION_DATE_AL1, psAL1->getIdentificationDate() );
}


void CAL1Page::OnOK()
{
     CString message;

     //GET_EDIT_DATA( IDC_COMBO_AL_TYPE_AL1, message, psAL1->getAllergenTypeCode()->getIdentifier() );
     SAVE_DATA( csAlergType, psAL1->getAllergenTypeCode()->getIdentifier() );
     //GET_EDIT_DATA( IDC_COMBO_AL_SEVERITY_AL1, message, psAL1->getAllergySeverityCode()->getIdentifier() );
     SAVE_DATA( csAlergSever, psAL1->getAllergySeverityCode()->getIdentifier() );
     //GET_EDIT_DATA( IDC_EDIT_AL_CODE_AL1, message, psAL1->getAllergenCodeMnemonicDescription()->getIdentifier() );
     SAVE_DATA( csAlergCode, psAL1->getAllergenCodeMnemonicDescription()->getIdentifier() );
     //GET_EDIT_DATA( IDC_EDIT_REACTION_AL1, message, psAL1->getAllergyReactionCode() );
     SAVE_DATA( csAlergReact, psAL1->getAllergyReactionCode() );
     __super::OnOK();
}

void CAL1Page::OnCbnSelchangeComboAlTypeAl1()
{
     ( (CComboBox*)GetDlgItem( IDC_COMBO_AL_TYPE_AL1 ) )->GetLBText( ( (CComboBox*)GetDlgItem( IDC_COMBO_AL_TYPE_AL1 ) )->GetCurSel(), csAlergType );
}

void CAL1Page::OnCbnSelchangeComboAlSeverityAl1()
{
     ( (CComboBox*)GetDlgItem( IDC_COMBO_AL_SEVERITY_AL1 ) )->GetLBText( ( (CComboBox*)GetDlgItem( IDC_COMBO_AL_SEVERITY_AL1 ) )->GetCurSel(), csAlergSever );
}

void CAL1Page::OnEnChangeEditAlCodeAl1()
{
     GetDlgItem( IDC_EDIT_AL_CODE_AL1 )->GetWindowTextW( csAlergCode );
}

void CAL1Page::OnEnChangeEditReactionAl1()
{
     GetDlgItem( IDC_EDIT_REACTION_AL1 )->GetWindowTextW( csAlergReact );
}
