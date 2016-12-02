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


#ifndef __PMU_B04__24_H__
#define __PMU_B04__24_H__

#include "../../common/Util.h"
#include "../segment/EVN.h"
#include "../segment/MSH.h"
#include "../segment/ORG.h"
#include "../segment/PRA.h"
#include "../segment/STF.h"

namespace HL7_24 {

/* PMU_B04 */
struct PMU_B04 : public HL7Message {
  PMU_B04() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PMU_B04_MSH_1,
    PMU_B04_EVN_2,
    PMU_B04_STF_3,
    PMU_B04_PRA_6,
    PMU_B04_ORG_10,
    FIELD_ID_MAX
  };

  const char* className() const { return "PMU_B04"; }
  PMU_B04* create() const { return new PMU_B04(); }

 private:
  /* Initialize object */
  void init() {
    setName("PMU_B04");
    addObject<MSH>(PMU_B04_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EVN>(PMU_B04_EVN_2, "EVN.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<STF>(PMU_B04_STF_3, "STF.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<PRA>(PMU_B04_PRA_6, "PRA.6", HL7::optional, HL7::repetition_on);
    addObject<ORG>(PMU_B04_ORG_10, "ORG.10", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, PMU_B04_MSH_1);
  }
  EVN* getEVN_2(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, PMU_B04_EVN_2);
  }
  STF* getSTF_3(size_t index = 0) {
    return (STF*)this->getObjectSafe(index, PMU_B04_STF_3);
  }
  PRA* getPRA_6(size_t index = 0) {
    return (PRA*)this->getObjectSafe(index, PMU_B04_PRA_6);
  }
  ORG* getORG_10(size_t index = 0) {
    return (ORG*)this->getObjectSafe(index, PMU_B04_ORG_10);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B04_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_2(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B04_EVN_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSTF_3(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B04_STF_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRA_6(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B04_PRA_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORG_10(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B04_ORG_10) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PMU_B04_ */
} /* namespace HL7_24 */
#endif /*  __PMU_B04__24_H__ */
