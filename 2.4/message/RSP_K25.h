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


#ifndef __RSP_K25__24_H__
#define __RSP_K25__24_H__

#include "../../common/Util.h"
#include "../segment/AFF.h"
#include "../segment/DSC.h"
#include "../segment/EDU.h"
#include "../segment/ERR.h"
#include "../segment/LAN.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/ORG.h"
#include "../segment/PRA.h"
#include "../segment/QAK.h"
#include "../segment/QPD.h"
#include "../segment/RCP.h"
#include "../segment/STF.h"

namespace HL7_24 {

/* Internal structures/groups */
struct RSP_K25_STAFF; /* STAFF */

/* STAFF */
struct RSP_K25_STAFF : public HL7Group {
  RSP_K25_STAFF() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_K25_STF_10,
    RSP_K25_PRA_12,
    RSP_K25_ORG_16,
    RSP_K25_AFF_21,
    RSP_K25_LAN_26,
    RSP_K25_EDU_31,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_K25_STAFF"; }
  RSP_K25_STAFF* create() const { return new RSP_K25_STAFF(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_K25.STAFF");
    addObject<STF>(RSP_K25_STF_10, "STF.10", HL7::initialized,
		   HL7::repetition_off);
    addObject<PRA>(RSP_K25_PRA_12, "PRA.12", HL7::optional,
		   HL7::repetition_off);
    addObject<ORG>(RSP_K25_ORG_16, "ORG.16", HL7::optional, HL7::repetition_on);
    addObject<AFF>(RSP_K25_AFF_21, "AFF.21", HL7::optional, HL7::repetition_on);
    addObject<LAN>(RSP_K25_LAN_26, "LAN.26", HL7::optional, HL7::repetition_on);
    addObject<EDU>(RSP_K25_EDU_31, "EDU.31", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  STF* getSTF_10(size_t index = 0) {
    return (STF*)this->getObjectSafe(index, RSP_K25_STF_10);
  }
  PRA* getPRA_12(size_t index = 0) {
    return (PRA*)this->getObjectSafe(index, RSP_K25_PRA_12);
  }
  ORG* getORG_16(size_t index = 0) {
    return (ORG*)this->getObjectSafe(index, RSP_K25_ORG_16);
  }
  AFF* getAFF_21(size_t index = 0) {
    return (AFF*)this->getObjectSafe(index, RSP_K25_AFF_21);
  }
  LAN* getLAN_26(size_t index = 0) {
    return (LAN*)this->getObjectSafe(index, RSP_K25_LAN_26);
  }
  EDU* getEDU_31(size_t index = 0) {
    return (EDU*)this->getObjectSafe(index, RSP_K25_EDU_31);
  }

  /* Checker list */
  bool isSTF_10(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_STF_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRA_12(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_PRA_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORG_16(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_ORG_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAFF_21(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_AFF_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isLAN_26(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_LAN_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEDU_31(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_EDU_31) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_K25_9 */

/* RSP_K25 */
struct RSP_K25 : public HL7Message {
  RSP_K25() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_K25_MSH_1,
    RSP_K25_MSA_2,
    RSP_K25_ERR_4,
    RSP_K25_QAK_6,
    RSP_K25_QPD_7,
    RSP_K25_RCP_8,
    RSP_K25_STAFF_9,
    RSP_K25_DSC_36,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_K25"; }
  RSP_K25* create() const { return new RSP_K25(); }

  /* Initialize object */
  void init() {
    setName("RSP_K25");
    addObject<MSH>(RSP_K25_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(RSP_K25_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(RSP_K25_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<QAK>(RSP_K25_QAK_6, "QAK.6", HL7::initialized,
		   HL7::repetition_off);
    addObject<QPD>(RSP_K25_QPD_7, "QPD.7", HL7::initialized,
		   HL7::repetition_off);
    addObject<RCP>(RSP_K25_RCP_8, "RCP.8", HL7::initialized,
		   HL7::repetition_off);
    addObject<RSP_K25_STAFF>(RSP_K25_STAFF_9, "RSP_K25.STAFF", HL7::initialized,
			     HL7::repetition_on);
    addObject<DSC>(RSP_K25_DSC_36, "DSC.36", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RSP_K25_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RSP_K25_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RSP_K25_ERR_4);
  }
  QAK* getQAK_6(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RSP_K25_QAK_6);
  }
  QPD* getQPD_7(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RSP_K25_QPD_7);
  }
  RCP* getRCP_8(size_t index = 0) {
    return (RCP*)this->getObjectSafe(index, RSP_K25_RCP_8);
  }
  RSP_K25_STAFF* getSTAFF(size_t index = 0) {
    return (RSP_K25_STAFF*)this->getObjectSafe(index, RSP_K25_STAFF_9);
  }
  DSC* getDSC_36(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RSP_K25_DSC_36);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_6(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_QAK_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_7(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_QPD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRCP_8(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_RCP_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSTAFF(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_STAFF_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_36(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_DSC_36) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_K25_ */
} /* namespace HL7_24 */
#endif /*  __RSP_K25__24_H__ */
