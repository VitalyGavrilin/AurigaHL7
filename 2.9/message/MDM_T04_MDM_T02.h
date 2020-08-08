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


#ifndef __MDM_T04_MDM_T02__29_H__
#define __MDM_T04_MDM_T02__29_H__

#include "../../common/Util.h"
#include "../segment/CON.h"
#include "../segment/EVN.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/SFT.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/TXA.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct MDM_T04_MDM_T02_COMMON_ORDER; /* COMMON_ORDER */
struct MDM_T04_MDM_T02_TIMING; /* TIMING */

/*  */
struct MDM_T04_MDM_T02 : public HL7Message {
  MDM_T04_MDM_T02() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MDM_T04_MDM_T02_MSH_1,
    MDM_T04_MDM_T02_SFT_2,
    MDM_T04_MDM_T02_UAC_3,
    MDM_T04_MDM_T02_EVN_4,
    MDM_T04_MDM_T02_PID_5,
    MDM_T04_MDM_T02_PV1_7,
    MDM_T04_MDM_T02_TXA_10,
    MDM_T04_MDM_T02_CON_11,
    MDM_T04_MDM_T02_OBX_13,
    MDM_T04_MDM_T02_NTE_15,
    MDM_T04_MDM_T02_NTE_17,
    MDM_T04_MDM_T02_OBR_18,
    MDM_T04_MDM_T02_ORC_19,
    MDM_T04_MDM_T02_TQ1_21,
    MDM_T04_MDM_T02_TQ2_22,
    FIELD_ID_MAX
  };

  const char* className() const { return "MDM_T04_MDM_T02"; }
  MDM_T04_MDM_T02* create() const { return new MDM_T04_MDM_T02(); }

 private:
  /* Initialize object */
  void init() {
    setName("MDM_T04_MDM_T02");
    addObject<MSH>(MDM_T04_MDM_T02_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(MDM_T04_MDM_T02_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(MDM_T04_MDM_T02_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EVN>(MDM_T04_MDM_T02_EVN_4, "EVN.4", HL7::initialized, HL7::repetition_off);
    addObject<PID>(MDM_T04_MDM_T02_PID_5, "PID.5", HL7::initialized, HL7::repetition_off);
    addObject<PV1>(MDM_T04_MDM_T02_PV1_7, "PV1.7", HL7::initialized, HL7::repetition_off);
    addObject<TXA>(MDM_T04_MDM_T02_TXA_10, "TXA.10", HL7::initialized, HL7::repetition_off);
    addObject<CON>(MDM_T04_MDM_T02_CON_11, "CON.11", HL7::optional, HL7::repetition_on);
    addObject<OBX>(MDM_T04_MDM_T02_OBX_13, "OBX.13", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(MDM_T04_MDM_T02_NTE_15, "NTE.15", HL7::optional, HL7::repetition_on);
    addObject<NTE>(MDM_T04_MDM_T02_NTE_17, "NTE.17", HL7::optional, HL7::repetition_on);
    addObject<OBR>(MDM_T04_MDM_T02_OBR_18, "OBR.18", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(MDM_T04_MDM_T02_ORC_19, "ORC.19", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(MDM_T04_MDM_T02_TQ1_21, "TQ1.21", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(MDM_T04_MDM_T02_TQ2_22, "TQ2.22", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MDM_T04_MDM_T02_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, MDM_T04_MDM_T02_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, MDM_T04_MDM_T02_UAC_3);
  }
  EVN* getEVN_4(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, MDM_T04_MDM_T02_EVN_4);
  }
  PID* getPID_5(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, MDM_T04_MDM_T02_PID_5);
  }
  PV1* getPV1_7(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, MDM_T04_MDM_T02_PV1_7);
  }
  TXA* getTXA_10(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, MDM_T04_MDM_T02_TXA_10);
  }
  CON* getCON_11(size_t index = 0) {
    return (CON*)this->getObjectSafe(index, MDM_T04_MDM_T02_CON_11);
  }
  OBX* getOBX_13(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, MDM_T04_MDM_T02_OBX_13);
  }
  NTE* getNTE_15(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, MDM_T04_MDM_T02_NTE_15);
  }
  NTE* getNTE_17(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, MDM_T04_MDM_T02_NTE_17);
  }
  OBR* getOBR_18(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, MDM_T04_MDM_T02_OBR_18);
  }
  ORC* getORC_19(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, MDM_T04_MDM_T02_ORC_19);
  }
  TQ1* getTQ1_21(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, MDM_T04_MDM_T02_TQ1_21);
  }
  TQ2* getTQ2_22(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, MDM_T04_MDM_T02_TQ2_22);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T04_MDM_T02_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T04_MDM_T02_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T04_MDM_T02_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_4(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T04_MDM_T02_EVN_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_5(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T04_MDM_T02_PID_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_7(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T04_MDM_T02_PV1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_10(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T04_MDM_T02_TXA_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCON_11(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T04_MDM_T02_CON_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_13(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T04_MDM_T02_OBX_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_15(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T04_MDM_T02_NTE_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_17(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T04_MDM_T02_NTE_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_18(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T04_MDM_T02_OBR_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_19(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T04_MDM_T02_ORC_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_21(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T04_MDM_T02_TQ1_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_22(size_t index = 0) {
    try {
      return this->getObject(index, MDM_T04_MDM_T02_TQ2_22) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MDM_T04_MDM_T02_ */
} /* namespace HL7_29 */
#endif /*  __MDM_T04_MDM_T02__29_H__ */
