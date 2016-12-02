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


#ifndef __RSP_Z86__24_H__
#define __RSP_Z86__24_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/DSC.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/QAK.h"
#include "../segment/QPD.h"
#include "../segment/RXA.h"
#include "../segment/RXC.h"
#include "../segment/RXD.h"
#include "../segment/RXE.h"
#include "../segment/RXG.h"
#include "../segment/RXO.h"
#include "../segment/RXR.h"

namespace HL7_24 {

/* Internal structures/groups */
struct RSP_Z86_ORDER_DETAIL;   /* ORDER_DETAIL */
struct RSP_Z86_ENCODED_ORDER;  /* ENCODED_ORDER */
struct RSP_Z86_DISPENSE;       /* DISPENSE */
struct RSP_Z86_GIVE;	   /* GIVE */
struct RSP_Z86_ADMINISTRATION; /* ADMINISTRATION */
struct RSP_Z86_OBSERVATION;    /* OBSERVATION */
struct RSP_Z86_COMMON_ORDER;   /* COMMON_ORDER */
struct RSP_Z86_PATIENT;	/* PATIENT */
struct RSP_Z86_QUERY_RESPONSE; /* QUERY_RESPONSE */

/* ORDER_DETAIL */
struct RSP_Z86_ORDER_DETAIL : public HL7Group {
  RSP_Z86_ORDER_DETAIL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z86_RXO_27,
    RSP_Z86_RXR_29,
    RSP_Z86_RXC_33,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z86_ORDER_DETAIL"; }
  RSP_Z86_ORDER_DETAIL* create() const { return new RSP_Z86_ORDER_DETAIL(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_Z86.ORDER_DETAIL");
    addObject<RXO>(RSP_Z86_RXO_27, "RXO.27", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXR>(RSP_Z86_RXR_29, "RXR.29", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXC>(RSP_Z86_RXC_33, "RXC.33", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  RXO* getRXO_27(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, RSP_Z86_RXO_27);
  }
  RXR* getRXR_29(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RSP_Z86_RXR_29);
  }
  RXC* getRXC_33(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z86_RXC_33);
  }

  /* Checker list */
  bool isRXO_27(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RXO_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_29(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RXR_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_33(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RXC_33) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z86_26 */

/* ENCODED_ORDER */
struct RSP_Z86_ENCODED_ORDER : public HL7Group {
  RSP_Z86_ENCODED_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z86_RXE_38,
    RSP_Z86_RXR_40,
    RSP_Z86_RXC_44,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z86_ENCODED_ORDER"; }
  RSP_Z86_ENCODED_ORDER* create() const { return new RSP_Z86_ENCODED_ORDER(); }

  /* Initialize object */
  void init() {
    setName("RSP_Z86.ENCODED_ORDER");
    addObject<RXE>(RSP_Z86_RXE_38, "RXE.38", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXR>(RSP_Z86_RXR_40, "RXR.40", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXC>(RSP_Z86_RXC_44, "RXC.44", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  RXE* getRXE_38(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, RSP_Z86_RXE_38);
  }
  RXR* getRXR_40(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RSP_Z86_RXR_40);
  }
  RXC* getRXC_44(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z86_RXC_44);
  }

  /* Checker list */
  bool isRXE_38(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RXE_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_40(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RXR_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_44(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RXC_44) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z86_37 */

/* DISPENSE */
struct RSP_Z86_DISPENSE : public HL7Group {
  RSP_Z86_DISPENSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z86_RXD_49,
    RSP_Z86_RXR_51,
    RSP_Z86_RXC_55,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z86_DISPENSE"; }
  RSP_Z86_DISPENSE* create() const { return new RSP_Z86_DISPENSE(); }

  /* Initialize object */
  void init() {
    setName("RSP_Z86.DISPENSE");
    addObject<RXD>(RSP_Z86_RXD_49, "RXD.49", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXR>(RSP_Z86_RXR_51, "RXR.51", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXC>(RSP_Z86_RXC_55, "RXC.55", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  RXD* getRXD_49(size_t index = 0) {
    return (RXD*)this->getObjectSafe(index, RSP_Z86_RXD_49);
  }
  RXR* getRXR_51(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RSP_Z86_RXR_51);
  }
  RXC* getRXC_55(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z86_RXC_55);
  }

  /* Checker list */
  bool isRXD_49(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RXD_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_51(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RXR_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_55(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RXC_55) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z86_48 */

/* GIVE */
struct RSP_Z86_GIVE : public HL7Group {
  RSP_Z86_GIVE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z86_RXG_60,
    RSP_Z86_RXR_62,
    RSP_Z86_RXC_66,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z86_GIVE"; }
  RSP_Z86_GIVE* create() const { return new RSP_Z86_GIVE(); }

  /* Initialize object */
  void init() {
    setName("RSP_Z86.GIVE");
    addObject<RXG>(RSP_Z86_RXG_60, "RXG.60", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXR>(RSP_Z86_RXR_62, "RXR.62", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXC>(RSP_Z86_RXC_66, "RXC.66", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  RXG* getRXG_60(size_t index = 0) {
    return (RXG*)this->getObjectSafe(index, RSP_Z86_RXG_60);
  }
  RXR* getRXR_62(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RSP_Z86_RXR_62);
  }
  RXC* getRXC_66(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z86_RXC_66);
  }

  /* Checker list */
  bool isRXG_60(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RXG_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_62(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RXR_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_66(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RXC_66) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z86_59 */

/* ADMINISTRATION */
struct RSP_Z86_ADMINISTRATION : public HL7Group {
  RSP_Z86_ADMINISTRATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z86_RXA_71,
    RSP_Z86_RXR_73,
    RSP_Z86_RXC_77,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z86_ADMINISTRATION"; }
  RSP_Z86_ADMINISTRATION* create() const {
    return new RSP_Z86_ADMINISTRATION();
  }

  /* Initialize object */
  void init() {
    setName("RSP_Z86.ADMINISTRATION");
    addObject<RXA>(RSP_Z86_RXA_71, "RXA.71", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXR>(RSP_Z86_RXR_73, "RXR.73", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXC>(RSP_Z86_RXC_77, "RXC.77", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  RXA* getRXA_71(size_t index = 0) {
    return (RXA*)this->getObjectSafe(index, RSP_Z86_RXA_71);
  }
  RXR* getRXR_73(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RSP_Z86_RXR_73);
  }
  RXC* getRXC_77(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z86_RXC_77);
  }

  /* Checker list */
  bool isRXA_71(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RXA_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_73(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RXR_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_77(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RXC_77) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z86_70 */

/* OBSERVATION */
struct RSP_Z86_OBSERVATION : public HL7Group {
  RSP_Z86_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RSP_Z86_OBX_83, RSP_Z86_NTE_87, FIELD_ID_MAX };

  const char* className() const { return "RSP_Z86_OBSERVATION"; }
  RSP_Z86_OBSERVATION* create() const { return new RSP_Z86_OBSERVATION(); }

  /* Initialize object */
  void init() {
    setName("RSP_Z86.OBSERVATION");
    addObject<OBX>(RSP_Z86_OBX_83, "OBX.83", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(RSP_Z86_NTE_87, "NTE.87", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_83(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RSP_Z86_OBX_83);
  }
  NTE* getNTE_87(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z86_NTE_87);
  }

  /* Checker list */
  bool isOBX_83(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_OBX_83) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_87(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_NTE_87) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z86_81 */

/* COMMON_ORDER */
struct RSP_Z86_COMMON_ORDER : public HL7Group {
  RSP_Z86_COMMON_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z86_ORC_25,
    RSP_Z86_ORDER_DETAIL_26,
    RSP_Z86_ENCODED_ORDER_37,
    RSP_Z86_DISPENSE_48,
    RSP_Z86_GIVE_59,
    RSP_Z86_ADMINISTRATION_70,
    RSP_Z86_OBSERVATION_81,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z86_COMMON_ORDER"; }
  RSP_Z86_COMMON_ORDER* create() const { return new RSP_Z86_COMMON_ORDER(); }

  /* Initialize object */
  void init() {
    setName("RSP_Z86.COMMON_ORDER");
    addObject<ORC>(RSP_Z86_ORC_25, "ORC.25", HL7::initialized,
		   HL7::repetition_off);
    addObject<RSP_Z86_ORDER_DETAIL>(RSP_Z86_ORDER_DETAIL_26,
				    "RSP_Z86.ORDER_DETAIL", HL7::optional,
				    HL7::repetition_off);
    addObject<RSP_Z86_ENCODED_ORDER>(RSP_Z86_ENCODED_ORDER_37,
				     "RSP_Z86.ENCODED_ORDER", HL7::optional,
				     HL7::repetition_off);
    addObject<RSP_Z86_DISPENSE>(RSP_Z86_DISPENSE_48, "RSP_Z86.DISPENSE",
				HL7::optional, HL7::repetition_off);
    addObject<RSP_Z86_GIVE>(RSP_Z86_GIVE_59, "RSP_Z86.GIVE", HL7::optional,
			    HL7::repetition_off);
    addObject<RSP_Z86_ADMINISTRATION>(RSP_Z86_ADMINISTRATION_70,
				      "RSP_Z86.ADMINISTRATION", HL7::optional,
				      HL7::repetition_off);
    addObject<RSP_Z86_OBSERVATION>(RSP_Z86_OBSERVATION_81,
				   "RSP_Z86.OBSERVATION", HL7::initialized,
				   HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_25(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, RSP_Z86_ORC_25);
  }
  RSP_Z86_ORDER_DETAIL* getORDER_DETAIL(size_t index = 0) {
    return (RSP_Z86_ORDER_DETAIL*)this->getObjectSafe(index,
						      RSP_Z86_ORDER_DETAIL_26);
  }
  RSP_Z86_ENCODED_ORDER* getENCODED_ORDER(size_t index = 0) {
    return (RSP_Z86_ENCODED_ORDER*)this->getObjectSafe(
	index, RSP_Z86_ENCODED_ORDER_37);
  }
  RSP_Z86_DISPENSE* getDISPENSE(size_t index = 0) {
    return (RSP_Z86_DISPENSE*)this->getObjectSafe(index, RSP_Z86_DISPENSE_48);
  }
  RSP_Z86_GIVE* getGIVE(size_t index = 0) {
    return (RSP_Z86_GIVE*)this->getObjectSafe(index, RSP_Z86_GIVE_59);
  }
  RSP_Z86_ADMINISTRATION* getADMINISTRATION(size_t index = 0) {
    return (RSP_Z86_ADMINISTRATION*)this->getObjectSafe(
	index, RSP_Z86_ADMINISTRATION_70);
  }
  RSP_Z86_OBSERVATION* getOBSERVATION(size_t index = 0) {
    return (RSP_Z86_OBSERVATION*)this->getObjectSafe(index,
						     RSP_Z86_OBSERVATION_81);
  }

  /* Checker list */
  bool isORC_25(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_ORC_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_DETAIL(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_ORDER_DETAIL_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isENCODED_ORDER(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_ENCODED_ORDER_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDISPENSE(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_DISPENSE_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGIVE(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_GIVE_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isADMINISTRATION(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_ADMINISTRATION_70) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_OBSERVATION_81) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z86_24 */

/* PATIENT */
struct RSP_Z86_PATIENT : public HL7Group {
  RSP_Z86_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z86_PID_10,
    RSP_Z86_PD1_12,
    RSP_Z86_NTE_16,
    RSP_Z86_AL1_21,
    RSP_Z86_COMMON_ORDER_24,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z86_PATIENT"; }
  RSP_Z86_PATIENT* create() const { return new RSP_Z86_PATIENT(); }

  /* Initialize object */
  void init() {
    setName("RSP_Z86.PATIENT");
    addObject<PID>(RSP_Z86_PID_10, "PID.10", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(RSP_Z86_PD1_12, "PD1.12", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(RSP_Z86_NTE_16, "NTE.16", HL7::optional, HL7::repetition_on);
    addObject<AL1>(RSP_Z86_AL1_21, "AL1.21", HL7::optional, HL7::repetition_on);
    addObject<RSP_Z86_COMMON_ORDER>(RSP_Z86_COMMON_ORDER_24,
				    "RSP_Z86.COMMON_ORDER", HL7::initialized,
				    HL7::repetition_on);
  }

  /* Getters list */
  PID* getPID_10(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RSP_Z86_PID_10);
  }
  PD1* getPD1_12(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, RSP_Z86_PD1_12);
  }
  NTE* getNTE_16(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z86_NTE_16);
  }
  AL1* getAL1_21(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, RSP_Z86_AL1_21);
  }
  RSP_Z86_COMMON_ORDER* getCOMMON_ORDER(size_t index = 0) {
    return (RSP_Z86_COMMON_ORDER*)this->getObjectSafe(index,
						      RSP_Z86_COMMON_ORDER_24);
  }

  /* Checker list */
  bool isPID_10(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_PID_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_12(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_PD1_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_16(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_NTE_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_21(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_AL1_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCOMMON_ORDER(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_COMMON_ORDER_24) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z86_9 */

/* QUERY_RESPONSE */
struct RSP_Z86_QUERY_RESPONSE : public HL7Group {
  RSP_Z86_QUERY_RESPONSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RSP_Z86_PATIENT_9, FIELD_ID_MAX };

  const char* className() const { return "RSP_Z86_QUERY_RESPONSE"; }
  RSP_Z86_QUERY_RESPONSE* create() const {
    return new RSP_Z86_QUERY_RESPONSE();
  }

  /* Initialize object */
  void init() {
    setName("RSP_Z86.QUERY_RESPONSE");
    addObject<RSP_Z86_PATIENT>(RSP_Z86_PATIENT_9, "RSP_Z86.PATIENT",
			       HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  RSP_Z86_PATIENT* getPATIENT(size_t index = 0) {
    return (RSP_Z86_PATIENT*)this->getObjectSafe(index, RSP_Z86_PATIENT_9);
  }

  /* Checker list */
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_PATIENT_9) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z86_8 */

/* RSP_Z86 */
struct RSP_Z86 : public HL7Message {
  RSP_Z86() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z86_MSH_1,
    RSP_Z86_MSA_2,
    RSP_Z86_ERR_4,
    RSP_Z86_QAK_6,
    RSP_Z86_QPD_7,
    RSP_Z86_QUERY_RESPONSE_8,
    RSP_Z86_DSC_95,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z86"; }
  RSP_Z86* create() const { return new RSP_Z86(); }

  /* Initialize object */
  void init() {
    setName("RSP_Z86");
    addObject<MSH>(RSP_Z86_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(RSP_Z86_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(RSP_Z86_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<QAK>(RSP_Z86_QAK_6, "QAK.6", HL7::initialized,
		   HL7::repetition_off);
    addObject<QPD>(RSP_Z86_QPD_7, "QPD.7", HL7::initialized,
		   HL7::repetition_off);
    addObject<RSP_Z86_QUERY_RESPONSE>(RSP_Z86_QUERY_RESPONSE_8,
				      "RSP_Z86.QUERY_RESPONSE",
				      HL7::initialized, HL7::repetition_on);
    addObject<DSC>(RSP_Z86_DSC_95, "DSC.95", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RSP_Z86_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RSP_Z86_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RSP_Z86_ERR_4);
  }
  QAK* getQAK_6(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RSP_Z86_QAK_6);
  }
  QPD* getQPD_7(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RSP_Z86_QPD_7);
  }
  RSP_Z86_QUERY_RESPONSE* getQUERY_RESPONSE(size_t index = 0) {
    return (RSP_Z86_QUERY_RESPONSE*)this->getObjectSafe(
	index, RSP_Z86_QUERY_RESPONSE_8);
  }
  DSC* getDSC_95(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RSP_Z86_DSC_95);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_6(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_QAK_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_7(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_QPD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQUERY_RESPONSE(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_QUERY_RESPONSE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_95(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_DSC_95) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z86_ */
} /* namespace HL7_24 */
#endif /*  __RSP_Z86__24_H__ */
