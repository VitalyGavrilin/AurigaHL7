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

#include "stdafx.h"
#include "HL7SDKTest.h"
#include "PIDPage.h"
#include "afxdialogex.h"

#include "Tables.h"
#include "Defines.h"
#include "AddressXAD.h"
#include "XPNPerson.h"
#include "TSDateTime.h"

// CPIDPage dialog

IMPLEMENT_DYNAMIC( CPIDPage, CPropertyPage )

extern DATA_TYPE CountryTypeTbl[ ];

DATA_TYPE SexTypeTbl[ ] = {
     { L"F", L"Female" },
     { L"M", L"Male" },
     { L"", L"Unknown" },
     { L"", L"" },
};

DATA_TYPE RaceTypeTbl[] = {
     { L"W", L"Caucasian" },
     { L"A", L"Asian" },
     { L"B", L"African origin" },
     { L"O", L"Other" },
     { L"", L"Unknown" },
     { L"", L"" },
};

DATA_TYPE MerridTypeTbl[ ] = {
     { L"A", L"Separated" },
     { L"D", L"Divorced" },
     { L"M", L"Married" },
     { L"S", L"Single" },
     { L"W", L"Widowed" },
     { L"C", L"Common law" },
     { L"G", L"Living together" },
     { L"P", L"Domestic partner" },
     { L"R", L"Registered domestic partner" },
     { L"E", L"Legally Separated" },
     { L"N", L"Annulled" },
     { L"I", L"Interlocutory" },
     { L"B", L"Unmarried" },
     { L"U", L"Unknown" },
     { L"O", L"Other" },
     { L"T", L"Unreported" },
     { L"", L"Unknown" },
     { L"", L"" },
};

DATA_TYPE ReligionTypeTbl[ ] = {
     { L"AGN", L"Agnostic" },
     { L"ATH", L"Atheist" },
     { L"BAH", L"Baha'i" },
     { L"BUD", L"Buddhist" },
     { L"BMA", L"Buddhist : Mahayana" },
     { L"BTH", L"Buddhist : Theravada" },
     { L"BTA", L"Buddhist : Tantrayana" },
     { L"BOT", L"Buddhist : Other" },
     { L"CFR", L"Chinese Folk Religionist" },
     { L"CHR", L"Christian" },
     { L"ABC", L"Christian : American Baptist Church" },
     { L"AMT", L"Christian : African Methodist Episcopal" },
     { L"AME", L"Christian : African Methodist Episcopal Zion" },
     { L"ANG", L"Christian : Anglican" },
     { L"AOG", L"Christian : Assembly of God" },
     { L"BAP", L"Christian : Baptist" },
     { L"CAT", L"Christian : Roman Catholic" },
     { L"CRR", L"Christian : Christian Reformed" },
     { L"CHS", L"Christian : Christian Science" },
     { L"CMA", L"Christian : Christian Missionary Alliance" },
     { L"COC", L"Christian : Church of Christ" },
     { L"COG", L"Christian : Church of God" },
     { L"COI", L"Christian : Church of God in Christ" },
     { L"COM", L"Christian : Community" },
     { L"COL", L"Christian : Congregational" },
     { L"EOT", L"Christian : Eastern Orthodox" },
     { L"EVC", L"Christian : Evangelical Church" },
     { L"EPI", L"Christian : Episcopalian" },
     { L"FWB", L"Christian : Free Will Baptist" },
     { L"FRQ", L"Christian : Friends" },
     { L"GRE", L"Christian : Greek Orthodox" },
     { L"JWN", L"Christian : Jehovah's Witness" },
     { L"LUT", L"Christian : Lutheran" },
     { L"LMS", L"Christian : Lutheran Missouri Synod" },
     { L"MEN", L"Christian : Mennonite" },
     { L"MET", L"Christian : Methodist" },
     { L"MOM", L"Christian : Latter - day Saints" },
     { L"NAZ", L"Christian : Church of the Nazarene" },
     { L"ORT", L"Christian : Orthodox" },
     { L"COT", L"Christian : Other" },
     { L"PRC", L"Christian : Other Protestant" },
     { L"PEN", L"Christian : Pentecostal" },
     { L"COP", L"Christian : Other Pentecostal" },
     { L"PRE", L"Christian : Presbyterian" },
     { L"PRO", L"Christian : Protestant" },
     { L"QUA", L"Christian : Friends" },
     { L"REC", L"Christian : Reformed Church" },
     { L"REO", L"Christian : Reorganized Church of Jesus Christ - LDS" },
     { L"SAA", L"Christian : Salvation Army" },
     { L"SEV", L"Christian : Seventh Day Adventist" },
     { L"SOU", L"Christian : Southern Baptist" },
     { L"UCC", L"Christian : United Church of Christ" },
     { L"UMD", L"Christian : United Methodist" },
     { L"UNI", L"Christian : Unitarian" },
     { L"UNU", L"Christian : Unitarian Universalist" },
     { L"WES", L"Christian : Wesleyan" },
     { L"WMC", L"Christian : Wesleyan Methodist" },
     { L"CNF", L"Confucian" },
     { L"ERL", L"Ethnic Religionist" },
     { L"HIN", L"Hindu" },
     { L"HVA", L"Hindu : Vaishnavites" },
     { L"HSH", L"Hindu : Shaivites" },
     { L"HOT", L"Hindu : Other" },
     { L"JAI", L"Jain" },
     { L"JEW", L"Jewish" },
     { L"JCO", L"Jewish : Conservative" },
     { L"JOR", L"Jewish : Orthodox" },
     { L"JOT", L"Jewish : Other" },
     { L"JRC", L"Jewish : Reconstructionist" },
     { L"JRF", L"Jewish : Reform" },
     { L"JRN", L"Jewish : Renewal" },
     { L"MOS", L"Muslim" },
     { L"MSU", L"Muslim : Sunni" },
     { L"MSH", L"Muslim : Shiite" },
     { L"MOT", L"Muslim : Other" },
     { L"NAM", L"Native American" },
     { L"NRL", L"New Religionist" },
     { L"NOE", L"Nonreligious" },
     { L"OTH", L"Other" },
     { L"SHN", L"Shintoist" },
     { L"SIK", L"Sikh" },
     { L"SPI", L"Spiritist" },
     { L"VAR", L"Unknown" },
     { L"", L"Unknown" },
     { L"", L"" },
};

