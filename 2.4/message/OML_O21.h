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


#ifndef __OML_O21__24_H__
#define __OML_O21__24_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/BLG.h"
#include "../segment/CTI.h"
#include "../segment/DG1.h"
#include "../segment/FT1.h"
#include "../segment/GT1.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IN3.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/SAC.h"
#include "../segment/TCD.h"

namespace HL7_24 {

/* Internal structures/groups */
struct OML_O21_PATIENT_VISIT;       /* PATIENT_VISIT */
struct OML_O21_INSURANCE;	   /* INSURANCE */
struct OML_O21_PATIENT;		    /* PATIENT */
struct OML_O21_CONTAINER_1;	 /* CONTAINER_1 */
struct OML_O21_CONTAINER_2;	 /* CONTAINER_2 */
struct OML_O21_OBSERVATION;	 /* OBSERVATION */
struct OML_O21_PATIENT_PRIOR;       /* PATIENT_PRIOR */
struct OML_O21_PATIENT_VISIT_PRIOR; /* PATIENT_VISIT_PRIOR */
struct OML_O21_OBSERVATION_PRIOR;   /* OBSERVATION_PRIOR */
struct OML_O21_ORDER_PRIOR;	 /* ORDER_PRIOR */
struct OML_O21_PRIOR_RESULT;	/* PRIOR_RESULT */
struct OML_O21_OBSERVATION_REQUEST; /* OBSERVATION_REQUEST */
struct OML_O21_ORDER;		    /* ORDER */
struct OML_O21_ORDER_GENERAL;       /* ORDER_GENERAL */

/* PATIENT_VISIT */
struct OML_O21_PATIENT_VISIT : public HL7Group {
  OML_O21_PATIENT_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { OML_O21_PV1_18, OML_O21_PV2_20, FIELD_ID_MAX };

