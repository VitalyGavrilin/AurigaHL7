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


#ifndef __RSP_Z90__24_H__
#define __RSP_Z90__24_H__

#include "../../common/Util.h"
#include "../segment/CTD.h"
#include "../segment/DSC.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/QAK.h"
#include "../segment/QPD.h"
#include "../segment/RCP.h"

namespace HL7_24 {

/* Internal structures/groups */
struct RSP_Z90_VISIT;	  /* VISIT */
struct RSP_Z90_PATIENT;	/* PATIENT */
struct RSP_Z90_OBSERVATION;    /* OBSERVATION */
struct RSP_Z90_COMMON_ORDER;   /* COMMON_ORDER */
struct RSP_Z90_QUERY_RESPONSE; /* QUERY_RESPONSE */

/* VISIT */
struct RSP_Z90_VISIT : public HL7Group {
  RSP_Z90_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RSP_Z90_PV1_26, RSP_Z90_PV2_28, FIELD_ID_MAX };

  const char* className() const { return "RSP_Z90_VISIT"; }
  RSP_Z90_VISIT* create() const { return new RSP_Z90_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_Z90.VISIT");
    addObject<PV1>(RSP_Z90_PV1_26, "PV1.26", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(RSP_Z90_PV2_28, "PV2.28", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  PV1* getPV1_26(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RSP_Z90_PV1_26);
  }
  PV2* getPV2_28(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RSP_Z90_PV2_28);
  }

  /* Checker list */
  bool isPV1_26(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PV1_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_28(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PV2_28) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z90_25 */

/* PATIENT */
struct RSP_Z90_PATIENT : public HL7Group {
  RSP_Z90_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z90_PID_11,
    RSP_Z90_PD1_13,
    RSP_Z90_NK1_17,
    RSP_Z90_NTE_22,
    RSP_Z90_VISIT_25,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z90_PATIENT"; }
  RSP_Z90_PATIENT* create() const { return new RSP_Z90_PATIENT(); }

  /* Initialize object */
  void init() {
    setName("RSP_Z90.PATIENT");
    addObject<PID>(RSP_Z90_PID_11, "PID.11", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(RSP_Z90_PD1_13, "PD1.13", HL7::optional,
		   HL7::repetition_off);
    addObject<NK1>(RSP_Z90_NK1_17, "NK1.17", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RSP_Z90_NTE_22, "NTE.22", HL7::optional, HL7::repetition_on);
    addObject<RSP_Z90_VISIT>(RSP_Z90_VISIT_25, "RSP_Z90.VISIT", HL7::optional,
			     HL7::repetition_off);
  }

  /* Getters list */
  PID* getPID_11(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RSP_Z90_PID_11);
  }
  PD1* getPD1_13(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, RSP_Z90_PD1_13);
  }
  NK1* getNK1_17(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, RSP_Z90_NK1_17);
  }
  NTE* getNTE_22(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z90_NTE_22);
  }
  RSP_Z90_VISIT* getVISIT(size_t index = 0) {
    return (RSP_Z90_VISIT*)this->getObjectSafe(index, RSP_Z90_VISIT_25);
  }

