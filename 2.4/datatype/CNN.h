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


#ifndef __CNN_v24_H__
#define __CNN_v24_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* composite ID number and name (special DT for NDL) */
class CNN : public HL7Data {
 public:
  CNN() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CNN_1,  /* ID number (ST) */
    CNN_2,  /* family name */
    CNN_3,  /* given name */
    CNN_4,  /* second and further given names or initials thereof */
    CNN_5,  /* suffix (e.g., JR or III) */
    CNN_6,  /* prefix (e.g., DR) */
    CNN_7,  /* degree (e.g., MD) */
    CNN_8,  /* source table */
    CNN_9,  /* assigning authority namespace ID */
    CNN_10, /* assigning authority universal ID */
    CNN_11, /* assigning authority universal ID type */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CNN"; }
  CNN *create() const { return new CNN(); }

 private:
  void init() {
    // setName("CNN");
    /* Init members */
    addObject<ST>(CNN_1, "CNN.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNN_2, "CNN.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNN_3, "CNN.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNN_4, "CNN.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNN_5, "CNN.5", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNN_6, "CNN.6", HL7::initialized, HL7::repetition_off);
    addObject<IS>(CNN_7, "CNN.7", HL7::initialized, HL7::repetition_off);
    addObject<IS>(CNN_8, "CNN.8", HL7::initialized, HL7::repetition_off);
    addObject<IS>(CNN_9, "CNN.9", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNN_10, "CNN.10", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CNN_11, "CNN.11", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * ID number (ST)
   */
  ST *getCNN_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNN_1);
  }

  ST *getIDNumber(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNN_1);
  }

  bool isCNN_1(size_t index = 0) {
    try {
      return this->getObject(index, CNN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIDNumber(size_t index = 0) {
    try {
      return this->getObject(index, CNN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * family name
   */
  ST *getCNN_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNN_2);
  }

  ST *getFamilyName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNN_2);
  }

  bool isCNN_2(size_t index = 0) {
    try {
      return this->getObject(index, CNN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFamilyName(size_t index = 0) {
    try {
      return this->getObject(index, CNN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * given name
   */
  ST *getCNN_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNN_3);
  }

  ST *getGivenName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNN_3);
  }

  bool isCNN_3(size_t index = 0) {
    try {
      return this->getObject(index, CNN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGivenName(size_t index = 0) {
    try {
      return this->getObject(index, CNN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * second and further given names or initials thereof
   */
  ST *getCNN_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNN_4);
  }

  ST *getSecondAndFurtherGivenNamesOrInitialsThereof(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNN_4);
  }

  bool isCNN_4(size_t index = 0) {
    try {
      return this->getObject(index, CNN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAndFurtherGivenNamesOrInitialsThereof(size_t index = 0) {
    try {
      return this->getObject(index, CNN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * suffix (e.g., JR or III)
   */
  ST *getCNN_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNN_5);
  }

  ST *getSuffix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNN_5);
  }

  bool isCNN_5(size_t index = 0) {
    try {
      return this->getObject(index, CNN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSuffix(size_t index = 0) {
    try {
      return this->getObject(index, CNN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * prefix (e.g., DR)
   */
  ST *getCNN_6(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNN_6);
  }

  ST *getPrefix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNN_6);
  }

  bool isCNN_6(size_t index = 0) {
    try {
      return this->getObject(index, CNN_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrefix(size_t index = 0) {
    try {
      return this->getObject(index, CNN_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * degree (e.g., MD)
   */
  IS *getCNN_7(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CNN_7);
  }

  IS *getDegree(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CNN_7);
  }

  bool isCNN_7(size_t index = 0) {
    try {
      return this->getObject(index, CNN_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDegree(size_t index = 0) {
    try {
      return this->getObject(index, CNN_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * source table
   */
  IS *getCNN_8(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CNN_8);
  }

  IS *getSourceTable(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CNN_8);
  }

  bool isCNN_8(size_t index = 0) {
    try {
      return this->getObject(index, CNN_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourceTable(size_t index = 0) {
    try {
      return this->getObject(index, CNN_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * assigning authority namespace ID
   */
  IS *getCNN_9(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CNN_9);
  }

  IS *getAssigningAuthorityNamespaceID(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CNN_9);
  }

  bool isCNN_9(size_t index = 0) {
    try {
      return this->getObject(index, CNN_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningAuthorityNamespaceID(size_t index = 0) {
    try {
      return this->getObject(index, CNN_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * assigning authority universal ID
   */
  ST *getCNN_10(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNN_10);
  }

  ST *getAssigningAuthorityUniversalID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNN_10);
  }

  bool isCNN_10(size_t index = 0) {
    try {
      return this->getObject(index, CNN_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningAuthorityUniversalID(size_t index = 0) {
    try {
      return this->getObject(index, CNN_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * assigning authority universal ID type
   */
  ID *getCNN_11(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CNN_11);
  }

  ID *getAssigningAuthorityUniversalIDType(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CNN_11);
  }

  bool isCNN_11(size_t index = 0) {
    try {
      return this->getObject(index, CNN_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningAuthorityUniversalIDType(size_t index = 0) {
    try {
      return this->getObject(index, CNN_11) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CNN */

} /* End HL7_24 */

#endif /*__CNN_v24_H__ */
