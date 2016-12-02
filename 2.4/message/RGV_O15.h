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


#ifndef __RGV_O15__24_H__
#define __RGV_O15__24_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/RXC.h"
#include "../segment/RXE.h"
#include "../segment/RXG.h"
#include "../segment/RXO.h"
#include "../segment/RXR.h"

namespace HL7_24 {

/* Internal structures/groups */
struct RGV_O15_PATIENT_VISIT;		/* PATIENT_VISIT */
struct RGV_O15_PATIENT;			/* PATIENT */
struct RGV_O15_COMPONENTS;		/* COMPONENTS */
struct RGV_O15_ORDER_DETAIL_SUPPLEMENT; /* ORDER_DETAIL_SUPPLEMENT */
struct RGV_O15_ORDER_DETAIL;		/* ORDER_DETAIL */
struct RGV_O15_ENCODING;		/* ENCODING */
struct RGV_O15_OBSERVATION;		/* OBSERVATION */
struct RGV_O15_GIVE;			/* GIVE */
struct RGV_O15_ORDER;			/* ORDER */

/* PATIENT_VISIT */
struct RGV_O15_PATIENT_VISIT : public HL7Group {
  RGV_O15_PATIENT_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RGV_O15_PV1_20, RGV_O15_PV2_22, FIELD_ID_MAX };

  const char* className() const { return "RGV_O15_PATIENT_VISIT"; }
  RGV_O15_PATIENT_VISIT* create() const { return new RGV_O15_PATIENT_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("RGV_O15.PATIENT_VISIT");
    addObject<PV1>(RGV_O15_PV1_20, "PV1.20", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(RGV_O15_PV2_22, "PV2.22", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  PV1* getPV1_20(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RGV_O15_PV1_20);
  }
  PV2* getPV2_22(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RGV_O15_PV2_22);
  }

  /* Checker list */
  bool isPV1_20(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_PV1_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_22(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_PV2_22) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RGV_O15_19 */

/* PATIENT */
struct RGV_O15_PATIENT : public HL7Group {
  RGV_O15_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RGV_O15_PID_8,
    RGV_O15_NTE_11,
    RGV_O15_AL1_16,
    RGV_O15_PATIENT_VISIT_19,
    FIELD_ID_MAX
  };

  const char* className() const { return "RGV_O15_PATIENT"; }
  RGV_O15_PATIENT* create() const { return new RGV_O15_PATIENT(); }

  /* Initialize object */
  void init() {
    setName("RGV_O15.PATIENT");
    addObject<PID>(RGV_O15_PID_8, "PID.8", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(RGV_O15_NTE_11, "NTE.11", HL7::optional, HL7::repetition_on);
    addObject<AL1>(RGV_O15_AL1_16, "AL1.16", HL7::optional, HL7::repetition_on);
    addObject<RGV_O15_PATIENT_VISIT>(RGV_O15_PATIENT_VISIT_19,
				     "RGV_O15.PATIENT_VISIT", HL7::optional,
				     HL7::repetition_off);
  }

  /* Getters list */
  PID* getPID_8(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RGV_O15_PID_8);
  }
  NTE* getNTE_11(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RGV_O15_NTE_11);
  }
  AL1* getAL1_16(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, RGV_O15_AL1_16);
  }
  RGV_O15_PATIENT_VISIT* getPATIENT_VISIT(size_t index = 0) {
    return (RGV_O15_PATIENT_VISIT*)this->getObjectSafe(
	index, RGV_O15_PATIENT_VISIT_19);
  }

