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


#ifndef __ORN_O08_ORN_O08__29_H__
#define __ORN_O08_ORN_O08__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/RQ1.h"
#include "../segment/RQD.h"
#include "../segment/SFT.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct ORN_O08_ORN_O08_RESPONSE; /* RESPONSE */
struct ORN_O08_ORN_O08_PATIENT; /* PATIENT */
struct ORN_O08_ORN_O08_ORDER; /* ORDER */
struct ORN_O08_ORN_O08_TIMING; /* TIMING */

/*  */
struct ORN_O08_ORN_O08 : public HL7Message {
  ORN_O08_ORN_O08() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORN_O08_ORN_O08_MSH_1,
    ORN_O08_ORN_O08_MSA_2,
    ORN_O08_ORN_O08_ARV_3,
    ORN_O08_ORN_O08_ERR_4,
    ORN_O08_ORN_O08_SFT_5,
    ORN_O08_ORN_O08_UAC_6,
    ORN_O08_ORN_O08_NTE_7,
    ORN_O08_ORN_O08_ARV_11,
    ORN_O08_ORN_O08_NTE_12,
    ORN_O08_ORN_O08_PID_13,
    ORN_O08_ORN_O08_PRT_14,
    ORN_O08_ORN_O08_ARV_15,
    ORN_O08_ORN_O08_NTE_16,
    ORN_O08_ORN_O08_PID_17,
    ORN_O08_ORN_O08_PRT_18,
    ORN_O08_ORN_O08_NTE_20,
    ORN_O08_ORN_O08_ORC_21,
    ORN_O08_ORN_O08_PRT_22,
    ORN_O08_ORN_O08_RQ1_23,
    ORN_O08_ORN_O08_RQD_24,
    ORN_O08_ORN_O08_TQ1_25,
    ORN_O08_ORN_O08_TQ2_26,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORN_O08_ORN_O08"; }
  ORN_O08_ORN_O08* create() const { return new ORN_O08_ORN_O08(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORN_O08_ORN_O08");
    addObject<MSH>(ORN_O08_ORN_O08_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<MSA>(ORN_O08_ORN_O08_MSA_2, "MSA.2", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ORN_O08_ORN_O08_ARV_3, "ARV.3", HL7::optional, HL7::repetition_on);
    addObject<ERR>(ORN_O08_ORN_O08_ERR_4, "ERR.4", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ORN_O08_ORN_O08_SFT_5, "SFT.5", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ORN_O08_ORN_O08_UAC_6, "UAC.6", HL7::optional, HL7::repetition_off);
    addObject<NTE>(ORN_O08_ORN_O08_NTE_7, "NTE.7", HL7::optional, HL7::repetition_on);
    addObject<ARV>(ORN_O08_ORN_O08_ARV_11, "ARV.11", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORN_O08_ORN_O08_NTE_12, "NTE.12", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORN_O08_ORN_O08_PID_13, "PID.13", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORN_O08_ORN_O08_PRT_14, "PRT.14", HL7::optional, HL7::repetition_on);
    addObject<ARV>(ORN_O08_ORN_O08_ARV_15, "ARV.15", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORN_O08_ORN_O08_NTE_16, "NTE.16", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORN_O08_ORN_O08_PID_17, "PID.17", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORN_O08_ORN_O08_PRT_18, "PRT.18", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORN_O08_ORN_O08_NTE_20, "NTE.20", HL7::optional, HL7::repetition_on);
    addObject<ORC>(ORN_O08_ORN_O08_ORC_21, "ORC.21", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORN_O08_ORN_O08_PRT_22, "PRT.22", HL7::optional, HL7::repetition_on);
    addObject<RQ1>(ORN_O08_ORN_O08_RQ1_23, "RQ1.23", HL7::optional, HL7::repetition_off);
    addObject<RQD>(ORN_O08_ORN_O08_RQD_24, "RQD.24", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(ORN_O08_ORN_O08_TQ1_25, "TQ1.25", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORN_O08_ORN_O08_TQ2_26, "TQ2.26", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORN_O08_ORN_O08_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ORN_O08_ORN_O08_MSA_2);
  }
  ARV* getARV_3(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORN_O08_ORN_O08_ARV_3);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ORN_O08_ORN_O08_ERR_4);
  }
  SFT* getSFT_5(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ORN_O08_ORN_O08_SFT_5);
  }
  UAC* getUAC_6(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ORN_O08_ORN_O08_UAC_6);
  }
  NTE* getNTE_7(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORN_O08_ORN_O08_NTE_7);
  }
  ARV* getARV_11(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORN_O08_ORN_O08_ARV_11);
  }
  NTE* getNTE_12(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORN_O08_ORN_O08_NTE_12);
  }
  PID* getPID_13(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORN_O08_ORN_O08_PID_13);
  }
  PRT* getPRT_14(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORN_O08_ORN_O08_PRT_14);
  }
  ARV* getARV_15(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORN_O08_ORN_O08_ARV_15);
  }
  NTE* getNTE_16(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORN_O08_ORN_O08_NTE_16);
  }
  PID* getPID_17(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORN_O08_ORN_O08_PID_17);
  }
  PRT* getPRT_18(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORN_O08_ORN_O08_PRT_18);
  }
  NTE* getNTE_20(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORN_O08_ORN_O08_NTE_20);
  }
  ORC* getORC_21(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORN_O08_ORN_O08_ORC_21);
  }
  PRT* getPRT_22(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORN_O08_ORN_O08_PRT_22);
  }
  RQ1* getRQ1_23(size_t index = 0) {
    return (RQ1*)this->getObjectSafe(index, ORN_O08_ORN_O08_RQ1_23);
  }
  RQD* getRQD_24(size_t index = 0) {
    return (RQD*)this->getObjectSafe(index, ORN_O08_ORN_O08_RQD_24);
  }
  TQ1* getTQ1_25(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORN_O08_ORN_O08_TQ1_25);
  }
  TQ2* getTQ2_26(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORN_O08_ORN_O08_TQ2_26);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORN_O08_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORN_O08_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_3(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORN_O08_ARV_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORN_O08_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_5(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORN_O08_SFT_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_6(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORN_O08_UAC_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_7(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORN_O08_NTE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_11(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORN_O08_ARV_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_12(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORN_O08_NTE_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_13(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORN_O08_PID_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_14(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORN_O08_PRT_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_15(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORN_O08_ARV_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_16(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORN_O08_NTE_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_17(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORN_O08_PID_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_18(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORN_O08_PRT_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_20(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORN_O08_NTE_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_21(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORN_O08_ORC_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_22(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORN_O08_PRT_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRQ1_23(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORN_O08_RQ1_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRQD_24(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORN_O08_RQD_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_25(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORN_O08_TQ1_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_26(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORN_O08_TQ2_26) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORN_O08_ORN_O08_ */
} /* namespace HL7_29 */
#endif /*  __ORN_O08_ORN_O08__29_H__ */
