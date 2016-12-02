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


// HL7SDKTestDlg.h : header file
//

#include "Tables.h"
#include <vector>

#pragma once

using namespace std;

typedef enum _TEST_CASE_TYPE
{
     ORIGINAL_MESSAGE,
     ORIGINAL_ANSWER,
     TEST_REQUEST,
     TEST_ANSWER,
}TEST_CASE_TYPE;

// CHL7SDKTestDlg dialog
class CHL7SDKTestDlg : public CDialogEx
{
// Construction
public:
	CHL7SDKTestDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_HL7SDKTEST_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;
    CString HL7Message;
    SOCKET hSocket;
    short m_port;
    CString m_client;
    SOCKADDR_IN address;
    BOOL bUseTestCase;
    vector<CString> messages;
    vector<TEST_CASE_TYPE> types;

    void AppendTextToEditCtrl( char* mtype, CString mes );
    HL7_VERSION_ENUM CHL7SDKTestDlg::getVersion();

    // Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
     void setServer( CStringA client, short port );
          
     afx_msg void OnSelchangeComboMessage( );
     afx_msg void OnBnClickedButtonMessageEdit();

private:
     void MakeADT_A01( );
     void MakeADT_A09();
     void MakeADT_A11();
     void MakeORU_R01();
     BYTE* makeMessage( CString message, DWORD& len );
     CString getMessage( BYTE** data, DWORD* size );
     BOOL isStartMessage( BYTE* data );
     BOOL isMessageFinished( BYTE* data, DWORD size );
     CString SendMessage( CString message );

public:
     afx_msg void OnBnClickedButtonSendMessage();
     afx_msg void OnBnClickedButtonLoadMessage();
     afx_msg void OnCbnSelchangeComboVersion();
     afx_msg void OnBnClickedCheck1();
     afx_msg void OnBnClickedButton1();
};
