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


#ifndef __CE_0368_v24_H__
#define __CE_0368_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/*  */
class CE_0368 : public HL7Data {
 public:
  CE_0368() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CE_0368_1, /* identifier (ST) */
    CE_0368_2, /* text */
    CE_0368_3, /* name of coding system */
    CE_0368_4, /* alternate identifier (ST) */
    CE_0368_5, /* alternate text */
    CE_0368_6, /* name of alternate coding system */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CE_0368"; }
  CE_0368 *create() const { return new CE_0368(); }

 private:
  void init() {
    // setName("CE_0368");
    /* Init members */
    addObject<ST>(CE_0368_1, "CE_0368.1", HL7::initialized,
		  HL7::repetition_off);
    addParams(CE_0368_1, "AB"); /* Abort */
    addParams(CE_0368_1, "CL"); /* Clear */
    addParams(CE_0368_1, "CN"); /* Clear Notification */
    addParams(CE_0368_1, "DI"); /* Disable Sending Events */
    addParams(CE_0368_1, "EN"); /* Enable Sending Events */
    addParams(CE_0368_1, "ES"); /* Emergency -stop */
    addParams(
	CE_0368_1,
	"EX"); /* Execute (command specified in field Parameters (ST) 01394) */
    addParams(CE_0368_1, "IN"); /* Initialize/Initiate */
    addParams(CE_0368_1, "LC"); /* Local Control Request */
    addParams(CE_0368_1, "LK"); /* Lock */
    addParams(CE_0368_1, "LO"); /* Load */
    addParams(CE_0368_1, "PA"); /* Pause */
    addParams(CE_0368_1, "RC"); /* Remote Control Request */
    addParams(CE_0368_1, "RE"); /* Resume */
    addParams(CE_0368_1, "SA"); /* Sampling */
    addParams(CE_0368_1, "SU"); /* Setup */
    addParams(CE_0368_1, "TT"); /* Transport To */
    addParams(CE_0368_1, "UC"); /* Unlock */
    addParams(CE_0368_1, "UN"); /* Unload */
    addObject<ST>(CE_0368_2, "CE_0368.2", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0368_3, "CE_0368.3", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0368_4, "CE_0368.4", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0368_5, "CE_0368.5", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0368_6, "CE_0368.6", HL7::initialized,
		  HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * identifier (ST)
   */
  ST *getCE_0368_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0368_1);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0368_1);
  }

  bool isCE_0368_1(size_t index = 0) {
    try {
      return this->getObject(index, CE_0368_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0368_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * text
   */
  ST *getCE_0368_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0368_2);
  }

  ST *getText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0368_2);
  }

  bool isCE_0368_2(size_t index = 0) {
    try {
      return this->getObject(index, CE_0368_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0368_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of coding system
   */
  IS *getCE_0368_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0368_3);
  }

  IS *getNameOfCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0368_3);
  }

  bool isCE_0368_3(size_t index = 0) {
    try {
      return this->getObject(index, CE_0368_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0368_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate identifier (ST)
   */
  ST *getCE_0368_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0368_4);
  }

  ST *getAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0368_4);
  }

  bool isCE_0368_4(size_t index = 0) {
    try {
      return this->getObject(index, CE_0368_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0368_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate text
   */
  ST *getCE_0368_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0368_5);
  }

  ST *getAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0368_5);
  }

  bool isCE_0368_5(size_t index = 0) {
    try {
      return this->getObject(index, CE_0368_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0368_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of alternate coding system
   */
  IS *getCE_0368_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0368_6);
  }

  IS *getNameOfAlternateCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0368_6);
  }

  bool isCE_0368_6(size_t index = 0) {
    try {
      return this->getObject(index, CE_0368_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0368_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CE_0368 */

} /* End HL7_24 */

#endif /*__CE_0368_v24_H__ */
