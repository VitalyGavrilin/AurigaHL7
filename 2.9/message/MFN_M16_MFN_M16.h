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


#ifndef __MFN_M16_MFN_M16__29_H__
#define __MFN_M16_MFN_M16__29_H__

#include "../../common/Util.h"
#include "../segment/ILT.h"
#include "../segment/ITM.h"
#include "../segment/IVT.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/PCE.h"
#include "../segment/PKG.h"
#include "../segment/SFT.h"
#include "../segment/STZ.h"
#include "../segment/UAC.h"
#include "../segment/VND.h"

namespace HL7_29 {

/* Internal structures/groups */
struct MFN_M16_MFN_M16_MATERIAL_ITEM_RECORD; /* MATERIAL_ITEM_RECORD */
struct MFN_M16_MFN_M16_STERILIZATION; /* STERILIZATION */
struct MFN_M16_MFN_M16_PURCHASING_VENDOR; /* PURCHASING_VENDOR */
struct MFN_M16_MFN_M16_MATERIAL_LOCATION; /* MATERIAL_LOCATION */
struct MFN_M16_MFN_M16_PACKAGING; /* PACKAGING */
struct MFN_M16_MFN_M16_PACKAGING; /* PACKAGING */

/*  */
struct MFN_M16_MFN_M16 : public HL7Message {
  MFN_M16_MFN_M16() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M16_MFN_M16_MSH_1,
    MFN_M16_MFN_M16_SFT_2,
    MFN_M16_MFN_M16_UAC_3,
    MFN_M16_MFN_M16_MFI_4,
    MFN_M16_MFN_M16_ITM_9,
    MFN_M16_MFN_M16_MFE_10,
    MFN_M16_MFN_M16_NTE_11,
    MFN_M16_MFN_M16_NTE_12,
    MFN_M16_MFN_M16_STZ_13,
    MFN_M16_MFN_M16_NTE_14,
    MFN_M16_MFN_M16_STZ_15,
    MFN_M16_MFN_M16_VND_17,
    MFN_M16_MFN_M16_PCE_18,
    MFN_M16_MFN_M16_PKG_19,
    MFN_M16_MFN_M16_NTE_20,
    MFN_M16_MFN_M16_STZ_21,
    MFN_M16_MFN_M16_VND_23,
    MFN_M16_MFN_M16_ILT_24,
    MFN_M16_MFN_M16_IVT_25,
    MFN_M16_MFN_M16_NTE_26,
    MFN_M16_MFN_M16_PCE_27,
    MFN_M16_MFN_M16_PKG_28,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M16_MFN_M16"; }
  MFN_M16_MFN_M16* create() const { return new MFN_M16_MFN_M16(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M16_MFN_M16");
    addObject<MSH>(MFN_M16_MFN_M16_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(MFN_M16_MFN_M16_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(MFN_M16_MFN_M16_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MFI>(MFN_M16_MFN_M16_MFI_4, "MFI.4", HL7::initialized, HL7::repetition_off);
    addObject<ITM>(MFN_M16_MFN_M16_ITM_9, "ITM.9", HL7::initialized, HL7::repetition_off);
    addObject<MFE>(MFN_M16_MFN_M16_MFE_10, "MFE.10", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(MFN_M16_MFN_M16_NTE_11, "NTE.11", HL7::optional, HL7::repetition_on);
    addObject<NTE>(MFN_M16_MFN_M16_NTE_12, "NTE.12", HL7::optional, HL7::repetition_on);
    addObject<STZ>(MFN_M16_MFN_M16_STZ_13, "STZ.13", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(MFN_M16_MFN_M16_NTE_14, "NTE.14", HL7::optional, HL7::repetition_on);
    addObject<STZ>(MFN_M16_MFN_M16_STZ_15, "STZ.15", HL7::initialized, HL7::repetition_off);
    addObject<VND>(MFN_M16_MFN_M16_VND_17, "VND.17", HL7::initialized, HL7::repetition_off);
    addObject<PCE>(MFN_M16_MFN_M16_PCE_18, "PCE.18", HL7::optional, HL7::repetition_on);
    addObject<PKG>(MFN_M16_MFN_M16_PKG_19, "PKG.19", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(MFN_M16_MFN_M16_NTE_20, "NTE.20", HL7::optional, HL7::repetition_on);
    addObject<STZ>(MFN_M16_MFN_M16_STZ_21, "STZ.21", HL7::initialized, HL7::repetition_off);
    addObject<VND>(MFN_M16_MFN_M16_VND_23, "VND.23", HL7::initialized, HL7::repetition_off);
    addObject<ILT>(MFN_M16_MFN_M16_ILT_24, "ILT.24", HL7::optional, HL7::repetition_on);
    addObject<IVT>(MFN_M16_MFN_M16_IVT_25, "IVT.25", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(MFN_M16_MFN_M16_NTE_26, "NTE.26", HL7::optional, HL7::repetition_on);
    addObject<PCE>(MFN_M16_MFN_M16_PCE_27, "PCE.27", HL7::optional, HL7::repetition_on);
    addObject<PKG>(MFN_M16_MFN_M16_PKG_28, "PKG.28", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M16_MFN_M16_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, MFN_M16_MFN_M16_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, MFN_M16_MFN_M16_UAC_3);
  }
  MFI* getMFI_4(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M16_MFN_M16_MFI_4);
  }
  ITM* getITM_9(size_t index = 0) {
    return (ITM*)this->getObjectSafe(index, MFN_M16_MFN_M16_ITM_9);
  }
  MFE* getMFE_10(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M16_MFN_M16_MFE_10);
  }
  NTE* getNTE_11(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, MFN_M16_MFN_M16_NTE_11);
  }
  NTE* getNTE_12(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, MFN_M16_MFN_M16_NTE_12);
  }
  STZ* getSTZ_13(size_t index = 0) {
    return (STZ*)this->getObjectSafe(index, MFN_M16_MFN_M16_STZ_13);
  }
  NTE* getNTE_14(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, MFN_M16_MFN_M16_NTE_14);
  }
  STZ* getSTZ_15(size_t index = 0) {
    return (STZ*)this->getObjectSafe(index, MFN_M16_MFN_M16_STZ_15);
  }
  VND* getVND_17(size_t index = 0) {
    return (VND*)this->getObjectSafe(index, MFN_M16_MFN_M16_VND_17);
  }
  PCE* getPCE_18(size_t index = 0) {
    return (PCE*)this->getObjectSafe(index, MFN_M16_MFN_M16_PCE_18);
  }
  PKG* getPKG_19(size_t index = 0) {
    return (PKG*)this->getObjectSafe(index, MFN_M16_MFN_M16_PKG_19);
  }
  NTE* getNTE_20(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, MFN_M16_MFN_M16_NTE_20);
  }
  STZ* getSTZ_21(size_t index = 0) {
    return (STZ*)this->getObjectSafe(index, MFN_M16_MFN_M16_STZ_21);
  }
  VND* getVND_23(size_t index = 0) {
    return (VND*)this->getObjectSafe(index, MFN_M16_MFN_M16_VND_23);
  }
  ILT* getILT_24(size_t index = 0) {
    return (ILT*)this->getObjectSafe(index, MFN_M16_MFN_M16_ILT_24);
  }
  IVT* getIVT_25(size_t index = 0) {
    return (IVT*)this->getObjectSafe(index, MFN_M16_MFN_M16_IVT_25);
  }
  NTE* getNTE_26(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, MFN_M16_MFN_M16_NTE_26);
  }
  PCE* getPCE_27(size_t index = 0) {
    return (PCE*)this->getObjectSafe(index, MFN_M16_MFN_M16_PCE_27);
  }
  PKG* getPKG_28(size_t index = 0) {
    return (PKG*)this->getObjectSafe(index, MFN_M16_MFN_M16_PKG_28);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M16_MFN_M16_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M16_MFN_M16_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M16_MFN_M16_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M16_MFN_M16_MFI_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isITM_9(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M16_MFN_M16_ITM_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFE_10(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M16_MFN_M16_MFE_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_11(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M16_MFN_M16_NTE_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_12(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M16_MFN_M16_NTE_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSTZ_13(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M16_MFN_M16_STZ_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_14(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M16_MFN_M16_NTE_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSTZ_15(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M16_MFN_M16_STZ_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVND_17(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M16_MFN_M16_VND_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPCE_18(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M16_MFN_M16_PCE_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPKG_19(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M16_MFN_M16_PKG_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_20(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M16_MFN_M16_NTE_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSTZ_21(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M16_MFN_M16_STZ_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVND_23(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M16_MFN_M16_VND_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isILT_24(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M16_MFN_M16_ILT_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIVT_25(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M16_MFN_M16_IVT_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_26(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M16_MFN_M16_NTE_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPCE_27(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M16_MFN_M16_PCE_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPKG_28(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M16_MFN_M16_PKG_28) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M16_MFN_M16_ */
} /* namespace HL7_29 */
#endif /*  __MFN_M16_MFN_M16__29_H__ */
