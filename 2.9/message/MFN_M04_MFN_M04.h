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


#ifndef __MFN_M04_MFN_M04__29_H__
#define __MFN_M04_MFN_M04__29_H__

#include "../../common/Util.h"
#include "../segment/CDM.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/PRC.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct MFN_M04_MFN_M04_MF_CDM; /* MF_CDM */

/*  */
struct MFN_M04_MFN_M04 : public HL7Message {
  MFN_M04_MFN_M04() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M04_MFN_M04_MSH_1,
    MFN_M04_MFN_M04_SFT_2,
    MFN_M04_MFN_M04_UAC_3,
    MFN_M04_MFN_M04_MFI_4,
    MFN_M04_MFN_M04_NTE_5,
    MFN_M04_MFN_M04_CDM_7,
    MFN_M04_MFN_M04_MFE_8,
    MFN_M04_MFN_M04_NTE_9,
    MFN_M04_MFN_M04_PRC_10,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M04_MFN_M04"; }
  MFN_M04_MFN_M04* create() const { return new MFN_M04_MFN_M04(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M04_MFN_M04");
    addObject<MSH>(MFN_M04_MFN_M04_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(MFN_M04_MFN_M04_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(MFN_M04_MFN_M04_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MFI>(MFN_M04_MFN_M04_MFI_4, "MFI.4", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(MFN_M04_MFN_M04_NTE_5, "NTE.5", HL7::optional, HL7::repetition_on);
    addObject<CDM>(MFN_M04_MFN_M04_CDM_7, "CDM.7", HL7::initialized, HL7::repetition_off);
    addObject<MFE>(MFN_M04_MFN_M04_MFE_8, "MFE.8", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(MFN_M04_MFN_M04_NTE_9, "NTE.9", HL7::optional, HL7::repetition_on);
    addObject<PRC>(MFN_M04_MFN_M04_PRC_10, "PRC.10", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M04_MFN_M04_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, MFN_M04_MFN_M04_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, MFN_M04_MFN_M04_UAC_3);
  }
  MFI* getMFI_4(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M04_MFN_M04_MFI_4);
  }
  NTE* getNTE_5(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, MFN_M04_MFN_M04_NTE_5);
  }
  CDM* getCDM_7(size_t index = 0) {
    return (CDM*)this->getObjectSafe(index, MFN_M04_MFN_M04_CDM_7);
  }
  MFE* getMFE_8(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M04_MFN_M04_MFE_8);
  }
  NTE* getNTE_9(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, MFN_M04_MFN_M04_NTE_9);
  }
  PRC* getPRC_10(size_t index = 0) {
    return (PRC*)this->getObjectSafe(index, MFN_M04_MFN_M04_PRC_10);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_MFN_M04_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_MFN_M04_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_MFN_M04_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_MFN_M04_MFI_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_5(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_MFN_M04_NTE_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCDM_7(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_MFN_M04_CDM_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFE_8(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_MFN_M04_MFE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_9(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_MFN_M04_NTE_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRC_10(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_MFN_M04_PRC_10) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M04_MFN_M04_ */
} /* namespace HL7_29 */
#endif /*  __MFN_M04_MFN_M04__29_H__ */
