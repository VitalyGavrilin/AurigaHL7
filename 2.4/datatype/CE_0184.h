/*
 * This file is part of HCPPL.
 *
 * HCPPL is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * HCPPL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with HCPPL.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __CE_0184_v24_H__
#define __CE_0184_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/*  */
class CE_0184 : public HL7Data {
 public:
  CE_0184() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CE_0184_1, /* identifier (ST) */
    CE_0184_2, /* text */
    CE_0184_3, /* name of coding system */
    CE_0184_4, /* alternate identifier (ST) */
    CE_0184_5, /* alternate text */
    CE_0184_6, /* name of alternate coding system */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CE_0184"; }
  CE_0184 *create() const { return new CE_0184(); }

 private:
  void init() {
    // setName("CE_0184");
    /* Init members */
    addObject<ST>(CE_0184_1, "CE_0184.1", HL7::initialized,
		  HL7::repetition_off);
    addParams(CE_0184_1, "..."); /* No suggested values defined */
    addObject<ST>(CE_0184_2, "CE_0184.2", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0184_3, "CE_0184.3", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0184_4, "CE_0184.4", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0184_5, "CE_0184.5", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0184_6, "CE_0184.6", HL7::initialized,
		  HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * identifier (ST)
   */
  ST *getCE_0184_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0184_1);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0184_1);
  }

  bool isCE_0184_1(size_t index = 0) {
    try {
      return this->getObject(index, CE_0184_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0184_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * text
   */
  ST *getCE_0184_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0184_2);
  }

  ST *getText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0184_2);
  }

  bool isCE_0184_2(size_t index = 0) {
    try {
      return this->getObject(index, CE_0184_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0184_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of coding system
   */
  IS *getCE_0184_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0184_3);
  }

  IS *getNameOfCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0184_3);
  }

  bool isCE_0184_3(size_t index = 0) {
    try {
      return this->getObject(index, CE_0184_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0184_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate identifier (ST)
   */
  ST *getCE_0184_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0184_4);
  }

  ST *getAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0184_4);
  }

  bool isCE_0184_4(size_t index = 0) {
    try {
      return this->getObject(index, CE_0184_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0184_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate text
   */
  ST *getCE_0184_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0184_5);
  }

  ST *getAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0184_5);
  }

  bool isCE_0184_5(size_t index = 0) {
    try {
      return this->getObject(index, CE_0184_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0184_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of alternate coding system
   */
  IS *getCE_0184_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0184_6);
  }

  IS *getNameOfAlternateCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0184_6);
  }

  bool isCE_0184_6(size_t index = 0) {
    try {
      return this->getObject(index, CE_0184_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0184_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CE_0184 */

} /* End HL7_24 */

#endif /*__CE_0184_v24_H__ */