DATA_TYPE EthnikTypeTbl[ ] = {
     { L"H", L"Hispanic or Latino" },
     { L"N", L"Not Hispanic or Latino" },
     { L"U", L"Unknown" },
     { L"", L"Unknown" },
     { L"", L"" },
};

DATA_TYPE NationTypeTbl[ ] = {
     { L"FRA", L"France" },
     { L"DEU", L"Germany" },
     { L"ITA", L"Italy" },
     { L"NLD", L"Netherlands" },
     { L"ESP", L"Spain" },
     { L"USA", L"United States" },
     { L"", L"Unknown" },
     { L"", L"" },
};

CPIDPage::CPIDPage( )
	: CPropertyPage(CPIDPage::IDD)
{

}

CPIDPage::CPIDPage( HL7_24::PID* pPID )
     : CPropertyPage( CPIDPage::IDD )
{
     show_missed = IsNotShowed( pPID );
     psPID = pPID;
}

CPIDPage::~CPIDPage()
{
}

void CPIDPage::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPIDPage, CPropertyPage)
     ON_CBN_SELCHANGE( IDC_COMBO_DEGREE_PID, &CPIDPage::OnCbnSelchangeComboDegreePid )
     ON_BN_CLICKED( IDC_BUTTON1, &CPIDPage::OnBnClickedButton1 )
     ON_BN_CLICKED( IDC_BUTTON2, &CPIDPage::OnBnClickedButton2 )
     ON_BN_CLICKED( IDC_BUTTON3, &CPIDPage::OnBnClickedButton3 )
     ON_EN_CHANGE( IDC_EDIT_EXTERNALID_PID, &CPIDPage::OnEnChangeEditExternalidPid )
     ON_EN_CHANGE( IDC_EDIT_INTERNAL_PATIENT_ID, &CPIDPage::OnEnChangeEditInternalPatientId )
     ON_EN_CHANGE( IDC_EDIT_ALT_PID, &CPIDPage::OnEnChangeEditAltPid )
     ON_EN_CHANGE( IDC_EDIT_PATIENT_ACCOUNT_PID, &CPIDPage::OnEnChangeEditPatientAccountPid )
     ON_EN_CHANGE( IDC_EDIT_SSN_PID, &CPIDPage::OnEnChangeEditSsnPid )
     ON_EN_CHANGE( IDC_EDIT_PRIM_LANG_PID, &CPIDPage::OnEnChangeEditPrimLangPid )
     ON_CBN_SELCHANGE( IDC_COMBO_SEX_PID, &CPIDPage::OnCbnSelchangeComboSexPid )
     ON_CBN_SELCHANGE( IDC_COMBO_MERITAL_PID, &CPIDPage::OnCbnSelchangeComboMeritalPid )
     ON_CBN_SELCHANGE( IDC_COMBO_RELIGION_PID, &CPIDPage::OnCbnSelchangeComboReligionPid )
     ON_CBN_SELCHANGE( IDC_COMBO_ETHNIK_PID, &CPIDPage::OnCbnSelchangeComboEthnikPid )
     ON_CBN_SELCHANGE( IDC_COMBO_RACE_PID, &CPIDPage::OnCbnSelchangeComboRacePid )
     ON_CBN_SELCHANGE( IDC_COMBO_NATION_PID, &CPIDPage::OnCbnSelchangeComboNationPid )
