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


#ifndef __TCR_U11_TCU_U10__29_H__
#define __TCR_U11_TCU_U10__29_H__

#include "../../common/Util.h"
#include "../segment/EQU.h"
#include "../segment/MSH.h"
#include "../segment/ROL.h"
#include "../segment/SFT.h"
#include "../segment/SPM.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct TCR_U11_TCU_U10_TEST_CONFIGURATION; /* TEST_CONFIGURATION */

/*  */
struct TCR_U11_TCU_U10 : public HL7Message {
  TCR_U11_TCU_U10() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    TCR_U11_TCU_U10_MSH_1,
    TCR_U11_TCU_U10_SFT_2,
    TCR_U11_TCU_U10_UAC_3,
    TCR_U11_TCU_U10_EQU_4,
    TCR_U11_TCU_U10_ROL_6,
    TCR_U11_TCU_U10_SPM_7,
    FIELD_ID_MAX
  };

  const char* className() const { return "TCR_U11_TCU_U10"; }
  TCR_U11_TCU_U10* create() const { return new TCR_U11_TCU_U10(); }

 private:
  /* Initialize object */
  void init() {
    setName("TCR_U11_TCU_U10");
    addObject<MSH>(TCR_U11_TCU_U10_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(TCR_U11_TCU_U10_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(TCR_U11_TCU_U10_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EQU>(TCR_U11_TCU_U10_EQU_4, "EQU.4", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(TCR_U11_TCU_U10_ROL_6, "ROL.6", HL7::optional, HL7::repetition_off);
    addObject<SPM>(TCR_U11_TCU_U10_SPM_7, "SPM.7", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, TCR_U11_TCU_U10_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, TCR_U11_TCU_U10_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, TCR_U11_TCU_U10_UAC_3);
  }
  EQU* getEQU_4(size_t index = 0) {
    return (EQU*)this->getObjectSafe(index, TCR_U11_TCU_U10_EQU_4);
  }
  ROL* getROL_6(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, TCR_U11_TCU_U10_ROL_6);
  }
  SPM* getSPM_7(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, TCR_U11_TCU_U10_SPM_7);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, TCR_U11_TCU_U10_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, TCR_U11_TCU_U10_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, TCR_U11_TCU_U10_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEQU_4(size_t index = 0) {
    try {
      return this->getObject(index, TCR_U11_TCU_U10_EQU_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_6(size_t index = 0) {
    try {
      return this->getObject(index, TCR_U11_TCU_U10_ROL_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_7(size_t index = 0) {
    try {
      return this->getObject(index, TCR_U11_TCU_U10_SPM_7) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* TCR_U11_TCU_U10_ */
} /* namespace HL7_29 */
#endif /*  __TCR_U11_TCU_U10__29_H__ */
