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

// TSDateTime.cpp : implementation file
//

#include "stdafx.h"
#include "HL7SDKTest.h"
#include "TSDateTime.h"
#include "afxdialogex.h"
#include <sys/timeb.h>
#include "dataencode.h"

// CTSDateTime dialog

IMPLEMENT_DYNAMIC(CTSDateTime, CDialogEx)

CTSDateTime::CTSDateTime(CWnd* pParent /*=NULL*/)
	: CDialogEx(CTSDateTime::IDD, pParent)
    , bDate( FALSE )
    , bTime( FALSE )
{

}

CTSDateTime::CTSDateTime( HL7_24::TS* pTS, CString name, CWnd* pParent /*= NULL*/ )
     : CDialogEx( CTSDateTime::IDD, pParent )
     , bDate( TRUE )
     , bTime( TRUE )
{
     save_name = name;
     psTS = pTS;
}

CTSDateTime::CTSDateTime( HL7_24::DT* pTS, CString name, CWnd* pParent /*= NULL*/ )
     : CDialogEx( CTSDateTime::IDD, pParent )
     , bDate( TRUE )
     , bTime( FALSE )
{
     save_name = name;
     psDT = pTS;
}

CTSDateTime::CTSDateTime( HL7_24::TM* pTS, CString name, CWnd* pParent /*= NULL*/ )
     : CDialogEx( CTSDateTime::IDD, pParent )
     , bDate( FALSE )
     , bTime( TRUE )
{
     save_name = name;
     psTM = pTS;
}

CTSDateTime::~CTSDateTime()
{
}

void CTSDateTime::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CTSDateTime, CDialogEx)
     ON_BN_CLICKED( IDC_CHECK_IS_PRECISION, &CTSDateTime::OnBnClickedCheckIsPrecision )
     ON_BN_CLICKED( IDC_CHECK_IS_TS_OFFSET, &CTSDateTime::OnBnClickedCheckIsTsOffset )
     ON_BN_CLICKED( IDC_CHECK_IS_PRECISION_TS, &CTSDateTime::OnBnClickedCheckIsPrecisionTs )
     ON_BN_CLICKED( IDOK, &CTSDateTime::OnBnClickedOk )
END_MESSAGE_MAP()


// CTSDateTime message handlers


void CTSDateTime::OnBnClickedCheckIsPrecision()
{
     // TODO: Add your control notification handler code here
}


void CTSDateTime::OnBnClickedCheckIsTsOffset()
{
     if ( ( (CButton*)GetDlgItem( IDC_CHECK_IS_TS_OFFSET ) )->GetCheck() == BST_UNCHECKED )
          GetDlgItem( IDC_EDIT_OFFSET_TS )->EnableWindow( FALSE );
     else
          GetDlgItem( IDC_EDIT_OFFSET_TS )->EnableWindow( TRUE );
}


void CTSDateTime::OnBnClickedCheckIsPrecisionTs()
{
     if ( ( (CButton*)GetDlgItem( IDC_CHECK_IS_PRECISION_TS ) )->GetCheck( ) == BST_UNCHECKED )
          GetDlgItem( IDC_COMBO_PRECISION_TS )->EnableWindow( FALSE );
     else
          GetDlgItem( IDC_COMBO_PRECISION_TS )->EnableWindow( TRUE );
}


