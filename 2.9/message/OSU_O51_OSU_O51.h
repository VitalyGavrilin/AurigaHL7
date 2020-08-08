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


#ifndef __OSU_O51_OSU_O51__29_H__
#define __OSU_O51_OSU_O51__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct OSU_O51_OSU_O51_ORDER_STATUS; /* ORDER_STATUS */

/*  */
struct OSU_O51_OSU_O51 : public HL7Message {
  OSU_O51_OSU_O51() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OSU_O51_OSU_O51_MSH_1,
    OSU_O51_OSU_O51_ARV_2,
    OSU_O51_OSU_O51_SFT_3,
    OSU_O51_OSU_O51_UAC_4,
    OSU_O51_OSU_O51_NTE_5,
    OSU_O51_OSU_O51_PID_6,
    OSU_O51_OSU_O51_PRT_7,
    OSU_O51_OSU_O51_ARV_8,
    OSU_O51_OSU_O51_ORC_10,
    OSU_O51_OSU_O51_PRT_11,
    FIELD_ID_MAX
  };

  const char* className() const { return "OSU_O51_OSU_O51"; }
  OSU_O51_OSU_O51* create() const { return new OSU_O51_OSU_O51(); }

 private:
  /* Initialize object */
  void init() {
    setName("OSU_O51_OSU_O51");
    addObject<MSH>(OSU_O51_OSU_O51_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OSU_O51_OSU_O51_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(OSU_O51_OSU_O51_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(OSU_O51_OSU_O51_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OSU_O51_OSU_O51_NTE_5, "NTE.5", HL7::optional, HL7::repetition_on);
    addObject<PID>(OSU_O51_OSU_O51_PID_6, "PID.6", HL7::optional, HL7::repetition_off);
    addObject<PRT>(OSU_O51_OSU_O51_PRT_7, "PRT.7", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OSU_O51_OSU_O51_ARV_8, "ARV.8", HL7::optional, HL7::repetition_on);
    addObject<ORC>(OSU_O51_OSU_O51_ORC_10, "ORC.10", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OSU_O51_OSU_O51_PRT_11, "PRT.11", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OSU_O51_OSU_O51_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OSU_O51_OSU_O51_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, OSU_O51_OSU_O51_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, OSU_O51_OSU_O51_UAC_4);
  }
  NTE* getNTE_5(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OSU_O51_OSU_O51_NTE_5);
  }
  PID* getPID_6(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OSU_O51_OSU_O51_PID_6);
  }
  PRT* getPRT_7(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OSU_O51_OSU_O51_PRT_7);
  }
  ARV* getARV_8(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OSU_O51_OSU_O51_ARV_8);
  }
  ORC* getORC_10(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OSU_O51_OSU_O51_ORC_10);
  }
  PRT* getPRT_11(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OSU_O51_OSU_O51_PRT_11);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OSU_O51_OSU_O51_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, OSU_O51_OSU_O51_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, OSU_O51_OSU_O51_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, OSU_O51_OSU_O51_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_5(size_t index = 0) {
    try {
      return this->getObject(index, OSU_O51_OSU_O51_NTE_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_6(size_t index = 0) {
    try {
      return this->getObject(index, OSU_O51_OSU_O51_PID_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_7(size_t index = 0) {
    try {
      return this->getObject(index, OSU_O51_OSU_O51_PRT_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_8(size_t index = 0) {
    try {
      return this->getObject(index, OSU_O51_OSU_O51_ARV_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_10(size_t index = 0) {
    try {
      return this->getObject(index, OSU_O51_OSU_O51_ORC_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_11(size_t index = 0) {
    try {
      return this->getObject(index, OSU_O51_OSU_O51_PRT_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OSU_O51_OSU_O51_ */
} /* namespace HL7_29 */
#endif /*  __OSU_O51_OSU_O51__29_H__ */
