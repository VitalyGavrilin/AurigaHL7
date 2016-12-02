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


#ifndef __RAS_O17__24_H__
#define __RAS_O17__24_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/CTI.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/RXA.h"
#include "../segment/RXC.h"
#include "../segment/RXE.h"
#include "../segment/RXO.h"
#include "../segment/RXR.h"

namespace HL7_24 {

/* Internal structures/groups */
struct RAS_O17_PATIENT_VISIT;		/* PATIENT_VISIT */
struct RAS_O17_PATIENT;			/* PATIENT */
struct RAS_O17_COMPONENTS;		/* COMPONENTS */
struct RAS_O17_ORDER_DETAIL_SUPPLEMENT; /* ORDER_DETAIL_SUPPLEMENT */
struct RAS_O17_ORDER_DETAIL;		/* ORDER_DETAIL */
struct RAS_O17_ENCODING;		/* ENCODING */
struct RAS_O17_OBSERVATION;		/* OBSERVATION */
struct RAS_O17_ORDER;			/* ORDER */

/* PATIENT_VISIT */
struct RAS_O17_PATIENT_VISIT : public HL7Group {
  RAS_O17_PATIENT_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RAS_O17_PV1_23, RAS_O17_PV2_25, FIELD_ID_MAX };

  const char* className() const { return "RAS_O17_PATIENT_VISIT"; }
  RAS_O17_PATIENT_VISIT* create() const { return new RAS_O17_PATIENT_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("RAS_O17.PATIENT_VISIT");
    addObject<PV1>(RAS_O17_PV1_23, "PV1.23", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(RAS_O17_PV2_25, "PV2.25", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  PV1* getPV1_23(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RAS_O17_PV1_23);
  }
  PV2* getPV2_25(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RAS_O17_PV2_25);
  }

  /* Checker list */
  bool isPV1_23(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_PV1_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_25(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_PV2_25) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RAS_O17_22 */

/* PATIENT */
struct RAS_O17_PATIENT : public HL7Group {
  RAS_O17_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RAS_O17_PID_8,
    RAS_O17_PD1_10,
    RAS_O17_NTE_14,
    RAS_O17_AL1_19,
    RAS_O17_PATIENT_VISIT_22,
    FIELD_ID_MAX
  };

  const char* className() const { return "RAS_O17_PATIENT"; }
  RAS_O17_PATIENT* create() const { return new RAS_O17_PATIENT(); }

  /* Initialize object */
  void init() {
    setName("RAS_O17.PATIENT");
    addObject<PID>(RAS_O17_PID_8, "PID.8", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(RAS_O17_PD1_10, "PD1.10", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(RAS_O17_NTE_14, "NTE.14", HL7::optional, HL7::repetition_on);
    addObject<AL1>(RAS_O17_AL1_19, "AL1.19", HL7::optional, HL7::repetition_on);
    addObject<RAS_O17_PATIENT_VISIT>(RAS_O17_PATIENT_VISIT_22,
				     "RAS_O17.PATIENT_VISIT", HL7::optional,
				     HL7::repetition_off);
  }

  /* Getters list */
  PID* getPID_8(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RAS_O17_PID_8);
  }
  PD1* getPD1_10(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, RAS_O17_PD1_10);
  }
  NTE* getNTE_14(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RAS_O17_NTE_14);
  }
  AL1* getAL1_19(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, RAS_O17_AL1_19);
  }
  RAS_O17_PATIENT_VISIT* getPATIENT_VISIT(size_t index = 0) {
    return (RAS_O17_PATIENT_VISIT*)this->getObjectSafe(
	index, RAS_O17_PATIENT_VISIT_22);
  }

