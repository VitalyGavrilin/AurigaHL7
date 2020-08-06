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


#ifndef __NMD_N02_NMD_N02__29_H__
#define __NMD_N02_NMD_N02__29_H__

#include "../../common/Util.h"
#include "../segment/MSH.h"
#include "../segment/NCK.h"
#include "../segment/NSC.h"
#include "../segment/NST.h"
#include "../segment/NTE.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct NMD_N02_NMD_N02_CLOCK_AND_STATS_WITH_NOTES; /* CLOCK_AND_STATS_WITH_NOTES */
struct NMD_N02_NMD_N02_CLOCK; /* CLOCK */
struct NMD_N02_NMD_N02_APP_STATS; /* APP_STATS */
struct NMD_N02_NMD_N02_APP_STATUS; /* APP_STATUS */

/*  */
struct NMD_N02_NMD_N02 : public HL7Message {
  NMD_N02_NMD_N02() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    NMD_N02_NMD_N02_MSH_1,
    NMD_N02_NMD_N02_SFT_2,
    NMD_N02_NMD_N02_UAC_3,
    NMD_N02_NMD_N02_NCK_8,
    NMD_N02_NMD_N02_NTE_9,
    NMD_N02_NMD_N02_NCK_10,
    NMD_N02_NMD_N02_NTE_11,
    NMD_N02_NMD_N02_NST_12,
    NMD_N02_NMD_N02_NTE_13,
    NMD_N02_NMD_N02_NCK_14,
    NMD_N02_NMD_N02_NTE_15,
    NMD_N02_NMD_N02_NST_16,
    NMD_N02_NMD_N02_NTE_17,
    NMD_N02_NMD_N02_NSC_18,
    NMD_N02_NMD_N02_NTE_19,
    FIELD_ID_MAX
  };

  const char* className() const { return "NMD_N02_NMD_N02"; }
  NMD_N02_NMD_N02* create() const { return new NMD_N02_NMD_N02(); }

 private:
  /* Initialize object */
  void init() {
    setName("NMD_N02_NMD_N02");
    addObject<MSH>(NMD_N02_NMD_N02_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(NMD_N02_NMD_N02_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(NMD_N02_NMD_N02_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<NCK>(NMD_N02_NMD_N02_NCK_8, "NCK.8", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(NMD_N02_NMD_N02_NTE_9, "NTE.9", HL7::optional, HL7::repetition_on);
    addObject<NCK>(NMD_N02_NMD_N02_NCK_10, "NCK.10", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(NMD_N02_NMD_N02_NTE_11, "NTE.11", HL7::optional, HL7::repetition_on);
    addObject<NST>(NMD_N02_NMD_N02_NST_12, "NST.12", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(NMD_N02_NMD_N02_NTE_13, "NTE.13", HL7::optional, HL7::repetition_on);
    addObject<NCK>(NMD_N02_NMD_N02_NCK_14, "NCK.14", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(NMD_N02_NMD_N02_NTE_15, "NTE.15", HL7::optional, HL7::repetition_on);
    addObject<NST>(NMD_N02_NMD_N02_NST_16, "NST.16", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(NMD_N02_NMD_N02_NTE_17, "NTE.17", HL7::optional, HL7::repetition_on);
    addObject<NSC>(NMD_N02_NMD_N02_NSC_18, "NSC.18", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(NMD_N02_NMD_N02_NTE_19, "NTE.19", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, NMD_N02_NMD_N02_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, NMD_N02_NMD_N02_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, NMD_N02_NMD_N02_UAC_3);
  }
  NCK* getNCK_8(size_t index = 0) {
    return (NCK*)this->getObjectSafe(index, NMD_N02_NMD_N02_NCK_8);
  }
  NTE* getNTE_9(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, NMD_N02_NMD_N02_NTE_9);
  }
  NCK* getNCK_10(size_t index = 0) {
    return (NCK*)this->getObjectSafe(index, NMD_N02_NMD_N02_NCK_10);
  }
  NTE* getNTE_11(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, NMD_N02_NMD_N02_NTE_11);
  }
  NST* getNST_12(size_t index = 0) {
    return (NST*)this->getObjectSafe(index, NMD_N02_NMD_N02_NST_12);
  }
  NTE* getNTE_13(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, NMD_N02_NMD_N02_NTE_13);
  }
  NCK* getNCK_14(size_t index = 0) {
    return (NCK*)this->getObjectSafe(index, NMD_N02_NMD_N02_NCK_14);
  }
  NTE* getNTE_15(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, NMD_N02_NMD_N02_NTE_15);
  }
  NST* getNST_16(size_t index = 0) {
    return (NST*)this->getObjectSafe(index, NMD_N02_NMD_N02_NST_16);
  }
  NTE* getNTE_17(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, NMD_N02_NMD_N02_NTE_17);
  }
  NSC* getNSC_18(size_t index = 0) {
    return (NSC*)this->getObjectSafe(index, NMD_N02_NMD_N02_NSC_18);
  }
  NTE* getNTE_19(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, NMD_N02_NMD_N02_NTE_19);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, NMD_N02_NMD_N02_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, NMD_N02_NMD_N02_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, NMD_N02_NMD_N02_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNCK_8(size_t index = 0) {
    try {
      return this->getObject(index, NMD_N02_NMD_N02_NCK_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_9(size_t index = 0) {
    try {
      return this->getObject(index, NMD_N02_NMD_N02_NTE_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNCK_10(size_t index = 0) {
    try {
      return this->getObject(index, NMD_N02_NMD_N02_NCK_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_11(size_t index = 0) {
    try {
      return this->getObject(index, NMD_N02_NMD_N02_NTE_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNST_12(size_t index = 0) {
    try {
      return this->getObject(index, NMD_N02_NMD_N02_NST_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_13(size_t index = 0) {
    try {
      return this->getObject(index, NMD_N02_NMD_N02_NTE_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNCK_14(size_t index = 0) {
    try {
      return this->getObject(index, NMD_N02_NMD_N02_NCK_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_15(size_t index = 0) {
    try {
      return this->getObject(index, NMD_N02_NMD_N02_NTE_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNST_16(size_t index = 0) {
    try {
      return this->getObject(index, NMD_N02_NMD_N02_NST_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_17(size_t index = 0) {
    try {
      return this->getObject(index, NMD_N02_NMD_N02_NTE_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNSC_18(size_t index = 0) {
    try {
      return this->getObject(index, NMD_N02_NMD_N02_NSC_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_19(size_t index = 0) {
    try {
      return this->getObject(index, NMD_N02_NMD_N02_NTE_19) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* NMD_N02_NMD_N02_ */
} /* namespace HL7_29 */
#endif /*  __NMD_N02_NMD_N02__29_H__ */
