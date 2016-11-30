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


#ifndef __BAR_P01__24_H__
#define __BAR_P01__24_H__

#include "../../common/Util.h"
#include "../segment/ACC.h"
#include "../segment/AL1.h"
#include "../segment/DB1.h"
#include "../segment/DG1.h"
#include "../segment/DRG.h"
#include "../segment/EVN.h"
#include "../segment/GT1.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IN3.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
#include "../segment/OBX.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PR1.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/ROL.h"
#include "../segment/UB1.h"
#include "../segment/UB2.h"

namespace HL7_24 {

/* Internal structures/groups */
struct BAR_P01_PROCEDURE; /* PROCEDURE */
struct BAR_P01_INSURANCE; /* INSURANCE */
struct BAR_P01_VISIT;     /* VISIT */

/* PROCEDURE */
struct BAR_P01_PROCEDURE : public HL7Group {
  BAR_P01_PROCEDURE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { BAR_P01_PR1_49, BAR_P01_ROL_52, FIELD_ID_MAX };

  const char* className() const { return "BAR_P01_PROCEDURE"; }
  BAR_P01_PROCEDURE* create() const { return new BAR_P01_PROCEDURE(); }

 private:
  /* Initialize object */
  void init() {
    setName("BAR_P01.PROCEDURE");
    addObject<PR1>(BAR_P01_PR1_49, "PR1.49", HL7::initialized,
		   HL7::repetition_off);
    addObject<ROL>(BAR_P01_ROL_52, "ROL.52", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PR1* getPR1_49(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, BAR_P01_PR1_49);
  }
  ROL* getROL_52(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, BAR_P01_ROL_52);
  }

  /* Checker list */
  bool isPR1_49(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_PR1_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_52(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_ROL_52) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* BAR_P01_47 */

/* INSURANCE */
struct BAR_P01_INSURANCE : public HL7Group {
  BAR_P01_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    BAR_P01_IN1_69,
    BAR_P01_IN2_71,
    BAR_P01_IN3_75,
    BAR_P01_ROL_80,
    FIELD_ID_MAX
  };

  const char* className() const { return "BAR_P01_INSURANCE"; }
  BAR_P01_INSURANCE* create() const { return new BAR_P01_INSURANCE(); }

  /* Initialize object */
  void init() {
    setName("BAR_P01.INSURANCE");
    addObject<IN1>(BAR_P01_IN1_69, "IN1.69", HL7::initialized,
		   HL7::repetition_off);
    addObject<IN2>(BAR_P01_IN2_71, "IN2.71", HL7::optional,
		   HL7::repetition_off);
    addObject<IN3>(BAR_P01_IN3_75, "IN3.75", HL7::optional, HL7::repetition_on);
    addObject<ROL>(BAR_P01_ROL_80, "ROL.80", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  IN1* getIN1_69(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, BAR_P01_IN1_69);
  }
  IN2* getIN2_71(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, BAR_P01_IN2_71);
  }
  IN3* getIN3_75(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, BAR_P01_IN3_75);
  }
  ROL* getROL_80(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, BAR_P01_ROL_80);
  }

