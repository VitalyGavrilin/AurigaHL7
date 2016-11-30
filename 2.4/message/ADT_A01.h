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


#ifndef __ADT_A01__24_H__
#define __ADT_A01__24_H__

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
#include "../segment/PDA.h"
#include "../segment/PID.h"
#include "../segment/PR1.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/ROL.h"
#include "../segment/UB1.h"
#include "../segment/UB2.h"

namespace HL7_24 {

/* Internal structures/groups */
struct ADT_A01_PROCEDURE; /* PROCEDURE */
struct ADT_A01_INSURANCE; /* INSURANCE */

/* PROCEDURE */
struct ADT_A01_PROCEDURE : public HL7Group {
  ADT_A01_PROCEDURE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ADT_A01_PR1_51, ADT_A01_ROL_54, FIELD_ID_MAX };

  const char* className() const { return "ADT_A01_PROCEDURE"; }
  ADT_A01_PROCEDURE* create() const { return new ADT_A01_PROCEDURE(); }

 private:
  /* Initialize object */
  void init() {
    setName("ADT_A01.PROCEDURE");
    addObject<PR1>(ADT_A01_PR1_51, "PR1.51", HL7::initialized,
		   HL7::repetition_off);
    addObject<ROL>(ADT_A01_ROL_54, "ROL.54", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PR1* getPR1_51(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, ADT_A01_PR1_51);
  }
  ROL* getROL_54(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADT_A01_ROL_54);
  }

  /* Checker list */
  bool isPR1_51(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_PR1_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_54(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_ROL_54) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A01_49 */

/* INSURANCE */
struct ADT_A01_INSURANCE : public HL7Group {
  ADT_A01_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADT_A01_IN1_66,
    ADT_A01_IN2_68,
    ADT_A01_IN3_72,
    ADT_A01_ROL_77,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADT_A01_INSURANCE"; }
  ADT_A01_INSURANCE* create() const { return new ADT_A01_INSURANCE(); }

  /* Initialize object */
  void init() {
    setName("ADT_A01.INSURANCE");
    addObject<IN1>(ADT_A01_IN1_66, "IN1.66", HL7::initialized,
		   HL7::repetition_off);
    addObject<IN2>(ADT_A01_IN2_68, "IN2.68", HL7::optional,
		   HL7::repetition_off);
    addObject<IN3>(ADT_A01_IN3_72, "IN3.72", HL7::optional, HL7::repetition_on);
    addObject<ROL>(ADT_A01_ROL_77, "ROL.77", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  IN1* getIN1_66(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, ADT_A01_IN1_66);
  }
  IN2* getIN2_68(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, ADT_A01_IN2_68);
  }
  IN3* getIN3_72(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, ADT_A01_IN3_72);
  }
  ROL* getROL_77(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADT_A01_ROL_77);
  }

