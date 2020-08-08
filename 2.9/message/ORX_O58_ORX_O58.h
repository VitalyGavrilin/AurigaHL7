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


#ifndef __ORX_O58_ORX_O58__29_H__
#define __ORX_O58_ORX_O58__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/CTI.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/SFT.h"
#include "../segment/TXA.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct ORX_O58_ORX_O58_RESPONSE; /* RESPONSE */
struct ORX_O58_ORX_O58_PATIENT; /* PATIENT */
struct ORX_O58_ORX_O58_ORDER; /* ORDER */

/*  */
struct ORX_O58_ORX_O58 : public HL7Message {
  ORX_O58_ORX_O58() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORX_O58_ORX_O58_MSH_1,
    ORX_O58_ORX_O58_MSA_2,
    ORX_O58_ORX_O58_ARV_3,
    ORX_O58_ORX_O58_ERR_4,
    ORX_O58_ORX_O58_SFT_5,
    ORX_O58_ORX_O58_UAC_6,
    ORX_O58_ORX_O58_NTE_7,
    ORX_O58_ORX_O58_ARV_11,
    ORX_O58_ORX_O58_NTE_12,
    ORX_O58_ORX_O58_PID_13,
    ORX_O58_ORX_O58_PRT_14,
    ORX_O58_ORX_O58_ARV_15,
    ORX_O58_ORX_O58_NTE_16,
    ORX_O58_ORX_O58_PID_17,
    ORX_O58_ORX_O58_PRT_18,
    ORX_O58_ORX_O58_CTI_19,
    ORX_O58_ORX_O58_ORC_20,
    ORX_O58_ORX_O58_PRT_21,
    ORX_O58_ORX_O58_TXA_22,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORX_O58_ORX_O58"; }
  ORX_O58_ORX_O58* create() const { return new ORX_O58_ORX_O58(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORX_O58_ORX_O58");
    addObject<MSH>(ORX_O58_ORX_O58_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<MSA>(ORX_O58_ORX_O58_MSA_2, "MSA.2", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ORX_O58_ORX_O58_ARV_3, "ARV.3", HL7::optional, HL7::repetition_on);
    addObject<ERR>(ORX_O58_ORX_O58_ERR_4, "ERR.4", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ORX_O58_ORX_O58_SFT_5, "SFT.5", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ORX_O58_ORX_O58_UAC_6, "UAC.6", HL7::optional, HL7::repetition_off);
    addObject<NTE>(ORX_O58_ORX_O58_NTE_7, "NTE.7", HL7::optional, HL7::repetition_on);
    addObject<ARV>(ORX_O58_ORX_O58_ARV_11, "ARV.11", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORX_O58_ORX_O58_NTE_12, "NTE.12", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORX_O58_ORX_O58_PID_13, "PID.13", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORX_O58_ORX_O58_PRT_14, "PRT.14", HL7::optional, HL7::repetition_on);
    addObject<ARV>(ORX_O58_ORX_O58_ARV_15, "ARV.15", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORX_O58_ORX_O58_NTE_16, "NTE.16", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORX_O58_ORX_O58_PID_17, "PID.17", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORX_O58_ORX_O58_PRT_18, "PRT.18", HL7::optional, HL7::repetition_on);
    addObject<CTI>(ORX_O58_ORX_O58_CTI_19, "CTI.19", HL7::optional, HL7::repetition_on);
    addObject<ORC>(ORX_O58_ORX_O58_ORC_20, "ORC.20", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORX_O58_ORX_O58_PRT_21, "PRT.21", HL7::optional, HL7::repetition_on);
    addObject<TXA>(ORX_O58_ORX_O58_TXA_22, "TXA.22", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORX_O58_ORX_O58_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ORX_O58_ORX_O58_MSA_2);
  }
  ARV* getARV_3(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORX_O58_ORX_O58_ARV_3);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ORX_O58_ORX_O58_ERR_4);
  }
  SFT* getSFT_5(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ORX_O58_ORX_O58_SFT_5);
  }
  UAC* getUAC_6(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ORX_O58_ORX_O58_UAC_6);
  }
  NTE* getNTE_7(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORX_O58_ORX_O58_NTE_7);
  }
  ARV* getARV_11(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORX_O58_ORX_O58_ARV_11);
  }
  NTE* getNTE_12(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORX_O58_ORX_O58_NTE_12);
  }
  PID* getPID_13(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORX_O58_ORX_O58_PID_13);
  }
  PRT* getPRT_14(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORX_O58_ORX_O58_PRT_14);
  }
  ARV* getARV_15(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORX_O58_ORX_O58_ARV_15);
  }
  NTE* getNTE_16(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORX_O58_ORX_O58_NTE_16);
  }
  PID* getPID_17(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORX_O58_ORX_O58_PID_17);
  }
  PRT* getPRT_18(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORX_O58_ORX_O58_PRT_18);
  }
  CTI* getCTI_19(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, ORX_O58_ORX_O58_CTI_19);
  }
  ORC* getORC_20(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORX_O58_ORX_O58_ORC_20);
  }
  PRT* getPRT_21(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORX_O58_ORX_O58_PRT_21);
  }
  TXA* getTXA_22(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, ORX_O58_ORX_O58_TXA_22);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORX_O58_ORX_O58_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, ORX_O58_ORX_O58_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_3(size_t index = 0) {
    try {
      return this->getObject(index, ORX_O58_ORX_O58_ARV_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, ORX_O58_ORX_O58_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_5(size_t index = 0) {
    try {
      return this->getObject(index, ORX_O58_ORX_O58_SFT_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_6(size_t index = 0) {
    try {
      return this->getObject(index, ORX_O58_ORX_O58_UAC_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_7(size_t index = 0) {
    try {
      return this->getObject(index, ORX_O58_ORX_O58_NTE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_11(size_t index = 0) {
    try {
      return this->getObject(index, ORX_O58_ORX_O58_ARV_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_12(size_t index = 0) {
    try {
      return this->getObject(index, ORX_O58_ORX_O58_NTE_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_13(size_t index = 0) {
    try {
      return this->getObject(index, ORX_O58_ORX_O58_PID_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_14(size_t index = 0) {
    try {
      return this->getObject(index, ORX_O58_ORX_O58_PRT_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_15(size_t index = 0) {
    try {
      return this->getObject(index, ORX_O58_ORX_O58_ARV_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_16(size_t index = 0) {
    try {
      return this->getObject(index, ORX_O58_ORX_O58_NTE_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_17(size_t index = 0) {
    try {
      return this->getObject(index, ORX_O58_ORX_O58_PID_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_18(size_t index = 0) {
    try {
      return this->getObject(index, ORX_O58_ORX_O58_PRT_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_19(size_t index = 0) {
    try {
      return this->getObject(index, ORX_O58_ORX_O58_CTI_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_20(size_t index = 0) {
    try {
      return this->getObject(index, ORX_O58_ORX_O58_ORC_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_21(size_t index = 0) {
    try {
      return this->getObject(index, ORX_O58_ORX_O58_PRT_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_22(size_t index = 0) {
    try {
      return this->getObject(index, ORX_O58_ORX_O58_TXA_22) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORX_O58_ORX_O58_ */
} /* namespace HL7_29 */
#endif /*  __ORX_O58_ORX_O58__29_H__ */
