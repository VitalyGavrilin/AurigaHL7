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


#ifndef __OMP_O09__24_H__
#define __OMP_O09__24_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/BLG.h"
#include "../segment/FT1.h"
#include "../segment/GT1.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IN3.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/RXC.h"
#include "../segment/RXO.h"
#include "../segment/RXR.h"

namespace HL7_24 {

/* Internal structures/groups */
struct OMP_O09_PATIENT_VISIT; /* PATIENT_VISIT */
struct OMP_O09_INSURANCE;     /* INSURANCE */
struct OMP_O09_PATIENT;       /* PATIENT */
struct OMP_O09_COMPONENT;     /* COMPONENT */
struct OMP_O09_OBSERVATION;   /* OBSERVATION */
struct OMP_O09_ORDER;	 /* ORDER */

/* PATIENT_VISIT */
struct OMP_O09_PATIENT_VISIT : public HL7Group {
  OMP_O09_PATIENT_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { OMP_O09_PV1_18, OMP_O09_PV2_20, FIELD_ID_MAX };

  const char* className() const { return "OMP_O09_PATIENT_VISIT"; }
  OMP_O09_PATIENT_VISIT* create() const { return new OMP_O09_PATIENT_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMP_O09.PATIENT_VISIT");
    addObject<PV1>(OMP_O09_PV1_18, "PV1.18", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(OMP_O09_PV2_20, "PV2.20", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  PV1* getPV1_18(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMP_O09_PV1_18);
  }
  PV2* getPV2_20(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMP_O09_PV2_20);
  }

  /* Checker list */
  bool isPV1_18(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PV1_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_20(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PV2_20) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMP_O09_17 */

/* INSURANCE */
struct OMP_O09_INSURANCE : public HL7Group {
  OMP_O09_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMP_O09_IN1_25,
    OMP_O09_IN2_27,
    OMP_O09_IN3_30,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMP_O09_INSURANCE"; }
  OMP_O09_INSURANCE* create() const { return new OMP_O09_INSURANCE(); }

  /* Initialize object */
  void init() {
    setName("OMP_O09.INSURANCE");
    addObject<IN1>(OMP_O09_IN1_25, "IN1.25", HL7::initialized,
		   HL7::repetition_off);
    addObject<IN2>(OMP_O09_IN2_27, "IN2.27", HL7::optional,
		   HL7::repetition_off);
    addObject<IN3>(OMP_O09_IN3_30, "IN3.30", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  IN1* getIN1_25(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OMP_O09_IN1_25);
  }
  IN2* getIN2_27(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OMP_O09_IN2_27);
  }
  IN3* getIN3_30(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OMP_O09_IN3_30);
  }

  /* Checker list */
  bool isIN1_25(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_IN1_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_27(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_IN2_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_30(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_IN3_30) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMP_O09_23 */

/* PATIENT */
struct OMP_O09_PATIENT : public HL7Group {
  OMP_O09_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMP_O09_PID_8,
    OMP_O09_PD1_10,
    OMP_O09_NTE_14,
    OMP_O09_PATIENT_VISIT_17,
    OMP_O09_INSURANCE_23,
    OMP_O09_GT1_35,
    OMP_O09_AL1_39,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMP_O09_PATIENT"; }
  OMP_O09_PATIENT* create() const { return new OMP_O09_PATIENT(); }

  /* Initialize object */
  void init() {
    setName("OMP_O09.PATIENT");
    addObject<PID>(OMP_O09_PID_8, "PID.8", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(OMP_O09_PD1_10, "PD1.10", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(OMP_O09_NTE_14, "NTE.14", HL7::optional, HL7::repetition_on);
    addObject<OMP_O09_PATIENT_VISIT>(OMP_O09_PATIENT_VISIT_17,
				     "OMP_O09.PATIENT_VISIT", HL7::optional,
				     HL7::repetition_off);
    addObject<OMP_O09_INSURANCE>(OMP_O09_INSURANCE_23, "OMP_O09.INSURANCE",
				 HL7::optional, HL7::repetition_on);
    addObject<GT1>(OMP_O09_GT1_35, "GT1.35", HL7::optional,
		   HL7::repetition_off);
    addObject<AL1>(OMP_O09_AL1_39, "AL1.39", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PID* getPID_8(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMP_O09_PID_8);
  }
  PD1* getPD1_10(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMP_O09_PD1_10);
  }
  NTE* getNTE_14(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMP_O09_NTE_14);
  }
  OMP_O09_PATIENT_VISIT* getPATIENT_VISIT(size_t index = 0) {
    return (OMP_O09_PATIENT_VISIT*)this->getObjectSafe(
	index, OMP_O09_PATIENT_VISIT_17);
  }
  OMP_O09_INSURANCE* getINSURANCE(size_t index = 0) {
    return (OMP_O09_INSURANCE*)this->getObjectSafe(index, OMP_O09_INSURANCE_23);
  }
  GT1* getGT1_35(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, OMP_O09_GT1_35);
  }
  AL1* getAL1_39(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OMP_O09_AL1_39);
  }

  /* Checker list */
  bool isPID_8(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PID_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_10(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PD1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_14(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_NTE_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT_VISIT(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PATIENT_VISIT_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINSURANCE(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_INSURANCE_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_35(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_GT1_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_39(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_AL1_39) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMP_O09_7 */

/* COMPONENT */
struct OMP_O09_COMPONENT : public HL7Group {
  OMP_O09_COMPONENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { OMP_O09_RXC_56, OMP_O09_NTE_60, FIELD_ID_MAX };

  const char* className() const { return "OMP_O09_COMPONENT"; }
  OMP_O09_COMPONENT* create() const { return new OMP_O09_COMPONENT(); }

  /* Initialize object */
  void init() {
    setName("OMP_O09.COMPONENT");
    addObject<RXC>(OMP_O09_RXC_56, "RXC.56", HL7::initialized,
		   HL7::repetition_on);
    addObject<NTE>(OMP_O09_NTE_60, "NTE.60", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  RXC* getRXC_56(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, OMP_O09_RXC_56);
  }
  NTE* getNTE_60(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMP_O09_NTE_60);
  }

  /* Checker list */
  bool isRXC_56(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_RXC_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_60(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_NTE_60) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMP_O09_54 */

/* OBSERVATION */
struct OMP_O09_OBSERVATION : public HL7Group {
  OMP_O09_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { OMP_O09_OBX_66, OMP_O09_NTE_69, FIELD_ID_MAX };

  const char* className() const { return "OMP_O09_OBSERVATION"; }
  OMP_O09_OBSERVATION* create() const { return new OMP_O09_OBSERVATION(); }

  /* Initialize object */
  void init() {
    setName("OMP_O09.OBSERVATION");
    addObject<OBX>(OMP_O09_OBX_66, "OBX.66", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(OMP_O09_NTE_69, "NTE.69", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_66(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMP_O09_OBX_66);
  }
  NTE* getNTE_69(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMP_O09_NTE_69);
  }

  /* Checker list */
  bool isOBX_66(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_OBX_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_69(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_NTE_69) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMP_O09_64 */

/* ORDER */
struct OMP_O09_ORDER : public HL7Group {
  OMP_O09_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMP_O09_ORC_44,
    OMP_O09_RXO_45,
    OMP_O09_NTE_48,
    OMP_O09_RXR_52,
    OMP_O09_COMPONENT_54,
    OMP_O09_OBSERVATION_64,
    OMP_O09_FT1_76,
    OMP_O09_BLG_80,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMP_O09_ORDER"; }
  OMP_O09_ORDER* create() const { return new OMP_O09_ORDER(); }

  /* Initialize object */
  void init() {
    setName("OMP_O09.ORDER");
    addObject<ORC>(OMP_O09_ORC_44, "ORC.44", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXO>(OMP_O09_RXO_45, "RXO.45", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(OMP_O09_NTE_48, "NTE.48", HL7::optional, HL7::repetition_on);
    addObject<RXR>(OMP_O09_RXR_52, "RXR.52", HL7::initialized,
		   HL7::repetition_on);
    addObject<OMP_O09_COMPONENT>(OMP_O09_COMPONENT_54, "OMP_O09.COMPONENT",
				 HL7::optional, HL7::repetition_off);
    addObject<OMP_O09_OBSERVATION>(OMP_O09_OBSERVATION_64,
				   "OMP_O09.OBSERVATION", HL7::optional,
				   HL7::repetition_on);
    addObject<FT1>(OMP_O09_FT1_76, "FT1.76", HL7::optional, HL7::repetition_on);
    addObject<BLG>(OMP_O09_BLG_80, "BLG.80", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  ORC* getORC_44(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OMP_O09_ORC_44);
  }
  RXO* getRXO_45(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, OMP_O09_RXO_45);
  }
  NTE* getNTE_48(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMP_O09_NTE_48);
  }
  RXR* getRXR_52(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, OMP_O09_RXR_52);
  }
  OMP_O09_COMPONENT* getCOMPONENT(size_t index = 0) {
    return (OMP_O09_COMPONENT*)this->getObjectSafe(index, OMP_O09_COMPONENT_54);
  }
  OMP_O09_OBSERVATION* getOBSERVATION(size_t index = 0) {
    return (OMP_O09_OBSERVATION*)this->getObjectSafe(index,
						     OMP_O09_OBSERVATION_64);
  }
  FT1* getFT1_76(size_t index = 0) {
    return (FT1*)this->getObjectSafe(index, OMP_O09_FT1_76);
  }
  BLG* getBLG_80(size_t index = 0) {
    return (BLG*)this->getObjectSafe(index, OMP_O09_BLG_80);
  }

  /* Checker list */
  bool isORC_44(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_ORC_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_45(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_RXO_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_48(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_NTE_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_52(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_RXR_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCOMPONENT(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_COMPONENT_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_OBSERVATION_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFT1_76(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_FT1_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBLG_80(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_BLG_80) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMP_O09_43 */

/* OMP_O09 */
struct OMP_O09 : public HL7Message {
  OMP_O09() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMP_O09_MSH_1,
    OMP_O09_NTE_4,
    OMP_O09_PATIENT_7,
    OMP_O09_ORDER_43,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMP_O09"; }
  OMP_O09* create() const { return new OMP_O09(); }

  /* Initialize object */
  void init() {
    setName("OMP_O09");
    addObject<MSH>(OMP_O09_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(OMP_O09_NTE_4, "NTE.4", HL7::optional, HL7::repetition_on);
    addObject<OMP_O09_PATIENT>(OMP_O09_PATIENT_7, "OMP_O09.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<OMP_O09_ORDER>(OMP_O09_ORDER_43, "OMP_O09.ORDER",
			     HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OMP_O09_MSH_1);
  }
  NTE* getNTE_4(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMP_O09_NTE_4);
  }
  OMP_O09_PATIENT* getPATIENT(size_t index = 0) {
    return (OMP_O09_PATIENT*)this->getObjectSafe(index, OMP_O09_PATIENT_7);
  }
  OMP_O09_ORDER* getORDER(size_t index = 0) {
    return (OMP_O09_ORDER*)this->getObjectSafe(index, OMP_O09_ORDER_43);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_4(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_NTE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_PATIENT_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, OMP_O09_ORDER_43) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMP_O09_ */
} /* namespace HL7_24 */
#endif /*  __OMP_O09__24_H__ */
