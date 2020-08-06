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


#ifndef __BAR_P02_BAR_P02__29_H__
#define __BAR_P02_BAR_P02__29_H__

#include "../../common/Util.h"
#include "../segment/EVN.h"
#include "../segment/MSH.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct BAR_P02_BAR_P02_PATIENT; /* PATIENT */

/*  */
struct BAR_P02_BAR_P02 : public HL7Message {
  BAR_P02_BAR_P02() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    BAR_P02_BAR_P02_MSH_1,
    BAR_P02_BAR_P02_UAC_3,
    BAR_P02_BAR_P02_EVN_4,
    BAR_P02_BAR_P02_PD1_8,
    BAR_P02_BAR_P02_PID_9,
    BAR_P02_BAR_P02_PV1_10,
    FIELD_ID_MAX
  };

  const char* className() const { return "BAR_P02_BAR_P02"; }
  BAR_P02_BAR_P02* create() const { return new BAR_P02_BAR_P02(); }

 private:
  /* Initialize object */
  void init() {
    setName("BAR_P02_BAR_P02");
    addObject<MSH>(BAR_P02_BAR_P02_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<UAC>(BAR_P02_BAR_P02_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EVN>(BAR_P02_BAR_P02_EVN_4, "EVN.4", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(BAR_P02_BAR_P02_PD1_8, "PD1.8", HL7::optional, HL7::repetition_off);
    addObject<PID>(BAR_P02_BAR_P02_PID_9, "PID.9", HL7::initialized, HL7::repetition_off);
    addObject<PV1>(BAR_P02_BAR_P02_PV1_10, "PV1.10", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, BAR_P02_BAR_P02_MSH_1);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, BAR_P02_BAR_P02_UAC_3);
  }
  EVN* getEVN_4(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, BAR_P02_BAR_P02_EVN_4);
  }
  PD1* getPD1_8(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, BAR_P02_BAR_P02_PD1_8);
  }
  PID* getPID_9(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, BAR_P02_BAR_P02_PID_9);
  }
  PV1* getPV1_10(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, BAR_P02_BAR_P02_PV1_10);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P02_BAR_P02_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P02_BAR_P02_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_4(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P02_BAR_P02_EVN_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_8(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P02_BAR_P02_PD1_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_9(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P02_BAR_P02_PID_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_10(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P02_BAR_P02_PV1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* BAR_P02_BAR_P02_ */
} /* namespace HL7_29 */
#endif /*  __BAR_P02_BAR_P02__29_H__ */
