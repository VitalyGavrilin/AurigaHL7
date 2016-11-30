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


#ifndef __ADT_A06__24_H__
#define __ADT_A06__24_H__

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
#include "../segment/MRG.h"
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
struct ADT_A06_PROCEDURE; /* PROCEDURE */
struct ADT_A06_INSURANCE; /* INSURANCE */

/* PROCEDURE */
struct ADT_A06_PROCEDURE : public HL7Group {
  ADT_A06_PROCEDURE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ADT_A06_PR1_54, ADT_A06_ROL_57, FIELD_ID_MAX };

  const char* className() const { return "ADT_A06_PROCEDURE"; }
  ADT_A06_PROCEDURE* create() const { return new ADT_A06_PROCEDURE(); }

 private:
  /* Initialize object */
  void init() {
    setName("ADT_A06.PROCEDURE");
    addObject<PR1>(ADT_A06_PR1_54, "PR1.54", HL7::initialized,
		   HL7::repetition_off);
    addObject<ROL>(ADT_A06_ROL_57, "ROL.57", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PR1* getPR1_54(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, ADT_A06_PR1_54);
  }
  ROL* getROL_57(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADT_A06_ROL_57);
  }

  /* Checker list */
  bool isPR1_54(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_PR1_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_57(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_ROL_57) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A06_52 */

/* INSURANCE */
struct ADT_A06_INSURANCE : public HL7Group {
  ADT_A06_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADT_A06_IN1_69,
    ADT_A06_IN2_71,
    ADT_A06_IN3_75,
    ADT_A06_ROL_80,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADT_A06_INSURANCE"; }
  ADT_A06_INSURANCE* create() const { return new ADT_A06_INSURANCE(); }

  /* Initialize object */
  void init() {
    setName("ADT_A06.INSURANCE");
    addObject<IN1>(ADT_A06_IN1_69, "IN1.69", HL7::initialized,
		   HL7::repetition_off);
    addObject<IN2>(ADT_A06_IN2_71, "IN2.71", HL7::optional,
		   HL7::repetition_off);
    addObject<IN3>(ADT_A06_IN3_75, "IN3.75", HL7::optional, HL7::repetition_on);
    addObject<ROL>(ADT_A06_ROL_80, "ROL.80", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  IN1* getIN1_69(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, ADT_A06_IN1_69);
  }
  IN2* getIN2_71(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, ADT_A06_IN2_71);
  }
  IN3* getIN3_75(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, ADT_A06_IN3_75);
  }
  ROL* getROL_80(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADT_A06_ROL_80);
  }

  /* Checker list */
  bool isIN1_69(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_IN1_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_71(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_IN2_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_75(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_IN3_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_80(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_ROL_80) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A06_67 */

/* ADT_A06 */
struct ADT_A06 : public HL7Message {
  ADT_A06() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADT_A06_MSH_1,
    ADT_A06_EVN_2,
    ADT_A06_PID_3,
    ADT_A06_PD1_5,
    ADT_A06_ROL_9,
    ADT_A06_MRG_13,
    ADT_A06_NK1_17,
    ADT_A06_PV1_20,
    ADT_A06_PV2_22,
    ADT_A06_ROL_26,
    ADT_A06_DB1_31,
    ADT_A06_OBX_36,
    ADT_A06_AL1_41,
    ADT_A06_DG1_46,
    ADT_A06_DRG_50,
    ADT_A06_PROCEDURE_52,
    ADT_A06_GT1_64,
    ADT_A06_INSURANCE_67,
    ADT_A06_ACC_86,
    ADT_A06_UB1_89,
    ADT_A06_UB2_92,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADT_A06"; }
  ADT_A06* create() const { return new ADT_A06(); }

  /* Initialize object */
  void init() {
    setName("ADT_A06");
    addObject<MSH>(ADT_A06_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EVN>(ADT_A06_EVN_2, "EVN.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<PID>(ADT_A06_PID_3, "PID.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(ADT_A06_PD1_5, "PD1.5", HL7::optional, HL7::repetition_off);
    addObject<ROL>(ADT_A06_ROL_9, "ROL.9", HL7::optional, HL7::repetition_on);
    addObject<MRG>(ADT_A06_MRG_13, "MRG.13", HL7::optional,
		   HL7::repetition_off);
    addObject<NK1>(ADT_A06_NK1_17, "NK1.17", HL7::optional, HL7::repetition_on);
    addObject<PV1>(ADT_A06_PV1_20, "PV1.20", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(ADT_A06_PV2_22, "PV2.22", HL7::optional,
		   HL7::repetition_off);
    addObject<ROL>(ADT_A06_ROL_26, "ROL.26", HL7::optional, HL7::repetition_on);
    addObject<DB1>(ADT_A06_DB1_31, "DB1.31", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ADT_A06_OBX_36, "OBX.36", HL7::optional, HL7::repetition_on);
    addObject<AL1>(ADT_A06_AL1_41, "AL1.41", HL7::optional, HL7::repetition_on);
    addObject<DG1>(ADT_A06_DG1_46, "DG1.46", HL7::optional, HL7::repetition_on);
    addObject<DRG>(ADT_A06_DRG_50, "DRG.50", HL7::optional,
		   HL7::repetition_off);
    addObject<ADT_A06_PROCEDURE>(ADT_A06_PROCEDURE_52, "ADT_A06.PROCEDURE",
				 HL7::optional, HL7::repetition_on);
    addObject<GT1>(ADT_A06_GT1_64, "GT1.64", HL7::optional, HL7::repetition_on);
    addObject<ADT_A06_INSURANCE>(ADT_A06_INSURANCE_67, "ADT_A06.INSURANCE",
				 HL7::optional, HL7::repetition_on);
    addObject<ACC>(ADT_A06_ACC_86, "ACC.86", HL7::optional,
		   HL7::repetition_off);
    addObject<UB1>(ADT_A06_UB1_89, "UB1.89", HL7::optional,
		   HL7::repetition_off);
    addObject<UB2>(ADT_A06_UB2_92, "UB2.92", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ADT_A06_MSH_1);
  }
  EVN* getEVN_2(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, ADT_A06_EVN_2);
  }
  PID* getPID_3(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ADT_A06_PID_3);
  }
  PD1* getPD1_5(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ADT_A06_PD1_5);
  }
  ROL* getROL_9(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADT_A06_ROL_9);
  }
  MRG* getMRG_13(size_t index = 0) {
    return (MRG*)this->getObjectSafe(index, ADT_A06_MRG_13);
  }
  NK1* getNK1_17(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ADT_A06_NK1_17);
  }
  PV1* getPV1_20(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ADT_A06_PV1_20);
  }
  PV2* getPV2_22(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ADT_A06_PV2_22);
  }
  ROL* getROL_26(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADT_A06_ROL_26);
  }
  DB1* getDB1_31(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, ADT_A06_DB1_31);
  }
  OBX* getOBX_36(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ADT_A06_OBX_36);
  }
  AL1* getAL1_41(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, ADT_A06_AL1_41);
  }
  DG1* getDG1_46(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, ADT_A06_DG1_46);
  }
  DRG* getDRG_50(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, ADT_A06_DRG_50);
  }
  ADT_A06_PROCEDURE* getPROCEDURE(size_t index = 0) {
    return (ADT_A06_PROCEDURE*)this->getObjectSafe(index, ADT_A06_PROCEDURE_52);
  }
  GT1* getGT1_64(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, ADT_A06_GT1_64);
  }
  ADT_A06_INSURANCE* getINSURANCE(size_t index = 0) {
    return (ADT_A06_INSURANCE*)this->getObjectSafe(index, ADT_A06_INSURANCE_67);
  }
  ACC* getACC_86(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, ADT_A06_ACC_86);
  }
  UB1* getUB1_89(size_t index = 0) {
    return (UB1*)this->getObjectSafe(index, ADT_A06_UB1_89);
  }
  UB2* getUB2_92(size_t index = 0) {
    return (UB2*)this->getObjectSafe(index, ADT_A06_UB2_92);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_2(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_EVN_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_3(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_PID_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_5(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_PD1_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_9(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_ROL_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMRG_13(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_MRG_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_17(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_NK1_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_20(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_PV1_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_22(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_PV2_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_26(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_ROL_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_31(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_DB1_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_36(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_OBX_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_41(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_AL1_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_46(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_DG1_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_50(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_DRG_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROCEDURE(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_PROCEDURE_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_64(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_GT1_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINSURANCE(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_INSURANCE_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_86(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_ACC_86) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUB1_89(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_UB1_89) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUB2_92(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A06_UB2_92) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A06_ */
} /* namespace HL7_24 */
#endif /*  __ADT_A06__24_H__ */
