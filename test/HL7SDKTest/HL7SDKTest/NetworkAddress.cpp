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

// NetworkAddress.cpp : implementation file
//

#include "stdafx.h"
#include "HL7SDKTest.h"
#include "NetworkAddress.h"
#include "afxdialogex.h"


// CNetworkAddress dialog

IMPLEMENT_DYNAMIC(CNetworkAddress, CDialogEx)

CNetworkAddress::CNetworkAddress(CWnd* pParent /*=NULL*/)
	: CDialogEx(CNetworkAddress::IDD, pParent)
{
}

CNetworkAddress::~CNetworkAddress()
{
}

void CNetworkAddress::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CNetworkAddress, CDialogEx)
     ON_BN_CLICKED( IDC_BUTTON1, &CNetworkAddress::OnBnClickedButton1 )
     ON_BN_CLICKED( IDOK, &CNetworkAddress::OnBnClickedOk )
END_MESSAGE_MAP()


// CNetworkAddress message handlers


void CNetworkAddress::OnBnClickedButton1()
{
     getAddress();
     struct hostent* host_ent = NULL;
     if ( isalpha( address[ 0 ] ) ) // default 127.0.0.1
          host_ent = gethostbyname( address );
     else
     {
          struct in_addr addr;
          addr.S_un.S_addr = inet_addr( address );
          if ( addr.S_un.S_addr != INADDR_NONE )
               host_ent = gethostbyaddr( (char*)&addr, 4, AF_INET );
     }
     UINT icon = MB_OK;
     CString strResult;
     if ( !host_ent || !( *( host_ent->h_addr_list ) ) )
     {
          strResult.Format( _T( "Client address %S can not be resolved." ), address );
          icon |= MB_ICONERROR;
     }
     else
     {
          strResult = _T( "Address OK." );
          //icon != MB_ICONINFORMATION;
     }
     MessageBox( strResult, _T( "Results" ), icon );
}


void CNetworkAddress::OnBnClickedOk()
{
     getAddress();
     if ( !getPort() )
          return;
     CDialogEx::OnOK();
}

bool CNetworkAddress::getAddress()
{
     CString data;
     GetDlgItem( IDC_EDIT_NET_ADDRESS )->GetWindowText( data );
     address = data;
     return true;
}

bool CNetworkAddress::getPort()
{
     wchar_t format[ 4 ] = L"";
     UINT icon = MB_OK;
     CString strResult;
     CString sport;
     GetDlgItem( IDC_EDIT_NET_PORT )->GetWindowTextW( sport );
     if ( sport.GetLength() < 5 )
          wsprintf( format, L"%%%dd", sport.GetLength() );
     else
          wcscpy( format, L"%5d" );
     if ( 1 != swscanf( sport, format, &port ) )
     {
          strResult.Format( _T( "Invaid port number %S. It MUST be number from 0 to 65535" ), sport );
          MessageBox( strResult, _T( "Data error" ), MB_ICONERROR | MB_OK );
          return false;
     }
     return true;
}

BOOL CNetworkAddress::OnInitDialog()
{
     CDialogEx::OnInitDialog();

     GetDlgItem( IDC_EDIT_NET_ADDRESS )->SetWindowTextW( L"localhost" );
     GetDlgItem( IDC_EDIT_NET_PORT )->SetWindowTextW( L"2250" );

     return TRUE;
}
