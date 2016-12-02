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


#ifndef __PMU_B01__24_H__
#define __PMU_B01__24_H__

#include "../../common/Util.h"
#include "../segment/AFF.h"
#include "../segment/EDU.h"
#include "../segment/EVN.h"
#include "../segment/LAN.h"
#include "../segment/MSH.h"
#include "../segment/ORG.h"
#include "../segment/PRA.h"
#include "../segment/STF.h"

namespace HL7_24 {

/* PMU_B01 */
struct PMU_B01 : public HL7Message {
  PMU_B01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PMU_B01_MSH_1,
    PMU_B01_EVN_2,
    PMU_B01_STF_3,
    PMU_B01_PRA_6,
    PMU_B01_ORG_11,
    PMU_B01_AFF_16,
    PMU_B01_LAN_21,
    PMU_B01_EDU_26,
    FIELD_ID_MAX
  };

  const char* className() const { return "PMU_B01"; }
  PMU_B01* create() const { return new PMU_B01(); }

 private:
  /* Initialize object */
  void init() {
    setName("PMU_B01");
    addObject<MSH>(PMU_B01_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EVN>(PMU_B01_EVN_2, "EVN.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<STF>(PMU_B01_STF_3, "STF.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<PRA>(PMU_B01_PRA_6, "PRA.6", HL7::optional, HL7::repetition_on);
    addObject<ORG>(PMU_B01_ORG_11, "ORG.11", HL7::optional, HL7::repetition_on);
    addObject<AFF>(PMU_B01_AFF_16, "AFF.16", HL7::optional, HL7::repetition_on);
    addObject<LAN>(PMU_B01_LAN_21, "LAN.21", HL7::optional, HL7::repetition_on);
    addObject<EDU>(PMU_B01_EDU_26, "EDU.26", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, PMU_B01_MSH_1);
  }
  EVN* getEVN_2(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, PMU_B01_EVN_2);
  }
  STF* getSTF_3(size_t index = 0) {
    return (STF*)this->getObjectSafe(index, PMU_B01_STF_3);
  }
  PRA* getPRA_6(size_t index = 0) {
    return (PRA*)this->getObjectSafe(index, PMU_B01_PRA_6);
  }
  ORG* getORG_11(size_t index = 0) {
    return (ORG*)this->getObjectSafe(index, PMU_B01_ORG_11);
  }
  AFF* getAFF_16(size_t index = 0) {
    return (AFF*)this->getObjectSafe(index, PMU_B01_AFF_16);
  }
  LAN* getLAN_21(size_t index = 0) {
    return (LAN*)this->getObjectSafe(index, PMU_B01_LAN_21);
  }
  EDU* getEDU_26(size_t index = 0) {
    return (EDU*)this->getObjectSafe(index, PMU_B01_EDU_26);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_2(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B01_EVN_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSTF_3(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B01_STF_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRA_6(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B01_PRA_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORG_11(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B01_ORG_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAFF_16(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B01_AFF_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isLAN_21(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B01_LAN_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEDU_26(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B01_EDU_26) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PMU_B01_ */
} /* namespace HL7_24 */
#endif /*  __PMU_B01__24_H__ */
