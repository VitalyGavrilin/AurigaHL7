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


#ifndef __ORB_O28_ORB_O28__29_H__
#define __ORB_O28_ORB_O28__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/BPO.h"
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
struct ORB_O28_ORB_O28_RESPONSE; /* RESPONSE */
struct ORB_O28_ORB_O28_PATIENT; /* PATIENT */
struct ORB_O28_ORB_O28_ORDER; /* ORDER */
struct ORB_O28_ORB_O28_TIMING; /* TIMING */

/*  */
struct ORB_O28_ORB_O28 : public HL7Message {
  ORB_O28_ORB_O28() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORB_O28_ORB_O28_MSH_1,
    ORB_O28_ORB_O28_MSA_2,
    ORB_O28_ORB_O28_ARV_3,
    ORB_O28_ORB_O28_ERR_4,
    ORB_O28_ORB_O28_SFT_5,
    ORB_O28_ORB_O28_UAC_6,
    ORB_O28_ORB_O28_NTE_7,
    ORB_O28_ORB_O28_ARV_11,
    ORB_O28_ORB_O28_PID_12,
    ORB_O28_ORB_O28_PRT_13,
    ORB_O28_ORB_O28_BPO_15,
    ORB_O28_ORB_O28_ORC_16,
    ORB_O28_ORB_O28_PRT_17,
    ORB_O28_ORB_O28_TQ1_18,
    ORB_O28_ORB_O28_TQ2_19,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORB_O28_ORB_O28"; }
  ORB_O28_ORB_O28* create() const { return new ORB_O28_ORB_O28(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORB_O28_ORB_O28");
    addObject<MSH>(ORB_O28_ORB_O28_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<MSA>(ORB_O28_ORB_O28_MSA_2, "MSA.2", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ORB_O28_ORB_O28_ARV_3, "ARV.3", HL7::optional, HL7::repetition_on);
    addObject<ERR>(ORB_O28_ORB_O28_ERR_4, "ERR.4", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ORB_O28_ORB_O28_SFT_5, "SFT.5", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ORB_O28_ORB_O28_UAC_6, "UAC.6", HL7::optional, HL7::repetition_off);
    addObject<NTE>(ORB_O28_ORB_O28_NTE_7, "NTE.7", HL7::optional, HL7::repetition_on);
    addObject<ARV>(ORB_O28_ORB_O28_ARV_11, "ARV.11", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORB_O28_ORB_O28_PID_12, "PID.12", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORB_O28_ORB_O28_PRT_13, "PRT.13", HL7::optional, HL7::repetition_on);
    addObject<BPO>(ORB_O28_ORB_O28_BPO_15, "BPO.15", HL7::optional, HL7::repetition_off);
    addObject<ORC>(ORB_O28_ORB_O28_ORC_16, "ORC.16", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORB_O28_ORB_O28_PRT_17, "PRT.17", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(ORB_O28_ORB_O28_TQ1_18, "TQ1.18", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORB_O28_ORB_O28_TQ2_19, "TQ2.19", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORB_O28_ORB_O28_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ORB_O28_ORB_O28_MSA_2);
  }
  ARV* getARV_3(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORB_O28_ORB_O28_ARV_3);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ORB_O28_ORB_O28_ERR_4);
  }
  SFT* getSFT_5(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ORB_O28_ORB_O28_SFT_5);
  }
  UAC* getUAC_6(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ORB_O28_ORB_O28_UAC_6);
  }
  NTE* getNTE_7(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORB_O28_ORB_O28_NTE_7);
  }
  ARV* getARV_11(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORB_O28_ORB_O28_ARV_11);
  }
  PID* getPID_12(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORB_O28_ORB_O28_PID_12);
  }
  PRT* getPRT_13(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORB_O28_ORB_O28_PRT_13);
  }
  BPO* getBPO_15(size_t index = 0) {
    return (BPO*)this->getObjectSafe(index, ORB_O28_ORB_O28_BPO_15);
  }
  ORC* getORC_16(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORB_O28_ORB_O28_ORC_16);
  }
  PRT* getPRT_17(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORB_O28_ORB_O28_PRT_17);
  }
  TQ1* getTQ1_18(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORB_O28_ORB_O28_TQ1_18);
  }
  TQ2* getTQ2_19(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORB_O28_ORB_O28_TQ2_19);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORB_O28_ORB_O28_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, ORB_O28_ORB_O28_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_3(size_t index = 0) {
    try {
      return this->getObject(index, ORB_O28_ORB_O28_ARV_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, ORB_O28_ORB_O28_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_5(size_t index = 0) {
    try {
      return this->getObject(index, ORB_O28_ORB_O28_SFT_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_6(size_t index = 0) {
    try {
      return this->getObject(index, ORB_O28_ORB_O28_UAC_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_7(size_t index = 0) {
    try {
      return this->getObject(index, ORB_O28_ORB_O28_NTE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_11(size_t index = 0) {
    try {
      return this->getObject(index, ORB_O28_ORB_O28_ARV_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_12(size_t index = 0) {
    try {
      return this->getObject(index, ORB_O28_ORB_O28_PID_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_13(size_t index = 0) {
    try {
      return this->getObject(index, ORB_O28_ORB_O28_PRT_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBPO_15(size_t index = 0) {
    try {
      return this->getObject(index, ORB_O28_ORB_O28_BPO_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_16(size_t index = 0) {
    try {
      return this->getObject(index, ORB_O28_ORB_O28_ORC_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_17(size_t index = 0) {
    try {
      return this->getObject(index, ORB_O28_ORB_O28_PRT_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_18(size_t index = 0) {
    try {
      return this->getObject(index, ORB_O28_ORB_O28_TQ1_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_19(size_t index = 0) {
    try {
      return this->getObject(index, ORB_O28_ORB_O28_TQ2_19) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORB_O28_ORB_O28_ */
} /* namespace HL7_29 */
#endif /*  __ORB_O28_ORB_O28__29_H__ */
