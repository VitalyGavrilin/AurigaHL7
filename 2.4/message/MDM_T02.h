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


#ifndef __MDM_T02__24_H__
#define __MDM_T02__24_H__

#include "../../common/Util.h"
#include "../segment/EVN.h"
#include "../segment/MSH.h"
#include "../segment/OBX.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/TXA.h"

namespace HL7_24 {

/* MDM_T02 */
struct MDM_T02 : public HL7Message {
  MDM_T02() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MDM_T02_MSH_1,
    MDM_T02_EVN_2,
    MDM_T02_PID_3,
    MDM_T02_PV1_4,
    MDM_T02_TXA_5,
    MDM_T02_OBX_7,
    FIELD_ID_MAX
  };

  const char* className() const { return "MDM_T02"; }
  MDM_T02* create() const { return new MDM_T02(); }

 private:
  /* Initialize object */
  void init() {
    setName("MDM_T02");
    addObject<MSH>(MDM_T02_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EVN>(MDM_T02_EVN_2, "EVN.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<PID>(MDM_T02_PID_3, "PID.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV1>(MDM_T02_PV1_4, "PV1.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<TXA>(MDM_T02_TXA_5, "TXA.5", HL7::initialized,
		   HL7::repetition_off);
    addObject<OBX>(MDM_T02_OBX_7, "OBX.7", HL7::initialized,
		   HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MDM_T02_MSH_1);
  }
  EVN* getEVN_2(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, MDM_T02_EVN_2);
  }
  PID* getPID_3(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, MDM_T02_PID_3);
  }
  PV1* getPV1_4(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, MDM_T02_PV1_4);
  }
  TXA* getTXA_5(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, MDM_T02_TXA_5);
  }
  OBX* getOBX_7(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, MDM_T02_OBX_7);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T02_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_2(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T02_EVN_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_3(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T02_PID_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_4(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T02_PV1_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_5(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T02_TXA_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_7(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T02_OBX_7) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MDM_T02_ */
} /* namespace HL7_24 */
#endif /*  __MDM_T02__24_H__ */
