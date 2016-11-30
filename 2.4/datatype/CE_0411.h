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


#ifndef __CE_0411_v24_H__
#define __CE_0411_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/*  */
class CE_0411 : public HL7Data {
 public:
  CE_0411() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CE_0411_1, /* identifier (ST) */
    CE_0411_2, /* text */
    CE_0411_3, /* name of coding system */
    CE_0411_4, /* alternate identifier (ST) */
    CE_0411_5, /* alternate text */
    CE_0411_6, /* name of alternate coding system */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CE_0411"; }
  CE_0411 *create() const { return new CE_0411(); }

 private:
  void init() {
    // setName("CE_0411");
    /* Init members */
    addObject<ST>(CE_0411_1, "CE_0411.1", HL7::initialized,
		  HL7::repetition_off);
    addParams(CE_0411_1, "1ST"); /* First */
    addParams(CE_0411_1, "2ND"); /* Second */
    addParams(CE_0411_1, "3RD"); /* Third */
    addParams(CE_0411_1, "4TH"); /* Fourth */
    addParams(CE_0411_1, "5TH"); /* Fifth */
    addParams(CE_0411_1, "A/P"); /* Anterior/Posterior */
    addParams(CE_0411_1, "ANT"); /* Anterior */
    addParams(CE_0411_1, "BLT"); /* Bilateral */
    addParams(CE_0411_1, "DEC"); /* Decubitus */
    addParams(CE_0411_1, "DST"); /* Distal */
    addParams(CE_0411_1, "LAT"); /* Lateral */
    addParams(CE_0411_1, "LFT"); /* Left */
    addParams(CE_0411_1, "LLQ"); /* Left Lower Quadrant */
    addParams(CE_0411_1, "LOW"); /* Lower */
    addParams(CE_0411_1, "LUQ"); /* Left Upper Quadrant */
    addParams(CE_0411_1, "MED"); /* Medial */
    addParams(CE_0411_1, "OR");  /* Operating Room */
    addParams(CE_0411_1, "PED"); /* Pediatric */
    addParams(CE_0411_1, "POS"); /* Posterior */
    addParams(CE_0411_1, "PRT"); /* Portable */
    addParams(CE_0411_1, "PRX"); /* Proximal */
    addParams(CE_0411_1, "REC"); /* Recumbent */
    addParams(CE_0411_1, "RGH"); /* Right */
    addParams(CE_0411_1, "RLQ"); /* Right Lower Quadrant */
    addParams(CE_0411_1, "RUQ"); /* Right Upper Quadrant */
    addParams(CE_0411_1, "UPP"); /* Upper */
    addParams(CE_0411_1, "UPR"); /* Upright */
    addParams(CE_0411_1, "WCT"); /* With Contrast */
    addParams(CE_0411_1, "WOC"); /* Without Contrast */
    addParams(CE_0411_1, "WSD"); /* With Sedation */
    addObject<ST>(CE_0411_2, "CE_0411.2", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0411_3, "CE_0411.3", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0411_4, "CE_0411.4", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0411_5, "CE_0411.5", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0411_6, "CE_0411.6", HL7::initialized,
		  HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * identifier (ST)
   */
  ST *getCE_0411_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0411_1);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0411_1);
  }

  bool isCE_0411_1(size_t index = 0) {
    try {
      return this->getObject(index, CE_0411_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0411_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * text
   */
  ST *getCE_0411_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0411_2);
  }

  ST *getText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0411_2);
  }

  bool isCE_0411_2(size_t index = 0) {
    try {
      return this->getObject(index, CE_0411_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0411_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of coding system
   */
  IS *getCE_0411_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0411_3);
  }

  IS *getNameOfCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0411_3);
  }

  bool isCE_0411_3(size_t index = 0) {
    try {
      return this->getObject(index, CE_0411_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0411_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate identifier (ST)
   */
  ST *getCE_0411_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0411_4);
  }

  ST *getAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0411_4);
  }

  bool isCE_0411_4(size_t index = 0) {
    try {
      return this->getObject(index, CE_0411_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0411_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate text
   */
  ST *getCE_0411_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0411_5);
  }

  ST *getAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0411_5);
  }

  bool isCE_0411_5(size_t index = 0) {
    try {
      return this->getObject(index, CE_0411_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0411_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of alternate coding system
   */
  IS *getCE_0411_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0411_6);
  }

  IS *getNameOfAlternateCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0411_6);
  }

  bool isCE_0411_6(size_t index = 0) {
    try {
      return this->getObject(index, CE_0411_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0411_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CE_0411 */

} /* End HL7_24 */

#endif /*__CE_0411_v24_H__ */
