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


#ifndef __MDM_T05_MDM_T01__29_H__
#define __MDM_T05_MDM_T01__29_H__

#include "../../common/Util.h"
#include "../segment/CON.h"
#include "../segment/EVN.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/SFT.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/TXA.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct MDM_T05_MDM_T01_COMMON_ORDER; /* COMMON_ORDER */
struct MDM_T05_MDM_T01_TIMING; /* TIMING */

/*  */
struct MDM_T05_MDM_T01 : public HL7Message {
  MDM_T05_MDM_T01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MDM_T05_MDM_T01_MSH_1,
    MDM_T05_MDM_T01_SFT_2,
    MDM_T05_MDM_T01_UAC_3,
    MDM_T05_MDM_T01_EVN_4,
    MDM_T05_MDM_T01_PID_5,
    MDM_T05_MDM_T01_PV1_7,
    MDM_T05_MDM_T01_TXA_10,
    MDM_T05_MDM_T01_CON_11,
    MDM_T05_MDM_T01_NTE_13,
    MDM_T05_MDM_T01_OBR_14,
    MDM_T05_MDM_T01_ORC_15,
    MDM_T05_MDM_T01_PRT_16,
    MDM_T05_MDM_T01_TQ1_17,
    MDM_T05_MDM_T01_TQ2_18,
    FIELD_ID_MAX
  };

  const char* className() const { return "MDM_T05_MDM_T01"; }
  MDM_T05_MDM_T01* create() const { return new MDM_T05_MDM_T01(); }

 private:
  /* Initialize object */
  void init() {
    setName("MDM_T05_MDM_T01");
    addObject<MSH>(MDM_T05_MDM_T01_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(MDM_T05_MDM_T01_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(MDM_T05_MDM_T01_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EVN>(MDM_T05_MDM_T01_EVN_4, "EVN.4", HL7::initialized, HL7::repetition_off);
    addObject<PID>(MDM_T05_MDM_T01_PID_5, "PID.5", HL7::initialized, HL7::repetition_off);
    addObject<PV1>(MDM_T05_MDM_T01_PV1_7, "PV1.7", HL7::initialized, HL7::repetition_off);
    addObject<TXA>(MDM_T05_MDM_T01_TXA_10, "TXA.10", HL7::initialized, HL7::repetition_off);
    addObject<CON>(MDM_T05_MDM_T01_CON_11, "CON.11", HL7::optional, HL7::repetition_on);
    addObject<NTE>(MDM_T05_MDM_T01_NTE_13, "NTE.13", HL7::optional, HL7::repetition_on);
    addObject<OBR>(MDM_T05_MDM_T01_OBR_14, "OBR.14", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(MDM_T05_MDM_T01_ORC_15, "ORC.15", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(MDM_T05_MDM_T01_PRT_16, "PRT.16", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(MDM_T05_MDM_T01_TQ1_17, "TQ1.17", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(MDM_T05_MDM_T01_TQ2_18, "TQ2.18", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MDM_T05_MDM_T01_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, MDM_T05_MDM_T01_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, MDM_T05_MDM_T01_UAC_3);
  }
  EVN* getEVN_4(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, MDM_T05_MDM_T01_EVN_4);
  }
  PID* getPID_5(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, MDM_T05_MDM_T01_PID_5);
  }
  PV1* getPV1_7(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, MDM_T05_MDM_T01_PV1_7);
  }
  TXA* getTXA_10(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, MDM_T05_MDM_T01_TXA_10);
  }
  CON* getCON_11(size_t index = 0) {
    return (CON*)this->getObjectSafe(index, MDM_T05_MDM_T01_CON_11);
  }
  NTE* getNTE_13(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, MDM_T05_MDM_T01_NTE_13);
  }
  OBR* getOBR_14(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, MDM_T05_MDM_T01_OBR_14);
  }
  ORC* getORC_15(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, MDM_T05_MDM_T01_ORC_15);
  }
  PRT* getPRT_16(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, MDM_T05_MDM_T01_PRT_16);
  }
  TQ1* getTQ1_17(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, MDM_T05_MDM_T01_TQ1_17);
  }
  TQ2* getTQ2_18(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, MDM_T05_MDM_T01_TQ2_18);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T05_MDM_T01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T05_MDM_T01_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T05_MDM_T01_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_4(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T05_MDM_T01_EVN_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_5(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T05_MDM_T01_PID_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_7(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T05_MDM_T01_PV1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_10(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T05_MDM_T01_TXA_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCON_11(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T05_MDM_T01_CON_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_13(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T05_MDM_T01_NTE_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_14(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T05_MDM_T01_OBR_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_15(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T05_MDM_T01_ORC_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_16(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T05_MDM_T01_PRT_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_17(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T05_MDM_T01_TQ1_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_18(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T05_MDM_T01_TQ2_18) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MDM_T05_MDM_T01_ */
} /* namespace HL7_29 */
#endif /*  __MDM_T05_MDM_T01__29_H__ */
