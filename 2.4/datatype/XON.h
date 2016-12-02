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


#ifndef __XON_v24_H__
#define __XON_v24_H__

#include "../../common/Util.h"
#include "../datatype/HD.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* extended composite name and identification number for organizations */
class XON : public HL7Data {
 public:
  XON() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    XON_1, /* organization name */
    XON_2, /* organization name type code */
    XON_3, /* ID number (NM) */
    XON_4, /* check digit (NM) */
    XON_5, /* code identifying the check digit scheme employed */
    XON_6, /* assigning authority */
    XON_7, /* identifier type code (IS) */
    XON_8, /* assigning facility ID */
    XON_9, /* Name Representation code */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "XON"; }
  XON *create() const { return new XON(); }

 private:
  void init() {
    // setName("XON");
    /* Init members */
    addObject<ST>(XON_1, "XON.1", HL7::initialized, HL7::repetition_off);
    addObject<IS>(XON_2, "XON.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(XON_3, "XON.3", HL7::initialized, HL7::repetition_off);
    addObject<NM>(XON_4, "XON.4", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XON_5, "XON.5", HL7::initialized, HL7::repetition_off);
    addObject<HD>(XON_6, "XON.6", HL7::initialized, HL7::repetition_off);
    addObject<IS>(XON_7, "XON.7", HL7::initialized, HL7::repetition_off);
    addObject<HD>(XON_8, "XON.8", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XON_9, "XON.9", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * organization name
   */
  ST *getXON_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XON_1);
  }

  ST *getOrganizationName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XON_1);
  }

  bool isXON_1(size_t index = 0) {
    try {
      return this->getObject(index, XON_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrganizationName(size_t index = 0) {
    try {
      return this->getObject(index, XON_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * organization name type code
   */
  IS *getXON_2(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, XON_2);
  }

  IS *getOrganizationNameTypeCode(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, XON_2);
  }

  bool isXON_2(size_t index = 0) {
    try {
      return this->getObject(index, XON_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrganizationNameTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, XON_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * ID number (NM)
   */
  NM *getXON_3(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, XON_3);
  }

  NM *getIDNumber(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, XON_3);
  }

  bool isXON_3(size_t index = 0) {
    try {
      return this->getObject(index, XON_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIDNumber(size_t index = 0) {
    try {
      return this->getObject(index, XON_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * check digit (NM)
   */
  NM *getXON_4(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, XON_4);
  }

  NM *getCheckDigit(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, XON_4);
  }

  bool isXON_4(size_t index = 0) {
    try {
      return this->getObject(index, XON_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCheckDigit(size_t index = 0) {
    try {
      return this->getObject(index, XON_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * code identifying the check digit scheme employed
   */
  ID *getXON_5(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XON_5);
  }

  ID *getCodeIdentifyingTheCheckDigitSchemeEmployed(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XON_5);
  }

  bool isXON_5(size_t index = 0) {
    try {
      return this->getObject(index, XON_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCodeIdentifyingTheCheckDigitSchemeEmployed(size_t index = 0) {
    try {
      return this->getObject(index, XON_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * assigning authority
   */
  HD *getXON_6(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, XON_6);
  }

  HD *getAssigningAuthority(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, XON_6);
  }

  bool isXON_6(size_t index = 0) {
    try {
      return this->getObject(index, XON_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningAuthority(size_t index = 0) {
    try {
      return this->getObject(index, XON_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * identifier type code (IS)
   */
  IS *getXON_7(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, XON_7);
  }

  IS *getIdentifierTypeCode(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, XON_7);
  }

  bool isXON_7(size_t index = 0) {
    try {
      return this->getObject(index, XON_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifierTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, XON_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * assigning facility ID
   */
  HD *getXON_8(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, XON_8);
  }

  HD *getAssigningFacilityID(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, XON_8);
  }

  bool isXON_8(size_t index = 0) {
    try {
      return this->getObject(index, XON_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningFacilityID(size_t index = 0) {
    try {
      return this->getObject(index, XON_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name Representation code
   */
  ID *getXON_9(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XON_9);
  }

  ID *getNameRepresentationCode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XON_9);
  }

  bool isXON_9(size_t index = 0) {
    try {
      return this->getObject(index, XON_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameRepresentationCode(size_t index = 0) {
    try {
      return this->getObject(index, XON_9) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End XON */

} /* End HL7_24 */

#endif /*__XON_v24_H__ */
