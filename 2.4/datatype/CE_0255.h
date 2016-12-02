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


#ifndef __CE_0255_v24_H__
#define __CE_0255_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* CE_NORM mit Tab. 0255 */
class CE_0255 : public HL7Data {
 public:
  CE_0255() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CE_0255_1, /* identifier (ST) */
    CE_0255_2, /* text */
    CE_0255_3, /* name of coding system */
    CE_0255_4, /* alternate identifier (ST) */
    CE_0255_5, /* alternate text */
    CE_0255_6, /* name of alternate coding system */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CE_0255"; }
  CE_0255 *create() const { return new CE_0255(); }

 private:
  void init() {
    // setName("CE_0255");
    /* Init members */
    addObject<ST>(CE_0255_1, "CE_0255.1", HL7::initialized,
		  HL7::repetition_off);
    addParams(
	CE_0255_1,
	"*"); /* (asterisk) Life of the "unit."  Used for blood products. */
    addParams(CE_0255_1, "12H");  /* 12 hours */
    addParams(CE_0255_1, "1H");   /* 1 hour */
    addParams(CE_0255_1, "1L");   /* 1 months (30 days) */
    addParams(CE_0255_1, "1W");   /* 1 week */
    addParams(CE_0255_1, "2.5H"); /* 21/2 hours */
    addParams(CE_0255_1, "24H");  /* 24 hours */
    addParams(CE_0255_1, "2D");   /* 2 days */
    addParams(CE_0255_1, "2H");   /* 2 hours */
    addParams(CE_0255_1, "2L");   /* 2 months */
    addParams(CE_0255_1, "2W");   /* 2 weeks */
    addParams(CE_0255_1, "30M");  /* 30 minutes */
    addParams(CE_0255_1, "3D");   /* 3 days */
    addParams(CE_0255_1, "3H");   /* 3 hours */
    addParams(CE_0255_1, "3L");   /* 3 months */
    addParams(CE_0255_1, "3W");   /* 3 weeks */
    addParams(CE_0255_1, "4D");   /* 4 days */
    addParams(CE_0255_1, "4H");   /* 4 hours */
    addParams(CE_0255_1, "4W");   /* 4 weeks */
    addParams(CE_0255_1, "5D");   /* 5 days */
    addParams(CE_0255_1, "5H");   /* 5 hours */
    addParams(CE_0255_1, "6D");   /* 6 days */
    addParams(CE_0255_1, "6H");   /* 6 hours */
    addParams(CE_0255_1, "7H");   /* 7 hours */
    addParams(CE_0255_1, "8H");   /* 8 hours */
    addParams(CE_0255_1, "PT");   /* To identify measures at a point in time.
				     This is a synonym for "spot" or "random" as
				     applied to urine measurements. */
    addObject<ST>(CE_0255_2, "CE_0255.2", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0255_3, "CE_0255.3", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0255_4, "CE_0255.4", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0255_5, "CE_0255.5", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0255_6, "CE_0255.6", HL7::initialized,
		  HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * identifier (ST)
   */
  ST *getCE_0255_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0255_1);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0255_1);
  }

  bool isCE_0255_1(size_t index = 0) {
    try {
      return this->getObject(index, CE_0255_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0255_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * text
   */
  ST *getCE_0255_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0255_2);
  }

  ST *getText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0255_2);
  }

  bool isCE_0255_2(size_t index = 0) {
    try {
      return this->getObject(index, CE_0255_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0255_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of coding system
   */
  IS *getCE_0255_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0255_3);
  }

  IS *getNameOfCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0255_3);
  }

  bool isCE_0255_3(size_t index = 0) {
    try {
      return this->getObject(index, CE_0255_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0255_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate identifier (ST)
   */
  ST *getCE_0255_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0255_4);
  }

  ST *getAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0255_4);
  }

  bool isCE_0255_4(size_t index = 0) {
    try {
      return this->getObject(index, CE_0255_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0255_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate text
   */
  ST *getCE_0255_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0255_5);
  }

  ST *getAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0255_5);
  }

  bool isCE_0255_5(size_t index = 0) {
    try {
      return this->getObject(index, CE_0255_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0255_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of alternate coding system
   */
  IS *getCE_0255_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0255_6);
  }

  IS *getNameOfAlternateCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0255_6);
  }

  bool isCE_0255_6(size_t index = 0) {
    try {
      return this->getObject(index, CE_0255_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0255_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CE_0255 */

} /* End HL7_24 */

#endif /*__CE_0255_v24_H__ */
