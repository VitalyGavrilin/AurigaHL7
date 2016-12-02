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


#ifndef __CK_v24_H__
#define __CK_v24_H__

#include "../../common/Util.h"
#include "../datatype/HD.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"

namespace HL7_24 {

/* composite ID with check digit */
class CK : public HL7Data {
 public:
  CK() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CK_1, /* ID number (NM) */
    CK_2, /* check digit (NM) */
    CK_3, /* code identifying the check digit scheme employed */
    CK_4, /* assigning authority */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CK"; }
  CK *create() const { return new CK(); }

 private:
  void init() {
    // setName("CK");
    /* Init members */
    addObject<NM>(CK_1, "CK.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(CK_2, "CK.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CK_3, "CK.3", HL7::initialized, HL7::repetition_off);
    addObject<HD>(CK_4, "CK.4", HL7::initialized, HL7::repetition_off);
    addParams(CK_4, "AUSDVA"); /* Australia - Dept. of Veterans Affairs */
    addParams(CK_4, "AUSHIC"); /* Australia - Health Insurance Commission */
    addParams(CK_4, "CANAB");  /* Canada - Alberta */
    addParams(CK_4, "CANBC");  /* Canada - British Columbia */
    addParams(CK_4, "CANMB");  /* Canada - Manitoba */
    addParams(CK_4, "CANNB");  /* Canada - New Brunswick */
    addParams(CK_4, "CANNF");  /* Canada - Newfoundland */
    addParams(CK_4, "CANNS");  /* Canada - Nova Scotia */
    addParams(CK_4, "CANNT");  /* Canada - Northwest Territories */
    addParams(CK_4, "CANNU");  /* Canada - Nanavut */
    addParams(CK_4, "CANON");  /* Canada - Ontario */
    addParams(CK_4, "CANPE");  /* Canada - Prince Edward Island */
    addParams(CK_4, "CANQC");  /* Canada - Quebec */
    addParams(CK_4, "CANSK");  /* Canada - Saskatchewan */
    addParams(CK_4, "CANYT");  /* Canada - Yukon Territories */
    addParams(
	CK_4,
	"NLVWS"); /* NL - Ministerie van Volksgezondheid, Welzijn en Sport */
    addParams(CK_4, "USCDC");  /* US Center for Disease Control */
    addParams(CK_4, "USHCFA"); /* US Healthcare Finance Authority */
    addParams(CK_4, "USSSA");  /* US Social Security Administration */
  }

 public:
  /* Getters */
  /****************************************
   * ID number (NM)
   */
  NM *getCK_1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CK_1);
  }

  NM *getIDNumber(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CK_1);
  }

  bool isCK_1(size_t index = 0) {
    try {
      return this->getObject(index, CK_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIDNumber(size_t index = 0) {
    try {
      return this->getObject(index, CK_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * check digit (NM)
   */
  NM *getCK_2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CK_2);
  }

  NM *getCheckDigit(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CK_2);
  }

  bool isCK_2(size_t index = 0) {
    try {
      return this->getObject(index, CK_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCheckDigit(size_t index = 0) {
    try {
      return this->getObject(index, CK_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * code identifying the check digit scheme employed
   */
  ID *getCK_3(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CK_3);
  }

  ID *getCodeIdentifyingTheCheckDigitSchemeEmployed(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CK_3);
  }

  bool isCK_3(size_t index = 0) {
    try {
      return this->getObject(index, CK_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCodeIdentifyingTheCheckDigitSchemeEmployed(size_t index = 0) {
    try {
      return this->getObject(index, CK_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * assigning authority
   */
  HD *getCK_4(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, CK_4);
  }

  HD *getAssigningAuthority(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, CK_4);
  }

  bool isCK_4(size_t index = 0) {
    try {
      return this->getObject(index, CK_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningAuthority(size_t index = 0) {
    try {
      return this->getObject(index, CK_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CK */

} /* End HL7_24 */

#endif /*__CK_v24_H__ */
