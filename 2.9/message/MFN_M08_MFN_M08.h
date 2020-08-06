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


#ifndef __MFN_M08_MFN_M08__29_H__
#define __MFN_M08_MFN_M08__29_H__

#include "../../common/Util.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"
#include "../segment/OM1.h"
#include "../segment/OM2.h"
#include "../segment/OM3.h"
#include "../segment/OM4.h"
#include "../segment/OMC.h"
#include "../segment/PRT.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct MFN_M08_MFN_M08_MF_TEST_NUMERIC; /* MF_TEST_NUMERIC */

/*  */
struct MFN_M08_MFN_M08 : public HL7Message {
  MFN_M08_MFN_M08() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M08_MFN_M08_MSH_1,
    MFN_M08_MFN_M08_SFT_2,
    MFN_M08_MFN_M08_UAC_3,
    MFN_M08_MFN_M08_MFI_4,
    MFN_M08_MFN_M08_MFE_6,
    MFN_M08_MFN_M08_OM1_7,
    MFN_M08_MFN_M08_OM2_8,
    MFN_M08_MFN_M08_OM3_9,
    MFN_M08_MFN_M08_OM4_10,
    MFN_M08_MFN_M08_OMC_11,
    MFN_M08_MFN_M08_PRT_12,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M08_MFN_M08"; }
  MFN_M08_MFN_M08* create() const { return new MFN_M08_MFN_M08(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M08_MFN_M08");
    addObject<MSH>(MFN_M08_MFN_M08_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(MFN_M08_MFN_M08_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(MFN_M08_MFN_M08_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MFI>(MFN_M08_MFN_M08_MFI_4, "MFI.4", HL7::initialized, HL7::repetition_off);
    addObject<MFE>(MFN_M08_MFN_M08_MFE_6, "MFE.6", HL7::initialized, HL7::repetition_off);
    addObject<OM1>(MFN_M08_MFN_M08_OM1_7, "OM1.7", HL7::initialized, HL7::repetition_off);
    addObject<OM2>(MFN_M08_MFN_M08_OM2_8, "OM2.8", HL7::optional, HL7::repetition_off);
    addObject<OM3>(MFN_M08_MFN_M08_OM3_9, "OM3.9", HL7::optional, HL7::repetition_off);
    addObject<OM4>(MFN_M08_MFN_M08_OM4_10, "OM4.10", HL7::optional, HL7::repetition_on);
    addObject<OMC>(MFN_M08_MFN_M08_OMC_11, "OMC.11", HL7::optional, HL7::repetition_on);
    addObject<PRT>(MFN_M08_MFN_M08_PRT_12, "PRT.12", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M08_MFN_M08_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, MFN_M08_MFN_M08_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, MFN_M08_MFN_M08_UAC_3);
  }
  MFI* getMFI_4(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M08_MFN_M08_MFI_4);
  }
  MFE* getMFE_6(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M08_MFN_M08_MFE_6);
  }
  OM1* getOM1_7(size_t index = 0) {
    return (OM1*)this->getObjectSafe(index, MFN_M08_MFN_M08_OM1_7);
  }
  OM2* getOM2_8(size_t index = 0) {
    return (OM2*)this->getObjectSafe(index, MFN_M08_MFN_M08_OM2_8);
  }
  OM3* getOM3_9(size_t index = 0) {
    return (OM3*)this->getObjectSafe(index, MFN_M08_MFN_M08_OM3_9);
  }
  OM4* getOM4_10(size_t index = 0) {
    return (OM4*)this->getObjectSafe(index, MFN_M08_MFN_M08_OM4_10);
  }
  OMC* getOMC_11(size_t index = 0) {
    return (OMC*)this->getObjectSafe(index, MFN_M08_MFN_M08_OMC_11);
  }
  PRT* getPRT_12(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, MFN_M08_MFN_M08_PRT_12);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M08_MFN_M08_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M08_MFN_M08_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M08_MFN_M08_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M08_MFN_M08_MFI_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFE_6(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M08_MFN_M08_MFE_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM1_7(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M08_MFN_M08_OM1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM2_8(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M08_MFN_M08_OM2_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM3_9(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M08_MFN_M08_OM3_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM4_10(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M08_MFN_M08_OM4_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOMC_11(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M08_MFN_M08_OMC_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_12(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M08_MFN_M08_PRT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M08_MFN_M08_ */
} /* namespace HL7_29 */
#endif /*  __MFN_M08_MFN_M08__29_H__ */
