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


#ifndef __CE_0367_v24_H__
#define __CE_0367_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/*  */
class CE_0367 : public HL7Data {
 public:
  CE_0367() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CE_0367_1, /* identifier (ST) */
    CE_0367_2, /* text */
    CE_0367_3, /* name of coding system */
    CE_0367_4, /* alternate identifier (ST) */
    CE_0367_5, /* alternate text */
    CE_0367_6, /* name of alternate coding system */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CE_0367"; }
  CE_0367 *create() const { return new CE_0367(); }

 private:
  void init() {
    // setName("CE_0367");
    /* Init members */
    addObject<ST>(CE_0367_1, "CE_0367.1", HL7::initialized,
		  HL7::repetition_off);
    addParams(CE_0367_1, "C"); /* Critical */
    addParams(CE_0367_1, "N"); /* Normal */
    addParams(CE_0367_1, "S"); /* Serious */
    addParams(CE_0367_1, "W"); /* Warning */
    addObject<ST>(CE_0367_2, "CE_0367.2", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0367_3, "CE_0367.3", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0367_4, "CE_0367.4", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0367_5, "CE_0367.5", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0367_6, "CE_0367.6", HL7::initialized,
		  HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * identifier (ST)
   */
  ST *getCE_0367_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0367_1);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0367_1);
  }

  bool isCE_0367_1(size_t index = 0) {
    try {
      return this->getObject(index, CE_0367_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0367_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * text
   */
  ST *getCE_0367_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0367_2);
  }

  ST *getText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0367_2);
  }

  bool isCE_0367_2(size_t index = 0) {
    try {
      return this->getObject(index, CE_0367_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0367_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of coding system
   */
  IS *getCE_0367_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0367_3);
  }

  IS *getNameOfCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0367_3);
  }

  bool isCE_0367_3(size_t index = 0) {
    try {
      return this->getObject(index, CE_0367_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0367_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate identifier (ST)
   */
  ST *getCE_0367_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0367_4);
  }

  ST *getAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0367_4);
  }

  bool isCE_0367_4(size_t index = 0) {
    try {
      return this->getObject(index, CE_0367_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0367_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate text
   */
  ST *getCE_0367_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0367_5);
  }

  ST *getAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0367_5);
  }

  bool isCE_0367_5(size_t index = 0) {
    try {
      return this->getObject(index, CE_0367_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0367_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of alternate coding system
   */
  IS *getCE_0367_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0367_6);
  }

  IS *getNameOfAlternateCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0367_6);
  }

  bool isCE_0367_6(size_t index = 0) {
    try {
      return this->getObject(index, CE_0367_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0367_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CE_0367 */

} /* End HL7_24 */

#endif /*__CE_0367_v24_H__ */
