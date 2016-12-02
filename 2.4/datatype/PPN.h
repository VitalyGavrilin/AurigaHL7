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


#ifndef __PPN_v24_H__
#define __PPN_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/DR.h"
#include "../datatype/FN.h"
#include "../datatype/HD.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* performing person time stamp */
class PPN : public HL7Data {
 public:
  PPN() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    PPN_1,  /* ID number (ST) */
    PPN_2,  /* family name */
    PPN_3,  /* given name */
    PPN_4,  /* second and further given names or initials thereof */
    PPN_5,  /* suffix (e.g., JR or III) */
    PPN_6,  /* prefix (e.g., DR) */
    PPN_7,  /* degree (e.g., MD) */
    PPN_8,  /* source table */
    PPN_9,  /* assigning authority */
    PPN_10, /* name type code */
    PPN_11, /* identifier check digit */
    PPN_12, /* code identifying the check digit scheme employed */
    PPN_13, /* identifier type code (IS) */
    PPN_14, /* assigning facility */
    PPN_15, /* Date/Time Action Performed */
    PPN_16, /* Name Representation code */
    PPN_17, /* name context */
    PPN_18, /* name validity range */
    PPN_19, /* name assembly order */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "PPN"; }
  PPN *create() const { return new PPN(); }

 private:
  void init() {
    // setName("PPN");
    /* Init members */
    addObject<ST>(PPN_1, "PPN.1", HL7::initialized, HL7::repetition_off);
    addObject<FN>(PPN_2, "PPN.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PPN_3, "PPN.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PPN_4, "PPN.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PPN_5, "PPN.5", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PPN_6, "PPN.6", HL7::initialized, HL7::repetition_off);
    addObject<IS>(PPN_7, "PPN.7", HL7::initialized, HL7::repetition_off);
    addObject<IS>(PPN_8, "PPN.8", HL7::initialized, HL7::repetition_off);
    addObject<HD>(PPN_9, "PPN.9", HL7::initialized, HL7::repetition_off);
    addParams(PPN_9, "AUSDVA"); /* Australia - Dept. of Veterans Affairs */
    addParams(PPN_9, "AUSHIC"); /* Australia - Health Insurance Commission */
    addParams(PPN_9, "CANAB");  /* Canada - Alberta */
    addParams(PPN_9, "CANBC");  /* Canada - British Columbia */
    addParams(PPN_9, "CANMB");  /* Canada - Manitoba */
    addParams(PPN_9, "CANNB");  /* Canada - New Brunswick */
    addParams(PPN_9, "CANNF");  /* Canada - Newfoundland */
    addParams(PPN_9, "CANNS");  /* Canada - Nova Scotia */
    addParams(PPN_9, "CANNT");  /* Canada - Northwest Territories */
    addParams(PPN_9, "CANNU");  /* Canada - Nanavut */
    addParams(PPN_9, "CANON");  /* Canada - Ontario */
    addParams(PPN_9, "CANPE");  /* Canada - Prince Edward Island */
    addParams(PPN_9, "CANQC");  /* Canada - Quebec */
    addParams(PPN_9, "CANSK");  /* Canada - Saskatchewan */
    addParams(PPN_9, "CANYT");  /* Canada - Yukon Territories */
    addParams(
	PPN_9,
	"NLVWS"); /* NL - Ministerie van Volksgezondheid, Welzijn en Sport */
    addParams(PPN_9, "USCDC");  /* US Center for Disease Control */
    addParams(PPN_9, "USHCFA"); /* US Healthcare Finance Authority */
    addParams(PPN_9, "USSSA");  /* US Social Security Administration */
    addObject<ID>(PPN_10, "PPN.10", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PPN_11, "PPN.11", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PPN_12, "PPN.12", HL7::initialized, HL7::repetition_off);
    addObject<IS>(PPN_13, "PPN.13", HL7::initialized, HL7::repetition_off);
    addObject<HD>(PPN_14, "PPN.14", HL7::initialized, HL7::repetition_off);
    addObject<TS>(PPN_15, "PPN.15", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PPN_16, "PPN.16", HL7::initialized, HL7::repetition_off);
    addObject<CE>(PPN_17, "PPN.17", HL7::initialized, HL7::repetition_off);
    addObject<DR>(PPN_18, "PPN.18", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PPN_19, "PPN.19", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * ID number (ST)
   */
  ST *getPPN_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_1);
  }

  ST *getIDNumber(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_1);
  }

  bool isPPN_1(size_t index = 0) {
    try {
      return this->getObject(index, PPN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIDNumber(size_t index = 0) {
    try {
      return this->getObject(index, PPN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * family name
   */
  FN *getPPN_2(size_t index = 0) {
    return (FN *)this->getObjectSafe(index, PPN_2);
  }

  FN *getFamilyName(size_t index = 0) {
    return (FN *)this->getObjectSafe(index, PPN_2);
  }

  bool isPPN_2(size_t index = 0) {
    try {
      return this->getObject(index, PPN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFamilyName(size_t index = 0) {
    try {
      return this->getObject(index, PPN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * given name
   */
  ST *getPPN_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_3);
  }

  ST *getGivenName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_3);
  }

  bool isPPN_3(size_t index = 0) {
    try {
      return this->getObject(index, PPN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGivenName(size_t index = 0) {
    try {
      return this->getObject(index, PPN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * second and further given names or initials thereof
   */
  ST *getPPN_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_4);
  }

  ST *getSecondAndFurtherGivenNamesOrInitialsThereof(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_4);
  }

  bool isPPN_4(size_t index = 0) {
    try {
      return this->getObject(index, PPN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAndFurtherGivenNamesOrInitialsThereof(size_t index = 0) {
    try {
      return this->getObject(index, PPN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * suffix (e.g., JR or III)
   */
  ST *getPPN_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_5);
  }

  ST *getSuffix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_5);
  }

  bool isPPN_5(size_t index = 0) {
    try {
      return this->getObject(index, PPN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSuffix(size_t index = 0) {
    try {
      return this->getObject(index, PPN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * prefix (e.g., DR)
   */
  ST *getPPN_6(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_6);
  }

  ST *getPrefix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_6);
  }

  bool isPPN_6(size_t index = 0) {
    try {
      return this->getObject(index, PPN_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrefix(size_t index = 0) {
    try {
      return this->getObject(index, PPN_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * degree (e.g., MD)
   */
  IS *getPPN_7(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PPN_7);
  }

  IS *getDegree(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PPN_7);
  }

  bool isPPN_7(size_t index = 0) {
    try {
      return this->getObject(index, PPN_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDegree(size_t index = 0) {
    try {
      return this->getObject(index, PPN_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * source table
   */
  IS *getPPN_8(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PPN_8);
  }

  IS *getSourceTable(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PPN_8);
  }

  bool isPPN_8(size_t index = 0) {
    try {
      return this->getObject(index, PPN_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourceTable(size_t index = 0) {
    try {
      return this->getObject(index, PPN_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * assigning authority
   */
  HD *getPPN_9(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, PPN_9);
  }

  HD *getAssigningAuthority(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, PPN_9);
  }

  bool isPPN_9(size_t index = 0) {
    try {
      return this->getObject(index, PPN_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningAuthority(size_t index = 0) {
    try {
      return this->getObject(index, PPN_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name type code
   */
  ID *getPPN_10(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PPN_10);
  }

  ID *getNameTypeCode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PPN_10);
  }

  bool isPPN_10(size_t index = 0) {
    try {
      return this->getObject(index, PPN_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, PPN_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * identifier check digit
   */
  ST *getPPN_11(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_11);
  }

  ST *getIdentifierCheckDigit(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_11);
  }

  bool isPPN_11(size_t index = 0) {
    try {
      return this->getObject(index, PPN_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifierCheckDigit(size_t index = 0) {
    try {
      return this->getObject(index, PPN_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * code identifying the check digit scheme employed
   */
  ID *getPPN_12(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PPN_12);
  }

  ID *getCodeIdentifyingTheCheckDigitSchemeEmployed(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PPN_12);
  }

  bool isPPN_12(size_t index = 0) {
    try {
      return this->getObject(index, PPN_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCodeIdentifyingTheCheckDigitSchemeEmployed(size_t index = 0) {
    try {
      return this->getObject(index, PPN_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * identifier type code (IS)
   */
  IS *getPPN_13(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PPN_13);
  }

  IS *getIdentifierTypeCode(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PPN_13);
  }

  bool isPPN_13(size_t index = 0) {
    try {
      return this->getObject(index, PPN_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifierTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, PPN_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * assigning facility
   */
  HD *getPPN_14(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, PPN_14);
  }

  HD *getAssigningFacility(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, PPN_14);
  }

  bool isPPN_14(size_t index = 0) {
    try {
      return this->getObject(index, PPN_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningFacility(size_t index = 0) {
    try {
      return this->getObject(index, PPN_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time Action Performed
   */
  TS *getPPN_15(size_t index = 0) {
    return (TS *)this->getObjectSafe(index, PPN_15);
  }

  TS *getDateTimeActionPerformed(size_t index = 0) {
    return (TS *)this->getObjectSafe(index, PPN_15);
  }

  bool isPPN_15(size_t index = 0) {
    try {
      return this->getObject(index, PPN_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeActionPerformed(size_t index = 0) {
    try {
      return this->getObject(index, PPN_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name Representation code
   */
  ID *getPPN_16(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PPN_16);
  }

  ID *getNameRepresentationCode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PPN_16);
  }

  bool isPPN_16(size_t index = 0) {
    try {
      return this->getObject(index, PPN_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameRepresentationCode(size_t index = 0) {
    try {
      return this->getObject(index, PPN_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name context
   */
  CE *getPPN_17(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, PPN_17);
  }

  CE *getNameContext(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, PPN_17);
  }

  bool isPPN_17(size_t index = 0) {
    try {
      return this->getObject(index, PPN_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameContext(size_t index = 0) {
    try {
      return this->getObject(index, PPN_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name validity range
   */
  DR *getPPN_18(size_t index = 0) {
    return (DR *)this->getObjectSafe(index, PPN_18);
  }

  DR *getNameValidityRange(size_t index = 0) {
    return (DR *)this->getObjectSafe(index, PPN_18);
  }

  bool isPPN_18(size_t index = 0) {
    try {
      return this->getObject(index, PPN_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameValidityRange(size_t index = 0) {
    try {
      return this->getObject(index, PPN_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name assembly order
   */
  ID *getPPN_19(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PPN_19);
  }

  ID *getNameAssemblyOrder(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PPN_19);
  }

  bool isPPN_19(size_t index = 0) {
    try {
      return this->getObject(index, PPN_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameAssemblyOrder(size_t index = 0) {
    try {
      return this->getObject(index, PPN_19) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End PPN */

} /* End HL7_24 */

#endif /*__PPN_v24_H__ */
