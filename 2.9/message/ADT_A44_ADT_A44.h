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


#ifndef __ADT_A44_ADT_A44__29_H__
#define __ADT_A44_ADT_A44__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/EVN.h"
#include "../segment/MRG.h"
#include "../segment/MSH.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct ADT_A44_ADT_A44_PATIENT; /* PATIENT */

/*  */
struct ADT_A44_ADT_A44 : public HL7Message {
  ADT_A44_ADT_A44() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADT_A44_ADT_A44_MSH_1,
    ADT_A44_ADT_A44_ARV_2,
    ADT_A44_ADT_A44_SFT_3,
    ADT_A44_ADT_A44_UAC_4,
    ADT_A44_ADT_A44_EVN_5,
    ADT_A44_ADT_A44_ARV_7,
    ADT_A44_ADT_A44_MRG_8,
    ADT_A44_ADT_A44_PD1_9,
    ADT_A44_ADT_A44_PID_10,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADT_A44_ADT_A44"; }
  ADT_A44_ADT_A44* create() const { return new ADT_A44_ADT_A44(); }

 private:
  /* Initialize object */
  void init() {
    setName("ADT_A44_ADT_A44");
    addObject<MSH>(ADT_A44_ADT_A44_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ADT_A44_ADT_A44_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ADT_A44_ADT_A44_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ADT_A44_ADT_A44_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<EVN>(ADT_A44_ADT_A44_EVN_5, "EVN.5", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ADT_A44_ADT_A44_ARV_7, "ARV.7", HL7::optional, HL7::repetition_on);
    addObject<MRG>(ADT_A44_ADT_A44_MRG_8, "MRG.8", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(ADT_A44_ADT_A44_PD1_9, "PD1.9", HL7::optional, HL7::repetition_off);
    addObject<PID>(ADT_A44_ADT_A44_PID_10, "PID.10", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ADT_A44_ADT_A44_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ADT_A44_ADT_A44_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ADT_A44_ADT_A44_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ADT_A44_ADT_A44_UAC_4);
  }
  EVN* getEVN_5(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, ADT_A44_ADT_A44_EVN_5);
  }
  ARV* getARV_7(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ADT_A44_ADT_A44_ARV_7);
  }
  MRG* getMRG_8(size_t index = 0) {
    return (MRG*)this->getObjectSafe(index, ADT_A44_ADT_A44_MRG_8);
  }
  PD1* getPD1_9(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ADT_A44_ADT_A44_PD1_9);
  }
  PID* getPID_10(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ADT_A44_ADT_A44_PID_10);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A44_ADT_A44_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A44_ADT_A44_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A44_ADT_A44_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A44_ADT_A44_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_5(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A44_ADT_A44_EVN_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_7(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A44_ADT_A44_ARV_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMRG_8(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A44_ADT_A44_MRG_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_9(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A44_ADT_A44_PD1_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_10(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A44_ADT_A44_PID_10) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A44_ADT_A44_ */
} /* namespace HL7_29 */
#endif /*  __ADT_A44_ADT_A44__29_H__ */
