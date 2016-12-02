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


#ifndef __CE_0426_v24_H__
#define __CE_0426_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/*  */
class CE_0426 : public HL7Data {
 public:
  CE_0426() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CE_0426_1, /* identifier (ST) */
    CE_0426_2, /* text */
    CE_0426_3, /* name of coding system */
    CE_0426_4, /* alternate identifier (ST) */
    CE_0426_5, /* alternate text */
    CE_0426_6, /* name of alternate coding system */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CE_0426"; }
  CE_0426 *create() const { return new CE_0426(); }

 private:
  void init() {
    // setName("CE_0426");
    /* Init members */
    addObject<ST>(CE_0426_1, "CE_0426.1", HL7::initialized,
		  HL7::repetition_off);
    addParams(CE_0426_1, "CRYO");    /* Cryoprecipitated AHF */
    addParams(CE_0426_1, "CRYOP");   /* Pooled Cryopecipitate */
    addParams(CE_0426_1, "FFP");     /* Fresh Frozen Plasma */
    addParams(CE_0426_1, "FFPTH");   /* Fresh Frozen Plasma - Thawed */
    addParams(CE_0426_1, "PC");      /* Packed Cells */
    addParams(CE_0426_1, "PCA");     /* Autologous Packed Cells */
    addParams(CE_0426_1, "PCNEO");   /* Packed Cells - Neonatal */
    addParams(CE_0426_1, "PCW");     /* Washed Packed Cells */
    addParams(CE_0426_1, "PLT");     /* Platelet Concentrate */
    addParams(CE_0426_1, "PLTNEO");  /* Reduced Volume Platelets */
    addParams(CE_0426_1, "PLTP");    /* Pooled Platelets */
    addParams(CE_0426_1, "PLTPH");   /* Platelet Pheresis */
    addParams(CE_0426_1, "PLTPHLR"); /* Leukoreduced Platelet Pheresis */
    addParams(CE_0426_1, "RWB");     /* Reconstituted Whole Blood */
    addParams(CE_0426_1, "WBA");     /* Autologous Whole Blood */
    addObject<ST>(CE_0426_2, "CE_0426.2", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0426_3, "CE_0426.3", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0426_4, "CE_0426.4", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0426_5, "CE_0426.5", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0426_6, "CE_0426.6", HL7::initialized,
		  HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * identifier (ST)
   */
  ST *getCE_0426_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0426_1);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0426_1);
  }

  bool isCE_0426_1(size_t index = 0) {
    try {
      return this->getObject(index, CE_0426_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0426_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * text
   */
  ST *getCE_0426_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0426_2);
  }

  ST *getText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0426_2);
  }

  bool isCE_0426_2(size_t index = 0) {
    try {
      return this->getObject(index, CE_0426_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0426_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of coding system
   */
  IS *getCE_0426_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0426_3);
  }

  IS *getNameOfCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0426_3);
  }

  bool isCE_0426_3(size_t index = 0) {
    try {
      return this->getObject(index, CE_0426_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0426_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate identifier (ST)
   */
  ST *getCE_0426_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0426_4);
  }

  ST *getAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0426_4);
  }

  bool isCE_0426_4(size_t index = 0) {
    try {
      return this->getObject(index, CE_0426_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0426_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate text
   */
  ST *getCE_0426_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0426_5);
  }

  ST *getAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0426_5);
  }

  bool isCE_0426_5(size_t index = 0) {
    try {
      return this->getObject(index, CE_0426_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0426_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of alternate coding system
   */
  IS *getCE_0426_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0426_6);
  }

  IS *getNameOfAlternateCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0426_6);
  }

  bool isCE_0426_6(size_t index = 0) {
    try {
      return this->getObject(index, CE_0426_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0426_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CE_0426 */

} /* End HL7_24 */

#endif /*__CE_0426_v24_H__ */