void CTSDateTime::OnBnClickedOk()
{
     CString message;
     char sign;
     int val;
     //int val_sec;
     //SYSTEMTIME stime;
     if ( bDate )
     {
          ( (CDateTimeCtrl*)GetDlgItem( IDC_DATE_TS ) )->GetTime( &stime );
          //if ( bTime )
          //     ts_decr.setYearMonthDay( stime.wYear, stime.wMonth, stime.wDay );
          //else
          //     dt_decr.setYearMonthDay( stime.wYear, stime.wMonth, stime.wDay );
     }
     if ( bTime )
     {
          ( (CDateTimeCtrl*)GetDlgItem( IDC_TIME_TS ) )->GetTime( &stime );
          //if ( bDate )
          //     ts_decr.setHourMinuteSecond( stime.wHour, stime.wMinute, stime.wSecond );
          //else
          //     tm_decr.setHourMinuteSecond( stime.wHour, stime.wMinute, stime.wSecond );
     }
     if ( bTime )
     {
          ( (CEdit*)GetDlgItem( IDC_EDIT_MSSECONDS ) )->GetWindowTextW( message );
          if ( 1 != swscanf( message, L"%4d", &fractionOfSec ) )
          {
               CString strLine;
               strLine.Format( _T( "Invaid milliseconds value %S. It MUST be number from 0 to 9999" ), message );
               MessageBox( strLine, _T( "Invalid data" ), MB_ICONERROR | MB_OK );
               return;
          }
          //if ( bDate )
          //     ts_decr.setFraction( val );
          //else
          //     tm_decr.setFraction( val );
          if ( ( (CButton*)GetDlgItem( IDC_CHECK_IS_TS_OFFSET ) )->GetCheck() == BST_CHECKED )
          {
               ( (CEdit*)GetDlgItem( IDC_EDIT_OFFSET_TS ) )->GetWindowTextW( message );
               if ( 3 != swscanf( message, L"%c%2d%2d", &sign, &val, &offset ) )
               {
                    CString strLine;
                    strLine.Format( _T( "Invaid offset value %S. It MUST be if format +/-HHMM (H - hour, M - minutes)" ), message );
                    MessageBox( strLine, _T( "Invalid data" ), MB_ICONERROR | MB_OK );
                    return;
               }
               offset += val * 60;
               if ( sign == '-' )
                    offset *= -1;
               //if ( bDate )
               //     ts_decr.setOffsetMin( val_sec );
               //else
               //     tm_decr.setOffsetMin( val_sec );
          }
          if ( bDate )
          {
               if ( ( (CButton*)GetDlgItem( IDC_CHECK_IS_PRECISION_TS ) )->GetCheck() == BST_CHECKED )
               {
                    GetDlgItem( IDC_COMBO_PRECISION_TS )->GetWindowTextW( message );
                    if ( message == L"NO" )
                         sign = 0;
                    if ( message == L"Year" )
                         sign = 'Y';
                    if ( message == L"Month" )
                         sign = 'L';
                    if ( message == L"Day" )
                         sign = 'D';
                    if ( message == L"Hour" )
                         sign = 'H';
                    if ( message == L"Minute" )
                         sign = 'M';
                    if ( message == L"Second" )
                         sign = 'S';
                    //if ( bDate )
                    //     ts_decr.setPrecision( sign );
                    //else
                    //     tm_decr.setPrecision( sign );
               }
          }
     }
     std::string encoded_val;
     if ( bDate )
     {
          if ( bTime )
          {
               if ( encodeTS( encoded_val, stime.wYear, stime.wMonth, stime.wDay,
                    stime.wHour, stime.wMinute, stime.wSecond, fractionOfSec, offset )
                    )
                    psTS->getTimeOfAnEvent()->setData( encoded_val );
               encoded_val = std::string( 1, sign );
               psTS->getDegreeOfPrecision()->setData( encoded_val );
          }
          else
          {
               if ( encodeDT( encoded_val, stime.wYear, stime.wMonth, 
                    stime.wDay ) )
                    psDT->setData( encoded_val );
          }
     }
     else
     {
          if ( encodeTM( encoded_val, stime.wHour, 
               stime.wMinute, stime.wSecond, fractionOfSec, offset ) )
               psTM->setData( encoded_val );
     }
}


