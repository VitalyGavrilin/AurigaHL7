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


#ifndef __PN_v24_H__
#define __PN_v24_H__

#include "../../common/Util.h"
#include "../datatype/FN.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* person name */
class PN : public HL7Data {
 public:
  PN() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    PN_1, /* family name */
    PN_2, /* given name */
    PN_3, /* second and further given names or initials thereof */
    PN_4, /* suffix (e.g., JR or III) */
    PN_5, /* prefix (e.g., DR) */
    PN_6, /* degree (e.g., MD) */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "PN"; }
  PN *create() const { return new PN(); }

 private:
  void init() {
    // setName("PN");
    /* Init members */
    addObject<FN>(PN_1, "PN.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PN_2, "PN.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PN_3, "PN.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PN_4, "PN.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PN_5, "PN.5", HL7::initialized, HL7::repetition_off);
    addObject<IS>(PN_6, "PN.6", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * family name
   */
  FN *getPN_1(size_t index = 0) {
    return (FN *)this->getObjectSafe(index, PN_1);
  }

  FN *getFamilyName(size_t index = 0) {
    return (FN *)this->getObjectSafe(index, PN_1);
  }

  bool isPN_1(size_t index = 0) {
    try {
      return this->getObject(index, PN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFamilyName(size_t index = 0) {
    try {
      return this->getObject(index, PN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * given name
   */
  ST *getPN_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PN_2);
  }

  ST *getGivenName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PN_2);
  }

  bool isPN_2(size_t index = 0) {
    try {
      return this->getObject(index, PN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGivenName(size_t index = 0) {
    try {
      return this->getObject(index, PN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * second and further given names or initials thereof
   */
  ST *getPN_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PN_3);
  }

  ST *getSecondAndFurtherGivenNamesOrInitialsThereof(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PN_3);
  }

  bool isPN_3(size_t index = 0) {
    try {
      return this->getObject(index, PN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAndFurtherGivenNamesOrInitialsThereof(size_t index = 0) {
    try {
      return this->getObject(index, PN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * suffix (e.g., JR or III)
   */
  ST *getPN_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PN_4);
  }

  ST *getSuffix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PN_4);
  }

  bool isPN_4(size_t index = 0) {
    try {
      return this->getObject(index, PN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSuffix(size_t index = 0) {
    try {
      return this->getObject(index, PN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * prefix (e.g., DR)
   */
  ST *getPN_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PN_5);
  }

  ST *getPrefix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PN_5);
  }

  bool isPN_5(size_t index = 0) {
    try {
      return this->getObject(index, PN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrefix(size_t index = 0) {
    try {
      return this->getObject(index, PN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * degree (e.g., MD)
   */
  IS *getPN_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PN_6);
  }

  IS *getDegree(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PN_6);
  }

  bool isPN_6(size_t index = 0) {
    try {
      return this->getObject(index, PN_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDegree(size_t index = 0) {
    try {
      return this->getObject(index, PN_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End PN */

} /* End HL7_24 */

#endif /*__PN_v24_H__ */
