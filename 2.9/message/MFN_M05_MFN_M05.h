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


#ifndef __MFN_M05_MFN_M05__29_H__
#define __MFN_M05_MFN_M05__29_H__

#include "../../common/Util.h"
#include "../segment/LCC.h"
#include "../segment/LCH.h"
#include "../segment/LDP.h"
#include "../segment/LOC.h"
#include "../segment/LRL.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct MFN_M05_MFN_M05_MF_LOCATION; /* MF_LOCATION */
struct MFN_M05_MFN_M05_MF_LOC_DEPT; /* MF_LOC_DEPT */

/*  */
struct MFN_M05_MFN_M05 : public HL7Message {
  MFN_M05_MFN_M05() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M05_MFN_M05_MSH_1,
    MFN_M05_MFN_M05_SFT_2,
    MFN_M05_MFN_M05_UAC_3,
    MFN_M05_MFN_M05_MFI_4,
    MFN_M05_MFN_M05_LCH_7,
    MFN_M05_MFN_M05_LOC_8,
    MFN_M05_MFN_M05_LRL_9,
    MFN_M05_MFN_M05_MFE_10,
    MFN_M05_MFN_M05_LCC_11,
    MFN_M05_MFN_M05_LCH_12,
    MFN_M05_MFN_M05_LDP_13,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M05_MFN_M05"; }
  MFN_M05_MFN_M05* create() const { return new MFN_M05_MFN_M05(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M05_MFN_M05");
    addObject<MSH>(MFN_M05_MFN_M05_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(MFN_M05_MFN_M05_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(MFN_M05_MFN_M05_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MFI>(MFN_M05_MFN_M05_MFI_4, "MFI.4", HL7::initialized, HL7::repetition_off);
    addObject<LCH>(MFN_M05_MFN_M05_LCH_7, "LCH.7", HL7::optional, HL7::repetition_on);
    addObject<LOC>(MFN_M05_MFN_M05_LOC_8, "LOC.8", HL7::initialized, HL7::repetition_off);
    addObject<LRL>(MFN_M05_MFN_M05_LRL_9, "LRL.9", HL7::optional, HL7::repetition_on);
    addObject<MFE>(MFN_M05_MFN_M05_MFE_10, "MFE.10", HL7::initialized, HL7::repetition_off);
    addObject<LCC>(MFN_M05_MFN_M05_LCC_11, "LCC.11", HL7::optional, HL7::repetition_on);
    addObject<LCH>(MFN_M05_MFN_M05_LCH_12, "LCH.12", HL7::optional, HL7::repetition_on);
    addObject<LDP>(MFN_M05_MFN_M05_LDP_13, "LDP.13", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M05_MFN_M05_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, MFN_M05_MFN_M05_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, MFN_M05_MFN_M05_UAC_3);
  }
  MFI* getMFI_4(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M05_MFN_M05_MFI_4);
  }
  LCH* getLCH_7(size_t index = 0) {
    return (LCH*)this->getObjectSafe(index, MFN_M05_MFN_M05_LCH_7);
  }
  LOC* getLOC_8(size_t index = 0) {
    return (LOC*)this->getObjectSafe(index, MFN_M05_MFN_M05_LOC_8);
  }
  LRL* getLRL_9(size_t index = 0) {
    return (LRL*)this->getObjectSafe(index, MFN_M05_MFN_M05_LRL_9);
  }
  MFE* getMFE_10(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M05_MFN_M05_MFE_10);
  }
  LCC* getLCC_11(size_t index = 0) {
    return (LCC*)this->getObjectSafe(index, MFN_M05_MFN_M05_LCC_11);
  }
  LCH* getLCH_12(size_t index = 0) {
    return (LCH*)this->getObjectSafe(index, MFN_M05_MFN_M05_LCH_12);
  }
  LDP* getLDP_13(size_t index = 0) {
    return (LDP*)this->getObjectSafe(index, MFN_M05_MFN_M05_LDP_13);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M05_MFN_M05_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M05_MFN_M05_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M05_MFN_M05_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M05_MFN_M05_MFI_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isLCH_7(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M05_MFN_M05_LCH_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isLOC_8(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M05_MFN_M05_LOC_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isLRL_9(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M05_MFN_M05_LRL_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFE_10(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M05_MFN_M05_MFE_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isLCC_11(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M05_MFN_M05_LCC_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isLCH_12(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M05_MFN_M05_LCH_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isLDP_13(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M05_MFN_M05_LDP_13) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M05_MFN_M05_ */
} /* namespace HL7_29 */
#endif /*  __MFN_M05_MFN_M05__29_H__ */
