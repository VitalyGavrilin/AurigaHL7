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


#ifndef __CN_v24_H__
#define __CN_v24_H__

#include "../../common/Util.h"
#include "../datatype/FN.h"
#include "../datatype/HD.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* composite ID number and name */
class CN : public HL7Data {
 public:
  CN() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CN_1, /* ID number (ST) */
    CN_2, /* family name */
    CN_3, /* given name */
    CN_4, /* second and further given names or initials thereof */
    CN_5, /* suffix (e.g., JR or III) */
    CN_6, /* prefix (e.g., DR) */
    CN_7, /* degree (e.g., MD) */
    CN_8, /* source table */
    CN_9, /* assigning authority */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CN"; }
  CN *create() const { return new CN(); }

 private:
  void init() {
    // setName("CN");
    /* Init members */
    addObject<ST>(CN_1, "CN.1", HL7::initialized, HL7::repetition_off);
    addObject<FN>(CN_2, "CN.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CN_3, "CN.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CN_4, "CN.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CN_5, "CN.5", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CN_6, "CN.6", HL7::initialized, HL7::repetition_off);
    addObject<IS>(CN_7, "CN.7", HL7::initialized, HL7::repetition_off);
    addObject<IS>(CN_8, "CN.8", HL7::initialized, HL7::repetition_off);
    addObject<HD>(CN_9, "CN.9", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * ID number (ST)
   */
  ST *getCN_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CN_1);
  }

  ST *getIDNumber(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CN_1);
  }

  bool isCN_1(size_t index = 0) {
    try {
      return this->getObject(index, CN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIDNumber(size_t index = 0) {
    try {
      return this->getObject(index, CN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * family name
   */
  FN *getCN_2(size_t index = 0) {
    return (FN *)this->getObjectSafe(index, CN_2);
  }

  FN *getFamilyName(size_t index = 0) {
    return (FN *)this->getObjectSafe(index, CN_2);
  }

  bool isCN_2(size_t index = 0) {
    try {
      return this->getObject(index, CN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFamilyName(size_t index = 0) {
    try {
      return this->getObject(index, CN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * given name
   */
  ST *getCN_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CN_3);
  }

  ST *getGivenName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CN_3);
  }

  bool isCN_3(size_t index = 0) {
    try {
      return this->getObject(index, CN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGivenName(size_t index = 0) {
    try {
      return this->getObject(index, CN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * second and further given names or initials thereof
   */
  ST *getCN_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CN_4);
  }

  ST *getSecondAndFurtherGivenNamesOrInitialsThereof(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CN_4);
  }

  bool isCN_4(size_t index = 0) {
    try {
      return this->getObject(index, CN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAndFurtherGivenNamesOrInitialsThereof(size_t index = 0) {
    try {
      return this->getObject(index, CN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * suffix (e.g., JR or III)
   */
  ST *getCN_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CN_5);
  }

  ST *getSuffix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CN_5);
  }

  bool isCN_5(size_t index = 0) {
    try {
      return this->getObject(index, CN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSuffix(size_t index = 0) {
    try {
      return this->getObject(index, CN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * prefix (e.g., DR)
   */
  ST *getCN_6(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CN_6);
  }

  ST *getPrefix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CN_6);
  }

  bool isCN_6(size_t index = 0) {
    try {
      return this->getObject(index, CN_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrefix(size_t index = 0) {
    try {
      return this->getObject(index, CN_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * degree (e.g., MD)
   */
  IS *getCN_7(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CN_7);
  }

  IS *getDegree(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CN_7);
  }

  bool isCN_7(size_t index = 0) {
    try {
      return this->getObject(index, CN_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDegree(size_t index = 0) {
    try {
      return this->getObject(index, CN_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * source table
   */
  IS *getCN_8(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CN_8);
  }

  IS *getSourceTable(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CN_8);
  }

  bool isCN_8(size_t index = 0) {
    try {
      return this->getObject(index, CN_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourceTable(size_t index = 0) {
    try {
      return this->getObject(index, CN_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * assigning authority
   */
  HD *getCN_9(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, CN_9);
  }

  HD *getAssigningAuthority(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, CN_9);
  }

  bool isCN_9(size_t index = 0) {
    try {
      return this->getObject(index, CN_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningAuthority(size_t index = 0) {
    try {
      return this->getObject(index, CN_9) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CN */

} /* End HL7_24 */

#endif /*__CN_v24_H__ */
