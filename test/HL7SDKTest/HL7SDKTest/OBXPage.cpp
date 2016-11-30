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

// OBXPage.cpp : implementation file
//

#include "stdafx.h"
#include "HL7SDKTest.h"
#include "OBXPage.h"
#include "afxdialogex.h"

#include "Tables.h"
#include "Defines.h"
#include "Helper.h"

// COBXPage dialog

DATA_TYPE ValueTypeTypeTbl[] = {
     { L"NM", L"NM" },
     { L"SN", L"SN" },
     { L"ST", L"ST" },
     { L"", L"Unknown" },
     { L"", L"" },
};

DATA_TYPE ObsidIdTypeTbl[] = {
     { L"height", L"height" },
     { L"weight", L"weight" },
     { L"ASA", L"ASA" },
     { L"", L"Unknown" },
     { L"", L"" },
};

DATA_TYPE UnitWIdTypeTbl[] = {
     { L"kg", L"kilograms" },
     { L"g", L"grams" },
     { L"lb", L"pounds" },
     { L"oz", L"ounces" },
     { L"", L"Unknown" },
     { L"", L"" },
};

DATA_TYPE UnitHIdTypeTbl[] = {
     { L"cm", L"centimeters" },
     { L"m", L"meters" },
     { L"in", L"inches" },
     { L"ft", L"feet" },
     { L"", L"Unknown" },
     { L"", L"" },
};

IMPLEMENT_DYNAMIC( COBXPage, CPropertyPage )

COBXPage::COBXPage()
	: CPropertyPage(COBXPage::IDD)
{
     csTitle = L"Observation/Result";
     m_psp.dwFlags |= PSP_USETITLE;
     m_psp.pszTitle = csTitle;
}

COBXPage::COBXPage( HL7_24::OBX* pOBX, int number )
     : CPropertyPage( COBXPage::IDD )
{
     save_number = number;
     show_missed = IsNotShowed( pOBX );
     psOBX = pOBX; 
     csTitle.Format( L"Observation/Result %d", number );
     m_psp.dwFlags |= PSP_USETITLE;
     m_psp.pszTitle = csTitle;
}

COBXPage::~COBXPage()
{
}

void COBXPage::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(COBXPage, CPropertyPage)
     ON_BN_CLICKED( IDC_CHECK_DRG_COMPAT_OBX, &COBXPage::OnBnClickedCheckDrgCompatObx )
     ON_BN_CLICKED( IDC_BUTTON1, &COBXPage::OnBnClickedButton1 )
     ON_CBN_SELCHANGE( IDC_COMBO_OBSID_ID_SUP_OBX, &COBXPage::OnSelchangeComboObsidIdSupObx )
     ON_EN_CHANGE( IDC_EDIT_VALTYPE_NSUP_OBX, &COBXPage::OnEnChangeEditValtypeNsupObx )
     ON_EN_CHANGE( IDC_EDIT_OBSID_ID_NSUP_OBX, &COBXPage::OnEnChangeEditObsidIdNsupObx )
     ON_EN_CHANGE( IDC_EDIT_UNIT_ID_NSUP_OBX, &COBXPage::OnEnChangeEditUnitIdNsupObx )
     ON_EN_CHANGE( IDC_EDIT_OBSID_DESC_NSUP_OBX, &COBXPage::OnEnChangeEditObsidDescNsupObx )
     ON_EN_CHANGE( IDC_EDIT_UNIT_DESC_NSUP_OBX, &COBXPage::OnEnChangeEditUnitDescNsupObx )
     ON_EN_CHANGE( IDC_EDIT_OBSID_CODSYS_NSUP_OBX, &COBXPage::OnEnChangeEditObsidCodsysNsupObx )
     ON_EN_CHANGE( IDC_EDIT_UNIT_CODSYS_NSUP_OBX, &COBXPage::OnEnChangeEditUnitCodsysNsupObx )
     ON_EN_CHANGE( IDC_EDIT_VALUE_OBX, &COBXPage::OnEnChangeEditValueObx )
     ON_CBN_SELCHANGE( IDC_COMBO_UNIT_ID_SUP_OBX, &COBXPage::OnCbnSelchangeComboUnitIdSupObx )
     ON_CBN_SELCHANGE( IDC_COMBO_VALTYPE_SUP_OBX, &COBXPage::OnCbnSelchangeComboValtypeSupObx )
