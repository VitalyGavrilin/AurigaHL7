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


#ifndef __CE_0277_v24_H__
#define __CE_0277_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/*  */
class CE_0277 : public HL7Data {
 public:
  CE_0277() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CE_0277_1, /* identifier (ST) */
    CE_0277_2, /* text */
    CE_0277_3, /* name of coding system */
    CE_0277_4, /* alternate identifier (ST) */
    CE_0277_5, /* alternate text */
    CE_0277_6, /* name of alternate coding system */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CE_0277"; }
  CE_0277 *create() const { return new CE_0277(); }

 private:
  void init() {
    // setName("CE_0277");
    /* Init members */
    addObject<ST>(CE_0277_1, "CE_0277.1", HL7::initialized,
		  HL7::repetition_off);
    addParams(
	CE_0277_1, "Complete"); /* A request to add a completed appointment,
				   used to maintain records of completed
				   appointments that did not appear in the
				   schedule (e.g., STAT, walk-in, etc.) */
    addParams(
	CE_0277_1,
	"Normal"); /* Routine schedule request type - default if not valued */
    addParams(CE_0277_1, "Tentative"); /* A request for a tentative (e.g.,
					  "penciled in") appointment */
    addObject<ST>(CE_0277_2, "CE_0277.2", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0277_3, "CE_0277.3", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0277_4, "CE_0277.4", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0277_5, "CE_0277.5", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0277_6, "CE_0277.6", HL7::initialized,
		  HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * identifier (ST)
   */
  ST *getCE_0277_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0277_1);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0277_1);
  }

  bool isCE_0277_1(size_t index = 0) {
    try {
      return this->getObject(index, CE_0277_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0277_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * text
   */
  ST *getCE_0277_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0277_2);
  }

  ST *getText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0277_2);
  }

  bool isCE_0277_2(size_t index = 0) {
    try {
      return this->getObject(index, CE_0277_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0277_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of coding system
   */
  IS *getCE_0277_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0277_3);
  }

  IS *getNameOfCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0277_3);
  }

  bool isCE_0277_3(size_t index = 0) {
    try {
      return this->getObject(index, CE_0277_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0277_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate identifier (ST)
   */
  ST *getCE_0277_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0277_4);
  }

  ST *getAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0277_4);
  }

  bool isCE_0277_4(size_t index = 0) {
    try {
      return this->getObject(index, CE_0277_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0277_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate text
   */
  ST *getCE_0277_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0277_5);
  }

  ST *getAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0277_5);
  }

  bool isCE_0277_5(size_t index = 0) {
    try {
      return this->getObject(index, CE_0277_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0277_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of alternate coding system
   */
  IS *getCE_0277_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0277_6);
  }

  IS *getNameOfAlternateCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0277_6);
  }

  bool isCE_0277_6(size_t index = 0) {
    try {
      return this->getObject(index, CE_0277_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0277_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CE_0277 */

} /* End HL7_24 */

#endif /*__CE_0277_v24_H__ */
