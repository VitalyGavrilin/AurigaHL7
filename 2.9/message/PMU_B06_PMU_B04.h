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


#ifndef __PMU_B06_PMU_B04__29_H__
#define __PMU_B06_PMU_B04__29_H__

#include "../../common/Util.h"
#include "../segment/EVN.h"
#include "../segment/MSH.h"
#include "../segment/STF.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/*  */
struct PMU_B06_PMU_B04 : public HL7Message {
  PMU_B06_PMU_B04() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PMU_B06_PMU_B04_MSH_1,
    PMU_B06_PMU_B04_UAC_3,
    PMU_B06_PMU_B04_EVN_4,
    PMU_B06_PMU_B04_STF_5,
    FIELD_ID_MAX
  };

  const char* className() const { return "PMU_B06_PMU_B04"; }
  PMU_B06_PMU_B04* create() const { return new PMU_B06_PMU_B04(); }

 private:
  /* Initialize object */
  void init() {
    setName("PMU_B06_PMU_B04");
    addObject<MSH>(PMU_B06_PMU_B04_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<UAC>(PMU_B06_PMU_B04_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EVN>(PMU_B06_PMU_B04_EVN_4, "EVN.4", HL7::initialized, HL7::repetition_off);
    addObject<STF>(PMU_B06_PMU_B04_STF_5, "STF.5", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, PMU_B06_PMU_B04_MSH_1);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, PMU_B06_PMU_B04_UAC_3);
  }
  EVN* getEVN_4(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, PMU_B06_PMU_B04_EVN_4);
  }
  STF* getSTF_5(size_t index = 0) {
    return (STF*)this->getObjectSafe(index, PMU_B06_PMU_B04_STF_5);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B06_PMU_B04_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B06_PMU_B04_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_4(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B06_PMU_B04_EVN_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSTF_5(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B06_PMU_B04_STF_5) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PMU_B06_PMU_B04_ */
} /* namespace HL7_29 */
#endif /*  __PMU_B06_PMU_B04__29_H__ */