END_MESSAGE_MAP()


// COBXPage message handlers

#define ADDED_NOT_SHOWN_OBX( number ) ADDED_NOT_SHOWN_SUB( OBX, number )

string COBXPage::IsNotShowed( HL7_24::OBX* pOBX )
{
     string result;
     ADDED_NOT_SHOWN_OBX( 4 ); // OBX - 4 : Observation Sub - Id( ST ) <b>optional < / b>
     ADDED_NOT_SHOWN_OBX( 7 ); // OBX - 7 : References Range( ST ) <b>optional < / b>
     ADDED_NOT_SHOWN_OBX( 8 ); // OBX - 8 : Abnormal Flags( IS ) <b>optional < / b>
     ADDED_NOT_SHOWN_OBX( 9 ); // OBX - 9 : Probability( NM ) <b>optional repeating< / b>
     ADDED_NOT_SHOWN_OBX( 10 ); // OBX - 10 : Nature of Abnormal Test( ID ) <b>optional < / b>
     ADDED_NOT_SHOWN_OBX( 11 ); // OBX - 11 : Observation Result Status( ID ) <b> < / b>
     ADDED_NOT_SHOWN_OBX( 12 ); // OBX - 12 : Date Last Observation Normal Value( TS ) <b>optional < / b>
     ADDED_NOT_SHOWN_OBX( 13 ); // OBX - 13 : User Defined Access Checks( ST ) <b>optional < / b>
     ADDED_NOT_SHOWN_OBX( 15 ); // OBX - 15 : Producer's ID (CE) <b>optional </b>
     ADDED_NOT_SHOWN_OBX( 16 ); // OBX - 16 : Responsible Observer( XCN ) <b>optional < / b>
     ADDED_NOT_SHOWN_OBX( 17 ); // OBX - 17 : Observation Method( CE ) <b>optional repeating< / b>
     ADDED_NOT_SHOWN_OBX( 18 ); // OBX - 18 : Equipment Instance Identifier( EI ) <b>optional repeating< / b>
     ADDED_NOT_SHOWN_OBX( 19 ); // OBX - 19 : Date / Time of the Analysis( TS ) <b>optional < / b>
     return result;
}