  /* Checker list */
  bool isPID_8(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_PID_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_10(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_PD1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_14(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_NTE_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_19(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_AL1_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT_VISIT(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_PATIENT_VISIT_22) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RAS_O17_7 */

/* COMPONENTS */
struct RAS_O17_COMPONENTS : public HL7Group {
  RAS_O17_COMPONENTS() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RAS_O17_RXC_42, RAS_O17_NTE_46, FIELD_ID_MAX };

  const char* className() const { return "RAS_O17_COMPONENTS"; }
  RAS_O17_COMPONENTS* create() const { return new RAS_O17_COMPONENTS(); }

  /* Initialize object */
  void init() {
    setName("RAS_O17.COMPONENTS");
    addObject<RXC>(RAS_O17_RXC_42, "RXC.42", HL7::initialized,
		   HL7::repetition_on);
    addObject<NTE>(RAS_O17_NTE_46, "NTE.46", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  RXC* getRXC_42(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RAS_O17_RXC_42);
  }
  NTE* getNTE_46(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RAS_O17_NTE_46);
  }

  /* Checker list */
  bool isRXC_42(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_RXC_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_46(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_NTE_46) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RAS_O17_40 */

/* ORDER_DETAIL_SUPPLEMENT */
struct RAS_O17_ORDER_DETAIL_SUPPLEMENT : public HL7Group {
  RAS_O17_ORDER_DETAIL_SUPPLEMENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RAS_O17_NTE_35,
    RAS_O17_RXR_38,
    RAS_O17_COMPONENTS_40,
    FIELD_ID_MAX
  };

  const char* className() const { return "RAS_O17_ORDER_DETAIL_SUPPLEMENT"; }
  RAS_O17_ORDER_DETAIL_SUPPLEMENT* create() const {
    return new RAS_O17_ORDER_DETAIL_SUPPLEMENT();
  }

  /* Initialize object */
  void init() {
    setName("RAS_O17.ORDER_DETAIL_SUPPLEMENT");
    addObject<NTE>(RAS_O17_NTE_35, "NTE.35", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXR>(RAS_O17_RXR_38, "RXR.38", HL7::initialized,
		   HL7::repetition_on);
    addObject<RAS_O17_COMPONENTS>(RAS_O17_COMPONENTS_40, "RAS_O17.COMPONENTS",
				  HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  NTE* getNTE_35(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RAS_O17_NTE_35);
  }
  RXR* getRXR_38(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RAS_O17_RXR_38);
  }
  RAS_O17_COMPONENTS* getCOMPONENTS(size_t index = 0) {
    return (RAS_O17_COMPONENTS*)this->getObjectSafe(index,
						    RAS_O17_COMPONENTS_40);
  }

  /* Checker list */
  bool isNTE_35(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_NTE_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_38(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_RXR_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCOMPONENTS(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_COMPONENTS_40) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RAS_O17_33 */

/* ORDER_DETAIL */
struct RAS_O17_ORDER_DETAIL : public HL7Group {
  RAS_O17_ORDER_DETAIL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RAS_O17_RXO_32,
    RAS_O17_ORDER_DETAIL_SUPPLEMENT_33,
    FIELD_ID_MAX
  };

  const char* className() const { return "RAS_O17_ORDER_DETAIL"; }
  RAS_O17_ORDER_DETAIL* create() const { return new RAS_O17_ORDER_DETAIL(); }

  /* Initialize object */
  void init() {
    setName("RAS_O17.ORDER_DETAIL");
    addObject<RXO>(RAS_O17_RXO_32, "RXO.32", HL7::initialized,
		   HL7::repetition_off);
    addObject<RAS_O17_ORDER_DETAIL_SUPPLEMENT>(
	RAS_O17_ORDER_DETAIL_SUPPLEMENT_33, "RAS_O17.ORDER_DETAIL_SUPPLEMENT",
	HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  RXO* getRXO_32(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, RAS_O17_RXO_32);
  }
  RAS_O17_ORDER_DETAIL_SUPPLEMENT* getORDER_DETAIL_SUPPLEMENT(
      size_t index = 0) {
    return (RAS_O17_ORDER_DETAIL_SUPPLEMENT*)this->getObjectSafe(
	index, RAS_O17_ORDER_DETAIL_SUPPLEMENT_33);
  }

  /* Checker list */
  bool isRXO_32(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_RXO_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_DETAIL_SUPPLEMENT(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_ORDER_DETAIL_SUPPLEMENT_33) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RAS_O17_31 */

/* ENCODING */
struct RAS_O17_ENCODING : public HL7Group {
  RAS_O17_ENCODING() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RAS_O17_RXE_53,
    RAS_O17_RXR_55,
    RAS_O17_RXC_59,
    FIELD_ID_MAX
  };

  const char* className() const { return "RAS_O17_ENCODING"; }
  RAS_O17_ENCODING* create() const { return new RAS_O17_ENCODING(); }

  /* Initialize object */
  void init() {
    setName("RAS_O17.ENCODING");
    addObject<RXE>(RAS_O17_RXE_53, "RXE.53", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXR>(RAS_O17_RXR_55, "RXR.55", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXC>(RAS_O17_RXC_59, "RXC.59", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  RXE* getRXE_53(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, RAS_O17_RXE_53);
  }
  RXR* getRXR_55(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RAS_O17_RXR_55);
  }
  RXC* getRXC_59(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RAS_O17_RXC_59);
  }

  /* Checker list */
  bool isRXE_53(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_RXE_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_55(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_RXR_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_59(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_RXC_59) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RAS_O17_52 */

/* OBSERVATION */
struct RAS_O17_OBSERVATION : public HL7Group {
  RAS_O17_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RAS_O17_OBX_69, RAS_O17_NTE_72, FIELD_ID_MAX };

  const char* className() const { return "RAS_O17_OBSERVATION"; }
  RAS_O17_OBSERVATION* create() const { return new RAS_O17_OBSERVATION(); }

  /* Initialize object */
  void init() {
    setName("RAS_O17.OBSERVATION");
    addObject<OBX>(RAS_O17_OBX_69, "OBX.69", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(RAS_O17_NTE_72, "NTE.72", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_69(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RAS_O17_OBX_69);
  }
  NTE* getNTE_72(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RAS_O17_NTE_72);
  }

  /* Checker list */
  bool isOBX_69(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_OBX_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_72(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_NTE_72) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RAS_O17_67 */

/* ORDER */
struct RAS_O17_ORDER : public HL7Group {
  RAS_O17_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RAS_O17_ORC_30,
    RAS_O17_ORDER_DETAIL_31,
    RAS_O17_ENCODING_52,
    RAS_O17_RXA_64,
    RAS_O17_RXR_66,
    RAS_O17_OBSERVATION_67,
    RAS_O17_CTI_79,
    FIELD_ID_MAX
  };

  const char* className() const { return "RAS_O17_ORDER"; }
  RAS_O17_ORDER* create() const { return new RAS_O17_ORDER(); }

  /* Initialize object */
  void init() {
    setName("RAS_O17.ORDER");
    addObject<ORC>(RAS_O17_ORC_30, "ORC.30", HL7::initialized,
		   HL7::repetition_off);
    addObject<RAS_O17_ORDER_DETAIL>(RAS_O17_ORDER_DETAIL_31,
				    "RAS_O17.ORDER_DETAIL", HL7::optional,
				    HL7::repetition_off);
    addObject<RAS_O17_ENCODING>(RAS_O17_ENCODING_52, "RAS_O17.ENCODING",
				HL7::optional, HL7::repetition_off);
    addObject<RXA>(RAS_O17_RXA_64, "RXA.64", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXR>(RAS_O17_RXR_66, "RXR.66", HL7::initialized,
		   HL7::repetition_off);
    addObject<RAS_O17_OBSERVATION>(RAS_O17_OBSERVATION_67,
				   "RAS_O17.OBSERVATION", HL7::optional,
				   HL7::repetition_on);
    addObject<CTI>(RAS_O17_CTI_79, "CTI.79", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_30(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, RAS_O17_ORC_30);
  }
  RAS_O17_ORDER_DETAIL* getORDER_DETAIL(size_t index = 0) {
    return (RAS_O17_ORDER_DETAIL*)this->getObjectSafe(index,
						      RAS_O17_ORDER_DETAIL_31);
  }
  RAS_O17_ENCODING* getENCODING(size_t index = 0) {
    return (RAS_O17_ENCODING*)this->getObjectSafe(index, RAS_O17_ENCODING_52);
  }
  RXA* getRXA_64(size_t index = 0) {
    return (RXA*)this->getObjectSafe(index, RAS_O17_RXA_64);
  }
  RXR* getRXR_66(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RAS_O17_RXR_66);
  }
  RAS_O17_OBSERVATION* getOBSERVATION(size_t index = 0) {
    return (RAS_O17_OBSERVATION*)this->getObjectSafe(index,
						     RAS_O17_OBSERVATION_67);
  }
  CTI* getCTI_79(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, RAS_O17_CTI_79);
  }

  /* Checker list */
  bool isORC_30(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_ORC_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_DETAIL(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_ORDER_DETAIL_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isENCODING(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_ENCODING_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXA_64(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_RXA_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_66(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_RXR_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_OBSERVATION_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_79(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_CTI_79) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RAS_O17_29 */

/* RAS_O17 */
struct RAS_O17 : public HL7Message {
  RAS_O17() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RAS_O17_MSH_1,
    RAS_O17_NTE_4,
    RAS_O17_PATIENT_7,
    RAS_O17_ORDER_29,
    FIELD_ID_MAX
  };

  const char* className() const { return "RAS_O17"; }
  RAS_O17* create() const { return new RAS_O17(); }

  /* Initialize object */
  void init() {
    setName("RAS_O17");
    addObject<MSH>(RAS_O17_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(RAS_O17_NTE_4, "NTE.4", HL7::optional, HL7::repetition_on);
    addObject<RAS_O17_PATIENT>(RAS_O17_PATIENT_7, "RAS_O17.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<RAS_O17_ORDER>(RAS_O17_ORDER_29, "RAS_O17.ORDER",
			     HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RAS_O17_MSH_1);
  }
  NTE* getNTE_4(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RAS_O17_NTE_4);
  }
  RAS_O17_PATIENT* getPATIENT(size_t index = 0) {
    return (RAS_O17_PATIENT*)this->getObjectSafe(index, RAS_O17_PATIENT_7);
  }
  RAS_O17_ORDER* getORDER(size_t index = 0) {
    return (RAS_O17_ORDER*)this->getObjectSafe(index, RAS_O17_ORDER_29);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_4(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_NTE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_PATIENT_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, RAS_O17_ORDER_29) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RAS_O17_ */
} /* namespace HL7_24 */
#endif /*  __RAS_O17__24_H__ */
