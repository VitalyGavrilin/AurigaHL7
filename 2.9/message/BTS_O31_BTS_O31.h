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


#ifndef __BTS_O31_BTS_O31__29_H__
#define __BTS_O31_BTS_O31__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/BPO.h"
#include "../segment/BTX.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/SFT.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct BTS_O31_BTS_O31_PATIENT; /* PATIENT */
struct BTS_O31_BTS_O31_ORDER; /* ORDER */
struct BTS_O31_BTS_O31_TIMING; /* TIMING */
struct BTS_O31_BTS_O31_PRODUCT_STATUS; /* PRODUCT_STATUS */
struct BTS_O31_BTS_O31_PATIENT_VISIT; /* PATIENT_VISIT */

/*  */
struct BTS_O31_BTS_O31 : public HL7Message {
  BTS_O31_BTS_O31() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    BTS_O31_BTS_O31_MSH_1,
    BTS_O31_BTS_O31_ARV_2,
    BTS_O31_BTS_O31_SFT_3,
    BTS_O31_BTS_O31_UAC_4,
    BTS_O31_BTS_O31_NTE_5,
    BTS_O31_BTS_O31_BPO_10,
    BTS_O31_BTS_O31_NTE_11,
    BTS_O31_BTS_O31_ORC_12,
    BTS_O31_BTS_O31_PRT_13,
    BTS_O31_BTS_O31_TQ1_14,
    BTS_O31_BTS_O31_TQ2_15,
    BTS_O31_BTS_O31_TQ1_16,
    BTS_O31_BTS_O31_TQ2_17,
    BTS_O31_BTS_O31_BTX_18,
    BTS_O31_BTS_O31_NTE_19,
    BTS_O31_BTS_O31_NTE_21,
    BTS_O31_BTS_O31_PD1_22,
    BTS_O31_BTS_O31_PID_23,
    BTS_O31_BTS_O31_PRT_24,
    BTS_O31_BTS_O31_PRT_25,
    BTS_O31_BTS_O31_PV1_26,
    BTS_O31_BTS_O31_PV2_27,
    FIELD_ID_MAX
  };

  const char* className() const { return "BTS_O31_BTS_O31"; }
  BTS_O31_BTS_O31* create() const { return new BTS_O31_BTS_O31(); }

 private:
  /* Initialize object */
  void init() {
    setName("BTS_O31_BTS_O31");
    addObject<MSH>(BTS_O31_BTS_O31_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(BTS_O31_BTS_O31_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(BTS_O31_BTS_O31_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(BTS_O31_BTS_O31_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(BTS_O31_BTS_O31_NTE_5, "NTE.5", HL7::optional, HL7::repetition_on);
    addObject<BPO>(BTS_O31_BTS_O31_BPO_10, "BPO.10", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(BTS_O31_BTS_O31_NTE_11, "NTE.11", HL7::optional, HL7::repetition_on);
    addObject<ORC>(BTS_O31_BTS_O31_ORC_12, "ORC.12", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(BTS_O31_BTS_O31_PRT_13, "PRT.13", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(BTS_O31_BTS_O31_TQ1_14, "TQ1.14", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(BTS_O31_BTS_O31_TQ2_15, "TQ2.15", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(BTS_O31_BTS_O31_TQ1_16, "TQ1.16", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(BTS_O31_BTS_O31_TQ2_17, "TQ2.17", HL7::optional, HL7::repetition_on);
    addObject<BTX>(BTS_O31_BTS_O31_BTX_18, "BTX.18", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(BTS_O31_BTS_O31_NTE_19, "NTE.19", HL7::optional, HL7::repetition_on);
    addObject<NTE>(BTS_O31_BTS_O31_NTE_21, "NTE.21", HL7::optional, HL7::repetition_on);
    addObject<PD1>(BTS_O31_BTS_O31_PD1_22, "PD1.22", HL7::optional, HL7::repetition_off);
    addObject<PID>(BTS_O31_BTS_O31_PID_23, "PID.23", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(BTS_O31_BTS_O31_PRT_24, "PRT.24", HL7::optional, HL7::repetition_on);
    addObject<PRT>(BTS_O31_BTS_O31_PRT_25, "PRT.25", HL7::optional, HL7::repetition_on);
    addObject<PV1>(BTS_O31_BTS_O31_PV1_26, "PV1.26", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(BTS_O31_BTS_O31_PV2_27, "PV2.27", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, BTS_O31_BTS_O31_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, BTS_O31_BTS_O31_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, BTS_O31_BTS_O31_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, BTS_O31_BTS_O31_UAC_4);
  }
  NTE* getNTE_5(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, BTS_O31_BTS_O31_NTE_5);
  }
  BPO* getBPO_10(size_t index = 0) {
    return (BPO*)this->getObjectSafe(index, BTS_O31_BTS_O31_BPO_10);
  }
  NTE* getNTE_11(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, BTS_O31_BTS_O31_NTE_11);
  }
  ORC* getORC_12(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, BTS_O31_BTS_O31_ORC_12);
  }
  PRT* getPRT_13(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, BTS_O31_BTS_O31_PRT_13);
  }
  TQ1* getTQ1_14(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, BTS_O31_BTS_O31_TQ1_14);
  }
  TQ2* getTQ2_15(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, BTS_O31_BTS_O31_TQ2_15);
  }
  TQ1* getTQ1_16(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, BTS_O31_BTS_O31_TQ1_16);
  }
  TQ2* getTQ2_17(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, BTS_O31_BTS_O31_TQ2_17);
  }
  BTX* getBTX_18(size_t index = 0) {
    return (BTX*)this->getObjectSafe(index, BTS_O31_BTS_O31_BTX_18);
  }
  NTE* getNTE_19(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, BTS_O31_BTS_O31_NTE_19);
  }
  NTE* getNTE_21(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, BTS_O31_BTS_O31_NTE_21);
  }
  PD1* getPD1_22(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, BTS_O31_BTS_O31_PD1_22);
  }
  PID* getPID_23(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, BTS_O31_BTS_O31_PID_23);
  }
  PRT* getPRT_24(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, BTS_O31_BTS_O31_PRT_24);
  }
  PRT* getPRT_25(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, BTS_O31_BTS_O31_PRT_25);
  }
  PV1* getPV1_26(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, BTS_O31_BTS_O31_PV1_26);
  }
  PV2* getPV2_27(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, BTS_O31_BTS_O31_PV2_27);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, BTS_O31_BTS_O31_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, BTS_O31_BTS_O31_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, BTS_O31_BTS_O31_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, BTS_O31_BTS_O31_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_5(size_t index = 0) {
    try {
      return this->getObject(index, BTS_O31_BTS_O31_NTE_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBPO_10(size_t index = 0) {
    try {
      return this->getObject(index, BTS_O31_BTS_O31_BPO_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_11(size_t index = 0) {
    try {
      return this->getObject(index, BTS_O31_BTS_O31_NTE_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_12(size_t index = 0) {
    try {
      return this->getObject(index, BTS_O31_BTS_O31_ORC_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_13(size_t index = 0) {
    try {
      return this->getObject(index, BTS_O31_BTS_O31_PRT_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_14(size_t index = 0) {
    try {
      return this->getObject(index, BTS_O31_BTS_O31_TQ1_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_15(size_t index = 0) {
    try {
      return this->getObject(index, BTS_O31_BTS_O31_TQ2_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_16(size_t index = 0) {
    try {
      return this->getObject(index, BTS_O31_BTS_O31_TQ1_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_17(size_t index = 0) {
    try {
      return this->getObject(index, BTS_O31_BTS_O31_TQ2_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBTX_18(size_t index = 0) {
    try {
      return this->getObject(index, BTS_O31_BTS_O31_BTX_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_19(size_t index = 0) {
    try {
      return this->getObject(index, BTS_O31_BTS_O31_NTE_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_21(size_t index = 0) {
    try {
      return this->getObject(index, BTS_O31_BTS_O31_NTE_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_22(size_t index = 0) {
    try {
      return this->getObject(index, BTS_O31_BTS_O31_PD1_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_23(size_t index = 0) {
    try {
      return this->getObject(index, BTS_O31_BTS_O31_PID_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_24(size_t index = 0) {
    try {
      return this->getObject(index, BTS_O31_BTS_O31_PRT_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_25(size_t index = 0) {
    try {
      return this->getObject(index, BTS_O31_BTS_O31_PRT_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_26(size_t index = 0) {
    try {
      return this->getObject(index, BTS_O31_BTS_O31_PV1_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_27(size_t index = 0) {
    try {
      return this->getObject(index, BTS_O31_BTS_O31_PV2_27) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* BTS_O31_BTS_O31_ */
} /* namespace HL7_29 */
#endif /*  __BTS_O31_BTS_O31__29_H__ */