  /* Checker list */
  bool isIN1_69(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_IN1_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_71(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_IN2_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_75(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_IN3_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_80(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_ROL_80) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* BAR_P01_67 */

/* VISIT */
struct BAR_P01_VISIT : public HL7Group {
  BAR_P01_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    BAR_P01_PV1_14,
    BAR_P01_PV2_17,
    BAR_P01_ROL_21,
    BAR_P01_DB1_26,
    BAR_P01_OBX_31,
    BAR_P01_AL1_36,
    BAR_P01_DG1_41,
    BAR_P01_DRG_45,
    BAR_P01_PROCEDURE_47,
    BAR_P01_GT1_59,
    BAR_P01_NK1_64,
    BAR_P01_INSURANCE_67,
    BAR_P01_ACC_86,
    BAR_P01_UB1_89,
    BAR_P01_UB2_92,
    FIELD_ID_MAX
  };

  const char* className() const { return "BAR_P01_VISIT"; }
  BAR_P01_VISIT* create() const { return new BAR_P01_VISIT(); }

  /* Initialize object */
  void init() {
    setName("BAR_P01.VISIT");
    addObject<PV1>(BAR_P01_PV1_14, "PV1.14", HL7::optional,
		   HL7::repetition_off);
    addObject<PV2>(BAR_P01_PV2_17, "PV2.17", HL7::optional,
		   HL7::repetition_off);
    addObject<ROL>(BAR_P01_ROL_21, "ROL.21", HL7::optional, HL7::repetition_on);
    addObject<DB1>(BAR_P01_DB1_26, "DB1.26", HL7::optional, HL7::repetition_on);
    addObject<OBX>(BAR_P01_OBX_31, "OBX.31", HL7::optional, HL7::repetition_on);
    addObject<AL1>(BAR_P01_AL1_36, "AL1.36", HL7::optional, HL7::repetition_on);
    addObject<DG1>(BAR_P01_DG1_41, "DG1.41", HL7::optional, HL7::repetition_on);
    addObject<DRG>(BAR_P01_DRG_45, "DRG.45", HL7::optional,
		   HL7::repetition_off);
    addObject<BAR_P01_PROCEDURE>(BAR_P01_PROCEDURE_47, "BAR_P01.PROCEDURE",
				 HL7::optional, HL7::repetition_on);
    addObject<GT1>(BAR_P01_GT1_59, "GT1.59", HL7::optional, HL7::repetition_on);
    addObject<NK1>(BAR_P01_NK1_64, "NK1.64", HL7::optional, HL7::repetition_on);
    addObject<BAR_P01_INSURANCE>(BAR_P01_INSURANCE_67, "BAR_P01.INSURANCE",
				 HL7::optional, HL7::repetition_on);
    addObject<ACC>(BAR_P01_ACC_86, "ACC.86", HL7::optional,
		   HL7::repetition_off);
    addObject<UB1>(BAR_P01_UB1_89, "UB1.89", HL7::optional,
		   HL7::repetition_off);
    addObject<UB2>(BAR_P01_UB2_92, "UB2.92", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  PV1* getPV1_14(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, BAR_P01_PV1_14);
  }
  PV2* getPV2_17(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, BAR_P01_PV2_17);
  }
  ROL* getROL_21(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, BAR_P01_ROL_21);
  }
  DB1* getDB1_26(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, BAR_P01_DB1_26);
  }
  OBX* getOBX_31(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, BAR_P01_OBX_31);
  }
  AL1* getAL1_36(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, BAR_P01_AL1_36);
  }
  DG1* getDG1_41(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, BAR_P01_DG1_41);
  }
  DRG* getDRG_45(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, BAR_P01_DRG_45);
  }
  BAR_P01_PROCEDURE* getPROCEDURE(size_t index = 0) {
    return (BAR_P01_PROCEDURE*)this->getObjectSafe(index, BAR_P01_PROCEDURE_47);
  }
  GT1* getGT1_59(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, BAR_P01_GT1_59);
  }
  NK1* getNK1_64(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, BAR_P01_NK1_64);
  }
  BAR_P01_INSURANCE* getINSURANCE(size_t index = 0) {
    return (BAR_P01_INSURANCE*)this->getObjectSafe(index, BAR_P01_INSURANCE_67);
  }
  ACC* getACC_86(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, BAR_P01_ACC_86);
  }
  UB1* getUB1_89(size_t index = 0) {
    return (UB1*)this->getObjectSafe(index, BAR_P01_UB1_89);
  }
  UB2* getUB2_92(size_t index = 0) {
    return (UB2*)this->getObjectSafe(index, BAR_P01_UB2_92);
  }

  /* Checker list */
  bool isPV1_14(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_PV1_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_17(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_PV2_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_21(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_ROL_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_26(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_DB1_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_31(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_OBX_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_36(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_AL1_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_41(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_DG1_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_45(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_DRG_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROCEDURE(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_PROCEDURE_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_59(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_GT1_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_64(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_NK1_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINSURANCE(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_INSURANCE_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_86(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_ACC_86) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUB1_89(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_UB1_89) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUB2_92(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_UB2_92) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* BAR_P01_12 */

/* BAR_P01 */
struct BAR_P01 : public HL7Message {
  BAR_P01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    BAR_P01_MSH_1,
    BAR_P01_EVN_2,
    BAR_P01_PID_3,
    BAR_P01_PD1_5,
    BAR_P01_ROL_9,
    BAR_P01_VISIT_12,
    FIELD_ID_MAX
  };

  const char* className() const { return "BAR_P01"; }
  BAR_P01* create() const { return new BAR_P01(); }

  /* Initialize object */
  void init() {
    setName("BAR_P01");
    addObject<MSH>(BAR_P01_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EVN>(BAR_P01_EVN_2, "EVN.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<PID>(BAR_P01_PID_3, "PID.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(BAR_P01_PD1_5, "PD1.5", HL7::optional, HL7::repetition_off);
    addObject<ROL>(BAR_P01_ROL_9, "ROL.9", HL7::optional, HL7::repetition_on);
    addObject<BAR_P01_VISIT>(BAR_P01_VISIT_12, "BAR_P01.VISIT",
			     HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, BAR_P01_MSH_1);
  }
  EVN* getEVN_2(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, BAR_P01_EVN_2);
  }
  PID* getPID_3(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, BAR_P01_PID_3);
  }
  PD1* getPD1_5(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, BAR_P01_PD1_5);
  }
  ROL* getROL_9(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, BAR_P01_ROL_9);
  }
  BAR_P01_VISIT* getVISIT(size_t index = 0) {
    return (BAR_P01_VISIT*)this->getObjectSafe(index, BAR_P01_VISIT_12);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_2(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_EVN_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_3(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_PID_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_5(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_PD1_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_9(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_ROL_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVISIT(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_VISIT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* BAR_P01_ */
} /* namespace HL7_24 */
#endif /*  __BAR_P01__24_H__ */