BOOL CTSDateTime::OnInitDialog()
{
     __super::OnInitDialog();

     CDialogEx::SetWindowTextW( save_name );

     std::string param;
     std::string precision = "";
     int year;
     int month;
     int day;
     int hour;
     int minute;
     int second;

     if ( !bDate )
     { 
          GetDlgItem( IDC_DATE_TS )->EnableWindow( FALSE );
          GetDlgItem( IDC_COMBO_PRECISION_TS )->EnableWindow( FALSE );
     }
     if ( !bTime )
     { 
          GetDlgItem( IDC_CHECK_IS_TS_OFFSET )->EnableWindow( FALSE );
          GetDlgItem( IDC_CHECK_IS_PRECISION_TS )->EnableWindow( FALSE );
          GetDlgItem( IDC_EDIT_OFFSET_TS )->EnableWindow( FALSE );
          GetDlgItem( IDC_COMBO_PRECISION_TS )->EnableWindow( FALSE );
          GetDlgItem( IDC_TIME_TS )->EnableWindow( FALSE );
          GetDlgItem( IDC_EDIT_MSSECONDS )->EnableWindow( FALSE );
     }
     if ( bDate )
     {
          if ( bTime )
          {
               if ( !psTS || !psTS->isTS_1() )
               {
                    __timeb64 tm;
                    _ftime64( &tm );
                    GetSystemTime( &stime );
                    fractionOfSec = tm.millitm;
                    offset = tm.timezone;
               }
               else
               {
                    //data = psTS->getTimeOfAnEvent()->getData();
                    precision = "";
                    if ( psTS->isTS_2() )
                         psTS->getDegreeOfPrecision()->getData( precision );
                    psTS->getTimeOfAnEvent()->getData( param );
                    parseTS( param, year, month, 
                         day, hour, minute, second, fractionOfSec, offset );
                    stime.wYear = year;
                    if ( month != EMPTY_MONTH )
                         stime.wMonth = month;
                    else
                    {
                         stime.wMonth = MIN_MONTH;
                         precision = "Y";
                    }
                    if ( day != EMPTY_DAY )
                         stime.wDay = day;
                    else
                    {
                         stime.wDay = MIN_DAY;
                         if ( !precision.length() )
                              precision = "L";
                    }
                    if ( hour != EMPTY_HOUR )
                         stime.wHour = hour;
                    else
                    {
                         stime.wHour = MAX_HOUR;
                         if ( !precision.length() )
                              precision = "D";
                    }
                    if ( minute != EMPTY_MINUT )
                         stime.wMinute = minute;
                    else
                    {
                         stime.wMinute = MIN_MINUT;
                         if ( !precision.length() )
                              precision = "H";
                    }
                    if ( second != EMPTY_SECONDS )
                         stime.wSecond = second;
                    else
                    {
                         stime.wSecond = MIN_SECONDS;
                         if ( !precision.length() )
                              precision = "M";
                    }
                    if ( ( fractionOfSec == EMPTY_FRACTION_OF_SECONDS ) && !precision.length() )
                         precision = "S";
               }
          }
          else
          {
               if ( !psDT )
               {
                    GetSystemTime( &stime );
                    //dt_decr.setYearMonthDay( stime.wYear, stime.wMonth, stime.wDay );
               }
               else
               {
                    psDT->getData( param );
                    parseDT( param, year, month, day );
                    stime.wYear = year;
                    if ( month != EMPTY_MONTH )
                         stime.wMonth = month;
                    else
                    {
                         stime.wMonth = MIN_MONTH;
                         precision = "Y";
                    }
                    if ( day != EMPTY_DAY )
                         stime.wDay = day;
                    else
                    {
                         stime.wDay = MIN_DAY;
                         if ( !precision.length() )
                              precision = "L";
                    }
               }
          }
     }
     else
     {
          if ( !psTM )
          {
               __timeb64 tm;
               _ftime64( &tm );
               GetSystemTime( &stime );
               fractionOfSec = tm.millitm;
               offset = tm.timezone;
          }
          else
          {
               precision = "";
               psTM->getData( param );
               parseTM( true, param, 
                    hour, minute, second, fractionOfSec, offset );
               stime.wHour = hour;
               if ( minute != EMPTY_MINUT )
                    stime.wMinute = minute;
               else
               {
                    stime.wMinute = MIN_MINUT;
                    if ( !precision.length() )
                         precision = "H";
               }
               if ( second != EMPTY_SECONDS )
                    stime.wSecond = second;
               else
               {
                    stime.wSecond = MIN_SECONDS;
                    if ( !precision.length() )
                         precision = "M";
               }
               if ( ( fractionOfSec == EMPTY_FRACTION_OF_SECONDS ) && !precision.length() )
                    precision = "S";
          }
     }
     stime.wMilliseconds = fractionOfSec;

     CString mes;
     //SYSTEMTIME stime;
     //if ( bDate )
     //{
     //     if ( bTime )
     //          stime.wDay = ts_decr.getDay();
     //     else
     //          stime.wDay = dt_decr.getDay();
     //}

     //if ( bTime )
     //{
     //     if ( bDate )
     //          stime.wHour = ts_decr.getHour();
     //     else
     //          stime.wHour = tm_decr.getHour();
     //}
     //if ( bDate )
     //{
     //     if ( bTime )
     //          stime.wYear = ts_decr.getYear();
     //     else
     //          stime.wYear = dt_decr.getYear();
     //}
     //if ( bTime )
     //{
     //     if ( bDate )
     //          stime.wMilliseconds = ts_decr.getFractionMS();
     //     else
     //          stime.wMilliseconds = tm_decr.getFractionMS();
     //}
     //if ( bTime )
     //{
     //     if ( bDate )
     //          stime.wMinute = ts_decr.getMinute();
     //     else
     //          stime.wMinute = tm_decr.getMinute();
     //}
     //if ( bDate )
     //{
     //     if ( bTime )
     //          stime.wMonth = ts_decr.getMonth();
     //     else
     //          stime.wMonth = dt_decr.getMonth();
     //}
     //if ( bTime )
     //{
     //     if ( bDate )
     //          stime.wSecond = ts_decr.getSecond();
     //     else
     //          stime.wSecond = tm_decr.getSecond();
     //}
     if ( bDate )
          ( (CDateTimeCtrl*)GetDlgItem( IDC_DATE_TS ) )->SetTime( &stime );
     if ( bTime )
          ( (CDateTimeCtrl*)GetDlgItem( IDC_TIME_TS ) )->SetTime( &stime );
     if ( bTime )
     {
          mes.Format( L"%d", fractionOfSec );
          GetDlgItem( IDC_EDIT_MSSECONDS )->SetWindowTextW( mes );
          if ( offset == EMPTY_OFFSET )
          {
               ( (CButton*)GetDlgItem( IDC_CHECK_IS_TS_OFFSET ) )->SetCheck( BST_UNCHECKED );
               GetDlgItem( IDC_EDIT_OFFSET_TS )->SetWindowTextW( L"" );
               GetDlgItem( IDC_EDIT_OFFSET_TS )->EnableWindow( FALSE );
          }
          else
          {
               GetDlgItem( IDC_EDIT_OFFSET_TS )->EnableWindow( TRUE );
               ( (CButton*)GetDlgItem( IDC_CHECK_IS_TS_OFFSET ) )->SetCheck( BST_CHECKED );
               mes.Format( L"%c%.2d:%.2d", ( offset > 0 ) ? '+' : '-', abs( offset ) / 60, abs( offset ) % 60 );
               GetDlgItem( IDC_EDIT_OFFSET_TS )->SetWindowTextW( mes );
          }
     }

     if ( bTime && bDate )
     {
          CComboBox* pComboAllergy = (CComboBox*)GetDlgItem( IDC_COMBO_PRECISION_TS );
          pComboAllergy->AddString( L"NO" );
          pComboAllergy->AddString( L"Year" );
          pComboAllergy->AddString( L"Month" );
          pComboAllergy->AddString( L"Day" );
          pComboAllergy->AddString( L"Hour" );
          pComboAllergy->AddString( L"Minute" );
          pComboAllergy->AddString( L"Second" );

          if ( !precision.length() )
          {
               ( (CButton*)GetDlgItem( IDC_CHECK_IS_PRECISION_TS ) )->SetCheck( BST_UNCHECKED );
               ( (CComboBox*)GetDlgItem( IDC_COMBO_PRECISION_TS ) )->SelectString( 0, L"NO" );
               GetDlgItem( IDC_COMBO_PRECISION_TS )->EnableWindow( FALSE );
          }
          else
          {
               GetDlgItem( IDC_COMBO_PRECISION_TS )->EnableWindow( TRUE );
               ( (CButton*)GetDlgItem( IDC_CHECK_IS_PRECISION_TS ) )->SetCheck( BST_CHECKED );
               switch ( precision[0] )
               {
               case 'Y':
                    ( (CComboBox*)GetDlgItem( IDC_COMBO_PRECISION_TS ) )->SelectString( 0, L"Year" );
                    break;
               case 'L':
                    ( (CComboBox*)GetDlgItem( IDC_COMBO_PRECISION_TS ) )->SelectString( 0, L"Month" );
                    break;
               case 'D':
                    ( (CComboBox*)GetDlgItem( IDC_COMBO_PRECISION_TS ) )->SelectString( 0, L"Day" );
                    break;
               case 'H':
                    ( (CComboBox*)GetDlgItem( IDC_COMBO_PRECISION_TS ) )->SelectString( 0, L"Hour" );
                    break;
               case 'M':
                    ( (CComboBox*)GetDlgItem( IDC_COMBO_PRECISION_TS ) )->SelectString( 0, L"Minute" );
                    break;
               case 'S':
                    ( (CComboBox*)GetDlgItem( IDC_COMBO_PRECISION_TS ) )->SelectString( 0, L"Second" );
                    break;
               }
          }
     }

     return TRUE;  // return TRUE unless you set the focus to a control
     // EXCEPTION: OCX Property Pages should return FALSE
}
