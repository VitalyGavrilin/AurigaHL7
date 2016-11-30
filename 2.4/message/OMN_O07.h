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


#ifndef __OMN_O07__24_H__
#define __OMN_O07__24_H__

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
struct OMN_O07_PATIENT_VISIT; /* PATIENT_VISIT */
struct OMN_O07_INSURANCE;     /* INSURANCE */
struct OMN_O07_PATIENT;       /* PATIENT */
struct OMN_O07_OBSERVATION;   /* OBSERVATION */
struct OMN_O07_ORDER;	 /* ORDER */

/* PATIENT_VISIT */
struct OMN_O07_PATIENT_VISIT : public HL7Group {
  OMN_O07_PATIENT_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { OMN_O07_PV1_18, OMN_O07_PV2_20, FIELD_ID_MAX };

  const char* className() const { return "OMN_O07_PATIENT_VISIT"; }
  OMN_O07_PATIENT_VISIT* create() const { return new OMN_O07_PATIENT_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMN_O07.PATIENT_VISIT");
    addObject<PV1>(OMN_O07_PV1_18, "PV1.18", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(OMN_O07_PV2_20, "PV2.20", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  PV1* getPV1_18(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMN_O07_PV1_18);
  }
  PV2* getPV2_20(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMN_O07_PV2_20);
  }

  /* Checker list */
  bool isPV1_18(size_t index = 0) {
    try {
      return this->getObject(index, OMN_O07_PV1_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_20(size_t index = 0) {
    try {
      return this->getObject(index, OMN_O07_PV2_20) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMN_O07_17 */

/* INSURANCE */
struct OMN_O07_INSURANCE : public HL7Group {
  OMN_O07_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMN_O07_IN1_25,
    OMN_O07_IN2_27,
    OMN_O07_IN3_30,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMN_O07_INSURANCE"; }
  OMN_O07_INSURANCE* create() const { return new OMN_O07_INSURANCE(); }

  /* Initialize object */
  void init() {
    setName("OMN_O07.INSURANCE");
    addObject<IN1>(OMN_O07_IN1_25, "IN1.25", HL7::initialized,
		   HL7::repetition_off);
    addObject<IN2>(OMN_O07_IN2_27, "IN2.27", HL7::optional,
		   HL7::repetition_off);
    addObject<IN3>(OMN_O07_IN3_30, "IN3.30", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  IN1* getIN1_25(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OMN_O07_IN1_25);
  }
  IN2* getIN2_27(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OMN_O07_IN2_27);
  }
  IN3* getIN3_30(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OMN_O07_IN3_30);
  }

  /* Checker list */
  bool isIN1_25(size_t index = 0) {
    try {
      return this->getObject(index, OMN_O07_IN1_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_27(size_t index = 0) {
    try {
      return this->getObject(index, OMN_O07_IN2_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_30(size_t index = 0) {
    try {
      return this->getObject(index, OMN_O07_IN3_30) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMN_O07_23 */

/* PATIENT */
struct OMN_O07_PATIENT : public HL7Group {
  OMN_O07_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMN_O07_PID_8,
    OMN_O07_PD1_10,
    OMN_O07_NTE_14,
    OMN_O07_PATIENT_VISIT_17,
    OMN_O07_INSURANCE_23,
    OMN_O07_GT1_35,
    OMN_O07_AL1_39,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMN_O07_PATIENT"; }
  OMN_O07_PATIENT* create() const { return new OMN_O07_PATIENT(); }

  /* Initialize object */
  void init() {
    setName("OMN_O07.PATIENT");
    addObject<PID>(OMN_O07_PID_8, "PID.8", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(OMN_O07_PD1_10, "PD1.10", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(OMN_O07_NTE_14, "NTE.14", HL7::optional, HL7::repetition_on);
    addObject<OMN_O07_PATIENT_VISIT>(OMN_O07_PATIENT_VISIT_17,
				     "OMN_O07.PATIENT_VISIT", HL7::optional,
				     HL7::repetition_off);
    addObject<OMN_O07_INSURANCE>(OMN_O07_INSURANCE_23, "OMN_O07.INSURANCE",
				 HL7::optional, HL7::repetition_on);
    addObject<GT1>(OMN_O07_GT1_35, "GT1.35", HL7::optional,
		   HL7::repetition_off);
    addObject<AL1>(OMN_O07_AL1_39, "AL1.39", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PID* getPID_8(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMN_O07_PID_8);
  }
  PD1* getPD1_10(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMN_O07_PD1_10);
  }
  NTE* getNTE_14(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMN_O07_NTE_14);
  }
  OMN_O07_PATIENT_VISIT* getPATIENT_VISIT(size_t index = 0) {
    return (OMN_O07_PATIENT_VISIT*)this->getObjectSafe(
	index, OMN_O07_PATIENT_VISIT_17);
  }
  OMN_O07_INSURANCE* getINSURANCE(size_t index = 0) {
    return (OMN_O07_INSURANCE*)this->getObjectSafe(index, OMN_O07_INSURANCE_23);
  }
  GT1* getGT1_35(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, OMN_O07_GT1_35);
  }
  AL1* getAL1_39(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OMN_O07_AL1_39);
  }

  /* Checker list */
  bool isPID_8(size_t index = 0) {
    try {
      return this->getObject(index, OMN_O07_PID_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_10(size_t index = 0) {
    try {
      return this->getObject(index, OMN_O07_PD1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_14(size_t index = 0) {
    try {
      return this->getObject(index, OMN_O07_NTE_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT_VISIT(size_t index = 0) {
    try {
      return this->getObject(index, OMN_O07_PATIENT_VISIT_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINSURANCE(size_t index = 0) {
    try {
      return this->getObject(index, OMN_O07_INSURANCE_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_35(size_t index = 0) {
    try {
      return this->getObject(index, OMN_O07_GT1_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_39(size_t index = 0) {
    try {
      return this->getObject(index, OMN_O07_AL1_39) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMN_O07_7 */

/* OBSERVATION */
struct OMN_O07_OBSERVATION : public HL7Group {
  OMN_O07_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { OMN_O07_OBX_56, OMN_O07_NTE_59, FIELD_ID_MAX };

  const char* className() const { return "OMN_O07_OBSERVATION"; }
  OMN_O07_OBSERVATION* create() const { return new OMN_O07_OBSERVATION(); }

  /* Initialize object */
  void init() {
    setName("OMN_O07.OBSERVATION");
    addObject<OBX>(OMN_O07_OBX_56, "OBX.56", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(OMN_O07_NTE_59, "NTE.59", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_56(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMN_O07_OBX_56);
  }
  NTE* getNTE_59(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMN_O07_NTE_59);
  }

  /* Checker list */
  bool isOBX_56(size_t index = 0) {
    try {
      return this->getObject(index, OMN_O07_OBX_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_59(size_t index = 0) {
    try {
      return this->getObject(index, OMN_O07_NTE_59) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMN_O07_54 */

/* ORDER */
struct OMN_O07_ORDER : public HL7Group {
  OMN_O07_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMN_O07_ORC_44,
    OMN_O07_RQD_45,
    OMN_O07_RQ1_47,
    OMN_O07_NTE_51,
    OMN_O07_OBSERVATION_54,
    OMN_O07_BLG_65,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMN_O07_ORDER"; }
  OMN_O07_ORDER* create() const { return new OMN_O07_ORDER(); }

  /* Initialize object */
  void init() {
    setName("OMN_O07.ORDER");
    addObject<ORC>(OMN_O07_ORC_44, "ORC.44", HL7::initialized,
		   HL7::repetition_off);
    addObject<RQD>(OMN_O07_RQD_45, "RQD.45", HL7::initialized,
		   HL7::repetition_off);
    addObject<RQ1>(OMN_O07_RQ1_47, "RQ1.47", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(OMN_O07_NTE_51, "NTE.51", HL7::optional, HL7::repetition_on);
    addObject<OMN_O07_OBSERVATION>(OMN_O07_OBSERVATION_54,
				   "OMN_O07.OBSERVATION", HL7::optional,
				   HL7::repetition_on);
    addObject<BLG>(OMN_O07_BLG_65, "BLG.65", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  ORC* getORC_44(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OMN_O07_ORC_44);
  }
  RQD* getRQD_45(size_t index = 0) {
    return (RQD*)this->getObjectSafe(index, OMN_O07_RQD_45);
  }
  RQ1* getRQ1_47(size_t index = 0) {
    return (RQ1*)this->getObjectSafe(index, OMN_O07_RQ1_47);
  }
  NTE* getNTE_51(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMN_O07_NTE_51);
  }
  OMN_O07_OBSERVATION* getOBSERVATION(size_t index = 0) {
    return (OMN_O07_OBSERVATION*)this->getObjectSafe(index,
						     OMN_O07_OBSERVATION_54);
  }
  BLG* getBLG_65(size_t index = 0) {
    return (BLG*)this->getObjectSafe(index, OMN_O07_BLG_65);
  }

  /* Checker list */
  bool isORC_44(size_t index = 0) {
    try {
      return this->getObject(index, OMN_O07_ORC_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRQD_45(size_t index = 0) {
    try {
      return this->getObject(index, OMN_O07_RQD_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRQ1_47(size_t index = 0) {
    try {
      return this->getObject(index, OMN_O07_RQ1_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_51(size_t index = 0) {
    try {
      return this->getObject(index, OMN_O07_NTE_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, OMN_O07_OBSERVATION_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBLG_65(size_t index = 0) {
    try {
      return this->getObject(index, OMN_O07_BLG_65) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMN_O07_43 */

/* OMN_O07 */
struct OMN_O07 : public HL7Message {
  OMN_O07() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMN_O07_MSH_1,
    OMN_O07_NTE_4,
    OMN_O07_PATIENT_7,
    OMN_O07_ORDER_43,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMN_O07"; }
  OMN_O07* create() const { return new OMN_O07(); }

  /* Initialize object */
  void init() {
    setName("OMN_O07");
    addObject<MSH>(OMN_O07_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(OMN_O07_NTE_4, "NTE.4", HL7::optional, HL7::repetition_on);
    addObject<OMN_O07_PATIENT>(OMN_O07_PATIENT_7, "OMN_O07.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<OMN_O07_ORDER>(OMN_O07_ORDER_43, "OMN_O07.ORDER",
			     HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OMN_O07_MSH_1);
  }
  NTE* getNTE_4(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMN_O07_NTE_4);
  }
  OMN_O07_PATIENT* getPATIENT(size_t index = 0) {
    return (OMN_O07_PATIENT*)this->getObjectSafe(index, OMN_O07_PATIENT_7);
  }
  OMN_O07_ORDER* getORDER(size_t index = 0) {
    return (OMN_O07_ORDER*)this->getObjectSafe(index, OMN_O07_ORDER_43);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OMN_O07_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_4(size_t index = 0) {
    try {
      return this->getObject(index, OMN_O07_NTE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, OMN_O07_PATIENT_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, OMN_O07_ORDER_43) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMN_O07_ */
} /* namespace HL7_24 */
#endif /*  __OMN_O07__24_H__ */
