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


#ifndef __CE_0265_v24_H__
#define __CE_0265_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/*  */
class CE_0265 : public HL7Data {
 public:
  CE_0265() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CE_0265_1, /* identifier (ST) */
    CE_0265_2, /* text */
    CE_0265_3, /* name of coding system */
    CE_0265_4, /* alternate identifier (ST) */
    CE_0265_5, /* alternate text */
    CE_0265_6, /* name of alternate coding system */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CE_0265"; }
  CE_0265 *create() const { return new CE_0265(); }

 private:
  void init() {
    // setName("CE_0265");
    /* Init members */
    addObject<ST>(CE_0265_1, "CE_0265.1", HL7::initialized,
		  HL7::repetition_off);
    addParams(CE_0265_1, "ALC"); /* Allergy */
    addParams(CE_0265_1, "AMB"); /* Ambulatory */
    addParams(CE_0265_1, "CAN"); /* Cancer */
    addParams(CE_0265_1, "CAR"); /* Coronary/cardiac care */
    addParams(CE_0265_1, "CCR"); /* Critical care */
    addParams(CE_0265_1, "CHI"); /* Chiropractic */
    addParams(CE_0265_1, "EDI"); /* Education */
    addParams(CE_0265_1, "EMR"); /* Emergency */
    addParams(CE_0265_1, "FPC"); /* Family planning */
    addParams(CE_0265_1, "INT"); /* Intensive care */
    addParams(CE_0265_1, "ISO"); /* Isolation */
    addParams(CE_0265_1, "NAT"); /* Naturopathic */
    addParams(CE_0265_1, "NBI"); /* Newborn, nursery, infants */
    addParams(CE_0265_1, "OBG"); /* Obstetrics, gynecology */
    addParams(CE_0265_1, "OBS"); /* Observation */
    addParams(CE_0265_1, "OTH"); /* Other specialty */
    addParams(CE_0265_1, "PED"); /* Pediatrics */
    addParams(CE_0265_1, "PHY"); /* General/family practice */
    addParams(CE_0265_1, "PIN"); /* Pediatric/neonatal intensive care */
    addParams(CE_0265_1, "PPS"); /* Pediatric psychiatric */
    addParams(CE_0265_1, "PRE"); /* Pediatric rehabilitation */
    addParams(CE_0265_1, "PSI"); /* Psychiatric intensive care */
    addParams(CE_0265_1, "PSY"); /* Psychiatric */
    addParams(CE_0265_1, "REH"); /* Rehabilitation */
    addParams(CE_0265_1, "SUR"); /* Surgery */
    addParams(CE_0265_1, "WIC"); /* Walk-in clinic */
    addObject<ST>(CE_0265_2, "CE_0265.2", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0265_3, "CE_0265.3", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0265_4, "CE_0265.4", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0265_5, "CE_0265.5", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0265_6, "CE_0265.6", HL7::initialized,
		  HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * identifier (ST)
   */
  ST *getCE_0265_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0265_1);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0265_1);
  }

  bool isCE_0265_1(size_t index = 0) {
    try {
      return this->getObject(index, CE_0265_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0265_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * text
   */
  ST *getCE_0265_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0265_2);
  }

  ST *getText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0265_2);
  }

  bool isCE_0265_2(size_t index = 0) {
    try {
      return this->getObject(index, CE_0265_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0265_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of coding system
   */
  IS *getCE_0265_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0265_3);
  }

  IS *getNameOfCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0265_3);
  }

  bool isCE_0265_3(size_t index = 0) {
    try {
      return this->getObject(index, CE_0265_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0265_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate identifier (ST)
   */
  ST *getCE_0265_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0265_4);
  }

  ST *getAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0265_4);
  }

  bool isCE_0265_4(size_t index = 0) {
    try {
      return this->getObject(index, CE_0265_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0265_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate text
   */
  ST *getCE_0265_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0265_5);
  }

  ST *getAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0265_5);
  }

  bool isCE_0265_5(size_t index = 0) {
    try {
      return this->getObject(index, CE_0265_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0265_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of alternate coding system
   */
  IS *getCE_0265_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0265_6);
  }

  IS *getNameOfAlternateCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0265_6);
  }

  bool isCE_0265_6(size_t index = 0) {
    try {
      return this->getObject(index, CE_0265_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0265_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CE_0265 */

} /* End HL7_24 */

#endif /*__CE_0265_v24_H__ */
