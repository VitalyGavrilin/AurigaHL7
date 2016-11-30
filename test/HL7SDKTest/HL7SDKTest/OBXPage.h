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

#include <string>
#include "message\ADT_A01.h"

#include "Helper.h"

using namespace std;
using namespace HL7_24;

// COBXPage dialog

namespace KNOWN_VALUE_TYPE_TYPE
{
     typedef enum _KNOWN_VALUE_TYPE_TYPE
     {
          NM_TYPE,
          SN_TYPE,
          ST_TYPE,
          UNKNOWN,
          ENUM_LEN,
     }KNOWN_VALUE_TYPE_TYPE;
};

namespace KNOWN_OBSID_ID_TYPE
{
     typedef enum _KNOWN_OBSID_ID_TYPE
     {
          H_TYPE,
          W_TYPE,
          ASA_TYPE,
          UNKNOWN,
          ENUM_LEN,
     }KNOWN_OBSID_ID_TYPE;
};

namespace KNOWN_UNIT_H_ID_TYPE
{
     typedef enum _KNOWN_UNIT_H_ID_TYPE
     {
          CM_TYPE,
          M_TYPE,
          IN_TYPE,
          FT_TYPE,
          UNKNOWN,
          ENUM_LEN,
     }KNOWN_UNIT_H_ID_TYPE;
};

namespace KNOWN_UNIT_W_ID_TYPE
{
     typedef enum _KNOWN_UNIT_W_ID_TYPE
     {
          KG_TYPE,
          G_TYPE,
          LB_TYPE,
          OZ_TYPE,
          UNKNOWN,
          ENUM_LEN,
     }KNOWN_UNIT_W_ID_TYPE;
};

class COBXPage : public CPropertyPage, public CHelper
{
	DECLARE_DYNAMIC(COBXPage)

public:
	COBXPage();
    COBXPage( HL7_24::OBX* pOBX, int number );
    virtual ~COBXPage();

// Dialog Data
	enum { IDD = IDD_OBXPAGE };

protected:
     HL7_24::OBX* psOBX;
     int save_number;
     CString csTitle;

     virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

    string IsNotShowed( HL7_24::OBX* pOBX );
    int isDraegerSupported();
    void StartSelchangeComboObsidIdSupObx( std::string value );
public:
     afx_msg void OnBnClickedCheckDrgCompatObx();
     afx_msg void OnBnClickedButton1();
     afx_msg void OnSelchangeComboObsidIdSupObx();
     virtual BOOL OnInitDialog();
     virtual void OnOK();
     CString csValTypeS;
     CString csId;
     CString csUnitS;
     CString csValTypeN;
     CString csIdN;
     CString csUnitN;
     CString csDescId;
     CString csCodeSysId;
     CString csDescUnit;
     CString csCodeSysUnit;
     CString csVal;
     BOOL bDrgSupport;
     afx_msg void OnEnChangeEditValtypeNsupObx();
     afx_msg void OnEnChangeEditObsidIdNsupObx();
     afx_msg void OnEnChangeEditUnitIdNsupObx();
     afx_msg void OnEnChangeEditObsidDescNsupObx();
     afx_msg void OnEnChangeEditUnitDescNsupObx();
     afx_msg void OnEnChangeEditObsidCodsysNsupObx();
     afx_msg void OnEnChangeEditUnitCodsysNsupObx();
     afx_msg void OnEnChangeEditValueObx();
     afx_msg void OnCbnSelchangeComboUnitIdSupObx();
     afx_msg void OnCbnSelchangeComboValtypeSupObx();
};
