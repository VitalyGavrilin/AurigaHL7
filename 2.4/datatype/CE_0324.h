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


#ifndef __CE_0324_v24_H__
#define __CE_0324_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/*  */
class CE_0324 : public HL7Data {
 public:
  CE_0324() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CE_0324_1, /* identifier (ST) */
    CE_0324_2, /* text */
    CE_0324_3, /* name of coding system */
    CE_0324_4, /* alternate identifier (ST) */
    CE_0324_5, /* alternate text */
    CE_0324_6, /* name of alternate coding system */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CE_0324"; }
  CE_0324 *create() const { return new CE_0324(); }

 private:
  void init() {
    // setName("CE_0324");
    /* Init members */
    addObject<ST>(CE_0324_1, "CE_0324.1", HL7::initialized,
		  HL7::repetition_off);
    addParams(CE_0324_1, "GEN"); /* Gender of patient(s) */
    addParams(CE_0324_1,
	      "IMP"); /* Implant: can be used for radiation implant patients */
    addParams(CE_0324_1, "INF"); /* Infectious disease: this location can be
				    used for isolation */
    addParams(CE_0324_1, "LCR"); /* Level of care */
    addParams(CE_0324_1, "LIC"); /* Licensed */
    addParams(CE_0324_1, "OVR"); /* Overflow */
    addParams(CE_0324_1, "PRL"); /* Privacy level: indicating the level of
				    private versus non-private room */
    addParams(CE_0324_1, "SET"); /* Bed is set up */
    addParams(CE_0324_1, "SHA"); /* Shadow: a temporary holding location that
				    does not physically exist */
    addParams(CE_0324_1, "SMK"); /* Smoking */
    addParams(CE_0324_1, "STF"); /* Bed is staffed */
    addParams(CE_0324_1, "TEA"); /* Teaching location */
    addObject<ST>(CE_0324_2, "CE_0324.2", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0324_3, "CE_0324.3", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0324_4, "CE_0324.4", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0324_5, "CE_0324.5", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0324_6, "CE_0324.6", HL7::initialized,
		  HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * identifier (ST)
   */
  ST *getCE_0324_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0324_1);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0324_1);
  }

  bool isCE_0324_1(size_t index = 0) {
    try {
      return this->getObject(index, CE_0324_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0324_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * text
   */
  ST *getCE_0324_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0324_2);
  }

  ST *getText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0324_2);
  }

  bool isCE_0324_2(size_t index = 0) {
    try {
      return this->getObject(index, CE_0324_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0324_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of coding system
   */
  IS *getCE_0324_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0324_3);
  }

  IS *getNameOfCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0324_3);
  }

  bool isCE_0324_3(size_t index = 0) {
    try {
      return this->getObject(index, CE_0324_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0324_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate identifier (ST)
   */
  ST *getCE_0324_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0324_4);
  }

  ST *getAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0324_4);
  }

  bool isCE_0324_4(size_t index = 0) {
    try {
      return this->getObject(index, CE_0324_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0324_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate text
   */
  ST *getCE_0324_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0324_5);
  }

  ST *getAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0324_5);
  }

  bool isCE_0324_5(size_t index = 0) {
    try {
      return this->getObject(index, CE_0324_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0324_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of alternate coding system
   */
  IS *getCE_0324_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0324_6);
  }

  IS *getNameOfAlternateCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0324_6);
  }

  bool isCE_0324_6(size_t index = 0) {
    try {
      return this->getObject(index, CE_0324_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0324_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CE_0324 */

} /* End HL7_24 */

#endif /*__CE_0324_v24_H__ */
