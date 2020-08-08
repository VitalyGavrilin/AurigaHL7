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


#ifndef __MFN_M07_MFN_M07__29_H__
#define __MFN_M07_MFN_M07__29_H__

#include "../../common/Util.h"
#include "../segment/CM0.h"
#include "../segment/CM2.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct MFN_M07_MFN_M07_MF_CLIN_STUDY_SCHED; /* MF_CLIN_STUDY_SCHED */

/*  */
struct MFN_M07_MFN_M07 : public HL7Message {
  MFN_M07_MFN_M07() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M07_MFN_M07_MSH_1,
    MFN_M07_MFN_M07_SFT_2,
    MFN_M07_MFN_M07_UAC_3,
    MFN_M07_MFN_M07_MFI_4,
    MFN_M07_MFN_M07_CM0_6,
    MFN_M07_MFN_M07_CM2_7,
    MFN_M07_MFN_M07_MFE_8,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M07_MFN_M07"; }
  MFN_M07_MFN_M07* create() const { return new MFN_M07_MFN_M07(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M07_MFN_M07");
    addObject<MSH>(MFN_M07_MFN_M07_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(MFN_M07_MFN_M07_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(MFN_M07_MFN_M07_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MFI>(MFN_M07_MFN_M07_MFI_4, "MFI.4", HL7::initialized, HL7::repetition_off);
    addObject<CM0>(MFN_M07_MFN_M07_CM0_6, "CM0.6", HL7::initialized, HL7::repetition_off);
    addObject<CM2>(MFN_M07_MFN_M07_CM2_7, "CM2.7", HL7::optional, HL7::repetition_on);
    addObject<MFE>(MFN_M07_MFN_M07_MFE_8, "MFE.8", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M07_MFN_M07_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, MFN_M07_MFN_M07_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, MFN_M07_MFN_M07_UAC_3);
  }
  MFI* getMFI_4(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M07_MFN_M07_MFI_4);
  }
  CM0* getCM0_6(size_t index = 0) {
    return (CM0*)this->getObjectSafe(index, MFN_M07_MFN_M07_CM0_6);
  }
  CM2* getCM2_7(size_t index = 0) {
    return (CM2*)this->getObjectSafe(index, MFN_M07_MFN_M07_CM2_7);
  }
  MFE* getMFE_8(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M07_MFN_M07_MFE_8);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M07_MFN_M07_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M07_MFN_M07_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M07_MFN_M07_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M07_MFN_M07_MFI_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCM0_6(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M07_MFN_M07_CM0_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCM2_7(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M07_MFN_M07_CM2_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFE_8(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M07_MFN_M07_MFE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M07_MFN_M07_ */
} /* namespace HL7_29 */
#endif /*  __MFN_M07_MFN_M07__29_H__ */
