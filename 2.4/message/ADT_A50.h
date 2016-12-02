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


#ifndef __ADT_A50__24_H__
#define __ADT_A50__24_H__

#include "../../common/Util.h"
#include "../segment/EVN.h"
#include "../segment/MRG.h"
#include "../segment/MSH.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"

namespace HL7_24 {

/* ADT_A50 */
struct ADT_A50 : public HL7Message {
  ADT_A50() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADT_A50_MSH_1,
    ADT_A50_EVN_2,
    ADT_A50_PID_3,
    ADT_A50_PD1_5,
    ADT_A50_MRG_7,
    ADT_A50_PV1_8,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADT_A50"; }
  ADT_A50* create() const { return new ADT_A50(); }

 private:
  /* Initialize object */
  void init() {
    setName("ADT_A50");
    addObject<MSH>(ADT_A50_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EVN>(ADT_A50_EVN_2, "EVN.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<PID>(ADT_A50_PID_3, "PID.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(ADT_A50_PD1_5, "PD1.5", HL7::optional, HL7::repetition_off);
    addObject<MRG>(ADT_A50_MRG_7, "MRG.7", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV1>(ADT_A50_PV1_8, "PV1.8", HL7::initialized,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ADT_A50_MSH_1);
  }
  EVN* getEVN_2(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, ADT_A50_EVN_2);
  }
  PID* getPID_3(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ADT_A50_PID_3);
  }
  PD1* getPD1_5(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ADT_A50_PD1_5);
  }
  MRG* getMRG_7(size_t index = 0) {
    return (MRG*)this->getObjectSafe(index, ADT_A50_MRG_7);
  }
  PV1* getPV1_8(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ADT_A50_PV1_8);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A50_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_2(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A50_EVN_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_3(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A50_PID_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_5(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A50_PD1_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMRG_7(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A50_MRG_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_8(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A50_PV1_8) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A50_ */
} /* namespace HL7_24 */
#endif /*  __ADT_A50__24_H__ */
