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

// MRGPage.cpp : implementation file
//

#include "stdafx.h"
#include "HL7SDKTest.h"
#include "MRGPage.h"
#include "afxdialogex.h"

#include "Tables.h"
#include "Defines.h"
#include "Helper.h"
#include "segment\MRG.h"

// CMRGPage dialog

IMPLEMENT_DYNAMIC(CMRGPage, CPropertyPage)

CMRGPage::CMRGPage()
	: CPropertyPage(CMRGPage::IDD)
{

}

CMRGPage::CMRGPage( HL7_24::MRG* pMRG )
     : CPropertyPage( CMRGPage::IDD )
{
     show_missed = IsNotShowed( pMRG );
     psMRG = pMRG;
}

CMRGPage::~CMRGPage()
{
}

void CMRGPage::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMRGPage, CPropertyPage)
     ON_EN_CHANGE( IDC_EDIT_PRIOR_PATIENT_ID_MRG, &CMRGPage::OnEnChangeEditPriorPatientIdMrg )
     ON_EN_CHANGE( IDC_EDIT_PRIOR_PATIENT_ACCNUM_MRG, &CMRGPage::OnEnChangeEditPriorPatientAccnumMrg )
END_MESSAGE_MAP()


// CMRGPage message handlers
#define ADDED_NOT_SHOWN_MRG( number ) ADDED_NOT_SHOWN_SUB( MRG, number )

string CMRGPage::IsNotShowed( HL7_24::MRG* pMRG )
{
     string result;
     ADDED_NOT_SHOWN_MRG( 2 ); // MRG - 2 : Prior Alternate Patient ID( CX ) <b>optional repeating< / b>
     ADDED_NOT_SHOWN_MRG( 4 ); // MRG - 4 : Prior Patient ID( CX ) <b>optional < / b>
     ADDED_NOT_SHOWN_MRG( 5 ); // MRG - 5 : Prior Visit Number( CX ) <b>optional < / b>
     ADDED_NOT_SHOWN_MRG( 6 ); // MRG - 6 : Prior Alternate Visit ID( CX ) <b>optional < / b>
     ADDED_NOT_SHOWN_MRG( 7 ); // MRG - 7 : Prior Patient Name( XPN ) <b>optional repeating< / b>
     return result;
}


BOOL CMRGPage::OnInitDialog()
{
     std::string param;
     __super::OnInitDialog();

     SHOW_EDIT_DATA( IDC_EDIT_PRIOR_PATIENT_ID_MRG, psMRG->getPriorPatientID()->getID() );
     SHOW_EDIT_DATA( IDC_EDIT_PRIOR_PATIENT_ACCNUM_MRG, psMRG->getPriorPatientAccountNumber()->getID() );

     return TRUE;  // return TRUE unless you set the focus to a control
     // EXCEPTION: OCX Property Pages should return FALSE
}


void CMRGPage::OnOK()
{
     CString message;

     //GET_EDIT_DATA( IDC_EDIT_PRIOR_PATIENT_ID_MRG, message, psMRG->getPriorPatientID()->getId() );
     SAVE_DATA( csPatientID, psMRG->getPriorPatientID()->getID() );
     //GET_EDIT_DATA( IDC_EDIT_PRIOR_PATIENT_ACCNUM_MRG, message, psMRG->getPriorPatientAccountNumber()->getId() );
     SAVE_DATA( csPatientAccc, psMRG->getPriorPatientAccountNumber()->getID() );
     __super::OnOK();
}

void CMRGPage::OnEnChangeEditPriorPatientIdMrg()
{
     GetDlgItem( IDC_EDIT_PRIOR_PATIENT_ID_MRG )->GetWindowTextW( csPatientID );
}

void CMRGPage::OnEnChangeEditPriorPatientAccnumMrg()
{
     GetDlgItem( IDC_EDIT_PRIOR_PATIENT_ACCNUM_MRG )->GetWindowTextW( csPatientAccc );
}
