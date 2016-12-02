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


#ifndef __CE_0163_v24_H__
#define __CE_0163_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/*  */
class CE_0163 : public HL7Data {
 public:
  CE_0163() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CE_0163_1, /* identifier (ST) */
    CE_0163_2, /* text */
    CE_0163_3, /* name of coding system */
    CE_0163_4, /* alternate identifier (ST) */
    CE_0163_5, /* alternate text */
    CE_0163_6, /* name of alternate coding system */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CE_0163"; }
  CE_0163 *create() const { return new CE_0163(); }

 private:
  void init() {
    // setName("CE_0163");
    /* Init members */
    addObject<ST>(CE_0163_1, "CE_0163.1", HL7::initialized,
		  HL7::repetition_off);
    addParams(CE_0163_1, "BE");    /* Bilateral Ears */
    addParams(CE_0163_1, "BN");    /* Bilateral Nares */
    addParams(CE_0163_1, "BU");    /* Buttock */
    addParams(CE_0163_1, "CT");    /* Chest Tube */
    addParams(CE_0163_1, "LA");    /* Left Arm */
    addParams(CE_0163_1, "LAC");   /* Left Anterior Chest */
    addParams(CE_0163_1, "LACF");  /* Left Antecubital Fossa */
    addParams(CE_0163_1, "LD");    /* Left Deltoid */
    addParams(CE_0163_1, "LE");    /* Left Ear */
    addParams(CE_0163_1, "LEJ");   /* Left External Jugular */
    addParams(CE_0163_1, "LF");    /* Left Foot */
    addParams(CE_0163_1, "LG");    /* Left Gluteus Medius */
    addParams(CE_0163_1, "LH");    /* Left Hand */
    addParams(CE_0163_1, "LIJ");   /* Left Internal Jugular */
    addParams(CE_0163_1, "LLAQ");  /* Left Lower Abd Quadrant */
    addParams(CE_0163_1, "LLFA");  /* Left Lower Forearm */
    addParams(CE_0163_1, "LMFA");  /* Left Mid Forearm */
    addParams(CE_0163_1, "LN");    /* Left Naris */
    addParams(CE_0163_1, "LPC");   /* Left Posterior Chest */
    addParams(CE_0163_1, "LSC");   /* Left Subclavian */
    addParams(CE_0163_1, "LT");    /* Left Thigh */
    addParams(CE_0163_1, "LUA");   /* Left Upper Arm */
    addParams(CE_0163_1, "LUAQ");  /* Left Upper Abd Quadrant */
    addParams(CE_0163_1, "LUFA");  /* Left Upper Forearm */
    addParams(CE_0163_1, "LVG");   /* Left Ventragluteal */
    addParams(CE_0163_1, "LVL");   /* Left Vastus Lateralis */
    addParams(CE_0163_1, "NB");    /* Nebulized */
    addParams(CE_0163_1, "OD");    /* Right Eye */
    addParams(CE_0163_1, "OS");    /* Left Eye */
    addParams(CE_0163_1, "OU");    /* Bilateral Eyes */
    addParams(CE_0163_1, "PA");    /* Perianal */
    addParams(CE_0163_1, "PERIN"); /* Perineal */
    addParams(CE_0163_1, "RA");    /* Right Arm */
    addParams(CE_0163_1, "RAC");   /* Right Anterior Chest */
    addParams(CE_0163_1, "RACF");  /* Right Antecubital Fossa */
    addParams(CE_0163_1, "RD");    /* Right Deltoid */
    addParams(CE_0163_1, "RE");    /* Right Ear */
    addParams(CE_0163_1, "REJ");   /* Right External Jugular */
    addParams(CE_0163_1, "RF");    /* Right Foot */
    addParams(CE_0163_1, "RG");    /* Right Gluteus Medius */
    addParams(CE_0163_1, "RH");    /* Right Hand */
    addParams(CE_0163_1, "RIJ");   /* Right Internal Jugular */
    addParams(CE_0163_1, "RLAQ");  /* Rt Lower Abd Quadrant */
    addParams(CE_0163_1, "RLFA");  /* Right Lower Forearm */
    addParams(CE_0163_1, "RMFA");  /* Right Mid Forearm */
    addParams(CE_0163_1, "RN");    /* Right Naris */
    addParams(CE_0163_1, "RPC");   /* Right Posterior Chest */
    addParams(CE_0163_1, "RSC");   /* Right Subclavian */
    addParams(CE_0163_1, "RT");    /* Right Thigh */
    addParams(CE_0163_1, "RUA");   /* Right Upper Arm */
    addParams(CE_0163_1, "RUAQ");  /* Right Upper Abd Quadrant */
    addParams(CE_0163_1, "RUFA");  /* Right Upper Forearm */
    addParams(CE_0163_1, "RVG");   /* Right Ventragluteal */
    addParams(CE_0163_1, "RVL");   /* Right Vastus Lateralis */
    addObject<ST>(CE_0163_2, "CE_0163.2", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0163_3, "CE_0163.3", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0163_4, "CE_0163.4", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0163_5, "CE_0163.5", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0163_6, "CE_0163.6", HL7::initialized,
		  HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * identifier (ST)
   */
  ST *getCE_0163_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0163_1);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0163_1);
  }

  bool isCE_0163_1(size_t index = 0) {
    try {
      return this->getObject(index, CE_0163_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0163_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * text
   */
  ST *getCE_0163_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0163_2);
  }

  ST *getText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0163_2);
  }

  bool isCE_0163_2(size_t index = 0) {
    try {
      return this->getObject(index, CE_0163_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0163_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of coding system
   */
  IS *getCE_0163_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0163_3);
  }

  IS *getNameOfCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0163_3);
  }

  bool isCE_0163_3(size_t index = 0) {
    try {
      return this->getObject(index, CE_0163_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0163_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate identifier (ST)
   */
  ST *getCE_0163_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0163_4);
  }

  ST *getAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0163_4);
  }

  bool isCE_0163_4(size_t index = 0) {
    try {
      return this->getObject(index, CE_0163_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0163_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate text
   */
  ST *getCE_0163_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0163_5);
  }

  ST *getAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0163_5);
  }

  bool isCE_0163_5(size_t index = 0) {
    try {
      return this->getObject(index, CE_0163_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0163_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of alternate coding system
   */
  IS *getCE_0163_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0163_6);
  }

  IS *getNameOfAlternateCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0163_6);
  }

  bool isCE_0163_6(size_t index = 0) {
    try {
      return this->getObject(index, CE_0163_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0163_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CE_0163 */

} /* End HL7_24 */

#endif /*__CE_0163_v24_H__ */
