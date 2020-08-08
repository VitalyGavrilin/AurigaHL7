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


#ifndef __PMU_B08_PMU_B08__29_H__
#define __PMU_B08_PMU_B08__29_H__

#include "../../common/Util.h"
#include "../segment/EVN.h"
#include "../segment/MSH.h"
#include "../segment/PRA.h"
#include "../segment/STF.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/*  */
struct PMU_B08_PMU_B08 : public HL7Message {
  PMU_B08_PMU_B08() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PMU_B08_PMU_B08_MSH_1,
    PMU_B08_PMU_B08_UAC_3,
    PMU_B08_PMU_B08_EVN_4,
    PMU_B08_PMU_B08_STF_5,
    PMU_B08_PMU_B08_PRA_6,
    FIELD_ID_MAX
  };

  const char* className() const { return "PMU_B08_PMU_B08"; }
  PMU_B08_PMU_B08* create() const { return new PMU_B08_PMU_B08(); }

 private:
  /* Initialize object */
  void init() {
    setName("PMU_B08_PMU_B08");
    addObject<MSH>(PMU_B08_PMU_B08_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<UAC>(PMU_B08_PMU_B08_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EVN>(PMU_B08_PMU_B08_EVN_4, "EVN.4", HL7::initialized, HL7::repetition_off);
    addObject<STF>(PMU_B08_PMU_B08_STF_5, "STF.5", HL7::initialized, HL7::repetition_off);
    addObject<PRA>(PMU_B08_PMU_B08_PRA_6, "PRA.6", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, PMU_B08_PMU_B08_MSH_1);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, PMU_B08_PMU_B08_UAC_3);
  }
  EVN* getEVN_4(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, PMU_B08_PMU_B08_EVN_4);
  }
  STF* getSTF_5(size_t index = 0) {
    return (STF*)this->getObjectSafe(index, PMU_B08_PMU_B08_STF_5);
  }
  PRA* getPRA_6(size_t index = 0) {
    return (PRA*)this->getObjectSafe(index, PMU_B08_PMU_B08_PRA_6);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B08_PMU_B08_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B08_PMU_B08_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_4(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B08_PMU_B08_EVN_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSTF_5(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B08_PMU_B08_STF_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRA_6(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B08_PMU_B08_PRA_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PMU_B08_PMU_B08_ */
} /* namespace HL7_29 */
#endif /*  __PMU_B08_PMU_B08__29_H__ */