END_MESSAGE_MAP()


// CPIDPage message handlers
//#define ADDED_NOT_SHOWN_PID( number ) ADDED_NOT_SHOWN_SUB( PID, number )
//#define ADDED_NOT_SHOWN_ITEM_PID( number, func ) ADDED_NOT_SHOWN_ITEM_SUB( PID, number, func )
//#define ADDED_NOT_SHOWN_ITEM_SUB_COMP_PID( number, func ) ADDED_NOT_SHOWN_ITEM_SUB_COMP( PID, number, func )

string CPIDPage::IsNotShowed( HL7_24::PID* pPID )
{
     string result;
     //ADDED_NOT_SHOWN_PID( 1 ); // PID - 1: Set ID - PID( SI ) < b > optional < / b>
     //ADDED_NOT_SHOWN_PID( 2 ); // PID - 2 : Patient ID( CX ) <b>optional < / b>
     //ADDED_NOT_SHOWN_ITEM_PID( 3, CheckDigit );
     //ADDED_NOT_SHOWN_ITEM_PID( 3, CodeIdentifyingTheCheckDigitSchemeEmployed );
     //ADDED_NOT_SHOWN_ITEM_SUB_COMP_PID( 3, AssigningAuthority );
     //ADDED_NOT_SHOWN_ITEM_PID( 3, IdentifierTypeCode );
     //ADDED_NOT_SHOWN_ITEM_SUB_COMP_PID( 3, AssigningFacility );
     //ADDED_NOT_SHOWN_ITEM_PID( 3, EffectiveDate );
     //ADDED_NOT_SHOWN_ITEM_PID( 3, ExpirationDate ); // PID - 3 : Patient Identifier List( CX ) <b> repeating< / b>
     //ADDED_NOT_SHOWN_ITEM_PID( 4, CheckDigit );
     ////ADDED_NOT_SHOWN_ITEM_PID( 5, CodeIdentifyingTheCheckDigitSchemeEmployed );
     //ADDED_NOT_SHOWN_ITEM_SUB_COMP_PID( 4, AssigningAuthority );
     //ADDED_NOT_SHOWN_ITEM_PID( 4, IdentifierTypeCode );
     //ADDED_NOT_SHOWN_ITEM_SUB_COMP_PID( 4, AssigningFacility );
     //ADDED_NOT_SHOWN_ITEM_PID( 4, EffectiveDate );
     //ADDED_NOT_SHOWN_ITEM_PID( 4, ExpirationDate ); // PID - 4 : Alternate Patient ID - PID( CX ) <b>optional repeating< / b>
     //ADDED_NOT_SHOWN_PID( 6 ); // PID - 6 : Mother's Maiden Name (XPN) <b>optional repeating</b>
     //ADDED_NOT_SHOWN_PID( 7 ); // PID - 7 : Date / Time Of Birth( TS ) <b>optional < / b>
     //ADDED_NOT_SHOWN_PID( 9 ); // PID - 9 : Patient Alias( XPN ) <b>optional repeating< / b>
     //ADDED_NOT_SHOWN_PID( 12 ); // PID - 12 : County Code( IS ) <b>optional < / b>
     //ADDED_NOT_SHOWN_PID( 13 ); // PID - 13 : Phone Number - Home( XTN ) <b>optional repeating< / b>
     //ADDED_NOT_SHOWN_PID( 14 ); // PID - 14 : Phone Number - Business( XTN ) <b>optional repeating< / b>
     //ADDED_NOT_SHOWN_PID( 20 ); // PID - 20 : Driver's License Number - Patient (DLN) <b>optional </b>
     //ADDED_NOT_SHOWN_PID( 21 ); // PID - 21 : Mother's Identifier (CX) <b>optional repeating</b>
     //ADDED_NOT_SHOWN_PID( 23 ); // PID - 23 : Birth Place( ST ) <b>optional < / b>
     //ADDED_NOT_SHOWN_PID( 24 ); // PID - 24 : Multiple Birth Indicator( ID ) <b>optional < / b>
     //ADDED_NOT_SHOWN_PID( 25 ); // PID - 25 : Birth Order( NM ) <b>optional < / b>
     //ADDED_NOT_SHOWN_PID( 26 ); // PID - 26 : Citizenship( CE ) <b>optional repeating< / b>
     //ADDED_NOT_SHOWN_PID( 27 ); // PID - 27 : Veterans Military Status( CE ) <b>optional < / b>
     //ADDED_NOT_SHOWN_PID( 29 ); // PID - 29 : Patient Death Date and Time( TS ) <b>optional < / b>
     //ADDED_NOT_SHOWN_PID( 30 ); // PID - 30 : Patient Death Indicator( ID ) <b>optional < / b>
     //ADDED_NOT_SHOWN_PID( 31 ); // PID - 31 : Identity Unknown Indicator( ID ) <b>optional < / b>
     //ADDED_NOT_SHOWN_PID( 32 ); // PID - 32 : Identity Reliability Code( IS ) <b>optional repeating< / b>
     //ADDED_NOT_SHOWN_PID( 33 ); // PID - 33 : Last Update Date / Time( TS ) <b>optional < / b>
     //ADDED_NOT_SHOWN_PID( 34 ); // PID - 34 : Last Update Facility( HD ) <b>optional < / b>
     //ADDED_NOT_SHOWN_PID( 35 ); // PID - 35 : Species Code( CE ) <b>optional < / b>
     //ADDED_NOT_SHOWN_PID( 36 ); // PID - 36 : Breed Code( CE ) <b>optional < / b>
     //ADDED_NOT_SHOWN_PID( 37 ); // PID - 37 : Strain( ST ) <b>optional < / b>
     //ADDED_NOT_SHOWN_PID( 38 ); // PID - 38 : Production Class Code( CE ) <b>optional < / b>
     return result;
}

