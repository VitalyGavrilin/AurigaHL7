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


#ifndef __ORF_R04__24_H__
#define __ORF_R04__24_H__

#include "../../common/Util.h"
#include "../segment/CTD.h"
#include "../segment/CTI.h"
#include "../segment/DSC.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/QAK.h"
#include "../segment/QRD.h"
#include "../segment/QRF.h"

namespace HL7_24 {

/* Internal structures/groups */
struct ORF_R04_PATIENT;     /* PATIENT */
struct ORF_R04_OBSERVATION; /* OBSERVATION */
struct ORF_R04_ORDER;       /* ORDER */
struct ORF_R04_RESPONSE;    /* RESPONSE */

/* PATIENT */
struct ORF_R04_PATIENT : public HL7Group {
  ORF_R04_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ORF_R04_PID_9, ORF_R04_NTE_12, FIELD_ID_MAX };

  const char* className() const { return "ORF_R04_PATIENT"; }
  ORF_R04_PATIENT* create() const { return new ORF_R04_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORF_R04.PATIENT");
    addObject<PID>(ORF_R04_PID_9, "PID.9", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(ORF_R04_NTE_12, "NTE.12", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PID* getPID_9(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORF_R04_PID_9);
  }
  NTE* getNTE_12(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORF_R04_NTE_12);
  }

  /* Checker list */
  bool isPID_9(size_t index = 0) {
    try {
      return this->getObject(index, ORF_R04_PID_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_12(size_t index = 0) {
    try {
      return this->getObject(index, ORF_R04_NTE_12) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORF_R04_8 */

/* OBSERVATION */
struct ORF_R04_OBSERVATION : public HL7Group {
  ORF_R04_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ORF_R04_OBX_31, ORF_R04_NTE_35, FIELD_ID_MAX };

  const char* className() const { return "ORF_R04_OBSERVATION"; }
  ORF_R04_OBSERVATION* create() const { return new ORF_R04_OBSERVATION(); }

  /* Initialize object */
  void init() {
    setName("ORF_R04.OBSERVATION");
    addObject<OBX>(ORF_R04_OBX_31, "OBX.31", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(ORF_R04_NTE_35, "NTE.35", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_31(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORF_R04_OBX_31);
  }
  NTE* getNTE_35(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORF_R04_NTE_35);
  }

  /* Checker list */
  bool isOBX_31(size_t index = 0) {
    try {
      return this->getObject(index, ORF_R04_OBX_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_35(size_t index = 0) {
    try {
      return this->getObject(index, ORF_R04_NTE_35) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORF_R04_29 */

/* ORDER */
struct ORF_R04_ORDER : public HL7Group {
  ORF_R04_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORF_R04_ORC_18,
    ORF_R04_OBR_20,
    ORF_R04_NTE_23,
    ORF_R04_CTD_27,
    ORF_R04_OBSERVATION_29,
    ORF_R04_CTI_41,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORF_R04_ORDER"; }
  ORF_R04_ORDER* create() const { return new ORF_R04_ORDER(); }

  /* Initialize object */
  void init() {
    setName("ORF_R04.ORDER");
    addObject<ORC>(ORF_R04_ORC_18, "ORC.18", HL7::optional,
		   HL7::repetition_off);
    addObject<OBR>(ORF_R04_OBR_20, "OBR.20", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(ORF_R04_NTE_23, "NTE.23", HL7::optional, HL7::repetition_on);
    addObject<CTD>(ORF_R04_CTD_27, "CTD.27", HL7::optional,
		   HL7::repetition_off);
    addObject<ORF_R04_OBSERVATION>(ORF_R04_OBSERVATION_29,
				   "ORF_R04.OBSERVATION", HL7::initialized,
				   HL7::repetition_on);
    addObject<CTI>(ORF_R04_CTI_41, "CTI.41", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_18(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORF_R04_ORC_18);
  }
  OBR* getOBR_20(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, ORF_R04_OBR_20);
  }
  NTE* getNTE_23(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORF_R04_NTE_23);
  }
  CTD* getCTD_27(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, ORF_R04_CTD_27);
  }
  ORF_R04_OBSERVATION* getOBSERVATION(size_t index = 0) {
    return (ORF_R04_OBSERVATION*)this->getObjectSafe(index,
						     ORF_R04_OBSERVATION_29);
  }
  CTI* getCTI_41(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, ORF_R04_CTI_41);
  }

  /* Checker list */
  bool isORC_18(size_t index = 0) {
    try {
      return this->getObject(index, ORF_R04_ORC_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_20(size_t index = 0) {
    try {
      return this->getObject(index, ORF_R04_OBR_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_23(size_t index = 0) {
    try {
      return this->getObject(index, ORF_R04_NTE_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_27(size_t index = 0) {
    try {
      return this->getObject(index, ORF_R04_CTD_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, ORF_R04_OBSERVATION_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_41(size_t index = 0) {
    try {
      return this->getObject(index, ORF_R04_CTI_41) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORF_R04_16 */

/* RESPONSE */
struct ORF_R04_RESPONSE : public HL7Group {
  ORF_R04_RESPONSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ORF_R04_PATIENT_8, ORF_R04_ORDER_16, FIELD_ID_MAX };

  const char* className() const { return "ORF_R04_RESPONSE"; }
  ORF_R04_RESPONSE* create() const { return new ORF_R04_RESPONSE(); }

  /* Initialize object */
  void init() {
    setName("ORF_R04.RESPONSE");
    addObject<ORF_R04_PATIENT>(ORF_R04_PATIENT_8, "ORF_R04.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<ORF_R04_ORDER>(ORF_R04_ORDER_16, "ORF_R04.ORDER",
			     HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  ORF_R04_PATIENT* getPATIENT(size_t index = 0) {
    return (ORF_R04_PATIENT*)this->getObjectSafe(index, ORF_R04_PATIENT_8);
  }
  ORF_R04_ORDER* getORDER(size_t index = 0) {
    return (ORF_R04_ORDER*)this->getObjectSafe(index, ORF_R04_ORDER_16);
  }

  /* Checker list */
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, ORF_R04_PATIENT_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, ORF_R04_ORDER_16) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORF_R04_7 */

/* ORF_R04 */
struct ORF_R04 : public HL7Message {
  ORF_R04() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORF_R04_MSH_1,
    ORF_R04_MSA_2,
    ORF_R04_QRD_3,
    ORF_R04_QRF_5,
    ORF_R04_RESPONSE_7,
    ORF_R04_ERR_47,
    ORF_R04_QAK_50,
    ORF_R04_DSC_53,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORF_R04"; }
  ORF_R04* create() const { return new ORF_R04(); }

  /* Initialize object */
  void init() {
    setName("ORF_R04");
    addObject<MSH>(ORF_R04_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(ORF_R04_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<QRD>(ORF_R04_QRD_3, "QRD.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<QRF>(ORF_R04_QRF_5, "QRF.5", HL7::optional, HL7::repetition_off);
    addObject<ORF_R04_RESPONSE>(ORF_R04_RESPONSE_7, "ORF_R04.RESPONSE",
				HL7::initialized, HL7::repetition_on);
    addObject<ERR>(ORF_R04_ERR_47, "ERR.47", HL7::optional,
		   HL7::repetition_off);
    addObject<QAK>(ORF_R04_QAK_50, "QAK.50", HL7::optional,
		   HL7::repetition_off);
    addObject<DSC>(ORF_R04_DSC_53, "DSC.53", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORF_R04_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ORF_R04_MSA_2);
  }
  QRD* getQRD_3(size_t index = 0) {
    return (QRD*)this->getObjectSafe(index, ORF_R04_QRD_3);
  }
  QRF* getQRF_5(size_t index = 0) {
    return (QRF*)this->getObjectSafe(index, ORF_R04_QRF_5);
  }
  ORF_R04_RESPONSE* getRESPONSE(size_t index = 0) {
    return (ORF_R04_RESPONSE*)this->getObjectSafe(index, ORF_R04_RESPONSE_7);
  }
  ERR* getERR_47(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ORF_R04_ERR_47);
  }
  QAK* getQAK_50(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, ORF_R04_QAK_50);
  }
  DSC* getDSC_53(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, ORF_R04_DSC_53);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORF_R04_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, ORF_R04_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRD_3(size_t index = 0) {
    try {
      return this->getObject(index, ORF_R04_QRD_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRF_5(size_t index = 0) {
    try {
      return this->getObject(index, ORF_R04_QRF_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRESPONSE(size_t index = 0) {
    try {
      return this->getObject(index, ORF_R04_RESPONSE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_47(size_t index = 0) {
    try {
      return this->getObject(index, ORF_R04_ERR_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_50(size_t index = 0) {
    try {
      return this->getObject(index, ORF_R04_QAK_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_53(size_t index = 0) {
    try {
      return this->getObject(index, ORF_R04_DSC_53) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORF_R04_ */
} /* namespace HL7_24 */
#endif /*  __ORF_R04__24_H__ */
