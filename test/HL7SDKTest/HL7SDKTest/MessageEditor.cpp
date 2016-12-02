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

// MessageEditor.cpp : implementation file
//

#include "stdafx.h"
#include "HL7SDKTest.h"
#include "MessageEditor.h"
#include "afxdialogex.h"


// CMessageEditor dialog

IMPLEMENT_DYNAMIC(CMessageEditor, CDialogEx)

CMessageEditor::CMessageEditor(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMessageEditor::IDD, pParent)
{

}

CMessageEditor::~CMessageEditor()
{
}

void CMessageEditor::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMessageEditor, CDialogEx)
END_MESSAGE_MAP()


// CMessageEditor message handlers