void CPIDPage::OnCbnSelchangeComboDegreePid()
{
}

void CPIDPage::OnBnClickedButton1()
{
     CAddressXAD XADEdit( psPID->getPatientAddress() );
     if ( IDOK == XADEdit.DoModal() )
          ( (CEdit*)GetDlgItem( IDC_EDIT_ADDRESS_PID ) )->SetWindowText( constructAddress( psPID->getPatientAddress() ).c_str( ) );
}


void CPIDPage::OnBnClickedButton2()
{
     CXPNPerson XPNEdit( psPID->getPatientName( ), L"Patient name" );
     if ( IDOK == XPNEdit.DoModal( ) )
          ( (CEdit*)GetDlgItem( IDC_EDIT_PATIENT_NAME_PID ) )->SetWindowText( constructName( psPID->getPatientName( ) ).c_str( ) );
}


void CPIDPage::OnBnClickedButton3()
{
     CTSDateTime DTe( psPID->getDateTimeOfBirth( ), L"Date and time of birth" );
     if ( IDOK == DTe.DoModal( ) )
          SHOW_EDIT_TIME_DATA( IDC_EDIT_BIRTH_PID, psPID->getDateTimeOfBirth( ) );
}


BOOL CPIDPage::OnInitDialog()
{
     std::string param;
     __super::OnInitDialog();

     Tables<KNOWN_SEX_TYPE::KNOWN_SEX_TYPE> sexType( NULL, SexTypeTbl );
     CComboBox* pComboSex = (CComboBox*)GetDlgItem( IDC_COMBO_SEX_PID );
     const DATA_TYPE* nextItem = sexType.startEnum();
     while ( nextItem )
     {
          pComboSex->AddString( nextItem->value );
          nextItem = sexType.nextEnum();
     }

     Tables<KNOWN_RACE_TYPE::KNOWN_RACE_TYPE> raceType( NULL, RaceTypeTbl );
     CComboBox* pComboRace = (CComboBox*)GetDlgItem( IDC_COMBO_RACE_PID );
     nextItem = raceType.startEnum();
     while ( nextItem )
     {
          pComboRace->AddString( nextItem->desc );
          nextItem = raceType.nextEnum();
     }

     Tables<KNOWN_MERITAL_TYPE::KNOWN_MERITAL_TYPE> meritalType( NULL, MerridTypeTbl );
     CComboBox* pComboMerital = (CComboBox*)GetDlgItem( IDC_COMBO_MERITAL_PID );
     nextItem = meritalType.startEnum();
     while ( nextItem )
     {
          pComboMerital->AddString( nextItem->desc );
          nextItem = meritalType.nextEnum();
     }

     Tables<KNOWN_RELIGION_TYPE::KNOWN_RELIGION_TYPE> religionType( NULL, ReligionTypeTbl );
     CComboBox* pComboReligion = (CComboBox*)GetDlgItem( IDC_COMBO_RELIGION_PID );
     nextItem = religionType.startEnum();
     while ( nextItem )
     {
          pComboReligion->AddString( nextItem->desc );
          nextItem = religionType.nextEnum();
     }

     Tables<KNOWN_ETHNIK_TYPE::KNOWN_ETHNIK_TYPE> ethnikType( NULL, EthnikTypeTbl );
     CComboBox* pComboEthnik = (CComboBox*)GetDlgItem( IDC_COMBO_ETHNIK_PID );
     nextItem = ethnikType.startEnum();
     while ( nextItem )
     {
          pComboEthnik->AddString( nextItem->desc );
          nextItem = ethnikType.nextEnum();
     }

     Tables<KNOWN_NATION_TYPE::KNOWN_NATION_TYPE> nationType( NULL, NationTypeTbl );
     CComboBox* pComboNation = (CComboBox*)GetDlgItem( IDC_COMBO_NATION_PID );
     nextItem = nationType.startEnum();
     while ( nextItem )
     {
          pComboNation->AddString( nextItem->desc );
          nextItem = nationType.nextEnum();
     }

     SHOW_EDIT_DATA( IDC_EDIT_EXTERNALID_PID, psPID->getPatientID()->getID() );
     SHOW_EDIT_DATA( IDC_EDIT_INTERNAL_PATIENT_ID, psPID->getPatientIdentifierList( 0 )->getID() );
     //( (CEdit*)GetDlgItem( IDC_EDIT_INTERNAL_PATIENT_ID ) )->SetWindowText( getWString( psPID->getPatientIdentifierList( 0 )->getID()->getData() ).c_str() );
     SHOW_EDIT_DATA( IDC_EDIT_ALT_PID, psPID->getAlternatePatientIDPID()->getID() );
     //( (CEdit*)GetDlgItem( IDC_EDIT_ALT_PID ) )->SetWindowText( getWString( psPID->getAlternatePatientIDPID()->getID()->getData() ).c_str() );
     ( (CEdit*)GetDlgItem( IDC_EDIT_PATIENT_NAME_PID ) )->SetWindowText( constructName( psPID->getPatientName() ).c_str() );
     SHOW_EDIT_TIME_DATA( IDC_EDIT_BIRTH_PID, psPID->getDateTimeOfBirth() );
     psPID->getAdministrativeSex()->getData( param );
     sexType.setName( (wchar_t*)getWString( param ).c_str() );
     pComboSex->SelectString( -1, sexType.getData() );
     psPID->getRace()->getIdentifier()->getData( param );
     raceType.setName( (wchar_t*)getWString( param ).c_str() );
     pComboRace->SelectString( -1, raceType.getDesc() );
     ( (CEdit*)GetDlgItem( IDC_EDIT_ADDRESS_PID ) )->SetWindowText( constructAddress( psPID->getPatientAddress() ).c_str() );
     SHOW_EDIT_DATA( IDC_EDIT_PRIM_LANG_PID, psPID->getPrimaryLanguage()->getIdentifier() );
     //( (CEdit*)GetDlgItem( IDC_EDIT_PRIM_LANG_PID ) )->SetWindowText( getWString( psPID->getPrimaryLanguage()->getIdentifier()->getData() ).c_str() );
     psPID->getMaritalStatus()->getIdentifier()->getData( param );
     meritalType.setName( (wchar_t*)getWString( param ).c_str() );
     pComboMerital->SelectString( -1, meritalType.getData() );
     psPID->getReligion()->getIdentifier()->getData( param );
     religionType.setName( (wchar_t*)getWString( param ).c_str() );
     pComboReligion->SelectString( -1, religionType.getData() );
     SHOW_EDIT_DATA( IDC_EDIT_PATIENT_ACCOUNT_PID, psPID->getPatientAccountNumber()->getID() );
     //( (CEdit*)GetDlgItem( IDC_EDIT_PATIENT_ACCOUNT_PID ) )->SetWindowText( getWString( psPID->getPatientAccountNumber()->getID()->getData() ).c_str() );
     SHOW_EDIT_DATA( IDC_EDIT_SSN_PID, psPID->getSSNNumberPatient() );
     //( (CEdit*)GetDlgItem( IDC_EDIT_SSN_PID ) )->SetWindowText( getWString( psPID->getSSNNumberPatient()->getData() ).c_str() );
     psPID->getEthnicGroup()->getIdentifier()->getData( param );
     ethnikType.setName( (wchar_t*)getWString( param ).c_str() );
     pComboEthnik->SelectString( -1, ethnikType.getData() );
     psPID->getNationality()->getIdentifier()->getData( param );
     nationType.setName( (wchar_t*)getWString( param ).c_str() );
     pComboNation->SelectString( -1, nationType.getData() );

     return TRUE;  // return TRUE unless you set the focus to a control
     // EXCEPTION: OCX Property Pages should return FALSE
}