void COBXPage::OnBnClickedCheckDrgCompatObx()
{
     CString data;
     if ( ( (CButton*)GetDlgItem( IDC_CHECK_DRG_COMPAT_OBX ) )->GetCheck() == BST_CHECKED )
     {
          bDrgSupport = TRUE;
          GetDlgItem( IDC_EDIT_VALTYPE_NSUP_OBX )->ShowWindow( SW_HIDE );
          GetDlgItem( IDC_COMBO_VALTYPE_SUP_OBX )->ShowWindow( SW_SHOW );

          GetDlgItem( IDC_EDIT_OBSID_ID_NSUP_OBX )->ShowWindow( SW_HIDE );
          GetDlgItem( IDC_COMBO_OBSID_ID_SUP_OBX )->ShowWindow( SW_SHOW );

          GetDlgItem( IDC_EDIT_OBSID_DESC_NSUP_OBX )->EnableWindow( FALSE );
          SHOW_EDIT_STRING( IDC_EDIT_OBSID_DESC_NSUP_OBX, "" );
          GetDlgItem( IDC_EDIT_OBSID_CODSYS_NSUP_OBX )->EnableWindow( FALSE );
          SHOW_EDIT_STRING( IDC_EDIT_OBSID_DESC_NSUP_OBX, "ISO+" );


          GetDlgItem( IDC_EDIT_UNIT_ID_NSUP_OBX )->ShowWindow( SW_HIDE );
          GetDlgItem( IDC_COMBO_UNIT_ID_SUP_OBX )->ShowWindow( SW_SHOW );

          GetDlgItem( IDC_EDIT_UNIT_DESC_NSUP_OBX )->EnableWindow( FALSE );
          GetDlgItem( IDC_EDIT_UNIT_CODSYS_NSUP_OBX )->EnableWindow( FALSE );
          SHOW_EDIT_STRING( IDC_EDIT_UNIT_CODSYS_NSUP_OBX, "ISO+" );
     }
     else
     {
          bDrgSupport = FALSE;
          GetDlgItem( IDC_EDIT_VALTYPE_NSUP_OBX )->ShowWindow( SW_SHOW );
          GetDlgItem( IDC_COMBO_VALTYPE_SUP_OBX )->ShowWindow( SW_HIDE );

          GetDlgItem( IDC_EDIT_OBSID_ID_NSUP_OBX )->ShowWindow( SW_SHOW );
          GetDlgItem( IDC_COMBO_OBSID_ID_SUP_OBX )->ShowWindow( SW_HIDE );

          GetDlgItem( IDC_EDIT_OBSID_DESC_NSUP_OBX )->EnableWindow( TRUE );
          GetDlgItem( IDC_EDIT_OBSID_CODSYS_NSUP_OBX )->EnableWindow( TRUE );

          GetDlgItem( IDC_EDIT_UNIT_ID_NSUP_OBX )->ShowWindow( SW_SHOW );
          GetDlgItem( IDC_COMBO_UNIT_ID_SUP_OBX )->ShowWindow( SW_HIDE );

          GetDlgItem( IDC_EDIT_UNIT_DESC_NSUP_OBX )->EnableWindow( TRUE );
          GetDlgItem( IDC_EDIT_UNIT_CODSYS_NSUP_OBX )->EnableWindow( TRUE );
     }
}

void COBXPage::OnBnClickedButton1()
{
     // TODO: Add your control notification handler code here
}




void COBXPage::OnSelchangeComboObsidIdSupObx()
{
     CString val;
     ( (CComboBox*)GetDlgItem( IDC_COMBO_OBSID_ID_SUP_OBX ) )->GetLBText( ( (CComboBox*)GetDlgItem( IDC_COMBO_OBSID_ID_SUP_OBX ) )->GetCurSel(), val );
     if ( val == "heigh" )
     {
          TABLE_RELOAD_VAL( KNOWN_UNIT_H_ID_TYPE, unitIdType, UnitHIdTypeTbl, IDC_COMBO_UNIT_ID_SUP_OBX );
//          RESHOW_COMBO_DATA( unitIdType, IDC_COMBO_UNIT_ID_SUP_OBX, psOBX->getUnits()->getIdentifier()->getData() );
     }
     else
     { 
          TABLE_RELOAD_VAL( KNOWN_UNIT_W_ID_TYPE, unitIdType, UnitWIdTypeTbl, IDC_COMBO_UNIT_ID_SUP_OBX );
//          RESHOW_COMBO_DATA( unitIdType, IDC_COMBO_UNIT_ID_SUP_OBX, psOBX->getUnits()->getIdentifier()->getData() ); show in select IDC_COMBO_OBSID_ID_SUP_OBX from IDC_EDIT_UNIT_ID_NSUP_OBX
     }
}

