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


#ifndef __ADT_A42_ADT_A39__29_H__
#define __ADT_A42_ADT_A39__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/EVN.h"
#include "../segment/MRG.h"
#include "../segment/MSH.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct ADT_A42_ADT_A39_PATIENT; /* PATIENT */

/*  */
struct ADT_A42_ADT_A39 : public HL7Message {
  ADT_A42_ADT_A39() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADT_A42_ADT_A39_MSH_1,
    ADT_A42_ADT_A39_ARV_2,
    ADT_A42_ADT_A39_SFT_3,
    ADT_A42_ADT_A39_UAC_4,
    ADT_A42_ADT_A39_EVN_5,
    ADT_A42_ADT_A39_MRG_7,
    ADT_A42_ADT_A39_PD1_8,
    ADT_A42_ADT_A39_PID_9,
    ADT_A42_ADT_A39_PV1_10,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADT_A42_ADT_A39"; }
  ADT_A42_ADT_A39* create() const { return new ADT_A42_ADT_A39(); }

 private:
  /* Initialize object */
  void init() {
    setName("ADT_A42_ADT_A39");
    addObject<MSH>(ADT_A42_ADT_A39_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ADT_A42_ADT_A39_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ADT_A42_ADT_A39_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ADT_A42_ADT_A39_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<EVN>(ADT_A42_ADT_A39_EVN_5, "EVN.5", HL7::initialized, HL7::repetition_off);
    addObject<MRG>(ADT_A42_ADT_A39_MRG_7, "MRG.7", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(ADT_A42_ADT_A39_PD1_8, "PD1.8", HL7::optional, HL7::repetition_off);
    addObject<PID>(ADT_A42_ADT_A39_PID_9, "PID.9", HL7::initialized, HL7::repetition_off);
    addObject<PV1>(ADT_A42_ADT_A39_PV1_10, "PV1.10", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ADT_A42_ADT_A39_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ADT_A42_ADT_A39_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ADT_A42_ADT_A39_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ADT_A42_ADT_A39_UAC_4);
  }
  EVN* getEVN_5(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, ADT_A42_ADT_A39_EVN_5);
  }
  MRG* getMRG_7(size_t index = 0) {
    return (MRG*)this->getObjectSafe(index, ADT_A42_ADT_A39_MRG_7);
  }
  PD1* getPD1_8(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ADT_A42_ADT_A39_PD1_8);
  }
  PID* getPID_9(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ADT_A42_ADT_A39_PID_9);
  }
  PV1* getPV1_10(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ADT_A42_ADT_A39_PV1_10);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A42_ADT_A39_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A42_ADT_A39_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A42_ADT_A39_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A42_ADT_A39_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_5(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A42_ADT_A39_EVN_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMRG_7(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A42_ADT_A39_MRG_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_8(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A42_ADT_A39_PD1_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_9(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A42_ADT_A39_PID_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_10(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A42_ADT_A39_PV1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A42_ADT_A39_ */
} /* namespace HL7_29 */
#endif /*  __ADT_A42_ADT_A39__29_H__ */
