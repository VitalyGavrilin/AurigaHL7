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

#pragma once


// CMessageEditor dialog

class CMessageEditor : public CDialogEx
{
	DECLARE_DYNAMIC(CMessageEditor)

public:
	CMessageEditor(CWnd* pParent = NULL);   // standard constructor
	virtual ~CMessageEditor();

// Dialog Data
	enum { IDD = IDD_MESSAGE_EDITOR };

    CString getHL7Message()
    {
         CString message;
         ( (CEdit*)GetDlgItem( IDC_EDIT_MESSAGE ) )->GetWindowTextW( message );
         return message;
    }

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
