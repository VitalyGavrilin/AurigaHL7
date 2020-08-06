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


#ifndef __MFN_M11_MFN_M11__29_H__
#define __MFN_M11_MFN_M11__29_H__

#include "../../common/Util.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"
#include "../segment/OM1.h"
#include "../segment/OM2.h"
#include "../segment/OM6.h"
#include "../segment/OMC.h"
#include "../segment/PRT.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct MFN_M11_MFN_M11_MF_TEST_CALCULATED; /* MF_TEST_CALCULATED */
struct MFN_M11_MFN_M11_MF_TEST_CALC_DETAIL; /* MF_TEST_CALC_DETAIL */

/*  */
struct MFN_M11_MFN_M11 : public HL7Message {
  MFN_M11_MFN_M11() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M11_MFN_M11_MSH_1,
    MFN_M11_MFN_M11_SFT_2,
    MFN_M11_MFN_M11_UAC_3,
    MFN_M11_MFN_M11_MFI_4,
    MFN_M11_MFN_M11_MFE_7,
    MFN_M11_MFN_M11_OM1_8,
    MFN_M11_MFN_M11_OMC_9,
    MFN_M11_MFN_M11_PRT_10,
    MFN_M11_MFN_M11_OM2_11,
    MFN_M11_MFN_M11_OM6_12,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M11_MFN_M11"; }
  MFN_M11_MFN_M11* create() const { return new MFN_M11_MFN_M11(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M11_MFN_M11");
    addObject<MSH>(MFN_M11_MFN_M11_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(MFN_M11_MFN_M11_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(MFN_M11_MFN_M11_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MFI>(MFN_M11_MFN_M11_MFI_4, "MFI.4", HL7::initialized, HL7::repetition_off);
    addObject<MFE>(MFN_M11_MFN_M11_MFE_7, "MFE.7", HL7::initialized, HL7::repetition_off);
    addObject<OM1>(MFN_M11_MFN_M11_OM1_8, "OM1.8", HL7::initialized, HL7::repetition_off);
    addObject<OMC>(MFN_M11_MFN_M11_OMC_9, "OMC.9", HL7::optional, HL7::repetition_on);
    addObject<PRT>(MFN_M11_MFN_M11_PRT_10, "PRT.10", HL7::optional, HL7::repetition_on);
    addObject<OM2>(MFN_M11_MFN_M11_OM2_11, "OM2.11", HL7::initialized, HL7::repetition_off);
    addObject<OM6>(MFN_M11_MFN_M11_OM6_12, "OM6.12", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M11_MFN_M11_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, MFN_M11_MFN_M11_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, MFN_M11_MFN_M11_UAC_3);
  }
  MFI* getMFI_4(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M11_MFN_M11_MFI_4);
  }
  MFE* getMFE_7(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M11_MFN_M11_MFE_7);
  }
  OM1* getOM1_8(size_t index = 0) {
    return (OM1*)this->getObjectSafe(index, MFN_M11_MFN_M11_OM1_8);
  }
  OMC* getOMC_9(size_t index = 0) {
    return (OMC*)this->getObjectSafe(index, MFN_M11_MFN_M11_OMC_9);
  }
  PRT* getPRT_10(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, MFN_M11_MFN_M11_PRT_10);
  }
  OM2* getOM2_11(size_t index = 0) {
    return (OM2*)this->getObjectSafe(index, MFN_M11_MFN_M11_OM2_11);
  }
  OM6* getOM6_12(size_t index = 0) {
    return (OM6*)this->getObjectSafe(index, MFN_M11_MFN_M11_OM6_12);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_MFN_M11_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_MFN_M11_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_MFN_M11_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_MFN_M11_MFI_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFE_7(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_MFN_M11_MFE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM1_8(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_MFN_M11_OM1_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOMC_9(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_MFN_M11_OMC_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_10(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_MFN_M11_PRT_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM2_11(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_MFN_M11_OM2_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM6_12(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_MFN_M11_OM6_12) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M11_MFN_M11_ */
} /* namespace HL7_29 */
#endif /*  __MFN_M11_MFN_M11__29_H__ */
