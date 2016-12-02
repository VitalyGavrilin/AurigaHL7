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


#ifndef __CNE_v24_H__
#define __CNE_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* coded with no exceptions */
class CNE : public HL7Data {
 public:
  CNE() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CNE_1, /* identifier (ST) */
    CNE_2, /* text */
    CNE_3, /* name of coding system */
    CNE_4, /* alternate identifier (ST) */
    CNE_5, /* alternate text */
    CNE_6, /* name of alternate coding system */
    CNE_7, /* coding system version ID */
    CNE_8, /* alternate coding system version ID */
    CNE_9, /* original text */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CNE"; }
  CNE *create() const { return new CNE(); }

 private:
  void init() {
    // setName("CNE");
    /* Init members */
    addObject<ST>(CNE_1, "CNE.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNE_2, "CNE.2", HL7::initialized, HL7::repetition_off);
    addObject<IS>(CNE_3, "CNE.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNE_4, "CNE.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNE_5, "CNE.5", HL7::initialized, HL7::repetition_off);
    addObject<IS>(CNE_6, "CNE.6", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNE_7, "CNE.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNE_8, "CNE.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNE_9, "CNE.9", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * identifier (ST)
   */
  ST *getCNE_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_1);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_1);
  }

  bool isCNE_1(size_t index = 0) {
    try {
      return this->getObject(index, CNE_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CNE_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * text
   */
  ST *getCNE_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_2);
  }

  ST *getText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_2);
  }

  bool isCNE_2(size_t index = 0) {
    try {
      return this->getObject(index, CNE_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isText(size_t index = 0) {
    try {
      return this->getObject(index, CNE_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of coding system
   */
  IS *getCNE_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CNE_3);
  }

  IS *getNameOfCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CNE_3);
  }

  bool isCNE_3(size_t index = 0) {
    try {
      return this->getObject(index, CNE_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CNE_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate identifier (ST)
   */
  ST *getCNE_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_4);
  }

  ST *getAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_4);
  }

  bool isCNE_4(size_t index = 0) {
    try {
      return this->getObject(index, CNE_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CNE_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate text
   */
  ST *getCNE_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_5);
  }

  ST *getAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_5);
  }

  bool isCNE_5(size_t index = 0) {
    try {
      return this->getObject(index, CNE_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CNE_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of alternate coding system
   */
  IS *getCNE_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CNE_6);
  }

  IS *getNameOfAlternateCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CNE_6);
  }

  bool isCNE_6(size_t index = 0) {
    try {
      return this->getObject(index, CNE_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CNE_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * coding system version ID
   */
  ST *getCNE_7(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_7);
  }

  ST *getCodingSystemVersionID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_7);
  }

  bool isCNE_7(size_t index = 0) {
    try {
      return this->getObject(index, CNE_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCodingSystemVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CNE_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate coding system version ID
   */
  ST *getCNE_8(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_8);
  }

  ST *getAlternateCodingSystemVersionID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_8);
  }

  bool isCNE_8(size_t index = 0) {
    try {
      return this->getObject(index, CNE_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateCodingSystemVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CNE_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * original text
   */
  ST *getCNE_9(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_9);
  }

  ST *getOriginalText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_9);
  }

  bool isCNE_9(size_t index = 0) {
    try {
      return this->getObject(index, CNE_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOriginalText(size_t index = 0) {
    try {
      return this->getObject(index, CNE_9) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CNE */

} /* End HL7_24 */

#endif /*__CNE_v24_H__ */