void COBXPage::StartSelchangeComboObsidIdSupObx( std::string value )
{
     //CString val;
     if ( ( (CComboBox*)GetDlgItem( IDC_COMBO_OBSID_ID_SUP_OBX ) )->GetCurSel() == -1 )
          return;
     ( (CComboBox*)GetDlgItem( IDC_COMBO_OBSID_ID_SUP_OBX ) )->GetLBText( ( (CComboBox*)GetDlgItem( IDC_COMBO_OBSID_ID_SUP_OBX ) )->GetCurSel(), csId );
     if ( csId == "heigh" )
     {
          TABLE_RELOAD_VAL( KNOWN_UNIT_H_ID_TYPE, unitIdType, UnitHIdTypeTbl, IDC_COMBO_UNIT_ID_SUP_OBX );
          RESHOW_COMBO_DATA( unitIdType, IDC_COMBO_UNIT_ID_SUP_OBX, value );
          GetDlgItem( IDC_EDIT_UNIT_DESC_NSUP_OBX )->SetWindowText( unitIdType.getDesc() );
     }
     else
     {
          TABLE_RELOAD_VAL( KNOWN_UNIT_W_ID_TYPE, unitIdType, UnitWIdTypeTbl, IDC_COMBO_UNIT_ID_SUP_OBX );
          RESHOW_COMBO_DATA( unitIdType, IDC_COMBO_UNIT_ID_SUP_OBX, value );
          //unitIdType.setName( (wchar_t*)getWString( value ).c_str() );
          //( (CComboBox*)GetDlgItem( IDC_COMBO_UNIT_ID_SUP_OBX ) )->SelectString( -1, unitIdType.getData() );
          GetDlgItem( IDC_EDIT_UNIT_DESC_NSUP_OBX )->SetWindowText( unitIdType.getDesc() );
     }
}

int COBXPage::isDraegerSupported()
{
     CString data;
     bool bUnknown = false;
     GetDlgItem( IDC_EDIT_VALTYPE_NSUP_OBX )->GetWindowTextW( data );
     IS_TABLE_VALUE_CORRECT( bUnknown, KNOWN_VALUE_TYPE_TYPE, ValueTypeTypeTbl, (wchar_t*)data.GetString() );
     if ( bUnknown )
          return BST_UNCHECKED;
     GetDlgItem( IDC_EDIT_OBSID_ID_NSUP_OBX )->GetWindowTextW( data );
     IS_TABLE_VALUE_CORRECT( bUnknown, KNOWN_OBSID_ID_TYPE, ObsidIdTypeTbl, (wchar_t*)data.GetString() );
     if ( bUnknown )
          return BST_UNCHECKED;
     GetDlgItem( IDC_EDIT_UNIT_ID_NSUP_OBX )->GetWindowTextW( data );
     IS_TABLE_VALUE_CORRECT( bUnknown, KNOWN_UNIT_W_ID_TYPE, UnitWIdTypeTbl, (wchar_t*)data.GetString() );
     if ( bUnknown )
          return BST_UNCHECKED;
     return BST_CHECKED;
}

