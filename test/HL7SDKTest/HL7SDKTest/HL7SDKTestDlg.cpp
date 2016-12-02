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


// HL7SDKTestDlg.cpp : implementation file
//

//#define NOMSG 1

#include "stdafx.h"
#include "Resource.h"
#include "HL7SDKTest.h"
#include "HL7SDKTestDlg.h"
#include "afxdialogex.h"
#include "Tables.h"

//#include "MessageEditor.h"

//#undef MSG

//#include "message.h"
//#include "util.h"
#include "message\ADT_A01.h"
#include "message\QRY_A19.h"
#include "ObjToPipe.h"
//#include "pipe.h"
//#include "segment\MSH.h"

#include "MessagePropSheet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

using namespace HL7_24;

// CHL7SDKTestDlg dialog



CHL7SDKTestDlg::CHL7SDKTestDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CHL7SDKTestDlg::IDD, pParent)
    , hSocket( INVALID_SOCKET )
    , bUseTestCase( TRUE )
    //, port( 2250 )
    //, client( "127.0.0.1" )
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
    setServer( "127.0.0.1", 2250 );
}

void CHL7SDKTestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CHL7SDKTestDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
    ON_CBN_SELCHANGE( IDC_COMBO_MESSAGE, &CHL7SDKTestDlg::OnSelchangeComboMessage )
    ON_BN_CLICKED( IDC_BUTTON_MESSAGE_EDIT, &CHL7SDKTestDlg::OnBnClickedButtonMessageEdit )
    ON_BN_CLICKED( IDC_BUTTON_SEND_MESSAGE, &CHL7SDKTestDlg::OnBnClickedButtonSendMessage )
    ON_BN_CLICKED( IDC_BUTTON_LOAD_MESSAGE, &CHL7SDKTestDlg::OnBnClickedButtonLoadMessage )
    ON_CBN_SELCHANGE( IDC_COMBO_VERSION, &CHL7SDKTestDlg::OnCbnSelchangeComboVersion )
    ON_BN_CLICKED( IDC_CHECK_USE_TEST_CASE, &CHL7SDKTestDlg::OnBnClickedCheck1 )
    ON_BN_CLICKED( IDC_BUTTON1, &CHL7SDKTestDlg::OnBnClickedButton1 )
END_MESSAGE_MAP()


// CHL7SDKTestDlg message handlers

