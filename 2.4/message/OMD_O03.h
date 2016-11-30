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


#ifndef __OMD_O03__24_H__
#define __OMD_O03__24_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/GT1.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IN3.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBX.h"
#include "../segment/ODS.h"
#include "../segment/ODT.h"
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"

namespace HL7_24 {

/* Internal structures/groups */
struct OMD_O03_PATIENT_VISIT; /* PATIENT_VISIT */
struct OMD_O03_INSURANCE;     /* INSURANCE */
struct OMD_O03_PATIENT;       /* PATIENT */
struct OMD_O03_OBSERVATION;   /* OBSERVATION */
struct OMD_O03_DIET;	  /* DIET */
struct OMD_O03_ORDER_DIET;    /* ORDER_DIET */
struct OMD_O03_ORDER_TRAY;    /* ORDER_TRAY */

/* PATIENT_VISIT */
struct OMD_O03_PATIENT_VISIT : public HL7Group {
  OMD_O03_PATIENT_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { OMD_O03_PV1_18, OMD_O03_PV2_20, FIELD_ID_MAX };

  const char* className() const { return "OMD_O03_PATIENT_VISIT"; }
  OMD_O03_PATIENT_VISIT* create() const { return new OMD_O03_PATIENT_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMD_O03.PATIENT_VISIT");
    addObject<PV1>(OMD_O03_PV1_18, "PV1.18", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(OMD_O03_PV2_20, "PV2.20", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  PV1* getPV1_18(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMD_O03_PV1_18);
  }
  PV2* getPV2_20(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMD_O03_PV2_20);
  }

  /* Checker list */
  bool isPV1_18(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_PV1_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_20(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_PV2_20) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMD_O03_17 */

/* INSURANCE */
struct OMD_O03_INSURANCE : public HL7Group {
  OMD_O03_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMD_O03_IN1_25,
    OMD_O03_IN2_27,
    OMD_O03_IN3_30,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMD_O03_INSURANCE"; }
  OMD_O03_INSURANCE* create() const { return new OMD_O03_INSURANCE(); }

  /* Initialize object */
  void init() {
    setName("OMD_O03.INSURANCE");
    addObject<IN1>(OMD_O03_IN1_25, "IN1.25", HL7::initialized,
		   HL7::repetition_off);
    addObject<IN2>(OMD_O03_IN2_27, "IN2.27", HL7::optional,
		   HL7::repetition_off);
    addObject<IN3>(OMD_O03_IN3_30, "IN3.30", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  IN1* getIN1_25(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OMD_O03_IN1_25);
  }
  IN2* getIN2_27(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OMD_O03_IN2_27);
  }
  IN3* getIN3_30(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OMD_O03_IN3_30);
  }

  /* Checker list */
  bool isIN1_25(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_IN1_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_27(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_IN2_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_30(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_IN3_30) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMD_O03_23 */

/* PATIENT */
struct OMD_O03_PATIENT : public HL7Group {
  OMD_O03_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMD_O03_PID_8,
    OMD_O03_PD1_10,
    OMD_O03_NTE_14,
    OMD_O03_PATIENT_VISIT_17,
    OMD_O03_INSURANCE_23,
    OMD_O03_GT1_35,
    OMD_O03_AL1_39,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMD_O03_PATIENT"; }
  OMD_O03_PATIENT* create() const { return new OMD_O03_PATIENT(); }

  /* Initialize object */
  void init() {
    setName("OMD_O03.PATIENT");
    addObject<PID>(OMD_O03_PID_8, "PID.8", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(OMD_O03_PD1_10, "PD1.10", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(OMD_O03_NTE_14, "NTE.14", HL7::optional, HL7::repetition_on);
    addObject<OMD_O03_PATIENT_VISIT>(OMD_O03_PATIENT_VISIT_17,
				     "OMD_O03.PATIENT_VISIT", HL7::optional,
				     HL7::repetition_off);
    addObject<OMD_O03_INSURANCE>(OMD_O03_INSURANCE_23, "OMD_O03.INSURANCE",
				 HL7::optional, HL7::repetition_on);
    addObject<GT1>(OMD_O03_GT1_35, "GT1.35", HL7::optional,
		   HL7::repetition_off);
    addObject<AL1>(OMD_O03_AL1_39, "AL1.39", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PID* getPID_8(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMD_O03_PID_8);
  }
  PD1* getPD1_10(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMD_O03_PD1_10);
  }
  NTE* getNTE_14(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMD_O03_NTE_14);
  }
  OMD_O03_PATIENT_VISIT* getPATIENT_VISIT(size_t index = 0) {
    return (OMD_O03_PATIENT_VISIT*)this->getObjectSafe(
	index, OMD_O03_PATIENT_VISIT_17);
  }
  OMD_O03_INSURANCE* getINSURANCE(size_t index = 0) {
    return (OMD_O03_INSURANCE*)this->getObjectSafe(index, OMD_O03_INSURANCE_23);
  }
  GT1* getGT1_35(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, OMD_O03_GT1_35);
  }
  AL1* getAL1_39(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OMD_O03_AL1_39);
  }

  /* Checker list */
  bool isPID_8(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_PID_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_10(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_PD1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_14(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_NTE_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT_VISIT(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_PATIENT_VISIT_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINSURANCE(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_INSURANCE_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_35(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_GT1_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_39(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_AL1_39) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMD_O03_7 */

/* OBSERVATION */
struct OMD_O03_OBSERVATION : public HL7Group {
  OMD_O03_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { OMD_O03_OBX_56, OMD_O03_NTE_59, FIELD_ID_MAX };

  const char* className() const { return "OMD_O03_OBSERVATION"; }
  OMD_O03_OBSERVATION* create() const { return new OMD_O03_OBSERVATION(); }

  /* Initialize object */
  void init() {
    setName("OMD_O03.OBSERVATION");
    addObject<OBX>(OMD_O03_OBX_56, "OBX.56", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(OMD_O03_NTE_59, "NTE.59", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_56(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMD_O03_OBX_56);
  }
  NTE* getNTE_59(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMD_O03_NTE_59);
  }

  /* Checker list */
  bool isOBX_56(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OBX_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_59(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_NTE_59) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMD_O03_54 */

/* DIET */
struct OMD_O03_DIET : public HL7Group {
  OMD_O03_DIET() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMD_O03_ODS_47,
    OMD_O03_NTE_51,
    OMD_O03_OBSERVATION_54,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMD_O03_DIET"; }
  OMD_O03_DIET* create() const { return new OMD_O03_DIET(); }

  /* Initialize object */
  void init() {
    setName("OMD_O03.DIET");
    addObject<ODS>(OMD_O03_ODS_47, "ODS.47", HL7::initialized,
		   HL7::repetition_on);
    addObject<NTE>(OMD_O03_NTE_51, "NTE.51", HL7::optional, HL7::repetition_on);
    addObject<OMD_O03_OBSERVATION>(OMD_O03_OBSERVATION_54,
				   "OMD_O03.OBSERVATION", HL7::optional,
				   HL7::repetition_on);
  }

  /* Getters list */
  ODS* getODS_47(size_t index = 0) {
    return (ODS*)this->getObjectSafe(index, OMD_O03_ODS_47);
  }
  NTE* getNTE_51(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMD_O03_NTE_51);
  }
  OMD_O03_OBSERVATION* getOBSERVATION(size_t index = 0) {
    return (OMD_O03_OBSERVATION*)this->getObjectSafe(index,
						     OMD_O03_OBSERVATION_54);
  }

  /* Checker list */
  bool isODS_47(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_ODS_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_51(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_NTE_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OBSERVATION_54) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMD_O03_45 */

/* ORDER_DIET */
struct OMD_O03_ORDER_DIET : public HL7Group {
  OMD_O03_ORDER_DIET() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { OMD_O03_ORC_44, OMD_O03_DIET_45, FIELD_ID_MAX };

  const char* className() const { return "OMD_O03_ORDER_DIET"; }
  OMD_O03_ORDER_DIET* create() const { return new OMD_O03_ORDER_DIET(); }

  /* Initialize object */
  void init() {
    setName("OMD_O03.ORDER_DIET");
    addObject<ORC>(OMD_O03_ORC_44, "ORC.44", HL7::initialized,
		   HL7::repetition_off);
    addObject<OMD_O03_DIET>(OMD_O03_DIET_45, "OMD_O03.DIET", HL7::optional,
			    HL7::repetition_off);
  }

  /* Getters list */
  ORC* getORC_44(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OMD_O03_ORC_44);
  }
  OMD_O03_DIET* getDIET(size_t index = 0) {
    return (OMD_O03_DIET*)this->getObjectSafe(index, OMD_O03_DIET_45);
  }

  /* Checker list */
  bool isORC_44(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_ORC_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDIET(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_DIET_45) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMD_O03_43 */

/* ORDER_TRAY */
struct OMD_O03_ORDER_TRAY : public HL7Group {
  OMD_O03_ORDER_TRAY() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMD_O03_ORC_68,
    OMD_O03_ODT_70,
    OMD_O03_NTE_74,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMD_O03_ORDER_TRAY"; }
  OMD_O03_ORDER_TRAY* create() const { return new OMD_O03_ORDER_TRAY(); }

  /* Initialize object */
  void init() {
    setName("OMD_O03.ORDER_TRAY");
    addObject<ORC>(OMD_O03_ORC_68, "ORC.68", HL7::initialized,
		   HL7::repetition_off);
    addObject<ODT>(OMD_O03_ODT_70, "ODT.70", HL7::initialized,
		   HL7::repetition_on);
    addObject<NTE>(OMD_O03_NTE_74, "NTE.74", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_68(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OMD_O03_ORC_68);
  }
  ODT* getODT_70(size_t index = 0) {
    return (ODT*)this->getObjectSafe(index, OMD_O03_ODT_70);
  }
  NTE* getNTE_74(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMD_O03_NTE_74);
  }

  /* Checker list */
  bool isORC_68(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_ORC_68) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODT_70(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_ODT_70) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_74(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_NTE_74) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMD_O03_66 */

/* OMD_O03 */
struct OMD_O03 : public HL7Message {
  OMD_O03() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMD_O03_MSH_1,
    OMD_O03_NTE_4,
    OMD_O03_PATIENT_7,
    OMD_O03_ORDER_DIET_43,
    OMD_O03_ORDER_TRAY_66,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMD_O03"; }
  OMD_O03* create() const { return new OMD_O03(); }

  /* Initialize object */
  void init() {
    setName("OMD_O03");
    addObject<MSH>(OMD_O03_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(OMD_O03_NTE_4, "NTE.4", HL7::optional, HL7::repetition_on);
    addObject<OMD_O03_PATIENT>(OMD_O03_PATIENT_7, "OMD_O03.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<OMD_O03_ORDER_DIET>(OMD_O03_ORDER_DIET_43, "OMD_O03.ORDER_DIET",
				  HL7::initialized, HL7::repetition_on);
    addObject<OMD_O03_ORDER_TRAY>(OMD_O03_ORDER_TRAY_66, "OMD_O03.ORDER_TRAY",
				  HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OMD_O03_MSH_1);
  }
  NTE* getNTE_4(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMD_O03_NTE_4);
  }
  OMD_O03_PATIENT* getPATIENT(size_t index = 0) {
    return (OMD_O03_PATIENT*)this->getObjectSafe(index, OMD_O03_PATIENT_7);
  }
  OMD_O03_ORDER_DIET* getORDER_DIET(size_t index = 0) {
    return (OMD_O03_ORDER_DIET*)this->getObjectSafe(index,
						    OMD_O03_ORDER_DIET_43);
  }
  OMD_O03_ORDER_TRAY* getORDER_TRAY(size_t index = 0) {
    return (OMD_O03_ORDER_TRAY*)this->getObjectSafe(index,
						    OMD_O03_ORDER_TRAY_66);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_4(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_NTE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_PATIENT_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_DIET(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_ORDER_DIET_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_TRAY(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_ORDER_TRAY_66) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMD_O03_ */
} /* namespace HL7_24 */
#endif /*  __OMD_O03__24_H__ */
