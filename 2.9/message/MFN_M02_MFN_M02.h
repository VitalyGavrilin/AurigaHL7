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


#ifndef __MFN_M02_MFN_M02__29_H__
#define __MFN_M02_MFN_M02__29_H__

#include "../../common/Util.h"
#include "../segment/AFF.h"
#include "../segment/CER.h"
#include "../segment/EDU.h"
#include "../segment/LAN.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/ORG.h"
#include "../segment/PRA.h"
#include "../segment/SFT.h"
#include "../segment/STF.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct MFN_M02_MFN_M02_MF_STAFF; /* MF_STAFF */

/*  */
struct MFN_M02_MFN_M02 : public HL7Message {
  MFN_M02_MFN_M02() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M02_MFN_M02_MSH_1,
    MFN_M02_MFN_M02_SFT_2,
    MFN_M02_MFN_M02_UAC_3,
    MFN_M02_MFN_M02_MFI_4,
    MFN_M02_MFN_M02_AFF_6,
    MFN_M02_MFN_M02_CER_7,
    MFN_M02_MFN_M02_EDU_8,
    MFN_M02_MFN_M02_LAN_9,
    MFN_M02_MFN_M02_MFE_10,
    MFN_M02_MFN_M02_NTE_11,
    MFN_M02_MFN_M02_ORG_12,
    MFN_M02_MFN_M02_PRA_13,
    MFN_M02_MFN_M02_STF_14,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M02_MFN_M02"; }
  MFN_M02_MFN_M02* create() const { return new MFN_M02_MFN_M02(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M02_MFN_M02");
    addObject<MSH>(MFN_M02_MFN_M02_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(MFN_M02_MFN_M02_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(MFN_M02_MFN_M02_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MFI>(MFN_M02_MFN_M02_MFI_4, "MFI.4", HL7::initialized, HL7::repetition_off);
    addObject<AFF>(MFN_M02_MFN_M02_AFF_6, "AFF.6", HL7::optional, HL7::repetition_on);
    addObject<CER>(MFN_M02_MFN_M02_CER_7, "CER.7", HL7::optional, HL7::repetition_on);
    addObject<EDU>(MFN_M02_MFN_M02_EDU_8, "EDU.8", HL7::optional, HL7::repetition_on);
    addObject<LAN>(MFN_M02_MFN_M02_LAN_9, "LAN.9", HL7::optional, HL7::repetition_on);
    addObject<MFE>(MFN_M02_MFN_M02_MFE_10, "MFE.10", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(MFN_M02_MFN_M02_NTE_11, "NTE.11", HL7::optional, HL7::repetition_on);
    addObject<ORG>(MFN_M02_MFN_M02_ORG_12, "ORG.12", HL7::optional, HL7::repetition_on);
    addObject<PRA>(MFN_M02_MFN_M02_PRA_13, "PRA.13", HL7::optional, HL7::repetition_on);
    addObject<STF>(MFN_M02_MFN_M02_STF_14, "STF.14", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M02_MFN_M02_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, MFN_M02_MFN_M02_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, MFN_M02_MFN_M02_UAC_3);
  }
  MFI* getMFI_4(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M02_MFN_M02_MFI_4);
  }
  AFF* getAFF_6(size_t index = 0) {
    return (AFF*)this->getObjectSafe(index, MFN_M02_MFN_M02_AFF_6);
  }
  CER* getCER_7(size_t index = 0) {
    return (CER*)this->getObjectSafe(index, MFN_M02_MFN_M02_CER_7);
  }
  EDU* getEDU_8(size_t index = 0) {
    return (EDU*)this->getObjectSafe(index, MFN_M02_MFN_M02_EDU_8);
  }
  LAN* getLAN_9(size_t index = 0) {
    return (LAN*)this->getObjectSafe(index, MFN_M02_MFN_M02_LAN_9);
  }
  MFE* getMFE_10(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M02_MFN_M02_MFE_10);
  }
  NTE* getNTE_11(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, MFN_M02_MFN_M02_NTE_11);
  }
  ORG* getORG_12(size_t index = 0) {
    return (ORG*)this->getObjectSafe(index, MFN_M02_MFN_M02_ORG_12);
  }
  PRA* getPRA_13(size_t index = 0) {
    return (PRA*)this->getObjectSafe(index, MFN_M02_MFN_M02_PRA_13);
  }
  STF* getSTF_14(size_t index = 0) {
    return (STF*)this->getObjectSafe(index, MFN_M02_MFN_M02_STF_14);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M02_MFN_M02_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M02_MFN_M02_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M02_MFN_M02_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M02_MFN_M02_MFI_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAFF_6(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M02_MFN_M02_AFF_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCER_7(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M02_MFN_M02_CER_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEDU_8(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M02_MFN_M02_EDU_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isLAN_9(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M02_MFN_M02_LAN_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFE_10(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M02_MFN_M02_MFE_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_11(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M02_MFN_M02_NTE_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORG_12(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M02_MFN_M02_ORG_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRA_13(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M02_MFN_M02_PRA_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSTF_14(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M02_MFN_M02_STF_14) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M02_MFN_M02_ */
} /* namespace HL7_29 */
#endif /*  __MFN_M02_MFN_M02__29_H__ */
