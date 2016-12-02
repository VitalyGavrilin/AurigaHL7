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


#ifndef __OMS_O05__24_H__
#define __OMS_O05__24_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/BLG.h"
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
#include "../segment/RQ1.h"
#include "../segment/RQD.h"

namespace HL7_24 {

/* Internal structures/groups */
struct OMS_O05_PATIENT_VISIT; /* PATIENT_VISIT */
struct OMS_O05_INSURANCE;     /* INSURANCE */
struct OMS_O05_PATIENT;       /* PATIENT */
struct OMS_O05_OBSERVATION;   /* OBSERVATION */
struct OMS_O05_ORDER;	 /* ORDER */

/* PATIENT_VISIT */
struct OMS_O05_PATIENT_VISIT : public HL7Group {
  OMS_O05_PATIENT_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { OMS_O05_PV1_18, OMS_O05_PV2_20, FIELD_ID_MAX };

  const char* className() const { return "OMS_O05_PATIENT_VISIT"; }
  OMS_O05_PATIENT_VISIT* create() const { return new OMS_O05_PATIENT_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMS_O05.PATIENT_VISIT");
    addObject<PV1>(OMS_O05_PV1_18, "PV1.18", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(OMS_O05_PV2_20, "PV2.20", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  PV1* getPV1_18(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMS_O05_PV1_18);
  }
  PV2* getPV2_20(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMS_O05_PV2_20);
  }

  /* Checker list */
  bool isPV1_18(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_PV1_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_20(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_PV2_20) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMS_O05_17 */

/* INSURANCE */
struct OMS_O05_INSURANCE : public HL7Group {
  OMS_O05_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMS_O05_IN1_25,
    OMS_O05_IN2_27,
    OMS_O05_IN3_30,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMS_O05_INSURANCE"; }
  OMS_O05_INSURANCE* create() const { return new OMS_O05_INSURANCE(); }

  /* Initialize object */
  void init() {
    setName("OMS_O05.INSURANCE");
    addObject<IN1>(OMS_O05_IN1_25, "IN1.25", HL7::initialized,
		   HL7::repetition_off);
    addObject<IN2>(OMS_O05_IN2_27, "IN2.27", HL7::optional,
		   HL7::repetition_off);
    addObject<IN3>(OMS_O05_IN3_30, "IN3.30", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  IN1* getIN1_25(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OMS_O05_IN1_25);
  }
  IN2* getIN2_27(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OMS_O05_IN2_27);
  }
  IN3* getIN3_30(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OMS_O05_IN3_30);
  }

  /* Checker list */
  bool isIN1_25(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_IN1_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_27(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_IN2_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_30(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_IN3_30) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMS_O05_23 */

/* PATIENT */
struct OMS_O05_PATIENT : public HL7Group {
  OMS_O05_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMS_O05_PID_8,
    OMS_O05_PD1_10,
    OMS_O05_NTE_14,
    OMS_O05_PATIENT_VISIT_17,
    OMS_O05_INSURANCE_23,
    OMS_O05_GT1_35,
    OMS_O05_AL1_39,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMS_O05_PATIENT"; }
  OMS_O05_PATIENT* create() const { return new OMS_O05_PATIENT(); }

  /* Initialize object */
  void init() {
    setName("OMS_O05.PATIENT");
    addObject<PID>(OMS_O05_PID_8, "PID.8", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(OMS_O05_PD1_10, "PD1.10", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(OMS_O05_NTE_14, "NTE.14", HL7::optional, HL7::repetition_on);
    addObject<OMS_O05_PATIENT_VISIT>(OMS_O05_PATIENT_VISIT_17,
				     "OMS_O05.PATIENT_VISIT", HL7::optional,
				     HL7::repetition_off);
    addObject<OMS_O05_INSURANCE>(OMS_O05_INSURANCE_23, "OMS_O05.INSURANCE",
				 HL7::optional, HL7::repetition_on);
    addObject<GT1>(OMS_O05_GT1_35, "GT1.35", HL7::optional,
		   HL7::repetition_off);
    addObject<AL1>(OMS_O05_AL1_39, "AL1.39", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PID* getPID_8(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMS_O05_PID_8);
  }
  PD1* getPD1_10(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMS_O05_PD1_10);
  }
  NTE* getNTE_14(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMS_O05_NTE_14);
  }
  OMS_O05_PATIENT_VISIT* getPATIENT_VISIT(size_t index = 0) {
    return (OMS_O05_PATIENT_VISIT*)this->getObjectSafe(
	index, OMS_O05_PATIENT_VISIT_17);
  }
  OMS_O05_INSURANCE* getINSURANCE(size_t index = 0) {
    return (OMS_O05_INSURANCE*)this->getObjectSafe(index, OMS_O05_INSURANCE_23);
  }
  GT1* getGT1_35(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, OMS_O05_GT1_35);
  }
  AL1* getAL1_39(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OMS_O05_AL1_39);
  }

  /* Checker list */
  bool isPID_8(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_PID_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_10(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_PD1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_14(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_NTE_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT_VISIT(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_PATIENT_VISIT_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINSURANCE(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_INSURANCE_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_35(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_GT1_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_39(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_AL1_39) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMS_O05_7 */

/* OBSERVATION */
struct OMS_O05_OBSERVATION : public HL7Group {
  OMS_O05_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { OMS_O05_OBX_56, OMS_O05_NTE_59, FIELD_ID_MAX };

  const char* className() const { return "OMS_O05_OBSERVATION"; }
  OMS_O05_OBSERVATION* create() const { return new OMS_O05_OBSERVATION(); }

  /* Initialize object */
  void init() {
    setName("OMS_O05.OBSERVATION");
    addObject<OBX>(OMS_O05_OBX_56, "OBX.56", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(OMS_O05_NTE_59, "NTE.59", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_56(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMS_O05_OBX_56);
  }
  NTE* getNTE_59(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMS_O05_NTE_59);
  }

  /* Checker list */
  bool isOBX_56(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OBX_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_59(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_NTE_59) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMS_O05_54 */

/* ORDER */
struct OMS_O05_ORDER : public HL7Group {
  OMS_O05_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMS_O05_ORC_44,
    OMS_O05_RQD_45,
    OMS_O05_RQ1_47,
    OMS_O05_NTE_51,
    OMS_O05_OBSERVATION_54,
    OMS_O05_BLG_65,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMS_O05_ORDER"; }
  OMS_O05_ORDER* create() const { return new OMS_O05_ORDER(); }

  /* Initialize object */
  void init() {
    setName("OMS_O05.ORDER");
    addObject<ORC>(OMS_O05_ORC_44, "ORC.44", HL7::initialized,
		   HL7::repetition_off);
    addObject<RQD>(OMS_O05_RQD_45, "RQD.45", HL7::initialized,
		   HL7::repetition_off);
    addObject<RQ1>(OMS_O05_RQ1_47, "RQ1.47", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(OMS_O05_NTE_51, "NTE.51", HL7::optional, HL7::repetition_on);
    addObject<OMS_O05_OBSERVATION>(OMS_O05_OBSERVATION_54,
				   "OMS_O05.OBSERVATION", HL7::optional,
				   HL7::repetition_on);
    addObject<BLG>(OMS_O05_BLG_65, "BLG.65", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  ORC* getORC_44(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OMS_O05_ORC_44);
  }
  RQD* getRQD_45(size_t index = 0) {
    return (RQD*)this->getObjectSafe(index, OMS_O05_RQD_45);
  }
  RQ1* getRQ1_47(size_t index = 0) {
    return (RQ1*)this->getObjectSafe(index, OMS_O05_RQ1_47);
  }
  NTE* getNTE_51(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMS_O05_NTE_51);
  }
  OMS_O05_OBSERVATION* getOBSERVATION(size_t index = 0) {
    return (OMS_O05_OBSERVATION*)this->getObjectSafe(index,
						     OMS_O05_OBSERVATION_54);
  }
  BLG* getBLG_65(size_t index = 0) {
    return (BLG*)this->getObjectSafe(index, OMS_O05_BLG_65);
  }

  /* Checker list */
  bool isORC_44(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_ORC_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRQD_45(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_RQD_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRQ1_47(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_RQ1_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_51(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_NTE_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OBSERVATION_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBLG_65(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_BLG_65) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMS_O05_43 */

/* OMS_O05 */
struct OMS_O05 : public HL7Message {
  OMS_O05() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMS_O05_MSH_1,
    OMS_O05_NTE_4,
    OMS_O05_PATIENT_7,
    OMS_O05_ORDER_43,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMS_O05"; }
  OMS_O05* create() const { return new OMS_O05(); }

  /* Initialize object */
  void init() {
    setName("OMS_O05");
    addObject<MSH>(OMS_O05_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(OMS_O05_NTE_4, "NTE.4", HL7::optional, HL7::repetition_on);
    addObject<OMS_O05_PATIENT>(OMS_O05_PATIENT_7, "OMS_O05.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<OMS_O05_ORDER>(OMS_O05_ORDER_43, "OMS_O05.ORDER",
			     HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OMS_O05_MSH_1);
  }
  NTE* getNTE_4(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMS_O05_NTE_4);
  }
  OMS_O05_PATIENT* getPATIENT(size_t index = 0) {
    return (OMS_O05_PATIENT*)this->getObjectSafe(index, OMS_O05_PATIENT_7);
  }
  OMS_O05_ORDER* getORDER(size_t index = 0) {
    return (OMS_O05_ORDER*)this->getObjectSafe(index, OMS_O05_ORDER_43);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_4(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_NTE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_PATIENT_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_ORDER_43) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMS_O05_ */
} /* namespace HL7_24 */
#endif /*  __OMS_O05__24_H__ */
