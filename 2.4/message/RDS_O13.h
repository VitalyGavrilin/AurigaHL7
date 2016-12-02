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


#ifndef __RDS_O13__24_H__
#define __RDS_O13__24_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/FT1.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/RXC.h"
#include "../segment/RXD.h"
#include "../segment/RXE.h"
#include "../segment/RXO.h"
#include "../segment/RXR.h"

namespace HL7_24 {

/* Internal structures/groups */
struct RDS_O13_PATIENT_VISIT;		/* PATIENT_VISIT */
struct RDS_O13_PATIENT;			/* PATIENT */
struct RDS_O13_COMPONENT;		/* COMPONENT */
struct RDS_O13_ORDER_DETAIL_SUPPLEMENT; /* ORDER_DETAIL_SUPPLEMENT */
struct RDS_O13_ORDER_DETAIL;		/* ORDER_DETAIL */
struct RDS_O13_ENCODING;		/* ENCODING */
struct RDS_O13_OBSERVATION;		/* OBSERVATION */
struct RDS_O13_ORDER;			/* ORDER */

/* PATIENT_VISIT */
struct RDS_O13_PATIENT_VISIT : public HL7Group {
  RDS_O13_PATIENT_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RDS_O13_PV1_23, RDS_O13_PV2_25, FIELD_ID_MAX };

  const char* className() const { return "RDS_O13_PATIENT_VISIT"; }
  RDS_O13_PATIENT_VISIT* create() const { return new RDS_O13_PATIENT_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("RDS_O13.PATIENT_VISIT");
    addObject<PV1>(RDS_O13_PV1_23, "PV1.23", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(RDS_O13_PV2_25, "PV2.25", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  PV1* getPV1_23(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RDS_O13_PV1_23);
  }
  PV2* getPV2_25(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RDS_O13_PV2_25);
  }

  /* Checker list */
  bool isPV1_23(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_PV1_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_25(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_PV2_25) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RDS_O13_22 */

/* PATIENT */
struct RDS_O13_PATIENT : public HL7Group {
  RDS_O13_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RDS_O13_PID_8,
    RDS_O13_PD1_10,
    RDS_O13_NTE_14,
    RDS_O13_AL1_19,
    RDS_O13_PATIENT_VISIT_22,
    FIELD_ID_MAX
  };

  const char* className() const { return "RDS_O13_PATIENT"; }
  RDS_O13_PATIENT* create() const { return new RDS_O13_PATIENT(); }

  /* Initialize object */
  void init() {
    setName("RDS_O13.PATIENT");
    addObject<PID>(RDS_O13_PID_8, "PID.8", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(RDS_O13_PD1_10, "PD1.10", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(RDS_O13_NTE_14, "NTE.14", HL7::optional, HL7::repetition_on);
    addObject<AL1>(RDS_O13_AL1_19, "AL1.19", HL7::optional, HL7::repetition_on);
    addObject<RDS_O13_PATIENT_VISIT>(RDS_O13_PATIENT_VISIT_22,
				     "RDS_O13.PATIENT_VISIT", HL7::optional,
				     HL7::repetition_off);
  }

  /* Getters list */
  PID* getPID_8(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RDS_O13_PID_8);
  }
  PD1* getPD1_10(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, RDS_O13_PD1_10);
  }
  NTE* getNTE_14(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RDS_O13_NTE_14);
  }
  AL1* getAL1_19(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, RDS_O13_AL1_19);
  }
  RDS_O13_PATIENT_VISIT* getPATIENT_VISIT(size_t index = 0) {
    return (RDS_O13_PATIENT_VISIT*)this->getObjectSafe(
	index, RDS_O13_PATIENT_VISIT_22);
  }

