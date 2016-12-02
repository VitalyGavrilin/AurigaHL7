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


#ifndef __XPN_v24_H__
#define __XPN_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/DR.h"
#include "../datatype/FN.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* extended person name */
class XPN : public HL7Data {
 public:
  XPN() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    XPN_1,  /* family name */
    XPN_2,  /* given name */
    XPN_3,  /* second and further given names or initials thereof */
    XPN_4,  /* suffix (e.g., JR or III) */
    XPN_5,  /* prefix (e.g., DR) */
    XPN_6,  /* degree (e.g., MD) */
    XPN_7,  /* name type code */
    XPN_8,  /* Name Representation code */
    XPN_9,  /* name context */
    XPN_10, /* name validity range */
    XPN_11, /* name assembly order */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "XPN"; }
  XPN *create() const { return new XPN(); }

 private:
  void init() {
    // setName("XPN");
    /* Init members */
    addObject<FN>(XPN_1, "XPN.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XPN_2, "XPN.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XPN_3, "XPN.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XPN_4, "XPN.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XPN_5, "XPN.5", HL7::initialized, HL7::repetition_off);
    addObject<IS>(XPN_6, "XPN.6", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XPN_7, "XPN.7", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XPN_8, "XPN.8", HL7::initialized, HL7::repetition_off);
    addObject<CE>(XPN_9, "XPN.9", HL7::initialized, HL7::repetition_off);
    addObject<DR>(XPN_10, "XPN.10", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XPN_11, "XPN.11", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * family name
   */
  FN *getXPN_1(size_t index = 0) {
    return (FN *)this->getObjectSafe(index, XPN_1);
  }

  FN *getFamilyName(size_t index = 0) {
    return (FN *)this->getObjectSafe(index, XPN_1);
  }

  bool isXPN_1(size_t index = 0) {
    try {
      return this->getObject(index, XPN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFamilyName(size_t index = 0) {
    try {
      return this->getObject(index, XPN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * given name
   */
  ST *getXPN_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XPN_2);
  }

  ST *getGivenName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XPN_2);
  }

  bool isXPN_2(size_t index = 0) {
    try {
      return this->getObject(index, XPN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGivenName(size_t index = 0) {
    try {
      return this->getObject(index, XPN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * second and further given names or initials thereof
   */
  ST *getXPN_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XPN_3);
  }

  ST *getSecondAndFurtherGivenNamesOrInitialsThereof(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XPN_3);
  }

  bool isXPN_3(size_t index = 0) {
    try {
      return this->getObject(index, XPN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAndFurtherGivenNamesOrInitialsThereof(size_t index = 0) {
    try {
      return this->getObject(index, XPN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * suffix (e.g., JR or III)
   */
  ST *getXPN_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XPN_4);
  }

  ST *getSuffix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XPN_4);
  }

  bool isXPN_4(size_t index = 0) {
    try {
      return this->getObject(index, XPN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSuffix(size_t index = 0) {
    try {
      return this->getObject(index, XPN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * prefix (e.g., DR)
   */
  ST *getXPN_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XPN_5);
  }

  ST *getPrefix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XPN_5);
  }

  bool isXPN_5(size_t index = 0) {
    try {
      return this->getObject(index, XPN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrefix(size_t index = 0) {
    try {
      return this->getObject(index, XPN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * degree (e.g., MD)
   */
  IS *getXPN_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, XPN_6);
  }

  IS *getDegree(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, XPN_6);
  }

  bool isXPN_6(size_t index = 0) {
    try {
      return this->getObject(index, XPN_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDegree(size_t index = 0) {
    try {
      return this->getObject(index, XPN_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name type code
   */
  ID *getXPN_7(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XPN_7);
  }

  ID *getNameTypeCode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XPN_7);
  }

  bool isXPN_7(size_t index = 0) {
    try {
      return this->getObject(index, XPN_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, XPN_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name Representation code
   */
  ID *getXPN_8(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XPN_8);
  }

  ID *getNameRepresentationCode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XPN_8);
  }

  bool isXPN_8(size_t index = 0) {
    try {
      return this->getObject(index, XPN_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameRepresentationCode(size_t index = 0) {
    try {
      return this->getObject(index, XPN_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name context
   */
  CE *getXPN_9(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, XPN_9);
  }

  CE *getNameContext(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, XPN_9);
  }

  bool isXPN_9(size_t index = 0) {
    try {
      return this->getObject(index, XPN_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameContext(size_t index = 0) {
    try {
      return this->getObject(index, XPN_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name validity range
   */
  DR *getXPN_10(size_t index = 0) {
    return (DR *)this->getObjectSafe(index, XPN_10);
  }

  DR *getNameValidityRange(size_t index = 0) {
    return (DR *)this->getObjectSafe(index, XPN_10);
  }

  bool isXPN_10(size_t index = 0) {
    try {
      return this->getObject(index, XPN_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameValidityRange(size_t index = 0) {
    try {
      return this->getObject(index, XPN_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name assembly order
   */
  ID *getXPN_11(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XPN_11);
  }

  ID *getNameAssemblyOrder(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XPN_11);
  }

  bool isXPN_11(size_t index = 0) {
    try {
      return this->getObject(index, XPN_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameAssemblyOrder(size_t index = 0) {
    try {
      return this->getObject(index, XPN_11) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End XPN */

} /* End HL7_24 */

#endif /*__XPN_v24_H__ */
