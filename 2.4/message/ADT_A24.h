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


#ifndef __ADT_A24__24_H__
#define __ADT_A24__24_H__

#include "../../common/Util.h"
#include "../segment/DB1.h"
#include "../segment/EVN.h"
#include "../segment/MSH.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"

namespace HL7_24 {

/* ADT_A24 */
struct ADT_A24 : public HL7Message {
  ADT_A24() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADT_A24_MSH_1,
    ADT_A24_EVN_2,
    ADT_A24_PID_3,
    ADT_A24_PD1_5,
    ADT_A24_PV1_8,
    ADT_A24_DB1_12,
    ADT_A24_PID_15,
    ADT_A24_PD1_17,
    ADT_A24_PV1_20,
    ADT_A24_DB1_24,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADT_A24"; }
  ADT_A24* create() const { return new ADT_A24(); }

 private:
  /* Initialize object */
  void init() {
    setName("ADT_A24");
    addObject<MSH>(ADT_A24_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EVN>(ADT_A24_EVN_2, "EVN.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<PID>(ADT_A24_PID_3, "PID.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(ADT_A24_PD1_5, "PD1.5", HL7::optional, HL7::repetition_off);
    addObject<PV1>(ADT_A24_PV1_8, "PV1.8", HL7::optional, HL7::repetition_off);
    addObject<DB1>(ADT_A24_DB1_12, "DB1.12", HL7::optional, HL7::repetition_on);
    addObject<PID>(ADT_A24_PID_15, "PID.15", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(ADT_A24_PD1_17, "PD1.17", HL7::optional,
		   HL7::repetition_off);
    addObject<PV1>(ADT_A24_PV1_20, "PV1.20", HL7::optional,
		   HL7::repetition_off);
    addObject<DB1>(ADT_A24_DB1_24, "DB1.24", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ADT_A24_MSH_1);
  }
  EVN* getEVN_2(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, ADT_A24_EVN_2);
  }
  PID* getPID_3(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ADT_A24_PID_3);
  }
  PD1* getPD1_5(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ADT_A24_PD1_5);
  }
  PV1* getPV1_8(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ADT_A24_PV1_8);
  }
  DB1* getDB1_12(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, ADT_A24_DB1_12);
  }
  PID* getPID_15(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ADT_A24_PID_15);
  }
  PD1* getPD1_17(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ADT_A24_PD1_17);
  }
  PV1* getPV1_20(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ADT_A24_PV1_20);
  }
  DB1* getDB1_24(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, ADT_A24_DB1_24);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A24_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_2(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A24_EVN_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_3(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A24_PID_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_5(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A24_PD1_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_8(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A24_PV1_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_12(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A24_DB1_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_15(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A24_PID_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_17(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A24_PD1_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_20(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A24_PV1_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_24(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A24_DB1_24) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A24_ */
} /* namespace HL7_24 */
#endif /*  __ADT_A24__24_H__ */
