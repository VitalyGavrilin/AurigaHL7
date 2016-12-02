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

#include <string>
#include "message\ADT_A01.h"

#include "Helper.h"

using namespace std;
using namespace HL7_24;

// CAL1Page dialog

namespace KNOWN_ALLERGY_TYPE
{
     typedef enum _KNOWN_ALLERGY_TYPE
     {
          DA_ALLERGY,
          FA_ALLERGY,
          MA_ALLERGY,
          MC_ALLERGY,
          EA_ALLERGY,
          AA_ALLERGY,
          PA_ALLERGY,
          LA_ALLERGY,
          UNKNOWN,
          ENUM_LEN,
     }KNOWN_ALLERGY_TYPE;
};

namespace KNOWN_ALLERGY_SEV_TYPE
{
     typedef enum KNOWN_ALLERGY_SEV_TYPE
     {
          SV_ALSEV,
          MO_ALSEV,
          MI_ALSEV,
          UNKNOWN,
          ENUM_LEN,
     }KNOWN_ALLERGY_SEV_TYPE;
};

class CAL1Page : public CPropertyPage, public CHelper
{
	DECLARE_DYNAMIC(CAL1Page)

public:
	CAL1Page();
    CAL1Page( HL7_24::AL1* pAL1 );
    virtual ~CAL1Page( );

// Dialog Data
	enum { IDD = IDD_AL1PAGE };

protected:
     HL7_24::AL1* psAL1;
     CString csTitle;
     virtual void DoDataExchange( CDataExchange* pDX );    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
    string IsNotShowed( HL7_24::AL1* pAL1 );
public:
     virtual BOOL OnInitDialog();
     afx_msg void OnBnClickedButton1();
     virtual void OnOK();
     CString csAlergType;
     CString csAlergSever;
     CString csAlergCode;
     CString csAlergReact;
     afx_msg void OnCbnSelchangeComboAlTypeAl1();
     afx_msg void OnCbnSelchangeComboAlSeverityAl1();
     afx_msg void OnEnChangeEditAlCodeAl1();
     afx_msg void OnEnChangeEditReactionAl1();
};
