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


#ifndef __CE_0357_v24_H__
#define __CE_0357_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/*  */
class CE_0357 : public HL7Data {
 public:
  CE_0357() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CE_0357_1, /* identifier (ST) */
    CE_0357_2, /* text */
    CE_0357_3, /* name of coding system */
    CE_0357_4, /* alternate identifier (ST) */
    CE_0357_5, /* alternate text */
    CE_0357_6, /* name of alternate coding system */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CE_0357"; }
  CE_0357 *create() const { return new CE_0357(); }

 private:
  void init() {
    // setName("CE_0357");
    /* Init members */
    addObject<ST>(CE_0357_1, "CE_0357.1", HL7::initialized,
		  HL7::repetition_off);
    addParams(CE_0357_1, "0");	 /* Message accepted */
    addParams(CE_0357_1, "100");       /* Segment sequence error */
    addParams(CE_0357_1, "101");       /* Required field missing */
    addParams(CE_0357_1, "102");       /* Data type error */
    addParams(CE_0357_1, "103");       /* Table value not found */
    addParams(CE_0357_1, "200");       /* Unsupported message type */
    addParams(CE_0357_1, "201");       /* Unsupported event code */
    addParams(CE_0357_1, "202");       /* Unsupported processing id */
    addParams(CE_0357_1, "203");       /* Unsupported version id */
    addParams(CE_0357_1, "204");       /* Unknown key identifier */
    addParams(CE_0357_1, "205");       /* Duplicate key identifier */
    addParams(CE_0357_1, "206");       /* Application record locked */
    addParams(CE_0357_1, "207");       /* Application internal error */
    addParams(CE_0357_1, "Errors");    /*  */
    addParams(CE_0357_1, "Rejection"); /*  */
    addParams(CE_0357_1, "Success");   /*  */
    addObject<ST>(CE_0357_2, "CE_0357.2", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0357_3, "CE_0357.3", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0357_4, "CE_0357.4", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0357_5, "CE_0357.5", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0357_6, "CE_0357.6", HL7::initialized,
		  HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * identifier (ST)
   */
  ST *getCE_0357_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0357_1);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0357_1);
  }

  bool isCE_0357_1(size_t index = 0) {
    try {
      return this->getObject(index, CE_0357_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0357_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * text
   */
  ST *getCE_0357_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0357_2);
  }

  ST *getText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0357_2);
  }

  bool isCE_0357_2(size_t index = 0) {
    try {
      return this->getObject(index, CE_0357_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0357_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of coding system
   */
  IS *getCE_0357_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0357_3);
  }

  IS *getNameOfCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0357_3);
  }

  bool isCE_0357_3(size_t index = 0) {
    try {
      return this->getObject(index, CE_0357_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0357_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate identifier (ST)
   */
  ST *getCE_0357_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0357_4);
  }

  ST *getAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0357_4);
  }

  bool isCE_0357_4(size_t index = 0) {
    try {
      return this->getObject(index, CE_0357_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0357_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate text
   */
  ST *getCE_0357_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0357_5);
  }

  ST *getAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0357_5);
  }

  bool isCE_0357_5(size_t index = 0) {
    try {
      return this->getObject(index, CE_0357_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0357_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of alternate coding system
   */
  IS *getCE_0357_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0357_6);
  }

  IS *getNameOfAlternateCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0357_6);
  }

  bool isCE_0357_6(size_t index = 0) {
    try {
      return this->getObject(index, CE_0357_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0357_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CE_0357 */

} /* End HL7_24 */

#endif /*__CE_0357_v24_H__ */