  /* Checker list */
  bool isIN1_66(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_IN1_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_68(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_IN2_68) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_72(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_IN3_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_77(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_ROL_77) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A01_64 */

/* ADT_A01 */
struct ADT_A01 : public HL7Message {
  ADT_A01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADT_A01_MSH_1,
    ADT_A01_EVN_2,
    ADT_A01_PID_3,
    ADT_A01_PD1_5,
    ADT_A01_ROL_9,
    ADT_A01_NK1_14,
    ADT_A01_PV1_17,
    ADT_A01_PV2_19,
    ADT_A01_ROL_23,
    ADT_A01_DB1_28,
    ADT_A01_OBX_33,
    ADT_A01_AL1_38,
    ADT_A01_DG1_43,
    ADT_A01_DRG_47,
    ADT_A01_PROCEDURE_49,
    ADT_A01_GT1_61,
    ADT_A01_INSURANCE_64,
    ADT_A01_ACC_83,
    ADT_A01_UB1_86,
    ADT_A01_UB2_89,
    ADT_A01_PDA_92,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADT_A01"; }
  ADT_A01* create() const { return new ADT_A01(); }

  /* Initialize object */
  void init() {
    setName("ADT_A01");
    addObject<MSH>(ADT_A01_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EVN>(ADT_A01_EVN_2, "EVN.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<PID>(ADT_A01_PID_3, "PID.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(ADT_A01_PD1_5, "PD1.5", HL7::optional, HL7::repetition_off);
    addObject<ROL>(ADT_A01_ROL_9, "ROL.9", HL7::optional, HL7::repetition_on);
    addObject<NK1>(ADT_A01_NK1_14, "NK1.14", HL7::optional, HL7::repetition_on);
    addObject<PV1>(ADT_A01_PV1_17, "PV1.17", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(ADT_A01_PV2_19, "PV2.19", HL7::optional,
		   HL7::repetition_off);
    addObject<ROL>(ADT_A01_ROL_23, "ROL.23", HL7::optional, HL7::repetition_on);
    addObject<DB1>(ADT_A01_DB1_28, "DB1.28", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ADT_A01_OBX_33, "OBX.33", HL7::optional, HL7::repetition_on);
    addObject<AL1>(ADT_A01_AL1_38, "AL1.38", HL7::optional, HL7::repetition_on);
    addObject<DG1>(ADT_A01_DG1_43, "DG1.43", HL7::optional, HL7::repetition_on);
    addObject<DRG>(ADT_A01_DRG_47, "DRG.47", HL7::optional,
		   HL7::repetition_off);
    addObject<ADT_A01_PROCEDURE>(ADT_A01_PROCEDURE_49, "ADT_A01.PROCEDURE",
				 HL7::optional, HL7::repetition_on);
    addObject<GT1>(ADT_A01_GT1_61, "GT1.61", HL7::optional, HL7::repetition_on);
    addObject<ADT_A01_INSURANCE>(ADT_A01_INSURANCE_64, "ADT_A01.INSURANCE",
				 HL7::optional, HL7::repetition_on);
    addObject<ACC>(ADT_A01_ACC_83, "ACC.83", HL7::optional,
		   HL7::repetition_off);
    addObject<UB1>(ADT_A01_UB1_86, "UB1.86", HL7::optional,
		   HL7::repetition_off);
    addObject<UB2>(ADT_A01_UB2_89, "UB2.89", HL7::optional,
		   HL7::repetition_off);
    addObject<PDA>(ADT_A01_PDA_92, "PDA.92", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ADT_A01_MSH_1);
  }
  EVN* getEVN_2(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, ADT_A01_EVN_2);
  }
  PID* getPID_3(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ADT_A01_PID_3);
  }
  PD1* getPD1_5(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ADT_A01_PD1_5);
  }
  ROL* getROL_9(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADT_A01_ROL_9);
  }
  NK1* getNK1_14(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ADT_A01_NK1_14);
  }
  PV1* getPV1_17(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ADT_A01_PV1_17);
  }
  PV2* getPV2_19(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ADT_A01_PV2_19);
  }
  ROL* getROL_23(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADT_A01_ROL_23);
  }
  DB1* getDB1_28(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, ADT_A01_DB1_28);
  }
  OBX* getOBX_33(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ADT_A01_OBX_33);
  }
  AL1* getAL1_38(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, ADT_A01_AL1_38);
  }
  DG1* getDG1_43(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, ADT_A01_DG1_43);
  }
  DRG* getDRG_47(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, ADT_A01_DRG_47);
  }
  ADT_A01_PROCEDURE* getPROCEDURE(size_t index = 0) {
    return (ADT_A01_PROCEDURE*)this->getObjectSafe(index, ADT_A01_PROCEDURE_49);
  }
  GT1* getGT1_61(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, ADT_A01_GT1_61);
  }
  ADT_A01_INSURANCE* getINSURANCE(size_t index = 0) {
    return (ADT_A01_INSURANCE*)this->getObjectSafe(index, ADT_A01_INSURANCE_64);
  }
  ACC* getACC_83(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, ADT_A01_ACC_83);
  }
  UB1* getUB1_86(size_t index = 0) {
    return (UB1*)this->getObjectSafe(index, ADT_A01_UB1_86);
  }
  UB2* getUB2_89(size_t index = 0) {
    return (UB2*)this->getObjectSafe(index, ADT_A01_UB2_89);
  }
  PDA* getPDA_92(size_t index = 0) {
    return (PDA*)this->getObjectSafe(index, ADT_A01_PDA_92);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_2(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_EVN_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_3(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_PID_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_5(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_PD1_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_9(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_ROL_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_14(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_NK1_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_17(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_PV1_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_19(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_PV2_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_23(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_ROL_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_28(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_DB1_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_33(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_OBX_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_38(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_AL1_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_43(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_DG1_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_47(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_DRG_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROCEDURE(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_PROCEDURE_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_61(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_GT1_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINSURANCE(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_INSURANCE_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_83(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_ACC_83) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUB1_86(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_UB1_86) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUB2_89(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_UB2_89) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPDA_92(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A01_PDA_92) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A01_ */
} /* namespace HL7_24 */
#endif /*  __ADT_A01__24_H__ */
