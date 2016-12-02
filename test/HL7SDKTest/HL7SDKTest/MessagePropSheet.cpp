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

// MessagePropSheet.cpp : implementation file
//

#include "stdafx.h"
#include "HL7SDKTest.h"
#include "MessagePropSheet.h"

#include "MessagePage.h"
#include "MSHPage.h"
#include "EVNSegment.h"
#include "PIDPage.h"
#include "AL1Page.h"
#include "DG1Page.h"
#include "NK1Page.h"
#include "PV1Page.h"
#include "MRGPage.h"
#include "OBXPage.h"

#include "Tables.h"

//#include "message.h"
//#include "util.h"
#include "message\ADT_A01.h"
#include "message\ADT_A09.h"
#include "message\ORU_R01.h"
#include "ObjToPipe.h"
//#include "pipe.h"

using namespace HL7_24;

// CMessagePropSheet

IMPLEMENT_DYNAMIC(CMessagePropSheet, CPropertySheet)

CMessagePropSheet::CMessagePropSheet(UINT nIDCaption, CWnd* pParentWnd, UINT iSelectPage)
	:CPropertySheet(nIDCaption, pParentWnd, iSelectPage)
{
     initPages( );
}

CMessagePropSheet::CMessagePropSheet(LPCTSTR pszCaption, CWnd* pParentWnd, UINT iSelectPage)
	:CPropertySheet(pszCaption, pParentWnd, iSelectPage)
{
     initPages( );
}

CMessagePropSheet::CMessagePropSheet( HL7_VERSION_ENUM ver, CString name, CString& message, CWnd* pParentWnd, UINT iSelectPage )
     : CPropertySheet( (CString)"<" + name + "> massage editor", pParentWnd, iSelectPage )
{
     message_save = message;
     initPages();
     Message = new CMessagePage( name, message );
     //if ( Message )
     //     pages.push_back( Message );
     if ( Message )
          AddPage( Message );

     //HL7_KNOWN_MESSAGES_TYPE tp = Message->getMessageType();
     //switch ( tp )
     //{
     //case ADT_A01_TYPE:
     //     makeADT_A01Editor( ver, message );
     //     return;
     //}
}

CMessagePropSheet::CMessagePropSheet( CString name, CString& message, CWnd* pParentWnd /*= NULL*/, UINT iSelectPage /*= 0*/ )
     : CPropertySheet( ( CString )"<" + name + "> massage editor", pParentWnd, iSelectPage )
{
     message_save = message;
     initPages();
     Message = new CMessagePage( name, message );
     //if ( Message )
     //     pages.push_back( Message );
     if ( Message )
          AddPage( Message );
}


void CMessagePropSheet::initPages( )
{
     Message = NULL;
}

