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


#ifndef __OMG_O19__24_H__
#define __OMG_O19__24_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/BLG.h"
#include "../segment/CTD.h"
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

namespace HL7_24 {

/* Internal structures/groups */
struct OMG_O19_PATIENT_VISIT;       /* PATIENT_VISIT */
struct OMG_O19_INSURANCE;	   /* INSURANCE */
struct OMG_O19_PATIENT;		    /* PATIENT */
struct OMG_O19_OBSERVATION;	 /* OBSERVATION */
struct OMG_O19_PATIENT_PRIOR;       /* PATIENT_PRIOR */
struct OMG_O19_PATIENT_VISIT_PRIOR; /* PATIENT_VISIT_PRIOR */
struct OMG_O19_OBSERVATION_PRIOR;   /* OBSERVATION_PRIOR */
struct OMG_O19_ORDER_PRIOR;	 /* ORDER_PRIOR */
struct OMG_O19_PRIOR_RESULT;	/* PRIOR_RESULT */
struct OMG_O19_ORDER;		    /* ORDER */

/* PATIENT_VISIT */
struct OMG_O19_PATIENT_VISIT : public HL7Group {
  OMG_O19_PATIENT_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { OMG_O19_PV1_18, OMG_O19_PV2_20, FIELD_ID_MAX };

