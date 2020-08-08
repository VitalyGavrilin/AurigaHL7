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


#ifndef __MFN_M18_MFN_M18__29_H__
#define __MFN_M18_MFN_M18__29_H__

#include "../../common/Util.h"
#include "../segment/DPS.h"
#include "../segment/MCP.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"
#include "../segment/PM1.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct MFN_M18_MFN_M18_MF_PAYER; /* MF_PAYER */
struct MFN_M18_MFN_M18_PAYER_MF_ENTRY; /* PAYER_MF_ENTRY */
struct MFN_M18_MFN_M18_PAYER_MF_COVERAGE; /* PAYER_MF_COVERAGE */

/*  */
struct MFN_M18_MFN_M18 : public HL7Message {
  MFN_M18_MFN_M18() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M18_MFN_M18_MSH_1,
    MFN_M18_MFN_M18_SFT_2,
    MFN_M18_MFN_M18_UAC_3,
    MFN_M18_MFN_M18_MFI_4,
    MFN_M18_MFN_M18_MFE_7,
    MFN_M18_MFN_M18_PM1_9,
    MFN_M18_MFN_M18_DPS_10,
    MFN_M18_MFN_M18_MCP_11,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M18_MFN_M18"; }
  MFN_M18_MFN_M18* create() const { return new MFN_M18_MFN_M18(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M18_MFN_M18");
    addObject<MSH>(MFN_M18_MFN_M18_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(MFN_M18_MFN_M18_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(MFN_M18_MFN_M18_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MFI>(MFN_M18_MFN_M18_MFI_4, "MFI.4", HL7::initialized, HL7::repetition_off);
    addObject<MFE>(MFN_M18_MFN_M18_MFE_7, "MFE.7", HL7::initialized, HL7::repetition_off);
    addObject<PM1>(MFN_M18_MFN_M18_PM1_9, "PM1.9", HL7::initialized, HL7::repetition_off);
    addObject<DPS>(MFN_M18_MFN_M18_DPS_10, "DPS.10", HL7::optional, HL7::repetition_on);
    addObject<MCP>(MFN_M18_MFN_M18_MCP_11, "MCP.11", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M18_MFN_M18_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, MFN_M18_MFN_M18_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, MFN_M18_MFN_M18_UAC_3);
  }
  MFI* getMFI_4(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M18_MFN_M18_MFI_4);
  }
  MFE* getMFE_7(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M18_MFN_M18_MFE_7);
  }
  PM1* getPM1_9(size_t index = 0) {
    return (PM1*)this->getObjectSafe(index, MFN_M18_MFN_M18_PM1_9);
  }
  DPS* getDPS_10(size_t index = 0) {
    return (DPS*)this->getObjectSafe(index, MFN_M18_MFN_M18_DPS_10);
  }
  MCP* getMCP_11(size_t index = 0) {
    return (MCP*)this->getObjectSafe(index, MFN_M18_MFN_M18_MCP_11);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M18_MFN_M18_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M18_MFN_M18_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M18_MFN_M18_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M18_MFN_M18_MFI_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFE_7(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M18_MFN_M18_MFE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPM1_9(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M18_MFN_M18_PM1_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDPS_10(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M18_MFN_M18_DPS_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMCP_11(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M18_MFN_M18_MCP_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M18_MFN_M18_ */
} /* namespace HL7_29 */
#endif /*  __MFN_M18_MFN_M18__29_H__ */
