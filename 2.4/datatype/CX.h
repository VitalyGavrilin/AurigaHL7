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


#ifndef __CX_v24_H__
#define __CX_v24_H__

#include "../../common/Util.h"
#include "../datatype/DT.h"
#include "../datatype/HD.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* extended composite ID with check digit */
class CX : public HL7Data {
 public:
  CX() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CX_1, /* ID */
    CX_2, /* check digit (ST) */
    CX_3, /* code identifying the check digit scheme employed */
    CX_4, /* assigning authority */
    CX_5, /* identifier type code (ID) */
    CX_6, /* assigning facility */
    CX_7, /* effective date (DT) */
    CX_8, /* expiration date */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CX"; }
  CX *create() const { return new CX(); }

 private:
  void init() {
    // setName("CX");
    /* Init members */
    addObject<ST>(CX_1, "CX.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CX_2, "CX.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CX_3, "CX.3", HL7::initialized, HL7::repetition_off);
    addObject<HD>(CX_4, "CX.4", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CX_5, "CX.5", HL7::initialized, HL7::repetition_off);
    addParams(CX_5, "AM");  /* American Express */
    addParams(CX_5, "AN");  /* Account number */
    addParams(CX_5, "BA");  /* Bank Account Number */
    addParams(CX_5, "BR");  /* Birth registry number */
    addParams(CX_5, "BRN"); /* Breed Registry Number */
    addParams(CX_5, "DI");  /* Diner's Club card */
    addParams(CX_5, "DL");  /* Driver's license number */
    addParams(CX_5, "DN");  /* Doctor number */
    addParams(CX_5, "DR");  /* Donor Registration Number */
    addParams(CX_5, "DS");  /* Discover Card */
    addParams(CX_5, "EI");  /* Employee number */
    addParams(CX_5, "EN");  /* Employer number */
    addParams(CX_5, "FI");  /* Facility ID */
    addParams(CX_5, "GI");  /* Guarantor internal identifier */
    addParams(CX_5, "GN");  /* Guarantor external  identifier */
    addParams(CX_5, "HC");  /* Health Card Number */
    addParams(CX_5, "JHN"); /* Jurisdictional health number (Canada) */
    addParams(CX_5, "LN");  /* License number */
    addParams(CX_5, "LR");  /* Local Registry ID */
    addParams(CX_5, "MA");  /* Medicaid number */
    addParams(CX_5, "MC");  /* Medicare number */
    addParams(CX_5, "MCN"); /* Microchip Number */
    addParams(CX_5, "MR");  /* Medical record number */
    addParams(CX_5, "MS");  /* MasterCard */
    addParams(CX_5, "NE");  /* National employer identifier */
    addParams(CX_5, "NH");  /* National Health Plan Identifier */
    addParams(CX_5, "NI");  /* National unique individual identifier */
    addParams(CX_5,
	      "NNxxx"); /* National Person Identifier where the xxx is the ISO
			   table 3166  3-character (alphabetic) country code */
    addParams(CX_5, "NPI");  /* National provider identifier */
    addParams(CX_5, "PEN");  /* Pension Number */
    addParams(CX_5, "PI");   /* Patient internal identifier */
    addParams(CX_5, "PN");   /* Person number */
    addParams(CX_5, "PRN");  /* Provider number */
    addParams(CX_5, "PT");   /* Patient external identifier */
    addParams(CX_5, "RR");   /* Railroad Retirement number */
    addParams(CX_5, "RRI");  /* Regional registry ID */
    addParams(CX_5, "SL");   /* State license */
    addParams(CX_5, "SR");   /* State registry ID */
    addParams(CX_5, "SS");   /* Social Security number */
    addParams(CX_5, "U");    /* Unspecified */
    addParams(CX_5, "UPIN"); /* Medicare/HCFA's Universal Physician
				Identification numbers */
    addParams(CX_5, "VN");   /* Visit number */
    addParams(CX_5, "VS");   /* VISA */
    addParams(CX_5, "WC");   /* WIC identifier */
    addParams(CX_5, "WCN");  /* Workers' Comp Number */
    addParams(CX_5, "XX");   /* Organization identifier */
    addObject<HD>(CX_6, "CX.6", HL7::initialized, HL7::repetition_off);
    addObject<DT>(CX_7, "CX.7", HL7::initialized, HL7::repetition_off);
    addObject<DT>(CX_8, "CX.8", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * ID
   */
  ST *getCX_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CX_1);
  }

  ST *getID(size_t index = 0) { return (ST *)this->getObjectSafe(index, CX_1); }

  bool isCX_1(size_t index = 0) {
    try {
      return this->getObject(index, CX_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isID(size_t index = 0) {
    try {
      return this->getObject(index, CX_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * check digit (ST)
   */
  ST *getCX_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CX_2);
  }

  ST *getCheckDigit(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CX_2);
  }

  bool isCX_2(size_t index = 0) {
    try {
      return this->getObject(index, CX_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCheckDigit(size_t index = 0) {
    try {
      return this->getObject(index, CX_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * code identifying the check digit scheme employed
   */
  ID *getCX_3(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CX_3);
  }

  ID *getCodeIdentifyingTheCheckDigitSchemeEmployed(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CX_3);
  }

  bool isCX_3(size_t index = 0) {
    try {
      return this->getObject(index, CX_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCodeIdentifyingTheCheckDigitSchemeEmployed(size_t index = 0) {
    try {
      return this->getObject(index, CX_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * assigning authority
   */
  HD *getCX_4(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, CX_4);
  }

  HD *getAssigningAuthority(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, CX_4);
  }

  bool isCX_4(size_t index = 0) {
    try {
      return this->getObject(index, CX_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningAuthority(size_t index = 0) {
    try {
      return this->getObject(index, CX_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * identifier type code (ID)
   */
  ID *getCX_5(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CX_5);
  }

  ID *getIdentifierTypeCode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CX_5);
  }

  bool isCX_5(size_t index = 0) {
    try {
      return this->getObject(index, CX_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifierTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, CX_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * assigning facility
   */
  HD *getCX_6(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, CX_6);
  }

  HD *getAssigningFacility(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, CX_6);
  }

  bool isCX_6(size_t index = 0) {
    try {
      return this->getObject(index, CX_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningFacility(size_t index = 0) {
    try {
      return this->getObject(index, CX_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * effective date (DT)
   */
  DT *getCX_7(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, CX_7);
  }

  DT *getEffectiveDate(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, CX_7);
  }

  bool isCX_7(size_t index = 0) {
    try {
      return this->getObject(index, CX_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, CX_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * expiration date
   */
  DT *getCX_8(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, CX_8);
  }

  DT *getExpirationDate(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, CX_8);
  }

  bool isCX_8(size_t index = 0) {
    try {
      return this->getObject(index, CX_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, CX_8) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CX */

} /* End HL7_24 */

#endif /*__CX_v24_H__ */