//void CMessagePropSheet::FinalyzeInit( CString name, CString& message )
//{
//     CMessagePage* Message = new CMessagePage( name, message );
//     pageGeneral = new CGeneralPage;
//     pageToken = new CTokenPage;
//     pageToken->m_pTrace.SetSettings( SET_ROOT_OBJECT, (void*)pTracer );
//     pageToken->SetParentThread( theThread );
//     pageDialup = new CDialupPage;
//     pageLocal = new CLocalSettingsPage;
//     //	pageSecurity				= NULL;
//     //	if (theEnvironment->CheckRights(GENERIC_WRITE))
//     //		pageSecurity			= CreateSecurityPage(theEnvironment->GetSecurityInterface());
//     pageDebug = new CDebugPage;
//     pageLocal->pSheet = this;
//     pageLocal->pageDebug = pageDebug;
//     pageLocal->m_pTrace.SetSettings( SET_ROOT_OBJECT, (void*)pTracer );
//     LoadStringA( *theEnvironment->m_pTrace.mp_prodInst, IDS_GENERAL_PAGE_CAPTION, (char*)General_Caption, General_Caption.allocated() );
//     pageGeneral->m_psp.pszTitle = (char*)General_Caption;
//     LoadStringA( *theEnvironment->m_pTrace.mp_prodInst, IDS_TOKEN_PAGE_CAPTION, (char*)EToken_Caption, EToken_Caption.allocated() );
//     pageToken->m_psp.pszTitle = (char*)EToken_Caption;
//     LoadStringA( *theEnvironment->m_pTrace.mp_prodInst, IDS_DIALUP_PAGE_CAPTION, (char*)DialUp_Caption, DialUp_Caption.allocated() );
//     pageDialup->m_psp.pszTitle = (char*)DialUp_Caption;
//     LoadStringA( *theEnvironment->m_pTrace.mp_prodInst, IDS_LOCALSETTINGS_PAGE_CAPTION, (char*)Local_Caption, Local_Caption.allocated() );
//     pageLocal->m_psp.pszTitle = (char*)Local_Caption;
//     //	if (pageSecurity)
//     //	{
//     //		LoadStringA(*theEnvironment->m_pTrace.mp_prodInst,IDS_LOCALSETTINGS_PAGE_CAPTION,(char*)Security_Caption,Security_Caption.allocated());
//     //		pageSecurity->m_psp.pszTitle	= (char*)Local_Caption;
//     //	}
//     LoadStringA( *theEnvironment->m_pTrace.mp_prodInst, IDS_TRACE_PAGE_CAPTION, (char*)Debug_Caption, Debug_Caption.allocated() );
//     pageDebug->m_psp.pszTitle = (char*)Debug_Caption;
//     AddPage( pageGeneral );
//     AddPage( pageToken );
//     AddPage( pageDialup );
//     AddPage( pageLocal );
//     //	if (pageSecurity)
//     //		AddPage(pageSecurity);
//}

CMessagePropSheet::~CMessagePropSheet()
{
     if ( Message )
          delete Message;
     for ( vector<CPropertyPage*>::iterator it = pages.begin(); it != pages.end(); it++ )
     {
          CPropertyPage* pg = *it;
          delete pg;
     }
     if ( mes_buf )
          delete mes_buf;
}


BEGIN_MESSAGE_MAP(CMessagePropSheet, CPropertySheet)
     ON_COMMAND( IDOK, &CMessagePropSheet::OnIdok )
END_MESSAGE_MAP()