BOOL COBXPage::OnInitDialog()
{
     std::string param;
     __super::OnInitDialog();

     //CString name;
     //CString buf;
     //CPropertyPage::GetWindowTextW( name );
     //buf.Format( L"%s %d", name, save_number );
     //CPropertyPage::SetWindowTextW( buf );

     CComboBox* pComboValueType = NULL;
     CComboBox* pComboObsidId = NULL;
     CComboBox* pComboUnitId = NULL;
     TABLE_LOAD( KNOWN_VALUE_TYPE_TYPE, valueTypeType, ValueTypeTypeTbl, pComboValueType, IDC_COMBO_VALTYPE_SUP_OBX );
     TABLE_LOAD( KNOWN_OBSID_ID_TYPE, obsidIdType, ObsidIdTypeTbl, pComboObsidId, IDC_COMBO_OBSID_ID_SUP_OBX );
     TABLE_LOAD( KNOWN_UNIT_W_ID_TYPE, unitIdType, UnitWIdTypeTbl, pComboUnitId, IDC_COMBO_UNIT_ID_SUP_OBX );

     SHOW_EDIT_DATA( IDC_EDIT_VALTYPE_NSUP_OBX, psOBX->getValueType() );
     SHOW_COMBO_DATA( valueTypeType, pComboValueType, psOBX->getValueType() );

     SHOW_EDIT_DATA( IDC_EDIT_OBSID_ID_NSUP_OBX, psOBX->getObservationIdentifier()->getIdentifier() );
     SHOW_COMBO_DATA( obsidIdType, pComboObsidId, psOBX->getObservationIdentifier()->getIdentifier() );

     SHOW_EDIT_DATA( IDC_EDIT_OBSID_DESC_NSUP_OBX, psOBX->getObservationIdentifier()->getText() );
     SHOW_EDIT_DATA( IDC_EDIT_OBSID_CODSYS_NSUP_OBX, psOBX->getObservationIdentifier()->getNameOfCodingSystem() );

     SHOW_EDIT_DATA( IDC_EDIT_UNIT_ID_NSUP_OBX, psOBX->getUnits()->getIdentifier() );
     psOBX->getUnits()->getIdentifier()->getData( param );
     StartSelchangeComboObsidIdSupObx( param );

     if ( psOBX->getUnits()->isCE_2() )
          SHOW_EDIT_DATA( IDC_EDIT_UNIT_DESC_NSUP_OBX, psOBX->getUnits()->getText() );
     SHOW_EDIT_DATA( IDC_EDIT_UNIT_CODSYS_NSUP_OBX, psOBX->getUnits()->getNameOfCodingSystem() );

     //IDC_EDIT_VALUE_OBX show data when set check for support

     SHOW_EDIT_TIME_DATA( IDC_EDIT_DT_OBX, psOBX->getDateTimeOfTheObservation() );

     bDrgSupport = isDraegerSupported();
     ( (CButton*)GetDlgItem( IDC_CHECK_DRG_COMPAT_OBX ) )->SetCheck( bDrgSupport );

     if ( bDrgSupport )
     {
          //IDC_EDIT_VALUE_OBX - as known type
          SHOW_EDIT_DATA( IDC_EDIT_VALUE_OBX, psOBX->getObservationValue() );
     }
     else
     {
          //IDC_EDIT_VALUE_OBX - encoded
          SHOW_EDIT_DATA( IDC_EDIT_VALUE_OBX, psOBX->getObservationValue() );
     }

     OnBnClickedCheckDrgCompatObx();

     return TRUE;  // return TRUE unless you set the focus to a control
     // EXCEPTION: OCX Property Pages should return FALSE
}


