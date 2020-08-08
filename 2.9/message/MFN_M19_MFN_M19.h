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


#ifndef __MFN_M19_MFN_M19__29_H__
#define __MFN_M19_MFN_M19__29_H__

#include "../../common/Util.h"
#include "../segment/CTR.h"
#include "../segment/ITM.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/PKG.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"
#include "../segment/VND.h"

namespace HL7_29 {

/* Internal structures/groups */
struct MFN_M19_MFN_M19_CONTRACT_RECORD; /* CONTRACT_RECORD */
struct MFN_M19_MFN_M19_MATERIAL_ITEM_RECORD; /* MATERIAL_ITEM_RECORD */
struct MFN_M19_MFN_M19_PURCHASING_VENDOR; /* PURCHASING_VENDOR */
struct MFN_M19_MFN_M19_PACKAGING; /* PACKAGING */

/*  */
struct MFN_M19_MFN_M19 : public HL7Message {
  MFN_M19_MFN_M19() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M19_MFN_M19_MSH_1,
    MFN_M19_MFN_M19_SFT_2,
    MFN_M19_MFN_M19_UAC_3,
    MFN_M19_MFN_M19_MFI_4,
    MFN_M19_MFN_M19_CTR_7,
    MFN_M19_MFN_M19_MFE_8,
    MFN_M19_MFN_M19_NTE_9,
    MFN_M19_MFN_M19_ITM_11,
    MFN_M19_MFN_M19_VND_13,
    MFN_M19_MFN_M19_PKG_14,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M19_MFN_M19"; }
  MFN_M19_MFN_M19* create() const { return new MFN_M19_MFN_M19(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M19_MFN_M19");
    addObject<MSH>(MFN_M19_MFN_M19_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(MFN_M19_MFN_M19_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(MFN_M19_MFN_M19_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MFI>(MFN_M19_MFN_M19_MFI_4, "MFI.4", HL7::initialized, HL7::repetition_off);
    addObject<CTR>(MFN_M19_MFN_M19_CTR_7, "CTR.7", HL7::initialized, HL7::repetition_off);
    addObject<MFE>(MFN_M19_MFN_M19_MFE_8, "MFE.8", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(MFN_M19_MFN_M19_NTE_9, "NTE.9", HL7::optional, HL7::repetition_on);
    addObject<ITM>(MFN_M19_MFN_M19_ITM_11, "ITM.11", HL7::initialized, HL7::repetition_off);
    addObject<VND>(MFN_M19_MFN_M19_VND_13, "VND.13", HL7::initialized, HL7::repetition_off);
    addObject<PKG>(MFN_M19_MFN_M19_PKG_14, "PKG.14", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M19_MFN_M19_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, MFN_M19_MFN_M19_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, MFN_M19_MFN_M19_UAC_3);
  }
  MFI* getMFI_4(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M19_MFN_M19_MFI_4);
  }
  CTR* getCTR_7(size_t index = 0) {
    return (CTR*)this->getObjectSafe(index, MFN_M19_MFN_M19_CTR_7);
  }
  MFE* getMFE_8(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M19_MFN_M19_MFE_8);
  }
  NTE* getNTE_9(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, MFN_M19_MFN_M19_NTE_9);
  }
  ITM* getITM_11(size_t index = 0) {
    return (ITM*)this->getObjectSafe(index, MFN_M19_MFN_M19_ITM_11);
  }
  VND* getVND_13(size_t index = 0) {
    return (VND*)this->getObjectSafe(index, MFN_M19_MFN_M19_VND_13);
  }
  PKG* getPKG_14(size_t index = 0) {
    return (PKG*)this->getObjectSafe(index, MFN_M19_MFN_M19_PKG_14);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M19_MFN_M19_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M19_MFN_M19_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M19_MFN_M19_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M19_MFN_M19_MFI_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTR_7(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M19_MFN_M19_CTR_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFE_8(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M19_MFN_M19_MFE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_9(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M19_MFN_M19_NTE_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isITM_11(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M19_MFN_M19_ITM_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVND_13(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M19_MFN_M19_VND_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPKG_14(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M19_MFN_M19_PKG_14) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M19_MFN_M19_ */
} /* namespace HL7_29 */
#endif /*  __MFN_M19_MFN_M19__29_H__ */