void CPIDPage::OnOK()
{
     CString message;

     //GET_EDIT_DATA( IDC_COMBO_SEX_PID, message, psPID->getAdministrativeSex() );
     SAVE_DATA( csSex, psPID->getAdministrativeSex() );
     //GET_EDIT_DATA( IDC_COMBO_RACE_PID, message, psPID->getRace()->getIdentifier() );
     SAVE_DATA( csRace, psPID->getRace()->getIdentifier() );
     //GET_EDIT_DATA( IDC_COMBO_MERITAL_PID, message, psPID->getMaritalStatus()->getIdentifier() );
     SAVE_DATA( csMerital, psPID->getMaritalStatus()->getIdentifier() );
     //GET_EDIT_DATA( IDC_COMBO_RELIGION_PID, message, psPID->getReligion()->getIdentifier() );
     SAVE_DATA( csRelig, psPID->getReligion()->getIdentifier() );
     //GET_EDIT_DATA( IDC_COMBO_ETHNIK_PID, message, psPID->getEthnicGroup()->getIdentifier() );
     SAVE_DATA( csEthnik, psPID->getEthnicGroup()->getIdentifier() );
     //GET_EDIT_DATA( IDC_EDIT_EXTERNALID_PID, message, psPID->getPatientID()->getId() );
     SAVE_DATA( csExtId, psPID->getPatientID()->getID() );
     //GET_EDIT_DATA( IDC_EDIT_INTERNAL_PATIENT_ID, message, psPID->getPatientIdentifierList()->getId() );
     SAVE_DATA( csIntPId, psPID->getPatientIdentifierList()->getID() );
     //GET_EDIT_DATA( IDC_EDIT_ALT_PID, message, psPID->getAlternatePatientIDPID()->getId() );
     SAVE_DATA( csAltId, psPID->getAlternatePatientIDPID()->getID() );
     //GET_EDIT_DATA( IDC_EDIT_PRIM_LANG_PID, message, psPID->getPrimaryLanguage()->getIdentifier() );
     SAVE_DATA( csLang, psPID->getPrimaryLanguage()->getIdentifier() );
     //GET_EDIT_DATA( IDC_EDIT_PATIENT_ACCOUNT_PID, message, psPID->getPatientAccountNumber()->getId() );
     SAVE_DATA( csAcc, psPID->getPatientAccountNumber()->getID() );
     //GET_EDIT_DATA( IDC_EDIT_SSN_PID, message, psPID->getSSNNumberPatient() );
     SAVE_DATA( csSsn, psPID->getSSNNumberPatient() );
     __super::OnOK();
}

