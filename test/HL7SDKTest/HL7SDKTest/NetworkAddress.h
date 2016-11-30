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

#pragma once


// CNetworkAddress dialog

class CNetworkAddress : public CDialogEx
{
	DECLARE_DYNAMIC(CNetworkAddress)

public:
     CStringA address;
     short port;
     
     CNetworkAddress( CWnd* pParent = NULL );   // standard constructor
	virtual ~CNetworkAddress();

// Dialog Data
	enum { IDD = IDD_NETWORKADDRESS };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

    bool getAddress();
    bool getPort();

public:
     afx_msg void OnBnClickedButton1();
     afx_msg void OnBnClickedOk();
     virtual BOOL OnInitDialog();
};