  const char* className() const { return "OML_O21_PATIENT_VISIT"; }
  OML_O21_PATIENT_VISIT* create() const { return new OML_O21_PATIENT_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("OML_O21.PATIENT_VISIT");
    addObject<PV1>(OML_O21_PV1_18, "PV1.18", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(OML_O21_PV2_20, "PV2.20", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  PV1* getPV1_18(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OML_O21_PV1_18);
  }
  PV2* getPV2_20(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OML_O21_PV2_20);
  }

  /* Checker list */
  bool isPV1_18(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_PV1_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_20(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_PV2_20) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OML_O21_17 */

/* INSURANCE */
struct OML_O21_INSURANCE : public HL7Group {
  OML_O21_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OML_O21_IN1_25,
    OML_O21_IN2_27,
    OML_O21_IN3_30,
    FIELD_ID_MAX
  };

  const char* className() const { return "OML_O21_INSURANCE"; }
  OML_O21_INSURANCE* create() const { return new OML_O21_INSURANCE(); }

  /* Initialize object */
  void init() {
    setName("OML_O21.INSURANCE");
    addObject<IN1>(OML_O21_IN1_25, "IN1.25", HL7::initialized,
		   HL7::repetition_off);
    addObject<IN2>(OML_O21_IN2_27, "IN2.27", HL7::optional,
		   HL7::repetition_off);
    addObject<IN3>(OML_O21_IN3_30, "IN3.30", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  IN1* getIN1_25(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OML_O21_IN1_25);
  }
  IN2* getIN2_27(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OML_O21_IN2_27);
  }
  IN3* getIN3_30(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OML_O21_IN3_30);
  }

  /* Checker list */
  bool isIN1_25(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_IN1_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_27(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_IN2_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_30(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_IN3_30) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OML_O21_23 */

/* PATIENT */
struct OML_O21_PATIENT : public HL7Group {
  OML_O21_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OML_O21_PID_8,
    OML_O21_PD1_10,
    OML_O21_NTE_14,
    OML_O21_PATIENT_VISIT_17,
    OML_O21_INSURANCE_23,
    OML_O21_GT1_35,
    OML_O21_AL1_39,
    FIELD_ID_MAX
  };

  const char* className() const { return "OML_O21_PATIENT"; }
  OML_O21_PATIENT* create() const { return new OML_O21_PATIENT(); }

  /* Initialize object */
  void init() {
    setName("OML_O21.PATIENT");
    addObject<PID>(OML_O21_PID_8, "PID.8", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(OML_O21_PD1_10, "PD1.10", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(OML_O21_NTE_14, "NTE.14", HL7::optional, HL7::repetition_on);
    addObject<OML_O21_PATIENT_VISIT>(OML_O21_PATIENT_VISIT_17,
				     "OML_O21.PATIENT_VISIT", HL7::optional,
				     HL7::repetition_off);
    addObject<OML_O21_INSURANCE>(OML_O21_INSURANCE_23, "OML_O21.INSURANCE",
				 HL7::optional, HL7::repetition_on);
    addObject<GT1>(OML_O21_GT1_35, "GT1.35", HL7::optional,
		   HL7::repetition_off);
    addObject<AL1>(OML_O21_AL1_39, "AL1.39", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PID* getPID_8(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O21_PID_8);
  }
  PD1* getPD1_10(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O21_PD1_10);
  }
  NTE* getNTE_14(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O21_NTE_14);
  }
  OML_O21_PATIENT_VISIT* getPATIENT_VISIT(size_t index = 0) {
    return (OML_O21_PATIENT_VISIT*)this->getObjectSafe(
	index, OML_O21_PATIENT_VISIT_17);
  }
  OML_O21_INSURANCE* getINSURANCE(size_t index = 0) {
    return (OML_O21_INSURANCE*)this->getObjectSafe(index, OML_O21_INSURANCE_23);
  }
  GT1* getGT1_35(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, OML_O21_GT1_35);
  }
  AL1* getAL1_39(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OML_O21_AL1_39);
  }

  /* Checker list */
  bool isPID_8(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_PID_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_10(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_PD1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_14(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_NTE_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT_VISIT(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_PATIENT_VISIT_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINSURANCE(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_INSURANCE_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_35(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_GT1_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_39(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_AL1_39) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OML_O21_7 */

/* CONTAINER_1 */
struct OML_O21_CONTAINER_1 : public HL7Group {
  OML_O21_CONTAINER_1() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { OML_O21_SAC_45, OML_O21_OBX_48, FIELD_ID_MAX };

  const char* className() const { return "OML_O21_CONTAINER_1"; }
  OML_O21_CONTAINER_1* create() const { return new OML_O21_CONTAINER_1(); }

  /* Initialize object */
  void init() {
    setName("OML_O21.CONTAINER_1");
    addObject<SAC>(OML_O21_SAC_45, "SAC.45", HL7::initialized,
		   HL7::repetition_off);
    addObject<OBX>(OML_O21_OBX_48, "OBX.48", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  SAC* getSAC_45(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OML_O21_SAC_45);
  }
  OBX* getOBX_48(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OBX_48);
  }

  /* Checker list */
  bool isSAC_45(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_SAC_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_48(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OBX_48) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OML_O21_44 */

/* CONTAINER_2 */
struct OML_O21_CONTAINER_2 : public HL7Group {
  OML_O21_CONTAINER_2() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { OML_O21_SAC_58, OML_O21_OBX_61, FIELD_ID_MAX };

  const char* className() const { return "OML_O21_CONTAINER_2"; }
  OML_O21_CONTAINER_2* create() const { return new OML_O21_CONTAINER_2(); }

  /* Initialize object */
  void init() {
    setName("OML_O21.CONTAINER_2");
    addObject<SAC>(OML_O21_SAC_58, "SAC.58", HL7::initialized,
		   HL7::repetition_off);
    addObject<OBX>(OML_O21_OBX_61, "OBX.61", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  SAC* getSAC_58(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OML_O21_SAC_58);
  }
  OBX* getOBX_61(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OBX_61);
  }

  /* Checker list */
  bool isSAC_58(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_SAC_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_61(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OBX_61) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OML_O21_56 */

/* OBSERVATION */
struct OML_O21_OBSERVATION : public HL7Group {
  OML_O21_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OML_O21_OBX_81,
    OML_O21_TCD_83,
    OML_O21_NTE_87,
    FIELD_ID_MAX
  };

  const char* className() const { return "OML_O21_OBSERVATION"; }
  OML_O21_OBSERVATION* create() const { return new OML_O21_OBSERVATION(); }

  /* Initialize object */
  void init() {
    setName("OML_O21.OBSERVATION");
    addObject<OBX>(OML_O21_OBX_81, "OBX.81", HL7::initialized,
		   HL7::repetition_off);
    addObject<TCD>(OML_O21_TCD_83, "TCD.83", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(OML_O21_NTE_87, "NTE.87", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_81(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OBX_81);
  }
  TCD* getTCD_83(size_t index = 0) {
    return (TCD*)this->getObjectSafe(index, OML_O21_TCD_83);
  }
  NTE* getNTE_87(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O21_NTE_87);
  }

  /* Checker list */
  bool isOBX_81(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OBX_81) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTCD_83(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_TCD_83) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_87(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_NTE_87) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OML_O21_79 */

/* PATIENT_PRIOR */
struct OML_O21_PATIENT_PRIOR : public HL7Group {
  OML_O21_PATIENT_PRIOR() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { OML_O21_PID_95, OML_O21_PD1_97, FIELD_ID_MAX };

  const char* className() const { return "OML_O21_PATIENT_PRIOR"; }
  OML_O21_PATIENT_PRIOR* create() const { return new OML_O21_PATIENT_PRIOR(); }

  /* Initialize object */
  void init() {
    setName("OML_O21.PATIENT_PRIOR");
    addObject<PID>(OML_O21_PID_95, "PID.95", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(OML_O21_PD1_97, "PD1.97", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  PID* getPID_95(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O21_PID_95);
  }
  PD1* getPD1_97(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O21_PD1_97);
  }

  /* Checker list */
  bool isPID_95(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_PID_95) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_97(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_PD1_97) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OML_O21_94 */

/* PATIENT_VISIT_PRIOR */
struct OML_O21_PATIENT_VISIT_PRIOR : public HL7Group {
  OML_O21_PATIENT_VISIT_PRIOR() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { OML_O21_PV1_101, OML_O21_PV2_103, FIELD_ID_MAX };

  const char* className() const { return "OML_O21_PATIENT_VISIT_PRIOR"; }
  OML_O21_PATIENT_VISIT_PRIOR* create() const {
    return new OML_O21_PATIENT_VISIT_PRIOR();
  }

  /* Initialize object */
  void init() {
    setName("OML_O21.PATIENT_VISIT_PRIOR");
    addObject<PV1>(OML_O21_PV1_101, "PV1.101", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(OML_O21_PV2_103, "PV2.103", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  PV1* getPV1_101(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OML_O21_PV1_101);
  }
  PV2* getPV2_103(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OML_O21_PV2_103);
  }

  /* Checker list */
  bool isPV1_101(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_PV1_101) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_103(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_PV2_103) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OML_O21_100 */

/* OBSERVATION_PRIOR */
struct OML_O21_OBSERVATION_PRIOR : public HL7Group {
  OML_O21_OBSERVATION_PRIOR() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { OML_O21_OBX_122, OML_O21_NTE_125, FIELD_ID_MAX };

  const char* className() const { return "OML_O21_OBSERVATION_PRIOR"; }
  OML_O21_OBSERVATION_PRIOR* create() const {
    return new OML_O21_OBSERVATION_PRIOR();
  }

  /* Initialize object */
  void init() {
    setName("OML_O21.OBSERVATION_PRIOR");
    addObject<OBX>(OML_O21_OBX_122, "OBX.122", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(OML_O21_NTE_125, "NTE.125", HL7::optional,
		   HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_122(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OBX_122);
  }
  NTE* getNTE_125(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O21_NTE_125);
  }

  /* Checker list */
  bool isOBX_122(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OBX_122) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_125(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_NTE_125) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OML_O21_121 */

/* ORDER_PRIOR */
struct OML_O21_ORDER_PRIOR : public HL7Group {
  OML_O21_ORDER_PRIOR() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OML_O21_ORC_113,
    OML_O21_OBR_115,
    OML_O21_NTE_118,
    OML_O21_OBSERVATION_PRIOR_121,
    FIELD_ID_MAX
  };

  const char* className() const { return "OML_O21_ORDER_PRIOR"; }
  OML_O21_ORDER_PRIOR* create() const { return new OML_O21_ORDER_PRIOR(); }

  /* Initialize object */
  void init() {
    setName("OML_O21.ORDER_PRIOR");
    addObject<ORC>(OML_O21_ORC_113, "ORC.113", HL7::optional,
		   HL7::repetition_off);
    addObject<OBR>(OML_O21_OBR_115, "OBR.115", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(OML_O21_NTE_118, "NTE.118", HL7::optional,
		   HL7::repetition_on);
    addObject<OML_O21_OBSERVATION_PRIOR>(OML_O21_OBSERVATION_PRIOR_121,
					 "OML_O21.OBSERVATION_PRIOR",
					 HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_113(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OML_O21_ORC_113);
  }
  OBR* getOBR_115(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OML_O21_OBR_115);
  }
  NTE* getNTE_118(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O21_NTE_118);
  }
  OML_O21_OBSERVATION_PRIOR* getOBSERVATION_PRIOR(size_t index = 0) {
    return (OML_O21_OBSERVATION_PRIOR*)this->getObjectSafe(
	index, OML_O21_OBSERVATION_PRIOR_121);
  }

  /* Checker list */
  bool isORC_113(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_ORC_113) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_115(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OBR_115) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_118(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_NTE_118) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION_PRIOR(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OBSERVATION_PRIOR_121) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OML_O21_111 */

/* PRIOR_RESULT */
struct OML_O21_PRIOR_RESULT : public HL7Group {
  OML_O21_PRIOR_RESULT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OML_O21_PATIENT_PRIOR_94,
    OML_O21_PATIENT_VISIT_PRIOR_100,
    OML_O21_AL1_108,
    OML_O21_ORDER_PRIOR_111,
    FIELD_ID_MAX
  };

  const char* className() const { return "OML_O21_PRIOR_RESULT"; }
  OML_O21_PRIOR_RESULT* create() const { return new OML_O21_PRIOR_RESULT(); }

  /* Initialize object */
  void init() {
    setName("OML_O21.PRIOR_RESULT");
    addObject<OML_O21_PATIENT_PRIOR>(OML_O21_PATIENT_PRIOR_94,
				     "OML_O21.PATIENT_PRIOR", HL7::optional,
				     HL7::repetition_off);
    addObject<OML_O21_PATIENT_VISIT_PRIOR>(OML_O21_PATIENT_VISIT_PRIOR_100,
					   "OML_O21.PATIENT_VISIT_PRIOR",
					   HL7::optional, HL7::repetition_off);
    addObject<AL1>(OML_O21_AL1_108, "AL1.108", HL7::optional,
		   HL7::repetition_on);
    addObject<OML_O21_ORDER_PRIOR>(OML_O21_ORDER_PRIOR_111,
				   "OML_O21.ORDER_PRIOR", HL7::initialized,
				   HL7::repetition_on);
  }

  /* Getters list */
  OML_O21_PATIENT_PRIOR* getPATIENT_PRIOR(size_t index = 0) {
    return (OML_O21_PATIENT_PRIOR*)this->getObjectSafe(
	index, OML_O21_PATIENT_PRIOR_94);
  }
  OML_O21_PATIENT_VISIT_PRIOR* getPATIENT_VISIT_PRIOR(size_t index = 0) {
    return (OML_O21_PATIENT_VISIT_PRIOR*)this->getObjectSafe(
	index, OML_O21_PATIENT_VISIT_PRIOR_100);
  }
  AL1* getAL1_108(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OML_O21_AL1_108);
  }
  OML_O21_ORDER_PRIOR* getORDER_PRIOR(size_t index = 0) {
    return (OML_O21_ORDER_PRIOR*)this->getObjectSafe(index,
						     OML_O21_ORDER_PRIOR_111);
  }

  /* Checker list */
  bool isPATIENT_PRIOR(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_PATIENT_PRIOR_94) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT_VISIT_PRIOR(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_PATIENT_VISIT_PRIOR_100) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_108(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_AL1_108) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_PRIOR(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_ORDER_PRIOR_111) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OML_O21_92 */

/* OBSERVATION_REQUEST */
struct OML_O21_OBSERVATION_REQUEST : public HL7Group {
  OML_O21_OBSERVATION_REQUEST() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OML_O21_OBR_55,
    OML_O21_CONTAINER_2_56,
    OML_O21_TCD_67,
    OML_O21_NTE_71,
    OML_O21_DG1_76,
    OML_O21_OBSERVATION_79,
    OML_O21_PRIOR_RESULT_92,
    FIELD_ID_MAX
  };

  const char* className() const { return "OML_O21_OBSERVATION_REQUEST"; }
  OML_O21_OBSERVATION_REQUEST* create() const {
    return new OML_O21_OBSERVATION_REQUEST();
  }

  /* Initialize object */
  void init() {
    setName("OML_O21.OBSERVATION_REQUEST");
    addObject<OBR>(OML_O21_OBR_55, "OBR.55", HL7::initialized,
		   HL7::repetition_off);
    addObject<OML_O21_CONTAINER_2>(OML_O21_CONTAINER_2_56,
				   "OML_O21.CONTAINER_2", HL7::optional,
				   HL7::repetition_on);
    addObject<TCD>(OML_O21_TCD_67, "TCD.67", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(OML_O21_NTE_71, "NTE.71", HL7::optional, HL7::repetition_on);
    addObject<DG1>(OML_O21_DG1_76, "DG1.76", HL7::optional, HL7::repetition_on);
    addObject<OML_O21_OBSERVATION>(OML_O21_OBSERVATION_79,
				   "OML_O21.OBSERVATION", HL7::optional,
				   HL7::repetition_on);
    addObject<OML_O21_PRIOR_RESULT>(OML_O21_PRIOR_RESULT_92,
				    "OML_O21.PRIOR_RESULT", HL7::optional,
				    HL7::repetition_on);
  }

  /* Getters list */
  OBR* getOBR_55(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OML_O21_OBR_55);
  }
  OML_O21_CONTAINER_2* getCONTAINER_2(size_t index = 0) {
    return (OML_O21_CONTAINER_2*)this->getObjectSafe(index,
						     OML_O21_CONTAINER_2_56);
  }
  TCD* getTCD_67(size_t index = 0) {
    return (TCD*)this->getObjectSafe(index, OML_O21_TCD_67);
  }
  NTE* getNTE_71(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O21_NTE_71);
  }
  DG1* getDG1_76(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, OML_O21_DG1_76);
  }
  OML_O21_OBSERVATION* getOBSERVATION(size_t index = 0) {
    return (OML_O21_OBSERVATION*)this->getObjectSafe(index,
						     OML_O21_OBSERVATION_79);
  }
  OML_O21_PRIOR_RESULT* getPRIOR_RESULT(size_t index = 0) {
    return (OML_O21_PRIOR_RESULT*)this->getObjectSafe(index,
						      OML_O21_PRIOR_RESULT_92);
  }

  /* Checker list */
  bool isOBR_55(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OBR_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCONTAINER_2(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_CONTAINER_2_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTCD_67(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_TCD_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_71(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_NTE_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_76(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_DG1_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OBSERVATION_79) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRIOR_RESULT(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_PRIOR_RESULT_92) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OML_O21_54 */

/* ORDER */
struct OML_O21_ORDER : public HL7Group {
  OML_O21_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OML_O21_ORC_53,
    OML_O21_OBSERVATION_REQUEST_54,
    OML_O21_FT1_135,
    OML_O21_CTI_140,
    OML_O21_BLG_144,
    FIELD_ID_MAX
  };

  const char* className() const { return "OML_O21_ORDER"; }
  OML_O21_ORDER* create() const { return new OML_O21_ORDER(); }

  /* Initialize object */
  void init() {
    setName("OML_O21.ORDER");
    addObject<ORC>(OML_O21_ORC_53, "ORC.53", HL7::initialized,
		   HL7::repetition_off);
    addObject<OML_O21_OBSERVATION_REQUEST>(OML_O21_OBSERVATION_REQUEST_54,
					   "OML_O21.OBSERVATION_REQUEST",
					   HL7::optional, HL7::repetition_off);
    addObject<FT1>(OML_O21_FT1_135, "FT1.135", HL7::optional,
		   HL7::repetition_on);
    addObject<CTI>(OML_O21_CTI_140, "CTI.140", HL7::optional,
		   HL7::repetition_on);
    addObject<BLG>(OML_O21_BLG_144, "BLG.144", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  ORC* getORC_53(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OML_O21_ORC_53);
  }
  OML_O21_OBSERVATION_REQUEST* getOBSERVATION_REQUEST(size_t index = 0) {
    return (OML_O21_OBSERVATION_REQUEST*)this->getObjectSafe(
	index, OML_O21_OBSERVATION_REQUEST_54);
  }
  FT1* getFT1_135(size_t index = 0) {
    return (FT1*)this->getObjectSafe(index, OML_O21_FT1_135);
  }
  CTI* getCTI_140(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, OML_O21_CTI_140);
  }
  BLG* getBLG_144(size_t index = 0) {
    return (BLG*)this->getObjectSafe(index, OML_O21_BLG_144);
  }

  /* Checker list */
  bool isORC_53(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_ORC_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION_REQUEST(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OBSERVATION_REQUEST_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFT1_135(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_FT1_135) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_140(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_CTI_140) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBLG_144(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_BLG_144) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OML_O21_52 */

/* ORDER_GENERAL */
struct OML_O21_ORDER_GENERAL : public HL7Group {
  OML_O21_ORDER_GENERAL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { OML_O21_CONTAINER_1_44, OML_O21_ORDER_52, FIELD_ID_MAX };

  const char* className() const { return "OML_O21_ORDER_GENERAL"; }
  OML_O21_ORDER_GENERAL* create() const { return new OML_O21_ORDER_GENERAL(); }

  /* Initialize object */
  void init() {
    setName("OML_O21.ORDER_GENERAL");
    addObject<OML_O21_CONTAINER_1>(OML_O21_CONTAINER_1_44,
				   "OML_O21.CONTAINER_1", HL7::optional,
				   HL7::repetition_off);
    addObject<OML_O21_ORDER>(OML_O21_ORDER_52, "OML_O21.ORDER",
			     HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  OML_O21_CONTAINER_1* getCONTAINER_1(size_t index = 0) {
    return (OML_O21_CONTAINER_1*)this->getObjectSafe(index,
						     OML_O21_CONTAINER_1_44);
  }
  OML_O21_ORDER* getORDER(size_t index = 0) {
    return (OML_O21_ORDER*)this->getObjectSafe(index, OML_O21_ORDER_52);
  }

  /* Checker list */
  bool isCONTAINER_1(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_CONTAINER_1_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_ORDER_52) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OML_O21_43 */

/* OML_O21 */
struct OML_O21 : public HL7Message {
  OML_O21() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OML_O21_MSH_1,
    OML_O21_NTE_4,
    OML_O21_PATIENT_7,
    OML_O21_ORDER_GENERAL_43,
    FIELD_ID_MAX
  };

  const char* className() const { return "OML_O21"; }
  OML_O21* create() const { return new OML_O21(); }

  /* Initialize object */
  void init() {
    setName("OML_O21");
    addObject<MSH>(OML_O21_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(OML_O21_NTE_4, "NTE.4", HL7::optional, HL7::repetition_on);
    addObject<OML_O21_PATIENT>(OML_O21_PATIENT_7, "OML_O21.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<OML_O21_ORDER_GENERAL>(OML_O21_ORDER_GENERAL_43,
				     "OML_O21.ORDER_GENERAL", HL7::initialized,
				     HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OML_O21_MSH_1);
  }
  NTE* getNTE_4(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O21_NTE_4);
  }
  OML_O21_PATIENT* getPATIENT(size_t index = 0) {
    return (OML_O21_PATIENT*)this->getObjectSafe(index, OML_O21_PATIENT_7);
  }
  OML_O21_ORDER_GENERAL* getORDER_GENERAL(size_t index = 0) {
    return (OML_O21_ORDER_GENERAL*)this->getObjectSafe(
	index, OML_O21_ORDER_GENERAL_43);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_4(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_NTE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_PATIENT_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_GENERAL(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_ORDER_GENERAL_43) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OML_O21_ */
} /* namespace HL7_24 */
#endif /*  __OML_O21__24_H__ */
