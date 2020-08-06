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


#ifndef __BRP_O30_BRP_O30__29_H__
#define __BRP_O30_BRP_O30__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/BPO.h"
#include "../segment/BPX.h"
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
struct BRP_O30_BRP_O30_RESPONSE; /* RESPONSE */
struct BRP_O30_BRP_O30_PATIENT; /* PATIENT */
struct BRP_O30_BRP_O30_ORDER; /* ORDER */
struct BRP_O30_BRP_O30_TIMING; /* TIMING */

/*  */
struct BRP_O30_BRP_O30 : public HL7Message {
  BRP_O30_BRP_O30() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    BRP_O30_BRP_O30_MSH_1,
    BRP_O30_BRP_O30_MSA_2,
    BRP_O30_BRP_O30_ARV_3,
    BRP_O30_BRP_O30_ERR_4,
    BRP_O30_BRP_O30_SFT_5,
    BRP_O30_BRP_O30_UAC_6,
    BRP_O30_BRP_O30_NTE_7,
    BRP_O30_BRP_O30_ARV_11,
    BRP_O30_BRP_O30_PID_12,
    BRP_O30_BRP_O30_PRT_13,
    BRP_O30_BRP_O30_BPO_15,
    BRP_O30_BRP_O30_BPX_16,
    BRP_O30_BRP_O30_ORC_17,
    BRP_O30_BRP_O30_PRT_18,
    BRP_O30_BRP_O30_TQ1_19,
    BRP_O30_BRP_O30_TQ2_20,
    FIELD_ID_MAX
  };

  const char* className() const { return "BRP_O30_BRP_O30"; }
  BRP_O30_BRP_O30* create() const { return new BRP_O30_BRP_O30(); }

 private:
  /* Initialize object */
  void init() {
    setName("BRP_O30_BRP_O30");
    addObject<MSH>(BRP_O30_BRP_O30_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<MSA>(BRP_O30_BRP_O30_MSA_2, "MSA.2", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(BRP_O30_BRP_O30_ARV_3, "ARV.3", HL7::optional, HL7::repetition_on);
    addObject<ERR>(BRP_O30_BRP_O30_ERR_4, "ERR.4", HL7::optional, HL7::repetition_on);
    addObject<SFT>(BRP_O30_BRP_O30_SFT_5, "SFT.5", HL7::optional, HL7::repetition_on);
    addObject<UAC>(BRP_O30_BRP_O30_UAC_6, "UAC.6", HL7::optional, HL7::repetition_off);
    addObject<NTE>(BRP_O30_BRP_O30_NTE_7, "NTE.7", HL7::optional, HL7::repetition_on);
    addObject<ARV>(BRP_O30_BRP_O30_ARV_11, "ARV.11", HL7::optional, HL7::repetition_on);
    addObject<PID>(BRP_O30_BRP_O30_PID_12, "PID.12", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(BRP_O30_BRP_O30_PRT_13, "PRT.13", HL7::optional, HL7::repetition_on);
    addObject<BPO>(BRP_O30_BRP_O30_BPO_15, "BPO.15", HL7::optional, HL7::repetition_off);
    addObject<BPX>(BRP_O30_BRP_O30_BPX_16, "BPX.16", HL7::optional, HL7::repetition_on);
    addObject<ORC>(BRP_O30_BRP_O30_ORC_17, "ORC.17", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(BRP_O30_BRP_O30_PRT_18, "PRT.18", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(BRP_O30_BRP_O30_TQ1_19, "TQ1.19", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(BRP_O30_BRP_O30_TQ2_20, "TQ2.20", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, BRP_O30_BRP_O30_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, BRP_O30_BRP_O30_MSA_2);
  }
  ARV* getARV_3(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, BRP_O30_BRP_O30_ARV_3);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, BRP_O30_BRP_O30_ERR_4);
  }
  SFT* getSFT_5(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, BRP_O30_BRP_O30_SFT_5);
  }
  UAC* getUAC_6(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, BRP_O30_BRP_O30_UAC_6);
  }
  NTE* getNTE_7(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, BRP_O30_BRP_O30_NTE_7);
  }
  ARV* getARV_11(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, BRP_O30_BRP_O30_ARV_11);
  }
  PID* getPID_12(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, BRP_O30_BRP_O30_PID_12);
  }
  PRT* getPRT_13(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, BRP_O30_BRP_O30_PRT_13);
  }
  BPO* getBPO_15(size_t index = 0) {
    return (BPO*)this->getObjectSafe(index, BRP_O30_BRP_O30_BPO_15);
  }
  BPX* getBPX_16(size_t index = 0) {
    return (BPX*)this->getObjectSafe(index, BRP_O30_BRP_O30_BPX_16);
  }
  ORC* getORC_17(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, BRP_O30_BRP_O30_ORC_17);
  }
  PRT* getPRT_18(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, BRP_O30_BRP_O30_PRT_18);
  }
  TQ1* getTQ1_19(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, BRP_O30_BRP_O30_TQ1_19);
  }
  TQ2* getTQ2_20(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, BRP_O30_BRP_O30_TQ2_20);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, BRP_O30_BRP_O30_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, BRP_O30_BRP_O30_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_3(size_t index = 0) {
    try {
      return this->getObject(index, BRP_O30_BRP_O30_ARV_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, BRP_O30_BRP_O30_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_5(size_t index = 0) {
    try {
      return this->getObject(index, BRP_O30_BRP_O30_SFT_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_6(size_t index = 0) {
    try {
      return this->getObject(index, BRP_O30_BRP_O30_UAC_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_7(size_t index = 0) {
    try {
      return this->getObject(index, BRP_O30_BRP_O30_NTE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_11(size_t index = 0) {
    try {
      return this->getObject(index, BRP_O30_BRP_O30_ARV_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_12(size_t index = 0) {
    try {
      return this->getObject(index, BRP_O30_BRP_O30_PID_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_13(size_t index = 0) {
    try {
      return this->getObject(index, BRP_O30_BRP_O30_PRT_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBPO_15(size_t index = 0) {
    try {
      return this->getObject(index, BRP_O30_BRP_O30_BPO_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBPX_16(size_t index = 0) {
    try {
      return this->getObject(index, BRP_O30_BRP_O30_BPX_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_17(size_t index = 0) {
    try {
      return this->getObject(index, BRP_O30_BRP_O30_ORC_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_18(size_t index = 0) {
    try {
      return this->getObject(index, BRP_O30_BRP_O30_PRT_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_19(size_t index = 0) {
    try {
      return this->getObject(index, BRP_O30_BRP_O30_TQ1_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_20(size_t index = 0) {
    try {
      return this->getObject(index, BRP_O30_BRP_O30_TQ2_20) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* BRP_O30_BRP_O30_ */
} /* namespace HL7_29 */
#endif /*  __BRP_O30_BRP_O30__29_H__ */
