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


#ifndef __BAR_P10__24_H__
#define __BAR_P10__24_H__

#include "../../common/Util.h"
#include "../segment/DG1.h"
#include "../segment/EVN.h"
#include "../segment/GP1.h"
#include "../segment/GP2.h"
#include "../segment/MSH.h"
#include "../segment/PID.h"
#include "../segment/PR1.h"
#include "../segment/PV1.h"

namespace HL7_24 {

/* Internal structures/groups */
struct BAR_P10_PROCEDURE; /* PROCEDURE */

/* PROCEDURE */
struct BAR_P10_PROCEDURE : public HL7Group {
  BAR_P10_PROCEDURE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { BAR_P10_PR1_13, BAR_P10_GP2_15, FIELD_ID_MAX };

  const char* className() const { return "BAR_P10_PROCEDURE"; }
  BAR_P10_PROCEDURE* create() const { return new BAR_P10_PROCEDURE(); }

 private:
  /* Initialize object */
  void init() {
    setName("BAR_P10.PROCEDURE");
    addObject<PR1>(BAR_P10_PR1_13, "PR1.13", HL7::initialized,
		   HL7::repetition_off);
    addObject<GP2>(BAR_P10_GP2_15, "GP2.15", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  PR1* getPR1_13(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, BAR_P10_PR1_13);
  }
  GP2* getGP2_15(size_t index = 0) {
    return (GP2*)this->getObjectSafe(index, BAR_P10_GP2_15);
  }

  /* Checker list */
  bool isPR1_13(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P10_PR1_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGP2_15(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P10_GP2_15) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* BAR_P10_11 */

/* BAR_P10 */
struct BAR_P10 : public HL7Message {
  BAR_P10() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    BAR_P10_MSH_1,
    BAR_P10_EVN_2,
    BAR_P10_PID_3,
    BAR_P10_PV1_4,
    BAR_P10_DG1_7,
    BAR_P10_GP1_10,
    BAR_P10_PROCEDURE_11,
    FIELD_ID_MAX
  };

  const char* className() const { return "BAR_P10"; }
  BAR_P10* create() const { return new BAR_P10(); }

  /* Initialize object */
  void init() {
    setName("BAR_P10");
    addObject<MSH>(BAR_P10_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EVN>(BAR_P10_EVN_2, "EVN.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<PID>(BAR_P10_PID_3, "PID.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV1>(BAR_P10_PV1_4, "PV1.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<DG1>(BAR_P10_DG1_7, "DG1.7", HL7::optional, HL7::repetition_on);
    addObject<GP1>(BAR_P10_GP1_10, "GP1.10", HL7::initialized,
		   HL7::repetition_off);
    addObject<BAR_P10_PROCEDURE>(BAR_P10_PROCEDURE_11, "BAR_P10.PROCEDURE",
				 HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, BAR_P10_MSH_1);
  }
  EVN* getEVN_2(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, BAR_P10_EVN_2);
  }
  PID* getPID_3(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, BAR_P10_PID_3);
  }
  PV1* getPV1_4(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, BAR_P10_PV1_4);
  }
  DG1* getDG1_7(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, BAR_P10_DG1_7);
  }
  GP1* getGP1_10(size_t index = 0) {
    return (GP1*)this->getObjectSafe(index, BAR_P10_GP1_10);
  }
  BAR_P10_PROCEDURE* getPROCEDURE(size_t index = 0) {
    return (BAR_P10_PROCEDURE*)this->getObjectSafe(index, BAR_P10_PROCEDURE_11);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P10_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_2(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P10_EVN_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_3(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P10_PID_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_4(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P10_PV1_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_7(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P10_DG1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGP1_10(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P10_GP1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROCEDURE(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P10_PROCEDURE_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* BAR_P10_ */
} /* namespace HL7_24 */
#endif /*  __BAR_P10__24_H__ */
