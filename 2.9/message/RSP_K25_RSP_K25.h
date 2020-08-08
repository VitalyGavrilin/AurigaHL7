/*
 * hacca - C Toolkit and Applications for the HL7 2.x Protocols
 *           http://github.com/rcarbone/hacca
 *           http://hub.docker.com/repository/docker/roccocarbone/hacca
 *
 * Warning: This file was automatically generated, please do not edit.
 *
 * R. Carbone (rocco@tecsiel.it)
 * Jul 2020
 *
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 */


#ifndef __RSP_K25_RSP_K25__29_H__
#define __RSP_K25_RSP_K25__29_H__

#include "../../common/Util.h"
#include "../segment/AFF.h"
#include "../segment/CER.h"
#include "../segment/DSC.h"
#include "../segment/EDU.h"
#include "../segment/ERR.h"
#include "../segment/LAN.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
#include "../segment/ORG.h"
#include "../segment/PRA.h"
#include "../segment/PRT.h"
#include "../segment/QAK.h"
#include "../segment/QPD.h"
#include "../segment/RCP.h"
#include "../segment/ROL.h"
#include "../segment/SFT.h"
#include "../segment/STF.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct RSP_K25_RSP_K25_STAFF; /* STAFF */

/*  */
struct RSP_K25_RSP_K25 : public HL7Message {
  RSP_K25_RSP_K25() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_K25_RSP_K25_MSH_1,
    RSP_K25_RSP_K25_SFT_2,
    RSP_K25_RSP_K25_UAC_3,
    RSP_K25_RSP_K25_MSA_4,
    RSP_K25_RSP_K25_ERR_5,
    RSP_K25_RSP_K25_QAK_6,
    RSP_K25_RSP_K25_QPD_7,
    RSP_K25_RSP_K25_RCP_8,
    RSP_K25_RSP_K25_DSC_10,
    RSP_K25_RSP_K25_AFF_11,
    RSP_K25_RSP_K25_CER_12,
    RSP_K25_RSP_K25_EDU_13,
    RSP_K25_RSP_K25_LAN_14,
    RSP_K25_RSP_K25_NK1_15,
    RSP_K25_RSP_K25_ORG_16,
    RSP_K25_RSP_K25_PRA_17,
    RSP_K25_RSP_K25_PRT_18,
    RSP_K25_RSP_K25_ROL_19,
    RSP_K25_RSP_K25_STF_20,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_K25_RSP_K25"; }
  RSP_K25_RSP_K25* create() const { return new RSP_K25_RSP_K25(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_K25_RSP_K25");
    addObject<MSH>(RSP_K25_RSP_K25_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(RSP_K25_RSP_K25_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(RSP_K25_RSP_K25_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MSA>(RSP_K25_RSP_K25_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(RSP_K25_RSP_K25_ERR_5, "ERR.5", HL7::optional, HL7::repetition_on);
    addObject<QAK>(RSP_K25_RSP_K25_QAK_6, "QAK.6", HL7::initialized, HL7::repetition_off);
    addObject<QPD>(RSP_K25_RSP_K25_QPD_7, "QPD.7", HL7::initialized, HL7::repetition_off);
    addObject<RCP>(RSP_K25_RSP_K25_RCP_8, "RCP.8", HL7::initialized, HL7::repetition_off);
    addObject<DSC>(RSP_K25_RSP_K25_DSC_10, "DSC.10", HL7::optional, HL7::repetition_off);
    addObject<AFF>(RSP_K25_RSP_K25_AFF_11, "AFF.11", HL7::optional, HL7::repetition_on);
    addObject<CER>(RSP_K25_RSP_K25_CER_12, "CER.12", HL7::optional, HL7::repetition_on);
    addObject<EDU>(RSP_K25_RSP_K25_EDU_13, "EDU.13", HL7::optional, HL7::repetition_on);
    addObject<LAN>(RSP_K25_RSP_K25_LAN_14, "LAN.14", HL7::optional, HL7::repetition_on);
    addObject<NK1>(RSP_K25_RSP_K25_NK1_15, "NK1.15", HL7::optional, HL7::repetition_on);
    addObject<ORG>(RSP_K25_RSP_K25_ORG_16, "ORG.16", HL7::optional, HL7::repetition_on);
    addObject<PRA>(RSP_K25_RSP_K25_PRA_17, "PRA.17", HL7::optional, HL7::repetition_on);
    addObject<PRT>(RSP_K25_RSP_K25_PRT_18, "PRT.18", HL7::optional, HL7::repetition_on);
    addObject<ROL>(RSP_K25_RSP_K25_ROL_19, "ROL.19", HL7::optional, HL7::repetition_on);
    addObject<STF>(RSP_K25_RSP_K25_STF_20, "STF.20", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RSP_K25_RSP_K25_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, RSP_K25_RSP_K25_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, RSP_K25_RSP_K25_UAC_3);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RSP_K25_RSP_K25_MSA_4);
  }
  ERR* getERR_5(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RSP_K25_RSP_K25_ERR_5);
  }
  QAK* getQAK_6(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RSP_K25_RSP_K25_QAK_6);
  }
  QPD* getQPD_7(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RSP_K25_RSP_K25_QPD_7);
  }
  RCP* getRCP_8(size_t index = 0) {
    return (RCP*)this->getObjectSafe(index, RSP_K25_RSP_K25_RCP_8);
  }
  DSC* getDSC_10(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RSP_K25_RSP_K25_DSC_10);
  }
  AFF* getAFF_11(size_t index = 0) {
    return (AFF*)this->getObjectSafe(index, RSP_K25_RSP_K25_AFF_11);
  }
  CER* getCER_12(size_t index = 0) {
    return (CER*)this->getObjectSafe(index, RSP_K25_RSP_K25_CER_12);
  }
  EDU* getEDU_13(size_t index = 0) {
    return (EDU*)this->getObjectSafe(index, RSP_K25_RSP_K25_EDU_13);
  }
  LAN* getLAN_14(size_t index = 0) {
    return (LAN*)this->getObjectSafe(index, RSP_K25_RSP_K25_LAN_14);
  }
  NK1* getNK1_15(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, RSP_K25_RSP_K25_NK1_15);
  }
  ORG* getORG_16(size_t index = 0) {
    return (ORG*)this->getObjectSafe(index, RSP_K25_RSP_K25_ORG_16);
  }
  PRA* getPRA_17(size_t index = 0) {
    return (PRA*)this->getObjectSafe(index, RSP_K25_RSP_K25_PRA_17);
  }
  PRT* getPRT_18(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, RSP_K25_RSP_K25_PRT_18);
  }
  ROL* getROL_19(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, RSP_K25_RSP_K25_ROL_19);
  }
  STF* getSTF_20(size_t index = 0) {
    return (STF*)this->getObjectSafe(index, RSP_K25_RSP_K25_STF_20);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_RSP_K25_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_RSP_K25_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_RSP_K25_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_RSP_K25_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_5(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_RSP_K25_ERR_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_6(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_RSP_K25_QAK_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_7(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_RSP_K25_QPD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRCP_8(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_RSP_K25_RCP_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_10(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_RSP_K25_DSC_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAFF_11(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_RSP_K25_AFF_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCER_12(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_RSP_K25_CER_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEDU_13(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_RSP_K25_EDU_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isLAN_14(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_RSP_K25_LAN_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_15(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_RSP_K25_NK1_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORG_16(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_RSP_K25_ORG_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRA_17(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_RSP_K25_PRA_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_18(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_RSP_K25_PRT_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_19(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_RSP_K25_ROL_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSTF_20(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K25_RSP_K25_STF_20) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_K25_RSP_K25_ */
} /* namespace HL7_29 */
#endif /*  __RSP_K25_RSP_K25__29_H__ */
