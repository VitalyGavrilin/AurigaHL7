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


#ifndef __BRT_O32_BRT_O32__29_H__
#define __BRT_O32_BRT_O32__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/BPO.h"
#include "../segment/BTX.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/SFT.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct BRT_O32_BRT_O32_RESPONSE; /* RESPONSE */
struct BRT_O32_BRT_O32_PATIENT; /* PATIENT */
struct BRT_O32_BRT_O32_ORDER; /* ORDER */
struct BRT_O32_BRT_O32_TIMING; /* TIMING */

/*  */
struct BRT_O32_BRT_O32 : public HL7Message {
  BRT_O32_BRT_O32() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    BRT_O32_BRT_O32_MSH_1,
    BRT_O32_BRT_O32_MSA_2,
    BRT_O32_BRT_O32_ARV_3,
    BRT_O32_BRT_O32_ERR_4,
    BRT_O32_BRT_O32_SFT_5,
    BRT_O32_BRT_O32_UAC_6,
    BRT_O32_BRT_O32_NTE_7,
    BRT_O32_BRT_O32_ARV_11,
    BRT_O32_BRT_O32_PID_12,
    BRT_O32_BRT_O32_PRT_13,
    BRT_O32_BRT_O32_ARV_14,
    BRT_O32_BRT_O32_PID_15,
    BRT_O32_BRT_O32_PRT_16,
    BRT_O32_BRT_O32_BPO_18,
    BRT_O32_BRT_O32_BTX_19,
    BRT_O32_BRT_O32_ORC_20,
    BRT_O32_BRT_O32_PRT_21,
    BRT_O32_BRT_O32_TQ1_22,
    BRT_O32_BRT_O32_TQ2_23,
    FIELD_ID_MAX
  };

  const char* className() const { return "BRT_O32_BRT_O32"; }
  BRT_O32_BRT_O32* create() const { return new BRT_O32_BRT_O32(); }

 private:
  /* Initialize object */
  void init() {
    setName("BRT_O32_BRT_O32");
    addObject<MSH>(BRT_O32_BRT_O32_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<MSA>(BRT_O32_BRT_O32_MSA_2, "MSA.2", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(BRT_O32_BRT_O32_ARV_3, "ARV.3", HL7::optional, HL7::repetition_on);
    addObject<ERR>(BRT_O32_BRT_O32_ERR_4, "ERR.4", HL7::optional, HL7::repetition_on);
    addObject<SFT>(BRT_O32_BRT_O32_SFT_5, "SFT.5", HL7::optional, HL7::repetition_on);
    addObject<UAC>(BRT_O32_BRT_O32_UAC_6, "UAC.6", HL7::optional, HL7::repetition_off);
    addObject<NTE>(BRT_O32_BRT_O32_NTE_7, "NTE.7", HL7::optional, HL7::repetition_on);
    addObject<ARV>(BRT_O32_BRT_O32_ARV_11, "ARV.11", HL7::optional, HL7::repetition_on);
    addObject<PID>(BRT_O32_BRT_O32_PID_12, "PID.12", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(BRT_O32_BRT_O32_PRT_13, "PRT.13", HL7::optional, HL7::repetition_on);
    addObject<ARV>(BRT_O32_BRT_O32_ARV_14, "ARV.14", HL7::optional, HL7::repetition_on);
    addObject<PID>(BRT_O32_BRT_O32_PID_15, "PID.15", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(BRT_O32_BRT_O32_PRT_16, "PRT.16", HL7::optional, HL7::repetition_on);
    addObject<BPO>(BRT_O32_BRT_O32_BPO_18, "BPO.18", HL7::optional, HL7::repetition_off);
    addObject<BTX>(BRT_O32_BRT_O32_BTX_19, "BTX.19", HL7::optional, HL7::repetition_on);
    addObject<ORC>(BRT_O32_BRT_O32_ORC_20, "ORC.20", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(BRT_O32_BRT_O32_PRT_21, "PRT.21", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(BRT_O32_BRT_O32_TQ1_22, "TQ1.22", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(BRT_O32_BRT_O32_TQ2_23, "TQ2.23", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, BRT_O32_BRT_O32_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, BRT_O32_BRT_O32_MSA_2);
  }
  ARV* getARV_3(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, BRT_O32_BRT_O32_ARV_3);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, BRT_O32_BRT_O32_ERR_4);
  }
  SFT* getSFT_5(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, BRT_O32_BRT_O32_SFT_5);
  }
  UAC* getUAC_6(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, BRT_O32_BRT_O32_UAC_6);
  }
  NTE* getNTE_7(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, BRT_O32_BRT_O32_NTE_7);
  }
  ARV* getARV_11(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, BRT_O32_BRT_O32_ARV_11);
  }
  PID* getPID_12(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, BRT_O32_BRT_O32_PID_12);
  }
  PRT* getPRT_13(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, BRT_O32_BRT_O32_PRT_13);
  }
  ARV* getARV_14(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, BRT_O32_BRT_O32_ARV_14);
  }
  PID* getPID_15(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, BRT_O32_BRT_O32_PID_15);
  }
  PRT* getPRT_16(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, BRT_O32_BRT_O32_PRT_16);
  }
  BPO* getBPO_18(size_t index = 0) {
    return (BPO*)this->getObjectSafe(index, BRT_O32_BRT_O32_BPO_18);
  }
  BTX* getBTX_19(size_t index = 0) {
    return (BTX*)this->getObjectSafe(index, BRT_O32_BRT_O32_BTX_19);
  }
  ORC* getORC_20(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, BRT_O32_BRT_O32_ORC_20);
  }
  PRT* getPRT_21(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, BRT_O32_BRT_O32_PRT_21);
  }
  TQ1* getTQ1_22(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, BRT_O32_BRT_O32_TQ1_22);
  }
  TQ2* getTQ2_23(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, BRT_O32_BRT_O32_TQ2_23);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, BRT_O32_BRT_O32_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, BRT_O32_BRT_O32_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_3(size_t index = 0) {
    try {
      return this->getObject(index, BRT_O32_BRT_O32_ARV_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, BRT_O32_BRT_O32_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_5(size_t index = 0) {
    try {
      return this->getObject(index, BRT_O32_BRT_O32_SFT_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_6(size_t index = 0) {
    try {
      return this->getObject(index, BRT_O32_BRT_O32_UAC_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_7(size_t index = 0) {
    try {
      return this->getObject(index, BRT_O32_BRT_O32_NTE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_11(size_t index = 0) {
    try {
      return this->getObject(index, BRT_O32_BRT_O32_ARV_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_12(size_t index = 0) {
    try {
      return this->getObject(index, BRT_O32_BRT_O32_PID_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_13(size_t index = 0) {
    try {
      return this->getObject(index, BRT_O32_BRT_O32_PRT_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_14(size_t index = 0) {
    try {
      return this->getObject(index, BRT_O32_BRT_O32_ARV_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_15(size_t index = 0) {
    try {
      return this->getObject(index, BRT_O32_BRT_O32_PID_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_16(size_t index = 0) {
    try {
      return this->getObject(index, BRT_O32_BRT_O32_PRT_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBPO_18(size_t index = 0) {
    try {
      return this->getObject(index, BRT_O32_BRT_O32_BPO_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBTX_19(size_t index = 0) {
    try {
      return this->getObject(index, BRT_O32_BRT_O32_BTX_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_20(size_t index = 0) {
    try {
      return this->getObject(index, BRT_O32_BRT_O32_ORC_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_21(size_t index = 0) {
    try {
      return this->getObject(index, BRT_O32_BRT_O32_PRT_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_22(size_t index = 0) {
    try {
      return this->getObject(index, BRT_O32_BRT_O32_TQ1_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_23(size_t index = 0) {
    try {
      return this->getObject(index, BRT_O32_BRT_O32_TQ2_23) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* BRT_O32_BRT_O32_ */
} /* namespace HL7_29 */
#endif /*  __BRT_O32_BRT_O32__29_H__ */