  /* Checker list */
  bool isPID_8(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_PID_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_11(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_NTE_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_16(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_AL1_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT_VISIT(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_PATIENT_VISIT_19) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RGV_O15_7 */

/* COMPONENTS */
struct RGV_O15_COMPONENTS : public HL7Group {
  RGV_O15_COMPONENTS() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RGV_O15_RXC_39, RGV_O15_NTE_43, FIELD_ID_MAX };

  const char* className() const { return "RGV_O15_COMPONENTS"; }
  RGV_O15_COMPONENTS* create() const { return new RGV_O15_COMPONENTS(); }

  /* Initialize object */
  void init() {
    setName("RGV_O15.COMPONENTS");
    addObject<RXC>(RGV_O15_RXC_39, "RXC.39", HL7::initialized,
		   HL7::repetition_on);
    addObject<NTE>(RGV_O15_NTE_43, "NTE.43", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  RXC* getRXC_39(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RGV_O15_RXC_39);
  }
  NTE* getNTE_43(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RGV_O15_NTE_43);
  }

  /* Checker list */
  bool isRXC_39(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_RXC_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_43(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_NTE_43) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RGV_O15_37 */

/* ORDER_DETAIL_SUPPLEMENT */
struct RGV_O15_ORDER_DETAIL_SUPPLEMENT : public HL7Group {
  RGV_O15_ORDER_DETAIL_SUPPLEMENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RGV_O15_NTE_32,
    RGV_O15_RXR_35,
    RGV_O15_COMPONENTS_37,
    FIELD_ID_MAX
  };

  const char* className() const { return "RGV_O15_ORDER_DETAIL_SUPPLEMENT"; }
  RGV_O15_ORDER_DETAIL_SUPPLEMENT* create() const {
    return new RGV_O15_ORDER_DETAIL_SUPPLEMENT();
  }

  /* Initialize object */
  void init() {
    setName("RGV_O15.ORDER_DETAIL_SUPPLEMENT");
    addObject<NTE>(RGV_O15_NTE_32, "NTE.32", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXR>(RGV_O15_RXR_35, "RXR.35", HL7::initialized,
		   HL7::repetition_on);
    addObject<RGV_O15_COMPONENTS>(RGV_O15_COMPONENTS_37, "RGV_O15.COMPONENTS",
				  HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  NTE* getNTE_32(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RGV_O15_NTE_32);
  }
  RXR* getRXR_35(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RGV_O15_RXR_35);
  }
  RGV_O15_COMPONENTS* getCOMPONENTS(size_t index = 0) {
    return (RGV_O15_COMPONENTS*)this->getObjectSafe(index,
						    RGV_O15_COMPONENTS_37);
  }

  /* Checker list */
  bool isNTE_32(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_NTE_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_35(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_RXR_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCOMPONENTS(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_COMPONENTS_37) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RGV_O15_30 */

/* ORDER_DETAIL */
struct RGV_O15_ORDER_DETAIL : public HL7Group {
  RGV_O15_ORDER_DETAIL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RGV_O15_RXO_29,
    RGV_O15_ORDER_DETAIL_SUPPLEMENT_30,
    FIELD_ID_MAX
  };

  const char* className() const { return "RGV_O15_ORDER_DETAIL"; }
  RGV_O15_ORDER_DETAIL* create() const { return new RGV_O15_ORDER_DETAIL(); }

  /* Initialize object */
  void init() {
    setName("RGV_O15.ORDER_DETAIL");
    addObject<RXO>(RGV_O15_RXO_29, "RXO.29", HL7::initialized,
		   HL7::repetition_off);
    addObject<RGV_O15_ORDER_DETAIL_SUPPLEMENT>(
	RGV_O15_ORDER_DETAIL_SUPPLEMENT_30, "RGV_O15.ORDER_DETAIL_SUPPLEMENT",
	HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  RXO* getRXO_29(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, RGV_O15_RXO_29);
  }
  RGV_O15_ORDER_DETAIL_SUPPLEMENT* getORDER_DETAIL_SUPPLEMENT(
      size_t index = 0) {
    return (RGV_O15_ORDER_DETAIL_SUPPLEMENT*)this->getObjectSafe(
	index, RGV_O15_ORDER_DETAIL_SUPPLEMENT_30);
  }

  /* Checker list */
  bool isRXO_29(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_RXO_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_DETAIL_SUPPLEMENT(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_ORDER_DETAIL_SUPPLEMENT_30) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RGV_O15_28 */

/* ENCODING */
struct RGV_O15_ENCODING : public HL7Group {
  RGV_O15_ENCODING() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RGV_O15_RXE_50,
    RGV_O15_RXR_52,
    RGV_O15_RXC_56,
    FIELD_ID_MAX
  };

  const char* className() const { return "RGV_O15_ENCODING"; }
  RGV_O15_ENCODING* create() const { return new RGV_O15_ENCODING(); }

  /* Initialize object */
  void init() {
    setName("RGV_O15.ENCODING");
    addObject<RXE>(RGV_O15_RXE_50, "RXE.50", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXR>(RGV_O15_RXR_52, "RXR.52", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXC>(RGV_O15_RXC_56, "RXC.56", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  RXE* getRXE_50(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, RGV_O15_RXE_50);
  }
  RXR* getRXR_52(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RGV_O15_RXR_52);
  }
  RXC* getRXC_56(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RGV_O15_RXC_56);
  }

  /* Checker list */
  bool isRXE_50(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_RXE_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_52(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_RXR_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_56(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_RXC_56) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RGV_O15_49 */

/* OBSERVATION */
struct RGV_O15_OBSERVATION : public HL7Group {
  RGV_O15_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RGV_O15_OBX_72, RGV_O15_NTE_76, FIELD_ID_MAX };

  const char* className() const { return "RGV_O15_OBSERVATION"; }
  RGV_O15_OBSERVATION* create() const { return new RGV_O15_OBSERVATION(); }

  /* Initialize object */
  void init() {
    setName("RGV_O15.OBSERVATION");
    addObject<OBX>(RGV_O15_OBX_72, "OBX.72", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(RGV_O15_NTE_76, "NTE.76", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_72(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RGV_O15_OBX_72);
  }
  NTE* getNTE_76(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RGV_O15_NTE_76);
  }

  /* Checker list */
  bool isOBX_72(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_OBX_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_76(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_NTE_76) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RGV_O15_70 */

/* GIVE */
struct RGV_O15_GIVE : public HL7Group {
  RGV_O15_GIVE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RGV_O15_RXG_61,
    RGV_O15_RXR_63,
    RGV_O15_RXC_67,
    RGV_O15_OBSERVATION_70,
    FIELD_ID_MAX
  };

  const char* className() const { return "RGV_O15_GIVE"; }
  RGV_O15_GIVE* create() const { return new RGV_O15_GIVE(); }

  /* Initialize object */
  void init() {
    setName("RGV_O15.GIVE");
    addObject<RXG>(RGV_O15_RXG_61, "RXG.61", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXR>(RGV_O15_RXR_63, "RXR.63", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXC>(RGV_O15_RXC_67, "RXC.67", HL7::optional, HL7::repetition_on);
    addObject<RGV_O15_OBSERVATION>(RGV_O15_OBSERVATION_70,
				   "RGV_O15.OBSERVATION", HL7::initialized,
				   HL7::repetition_on);
  }

  /* Getters list */
  RXG* getRXG_61(size_t index = 0) {
    return (RXG*)this->getObjectSafe(index, RGV_O15_RXG_61);
  }
  RXR* getRXR_63(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RGV_O15_RXR_63);
  }
  RXC* getRXC_67(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RGV_O15_RXC_67);
  }
  RGV_O15_OBSERVATION* getOBSERVATION(size_t index = 0) {
    return (RGV_O15_OBSERVATION*)this->getObjectSafe(index,
						     RGV_O15_OBSERVATION_70);
  }

  /* Checker list */
  bool isRXG_61(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_RXG_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_63(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_RXR_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_67(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_RXC_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_OBSERVATION_70) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RGV_O15_60 */

/* ORDER */
struct RGV_O15_ORDER : public HL7Group {
  RGV_O15_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RGV_O15_ORC_27,
    RGV_O15_ORDER_DETAIL_28,
    RGV_O15_ENCODING_49,
    RGV_O15_GIVE_60,
    FIELD_ID_MAX
  };

  const char* className() const { return "RGV_O15_ORDER"; }
  RGV_O15_ORDER* create() const { return new RGV_O15_ORDER(); }

  /* Initialize object */
  void init() {
    setName("RGV_O15.ORDER");
    addObject<ORC>(RGV_O15_ORC_27, "ORC.27", HL7::initialized,
		   HL7::repetition_off);
    addObject<RGV_O15_ORDER_DETAIL>(RGV_O15_ORDER_DETAIL_28,
				    "RGV_O15.ORDER_DETAIL", HL7::optional,
				    HL7::repetition_off);
    addObject<RGV_O15_ENCODING>(RGV_O15_ENCODING_49, "RGV_O15.ENCODING",
				HL7::optional, HL7::repetition_off);
    addObject<RGV_O15_GIVE>(RGV_O15_GIVE_60, "RGV_O15.GIVE", HL7::initialized,
			    HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_27(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, RGV_O15_ORC_27);
  }
  RGV_O15_ORDER_DETAIL* getORDER_DETAIL(size_t index = 0) {
    return (RGV_O15_ORDER_DETAIL*)this->getObjectSafe(index,
						      RGV_O15_ORDER_DETAIL_28);
  }
  RGV_O15_ENCODING* getENCODING(size_t index = 0) {
    return (RGV_O15_ENCODING*)this->getObjectSafe(index, RGV_O15_ENCODING_49);
  }
  RGV_O15_GIVE* getGIVE(size_t index = 0) {
    return (RGV_O15_GIVE*)this->getObjectSafe(index, RGV_O15_GIVE_60);
  }

  /* Checker list */
  bool isORC_27(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_ORC_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_DETAIL(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_ORDER_DETAIL_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isENCODING(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_ENCODING_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGIVE(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_GIVE_60) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RGV_O15_26 */

/* RGV_O15 */
struct RGV_O15 : public HL7Message {
  RGV_O15() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RGV_O15_MSH_1,
    RGV_O15_NTE_4,
    RGV_O15_PATIENT_7,
    RGV_O15_ORDER_26,
    FIELD_ID_MAX
  };

  const char* className() const { return "RGV_O15"; }
  RGV_O15* create() const { return new RGV_O15(); }

  /* Initialize object */
  void init() {
    setName("RGV_O15");
    addObject<MSH>(RGV_O15_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(RGV_O15_NTE_4, "NTE.4", HL7::optional, HL7::repetition_on);
    addObject<RGV_O15_PATIENT>(RGV_O15_PATIENT_7, "RGV_O15.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<RGV_O15_ORDER>(RGV_O15_ORDER_26, "RGV_O15.ORDER",
			     HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RGV_O15_MSH_1);
  }
  NTE* getNTE_4(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RGV_O15_NTE_4);
  }
  RGV_O15_PATIENT* getPATIENT(size_t index = 0) {
    return (RGV_O15_PATIENT*)this->getObjectSafe(index, RGV_O15_PATIENT_7);
  }
  RGV_O15_ORDER* getORDER(size_t index = 0) {
    return (RGV_O15_ORDER*)this->getObjectSafe(index, RGV_O15_ORDER_26);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_4(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_NTE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_PATIENT_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, RGV_O15_ORDER_26) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RGV_O15_ */
} /* namespace HL7_24 */
#endif /*  __RGV_O15__24_H__ */