// CMessagePropSheet message handlers
//#define ADDED_NOT_SHOWN_SEGM_ADT01( header, value ) ADDED_NOT_SHOWN_SEGM( adt, header, value )
#define ADD_PAGE( page_class, message, segment ) \
     if ( message && ##message##->is##segment##( ) ) \
          page = new page_class( ##message##->get##segment##( ) ); \
          else \
          page = NULL; \
     if ( page ) \
          { \
          pages.push_back( page ); \
          AddPage( page ); \
          show_missed = ( (page_class*)page )->show_missed; \
          }
#define ADD_PAGE_MUST2( page_class, message, segment, value1, value2 ) \
          {\
          ##message##->get##segment##()->get##value1##()->getData( param );\
          if ( message && ##message##->is##segment##( ) && \
               ( \
                    ( ##message##->get##segment##()->isEVN_1() && param.length() ) || \
                    ##message##->get##segment##()->get##value2##() \
               ) \
          ) \
               page = new page_class( ##message##->get##segment##( ) ); \
          else \
               page = NULL; \
          if ( page ) \
          { \
               pages.push_back( page ); \
               AddPage( page ); \
               show_missed = ( (page_class*)page )->show_missed; \
          }\
     }
//                    SendMessage( /*m_hWnd, */PSM_SETTITLE, 0, (LPARAM)( (page_class*)page )->getTitelName().GetString() );
#define ADD_PAGE_REP( page_class, message, segment ) \
     i = 0; \
     if ( message ) \
     { \
          while ( ##message##->is##segment##( i ) ) \
          { \
               page = new page_class( ##message##->get##segment##( i ) ); \
               if ( page ) \
               { \
                    pages.push_back( page ); \
                    AddPage( page ); \
                    show_missed = ( (page_class*)page )->show_missed; \
               } \
               i++; \
          } \
     }
#define ADD_PAGE_REP_NUM( page_class, message, segment ) \
     i = 0; \
     if ( message ) \
     { \
          while ( ##message##->is##segment##( i ) ) \
          { \
               page = new page_class( ##message##->get##segment##( i ), i ); \
               if ( page ) \
               { \
                    pages.push_back( page ); \
                    AddPage( page ); \
                    show_missed = ( (page_class*)page )->show_missed; \
               } \
               i++; \
          } \
     }
#define ADD_PAGE_FROM_GROUP( page_class, group, message, segment ) \
     if ( message && ##message##->is##group##() && ##message##->get##group##()->is##segment##() ) \
          page = new page_class( ##message##->get##group##()->get##segment##() ); \
     else \
          page = NULL; \
     if ( page ) \
     { \
          pages.push_back( page ); \
          AddPage( page ); \
          show_missed = ( (page_class*)page )->show_missed; \
     }
#define ADD_PAGE_FROM_GROUP_REP( page_class, group, message, segment ) \
     i = 0; \
     if ( message ) \
     { \
          while ( ##message##->is##group##( i ) ) \
          { \
               if ( !##message##->get##group##( i )->is##segment##( ) ) \
               { \
                    i++; \
                    continue; \
               } \
               page = new page_class( ##message##->get##group##( i )->get##segment##( ) ); \
               if ( page ) \
               { \
                    pages.push_back( page ); \
                    AddPage( page ); \
                    show_missed = ( (page_class*)page )->show_missed; \
               } \
               i++; \
          } \
     }
#define ADD_PAGE_ADT_REP( page_class, segment ) ADD_PAGE_REP( page_class, adt, segment )
#define ADD_PAGE_ADT_REP_NUM( page_class, segment ) ADD_PAGE_REP_NUM( page_class, adt, segment )
#define ADD_PAGE_ADT( page_class, segment ) ADD_PAGE( page_class, adt, segment )
#define ADD_PAGE_MUST2_ADT( page_class, segment, value1, value2 ) ADD_PAGE_MUST2( page_class, adt, segment, value1, value2 )
#define ADD_PAGE_FROM_GROUP_ADT( page_class, group, segment ) ADD_PAGE_FROM_GROUP( page_class, group, adt, segment )
#define ADD_PAGE_FROM_GROUP_ADT_REP( page_class, group, segment ) ADD_PAGE_FROM_GROUP_REP( page_class, group, adt, segment )

void CMessagePropSheet::makeADT_A01Editor( HL7_VERSION_ENUM ver, CString& message )
{
     string result;
     std::string param;
     CPropertyPage* page;
     int i = 0;
     show_missed = "";
     switch ( ver )
     {
     case HL7_24_VERSION:
          {
               HL7_24::ADT_A01* adt = new HL7_24::ADT_A01();
               mes_buf = adt;
               if ( !adt )
                    break;
               pipeToMsg( adt, getAString( message.GetString() ) );
               ADD_PAGE_ADT( CMSHPage, MSH_1 );
               //ADD_PAGE_ADT( CEVNSegment, EVN_2 );
               ADD_PAGE_MUST2_ADT( CEVNSegment, EVN_2, EVN_1, EVN_2()->isTS_1 );
               ADD_PAGE_ADT( CPIDPage, PID_3 );
               ADD_PAGE_ADT_REP( CAL1Page, AL1_38 );
               
               //i = 0;
               //if ( adt )
               //{
               //     while ( adt->isAL1_12( i ) )
               //     {
               //          page = new CAL1Page( adt->getAL1_12( i ) );
               //          if ( page )
               //          {
               //               pages.push_back( page );
               //               AddPage( page );
               //               show_missed = ( (CAL1Page*)page )->show_missed;
               //          }
               //          i++;
               //     }
               //}
               int i = 0;
               if ( adt )
               {
                    while ( adt->isINSURANCE( i ) )
                    {
                         if ( !adt->getINSURANCE( i )->isIN1_66() )
                         { 
                              i++;
                              continue;
                         } 
                         page = new CIN1Page( adt->getINSURANCE( i )->getIN1_66() );
                         if ( page )
                         {
                              pages.push_back( page ); \
                              AddPage( page ); \
                              show_missed = ( (CIN1Page*)page )->show_missed; \
                         } \
                         i++; \
                    } \
               }
               ADD_PAGE_FROM_GROUP_ADT_REP( CIN1Page, INSURANCE, IN1_66 );
               ADD_PAGE_ADT_REP( CDG1Page, DG1_43 );
               ADD_PAGE_ADT_REP( CNK1Page, NK1_14 );
               ADD_PAGE_ADT( CPV1Page, PV1_17 );
               ADD_PAGE_ADT_REP_NUM( COBXPage, OBX_33 );
               //* <li>11 : OBX( Observation / Result ) <b>optional repeating< / b> < / li>
               //* <li>15 : ADT_A01_PROCEDURE( a Group object ) <b>optional repeating< / b> < / li>
               //*<li>5 : ROL( Role ) <b>optional repeating< / b> < / li>
               //ADDED_NOT_SHOWN_SEGM_ADT01( PD1, 4 );//  4 : PD1( patient additional demographic ) <b>optional < / b> < / li>
               //ADDED_NOT_SHOWN_SEGM_ADT01( PV2, 8 ); //  8 : PV2( Patient visit - additional information ) <b>optional < / b> < / li>
               //ADDED_NOT_SHOWN_SEGM_ADT01( ROL, 9 ); //  9 : ROL( Role ) <b>optional repeating< / b> < / li>
               //ADDED_NOT_SHOWN_SEGM_ADT01( DB1, 10 ); //  10 : DB1( Disability ) <b>optional repeating< / b> < / li>
               //ADDED_NOT_SHOWN_SEGM_ADT01( DRG, 14 ); //  14 : DRG( Diagnosis Related Group ) <b>optional < / b> < / li>
               //ADDED_NOT_SHOWN_SEGM_ADT01( GT1, 16 ); //  16 : GT1( Guarantor ) <b>optional repeating< / b> < / li>
               //ADDED_NOT_SHOWN_SEGM_ADT01( ACC, 18 ); //  18 : ACC( Accident ) <b>optional < / b> < / li>
               //ADDED_NOT_SHOWN_SEGM_ADT01( UB1, 19 ); //  19 : UB1( UB82 ) <b>optional < / b> < / li>
               //ADDED_NOT_SHOWN_SEGM_ADT01( UB2, 20 ); //  20 : UB2( UB92 Data ) <b>optional < / b> < / li>
               //ADDED_NOT_SHOWN_SEGM_ADT01( PDA, 21 ); //  21 : PDA( Patient death and autopsy ) <b>optional < / b> < / li>
               //ADD_PAGE_ADT( CMRGPage, PV1_7 );
          }
          break;
     case HL7_23_VERSION:
          {
               //HL7_V23::ADT_A01 adt;
               //pMSH = new CMSHPage( adt.getMSH_1( ) );
               //if ( adt.isEVN_2() )
               //     pEVN = new CEVNSegment( adt.getEVN_2() );
               //pPID = new CPIDPage( adt.getPID_3() );
          }
          break;
     }

     //TODO show not parsed = result
}

void CMessagePropSheet::makeADT_A09Editor( HL7_VERSION_ENUM ver, CString& message )
{
     string result;
     CPropertyPage* page;
     int i = 0;
     show_missed = "";
     switch ( ver )
     {
     case HL7_24_VERSION:
          {
               HL7_24::ADT_A09* adt = new HL7_24::ADT_A09();
               mes_buf = adt;
               if ( !adt )
                    break;
               pipeToMsg( adt, getAString( message.GetString() ) );
               ADD_PAGE_ADT( CMSHPage, MSH_1 );
               ADD_PAGE_ADT( CEVNSegment, EVN_2 );
               ADD_PAGE_ADT( CPIDPage, PID_3 );
               ADD_PAGE_ADT_REP_NUM( COBXPage, OBX_18 );
               ADD_PAGE_ADT_REP( CDG1Page, DG1_23 );
               ADD_PAGE_ADT( CPV1Page, PV1_7 );
               //ADDED_NOT_SHOWN_SEGM_ADT01( PD1, 5 );//  4 : PD1( patient additional demographic ) <b>optional < / b> < / li>
               //ADDED_NOT_SHOWN_SEGM_ADT01( PV2, 9 ); //  8 : PV2( Patient visit - additional information ) <b>optional < / b> < / li>
               //ADDED_NOT_SHOWN_SEGM_ADT01( DB1, 13 ); //  10 : DB1( Disability ) <b>optional repeating< / b> < / li>
          }
          break;
     case HL7_23_VERSION:
          {
               //HL7_V23::ADT_A01 adt;
               //pMSH = new CMSHPage( adt.getMSH_1( ) );
               //if ( adt.isEVN_2() )
               //     pEVN = new CEVNSegment( adt.getEVN_2() );
               //pPID = new CPIDPage( adt.getPID_3() );
          }
          break;
     }

     //TODO show not parsed = result
}

#define ADD_PAGE_ORU( page_class, segment ) ADD_PAGE( page_class, oru, segment )
#define ADD_PAGE_FROM_GROUP_ORU_REP( page_class, group, segment ) ADD_PAGE_FROM_GROUP_REP( page_class, group, oru, segment )

void CMessagePropSheet::makeORU_R01Editor( HL7_VERSION_ENUM ver, CString& message )
{
     string result;
     CPropertyPage* page;
     int i = 0;
     show_missed = "";
     switch ( ver )
     {
     case HL7_24_VERSION:
          {
               HL7_24::ORU_R01* oru = new HL7_24::ORU_R01();
               mes_buf = oru;
               if ( !oru )
                    break;
               pipeToMsg( oru, getAString( message.GetString() ) );
               ADD_PAGE_ORU( CMSHPage, MSH_1 );
               i = 0;
               while ( oru->isPATIENT_RESULT( i ) )
               {
                    if ( oru->getPATIENT_RESULT(i)->isPATIENT() )
                    {
                         if ( oru->getPATIENT_RESULT( i )->getPATIENT()->isPID_4() )
                         {
                              page = new CPIDPage( oru->getPATIENT_RESULT( i )->getPATIENT()->getPID_4() );
                              if ( page )
                              {
                                   pages.push_back( page );
                                   AddPage( page );
                              }
                         }
                         int nkCount = 0;
                         while ( oru->getPATIENT_RESULT( i )->getPATIENT()->isNK1_10( nkCount ) )
                         {
                              page = new CNK1Page( oru->getPATIENT_RESULT( i )->getPATIENT()->getNK1_10( nkCount ) );
                              if ( page )
                              {
                                   pages.push_back( page );
                                   AddPage( page );
                              }
                              nkCount++;
                         }
                    }
                    int wholeCount = 0;
                    int k = 0;
                    while ( oru->getPATIENT_RESULT( i )->isORDER_OBSERVATION( k ) )
                    {
                         int j = 0;
                         while ( oru->getPATIENT_RESULT( i )->getORDER_OBSERVATION( k )->isOBSERVATION( j ) )
                         {
                              if ( oru->getPATIENT_RESULT( i )->getORDER_OBSERVATION( k )->getOBSERVATION( j )->isOBX_40() )
                              {
                                   wholeCount++;
                                   page = new COBXPage( oru->getPATIENT_RESULT( i )->getORDER_OBSERVATION( k )->getOBSERVATION( j )->getOBX_40(), wholeCount );
                                   if ( page )
                                   {
                                        pages.push_back( page );
                                        AddPage( page );
                                   }
                              }
                              j++;
                         }
                         k++;
                    }
                    i++;
               }
          }
          break;
     case HL7_23_VERSION:
          {
               //HL7_V23::ADT_A01 adt;
               //pMSH = new CMSHPage( adt.getMSH_1( ) );
               //if ( adt.isEVN_2() )
               //     pEVN = new CEVNSegment( adt.getEVN_2() );
               //pPID = new CPIDPage( adt.getPID_3() );
          }
          break;
     }
}

BOOL CMessagePropSheet::OnInitDialog()
{
     EnableStackedTabs( FALSE );
     BOOL bResult = __super::OnInitDialog();

     HL7_KNOWN_MESSAGES_TYPE tp = Message->getMessageType();
     HL7_VERSION_ENUM ver = Message->getMessageVersion();
     switch ( tp )
     {
     case ADT_A01_TYPE:
          makeADT_A01Editor( ver, Message->getHL7Message() );
          break;
     case ADT_A09_TYPE:
     case ADT_A11_TYPE:
          makeADT_A09Editor( ver, Message->getHL7Message() );
          break;
     case ORU_R01_TYPE:
          makeORU_R01Editor( ver, Message->getHL7Message() );
          break;
     }

     return bResult;
}


//void CMessagePropSheet::OnIdok()
//{
//     int i = 6;
//     // TODO: Add your command handler code here
//     CPropertySheet::OnOK( );
//}


void CMessagePropSheet::OnIdok()
{
     for ( vector<CPropertyPage*>::iterator it = pages.begin( ); it != pages.end( ); it++ )
     {
          CPropertyPage* pg = *it;
          if ( pg )
          {
               pg->OnOK();
          }
     }
     HL7_KNOWN_MESSAGES_TYPE tp = Message->getMessageType();
     HL7_VERSION_ENUM ver = Message->getMessageVersion();
     switch ( ver )
     {
     case HL7_24_VERSION:
          {
               switch ( tp )
               {
               case ADT_A01_TYPE:
                    {
                         std::string data;
                         HL7_24::ADT_A01* adt = ( HL7_24::ADT_A01* )mes_buf;
                         msgToPipe( adt, data );
                         //adt->getPipeString( data );
//FILE* tst = fopen( "c://projects//enc_result.txt", "a+" );
//fprintf( tst, "%s", data.str().c_str() );
//fclose( tst );
                         message_save = data.c_str();
                    }
                    break;
               case ADT_A09_TYPE:
               case ADT_A11_TYPE:
                    {
                         std::string data;
                         HL7_24::ADT_A09* adt = ( HL7_24::ADT_A09* )mes_buf;
                         msgToPipe( adt, data );
                         //adt->getPipeString( data );
                         message_save = data.c_str();
                    }
                    break;
               case ORU_R01_TYPE:
                    {
                         std::string data;
                         HL7_24::ORU_R01* adt = ( HL7_24::ORU_R01* )mes_buf;
                         msgToPipe( adt, data );
                         //adt->getPipeString( data );
                         message_save = data.c_str();
                    }
                    break;
               }
          }
          break;
     case HL7_23_VERSION:
          {
               //HL7_V23::ADT_A01 adt;
               //pMSH = new CMSHPage( adt.getMSH_1( ) );
               //if ( adt.isEVN_2() )
               //     pEVN = new CEVNSegment( adt.getEVN_2() );
               //pPID = new CPIDPage( adt.getPID_3() );
          }
          break;
     }
     EndDialog( IDOK );
     // TODO: Add your command handler code here
}


