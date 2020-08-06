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


#ifndef __BPS_O29_BPS_O29__29_H__
#define __BPS_O29_BPS_O29__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/BPO.h"
#include "../segment/BPX.h"
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
struct BPS_O29_BPS_O29_PATIENT; /* PATIENT */
struct BPS_O29_BPS_O29_ORDER; /* ORDER */
struct BPS_O29_BPS_O29_TIMING; /* TIMING */
struct BPS_O29_BPS_O29_PRODUCT; /* PRODUCT */
struct BPS_O29_BPS_O29_PATIENT_VISIT; /* PATIENT_VISIT */

/*  */
struct BPS_O29_BPS_O29 : public HL7Message {
  BPS_O29_BPS_O29() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    BPS_O29_BPS_O29_MSH_1,
    BPS_O29_BPS_O29_ARV_2,
    BPS_O29_BPS_O29_SFT_3,
    BPS_O29_BPS_O29_UAC_4,
    BPS_O29_BPS_O29_NTE_5,
    BPS_O29_BPS_O29_BPO_10,
    BPS_O29_BPS_O29_NTE_11,
    BPS_O29_BPS_O29_ORC_12,
    BPS_O29_BPS_O29_PRT_13,
    BPS_O29_BPS_O29_TQ1_14,
    BPS_O29_BPS_O29_TQ2_15,
    BPS_O29_BPS_O29_TQ1_16,
    BPS_O29_BPS_O29_TQ2_17,
    BPS_O29_BPS_O29_BPX_18,
    BPS_O29_BPS_O29_NTE_19,
    BPS_O29_BPS_O29_ARV_21,
    BPS_O29_BPS_O29_NTE_22,
    BPS_O29_BPS_O29_PD1_23,
    BPS_O29_BPS_O29_PID_24,
    BPS_O29_BPS_O29_PRT_25,
    BPS_O29_BPS_O29_PRT_26,
    BPS_O29_BPS_O29_PV1_27,
    BPS_O29_BPS_O29_PV2_28,
    FIELD_ID_MAX
  };

  const char* className() const { return "BPS_O29_BPS_O29"; }
  BPS_O29_BPS_O29* create() const { return new BPS_O29_BPS_O29(); }

 private:
  /* Initialize object */
  void init() {
    setName("BPS_O29_BPS_O29");
    addObject<MSH>(BPS_O29_BPS_O29_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(BPS_O29_BPS_O29_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(BPS_O29_BPS_O29_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(BPS_O29_BPS_O29_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(BPS_O29_BPS_O29_NTE_5, "NTE.5", HL7::optional, HL7::repetition_on);
    addObject<BPO>(BPS_O29_BPS_O29_BPO_10, "BPO.10", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(BPS_O29_BPS_O29_NTE_11, "NTE.11", HL7::optional, HL7::repetition_on);
    addObject<ORC>(BPS_O29_BPS_O29_ORC_12, "ORC.12", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(BPS_O29_BPS_O29_PRT_13, "PRT.13", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(BPS_O29_BPS_O29_TQ1_14, "TQ1.14", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(BPS_O29_BPS_O29_TQ2_15, "TQ2.15", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(BPS_O29_BPS_O29_TQ1_16, "TQ1.16", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(BPS_O29_BPS_O29_TQ2_17, "TQ2.17", HL7::optional, HL7::repetition_on);
    addObject<BPX>(BPS_O29_BPS_O29_BPX_18, "BPX.18", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(BPS_O29_BPS_O29_NTE_19, "NTE.19", HL7::optional, HL7::repetition_on);
    addObject<ARV>(BPS_O29_BPS_O29_ARV_21, "ARV.21", HL7::optional, HL7::repetition_on);
    addObject<NTE>(BPS_O29_BPS_O29_NTE_22, "NTE.22", HL7::optional, HL7::repetition_on);
    addObject<PD1>(BPS_O29_BPS_O29_PD1_23, "PD1.23", HL7::optional, HL7::repetition_off);
    addObject<PID>(BPS_O29_BPS_O29_PID_24, "PID.24", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(BPS_O29_BPS_O29_PRT_25, "PRT.25", HL7::optional, HL7::repetition_on);
    addObject<PRT>(BPS_O29_BPS_O29_PRT_26, "PRT.26", HL7::optional, HL7::repetition_on);
    addObject<PV1>(BPS_O29_BPS_O29_PV1_27, "PV1.27", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(BPS_O29_BPS_O29_PV2_28, "PV2.28", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, BPS_O29_BPS_O29_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, BPS_O29_BPS_O29_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, BPS_O29_BPS_O29_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, BPS_O29_BPS_O29_UAC_4);
  }
  NTE* getNTE_5(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, BPS_O29_BPS_O29_NTE_5);
  }
  BPO* getBPO_10(size_t index = 0) {
    return (BPO*)this->getObjectSafe(index, BPS_O29_BPS_O29_BPO_10);
  }
  NTE* getNTE_11(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, BPS_O29_BPS_O29_NTE_11);
  }
  ORC* getORC_12(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, BPS_O29_BPS_O29_ORC_12);
  }
  PRT* getPRT_13(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, BPS_O29_BPS_O29_PRT_13);
  }
  TQ1* getTQ1_14(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, BPS_O29_BPS_O29_TQ1_14);
  }
  TQ2* getTQ2_15(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, BPS_O29_BPS_O29_TQ2_15);
  }
  TQ1* getTQ1_16(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, BPS_O29_BPS_O29_TQ1_16);
  }
  TQ2* getTQ2_17(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, BPS_O29_BPS_O29_TQ2_17);
  }
  BPX* getBPX_18(size_t index = 0) {
    return (BPX*)this->getObjectSafe(index, BPS_O29_BPS_O29_BPX_18);
  }
  NTE* getNTE_19(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, BPS_O29_BPS_O29_NTE_19);
  }
  ARV* getARV_21(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, BPS_O29_BPS_O29_ARV_21);
  }
  NTE* getNTE_22(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, BPS_O29_BPS_O29_NTE_22);
  }
  PD1* getPD1_23(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, BPS_O29_BPS_O29_PD1_23);
  }
  PID* getPID_24(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, BPS_O29_BPS_O29_PID_24);
  }
  PRT* getPRT_25(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, BPS_O29_BPS_O29_PRT_25);
  }
  PRT* getPRT_26(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, BPS_O29_BPS_O29_PRT_26);
  }
  PV1* getPV1_27(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, BPS_O29_BPS_O29_PV1_27);
  }
  PV2* getPV2_28(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, BPS_O29_BPS_O29_PV2_28);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, BPS_O29_BPS_O29_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, BPS_O29_BPS_O29_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, BPS_O29_BPS_O29_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, BPS_O29_BPS_O29_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_5(size_t index = 0) {
    try {
      return this->getObject(index, BPS_O29_BPS_O29_NTE_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBPO_10(size_t index = 0) {
    try {
      return this->getObject(index, BPS_O29_BPS_O29_BPO_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_11(size_t index = 0) {
    try {
      return this->getObject(index, BPS_O29_BPS_O29_NTE_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_12(size_t index = 0) {
    try {
      return this->getObject(index, BPS_O29_BPS_O29_ORC_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_13(size_t index = 0) {
    try {
      return this->getObject(index, BPS_O29_BPS_O29_PRT_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_14(size_t index = 0) {
    try {
      return this->getObject(index, BPS_O29_BPS_O29_TQ1_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_15(size_t index = 0) {
    try {
      return this->getObject(index, BPS_O29_BPS_O29_TQ2_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_16(size_t index = 0) {
    try {
      return this->getObject(index, BPS_O29_BPS_O29_TQ1_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_17(size_t index = 0) {
    try {
      return this->getObject(index, BPS_O29_BPS_O29_TQ2_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBPX_18(size_t index = 0) {
    try {
      return this->getObject(index, BPS_O29_BPS_O29_BPX_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_19(size_t index = 0) {
    try {
      return this->getObject(index, BPS_O29_BPS_O29_NTE_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_21(size_t index = 0) {
    try {
      return this->getObject(index, BPS_O29_BPS_O29_ARV_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_22(size_t index = 0) {
    try {
      return this->getObject(index, BPS_O29_BPS_O29_NTE_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_23(size_t index = 0) {
    try {
      return this->getObject(index, BPS_O29_BPS_O29_PD1_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_24(size_t index = 0) {
    try {
      return this->getObject(index, BPS_O29_BPS_O29_PID_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_25(size_t index = 0) {
    try {
      return this->getObject(index, BPS_O29_BPS_O29_PRT_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_26(size_t index = 0) {
    try {
      return this->getObject(index, BPS_O29_BPS_O29_PRT_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_27(size_t index = 0) {
    try {
      return this->getObject(index, BPS_O29_BPS_O29_PV1_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_28(size_t index = 0) {
    try {
      return this->getObject(index, BPS_O29_BPS_O29_PV2_28) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* BPS_O29_BPS_O29_ */
} /* namespace HL7_29 */
#endif /*  __BPS_O29_BPS_O29__29_H__ */