void CPIDPage::OnEnChangeEditExternalidPid()
{
     GetDlgItem( IDC_EDIT_EXTERNALID_PID )->GetWindowTextW( csExtId );
}

void CPIDPage::OnEnChangeEditInternalPatientId()
{
     GetDlgItem( IDC_EDIT_INTERNAL_PATIENT_ID )->GetWindowTextW( csIntPId );
}

void CPIDPage::OnEnChangeEditAltPid()
{
     GetDlgItem( IDC_EDIT_ALT_PID )->GetWindowTextW( csAltId );
}

void CPIDPage::OnEnChangeEditPatientAccountPid()
{
     GetDlgItem( IDC_EDIT_PATIENT_ACCOUNT_PID )->GetWindowTextW( csAcc );
}

void CPIDPage::OnEnChangeEditSsnPid()
{
     GetDlgItem( IDC_EDIT_SSN_PID )->GetWindowTextW( csSsn );
}

void CPIDPage::OnEnChangeEditPrimLangPid()
{
     GetDlgItem( IDC_EDIT_PRIM_LANG_PID )->GetWindowTextW( csLang );
}

void CPIDPage::OnCbnSelchangeComboSexPid()
{
     ( (CComboBox*)GetDlgItem( IDC_COMBO_SEX_PID ) )->GetLBText( ( (CComboBox*)GetDlgItem( IDC_COMBO_SEX_PID ) )->GetCurSel(), csSex );
}

