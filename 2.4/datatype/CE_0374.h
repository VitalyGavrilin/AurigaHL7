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


#ifndef __CE_0374_v24_H__
#define __CE_0374_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/*  */
class CE_0374 : public HL7Data {
 public:
  CE_0374() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CE_0374_1, /* identifier (ST) */
    CE_0374_2, /* text */
    CE_0374_3, /* name of coding system */
    CE_0374_4, /* alternate identifier (ST) */
    CE_0374_5, /* alternate text */
    CE_0374_6, /* name of alternate coding system */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CE_0374"; }
  CE_0374 *create() const { return new CE_0374(); }

 private:
  void init() {
    // setName("CE_0374");
    /* Init members */
    addObject<ST>(CE_0374_1, "CE_0374.1", HL7::initialized,
		  HL7::repetition_off);
    addParams(CE_0374_1,
	      "CNTM"); /* Present, type of contamination unspecified */
    addObject<ST>(CE_0374_2, "CE_0374.2", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0374_3, "CE_0374.3", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0374_4, "CE_0374.4", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0374_5, "CE_0374.5", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0374_6, "CE_0374.6", HL7::initialized,
		  HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * identifier (ST)
   */
  ST *getCE_0374_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0374_1);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0374_1);
  }

  bool isCE_0374_1(size_t index = 0) {
    try {
      return this->getObject(index, CE_0374_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0374_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * text
   */
  ST *getCE_0374_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0374_2);
  }

  ST *getText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0374_2);
  }

  bool isCE_0374_2(size_t index = 0) {
    try {
      return this->getObject(index, CE_0374_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0374_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of coding system
   */
  IS *getCE_0374_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0374_3);
  }

  IS *getNameOfCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0374_3);
  }

  bool isCE_0374_3(size_t index = 0) {
    try {
      return this->getObject(index, CE_0374_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0374_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate identifier (ST)
   */
  ST *getCE_0374_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0374_4);
  }

  ST *getAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0374_4);
  }

  bool isCE_0374_4(size_t index = 0) {
    try {
      return this->getObject(index, CE_0374_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0374_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate text
   */
  ST *getCE_0374_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0374_5);
  }

  ST *getAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0374_5);
  }

  bool isCE_0374_5(size_t index = 0) {
    try {
      return this->getObject(index, CE_0374_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0374_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of alternate coding system
   */
  IS *getCE_0374_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0374_6);
  }

  IS *getNameOfAlternateCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0374_6);
  }

  bool isCE_0374_6(size_t index = 0) {
    try {
      return this->getObject(index, CE_0374_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0374_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CE_0374 */

} /* End HL7_24 */

#endif /*__CE_0374_v24_H__ */
