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


#ifndef __CWE_v24_H__
#define __CWE_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* coded with exceptions */
class CWE : public HL7Data {
 public:
  CWE() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CWE_1, /* identifier (ST) */
    CWE_2, /* text */
    CWE_3, /* name of coding system */
    CWE_4, /* alternate identifier (ST) */
    CWE_5, /* alternate text */
    CWE_6, /* name of alternate coding system */
    CWE_7, /* coding system version ID */
    CWE_8, /* alternate coding system version ID */
    CWE_9, /* original text */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CWE"; }
  CWE *create() const { return new CWE(); }

 private:
  void init() {
    // setName("CWE");
    /* Init members */
    addObject<ST>(CWE_1, "CWE.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CWE_2, "CWE.2", HL7::initialized, HL7::repetition_off);
    addObject<IS>(CWE_3, "CWE.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CWE_4, "CWE.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CWE_5, "CWE.5", HL7::initialized, HL7::repetition_off);
    addObject<IS>(CWE_6, "CWE.6", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CWE_7, "CWE.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CWE_8, "CWE.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CWE_9, "CWE.9", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * identifier (ST)
   */
  ST *getCWE_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_1);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_1);
  }

  bool isCWE_1(size_t index = 0) {
    try {
      return this->getObject(index, CWE_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CWE_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * text
   */
  ST *getCWE_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_2);
  }

  ST *getText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_2);
  }

  bool isCWE_2(size_t index = 0) {
    try {
      return this->getObject(index, CWE_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isText(size_t index = 0) {
    try {
      return this->getObject(index, CWE_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of coding system
   */
  IS *getCWE_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CWE_3);
  }

  IS *getNameOfCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CWE_3);
  }

  bool isCWE_3(size_t index = 0) {
    try {
      return this->getObject(index, CWE_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CWE_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate identifier (ST)
   */
  ST *getCWE_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_4);
  }

  ST *getAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_4);
  }

  bool isCWE_4(size_t index = 0) {
    try {
      return this->getObject(index, CWE_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CWE_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate text
   */
  ST *getCWE_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_5);
  }

  ST *getAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_5);
  }

  bool isCWE_5(size_t index = 0) {
    try {
      return this->getObject(index, CWE_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CWE_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of alternate coding system
   */
  IS *getCWE_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CWE_6);
  }

  IS *getNameOfAlternateCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CWE_6);
  }

  bool isCWE_6(size_t index = 0) {
    try {
      return this->getObject(index, CWE_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CWE_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * coding system version ID
   */
  ST *getCWE_7(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_7);
  }

  ST *getCodingSystemVersionID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_7);
  }

  bool isCWE_7(size_t index = 0) {
    try {
      return this->getObject(index, CWE_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCodingSystemVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CWE_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate coding system version ID
   */
  ST *getCWE_8(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_8);
  }

  ST *getAlternateCodingSystemVersionID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_8);
  }

  bool isCWE_8(size_t index = 0) {
    try {
      return this->getObject(index, CWE_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateCodingSystemVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CWE_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * original text
   */
  ST *getCWE_9(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_9);
  }

  ST *getOriginalText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_9);
  }

  bool isCWE_9(size_t index = 0) {
    try {
      return this->getObject(index, CWE_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOriginalText(size_t index = 0) {
    try {
      return this->getObject(index, CWE_9) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CWE */

} /* End HL7_24 */

#endif /*__CWE_v24_H__ */