  const char* className() const { return "OMG_O19_PATIENT_VISIT"; }
  OMG_O19_PATIENT_VISIT* create() const { return new OMG_O19_PATIENT_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMG_O19.PATIENT_VISIT");
    addObject<PV1>(OMG_O19_PV1_18, "PV1.18", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(OMG_O19_PV2_20, "PV2.20", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  PV1* getPV1_18(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMG_O19_PV1_18);
  }
  PV2* getPV2_20(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMG_O19_PV2_20);
  }

  /* Checker list */
  bool isPV1_18(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_PV1_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_20(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_PV2_20) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMG_O19_17 */

/* INSURANCE */
struct OMG_O19_INSURANCE : public HL7Group {
  OMG_O19_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMG_O19_IN1_25,
    OMG_O19_IN2_27,
    OMG_O19_IN3_30,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMG_O19_INSURANCE"; }
  OMG_O19_INSURANCE* create() const { return new OMG_O19_INSURANCE(); }

  /* Initialize object */
  void init() {
    setName("OMG_O19.INSURANCE");
    addObject<IN1>(OMG_O19_IN1_25, "IN1.25", HL7::initialized,
		   HL7::repetition_off);
    addObject<IN2>(OMG_O19_IN2_27, "IN2.27", HL7::optional,
		   HL7::repetition_off);
    addObject<IN3>(OMG_O19_IN3_30, "IN3.30", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  IN1* getIN1_25(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OMG_O19_IN1_25);
  }
  IN2* getIN2_27(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OMG_O19_IN2_27);
  }
  IN3* getIN3_30(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OMG_O19_IN3_30);
  }

  /* Checker list */
  bool isIN1_25(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_IN1_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_27(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_IN2_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_30(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_IN3_30) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMG_O19_23 */

/* PATIENT */
struct OMG_O19_PATIENT : public HL7Group {
  OMG_O19_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMG_O19_PID_8,
    OMG_O19_PD1_10,
    OMG_O19_NTE_14,
    OMG_O19_PATIENT_VISIT_17,
    OMG_O19_INSURANCE_23,
    OMG_O19_GT1_35,
    OMG_O19_AL1_39,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMG_O19_PATIENT"; }
  OMG_O19_PATIENT* create() const { return new OMG_O19_PATIENT(); }

  /* Initialize object */
  void init() {
    setName("OMG_O19.PATIENT");
    addObject<PID>(OMG_O19_PID_8, "PID.8", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(OMG_O19_PD1_10, "PD1.10", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(OMG_O19_NTE_14, "NTE.14", HL7::optional, HL7::repetition_on);
    addObject<OMG_O19_PATIENT_VISIT>(OMG_O19_PATIENT_VISIT_17,
				     "OMG_O19.PATIENT_VISIT", HL7::optional,
				     HL7::repetition_off);
    addObject<OMG_O19_INSURANCE>(OMG_O19_INSURANCE_23, "OMG_O19.INSURANCE",
				 HL7::optional, HL7::repetition_on);
    addObject<GT1>(OMG_O19_GT1_35, "GT1.35", HL7::optional,
		   HL7::repetition_off);
    addObject<AL1>(OMG_O19_AL1_39, "AL1.39", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PID* getPID_8(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMG_O19_PID_8);
  }
  PD1* getPD1_10(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMG_O19_PD1_10);
  }
  NTE* getNTE_14(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_NTE_14);
  }
  OMG_O19_PATIENT_VISIT* getPATIENT_VISIT(size_t index = 0) {
    return (OMG_O19_PATIENT_VISIT*)this->getObjectSafe(
	index, OMG_O19_PATIENT_VISIT_17);
  }
  OMG_O19_INSURANCE* getINSURANCE(size_t index = 0) {
    return (OMG_O19_INSURANCE*)this->getObjectSafe(index, OMG_O19_INSURANCE_23);
  }
  GT1* getGT1_35(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, OMG_O19_GT1_35);
  }
  AL1* getAL1_39(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OMG_O19_AL1_39);
  }

  /* Checker list */
  bool isPID_8(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_PID_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_10(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_PD1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_14(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_NTE_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT_VISIT(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_PATIENT_VISIT_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINSURANCE(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_INSURANCE_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_35(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_GT1_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_39(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_AL1_39) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMG_O19_7 */

/* OBSERVATION */
struct OMG_O19_OBSERVATION : public HL7Group {
  OMG_O19_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { OMG_O19_OBX_61, OMG_O19_NTE_64, FIELD_ID_MAX };

  const char* className() const { return "OMG_O19_OBSERVATION"; }
  OMG_O19_OBSERVATION* create() const { return new OMG_O19_OBSERVATION(); }

  /* Initialize object */
  void init() {
    setName("OMG_O19.OBSERVATION");
    addObject<OBX>(OMG_O19_OBX_61, "OBX.61", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(OMG_O19_NTE_64, "NTE.64", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_61(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OBX_61);
  }
  NTE* getNTE_64(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_NTE_64);
  }

  /* Checker list */
  bool isOBX_61(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OBX_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_64(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_NTE_64) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMG_O19_59 */

/* PATIENT_PRIOR */
struct OMG_O19_PATIENT_PRIOR : public HL7Group {
  OMG_O19_PATIENT_PRIOR() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { OMG_O19_PID_72, OMG_O19_PD1_74, FIELD_ID_MAX };

  const char* className() const { return "OMG_O19_PATIENT_PRIOR"; }
  OMG_O19_PATIENT_PRIOR* create() const { return new OMG_O19_PATIENT_PRIOR(); }

  /* Initialize object */
  void init() {
    setName("OMG_O19.PATIENT_PRIOR");
    addObject<PID>(OMG_O19_PID_72, "PID.72", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(OMG_O19_PD1_74, "PD1.74", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  PID* getPID_72(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMG_O19_PID_72);
  }
  PD1* getPD1_74(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMG_O19_PD1_74);
  }

  /* Checker list */
  bool isPID_72(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_PID_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_74(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_PD1_74) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMG_O19_71 */

/* PATIENT_VISIT_PRIOR */
struct OMG_O19_PATIENT_VISIT_PRIOR : public HL7Group {
  OMG_O19_PATIENT_VISIT_PRIOR() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { OMG_O19_PV1_78, OMG_O19_PV2_80, FIELD_ID_MAX };

  const char* className() const { return "OMG_O19_PATIENT_VISIT_PRIOR"; }
  OMG_O19_PATIENT_VISIT_PRIOR* create() const {
    return new OMG_O19_PATIENT_VISIT_PRIOR();
  }

  /* Initialize object */
  void init() {
    setName("OMG_O19.PATIENT_VISIT_PRIOR");
    addObject<PV1>(OMG_O19_PV1_78, "PV1.78", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(OMG_O19_PV2_80, "PV2.80", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  PV1* getPV1_78(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMG_O19_PV1_78);
  }
  PV2* getPV2_80(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMG_O19_PV2_80);
  }

  /* Checker list */
  bool isPV1_78(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_PV1_78) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_80(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_PV2_80) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMG_O19_77 */

/* OBSERVATION_PRIOR */
struct OMG_O19_OBSERVATION_PRIOR : public HL7Group {
  OMG_O19_OBSERVATION_PRIOR() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { OMG_O19_OBX_102, OMG_O19_NTE_105, FIELD_ID_MAX };

  const char* className() const { return "OMG_O19_OBSERVATION_PRIOR"; }
  OMG_O19_OBSERVATION_PRIOR* create() const {
    return new OMG_O19_OBSERVATION_PRIOR();
  }

  /* Initialize object */
  void init() {
    setName("OMG_O19.OBSERVATION_PRIOR");
    addObject<OBX>(OMG_O19_OBX_102, "OBX.102", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(OMG_O19_NTE_105, "NTE.105", HL7::optional,
		   HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_102(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OBX_102);
  }
  NTE* getNTE_105(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_NTE_105);
  }

  /* Checker list */
  bool isOBX_102(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OBX_102) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_105(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_NTE_105) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMG_O19_101 */

/* ORDER_PRIOR */
struct OMG_O19_ORDER_PRIOR : public HL7Group {
  OMG_O19_ORDER_PRIOR() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMG_O19_ORC_90,
    OMG_O19_OBR_92,
    OMG_O19_NTE_95,
    OMG_O19_CTD_99,
    OMG_O19_OBSERVATION_PRIOR_101,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMG_O19_ORDER_PRIOR"; }
  OMG_O19_ORDER_PRIOR* create() const { return new OMG_O19_ORDER_PRIOR(); }

  /* Initialize object */
  void init() {
    setName("OMG_O19.ORDER_PRIOR");
    addObject<ORC>(OMG_O19_ORC_90, "ORC.90", HL7::optional,
		   HL7::repetition_off);
    addObject<OBR>(OMG_O19_OBR_92, "OBR.92", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(OMG_O19_NTE_95, "NTE.95", HL7::optional, HL7::repetition_on);
    addObject<CTD>(OMG_O19_CTD_99, "CTD.99", HL7::optional,
		   HL7::repetition_off);
    addObject<OMG_O19_OBSERVATION_PRIOR>(OMG_O19_OBSERVATION_PRIOR_101,
					 "OMG_O19.OBSERVATION_PRIOR",
					 HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_90(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OMG_O19_ORC_90);
  }
  OBR* getOBR_92(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OMG_O19_OBR_92);
  }
  NTE* getNTE_95(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_NTE_95);
  }
  CTD* getCTD_99(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, OMG_O19_CTD_99);
  }
  OMG_O19_OBSERVATION_PRIOR* getOBSERVATION_PRIOR(size_t index = 0) {
    return (OMG_O19_OBSERVATION_PRIOR*)this->getObjectSafe(
	index, OMG_O19_OBSERVATION_PRIOR_101);
  }

  /* Checker list */
  bool isORC_90(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_ORC_90) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_92(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OBR_92) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_95(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_NTE_95) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_99(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_CTD_99) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION_PRIOR(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OBSERVATION_PRIOR_101) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMG_O19_88 */

/* PRIOR_RESULT */
struct OMG_O19_PRIOR_RESULT : public HL7Group {
  OMG_O19_PRIOR_RESULT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMG_O19_PATIENT_PRIOR_71,
    OMG_O19_PATIENT_VISIT_PRIOR_77,
    OMG_O19_AL1_85,
    OMG_O19_ORDER_PRIOR_88,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMG_O19_PRIOR_RESULT"; }
  OMG_O19_PRIOR_RESULT* create() const { return new OMG_O19_PRIOR_RESULT(); }

  /* Initialize object */
  void init() {
    setName("OMG_O19.PRIOR_RESULT");
    addObject<OMG_O19_PATIENT_PRIOR>(OMG_O19_PATIENT_PRIOR_71,
				     "OMG_O19.PATIENT_PRIOR", HL7::optional,
				     HL7::repetition_off);
    addObject<OMG_O19_PATIENT_VISIT_PRIOR>(OMG_O19_PATIENT_VISIT_PRIOR_77,
					   "OMG_O19.PATIENT_VISIT_PRIOR",
					   HL7::optional, HL7::repetition_off);
    addObject<AL1>(OMG_O19_AL1_85, "AL1.85", HL7::optional, HL7::repetition_on);
    addObject<OMG_O19_ORDER_PRIOR>(OMG_O19_ORDER_PRIOR_88,
				   "OMG_O19.ORDER_PRIOR", HL7::initialized,
				   HL7::repetition_on);
  }

  /* Getters list */
  OMG_O19_PATIENT_PRIOR* getPATIENT_PRIOR(size_t index = 0) {
    return (OMG_O19_PATIENT_PRIOR*)this->getObjectSafe(
	index, OMG_O19_PATIENT_PRIOR_71);
  }
  OMG_O19_PATIENT_VISIT_PRIOR* getPATIENT_VISIT_PRIOR(size_t index = 0) {
    return (OMG_O19_PATIENT_VISIT_PRIOR*)this->getObjectSafe(
	index, OMG_O19_PATIENT_VISIT_PRIOR_77);
  }
  AL1* getAL1_85(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OMG_O19_AL1_85);
  }
  OMG_O19_ORDER_PRIOR* getORDER_PRIOR(size_t index = 0) {
    return (OMG_O19_ORDER_PRIOR*)this->getObjectSafe(index,
						     OMG_O19_ORDER_PRIOR_88);
  }

  /* Checker list */
  bool isPATIENT_PRIOR(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_PATIENT_PRIOR_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT_VISIT_PRIOR(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_PATIENT_VISIT_PRIOR_77) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_85(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_AL1_85) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_PRIOR(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_ORDER_PRIOR_88) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMG_O19_69 */

/* ORDER */
struct OMG_O19_ORDER : public HL7Group {
  OMG_O19_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMG_O19_ORC_44,
    OMG_O19_OBR_45,
    OMG_O19_NTE_48,
    OMG_O19_CTD_52,
    OMG_O19_DG1_56,
    OMG_O19_OBSERVATION_59,
    OMG_O19_PRIOR_RESULT_69,
    OMG_O19_FT1_114,
    OMG_O19_CTI_119,
    OMG_O19_BLG_123,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMG_O19_ORDER"; }
  OMG_O19_ORDER* create() const { return new OMG_O19_ORDER(); }

  /* Initialize object */
  void init() {
    setName("OMG_O19.ORDER");
    addObject<ORC>(OMG_O19_ORC_44, "ORC.44", HL7::initialized,
		   HL7::repetition_off);
    addObject<OBR>(OMG_O19_OBR_45, "OBR.45", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(OMG_O19_NTE_48, "NTE.48", HL7::optional, HL7::repetition_on);
    addObject<CTD>(OMG_O19_CTD_52, "CTD.52", HL7::optional,
		   HL7::repetition_off);
    addObject<DG1>(OMG_O19_DG1_56, "DG1.56", HL7::optional, HL7::repetition_on);
    addObject<OMG_O19_OBSERVATION>(OMG_O19_OBSERVATION_59,
				   "OMG_O19.OBSERVATION", HL7::optional,
				   HL7::repetition_on);
    addObject<OMG_O19_PRIOR_RESULT>(OMG_O19_PRIOR_RESULT_69,
				    "OMG_O19.PRIOR_RESULT", HL7::optional,
				    HL7::repetition_on);
    addObject<FT1>(OMG_O19_FT1_114, "FT1.114", HL7::optional,
		   HL7::repetition_on);
    addObject<CTI>(OMG_O19_CTI_119, "CTI.119", HL7::optional,
		   HL7::repetition_on);
    addObject<BLG>(OMG_O19_BLG_123, "BLG.123", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  ORC* getORC_44(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OMG_O19_ORC_44);
  }
  OBR* getOBR_45(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OMG_O19_OBR_45);
  }
  NTE* getNTE_48(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_NTE_48);
  }
  CTD* getCTD_52(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, OMG_O19_CTD_52);
  }
  DG1* getDG1_56(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, OMG_O19_DG1_56);
  }
  OMG_O19_OBSERVATION* getOBSERVATION(size_t index = 0) {
    return (OMG_O19_OBSERVATION*)this->getObjectSafe(index,
						     OMG_O19_OBSERVATION_59);
  }
  OMG_O19_PRIOR_RESULT* getPRIOR_RESULT(size_t index = 0) {
    return (OMG_O19_PRIOR_RESULT*)this->getObjectSafe(index,
						      OMG_O19_PRIOR_RESULT_69);
  }
  FT1* getFT1_114(size_t index = 0) {
    return (FT1*)this->getObjectSafe(index, OMG_O19_FT1_114);
  }
  CTI* getCTI_119(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, OMG_O19_CTI_119);
  }
  BLG* getBLG_123(size_t index = 0) {
    return (BLG*)this->getObjectSafe(index, OMG_O19_BLG_123);
  }

  /* Checker list */
  bool isORC_44(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_ORC_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_45(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OBR_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_48(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_NTE_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_52(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_CTD_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_56(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_DG1_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OBSERVATION_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRIOR_RESULT(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_PRIOR_RESULT_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFT1_114(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_FT1_114) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_119(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_CTI_119) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBLG_123(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_BLG_123) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMG_O19_43 */

/* OMG_O19 */
struct OMG_O19 : public HL7Message {
  OMG_O19() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMG_O19_MSH_1,
    OMG_O19_NTE_4,
    OMG_O19_PATIENT_7,
    OMG_O19_ORDER_43,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMG_O19"; }
  OMG_O19* create() const { return new OMG_O19(); }

  /* Initialize object */
  void init() {
    setName("OMG_O19");
    addObject<MSH>(OMG_O19_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(OMG_O19_NTE_4, "NTE.4", HL7::optional, HL7::repetition_on);
    addObject<OMG_O19_PATIENT>(OMG_O19_PATIENT_7, "OMG_O19.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<OMG_O19_ORDER>(OMG_O19_ORDER_43, "OMG_O19.ORDER",
			     HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OMG_O19_MSH_1);
  }
  NTE* getNTE_4(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_NTE_4);
  }
  OMG_O19_PATIENT* getPATIENT(size_t index = 0) {
    return (OMG_O19_PATIENT*)this->getObjectSafe(index, OMG_O19_PATIENT_7);
  }
  OMG_O19_ORDER* getORDER(size_t index = 0) {
    return (OMG_O19_ORDER*)this->getObjectSafe(index, OMG_O19_ORDER_43);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_4(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_NTE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_PATIENT_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_ORDER_43) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMG_O19_ */
} /* namespace HL7_24 */
#endif /*  __OMG_O19__24_H__ */
