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


#ifndef __PMU_B07_PMU_B07__29_H__
#define __PMU_B07_PMU_B07__29_H__

#include "../../common/Util.h"
#include "../segment/CER.h"
#include "../segment/EVN.h"
#include "../segment/MSH.h"
#include "../segment/PRA.h"
#include "../segment/PRT.h"
#include "../segment/ROL.h"
#include "../segment/SFT.h"
#include "../segment/STF.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct PMU_B07_PMU_B07_CERTIFICATE; /* CERTIFICATE */

/*  */
struct PMU_B07_PMU_B07 : public HL7Message {
  PMU_B07_PMU_B07() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PMU_B07_PMU_B07_MSH_1,
    PMU_B07_PMU_B07_SFT_2,
    PMU_B07_PMU_B07_UAC_3,
    PMU_B07_PMU_B07_EVN_4,
    PMU_B07_PMU_B07_STF_5,
    PMU_B07_PMU_B07_PRA_6,
    PMU_B07_PMU_B07_CER_8,
    PMU_B07_PMU_B07_PRT_9,
    PMU_B07_PMU_B07_ROL_10,
    FIELD_ID_MAX
  };

  const char* className() const { return "PMU_B07_PMU_B07"; }
  PMU_B07_PMU_B07* create() const { return new PMU_B07_PMU_B07(); }

 private:
  /* Initialize object */
  void init() {
    setName("PMU_B07_PMU_B07");
    addObject<MSH>(PMU_B07_PMU_B07_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(PMU_B07_PMU_B07_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(PMU_B07_PMU_B07_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EVN>(PMU_B07_PMU_B07_EVN_4, "EVN.4", HL7::initialized, HL7::repetition_off);
    addObject<STF>(PMU_B07_PMU_B07_STF_5, "STF.5", HL7::initialized, HL7::repetition_off);
    addObject<PRA>(PMU_B07_PMU_B07_PRA_6, "PRA.6", HL7::optional, HL7::repetition_off);
    addObject<CER>(PMU_B07_PMU_B07_CER_8, "CER.8", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(PMU_B07_PMU_B07_PRT_9, "PRT.9", HL7::optional, HL7::repetition_on);
    addObject<ROL>(PMU_B07_PMU_B07_ROL_10, "ROL.10", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, PMU_B07_PMU_B07_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, PMU_B07_PMU_B07_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, PMU_B07_PMU_B07_UAC_3);
  }
  EVN* getEVN_4(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, PMU_B07_PMU_B07_EVN_4);
  }
  STF* getSTF_5(size_t index = 0) {
    return (STF*)this->getObjectSafe(index, PMU_B07_PMU_B07_STF_5);
  }
  PRA* getPRA_6(size_t index = 0) {
    return (PRA*)this->getObjectSafe(index, PMU_B07_PMU_B07_PRA_6);
  }
  CER* getCER_8(size_t index = 0) {
    return (CER*)this->getObjectSafe(index, PMU_B07_PMU_B07_CER_8);
  }
  PRT* getPRT_9(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PMU_B07_PMU_B07_PRT_9);
  }
  ROL* getROL_10(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PMU_B07_PMU_B07_ROL_10);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B07_PMU_B07_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B07_PMU_B07_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B07_PMU_B07_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_4(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B07_PMU_B07_EVN_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSTF_5(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B07_PMU_B07_STF_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRA_6(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B07_PMU_B07_PRA_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCER_8(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B07_PMU_B07_CER_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_9(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B07_PMU_B07_PRT_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_10(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B07_PMU_B07_ROL_10) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PMU_B07_PMU_B07_ */
} /* namespace HL7_29 */
#endif /*  __PMU_B07_PMU_B07__29_H__ */