void CPIDPage::OnCbnSelchangeComboMeritalPid()
{
     ( (CComboBox*)GetDlgItem( IDC_COMBO_MERITAL_PID ) )->GetLBText( ( (CComboBox*)GetDlgItem( IDC_COMBO_MERITAL_PID ) )->GetCurSel(), csMerital );
}

void CPIDPage::OnCbnSelchangeComboReligionPid()
{
     ( (CComboBox*)GetDlgItem( IDC_COMBO_RELIGION_PID ) )->GetLBText( ( (CComboBox*)GetDlgItem( IDC_COMBO_RELIGION_PID ) )->GetCurSel(), csRelig );
}

void CPIDPage::OnCbnSelchangeComboEthnikPid()
{
     ( (CComboBox*)GetDlgItem( IDC_COMBO_ETHNIK_PID ) )->GetLBText( ( (CComboBox*)GetDlgItem( IDC_COMBO_ETHNIK_PID ) )->GetCurSel(), csEthnik );
}

void CPIDPage::OnCbnSelchangeComboRacePid()
{
     ( (CComboBox*)GetDlgItem( IDC_COMBO_RACE_PID ) )->GetLBText( ( (CComboBox*)GetDlgItem( IDC_COMBO_RACE_PID ) )->GetCurSel(), csRace );
}

void CPIDPage::OnCbnSelchangeComboNationPid()
{
//     ( (CComboBox*)GetDlgItem( IDC_COMBO_VALTYPE_SUP_OBX ) )->GetLBText( ( (CComboBox*)GetDlgItem( IDC_COMBO_VALTYPE_SUP_OBX ) )->GetCurSel(), csValTypeS );
}
