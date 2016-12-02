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

//#include "segment.h"
//#include "util.h"
#include <string>
#include "message\ADT_A01.h"

#include "Helper.h"

using namespace std;
using namespace HL7_24;

// CMSHPage dialog

namespace KNOWN_MESSAGE_TYPE
{
     typedef enum _KNOWN_MESSAGE_TYPE
     {
          ACK_MSG,
          ADT_MSG,
          ORU_MSG,
          UNKNOWN,
          ENUM_LEN,
     }KNOWN_MESSAGE_TYPE;
};

namespace KNOWN_EVENT_TYPE
{
     typedef enum  _KNOWN_EVENT_TYPE
     {
          A01_EVT,
          A04_EVT,
          R01_EVT,
          UNKNOWN,
          ENUM_LEN,
     }KNOWN_EVENT_TYPE;
};

class CMSHPage : public CPropertyPage, public CHelper
{
	DECLARE_DYNAMIC(CMSHPage)

public:
	CMSHPage();
    CMSHPage( HL7_24::MSH* pMSH );
    virtual ~CMSHPage();

// Dialog Data
	enum { IDD = IDD_MSHPAGE };

protected:
     virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

    string IsNotShowed( HL7_24::MSH* pMSH );

    string version;

public:
     HL7_24::MSH* psMSH;
     afx_msg void OnSelchangeComboEventType();
     afx_msg void OnBnClickedButton1();
     virtual BOOL OnInitDialog();

     afx_msg void OnEnChangeEditSendingApplication();
     virtual void OnOK();
     CString csSendingApp;
     CString csSendingFacil;
     CString csReceivingApp;
     CString csMessType;
     CString csEvtType;
     CString csMessStruct;
     CString csReceivingFacil;
     CString csMessCtrlId;
     CString csProcessingId;
     afx_msg void OnEnChangeEditSendingFacility();
     afx_msg void OnEnChangeEditReceivingApplication();
     afx_msg void OnCbnSelchangeComboMessageType();
     afx_msg void OnEnChangeEditMessageStructureMsh();
     afx_msg void OnEnChangeEditReceivingFacility();
     afx_msg void OnEnChangeEditControlid();
     afx_msg void OnEnChangeEditVersionid();
     afx_msg void OnEnChangeEditProcessingid();
};
