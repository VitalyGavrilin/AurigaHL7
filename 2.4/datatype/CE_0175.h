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


#ifndef __CE_0175_v24_H__
#define __CE_0175_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/*  */
class CE_0175 : public HL7Data {
 public:
  CE_0175() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CE_0175_1, /* identifier (ST) */
    CE_0175_2, /* text */
    CE_0175_3, /* name of coding system */
    CE_0175_4, /* alternate identifier (ST) */
    CE_0175_5, /* alternate text */
    CE_0175_6, /* name of alternate coding system */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CE_0175"; }
  CE_0175 *create() const { return new CE_0175(); }

 private:
  void init() {
    // setName("CE_0175");
    /* Init members */
    addObject<ST>(CE_0175_1, "CE_0175.1", HL7::initialized,
		  HL7::repetition_off);
    addParams(CE_0175_1, "CDM"); /* Charge description master file */
    addParams(CE_0175_1, "CLN"); /* Clinic master file */
    addParams(CE_0175_1,
	      "CMA"); /* Clinical study with phases and scheduled master file */
    addParams(CE_0175_1, "CMB"); /* Clinical study without phases but with
				    scheduled master file */
    addParams(CE_0175_1, "LOC"); /* Location master file */
    addParams(CE_0175_1, "OMA"); /* Numerical observation master file */
    addParams(CE_0175_1, "OMB"); /* Categorical observation master file */
    addParams(CE_0175_1, "OMC"); /* Observation batteries master file */
    addParams(CE_0175_1, "OMD"); /* Calculated observations master file */
    addParams(CE_0175_1,
	      "OME"); /* Other basic observation/service attributes */
    addParams(CE_0175_1, "PRA"); /* Practitioner master file */
    addParams(CE_0175_1, "STF"); /* Staff master file */
    addObject<ST>(CE_0175_2, "CE_0175.2", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0175_3, "CE_0175.3", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0175_4, "CE_0175.4", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0175_5, "CE_0175.5", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0175_6, "CE_0175.6", HL7::initialized,
		  HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * identifier (ST)
   */
  ST *getCE_0175_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0175_1);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0175_1);
  }

  bool isCE_0175_1(size_t index = 0) {
    try {
      return this->getObject(index, CE_0175_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0175_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * text
   */
  ST *getCE_0175_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0175_2);
  }

  ST *getText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0175_2);
  }

  bool isCE_0175_2(size_t index = 0) {
    try {
      return this->getObject(index, CE_0175_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0175_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of coding system
   */
  IS *getCE_0175_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0175_3);
  }

  IS *getNameOfCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0175_3);
  }

  bool isCE_0175_3(size_t index = 0) {
    try {
      return this->getObject(index, CE_0175_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0175_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate identifier (ST)
   */
  ST *getCE_0175_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0175_4);
  }

  ST *getAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0175_4);
  }

  bool isCE_0175_4(size_t index = 0) {
    try {
      return this->getObject(index, CE_0175_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0175_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate text
   */
  ST *getCE_0175_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0175_5);
  }

  ST *getAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0175_5);
  }

  bool isCE_0175_5(size_t index = 0) {
    try {
      return this->getObject(index, CE_0175_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0175_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of alternate coding system
   */
  IS *getCE_0175_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0175_6);
  }

  IS *getNameOfAlternateCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0175_6);
  }

  bool isCE_0175_6(size_t index = 0) {
    try {
      return this->getObject(index, CE_0175_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0175_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CE_0175 */

} /* End HL7_24 */

#endif /*__CE_0175_v24_H__ */
