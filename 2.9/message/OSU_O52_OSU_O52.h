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


#ifndef __OSU_O52_OSU_O52__29_H__
#define __OSU_O52_OSU_O52__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct OSU_O52_OSU_O52_PATIENT; /* PATIENT */
struct OSU_O52_OSU_O52_ORDER_STATUS; /* ORDER_STATUS */

/*  */
struct OSU_O52_OSU_O52 : public HL7Message {
  OSU_O52_OSU_O52() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OSU_O52_OSU_O52_MSH_1,
    OSU_O52_OSU_O52_MSA_2,
    OSU_O52_OSU_O52_ARV_3,
    OSU_O52_OSU_O52_ERR_4,
    OSU_O52_OSU_O52_SFT_5,
    OSU_O52_OSU_O52_UAC_6,
    OSU_O52_OSU_O52_NTE_7,
    OSU_O52_OSU_O52_ARV_9,
    OSU_O52_OSU_O52_ORC_11,
    OSU_O52_OSU_O52_PID_13,
    OSU_O52_OSU_O52_PRT_14,
    FIELD_ID_MAX
  };

  const char* className() const { return "OSU_O52_OSU_O52"; }
  OSU_O52_OSU_O52* create() const { return new OSU_O52_OSU_O52(); }

 private:
  /* Initialize object */
  void init() {
    setName("OSU_O52_OSU_O52");
    addObject<MSH>(OSU_O52_OSU_O52_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<MSA>(OSU_O52_OSU_O52_MSA_2, "MSA.2", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OSU_O52_OSU_O52_ARV_3, "ARV.3", HL7::optional, HL7::repetition_on);
    addObject<ERR>(OSU_O52_OSU_O52_ERR_4, "ERR.4", HL7::optional, HL7::repetition_on);
    addObject<SFT>(OSU_O52_OSU_O52_SFT_5, "SFT.5", HL7::optional, HL7::repetition_on);
    addObject<UAC>(OSU_O52_OSU_O52_UAC_6, "UAC.6", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OSU_O52_OSU_O52_NTE_7, "NTE.7", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OSU_O52_OSU_O52_ARV_9, "ARV.9", HL7::optional, HL7::repetition_on);
    addObject<ORC>(OSU_O52_OSU_O52_ORC_11, "ORC.11", HL7::initialized, HL7::repetition_off);
    addObject<PID>(OSU_O52_OSU_O52_PID_13, "PID.13", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OSU_O52_OSU_O52_PRT_14, "PRT.14", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OSU_O52_OSU_O52_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, OSU_O52_OSU_O52_MSA_2);
  }
  ARV* getARV_3(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OSU_O52_OSU_O52_ARV_3);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, OSU_O52_OSU_O52_ERR_4);
  }
  SFT* getSFT_5(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, OSU_O52_OSU_O52_SFT_5);
  }
  UAC* getUAC_6(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, OSU_O52_OSU_O52_UAC_6);
  }
  NTE* getNTE_7(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OSU_O52_OSU_O52_NTE_7);
  }
  ARV* getARV_9(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OSU_O52_OSU_O52_ARV_9);
  }
  ORC* getORC_11(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OSU_O52_OSU_O52_ORC_11);
  }
  PID* getPID_13(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OSU_O52_OSU_O52_PID_13);
  }
  PRT* getPRT_14(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OSU_O52_OSU_O52_PRT_14);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OSU_O52_OSU_O52_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, OSU_O52_OSU_O52_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_3(size_t index = 0) {
    try {
      return this->getObject(index, OSU_O52_OSU_O52_ARV_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, OSU_O52_OSU_O52_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_5(size_t index = 0) {
    try {
      return this->getObject(index, OSU_O52_OSU_O52_SFT_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_6(size_t index = 0) {
    try {
      return this->getObject(index, OSU_O52_OSU_O52_UAC_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_7(size_t index = 0) {
    try {
      return this->getObject(index, OSU_O52_OSU_O52_NTE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_9(size_t index = 0) {
    try {
      return this->getObject(index, OSU_O52_OSU_O52_ARV_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_11(size_t index = 0) {
    try {
      return this->getObject(index, OSU_O52_OSU_O52_ORC_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_13(size_t index = 0) {
    try {
      return this->getObject(index, OSU_O52_OSU_O52_PID_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_14(size_t index = 0) {
    try {
      return this->getObject(index, OSU_O52_OSU_O52_PRT_14) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OSU_O52_OSU_O52_ */
} /* namespace HL7_29 */
#endif /*  __OSU_O52_OSU_O52__29_H__ */
