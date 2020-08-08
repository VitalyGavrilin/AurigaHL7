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


#ifndef __MFN_M09_MFN_M09__29_H__
#define __MFN_M09_MFN_M09__29_H__

#include "../../common/Util.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"
#include "../segment/OM1.h"
#include "../segment/OM3.h"
#include "../segment/OM4.h"
#include "../segment/OMC.h"
#include "../segment/PRT.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct MFN_M09_MFN_M09_MF_TEST_CATEGORICAL; /* MF_TEST_CATEGORICAL */
struct MFN_M09_MFN_M09_MF_TEST_CAT_DETAIL; /* MF_TEST_CAT_DETAIL */

/*  */
struct MFN_M09_MFN_M09 : public HL7Message {
  MFN_M09_MFN_M09() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M09_MFN_M09_MSH_1,
    MFN_M09_MFN_M09_SFT_2,
    MFN_M09_MFN_M09_UAC_3,
    MFN_M09_MFN_M09_MFI_4,
    MFN_M09_MFN_M09_MFE_7,
    MFN_M09_MFN_M09_OM1_8,
    MFN_M09_MFN_M09_OMC_9,
    MFN_M09_MFN_M09_PRT_10,
    MFN_M09_MFN_M09_OM3_11,
    MFN_M09_MFN_M09_OM4_12,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M09_MFN_M09"; }
  MFN_M09_MFN_M09* create() const { return new MFN_M09_MFN_M09(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M09_MFN_M09");
    addObject<MSH>(MFN_M09_MFN_M09_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(MFN_M09_MFN_M09_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(MFN_M09_MFN_M09_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MFI>(MFN_M09_MFN_M09_MFI_4, "MFI.4", HL7::initialized, HL7::repetition_off);
    addObject<MFE>(MFN_M09_MFN_M09_MFE_7, "MFE.7", HL7::initialized, HL7::repetition_off);
    addObject<OM1>(MFN_M09_MFN_M09_OM1_8, "OM1.8", HL7::initialized, HL7::repetition_off);
    addObject<OMC>(MFN_M09_MFN_M09_OMC_9, "OMC.9", HL7::optional, HL7::repetition_on);
    addObject<PRT>(MFN_M09_MFN_M09_PRT_10, "PRT.10", HL7::optional, HL7::repetition_on);
    addObject<OM3>(MFN_M09_MFN_M09_OM3_11, "OM3.11", HL7::initialized, HL7::repetition_off);
    addObject<OM4>(MFN_M09_MFN_M09_OM4_12, "OM4.12", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M09_MFN_M09_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, MFN_M09_MFN_M09_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, MFN_M09_MFN_M09_UAC_3);
  }
  MFI* getMFI_4(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M09_MFN_M09_MFI_4);
  }
  MFE* getMFE_7(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M09_MFN_M09_MFE_7);
  }
  OM1* getOM1_8(size_t index = 0) {
    return (OM1*)this->getObjectSafe(index, MFN_M09_MFN_M09_OM1_8);
  }
  OMC* getOMC_9(size_t index = 0) {
    return (OMC*)this->getObjectSafe(index, MFN_M09_MFN_M09_OMC_9);
  }
  PRT* getPRT_10(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, MFN_M09_MFN_M09_PRT_10);
  }
  OM3* getOM3_11(size_t index = 0) {
    return (OM3*)this->getObjectSafe(index, MFN_M09_MFN_M09_OM3_11);
  }
  OM4* getOM4_12(size_t index = 0) {
    return (OM4*)this->getObjectSafe(index, MFN_M09_MFN_M09_OM4_12);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M09_MFN_M09_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M09_MFN_M09_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M09_MFN_M09_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M09_MFN_M09_MFI_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFE_7(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M09_MFN_M09_MFE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM1_8(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M09_MFN_M09_OM1_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOMC_9(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M09_MFN_M09_OMC_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_10(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M09_MFN_M09_PRT_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM3_11(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M09_MFN_M09_OM3_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM4_12(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M09_MFN_M09_OM4_12) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M09_MFN_M09_ */
} /* namespace HL7_29 */
#endif /*  __MFN_M09_MFN_M09__29_H__ */
