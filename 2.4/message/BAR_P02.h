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


#ifndef __BAR_P02__24_H__
#define __BAR_P02__24_H__

#include "../../common/Util.h"
#include "../segment/DB1.h"
#include "../segment/EVN.h"
#include "../segment/MSH.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"

namespace HL7_24 {

/* Internal structures/groups */
struct BAR_P02_PATIENT; /* PATIENT */

/* PATIENT */
struct BAR_P02_PATIENT : public HL7Group {
  BAR_P02_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    BAR_P02_PID_4,
    BAR_P02_PD1_6,
    BAR_P02_PV1_9,
    BAR_P02_DB1_13,
    FIELD_ID_MAX
  };

  const char* className() const { return "BAR_P02_PATIENT"; }
  BAR_P02_PATIENT* create() const { return new BAR_P02_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("BAR_P02.PATIENT");
    addObject<PID>(BAR_P02_PID_4, "PID.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(BAR_P02_PD1_6, "PD1.6", HL7::optional, HL7::repetition_off);
    addObject<PV1>(BAR_P02_PV1_9, "PV1.9", HL7::optional, HL7::repetition_off);
    addObject<DB1>(BAR_P02_DB1_13, "DB1.13", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PID* getPID_4(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, BAR_P02_PID_4);
  }
  PD1* getPD1_6(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, BAR_P02_PD1_6);
  }
  PV1* getPV1_9(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, BAR_P02_PV1_9);
  }
  DB1* getDB1_13(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, BAR_P02_DB1_13);
  }

  /* Checker list */
  bool isPID_4(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P02_PID_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_6(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P02_PD1_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_9(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P02_PV1_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_13(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P02_DB1_13) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* BAR_P02_3 */

/* BAR_P02 */
struct BAR_P02 : public HL7Message {
  BAR_P02() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    BAR_P02_MSH_1,
    BAR_P02_EVN_2,
    BAR_P02_PATIENT_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "BAR_P02"; }
  BAR_P02* create() const { return new BAR_P02(); }

  /* Initialize object */
  void init() {
    setName("BAR_P02");
    addObject<MSH>(BAR_P02_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EVN>(BAR_P02_EVN_2, "EVN.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<BAR_P02_PATIENT>(BAR_P02_PATIENT_3, "BAR_P02.PATIENT",
			       HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, BAR_P02_MSH_1);
  }
  EVN* getEVN_2(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, BAR_P02_EVN_2);
  }
  BAR_P02_PATIENT* getPATIENT(size_t index = 0) {
    return (BAR_P02_PATIENT*)this->getObjectSafe(index, BAR_P02_PATIENT_3);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P02_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_2(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P02_EVN_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P02_PATIENT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* BAR_P02_ */
} /* namespace HL7_24 */
#endif /*  __BAR_P02__24_H__ */
