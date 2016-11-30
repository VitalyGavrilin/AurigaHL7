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


#ifndef __MDM_T01__24_H__
#define __MDM_T01__24_H__

#include "../../common/Util.h"
#include "../segment/EVN.h"
#include "../segment/MSH.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/TXA.h"

namespace HL7_24 {

/* MDM_T01 */
struct MDM_T01 : public HL7Message {
  MDM_T01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MDM_T01_MSH_1,
    MDM_T01_EVN_2,
    MDM_T01_PID_3,
    MDM_T01_PV1_4,
    MDM_T01_TXA_5,
    FIELD_ID_MAX
  };

  const char* className() const { return "MDM_T01"; }
  MDM_T01* create() const { return new MDM_T01(); }

 private:
  /* Initialize object */
  void init() {
    setName("MDM_T01");
    addObject<MSH>(MDM_T01_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EVN>(MDM_T01_EVN_2, "EVN.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<PID>(MDM_T01_PID_3, "PID.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV1>(MDM_T01_PV1_4, "PV1.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<TXA>(MDM_T01_TXA_5, "TXA.5", HL7::initialized,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MDM_T01_MSH_1);
  }
  EVN* getEVN_2(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, MDM_T01_EVN_2);
  }
  PID* getPID_3(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, MDM_T01_PID_3);
  }
  PV1* getPV1_4(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, MDM_T01_PV1_4);
  }
  TXA* getTXA_5(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, MDM_T01_TXA_5);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_2(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T01_EVN_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_3(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T01_PID_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_4(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T01_PV1_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_5(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T01_TXA_5) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MDM_T01_ */
} /* namespace HL7_24 */
#endif /*  __MDM_T01__24_H__ */