  /* Checker list */
  bool isPID_11(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PID_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_13(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PD1_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_17(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_NK1_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_22(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_NTE_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVISIT(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_VISIT_25) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z90_10 */

/* OBSERVATION */
struct RSP_Z90_OBSERVATION : public HL7Group {
  RSP_Z90_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RSP_Z90_OBX_45, RSP_Z90_NTE_49, FIELD_ID_MAX };

  const char* className() const { return "RSP_Z90_OBSERVATION"; }
  RSP_Z90_OBSERVATION* create() const { return new RSP_Z90_OBSERVATION(); }

  /* Initialize object */
  void init() {
    setName("RSP_Z90.OBSERVATION");
    addObject<OBX>(RSP_Z90_OBX_45, "OBX.45", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(RSP_Z90_NTE_49, "NTE.49", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_45(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RSP_Z90_OBX_45);
  }
  NTE* getNTE_49(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z90_NTE_49);
  }

  /* Checker list */
  bool isOBX_45(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_OBX_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_49(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_NTE_49) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z90_43 */

/* COMMON_ORDER */
struct RSP_Z90_COMMON_ORDER : public HL7Group {
  RSP_Z90_COMMON_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z90_ORC_33,
    RSP_Z90_OBR_34,
    RSP_Z90_NTE_37,
    RSP_Z90_CTD_41,
    RSP_Z90_OBSERVATION_43,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z90_COMMON_ORDER"; }
  RSP_Z90_COMMON_ORDER* create() const { return new RSP_Z90_COMMON_ORDER(); }

  /* Initialize object */
  void init() {
    setName("RSP_Z90.COMMON_ORDER");
    addObject<ORC>(RSP_Z90_ORC_33, "ORC.33", HL7::initialized,
		   HL7::repetition_off);
    addObject<OBR>(RSP_Z90_OBR_34, "OBR.34", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(RSP_Z90_NTE_37, "NTE.37", HL7::optional, HL7::repetition_on);
    addObject<CTD>(RSP_Z90_CTD_41, "CTD.41", HL7::optional,
		   HL7::repetition_off);
    addObject<RSP_Z90_OBSERVATION>(RSP_Z90_OBSERVATION_43,
				   "RSP_Z90.OBSERVATION", HL7::initialized,
				   HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_33(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, RSP_Z90_ORC_33);
  }
  OBR* getOBR_34(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, RSP_Z90_OBR_34);
  }
  NTE* getNTE_37(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z90_NTE_37);
  }
  CTD* getCTD_41(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RSP_Z90_CTD_41);
  }
  RSP_Z90_OBSERVATION* getOBSERVATION(size_t index = 0) {
    return (RSP_Z90_OBSERVATION*)this->getObjectSafe(index,
						     RSP_Z90_OBSERVATION_43);
  }

  /* Checker list */
  bool isORC_33(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_ORC_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_34(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_OBR_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_37(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_NTE_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_41(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_CTD_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_OBSERVATION_43) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z90_32 */

/* QUERY_RESPONSE */
struct RSP_Z90_QUERY_RESPONSE : public HL7Group {
  RSP_Z90_QUERY_RESPONSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RSP_Z90_PATIENT_10, RSP_Z90_COMMON_ORDER_32, FIELD_ID_MAX };

  const char* className() const { return "RSP_Z90_QUERY_RESPONSE"; }
  RSP_Z90_QUERY_RESPONSE* create() const {
    return new RSP_Z90_QUERY_RESPONSE();
  }

  /* Initialize object */
  void init() {
    setName("RSP_Z90.QUERY_RESPONSE");
    addObject<RSP_Z90_PATIENT>(RSP_Z90_PATIENT_10, "RSP_Z90.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<RSP_Z90_COMMON_ORDER>(RSP_Z90_COMMON_ORDER_32,
				    "RSP_Z90.COMMON_ORDER", HL7::initialized,
				    HL7::repetition_on);
  }

  /* Getters list */
  RSP_Z90_PATIENT* getPATIENT(size_t index = 0) {
    return (RSP_Z90_PATIENT*)this->getObjectSafe(index, RSP_Z90_PATIENT_10);
  }
  RSP_Z90_COMMON_ORDER* getCOMMON_ORDER(size_t index = 0) {
    return (RSP_Z90_COMMON_ORDER*)this->getObjectSafe(index,
						      RSP_Z90_COMMON_ORDER_32);
  }

  /* Checker list */
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_PATIENT_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCOMMON_ORDER(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_COMMON_ORDER_32) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z90_9 */

/* RSP_Z90 */
struct RSP_Z90 : public HL7Message {
  RSP_Z90() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z90_MSH_1,
    RSP_Z90_MSA_2,
    RSP_Z90_ERR_4,
    RSP_Z90_QAK_6,
    RSP_Z90_QPD_7,
    RSP_Z90_RCP_8,
    RSP_Z90_QUERY_RESPONSE_9,
    RSP_Z90_DSC_55,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z90"; }
  RSP_Z90* create() const { return new RSP_Z90(); }

  /* Initialize object */
  void init() {
    setName("RSP_Z90");
    addObject<MSH>(RSP_Z90_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(RSP_Z90_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(RSP_Z90_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<QAK>(RSP_Z90_QAK_6, "QAK.6", HL7::initialized,
		   HL7::repetition_off);
    addObject<QPD>(RSP_Z90_QPD_7, "QPD.7", HL7::initialized,
		   HL7::repetition_off);
    addObject<RCP>(RSP_Z90_RCP_8, "RCP.8", HL7::initialized,
		   HL7::repetition_off);
    addObject<RSP_Z90_QUERY_RESPONSE>(RSP_Z90_QUERY_RESPONSE_9,
				      "RSP_Z90.QUERY_RESPONSE",
				      HL7::initialized, HL7::repetition_on);
    addObject<DSC>(RSP_Z90_DSC_55, "DSC.55", HL7::initialized,
		   HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RSP_Z90_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RSP_Z90_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RSP_Z90_ERR_4);
  }
  QAK* getQAK_6(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RSP_Z90_QAK_6);
  }
  QPD* getQPD_7(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RSP_Z90_QPD_7);
  }
  RCP* getRCP_8(size_t index = 0) {
    return (RCP*)this->getObjectSafe(index, RSP_Z90_RCP_8);
  }
  RSP_Z90_QUERY_RESPONSE* getQUERY_RESPONSE(size_t index = 0) {
    return (RSP_Z90_QUERY_RESPONSE*)this->getObjectSafe(
	index, RSP_Z90_QUERY_RESPONSE_9);
  }
  DSC* getDSC_55(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RSP_Z90_DSC_55);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_6(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_QAK_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_7(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_QPD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRCP_8(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RCP_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQUERY_RESPONSE(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_QUERY_RESPONSE_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_55(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_DSC_55) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z90_ */
} /* namespace HL7_24 */
#endif /*  __RSP_Z90__24_H__ */
