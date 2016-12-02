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


#ifndef __EAC_U07__24_H__
#define __EAC_U07__24_H__

#include "../../common/Util.h"
#include "../segment/CNS.h"
#include "../segment/ECD.h"
#include "../segment/EQU.h"
#include "../segment/MSH.h"
#include "../segment/ROL.h"
#include "../segment/SAC.h"

namespace HL7_24 {

/* EAC_U07 */
struct EAC_U07 : public HL7Message {
  EAC_U07() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EAC_U07_MSH_1,
    EAC_U07_EQU_2,
    EAC_U07_ECD_4,
    EAC_U07_SAC_7,
    EAC_U07_CNS_10,
    EAC_U07_ROL_13,
    FIELD_ID_MAX
  };

  const char* className() const { return "EAC_U07"; }
  EAC_U07* create() const { return new EAC_U07(); }

 private:
  /* Initialize object */
  void init() {
    setName("EAC_U07");
    addObject<MSH>(EAC_U07_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EQU>(EAC_U07_EQU_2, "EQU.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ECD>(EAC_U07_ECD_4, "ECD.4", HL7::initialized,
		   HL7::repetition_on);
    addObject<SAC>(EAC_U07_SAC_7, "SAC.7", HL7::optional, HL7::repetition_off);
    addObject<CNS>(EAC_U07_CNS_10, "CNS.10", HL7::optional,
		   HL7::repetition_off);
    addObject<ROL>(EAC_U07_ROL_13, "ROL.13", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, EAC_U07_MSH_1);
  }
  EQU* getEQU_2(size_t index = 0) {
    return (EQU*)this->getObjectSafe(index, EAC_U07_EQU_2);
  }
  ECD* getECD_4(size_t index = 0) {
    return (ECD*)this->getObjectSafe(index, EAC_U07_ECD_4);
  }
  SAC* getSAC_7(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, EAC_U07_SAC_7);
  }
  CNS* getCNS_10(size_t index = 0) {
    return (CNS*)this->getObjectSafe(index, EAC_U07_CNS_10);
  }
  ROL* getROL_13(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, EAC_U07_ROL_13);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEQU_2(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_EQU_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isECD_4(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_ECD_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_7(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_SAC_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCNS_10(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_CNS_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_13(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_ROL_13) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EAC_U07_ */
} /* namespace HL7_24 */
#endif /*  __EAC_U07__24_H__ */
