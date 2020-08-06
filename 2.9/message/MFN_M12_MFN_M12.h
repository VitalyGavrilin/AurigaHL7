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


#ifndef __MFN_M12_MFN_M12__29_H__
#define __MFN_M12_MFN_M12__29_H__

#include "../../common/Util.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"
#include "../segment/OM1.h"
#include "../segment/OM7.h"
#include "../segment/PRT.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct MFN_M12_MFN_M12_MF_OBS_ATTRIBUTES; /* MF_OBS_ATTRIBUTES */
struct MFN_M12_MFN_M12_MF_OBS_OTHER_ATTRIBUTES; /* MF_OBS_OTHER_ATTRIBUTES */

/*  */
struct MFN_M12_MFN_M12 : public HL7Message {
  MFN_M12_MFN_M12() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M12_MFN_M12_MSH_1,
    MFN_M12_MFN_M12_SFT_2,
    MFN_M12_MFN_M12_UAC_3,
    MFN_M12_MFN_M12_MFI_4,
    MFN_M12_MFN_M12_MFE_7,
    MFN_M12_MFN_M12_OM1_8,
    MFN_M12_MFN_M12_PRT_9,
    MFN_M12_MFN_M12_OM7_10,
    MFN_M12_MFN_M12_PRT_11,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M12_MFN_M12"; }
  MFN_M12_MFN_M12* create() const { return new MFN_M12_MFN_M12(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M12_MFN_M12");
    addObject<MSH>(MFN_M12_MFN_M12_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(MFN_M12_MFN_M12_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(MFN_M12_MFN_M12_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MFI>(MFN_M12_MFN_M12_MFI_4, "MFI.4", HL7::initialized, HL7::repetition_off);
    addObject<MFE>(MFN_M12_MFN_M12_MFE_7, "MFE.7", HL7::initialized, HL7::repetition_off);
    addObject<OM1>(MFN_M12_MFN_M12_OM1_8, "OM1.8", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(MFN_M12_MFN_M12_PRT_9, "PRT.9", HL7::optional, HL7::repetition_on);
    addObject<OM7>(MFN_M12_MFN_M12_OM7_10, "OM7.10", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(MFN_M12_MFN_M12_PRT_11, "PRT.11", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M12_MFN_M12_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, MFN_M12_MFN_M12_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, MFN_M12_MFN_M12_UAC_3);
  }
  MFI* getMFI_4(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M12_MFN_M12_MFI_4);
  }
  MFE* getMFE_7(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M12_MFN_M12_MFE_7);
  }
  OM1* getOM1_8(size_t index = 0) {
    return (OM1*)this->getObjectSafe(index, MFN_M12_MFN_M12_OM1_8);
  }
  PRT* getPRT_9(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, MFN_M12_MFN_M12_PRT_9);
  }
  OM7* getOM7_10(size_t index = 0) {
    return (OM7*)this->getObjectSafe(index, MFN_M12_MFN_M12_OM7_10);
  }
  PRT* getPRT_11(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, MFN_M12_MFN_M12_PRT_11);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M12_MFN_M12_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M12_MFN_M12_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M12_MFN_M12_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M12_MFN_M12_MFI_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFE_7(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M12_MFN_M12_MFE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM1_8(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M12_MFN_M12_OM1_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_9(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M12_MFN_M12_PRT_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM7_10(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M12_MFN_M12_OM7_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_11(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M12_MFN_M12_PRT_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M12_MFN_M12_ */
} /* namespace HL7_29 */
#endif /*  __MFN_M12_MFN_M12__29_H__ */
