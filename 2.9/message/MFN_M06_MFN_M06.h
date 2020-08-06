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


#ifndef __MFN_M06_MFN_M06__29_H__
#define __MFN_M06_MFN_M06__29_H__

#include "../../common/Util.h"
#include "../segment/CM0.h"
#include "../segment/CM1.h"
#include "../segment/CM2.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct MFN_M06_MFN_M06_MF_CLIN_STUDY; /* MF_CLIN_STUDY */
struct MFN_M06_MFN_M06_MF_PHASE_SCHED_DETAIL; /* MF_PHASE_SCHED_DETAIL */

/*  */
struct MFN_M06_MFN_M06 : public HL7Message {
  MFN_M06_MFN_M06() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M06_MFN_M06_MSH_1,
    MFN_M06_MFN_M06_SFT_2,
    MFN_M06_MFN_M06_UAC_3,
    MFN_M06_MFN_M06_MFI_4,
    MFN_M06_MFN_M06_CM0_7,
    MFN_M06_MFN_M06_MFE_8,
    MFN_M06_MFN_M06_CM1_9,
    MFN_M06_MFN_M06_CM2_10,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M06_MFN_M06"; }
  MFN_M06_MFN_M06* create() const { return new MFN_M06_MFN_M06(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M06_MFN_M06");
    addObject<MSH>(MFN_M06_MFN_M06_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(MFN_M06_MFN_M06_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(MFN_M06_MFN_M06_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MFI>(MFN_M06_MFN_M06_MFI_4, "MFI.4", HL7::initialized, HL7::repetition_off);
    addObject<CM0>(MFN_M06_MFN_M06_CM0_7, "CM0.7", HL7::initialized, HL7::repetition_off);
    addObject<MFE>(MFN_M06_MFN_M06_MFE_8, "MFE.8", HL7::initialized, HL7::repetition_off);
    addObject<CM1>(MFN_M06_MFN_M06_CM1_9, "CM1.9", HL7::initialized, HL7::repetition_off);
    addObject<CM2>(MFN_M06_MFN_M06_CM2_10, "CM2.10", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M06_MFN_M06_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, MFN_M06_MFN_M06_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, MFN_M06_MFN_M06_UAC_3);
  }
  MFI* getMFI_4(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M06_MFN_M06_MFI_4);
  }
  CM0* getCM0_7(size_t index = 0) {
    return (CM0*)this->getObjectSafe(index, MFN_M06_MFN_M06_CM0_7);
  }
  MFE* getMFE_8(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M06_MFN_M06_MFE_8);
  }
  CM1* getCM1_9(size_t index = 0) {
    return (CM1*)this->getObjectSafe(index, MFN_M06_MFN_M06_CM1_9);
  }
  CM2* getCM2_10(size_t index = 0) {
    return (CM2*)this->getObjectSafe(index, MFN_M06_MFN_M06_CM2_10);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M06_MFN_M06_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M06_MFN_M06_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M06_MFN_M06_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M06_MFN_M06_MFI_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCM0_7(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M06_MFN_M06_CM0_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFE_8(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M06_MFN_M06_MFE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCM1_9(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M06_MFN_M06_CM1_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCM2_10(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M06_MFN_M06_CM2_10) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M06_MFN_M06_ */
} /* namespace HL7_29 */
#endif /*  __MFN_M06_MFN_M06__29_H__ */
