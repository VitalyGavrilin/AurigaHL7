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


#ifndef __RSP_Z82__24_H__
#define __RSP_Z82__24_H__

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
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/QAK.h"
#include "../segment/QPD.h"
#include "../segment/RCP.h"
#include "../segment/RXC.h"
#include "../segment/RXD.h"
#include "../segment/RXE.h"
#include "../segment/RXO.h"
#include "../segment/RXR.h"

namespace HL7_24 {

/* Internal structures/groups */
struct RSP_Z82_PATIENT_VISIT;  /* PATIENT_VISIT */
struct RSP_Z82_VISIT;	  /* VISIT */
struct RSP_Z82_TREATMENT;      /* TREATMENT */
struct RSP_Z82_ORDER_DETAIL;   /* ORDER_DETAIL */
struct RSP_Z82_ENCODED_ORDER;  /* ENCODED_ORDER */
struct RSP_Z82_OBSERVATION;    /* OBSERVATION */
struct RSP_Z82_COMMON_ORDER;   /* COMMON_ORDER */
struct RSP_Z82_PATIENT;	/* PATIENT */
struct RSP_Z82_QUERY_RESPONSE; /* QUERY_RESPONSE */

/* PATIENT_VISIT */
struct RSP_Z82_PATIENT_VISIT : public HL7Group {
  RSP_Z82_PATIENT_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RSP_Z82_PV1_25, RSP_Z82_PV2_27, FIELD_ID_MAX };

