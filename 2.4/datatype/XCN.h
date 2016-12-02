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


#ifndef __XCN_v24_H__
#define __XCN_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/DR.h"
#include "../datatype/FN.h"
#include "../datatype/HD.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* extended composite ID number and name for persons */
class XCN : public HL7Data {
 public:
  XCN() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    XCN_1,  /* ID number (ST) */
    XCN_2,  /* family name */
    XCN_3,  /* given name */
    XCN_4,  /* second and further given names or initials thereof */
    XCN_5,  /* suffix (e.g., JR or III) */
    XCN_6,  /* prefix (e.g., DR) */
    XCN_7,  /* degree (e.g., MD) */
    XCN_8,  /* source table */
    XCN_9,  /* assigning authority */
    XCN_10, /* name type code */
    XCN_11, /* identifier check digit */
    XCN_12, /* code identifying the check digit scheme employed */
    XCN_13, /* identifier type code (IS) */
    XCN_14, /* assigning facility */
    XCN_15, /* Name Representation code */
    XCN_16, /* name context */
    XCN_17, /* name validity range */
    XCN_18, /* name assembly order */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "XCN"; }
  XCN *create() const { return new XCN(); }

 private:
  void init() {
    // setName("XCN");
    /* Init members */
    addObject<ST>(XCN_1, "XCN.1", HL7::initialized, HL7::repetition_off);
    addObject<FN>(XCN_2, "XCN.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XCN_3, "XCN.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XCN_4, "XCN.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XCN_5, "XCN.5", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XCN_6, "XCN.6", HL7::initialized, HL7::repetition_off);
    addObject<IS>(XCN_7, "XCN.7", HL7::initialized, HL7::repetition_off);
    addObject<IS>(XCN_8, "XCN.8", HL7::initialized, HL7::repetition_off);
    addObject<HD>(XCN_9, "XCN.9", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XCN_10, "XCN.10", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XCN_11, "XCN.11", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XCN_12, "XCN.12", HL7::initialized, HL7::repetition_off);
    addObject<IS>(XCN_13, "XCN.13", HL7::initialized, HL7::repetition_off);
    addObject<HD>(XCN_14, "XCN.14", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XCN_15, "XCN.15", HL7::initialized, HL7::repetition_off);
    addObject<CE>(XCN_16, "XCN.16", HL7::initialized, HL7::repetition_off);
    addObject<DR>(XCN_17, "XCN.17", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XCN_18, "XCN.18", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * ID number (ST)
   */
  ST *getXCN_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_1);
  }

  ST *getIDNumber(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_1);
  }

  bool isXCN_1(size_t index = 0) {
    try {
      return this->getObject(index, XCN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIDNumber(size_t index = 0) {
    try {
      return this->getObject(index, XCN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * family name
   */
  FN *getXCN_2(size_t index = 0) {
    return (FN *)this->getObjectSafe(index, XCN_2);
  }

  FN *getFamilyName(size_t index = 0) {
    return (FN *)this->getObjectSafe(index, XCN_2);
  }

  bool isXCN_2(size_t index = 0) {
    try {
      return this->getObject(index, XCN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFamilyName(size_t index = 0) {
    try {
      return this->getObject(index, XCN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * given name
   */
  ST *getXCN_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_3);
  }

  ST *getGivenName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_3);
  }

  bool isXCN_3(size_t index = 0) {
    try {
      return this->getObject(index, XCN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGivenName(size_t index = 0) {
    try {
      return this->getObject(index, XCN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * second and further given names or initials thereof
   */
  ST *getXCN_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_4);
  }

  ST *getSecondAndFurtherGivenNamesOrInitialsThereof(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_4);
  }

  bool isXCN_4(size_t index = 0) {
    try {
      return this->getObject(index, XCN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAndFurtherGivenNamesOrInitialsThereof(size_t index = 0) {
    try {
      return this->getObject(index, XCN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * suffix (e.g., JR or III)
   */
  ST *getXCN_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_5);
  }

  ST *getSuffix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_5);
  }

  bool isXCN_5(size_t index = 0) {
    try {
      return this->getObject(index, XCN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSuffix(size_t index = 0) {
    try {
      return this->getObject(index, XCN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * prefix (e.g., DR)
   */
  ST *getXCN_6(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_6);
  }

  ST *getPrefix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_6);
  }

  bool isXCN_6(size_t index = 0) {
    try {
      return this->getObject(index, XCN_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrefix(size_t index = 0) {
    try {
      return this->getObject(index, XCN_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * degree (e.g., MD)
   */
  IS *getXCN_7(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, XCN_7);
  }

  IS *getDegree(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, XCN_7);
  }

  bool isXCN_7(size_t index = 0) {
    try {
      return this->getObject(index, XCN_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDegree(size_t index = 0) {
    try {
      return this->getObject(index, XCN_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * source table
   */
  IS *getXCN_8(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, XCN_8);
  }

  IS *getSourceTable(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, XCN_8);
  }

  bool isXCN_8(size_t index = 0) {
    try {
      return this->getObject(index, XCN_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourceTable(size_t index = 0) {
    try {
      return this->getObject(index, XCN_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * assigning authority
   */
  HD *getXCN_9(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, XCN_9);
  }

  HD *getAssigningAuthority(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, XCN_9);
  }

  bool isXCN_9(size_t index = 0) {
    try {
      return this->getObject(index, XCN_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningAuthority(size_t index = 0) {
    try {
      return this->getObject(index, XCN_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name type code
   */
  ID *getXCN_10(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XCN_10);
  }

  ID *getNameTypeCode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XCN_10);
  }

  bool isXCN_10(size_t index = 0) {
    try {
      return this->getObject(index, XCN_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, XCN_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * identifier check digit
   */
  ST *getXCN_11(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_11);
  }

  ST *getIdentifierCheckDigit(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_11);
  }

  bool isXCN_11(size_t index = 0) {
    try {
      return this->getObject(index, XCN_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifierCheckDigit(size_t index = 0) {
    try {
      return this->getObject(index, XCN_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * code identifying the check digit scheme employed
   */
  ID *getXCN_12(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XCN_12);
  }

  ID *getCodeIdentifyingTheCheckDigitSchemeEmployed(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XCN_12);
  }

  bool isXCN_12(size_t index = 0) {
    try {
      return this->getObject(index, XCN_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCodeIdentifyingTheCheckDigitSchemeEmployed(size_t index = 0) {
    try {
      return this->getObject(index, XCN_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * identifier type code (IS)
   */
  IS *getXCN_13(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, XCN_13);
  }

  IS *getIdentifierTypeCode(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, XCN_13);
  }

  bool isXCN_13(size_t index = 0) {
    try {
      return this->getObject(index, XCN_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifierTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, XCN_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * assigning facility
   */
  HD *getXCN_14(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, XCN_14);
  }

  HD *getAssigningFacility(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, XCN_14);
  }

  bool isXCN_14(size_t index = 0) {
    try {
      return this->getObject(index, XCN_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningFacility(size_t index = 0) {
    try {
      return this->getObject(index, XCN_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name Representation code
   */
  ID *getXCN_15(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XCN_15);
  }

  ID *getNameRepresentationCode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XCN_15);
  }

  bool isXCN_15(size_t index = 0) {
    try {
      return this->getObject(index, XCN_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameRepresentationCode(size_t index = 0) {
    try {
      return this->getObject(index, XCN_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name context
   */
  CE *getXCN_16(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, XCN_16);
  }

  CE *getNameContext(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, XCN_16);
  }

  bool isXCN_16(size_t index = 0) {
    try {
      return this->getObject(index, XCN_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameContext(size_t index = 0) {
    try {
      return this->getObject(index, XCN_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name validity range
   */
  DR *getXCN_17(size_t index = 0) {
    return (DR *)this->getObjectSafe(index, XCN_17);
  }

  DR *getNameValidityRange(size_t index = 0) {
    return (DR *)this->getObjectSafe(index, XCN_17);
  }

  bool isXCN_17(size_t index = 0) {
    try {
      return this->getObject(index, XCN_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameValidityRange(size_t index = 0) {
    try {
      return this->getObject(index, XCN_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name assembly order
   */
  ID *getXCN_18(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XCN_18);
  }

  ID *getNameAssemblyOrder(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XCN_18);
  }

  bool isXCN_18(size_t index = 0) {
    try {
      return this->getObject(index, XCN_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameAssemblyOrder(size_t index = 0) {
    try {
      return this->getObject(index, XCN_18) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End XCN */

} /* End HL7_24 */

#endif /*__XCN_v24_H__ */
