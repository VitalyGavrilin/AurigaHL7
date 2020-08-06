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


#ifndef __BAR_P06_BAR_P06__29_H__
#define __BAR_P06_BAR_P06__29_H__

#include "../../common/Util.h"
#include "../segment/EVN.h"
#include "../segment/MSH.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct BAR_P06_BAR_P06_PATIENT; /* PATIENT */

/*  */
struct BAR_P06_BAR_P06 : public HL7Message {
  BAR_P06_BAR_P06() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    BAR_P06_BAR_P06_MSH_1,
    BAR_P06_BAR_P06_UAC_3,
    BAR_P06_BAR_P06_EVN_4,
    BAR_P06_BAR_P06_PID_7,
    BAR_P06_BAR_P06_PV1_8,
    FIELD_ID_MAX
  };

  const char* className() const { return "BAR_P06_BAR_P06"; }
  BAR_P06_BAR_P06* create() const { return new BAR_P06_BAR_P06(); }

 private:
  /* Initialize object */
  void init() {
    setName("BAR_P06_BAR_P06");
    addObject<MSH>(BAR_P06_BAR_P06_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<UAC>(BAR_P06_BAR_P06_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EVN>(BAR_P06_BAR_P06_EVN_4, "EVN.4", HL7::initialized, HL7::repetition_off);
    addObject<PID>(BAR_P06_BAR_P06_PID_7, "PID.7", HL7::initialized, HL7::repetition_off);
    addObject<PV1>(BAR_P06_BAR_P06_PV1_8, "PV1.8", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, BAR_P06_BAR_P06_MSH_1);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, BAR_P06_BAR_P06_UAC_3);
  }
  EVN* getEVN_4(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, BAR_P06_BAR_P06_EVN_4);
  }
  PID* getPID_7(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, BAR_P06_BAR_P06_PID_7);
  }
  PV1* getPV1_8(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, BAR_P06_BAR_P06_PV1_8);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P06_BAR_P06_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P06_BAR_P06_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_4(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P06_BAR_P06_EVN_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_7(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P06_BAR_P06_PID_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_8(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P06_BAR_P06_PV1_8) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* BAR_P06_BAR_P06_ */
} /* namespace HL7_29 */
#endif /*  __BAR_P06_BAR_P06__29_H__ */
