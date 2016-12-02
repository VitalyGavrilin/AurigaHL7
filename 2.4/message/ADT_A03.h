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


#ifndef __ADT_A03__24_H__
#define __ADT_A03__24_H__

#include "../../common/Util.h"
#include "../segment/DB1.h"
#include "../segment/DG1.h"
#include "../segment/DRG.h"
#include "../segment/EVN.h"
#include "../segment/MSH.h"
#include "../segment/OBX.h"
#include "../segment/PD1.h"
#include "../segment/PDA.h"
#include "../segment/PID.h"
#include "../segment/PR1.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/ROL.h"

namespace HL7_24 {

/* Internal structures/groups */
struct ADT_A03_PROCEDURE; /* PROCEDURE */

/* PROCEDURE */
struct ADT_A03_PROCEDURE : public HL7Group {
  ADT_A03_PROCEDURE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ADT_A03_PR1_36, ADT_A03_ROL_39, FIELD_ID_MAX };

  const char* className() const { return "ADT_A03_PROCEDURE"; }
  ADT_A03_PROCEDURE* create() const { return new ADT_A03_PROCEDURE(); }

 private:
  /* Initialize object */
  void init() {
    setName("ADT_A03.PROCEDURE");
    addObject<PR1>(ADT_A03_PR1_36, "PR1.36", HL7::initialized,
		   HL7::repetition_off);
    addObject<ROL>(ADT_A03_ROL_39, "ROL.39", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PR1* getPR1_36(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, ADT_A03_PR1_36);
  }
  ROL* getROL_39(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADT_A03_ROL_39);
  }

  /* Checker list */
  bool isPR1_36(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A03_PR1_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_39(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A03_ROL_39) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A03_34 */

/* ADT_A03 */
struct ADT_A03 : public HL7Message {
  ADT_A03() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADT_A03_MSH_1,
    ADT_A03_EVN_2,
    ADT_A03_PID_3,
    ADT_A03_PD1_5,
    ADT_A03_ROL_9,
    ADT_A03_PV1_12,
    ADT_A03_PV2_14,
    ADT_A03_ROL_18,
    ADT_A03_DB1_23,
    ADT_A03_DG1_28,
    ADT_A03_DRG_32,
    ADT_A03_PROCEDURE_34,
    ADT_A03_OBX_46,
    ADT_A03_PDA_50,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADT_A03"; }
  ADT_A03* create() const { return new ADT_A03(); }

  /* Initialize object */
  void init() {
    setName("ADT_A03");
    addObject<MSH>(ADT_A03_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EVN>(ADT_A03_EVN_2, "EVN.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<PID>(ADT_A03_PID_3, "PID.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(ADT_A03_PD1_5, "PD1.5", HL7::optional, HL7::repetition_off);
    addObject<ROL>(ADT_A03_ROL_9, "ROL.9", HL7::optional, HL7::repetition_on);
    addObject<PV1>(ADT_A03_PV1_12, "PV1.12", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(ADT_A03_PV2_14, "PV2.14", HL7::optional,
		   HL7::repetition_off);
    addObject<ROL>(ADT_A03_ROL_18, "ROL.18", HL7::optional, HL7::repetition_on);
    addObject<DB1>(ADT_A03_DB1_23, "DB1.23", HL7::optional, HL7::repetition_on);
    addObject<DG1>(ADT_A03_DG1_28, "DG1.28", HL7::optional, HL7::repetition_on);
    addObject<DRG>(ADT_A03_DRG_32, "DRG.32", HL7::optional,
		   HL7::repetition_off);
    addObject<ADT_A03_PROCEDURE>(ADT_A03_PROCEDURE_34, "ADT_A03.PROCEDURE",
				 HL7::optional, HL7::repetition_on);
    addObject<OBX>(ADT_A03_OBX_46, "OBX.46", HL7::optional, HL7::repetition_on);
    addObject<PDA>(ADT_A03_PDA_50, "PDA.50", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ADT_A03_MSH_1);
  }
  EVN* getEVN_2(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, ADT_A03_EVN_2);
  }
  PID* getPID_3(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ADT_A03_PID_3);
  }
  PD1* getPD1_5(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ADT_A03_PD1_5);
  }
  ROL* getROL_9(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADT_A03_ROL_9);
  }
  PV1* getPV1_12(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ADT_A03_PV1_12);
  }
  PV2* getPV2_14(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ADT_A03_PV2_14);
  }
  ROL* getROL_18(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADT_A03_ROL_18);
  }
  DB1* getDB1_23(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, ADT_A03_DB1_23);
  }
  DG1* getDG1_28(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, ADT_A03_DG1_28);
  }
  DRG* getDRG_32(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, ADT_A03_DRG_32);
  }
  ADT_A03_PROCEDURE* getPROCEDURE(size_t index = 0) {
    return (ADT_A03_PROCEDURE*)this->getObjectSafe(index, ADT_A03_PROCEDURE_34);
  }
  OBX* getOBX_46(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ADT_A03_OBX_46);
  }
  PDA* getPDA_50(size_t index = 0) {
    return (PDA*)this->getObjectSafe(index, ADT_A03_PDA_50);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A03_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_2(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A03_EVN_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_3(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A03_PID_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_5(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A03_PD1_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_9(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A03_ROL_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_12(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A03_PV1_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_14(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A03_PV2_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_18(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A03_ROL_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_23(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A03_DB1_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_28(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A03_DG1_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_32(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A03_DRG_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROCEDURE(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A03_PROCEDURE_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_46(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A03_OBX_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPDA_50(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A03_PDA_50) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A03_ */
} /* namespace HL7_24 */
#endif /*  __ADT_A03__24_H__ */