BOOL CHL7SDKTestDlg::OnInitDialog()
{
     CDialogEx::OnInitDialog();

     // Set the icon for this dialog.  The framework does this automatically
     //  when the application's main window is not a dialog
     SetIcon(m_hIcon, TRUE);			// Set big icon
     SetIcon(m_hIcon, FALSE);		// Set small icon

     ( (CComboBox*)GetDlgItem( IDC_COMBO_MESSAGE ) )->Clear();
     ( (CComboBox*)GetDlgItem( IDC_COMBO_MESSAGE ) )->AddString( L"ORU_R01" );
     ( (CComboBox*)GetDlgItem( IDC_COMBO_MESSAGE ) )->AddString( L"ADT_A01" );
     ( (CComboBox*)GetDlgItem( IDC_COMBO_MESSAGE ) )->AddString( L"ADT_A09" );
     ( (CComboBox*)GetDlgItem( IDC_COMBO_MESSAGE ) )->AddString( L"ADT_A11" );
     ( (CComboBox*)GetDlgItem( IDC_COMBO_MESSAGE ) )->SetCurSel( 0 );

     ( (CComboBox*)GetDlgItem( IDC_COMBO_VERSION ) )->AddString( L"2.4" );
     ( (CComboBox*)GetDlgItem( IDC_COMBO_VERSION ) )->AddString( L"2.3" );
     ( (CComboBox*)GetDlgItem( IDC_COMBO_VERSION ) )->SetCurSel( 1 );

     OnSelchangeComboMessage();

     hSocket = socket( AF_INET, SOCK_STREAM, 0 );

     return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CHL7SDKTestDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

        //SendMessage( WM_ICONERASEBKGND, reinterpret_cast<WPARAM>( dc.GetSafeHdc() ), 0 );

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CHL7SDKTestDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CHL7SDKTestDlg::AppendTextToEditCtrl( char* mtype, CString mes )
{
     CString strLine;
     strLine.Format( _T( "%S\r%s\r" ), mtype, mes );
     strLine.Replace( L"\r", L"\r\n" );
     CEdit* show = (CEdit*)GetDlgItem( IDC_MESSAGE_SHOW );
     int nLength = show->GetWindowTextLength( );
     show->SetSel( nLength, nLength );
     show->ReplaceSel( strLine );
}

void CHL7SDKTestDlg::OnCbnSelchangeComboVersion( )
{
     OnSelchangeComboMessage();
}

HL7_VERSION_ENUM CHL7SDKTestDlg::getVersion()
{
     CString version;
     ( (CComboBox*)GetDlgItem( IDC_COMBO_VERSION ) )->GetLBText( ( (CComboBox*)GetDlgItem( IDC_COMBO_VERSION ) )->GetCurSel(), version );
     if ( version == "2.3" )
          return HL7_23_VERSION;
     return HL7_24_VERSION;
}

void CHL7SDKTestDlg::OnSelchangeComboMessage( )
{
     CString message;
     ( (CComboBox*)GetDlgItem( IDC_COMBO_MESSAGE ) )->GetLBText( ( (CComboBox*)GetDlgItem( IDC_COMBO_MESSAGE ) )->GetCurSel(), message );
     switch ( CMessageHelper::getMessageType( message ) )
     {
     case ADT_A01_TYPE:
          MakeADT_A01();
          break;
     case ADT_A09_TYPE:
          MakeADT_A09();
          break;
     case ADT_A11_TYPE:
          MakeADT_A11();
          break;
     case ORU_R01_TYPE:
          MakeORU_R01();
          break;
     default:
          HL7Message = "";
          break;
     }
     GetDlgItem( IDC_MESSAGE_SHOW )->SetWindowTextW( L"" );
     AppendTextToEditCtrl( "MESSAGE", HL7Message );
}

void CHL7SDKTestDlg::MakeADT_A01( )
{
     string data = "";
     switch ( getVersion() )
     {
     case HL7_24_VERSION:
          {
               //data = "MSH|^~\\&|system1|W|system2|UHN|200105231927||ADT^A01^ADT_A01|22139243|P|2.4\r" \
               //     "EVN|A01|200105231927|\r" \
               //     "PID||9999999999^^|2216506^||Duck^Donald^^^MR.^MR.||19720227|M|||123 Foo ST.^^TORONTO^ON^M6G 3E6^CA^H^~123 Foo ST.^^TORONTO^ON^M6G 3E6^CA^M^|1811|( 416 )111 - 1111||E^ ENGLISH|S|PATIENT DID NOT INDICATE|211004554^||||||||||||\r" \
               //     "PV1|||ZFAST TRACK^WAITING^13|E^EMERGENCY||369^6^13^U EM EMERGENCY DEPARTMENT^ZFAST TRACK WAITING^FT WAIT 13^FTWAIT13^FT WAITING^FTWAIT13|^MOUSE^MICKEY^M^^DR.^MD|||SUR||||||||I|211004554^||||||||||||||||||||W|||||200105231927|||||\r" \
               //     "PV2||F|^R / O APPENDICIAL ABSCESS|||||||||||||||||||||||||\r" \
               //     "IN1|1||001001|OHIP||||||||||||^^^^^|||^^^^^^M^|||||||||||||||||||||||||^^^^^^M^|||||\r" \
                    //     "ACC|";
               data = "MSH|^~\\&|HIS||Infinity||199903291650||ADT^A01|99022916500500050122|P|2.4\r" \
                    "PID|||111 - 11 - 1111||Smith^Wally^L.||194204301420|M||W|13 Beer St.^#123^Beersteinville^VA^12345 - 6785^USA|978 907 - 7333|||spa|M|JEW|1001|012 - 34 - 5678|||||||||THA\r" \
                    "PV1|||CCU1^200^A||||021 - 55 - 1366^Munster^Florence^S^II^Mr.^M.D.||||||||||0001^Carr^Mary^Jones^II^Mrs.^M.D.|||||||||||||||||||||||||||199804300430\r" \
                    "NK1||Ms.^Leanne^Johnson|S|St^St2^city^st^zip|6172227878|7898887676\r" \
                    "AL1|2|MA^^^Allergy|PEN^Penicillin|MI|Throws Up|20050421\r" \
                    "AL1|1|MA^^^Allergy|EGG^Eggs|MI|Swells Up|20050421\r" \
                    "IN1|1|1|SE3432|HMOBLUE OF TEXAS|P O  BOX 662344^^DALLAS^TX^75263|Luise^Marie^Nicole|( 888 )555 - 1234|645342|HMOTX||CHRDE|20040628||||TEST^EVA|SP|19800220033300|55 Lollipop Lane^Apt. 321^Los Alamos^TX^04932^USA|||||||||||||||||123446\r" \
                    "IN1|1|2|SE3432|HMOBLUE|P O  BOX 662344^^DALLAS^TX^75264|Luise^Marie^Nicole|( 888 )555 - 1234|645342|HMO||CHRDE|20040628||||TEST^EVA|SP|19800220033300|55 Lollipop Lane^Apt. 321^Los Alamos^TX^04932^USA|||||||||||||||||123446\r" \
                    "DG1|24232||01|Appendicitis^Inflammation of Veriform Appendix||A||111\r" \
                    "DG1|24232||02|Hemigastrectomy^Removal of 1 / 2 of the stomach||W||666\r" \
                    "DG1|24232||03|Tonsillectomy^Surgical Removal of the Tonsils||W||555\r" \
                    "DG1|24232||04|Laryngectomy^Removal of part of the Larynx||A||741\r" \
                    "DG1|24232||05|Tonsillectomy^Surgical Removal of Tonsils||W||555\r" \
                    "DG1|24232||06|Appendicitis^Inflammation of Veriform Appendix||A||111\r" \
                    "OBX||ST|ASA||ASA III E|kg^^ISO +|||||R|||19990329165005\r" \
                    "OBX||NM|height||182.9|cm^^ISO +|||||R|||19990329165005\r" \
                    "OBX||SN|weight||=^29.3|kg^^ISO +|||||R|||19990329165005";
               //
               //MSH | ^~\& | HIS || Infinity || 199903291650 || ADT | 99022916500500050122 | P | 2.3
               //EVN | A01
               //PID || | 222 - 22 - 2222 || Smith^Jane || 1990062659 | F || A || || || | B | 2002
               //PV1 || | CCU1 ^ 201 ^ B || || ^Dixon^Glen || || || || || || || || || || || || || || || || || || | 20001130
               //AL1 | 2 | MA^^^Allergy | WHE^Wheat | MI | Nausea | 20050421
               //AL1 | 1 | MA^^^Allergy | POL^Pollen | MI | Sneezing | 20050421
               //IN1 | 1 | BC.HMOBLUE || BC ***HMOBLUE OF TEXAS( HMO ) | P O  BOX 660044 ^ ^DALLAS^TX ^ 75266 - 0044 || ( 888 )585 - 9393 || || CHRDE | 20040628 || || TEST^EVA | SP || || || || || || 20040628 | EGG9746 || || || 1234 || || || FT^FULL - TIME EMPLOYED || | QUEUED
               //IN1 | 1 | HMOBLUE || HMO | P O  BOX 660044 ^ ^DALLAS^TX ^ 75266 - 0044 || ( 888 )585 - 9393 || | 4645 | CHRDE | 20040628 || || TEST^EVA | SP || || || || || || 20040628 | EGG9746 || || || 4444 || || || FT^FULL - TIME EMPLOYED || | QUEUED
               //DG1 | 24232 || 3534 - MC | Describing || F || All related
               //DG1 | 24232 || 32121MG | Overweight || W || GROUPREL
               //OBX || ST | ASA || ASA III E | kg^^ISO + || || | R || | 19990329165005
               //OBX || NM | height || 68 | in^^ISO + || || | R || | 20001126
               //OBX || SN | weight || = ^ 135 | lb^^ISO + || || | R || | 20001126
               //HL7_24::ADT_A01 adt;
               //adt.initFromPipe( data );
               //HL7_24::MSH* mshSegment = adt.getMSH_1( );
               //mshSegment->getSendingApplication( )->getNamespaceId( )->setData( "HL7SDKTest" );
               //adt.getPipeString( pipeline );
               //??
          }
          break;
     case HL7_23_VERSION:
          {
               data = "MSH|^~\\&|system1|W|system2|UHN|200105231927||ADT^A01^ADT_A01|22139243|P|2.3\r" \
                    "EVN|A01|200105231927|\r" \
                    "PID||9999999999^^|2216506^||Duck^Donald^^^MR.^MR.||19720227|M|||123 Foo ST.^^TORONTO^ON^M6G 3E6^CA^H^~123 Foo ST.^^TORONTO^ON^M6G 3E6^CA^M^|1811|( 416 )111 - 1111||E^ ENGLISH|S|PATIENT DID NOT INDICATE|211004554^||||||||||||\r" \
                    "PV1|||ZFAST TRACK^WAITING^13|E^EMERGENCY||369^6^13^U EM EMERGENCY DEPARTMENT^ZFAST TRACK WAITING^FT WAIT 13^FTWAIT13^FT WAITING^FTWAIT13|^MOUSE^MICKEY^M^^DR.^MD|||SUR||||||||I|211004554^||||||||||||||||||||W|||||200105231927|||||\r" \
                    "PV2||F|^R / O APPENDICIAL ABSCESS|||||||||||||||||||||||||\r" \
                    "IN1|1||001001|OHIP||||||||||||^^^^^|||^^^^^^M^|||||||||||||||||||||||||^^^^^^M^|||||\r" \
                    "ACC|";
               //HL7_V23::ADT_A01 adt;
               //HL7_V23::MSH* mshSegment = adt.getMSH_1( );
               //mshSegment->getSendingApplication( )->getNamespaceId( )->setData( "HL7SDKTest" );
               //adt.getPipeString( pipeline );
          }
          break;
     }
     //HL7Message = pipeline.str().c_str();
     HL7Message = data.c_str();
}

void CHL7SDKTestDlg::MakeADT_A09()
{
     string data = "";
     switch ( getVersion() )
     {
     case HL7_24_VERSION:
          {
               data = "MSH|^~\\&|HIS||Infinity||199903291650||ADT^A09|99022916500500050122|P|2.4\r" \
                    "PID||||||||F|||||||||B|1001\r" \
                    "PV1|||CCU1^200^A||||021 - 55 - 1366^Munster^Florence^S^II^Mr.^M.D.||||||||||0001^Carr^Mary^Jones^II^Mrs.^M.D.|||||||||||||||||||||||||||199804300430";
          }
          break;
     case HL7_23_VERSION:
          {
               data = "MSH|^~\\&|HIS||Infinity||199903291650||ADT^A09|99022916500500050122|P|2.3\r" \
                    "PID||||||||F|||||||||B|1001\r" \
                    "PV1|||CCU1^200^A||||021 - 55 - 1366^Munster^Florence^S^II^Mr.^M.D.||||||||||0001^Carr^Mary^Jones^II^Mrs.^M.D.|||||||||||||||||||||||||||199804300430";
          }
          break;
     }
     //HL7Message = pipeline.str().c_str();
     HL7Message = data.c_str();
}

void CHL7SDKTestDlg::MakeADT_A11()
{
     string data = "";
     switch ( getVersion() )
     {
     case HL7_24_VERSION:
          {
               data = "MSH|^~\\&|HIS||Infinity||199903291650||ADT^A11|99022916500500050122|P|2.4\r" \
                    "PID|||111 - 11 - 1111||Smith^Wally^L.||1990062659|F||A|||||||B|1001\r" \
                    "PV1|||CCU1^200^A||||021 - 55 - 1366^Munster^Florence^S^II^Mr.^M.D.||||||||||0001^Carr^Mary^Jones^II^Mrs.^M.D.|||||||||||||||||||||||||||199804300430";
          }
          break;
     case HL7_23_VERSION:
          {
               data = "MSH|^~\\&|HIS||Infinity||199903291650||ADT^A11|99022916500500050122|P|2.3\r" \
                    "PID|||111 - 11 - 1111||Smith^Wally^L.||1990062659|F||A|||||||B|1001r" \
                    "PV1|||CCU1^200^A||||021 - 55 - 1366^Munster^Florence^S^II^Mr.^M.D.||||||||||0001^Carr^Mary^Jones^II^Mrs.^M.D.|||||||||||||||||||||||||||199804300430";
          }
          break;
     }
     //HL7Message = pipeline.str().c_str();
     HL7Message = data.c_str();
}

void CHL7SDKTestDlg::MakeORU_R01()
{
     string data = "";
     switch ( getVersion() )
     {
     case HL7_24_VERSION:
          {
               data = "MSH|^~\\&|LIS||Infinity||19990310150529||ORU^R01|12345678901234567890|P|2.4\r" \
                    "PID|||999-99-9999|||||||||||||||999-99-9999\r" \
                    "OBR|||||||19990309090909\r" \
                    "OBX||SN|PO2||33|mmHg^^ISO+|||||F|||1999030101010101\r" \
                    "OBX||ST|PCO2||***|mmHg^^ISO+|||||F|||1999030201010101\r" \
                    "OBX||SN|PO2-good||^33|mmHg^^ISO+|||||F|||1999030101010101\r" \
                    "OBX||SN|PO2-good2||=^33|mmHg^^ISO+|||||F|||1999030101010101\r" \
                    "OBX||SN|PO2-bad||=<^33|mmHg^^ISO+|||||F|||1999030101010101\r";
          }
          break;
     case HL7_23_VERSION:
          {
               data = "MSH|^~\\&|LIS||Infinity||19990310150529||ORU^R01|12345678901234567890|P|2.3\r" \
                    "PID|||999-99-9999|||||||||||||||999-99-9999\r" \
                    "OBR|||||||19990309090909\r" \
                    "OBX||SN|PO2||33|mmHg^^ISO+|||||F|||1999030101010101\r" \
                    "OBX||ST|PCO2||***|mmHg^^ISO+|||||F|||1999030201010101\r" \
                    "OBX||SN|PO2-good||^33|mmHg^^ISO+|||||F|||1999030101010101\r" \
                    "OBX||SN|PO2-good2||=^33|mmHg^^ISO+|||||F|||1999030101010101\r" \
                    "OBX||SN|PO2-bad||=<^33|mmHg^^ISO+|||||F|||1999030101010101\r";
          }
          break;
     }
     //HL7Message = pipeline.str().c_str();
     HL7Message = data.c_str();
}

void CHL7SDKTestDlg::OnBnClickedButtonMessageEdit()
{
     CString message;
     ( (CComboBox*)GetDlgItem( IDC_COMBO_MESSAGE ) )->GetWindowTextW( message );

//FILE* tst = fopen( "c://projects//enc_start.txt", "a+" );
//fprintf( tst, "%S", HL7Message.GetString() );
//fclose( tst );

     CMessagePropSheet MessageEditor( getVersion(), message, HL7Message, this );
     if ( MessageEditor.DoModal() == IDOK )
     {
          HL7Message = MessageEditor.getHL7Message();
          GetDlgItem( IDC_MESSAGE_SHOW )->SetWindowTextW( L"" );
          AppendTextToEditCtrl( "MESSAGE", HL7Message );
     }

     //CMessageEditor edit;
     //INT_PTR nResponse = edit.DoModal();
     //CString message;
     //( (CComboBox*)GetDlgItem( IDC_COMBO_MESSAGE ) )->GetWindowTextW( message );
     //edit.setMessageName( message );
     //edit.setHL7Message( HL7Message );
     //if ( nResponse == IDOK )
     //     HL7Message = edit.getHL7Message();
}

//
//ADT_A01
//MSH | ^~\& | system1 | W | system2 | UHN | 200105231927 || ADT^A01^ADT_A01 | 22139243 | P | 2.4
//EVN | A01 | 200105231927 |
//PID || 9999999999 ^ ^ | 2216506 ^ || Duck^Donald^^^MR.^MR. || 19720227 | M || | 123 Foo ST.^^TORONTO^ON^M6G 3E6^CA^H^~123 Foo ST.^^TORONTO^ON^M6G 3E6^CA^M^ | 1811 | ( 416 )111 - 1111 || E^ ENGLISH | S | PATIENT DID NOT INDICATE | 211004554 ^ || || || || || ||
//PV1 || | ZFAST TRACK^WAITING ^ 13 | E^EMERGENCY || 369 ^ 6 ^ 13 ^ U EM EMERGENCY DEPARTMENT^ZFAST TRACK WAITING^FT WAIT 13 ^ FTWAIT13^FT WAITING^FTWAIT13 | ^MOUSE^MICKEY^M^^DR.^MD || | SUR || || || || I | 211004554 ^ || || || || || || || || || || W || || | 200105231927 || || |
//PV2 || F | ^R / O APPENDICIAL ABSCESS || || || || || || || || || || || || |
//IN1 | 1 || 001001 | OHIP || || || || || || ^^^^^ || | ^^^^^^M^ || || || || || || || || || || || || | ^^^^^^M^ || || |
//ACC |
//
//MSH | ^~\& | HIS || Infinity || 199903291650 || ADT^A01 | 99022916500500050122 | P | 2.3
//PID || | 111 - 11 - 1111 || Smith^Wally^L. || 194204301420 | M || W | 13 Beer St.^#123 ^ Beersteinville^VA ^ 12345 - 6785 ^ USA | 978 907 - 7333 || | spa | M | JEW | 1001 | 012 - 34 - 5678 || || || || | THA
//PV1 || | CCU1 ^ 200 ^ A || || 021 - 55 - 1366 ^ Munster^Florence^S^II^Mr.^M.D. || || || || || 0001 ^ Carr^Mary^Jones^II^Mrs.^M.D. || || || || || || || || || || || || || | 199804300430
//NK1 || Ms.^Leanne^Johnson | S | St^St2^city^st^zip | 6172227878 | 7898887676
//AL1 | 2 | MA^^^Allergy | PEN^Penicillin | MI | Throws Up | 20050421
//AL1 | 1 | MA^^^Allergy | EGG^Eggs | MI | Swells Up | 20050421
//IN1 | 1 | 1 | SE3432 | HMOBLUE OF TEXAS | P O  BOX 662344 ^ ^DALLAS^TX ^ 75263 | Luise^Marie^Nicole | ( 888 )555 - 1234 | 645342 | HMOTX || CHRDE | 20040628 || || TEST^EVA | SP | 19800220033300 | 55 Lollipop Lane^Apt. 321 ^ Los Alamos^TX ^ 04932 ^ USA || || || || || || || || | 123446
//IN1 | 1 | 2 | SE3432 | HMOBLUE | P O  BOX 662344 ^ ^DALLAS^TX ^ 75264 | Luise^Marie^Nicole | ( 888 )555 - 1234 | 645342 | HMO || CHRDE | 20040628 || || TEST^EVA | SP | 19800220033300 | 55 Lollipop Lane^Apt. 321 ^ Los Alamos^TX ^ 04932 ^ USA || || || || || || || || | 123446
//DG1 | 24232 || 01 | Appendicitis^Inflammation of Veriform Appendix || A || 111
//DG1 | 24232 || 02 | Hemigastrectomy^Removal of 1 / 2 of the stomach || W || 666
//DG1 | 24232 || 03 | Tonsillectomy^Surgical Removal of the Tonsils || W || 555
//DG1 | 24232 || 04 | Laryngectomy^Removal of part of the Larynx || A || 741
//DG1 | 24232 || 05 | Tonsillectomy^Surgical Removal of Tonsils || W || 555
//DG1 | 24232 || 06 | Appendicitis^Inflammation of Veriform Appendix || A || 111
//OBX || ST | ASA || ASA III E | kg^^ISO + || || | R || | 19990329165005
//OBX || NM | height || 182.9 | cm^^ISO + || || | R || | 19990329165005
//OBX || SN | weight || = ^29.3 | kg^^ISO + || || | R || | 19990329165005
//
//MSH | ^~\& | HIS || Infinity || 199903291650 || ADT | 99022916500500050122 | P | 2.3
//EVN | A01
//PID || | 222 - 22 - 2222 || Smith^Jane || 1990062659 | F || A || || || | B | 2002
//PV1 || | CCU1 ^ 201 ^ B || || ^Dixon^Glen || || || || || || || || || || || || || || || || || || | 20001130
//AL1 | 2 | MA^^^Allergy | WHE^Wheat | MI | Nausea | 20050421
//AL1 | 1 | MA^^^Allergy | POL^Pollen | MI | Sneezing | 20050421
//IN1 | 1 | BC.HMOBLUE || BC ***HMOBLUE OF TEXAS( HMO ) | P O  BOX 660044 ^ ^DALLAS^TX ^ 75266 - 0044 || ( 888 )585 - 9393 || || CHRDE | 20040628 || || TEST^EVA | SP || || || || || || 20040628 | EGG9746 || || || 1234 || || || FT^FULL - TIME EMPLOYED || | QUEUED
//IN1 | 1 | HMOBLUE || HMO | P O  BOX 660044 ^ ^DALLAS^TX ^ 75266 - 0044 || ( 888 )585 - 9393 || | 4645 | CHRDE | 20040628 || || TEST^EVA | SP || || || || || || 20040628 | EGG9746 || || || 4444 || || || FT^FULL - TIME EMPLOYED || | QUEUED
//DG1 | 24232 || 3534 - MC | Describing || F || All related
//DG1 | 24232 || 32121MG | Overweight || W || GROUPREL
//OBX || ST | ASA || ASA III E | kg^^ISO + || || | R || | 19990329165005
//OBX || NM | height || 68 | in^^ISO + || || | R || | 20001126
//OBX || SN | weight || = ^ 135 | lb^^ISO + || || | R || | 20001126

//NAME = Cancel 1001
//MSG:
//MSH | ^~\& | HIS || Infinity || 199903291650 || ADT^A11 | 99022916500500050122 | P | 2.3
//PID || | 111 - 11 - 1111 || Smith^Wally^L. || 1990062659 | F || A || || || | B | 1001

//NAME = Update 1001sex F
//MSG :
//MSH | ^~\& | HIS || Infinity || 199903291650 || ADT^A09 | 99022916500500050122 | P | 2.3
//PID || || || || F || || || || | B | 1001

//NAME = ADT Query for 111 - 11 - 1111
//MSG:
//MSH | ^~\& | Infinity || HIS || 199903221322 || QRY^A19 | 99022213222303883455 | P | 2.3
//QRD | 19990322160000 | R | I | 9999999999 || | RD ^ 1 | 111 - 11 - 1111 | APA
//
//NAME = ADT Response for 111 - 11 - 1111
//MSG:#
//MSH | ^~\& | HIS || Infinity || 199903291650 || ADR^A19 | 99022916500500050122 | P | 2.3
//MSA | AA | 99022213222303883455 | Patient found
//QRD | 19990322160000 | R | I | 9999999999 || | RD ^ 1 | 111 - 11 - 1111 | APA
//PID || | 111 - 11 - 1111 || Anderson Ray^Roberta Joan^Terresa || 194204301420 | F || W | 13 Beer St.^#123 ^ Beersteinville^VA ^ 12345 - 6785 ^ USA | 978 907 - 7333 || | spa | M | JEW | 111 - 11 - 1111 | 012 - 34 - 5678 || || || || | THA
//PV1 || | CCU1 ^ 200 ^ A || || 021 - 55 - 1366 ^ Munster^Florence^S^II^Mr.^M.D. || || || || || 0001 ^ Carr^Mary^Jones^II^Mrs.^M.D. || || || || || || || || || || || || || | 199804300430
//NK1 || Ms.^Leanne^Johnson | S | St^St2^city^st^zip | 6172227878 | 7898887676
//AL1 | 2 | MA^^^Allergy | WHE^Wheat | MI | Nausea | 20050421
//AL1 | 1 | MA^^^Allergy | POL^Pollen | MI | Sneezing | 20050421
//IN1 | 1 | BC.HMOBLUE || BC ***HMOBLUE OF TEXAS( HMO ) | P O  BOX 660044 ^ ^DALLAS^TX ^ 75266 - 0044 || ( 888 )555 - 1234 || || CHRDE | 20040628 || || TEST^EVA | SP || || || || || || 20040628 | EGG9746 || || || 1234 || || || FT^FULL - TIME EMPLOYED || | QUEUED
//DG1 | 24232 || 3534 - MC | Appendicitis^Inflammation of Veriform Appendix || A || 111
//DG1 | 24232 || 32121MG | Hemigastrectomy^Removal of 1 / 2 of the stomach || W || 666
//OBX || ST | ASA || ASA VI E || || || R || | 19990329165005 || || || || || || || || || || || || || || || || || || | IIIE
//OBX || NM | height || 182.9 | cm^^ISO + || || | R || | 19990329165005
//OBX || SN | weight || = ^29.3 | kg^^ISO + || || | R || | 19990329165005

//NAME = PO2&PCO2
//MSG :
//MSH | ^~\& | LIS || Infinity || 19990310150529 || ORU^R01 | 12345678901234567890 | P | 2.3
//PID || | 999 - 99 - 9999 || || || || || || || | 999 - 99 - 9999
//OBR || || || | 19990309090909
//OBX || SN | PO2 || 33 | mmHg^^ISO + || || | F || | 1999030101010101
//OBX || ST | PCO2 || *** | mmHg^^ISO + || || | F || | 1999030201010101
//OBX || SN | PO2 - good || ^ 33 | mmHg^^ISO + || || | F || | 1999030101010101
//OBX || SN | PO2 - good2 || = ^ 33 | mmHg^^ISO + || || | F || | 1999030101010101
//OBX || SN | PO2 - bad || = < ^ 33 | mmHg^^ISO + || || | F || | 1999030101010101

void CHL7SDKTestDlg::setServer( CStringA client, short port )
{
     struct hostent* host_ent = NULL;

     if ( isalpha( client[ 0 ] ) ) // default 127.0.0.1
          host_ent = gethostbyname( client );
     else
     {
          struct in_addr addr;
          addr.S_un.S_addr = inet_addr( client );
          if ( addr.S_un.S_addr != INADDR_NONE )
               host_ent = gethostbyaddr( (char*)&addr, 4, AF_INET );
     }
     if ( !host_ent || !(*(host_ent->h_addr_list)) )
     {
          CString strLine;
          strLine.Format( _T( "Error invalid client address - %S." ), client );
          MessageBox( strLine, _T( "Socket error" ), MB_ICONERROR | MB_OK );
          return;
     }
     memset( &address, 0, sizeof address );
     address.sin_family = AF_INET;
     address.sin_port = htons( port ); // default 2250
     address.sin_addr.S_un.S_addr = *( (DWORD*)*( host_ent->h_addr_list ) );
     m_client = client;
     m_port = port;
     return;
}

BYTE* CHL7SDKTestDlg::makeMessage( CString message, DWORD& len )
{
     BYTE* res = NULL;
     CStringA mesA;
     mesA = message;
     int mesSize = mesA.GetLength( );
     if ( mesSize > 0 )
     {
          res = (BYTE*)malloc( mesSize + 4 );
          if ( res )
          {
               int i = 0;
               res[ 0 ] = 0x0b;
               len = 1;
               for ( i = 0; i <= mesSize; i++ )
               {
                    res[ i + 1 ] = mesA[ i ];
                    len++;
               }
               if ( len <= (DWORD)( mesSize + 3 ) )
               {
                    res[ len ] = 0x1c;
                    len++;
               }
               if ( len <= (DWORD)( mesSize + 3 ) )
               {
                    res[ len ] = 0x0d;
                    len++;
               }
          }
     }
     return res;
}

BOOL CHL7SDKTestDlg::isStartMessage( BYTE* data )
{
     if ( *data == 0x0b )
          return TRUE;
     return FALSE;
}

BOOL CHL7SDKTestDlg::isMessageFinished( BYTE* data, DWORD size )
{
     DWORD item = 0;
     for ( item = 0; item < size; item++ )
     {
          if ( ( data[ item ] == 0x1c ) && ( item < ( size - 1 ) ) && ( data[ item + 1 ] == 0x0d ) )
               return TRUE;
     }
     return FALSE;
}

CString CHL7SDKTestDlg::getMessage( BYTE** data, DWORD* size )
{
     CString mes = _T( "" );
     if ( !data || !( *data ) || !size )
          return mes;
     int startInd = 0;
     while ( ( ( *data )[ startInd ] != 0x0b ) && ( (DWORD)startInd < *size ) )
          startInd++;
     if ( ( *data )[ startInd ] != 0x0b )
          return mes;
     startInd++;
     int endInd = startInd;
     while ( (DWORD)endInd < *size )
     {
          if ( ( ( *data )[ endInd ] == 0x1c ) && ( (DWORD)endInd < ( *size - 1 ) ) && ( ( *data )[ endInd + 1 ] == 0x0d ) )
               break;
          endInd++;
     }
     CStringA mesA;
     mesA.Append( (char*)( &( *data )[ startInd ] ), endInd - startInd );
     mes = mesA;
     *data = *data + endInd + 2;
     *size = *size - endInd - 2;
     return mes;
}

void CHL7SDKTestDlg::OnBnClickedButtonSendMessage()
{
     CString result;
     std::string param;

     messages.clear();
     types.clear();
     GetDlgItem( IDC_BUTTON_SEND_MESSAGE )->EnableWindow( FALSE );

     messages.push_back( HL7Message );
     types.push_back( ORIGINAL_MESSAGE );
     result = SendMessage( HL7Message );
     messages.push_back( result );
     types.push_back( ORIGINAL_ANSWER );

     if ( bUseTestCase && ( getVersion() == HL7_24_VERSION ) )
     {
          if ( CMessageHelper::getMessageType( HL7Message ) == ADT_A01_TYPE )
          {
               string data = "MSH|^~\\&|Infinity||HIS||199903221322||QRY^A19|99022213222303883455|P|2.3\r" \
                    "QRD|19990322160000|R|I|9999999999|||RD^1|111 - 11 - 1111|APA";
               HL7_24::ADT_A01 adt;
               pipeToMsg( &adt, CMessageHelper::getAString( HL7Message.GetString() ) );

               HL7_24::QRY_A19 qrd;
               pipeToMsg( &qrd, data );
               if ( adt.getPID_3()->isPID_2() )
               {
                    adt.getPID_3()->getPID_2()->getID()->getData( param );
                    qrd.getQRD_2()->getWhoSubjectFilter( 0 )->getIDNumber()->setData( param );
               }
               else
               {
                    if ( adt.getPID_3()->isPID_3( 0 ) )
                    {
                         adt.getPID_3()->getPID_3( 0 )->getID()->getData( param );
                         qrd.getQRD_2()->getWhoSubjectFilter( 0 )->getIDNumber()->setData( param );
                    }
                    else
                    {
                         if ( adt.getPID_3()->isPID_4() )
                         {
                              adt.getPID_3()->getPID_4()->getID()->getData( param );
                              qrd.getQRD_2()->getWhoSubjectFilter( 0 )->getIDNumber()->setData( param );
                         }
                    }
               }

               //messages.push_back( HL7Message );
               //types.push_back( TEST_REQUEST );
               //result = SendMessage( HL7Message );
               //messages.push_back( result );
               //types.push_back( TEST_ANSWER );
          }
     }

     GetDlgItem( IDC_BUTTON_SEND_MESSAGE )->EnableWindow( TRUE );
     AppendTextToEditCtrl( "ANSWER", result );
     return;
}

CString CHL7SDKTestDlg::SendMessage( CString message )
{
     CString result = L"";
     if ( INVALID_SOCKET == hSocket )
          hSocket = socket( AF_INET, SOCK_STREAM, 0 );
     if ( INVALID_SOCKET == hSocket )
     {
          closesocket( hSocket );
          hSocket = INVALID_SOCKET;
          CString strLine;
          strLine.Format( _T( "Error opening socket - %d." ), ::WSAGetLastError() );
          MessageBox( strLine, _T( "Socket error" ), MB_ICONERROR | MB_OK );
          return result;
     }

     //SOCKADDR_IN address;
     if ( SOCKET_ERROR == connect( hSocket, (PSOCKADDR)&address, sizeof address ) )
     {
          closesocket( hSocket );
          hSocket = INVALID_SOCKET;
          CString strLine;
          strLine.Format( _T( "Error connecting to client <%s:%d> - %d." ), m_client, m_port, ::WSAGetLastError() );
          MessageBox( strLine, _T( "Socket error" ), MB_ICONERROR | MB_OK );
          GetDlgItem( IDC_BUTTON_SEND_MESSAGE )->EnableWindow( TRUE );
          return result;
     }

     DWORD size = 0;
     BYTE* data = makeMessage( message, size );
     if ( !data )
     {
          CString strLine;
          strLine.Format( _T( "Error allocating memory with %d byte." ), HL7Message.GetLength() + 3 );
          MessageBox( strLine, _T( "General error" ), MB_ICONERROR | MB_OK );
          GetDlgItem( IDC_BUTTON_SEND_MESSAGE )->EnableWindow( TRUE );
          return result;
     }

     int resSize = send( hSocket, (const char*)data, size, 0 );
     free( data );
     if ( SOCKET_ERROR == resSize )
     {
          closesocket( hSocket );
          hSocket = INVALID_SOCKET;
          CString strLine;
          strLine.Format( _T( "Error sending data to client <%s:%d> - %d." ), m_client, m_port, ::WSAGetLastError() );
          MessageBox( strLine, _T( "Socket error" ), MB_ICONERROR | MB_OK );
          GetDlgItem( IDC_BUTTON_SEND_MESSAGE )->EnableWindow( TRUE );
          return result;
     }
     size = 0;
     data = NULL;

     char rd;
     resSize = recv( hSocket, &rd, 1, MSG_PEEK );
     if ( SOCKET_ERROR == resSize )
     {
          closesocket( hSocket );
          hSocket = INVALID_SOCKET;
          CString strLine;
          strLine.Format( _T( "Error receiving data from client <%s:%d> - %d." ), m_client, m_port, ::WSAGetLastError() );
          MessageBox( strLine, _T( "Socket error" ), MB_ICONERROR | MB_OK );
          GetDlgItem( IDC_BUTTON_SEND_MESSAGE )->EnableWindow( TRUE );
          return result;
     }
     BOOL bFinish = FALSE;
     BOOL bStartMessage = FALSE;
     BYTE* recv_pos = data;
     DWORD recv_size = resSize;
     while ( resSize != 0 )
     {
          if ( !data )
          {
               size = resSize;
               data = (BYTE*)malloc( size + 2 );
               recv_pos = data;
               recv_size = size;
          }
          else
          {
               data = (BYTE*)realloc( data, size + resSize + 2 );
               recv_pos = data + size;
               size += resSize;
               recv_size = resSize;
          }
          if ( !data )
          {
               CString strLine;
               strLine.Format( _T( "Error allocating memory with %d byte." ), HL7Message.GetLength() + 3 );
               MessageBox( strLine, _T( "General error" ), MB_ICONERROR | MB_OK );
               break;
          }
          memset( recv_pos, 0, recv_size + 2 );
          resSize = recv( hSocket, (char*)recv_pos, recv_size, 0 );
          if ( SOCKET_ERROR == resSize )
          {
               CString strLine;
               strLine.Format( _T( "Error receiving data from client <%s:%d> - %d." ), m_client, m_port, ::WSAGetLastError() );
               MessageBox( strLine, _T( "Socket error" ), MB_ICONERROR | MB_OK );
               break;
          }
          if ( !bStartMessage )
               bStartMessage = isStartMessage( data );
          if ( bStartMessage )
               bFinish = isMessageFinished( data, size );
          else
          {
               recv_pos = data;
               data = (BYTE*)malloc( size + 1 );
               if ( data  && recv_pos )
               {
                    memcpy( data, recv_pos + 1, size + 1 );
                    size--;
                    free( recv_pos );
               }
          }
          if ( bFinish )
          {
               DWORD curSize = size;
               BYTE* pos = data;
               while ( pos && curSize )
                    result += getMessage( &pos, &curSize );
                    //AppendTextToEditCtrl( "ANSWER", getMessage( &pos, &curSize ) );
               free( data );
               data = NULL;
               bFinish = FALSE;
               bStartMessage = FALSE;
               break;
          }
          resSize = recv( hSocket, &rd, 1, MSG_PEEK );
          if ( SOCKET_ERROR == resSize )
          {
               CString strLine;
               strLine.Format( _T( "Error receiving data from client <%s:%d> - %d." ), m_client, m_port, ::WSAGetLastError() );
               MessageBox( strLine, _T( "Socket error" ), MB_ICONERROR | MB_OK );
               break;
          }
     }
     if ( data )
          free( data );
     // else socket closed by server
     closesocket( hSocket );
     hSocket = INVALID_SOCKET;

     return result;
}

void CHL7SDKTestDlg::OnBnClickedButtonLoadMessage()
{
     CString messageType;
     ( (CComboBox*)GetDlgItem( IDC_COMBO_MESSAGE ) )->GetWindowTextW( messageType );

     CString message;
//TODO Load from file
     OPENFILENAME ofn;
     wchar_t szFile[ MAX_PATH ];
     //HWND hwnd;              
     HANDLE hf;          

     wchar_t curDir[ MAX_PATH ];

     GetCurrentDirectoryW( MAX_PATH, curDir );

     // Initialize OPENFILENAME
     ZeroMemory( &ofn, sizeof( ofn ) );
     ofn.lStructSize = sizeof( ofn );
     ofn.hwndOwner = m_hWnd;
     ofn.lpstrFile = szFile;
     ofn.lpstrFile[ 0 ] = '\0';
     ofn.nMaxFile = sizeof( szFile );
     ofn.lpstrFilter = L"HL7\0*.hl7\0Text\0*.TXT\0All\0*.*\0";
     ofn.nFilterIndex = 0;
     ofn.lpstrFileTitle = NULL;
     ofn.nMaxFileTitle = 0;
     ofn.lpstrInitialDir = curDir;
     ofn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST;

     // Display the Open dialog box. 

     if ( GetOpenFileName( &ofn ) != TRUE )
          return;

     hf = CreateFile( ofn.lpstrFile, GENERIC_READ, 0, (LPSECURITY_ATTRIBUTES)NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, (HANDLE)NULL );
     if ( hf == INVALID_HANDLE_VALUE )
     {
          CString strLine;
          strLine.Format( _T( "Error opening <%s> file - %d." ), ofn.lpstrFile, ::GetLastError( ) );
          MessageBox( strLine, _T( "File error" ), MB_ICONERROR | MB_OK );
          return;
     }
     DWORD nRead = 0;
     DWORD size = GetFileSize( hf, NULL ) + 4;
     char* buf = ( char*)malloc( size );
     if ( buf )
     {
          memset( buf, 0, size );
          if ( !ReadFile( hf, buf, size, &nRead, NULL ) )
          {
               CString strLine;
               strLine.Format( _T( "Error reading <%s> file - %d." ), ofn.lpstrFile, ::GetLastError() );
               MessageBox( strLine, _T( "File error" ), MB_ICONERROR | MB_OK );
               return;
          }
          message = buf;
          free( buf );
     }
     CloseHandle( hf );

     CMessagePropSheet MessageEditor( messageType, message, this );
     if ( MessageEditor.DoModal() == IDOK )
     {
          HL7Message = MessageEditor.getHL7Message( );
          GetDlgItem( IDC_MESSAGE_SHOW )->SetWindowTextW( L"" );
          AppendTextToEditCtrl( "MESSAGE", HL7Message );
     }
}

void CHL7SDKTestDlg::OnBnClickedCheck1()
{
     if ( ( (CButton*)GetDlgItem( IDC_CHECK_USE_TEST_CASE ) )->GetCheck() == BST_CHECKED )
          bUseTestCase = TRUE;
     else
          bUseTestCase = FALSE;
}


void CHL7SDKTestDlg::OnBnClickedButton1()
{
     // TODO: Add your control notification handler code here
}

