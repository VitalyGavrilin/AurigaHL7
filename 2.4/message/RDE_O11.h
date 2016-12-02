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


#ifndef __RDE_O11__24_H__
#define __RDE_O11__24_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/CTI.h"
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
#include "../segment/RXE.h"
#include "../segment/RXO.h"
#include "../segment/RXR.h"

namespace HL7_24 {

/* Internal structures/groups */
struct RDE_O11_PATIENT_VISIT; /* PATIENT_VISIT */
struct RDE_O11_INSURANCE;     /* INSURANCE */
struct RDE_O11_PATIENT;       /* PATIENT */
struct RDE_O11_COMPONENT;     /* COMPONENT */
struct RDE_O11_ORDER_DETAIL;  /* ORDER_DETAIL */
struct RDE_O11_OBSERVATION;   /* OBSERVATION */
struct RDE_O11_ORDER;	 /* ORDER */

/* PATIENT_VISIT */
struct RDE_O11_PATIENT_VISIT : public HL7Group {
  RDE_O11_PATIENT_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RDE_O11_PV1_18, RDE_O11_PV2_20, FIELD_ID_MAX };

  const char* className() const { return "RDE_O11_PATIENT_VISIT"; }
  RDE_O11_PATIENT_VISIT* create() const { return new RDE_O11_PATIENT_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("RDE_O11.PATIENT_VISIT");
    addObject<PV1>(RDE_O11_PV1_18, "PV1.18", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(RDE_O11_PV2_20, "PV2.20", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  PV1* getPV1_18(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RDE_O11_PV1_18);
  }
  PV2* getPV2_20(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RDE_O11_PV2_20);
  }

  /* Checker list */
  bool isPV1_18(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_PV1_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_20(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_PV2_20) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RDE_O11_17 */

/* INSURANCE */
struct RDE_O11_INSURANCE : public HL7Group {
  RDE_O11_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RDE_O11_IN1_25,
    RDE_O11_IN2_27,
    RDE_O11_IN3_30,
    FIELD_ID_MAX
  };

  const char* className() const { return "RDE_O11_INSURANCE"; }
  RDE_O11_INSURANCE* create() const { return new RDE_O11_INSURANCE(); }

  /* Initialize object */
  void init() {
    setName("RDE_O11.INSURANCE");
    addObject<IN1>(RDE_O11_IN1_25, "IN1.25", HL7::initialized,
		   HL7::repetition_off);
    addObject<IN2>(RDE_O11_IN2_27, "IN2.27", HL7::optional,
		   HL7::repetition_off);
    addObject<IN3>(RDE_O11_IN3_30, "IN3.30", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  IN1* getIN1_25(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, RDE_O11_IN1_25);
  }
  IN2* getIN2_27(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, RDE_O11_IN2_27);
  }
  IN3* getIN3_30(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, RDE_O11_IN3_30);
  }

  /* Checker list */
  bool isIN1_25(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_IN1_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_27(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_IN2_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_30(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_IN3_30) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RDE_O11_23 */

/* PATIENT */
struct RDE_O11_PATIENT : public HL7Group {
  RDE_O11_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RDE_O11_PID_8,
    RDE_O11_PD1_10,
    RDE_O11_NTE_14,
    RDE_O11_PATIENT_VISIT_17,
    RDE_O11_INSURANCE_23,
    RDE_O11_GT1_35,
    RDE_O11_AL1_39,
    FIELD_ID_MAX
  };

  const char* className() const { return "RDE_O11_PATIENT"; }
  RDE_O11_PATIENT* create() const { return new RDE_O11_PATIENT(); }

  /* Initialize object */
  void init() {
    setName("RDE_O11.PATIENT");
    addObject<PID>(RDE_O11_PID_8, "PID.8", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(RDE_O11_PD1_10, "PD1.10", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(RDE_O11_NTE_14, "NTE.14", HL7::optional, HL7::repetition_on);
    addObject<RDE_O11_PATIENT_VISIT>(RDE_O11_PATIENT_VISIT_17,
				     "RDE_O11.PATIENT_VISIT", HL7::optional,
				     HL7::repetition_off);
    addObject<RDE_O11_INSURANCE>(RDE_O11_INSURANCE_23, "RDE_O11.INSURANCE",
				 HL7::optional, HL7::repetition_on);
    addObject<GT1>(RDE_O11_GT1_35, "GT1.35", HL7::optional,
		   HL7::repetition_off);
    addObject<AL1>(RDE_O11_AL1_39, "AL1.39", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PID* getPID_8(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RDE_O11_PID_8);
  }
  PD1* getPD1_10(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, RDE_O11_PD1_10);
  }
  NTE* getNTE_14(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RDE_O11_NTE_14);
  }
  RDE_O11_PATIENT_VISIT* getPATIENT_VISIT(size_t index = 0) {
    return (RDE_O11_PATIENT_VISIT*)this->getObjectSafe(
	index, RDE_O11_PATIENT_VISIT_17);
  }
  RDE_O11_INSURANCE* getINSURANCE(size_t index = 0) {
    return (RDE_O11_INSURANCE*)this->getObjectSafe(index, RDE_O11_INSURANCE_23);
  }
  GT1* getGT1_35(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, RDE_O11_GT1_35);
  }
  AL1* getAL1_39(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, RDE_O11_AL1_39);
  }

  /* Checker list */
  bool isPID_8(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_PID_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_10(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_PD1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_14(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_NTE_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT_VISIT(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_PATIENT_VISIT_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINSURANCE(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_INSURANCE_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_35(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_GT1_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_39(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_AL1_39) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RDE_O11_7 */

/* COMPONENT */
struct RDE_O11_COMPONENT : public HL7Group {
  RDE_O11_COMPONENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RDE_O11_RXC_57, RDE_O11_NTE_61, FIELD_ID_MAX };

  const char* className() const { return "RDE_O11_COMPONENT"; }
  RDE_O11_COMPONENT* create() const { return new RDE_O11_COMPONENT(); }

  /* Initialize object */
  void init() {
    setName("RDE_O11.COMPONENT");
    addObject<RXC>(RDE_O11_RXC_57, "RXC.57", HL7::initialized,
		   HL7::repetition_on);
    addObject<NTE>(RDE_O11_NTE_61, "NTE.61", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  RXC* getRXC_57(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RDE_O11_RXC_57);
  }
  NTE* getNTE_61(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RDE_O11_NTE_61);
  }

  /* Checker list */
  bool isRXC_57(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_RXC_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_61(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_NTE_61) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RDE_O11_55 */

/* ORDER_DETAIL */
struct RDE_O11_ORDER_DETAIL : public HL7Group {
  RDE_O11_ORDER_DETAIL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RDE_O11_RXO_46,
    RDE_O11_NTE_49,
    RDE_O11_RXR_53,
    RDE_O11_COMPONENT_55,
    FIELD_ID_MAX
  };

  const char* className() const { return "RDE_O11_ORDER_DETAIL"; }
  RDE_O11_ORDER_DETAIL* create() const { return new RDE_O11_ORDER_DETAIL(); }

  /* Initialize object */
  void init() {
    setName("RDE_O11.ORDER_DETAIL");
    addObject<RXO>(RDE_O11_RXO_46, "RXO.46", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(RDE_O11_NTE_49, "NTE.49", HL7::optional, HL7::repetition_on);
    addObject<RXR>(RDE_O11_RXR_53, "RXR.53", HL7::initialized,
		   HL7::repetition_on);
    addObject<RDE_O11_COMPONENT>(RDE_O11_COMPONENT_55, "RDE_O11.COMPONENT",
				 HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  RXO* getRXO_46(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, RDE_O11_RXO_46);
  }
  NTE* getNTE_49(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RDE_O11_NTE_49);
  }
  RXR* getRXR_53(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RDE_O11_RXR_53);
  }
  RDE_O11_COMPONENT* getCOMPONENT(size_t index = 0) {
    return (RDE_O11_COMPONENT*)this->getObjectSafe(index, RDE_O11_COMPONENT_55);
  }

  /* Checker list */
  bool isRXO_46(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_RXO_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_49(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_NTE_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_53(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_RXR_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCOMPONENT(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_COMPONENT_55) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RDE_O11_45 */

/* OBSERVATION */
struct RDE_O11_OBSERVATION : public HL7Group {
  RDE_O11_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RDE_O11_OBX_77, RDE_O11_NTE_80, FIELD_ID_MAX };

  const char* className() const { return "RDE_O11_OBSERVATION"; }
  RDE_O11_OBSERVATION* create() const { return new RDE_O11_OBSERVATION(); }

  /* Initialize object */
  void init() {
    setName("RDE_O11.OBSERVATION");
    addObject<OBX>(RDE_O11_OBX_77, "OBX.77", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(RDE_O11_NTE_80, "NTE.80", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_77(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RDE_O11_OBX_77);
  }
  NTE* getNTE_80(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RDE_O11_NTE_80);
  }

  /* Checker list */
  bool isOBX_77(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_OBX_77) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_80(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_NTE_80) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RDE_O11_75 */

/* ORDER */
struct RDE_O11_ORDER : public HL7Group {
  RDE_O11_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RDE_O11_ORC_44,
    RDE_O11_ORDER_DETAIL_45,
    RDE_O11_RXE_66,
    RDE_O11_RXR_68,
    RDE_O11_RXC_72,
    RDE_O11_OBSERVATION_75,
    RDE_O11_CTI_87,
    FIELD_ID_MAX
  };

  const char* className() const { return "RDE_O11_ORDER"; }
  RDE_O11_ORDER* create() const { return new RDE_O11_ORDER(); }

  /* Initialize object */
  void init() {
    setName("RDE_O11.ORDER");
    addObject<ORC>(RDE_O11_ORC_44, "ORC.44", HL7::initialized,
		   HL7::repetition_off);
    addObject<RDE_O11_ORDER_DETAIL>(RDE_O11_ORDER_DETAIL_45,
				    "RDE_O11.ORDER_DETAIL", HL7::optional,
				    HL7::repetition_off);
    addObject<RXE>(RDE_O11_RXE_66, "RXE.66", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXR>(RDE_O11_RXR_68, "RXR.68", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXC>(RDE_O11_RXC_72, "RXC.72", HL7::optional, HL7::repetition_on);
    addObject<RDE_O11_OBSERVATION>(RDE_O11_OBSERVATION_75,
				   "RDE_O11.OBSERVATION", HL7::optional,
				   HL7::repetition_on);
    addObject<CTI>(RDE_O11_CTI_87, "CTI.87", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_44(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, RDE_O11_ORC_44);
  }
  RDE_O11_ORDER_DETAIL* getORDER_DETAIL(size_t index = 0) {
    return (RDE_O11_ORDER_DETAIL*)this->getObjectSafe(index,
						      RDE_O11_ORDER_DETAIL_45);
  }
  RXE* getRXE_66(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, RDE_O11_RXE_66);
  }
  RXR* getRXR_68(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RDE_O11_RXR_68);
  }
  RXC* getRXC_72(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RDE_O11_RXC_72);
  }
  RDE_O11_OBSERVATION* getOBSERVATION(size_t index = 0) {
    return (RDE_O11_OBSERVATION*)this->getObjectSafe(index,
						     RDE_O11_OBSERVATION_75);
  }
  CTI* getCTI_87(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, RDE_O11_CTI_87);
  }

  /* Checker list */
  bool isORC_44(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_ORC_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_DETAIL(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_ORDER_DETAIL_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXE_66(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_RXE_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_68(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_RXR_68) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_72(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_RXC_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_OBSERVATION_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_87(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_CTI_87) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RDE_O11_43 */

/* RDE_O11 */
struct RDE_O11 : public HL7Message {
  RDE_O11() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RDE_O11_MSH_1,
    RDE_O11_NTE_4,
    RDE_O11_PATIENT_7,
    RDE_O11_ORDER_43,
    FIELD_ID_MAX
  };

  const char* className() const { return "RDE_O11"; }
  RDE_O11* create() const { return new RDE_O11(); }

  /* Initialize object */
  void init() {
    setName("RDE_O11");
    addObject<MSH>(RDE_O11_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(RDE_O11_NTE_4, "NTE.4", HL7::optional, HL7::repetition_on);
    addObject<RDE_O11_PATIENT>(RDE_O11_PATIENT_7, "RDE_O11.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<RDE_O11_ORDER>(RDE_O11_ORDER_43, "RDE_O11.ORDER",
			     HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RDE_O11_MSH_1);
  }
  NTE* getNTE_4(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RDE_O11_NTE_4);
  }
  RDE_O11_PATIENT* getPATIENT(size_t index = 0) {
    return (RDE_O11_PATIENT*)this->getObjectSafe(index, RDE_O11_PATIENT_7);
  }
  RDE_O11_ORDER* getORDER(size_t index = 0) {
    return (RDE_O11_ORDER*)this->getObjectSafe(index, RDE_O11_ORDER_43);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_4(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_NTE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_PATIENT_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, RDE_O11_ORDER_43) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RDE_O11_ */
} /* namespace HL7_24 */
#endif /*  __RDE_O11__24_H__ */