  const char* className() const { return "RSP_Z82_PATIENT_VISIT"; }
  RSP_Z82_PATIENT_VISIT* create() const { return new RSP_Z82_PATIENT_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_Z82.PATIENT_VISIT");
    addObject<PV1>(RSP_Z82_PV1_25, "PV1.25", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(RSP_Z82_PV2_27, "PV2.27", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  PV1* getPV1_25(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RSP_Z82_PV1_25);
  }
  PV2* getPV2_27(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RSP_Z82_PV2_27);
  }

  /* Checker list */
  bool isPV1_25(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_PV1_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_27(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_PV2_27) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z82_24 */

/* VISIT */
struct RSP_Z82_VISIT : public HL7Group {
  RSP_Z82_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RSP_Z82_AL1_22, RSP_Z82_PATIENT_VISIT_24, FIELD_ID_MAX };

  const char* className() const { return "RSP_Z82_VISIT"; }
  RSP_Z82_VISIT* create() const { return new RSP_Z82_VISIT(); }

  /* Initialize object */
  void init() {
    setName("RSP_Z82.VISIT");
    addObject<AL1>(RSP_Z82_AL1_22, "AL1.22", HL7::initialized,
		   HL7::repetition_on);
    addObject<RSP_Z82_PATIENT_VISIT>(RSP_Z82_PATIENT_VISIT_24,
				     "RSP_Z82.PATIENT_VISIT", HL7::optional,
				     HL7::repetition_off);
  }

  /* Getters list */
  AL1* getAL1_22(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, RSP_Z82_AL1_22);
  }
  RSP_Z82_PATIENT_VISIT* getPATIENT_VISIT(size_t index = 0) {
    return (RSP_Z82_PATIENT_VISIT*)this->getObjectSafe(
	index, RSP_Z82_PATIENT_VISIT_24);
  }

  /* Checker list */
  bool isAL1_22(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_AL1_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT_VISIT(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_PATIENT_VISIT_24) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z82_20 */

/* TREATMENT */
struct RSP_Z82_TREATMENT : public HL7Group {
  RSP_Z82_TREATMENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RSP_Z82_RXC_45, RSP_Z82_NTE_49, FIELD_ID_MAX };

  const char* className() const { return "RSP_Z82_TREATMENT"; }
  RSP_Z82_TREATMENT* create() const { return new RSP_Z82_TREATMENT(); }

  /* Initialize object */
  void init() {
    setName("RSP_Z82.TREATMENT");
    addObject<RXC>(RSP_Z82_RXC_45, "RXC.45", HL7::initialized,
		   HL7::repetition_on);
    addObject<NTE>(RSP_Z82_NTE_49, "NTE.49", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  RXC* getRXC_45(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z82_RXC_45);
  }
  NTE* getNTE_49(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z82_NTE_49);
  }

  /* Checker list */
  bool isRXC_45(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RXC_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_49(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_NTE_49) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z82_43 */

/* ORDER_DETAIL */
struct RSP_Z82_ORDER_DETAIL : public HL7Group {
  RSP_Z82_ORDER_DETAIL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z82_RXO_34,
    RSP_Z82_NTE_37,
    RSP_Z82_RXR_41,
    RSP_Z82_TREATMENT_43,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z82_ORDER_DETAIL"; }
  RSP_Z82_ORDER_DETAIL* create() const { return new RSP_Z82_ORDER_DETAIL(); }

  /* Initialize object */
  void init() {
    setName("RSP_Z82.ORDER_DETAIL");
    addObject<RXO>(RSP_Z82_RXO_34, "RXO.34", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(RSP_Z82_NTE_37, "NTE.37", HL7::optional, HL7::repetition_on);
    addObject<RXR>(RSP_Z82_RXR_41, "RXR.41", HL7::initialized,
		   HL7::repetition_on);
    addObject<RSP_Z82_TREATMENT>(RSP_Z82_TREATMENT_43, "RSP_Z82.TREATMENT",
				 HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  RXO* getRXO_34(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, RSP_Z82_RXO_34);
  }
  NTE* getNTE_37(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z82_NTE_37);
  }
  RXR* getRXR_41(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RSP_Z82_RXR_41);
  }
  RSP_Z82_TREATMENT* getTREATMENT(size_t index = 0) {
    return (RSP_Z82_TREATMENT*)this->getObjectSafe(index, RSP_Z82_TREATMENT_43);
  }

  /* Checker list */
  bool isRXO_34(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RXO_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_37(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_NTE_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_41(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RXR_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTREATMENT(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_TREATMENT_43) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z82_33 */

/* ENCODED_ORDER */
struct RSP_Z82_ENCODED_ORDER : public HL7Group {
  RSP_Z82_ENCODED_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z82_RXE_55,
    RSP_Z82_RXR_57,
    RSP_Z82_RXC_61,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z82_ENCODED_ORDER"; }
  RSP_Z82_ENCODED_ORDER* create() const { return new RSP_Z82_ENCODED_ORDER(); }

  /* Initialize object */
  void init() {
    setName("RSP_Z82.ENCODED_ORDER");
    addObject<RXE>(RSP_Z82_RXE_55, "RXE.55", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXR>(RSP_Z82_RXR_57, "RXR.57", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXC>(RSP_Z82_RXC_61, "RXC.61", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  RXE* getRXE_55(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, RSP_Z82_RXE_55);
  }
  RXR* getRXR_57(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RSP_Z82_RXR_57);
  }
  RXC* getRXC_61(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z82_RXC_61);
  }

  /* Checker list */
  bool isRXE_55(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RXE_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_57(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RXR_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_61(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RXC_61) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z82_54 */

/* OBSERVATION */
struct RSP_Z82_OBSERVATION : public HL7Group {
  RSP_Z82_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RSP_Z82_OBX_76, RSP_Z82_NTE_80, FIELD_ID_MAX };

  const char* className() const { return "RSP_Z82_OBSERVATION"; }
  RSP_Z82_OBSERVATION* create() const { return new RSP_Z82_OBSERVATION(); }

  /* Initialize object */
  void init() {
    setName("RSP_Z82.OBSERVATION");
    addObject<OBX>(RSP_Z82_OBX_76, "OBX.76", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(RSP_Z82_NTE_80, "NTE.80", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_76(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RSP_Z82_OBX_76);
  }
  NTE* getNTE_80(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z82_NTE_80);
  }

  /* Checker list */
  bool isOBX_76(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_OBX_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_80(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_NTE_80) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z82_74 */

/* COMMON_ORDER */
struct RSP_Z82_COMMON_ORDER : public HL7Group {
  RSP_Z82_COMMON_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z82_ORC_32,
    RSP_Z82_ORDER_DETAIL_33,
    RSP_Z82_ENCODED_ORDER_54,
    RSP_Z82_RXD_65,
    RSP_Z82_RXR_67,
    RSP_Z82_RXC_71,
    RSP_Z82_OBSERVATION_74,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z82_COMMON_ORDER"; }
  RSP_Z82_COMMON_ORDER* create() const { return new RSP_Z82_COMMON_ORDER(); }

  /* Initialize object */
  void init() {
    setName("RSP_Z82.COMMON_ORDER");
    addObject<ORC>(RSP_Z82_ORC_32, "ORC.32", HL7::initialized,
		   HL7::repetition_off);
    addObject<RSP_Z82_ORDER_DETAIL>(RSP_Z82_ORDER_DETAIL_33,
				    "RSP_Z82.ORDER_DETAIL", HL7::optional,
				    HL7::repetition_off);
    addObject<RSP_Z82_ENCODED_ORDER>(RSP_Z82_ENCODED_ORDER_54,
				     "RSP_Z82.ENCODED_ORDER", HL7::optional,
				     HL7::repetition_off);
    addObject<RXD>(RSP_Z82_RXD_65, "RXD.65", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXR>(RSP_Z82_RXR_67, "RXR.67", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXC>(RSP_Z82_RXC_71, "RXC.71", HL7::optional, HL7::repetition_on);
    addObject<RSP_Z82_OBSERVATION>(RSP_Z82_OBSERVATION_74,
				   "RSP_Z82.OBSERVATION", HL7::initialized,
				   HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_32(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, RSP_Z82_ORC_32);
  }
  RSP_Z82_ORDER_DETAIL* getORDER_DETAIL(size_t index = 0) {
    return (RSP_Z82_ORDER_DETAIL*)this->getObjectSafe(index,
						      RSP_Z82_ORDER_DETAIL_33);
  }
  RSP_Z82_ENCODED_ORDER* getENCODED_ORDER(size_t index = 0) {
    return (RSP_Z82_ENCODED_ORDER*)this->getObjectSafe(
	index, RSP_Z82_ENCODED_ORDER_54);
  }
  RXD* getRXD_65(size_t index = 0) {
    return (RXD*)this->getObjectSafe(index, RSP_Z82_RXD_65);
  }
  RXR* getRXR_67(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RSP_Z82_RXR_67);
  }
  RXC* getRXC_71(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z82_RXC_71);
  }
  RSP_Z82_OBSERVATION* getOBSERVATION(size_t index = 0) {
    return (RSP_Z82_OBSERVATION*)this->getObjectSafe(index,
						     RSP_Z82_OBSERVATION_74);
  }

  /* Checker list */
  bool isORC_32(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_ORC_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_DETAIL(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_ORDER_DETAIL_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isENCODED_ORDER(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_ENCODED_ORDER_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXD_65(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RXD_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_67(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RXR_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_71(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RXC_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_OBSERVATION_74) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z82_31 */

/* PATIENT */
struct RSP_Z82_PATIENT : public HL7Group {
  RSP_Z82_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z82_PID_11,
    RSP_Z82_PD1_13,
    RSP_Z82_NTE_17,
    RSP_Z82_VISIT_20,
    RSP_Z82_COMMON_ORDER_31,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z82_PATIENT"; }
  RSP_Z82_PATIENT* create() const { return new RSP_Z82_PATIENT(); }

  /* Initialize object */
  void init() {
    setName("RSP_Z82.PATIENT");
    addObject<PID>(RSP_Z82_PID_11, "PID.11", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(RSP_Z82_PD1_13, "PD1.13", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(RSP_Z82_NTE_17, "NTE.17", HL7::optional, HL7::repetition_on);
    addObject<RSP_Z82_VISIT>(RSP_Z82_VISIT_20, "RSP_Z82.VISIT", HL7::optional,
			     HL7::repetition_off);
    addObject<RSP_Z82_COMMON_ORDER>(RSP_Z82_COMMON_ORDER_31,
				    "RSP_Z82.COMMON_ORDER", HL7::initialized,
				    HL7::repetition_on);
  }

  /* Getters list */
  PID* getPID_11(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RSP_Z82_PID_11);
  }
  PD1* getPD1_13(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, RSP_Z82_PD1_13);
  }
  NTE* getNTE_17(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z82_NTE_17);
  }
  RSP_Z82_VISIT* getVISIT(size_t index = 0) {
    return (RSP_Z82_VISIT*)this->getObjectSafe(index, RSP_Z82_VISIT_20);
  }
  RSP_Z82_COMMON_ORDER* getCOMMON_ORDER(size_t index = 0) {
    return (RSP_Z82_COMMON_ORDER*)this->getObjectSafe(index,
						      RSP_Z82_COMMON_ORDER_31);
  }

  /* Checker list */
  bool isPID_11(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_PID_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_13(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_PD1_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_17(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_NTE_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVISIT(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_VISIT_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCOMMON_ORDER(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_COMMON_ORDER_31) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z82_10 */

/* QUERY_RESPONSE */
struct RSP_Z82_QUERY_RESPONSE : public HL7Group {
  RSP_Z82_QUERY_RESPONSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RSP_Z82_PATIENT_10, FIELD_ID_MAX };

  const char* className() const { return "RSP_Z82_QUERY_RESPONSE"; }
  RSP_Z82_QUERY_RESPONSE* create() const {
    return new RSP_Z82_QUERY_RESPONSE();
  }

  /* Initialize object */
  void init() {
    setName("RSP_Z82.QUERY_RESPONSE");
    addObject<RSP_Z82_PATIENT>(RSP_Z82_PATIENT_10, "RSP_Z82.PATIENT",
			       HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  RSP_Z82_PATIENT* getPATIENT(size_t index = 0) {
    return (RSP_Z82_PATIENT*)this->getObjectSafe(index, RSP_Z82_PATIENT_10);
  }

  /* Checker list */
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_PATIENT_10) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z82_9 */

/* RSP_Z82 */
struct RSP_Z82 : public HL7Message {
  RSP_Z82() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z82_MSH_1,
    RSP_Z82_MSA_2,
    RSP_Z82_ERR_4,
    RSP_Z82_QAK_6,
    RSP_Z82_QPD_7,
    RSP_Z82_RCP_8,
    RSP_Z82_QUERY_RESPONSE_9,
    RSP_Z82_DSC_88,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z82"; }
  RSP_Z82* create() const { return new RSP_Z82(); }

  /* Initialize object */
  void init() {
    setName("RSP_Z82");
    addObject<MSH>(RSP_Z82_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(RSP_Z82_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(RSP_Z82_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<QAK>(RSP_Z82_QAK_6, "QAK.6", HL7::initialized,
		   HL7::repetition_off);
    addObject<QPD>(RSP_Z82_QPD_7, "QPD.7", HL7::initialized,
		   HL7::repetition_off);
    addObject<RCP>(RSP_Z82_RCP_8, "RCP.8", HL7::initialized,
		   HL7::repetition_off);
    addObject<RSP_Z82_QUERY_RESPONSE>(RSP_Z82_QUERY_RESPONSE_9,
				      "RSP_Z82.QUERY_RESPONSE",
				      HL7::initialized, HL7::repetition_on);
    addObject<DSC>(RSP_Z82_DSC_88, "DSC.88", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RSP_Z82_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RSP_Z82_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RSP_Z82_ERR_4);
  }
  QAK* getQAK_6(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RSP_Z82_QAK_6);
  }
  QPD* getQPD_7(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RSP_Z82_QPD_7);
  }
  RCP* getRCP_8(size_t index = 0) {
    return (RCP*)this->getObjectSafe(index, RSP_Z82_RCP_8);
  }
  RSP_Z82_QUERY_RESPONSE* getQUERY_RESPONSE(size_t index = 0) {
    return (RSP_Z82_QUERY_RESPONSE*)this->getObjectSafe(
	index, RSP_Z82_QUERY_RESPONSE_9);
  }
  DSC* getDSC_88(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RSP_Z82_DSC_88);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_6(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_QAK_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_7(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_QPD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRCP_8(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RCP_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQUERY_RESPONSE(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_QUERY_RESPONSE_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_88(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_DSC_88) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z82_ */
} /* namespace HL7_24 */
#endif /*  __RSP_Z82__24_H__ */
