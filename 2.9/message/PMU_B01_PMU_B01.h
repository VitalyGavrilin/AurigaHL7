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


#ifndef __PMU_B01_PMU_B01__29_H__
#define __PMU_B01_PMU_B01__29_H__

#include "../../common/Util.h"
#include "../segment/EVN.h"
#include "../segment/MSH.h"
#include "../segment/SFT.h"
#include "../segment/STF.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/*  */
struct PMU_B01_PMU_B01 : public HL7Message {
  PMU_B01_PMU_B01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PMU_B01_PMU_B01_MSH_1,
    PMU_B01_PMU_B01_SFT_2,
    PMU_B01_PMU_B01_UAC_3,
    PMU_B01_PMU_B01_EVN_4,
    PMU_B01_PMU_B01_STF_5,
    FIELD_ID_MAX
  };

  const char* className() const { return "PMU_B01_PMU_B01"; }
  PMU_B01_PMU_B01* create() const { return new PMU_B01_PMU_B01(); }

 private:
  /* Initialize object */
  void init() {
    setName("PMU_B01_PMU_B01");
    addObject<MSH>(PMU_B01_PMU_B01_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(PMU_B01_PMU_B01_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(PMU_B01_PMU_B01_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EVN>(PMU_B01_PMU_B01_EVN_4, "EVN.4", HL7::initialized, HL7::repetition_off);
    addObject<STF>(PMU_B01_PMU_B01_STF_5, "STF.5", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, PMU_B01_PMU_B01_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, PMU_B01_PMU_B01_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, PMU_B01_PMU_B01_UAC_3);
  }
  EVN* getEVN_4(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, PMU_B01_PMU_B01_EVN_4);
  }
  STF* getSTF_5(size_t index = 0) {
    return (STF*)this->getObjectSafe(index, PMU_B01_PMU_B01_STF_5);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B01_PMU_B01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B01_PMU_B01_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B01_PMU_B01_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_4(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B01_PMU_B01_EVN_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSTF_5(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B01_PMU_B01_STF_5) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PMU_B01_PMU_B01_ */
} /* namespace HL7_29 */
#endif /*  __PMU_B01_PMU_B01__29_H__ */