void COBXPage::OnOK()
{
     CString message;

     if ( bDrgSupport )
     {
          
          //GET_EDIT_DATA( IDC_COMBO_VALTYPE_SUP_OBX, message, psOBX->getValueType() );
          SAVE_DATA( csValTypeS, psOBX->getValueType() );
          //GET_EDIT_DATA( IDC_COMBO_OBSID_ID_SUP_OBX, message, psOBX->getObservationIdentifier()->getIdentifier() );
          SAVE_DATA( csId, psOBX->getObservationIdentifier()->getIdentifier() );
          //GET_EDIT_DATA( IDC_COMBO_UNIT_ID_SUP_OBX, message, psOBX->getUnits()->getIdentifier() );
          SAVE_DATA( csUnitS, psOBX->getUnits()->getIdentifier() );
     }
     else
     {
          //GET_EDIT_DATA( IDC_EDIT_VALTYPE_NSUP_OBX, message, psOBX->getValueType() );
          SAVE_DATA( csValTypeN, psOBX->getValueType() );
          //GET_EDIT_DATA( IDC_EDIT_OBSID_ID_NSUP_OBX, message, psOBX->getObservationIdentifier()->getIdentifier() );
          SAVE_DATA( csIdN, psOBX->getObservationIdentifier()->getIdentifier() );
          //GET_EDIT_DATA( IDC_EDIT_UNIT_ID_NSUP_OBX, message, psOBX->getUnits()->getIdentifier() );
          SAVE_DATA( csUnitN, psOBX->getUnits()->getIdentifier() );
     }
     //GET_EDIT_DATA( IDC_EDIT_OBSID_DESC_NSUP_OBX, message, psOBX->getObservationIdentifier()->getIdentifier() );
     SAVE_DATA( csDescId, psOBX->getObservationIdentifier()->getIdentifier() );
     //GET_EDIT_DATA( IDC_EDIT_OBSID_CODSYS_NSUP_OBX, message, psOBX->getObservationIdentifier()->getNameOfCodingSystem() );
     SAVE_DATA( csCodeSysId, psOBX->getObservationIdentifier()->getNameOfCodingSystem() );
     //GET_EDIT_DATA( IDC_EDIT_UNIT_DESC_NSUP_OBX, message, psOBX->getUnits()->getText() );
     SAVE_DATA( csDescUnit, psOBX->getUnits()->getText() );
     //GET_EDIT_DATA( IDC_EDIT_UNIT_CODSYS_NSUP_OBX, message, psOBX->getUnits()->getNameOfCodingSystem() );
     SAVE_DATA( csCodeSysUnit, psOBX->getUnits()->getNameOfCodingSystem() );
     //GET_EDIT_DATA( IDC_EDIT_VALUE_OBX, message, psOBX->getObservationValue() );
     SAVE_DATA( csVal, psOBX->getObservationValue() );
     __super::OnOK();
}

void COBXPage::OnEnChangeEditValtypeNsupObx()
{
     GetDlgItem( IDC_EDIT_VALTYPE_NSUP_OBX )->GetWindowTextW( csValTypeN );
}

void COBXPage::OnEnChangeEditObsidIdNsupObx()
{
     GetDlgItem( IDC_EDIT_OBSID_ID_NSUP_OBX )->GetWindowTextW( csIdN );
}

void COBXPage::OnEnChangeEditUnitIdNsupObx()
{
     GetDlgItem( IDC_EDIT_UNIT_ID_NSUP_OBX )->GetWindowTextW( csUnitN );
}

void COBXPage::OnEnChangeEditObsidDescNsupObx()
{
     GetDlgItem( IDC_EDIT_OBSID_DESC_NSUP_OBX )->GetWindowTextW( csDescId );
}

void COBXPage::OnEnChangeEditUnitDescNsupObx()
{
     GetDlgItem( IDC_EDIT_UNIT_DESC_NSUP_OBX )->GetWindowTextW( csDescUnit );
}

void COBXPage::OnEnChangeEditObsidCodsysNsupObx()
{
     GetDlgItem( IDC_EDIT_OBSID_CODSYS_NSUP_OBX )->GetWindowTextW( csCodeSysId );
}

void COBXPage::OnEnChangeEditUnitCodsysNsupObx()
{
     GetDlgItem( IDC_EDIT_UNIT_CODSYS_NSUP_OBX )->GetWindowTextW( csCodeSysUnit );
}

void COBXPage::OnEnChangeEditValueObx()
{
     GetDlgItem( IDC_EDIT_VALUE_OBX )->GetWindowTextW( csVal );
}

void COBXPage::OnCbnSelchangeComboUnitIdSupObx()
{
     ( (CComboBox*)GetDlgItem( IDC_COMBO_UNIT_ID_SUP_OBX ) )->GetLBText( ( (CComboBox*)GetDlgItem( IDC_COMBO_UNIT_ID_SUP_OBX ) )->GetCurSel(), csUnitS );
}

void COBXPage::OnCbnSelchangeComboValtypeSupObx()
{
     ( (CComboBox*)GetDlgItem( IDC_COMBO_VALTYPE_SUP_OBX ) )->GetLBText( ( (CComboBox*)GetDlgItem( IDC_COMBO_VALTYPE_SUP_OBX ) )->GetCurSel(), csValTypeS );
}
