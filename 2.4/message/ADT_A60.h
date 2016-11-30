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


#ifndef __ADT_A60__24_H__
#define __ADT_A60__24_H__

#include "../../common/Util.h"
#include "../segment/EVN.h"
#include "../segment/IAM.h"
#include "../segment/MSH.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"

namespace HL7_24 {

/* ADT_A60 */
struct ADT_A60 : public HL7Message {
  ADT_A60() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADT_A60_MSH_1,
    ADT_A60_EVN_2,
    ADT_A60_PID_3,
    ADT_A60_PV1_5,
    ADT_A60_PV2_8,
    ADT_A60_IAM_12,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADT_A60"; }
  ADT_A60* create() const { return new ADT_A60(); }

 private:
  /* Initialize object */
  void init() {
    setName("ADT_A60");
    addObject<MSH>(ADT_A60_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EVN>(ADT_A60_EVN_2, "EVN.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<PID>(ADT_A60_PID_3, "PID.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV1>(ADT_A60_PV1_5, "PV1.5", HL7::optional, HL7::repetition_off);
    addObject<PV2>(ADT_A60_PV2_8, "PV2.8", HL7::optional, HL7::repetition_off);
    addObject<IAM>(ADT_A60_IAM_12, "IAM.12", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ADT_A60_MSH_1);
  }
  EVN* getEVN_2(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, ADT_A60_EVN_2);
  }
  PID* getPID_3(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ADT_A60_PID_3);
  }
  PV1* getPV1_5(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ADT_A60_PV1_5);
  }
  PV2* getPV2_8(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ADT_A60_PV2_8);
  }
  IAM* getIAM_12(size_t index = 0) {
    return (IAM*)this->getObjectSafe(index, ADT_A60_IAM_12);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A60_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_2(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A60_EVN_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_3(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A60_PID_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_5(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A60_PV1_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_8(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A60_PV2_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIAM_12(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A60_IAM_12) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A60_ */
} /* namespace HL7_24 */
#endif /*  __ADT_A60__24_H__ */