  /* Checker list */
  bool isPID_8(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_PID_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_10(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_PD1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_14(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_NTE_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_19(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_AL1_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT_VISIT(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_PATIENT_VISIT_22) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RDS_O13_7 */

/* COMPONENT */
struct RDS_O13_COMPONENT : public HL7Group {
  RDS_O13_COMPONENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RDS_O13_RXC_42, RDS_O13_NTE_46, FIELD_ID_MAX };

  const char* className() const { return "RDS_O13_COMPONENT"; }
  RDS_O13_COMPONENT* create() const { return new RDS_O13_COMPONENT(); }

  /* Initialize object */
  void init() {
    setName("RDS_O13.COMPONENT");
    addObject<RXC>(RDS_O13_RXC_42, "RXC.42", HL7::initialized,
		   HL7::repetition_on);
    addObject<NTE>(RDS_O13_NTE_46, "NTE.46", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  RXC* getRXC_42(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RDS_O13_RXC_42);
  }
  NTE* getNTE_46(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RDS_O13_NTE_46);
  }

  /* Checker list */
  bool isRXC_42(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_RXC_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_46(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_NTE_46) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RDS_O13_40 */

/* ORDER_DETAIL_SUPPLEMENT */
struct RDS_O13_ORDER_DETAIL_SUPPLEMENT : public HL7Group {
  RDS_O13_ORDER_DETAIL_SUPPLEMENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RDS_O13_NTE_35,
    RDS_O13_RXR_38,
    RDS_O13_COMPONENT_40,
    FIELD_ID_MAX
  };

  const char* className() const { return "RDS_O13_ORDER_DETAIL_SUPPLEMENT"; }
  RDS_O13_ORDER_DETAIL_SUPPLEMENT* create() const {
    return new RDS_O13_ORDER_DETAIL_SUPPLEMENT();
  }

  /* Initialize object */
  void init() {
    setName("RDS_O13.ORDER_DETAIL_SUPPLEMENT");
    addObject<NTE>(RDS_O13_NTE_35, "NTE.35", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXR>(RDS_O13_RXR_38, "RXR.38", HL7::initialized,
		   HL7::repetition_on);
    addObject<RDS_O13_COMPONENT>(RDS_O13_COMPONENT_40, "RDS_O13.COMPONENT",
				 HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  NTE* getNTE_35(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RDS_O13_NTE_35);
  }
  RXR* getRXR_38(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RDS_O13_RXR_38);
  }
  RDS_O13_COMPONENT* getCOMPONENT(size_t index = 0) {
    return (RDS_O13_COMPONENT*)this->getObjectSafe(index, RDS_O13_COMPONENT_40);
  }

  /* Checker list */
  bool isNTE_35(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_NTE_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_38(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_RXR_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCOMPONENT(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_COMPONENT_40) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RDS_O13_33 */

/* ORDER_DETAIL */
struct RDS_O13_ORDER_DETAIL : public HL7Group {
  RDS_O13_ORDER_DETAIL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RDS_O13_RXO_32,
    RDS_O13_ORDER_DETAIL_SUPPLEMENT_33,
    FIELD_ID_MAX
  };

  const char* className() const { return "RDS_O13_ORDER_DETAIL"; }
  RDS_O13_ORDER_DETAIL* create() const { return new RDS_O13_ORDER_DETAIL(); }

  /* Initialize object */
  void init() {
    setName("RDS_O13.ORDER_DETAIL");
    addObject<RXO>(RDS_O13_RXO_32, "RXO.32", HL7::initialized,
		   HL7::repetition_off);
    addObject<RDS_O13_ORDER_DETAIL_SUPPLEMENT>(
	RDS_O13_ORDER_DETAIL_SUPPLEMENT_33, "RDS_O13.ORDER_DETAIL_SUPPLEMENT",
	HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  RXO* getRXO_32(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, RDS_O13_RXO_32);
  }
  RDS_O13_ORDER_DETAIL_SUPPLEMENT* getORDER_DETAIL_SUPPLEMENT(
      size_t index = 0) {
    return (RDS_O13_ORDER_DETAIL_SUPPLEMENT*)this->getObjectSafe(
	index, RDS_O13_ORDER_DETAIL_SUPPLEMENT_33);
  }

  /* Checker list */
  bool isRXO_32(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_RXO_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_DETAIL_SUPPLEMENT(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_ORDER_DETAIL_SUPPLEMENT_33) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RDS_O13_31 */

/* ENCODING */
struct RDS_O13_ENCODING : public HL7Group {
  RDS_O13_ENCODING() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RDS_O13_RXE_53,
    RDS_O13_RXR_55,
    RDS_O13_RXC_59,
    FIELD_ID_MAX
  };

  const char* className() const { return "RDS_O13_ENCODING"; }
  RDS_O13_ENCODING* create() const { return new RDS_O13_ENCODING(); }

  /* Initialize object */
  void init() {
    setName("RDS_O13.ENCODING");
    addObject<RXE>(RDS_O13_RXE_53, "RXE.53", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXR>(RDS_O13_RXR_55, "RXR.55", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXC>(RDS_O13_RXC_59, "RXC.59", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  RXE* getRXE_53(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, RDS_O13_RXE_53);
  }
  RXR* getRXR_55(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RDS_O13_RXR_55);
  }
  RXC* getRXC_59(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RDS_O13_RXC_59);
  }

  /* Checker list */
  bool isRXE_53(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_RXE_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_55(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_RXR_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_59(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_RXC_59) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RDS_O13_52 */

/* OBSERVATION */
struct RDS_O13_OBSERVATION : public HL7Group {
  RDS_O13_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RDS_O13_OBX_74, RDS_O13_NTE_77, FIELD_ID_MAX };

  const char* className() const { return "RDS_O13_OBSERVATION"; }
  RDS_O13_OBSERVATION* create() const { return new RDS_O13_OBSERVATION(); }

  /* Initialize object */
  void init() {
    setName("RDS_O13.OBSERVATION");
    addObject<OBX>(RDS_O13_OBX_74, "OBX.74", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(RDS_O13_NTE_77, "NTE.77", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_74(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RDS_O13_OBX_74);
  }
  NTE* getNTE_77(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RDS_O13_NTE_77);
  }

  /* Checker list */
  bool isOBX_74(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_OBX_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_77(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_NTE_77) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RDS_O13_72 */

/* ORDER */
struct RDS_O13_ORDER : public HL7Group {
  RDS_O13_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RDS_O13_ORC_30,
    RDS_O13_ORDER_DETAIL_31,
    RDS_O13_ENCODING_52,
    RDS_O13_RXD_63,
    RDS_O13_RXR_65,
    RDS_O13_RXC_69,
    RDS_O13_OBSERVATION_72,
    RDS_O13_FT1_84,
    FIELD_ID_MAX
  };

  const char* className() const { return "RDS_O13_ORDER"; }
  RDS_O13_ORDER* create() const { return new RDS_O13_ORDER(); }

  /* Initialize object */
  void init() {
    setName("RDS_O13.ORDER");
    addObject<ORC>(RDS_O13_ORC_30, "ORC.30", HL7::initialized,
		   HL7::repetition_off);
    addObject<RDS_O13_ORDER_DETAIL>(RDS_O13_ORDER_DETAIL_31,
				    "RDS_O13.ORDER_DETAIL", HL7::optional,
				    HL7::repetition_off);
    addObject<RDS_O13_ENCODING>(RDS_O13_ENCODING_52, "RDS_O13.ENCODING",
				HL7::optional, HL7::repetition_off);
    addObject<RXD>(RDS_O13_RXD_63, "RXD.63", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXR>(RDS_O13_RXR_65, "RXR.65", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXC>(RDS_O13_RXC_69, "RXC.69", HL7::optional, HL7::repetition_on);
    addObject<RDS_O13_OBSERVATION>(RDS_O13_OBSERVATION_72,
				   "RDS_O13.OBSERVATION", HL7::optional,
				   HL7::repetition_on);
    addObject<FT1>(RDS_O13_FT1_84, "FT1.84", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_30(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, RDS_O13_ORC_30);
  }
  RDS_O13_ORDER_DETAIL* getORDER_DETAIL(size_t index = 0) {
    return (RDS_O13_ORDER_DETAIL*)this->getObjectSafe(index,
						      RDS_O13_ORDER_DETAIL_31);
  }
  RDS_O13_ENCODING* getENCODING(size_t index = 0) {
    return (RDS_O13_ENCODING*)this->getObjectSafe(index, RDS_O13_ENCODING_52);
  }
  RXD* getRXD_63(size_t index = 0) {
    return (RXD*)this->getObjectSafe(index, RDS_O13_RXD_63);
  }
  RXR* getRXR_65(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RDS_O13_RXR_65);
  }
  RXC* getRXC_69(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RDS_O13_RXC_69);
  }
  RDS_O13_OBSERVATION* getOBSERVATION(size_t index = 0) {
    return (RDS_O13_OBSERVATION*)this->getObjectSafe(index,
						     RDS_O13_OBSERVATION_72);
  }
  FT1* getFT1_84(size_t index = 0) {
    return (FT1*)this->getObjectSafe(index, RDS_O13_FT1_84);
  }

  /* Checker list */
  bool isORC_30(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_ORC_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_DETAIL(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_ORDER_DETAIL_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isENCODING(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_ENCODING_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXD_63(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_RXD_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_65(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_RXR_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_69(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_RXC_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_OBSERVATION_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFT1_84(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_FT1_84) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RDS_O13_29 */

/* RDS_O13 */
struct RDS_O13 : public HL7Message {
  RDS_O13() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RDS_O13_MSH_1,
    RDS_O13_NTE_4,
    RDS_O13_PATIENT_7,
    RDS_O13_ORDER_29,
    FIELD_ID_MAX
  };

  const char* className() const { return "RDS_O13"; }
  RDS_O13* create() const { return new RDS_O13(); }

  /* Initialize object */
  void init() {
    setName("RDS_O13");
    addObject<MSH>(RDS_O13_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(RDS_O13_NTE_4, "NTE.4", HL7::optional, HL7::repetition_on);
    addObject<RDS_O13_PATIENT>(RDS_O13_PATIENT_7, "RDS_O13.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<RDS_O13_ORDER>(RDS_O13_ORDER_29, "RDS_O13.ORDER",
			     HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RDS_O13_MSH_1);
  }
  NTE* getNTE_4(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RDS_O13_NTE_4);
  }
  RDS_O13_PATIENT* getPATIENT(size_t index = 0) {
    return (RDS_O13_PATIENT*)this->getObjectSafe(index, RDS_O13_PATIENT_7);
  }
  RDS_O13_ORDER* getORDER(size_t index = 0) {
    return (RDS_O13_ORDER*)this->getObjectSafe(index, RDS_O13_ORDER_29);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_4(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_NTE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_PATIENT_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, RDS_O13_ORDER_29) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RDS_O13_ */
} /* namespace HL7_24 */
#endif /*  __RDS_O13__24_H__ */
