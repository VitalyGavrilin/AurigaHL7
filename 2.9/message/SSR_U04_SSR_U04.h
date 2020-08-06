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


#ifndef __SSR_U04_SSR_U04__29_H__
#define __SSR_U04_SSR_U04__29_H__

#include "../../common/Util.h"
#include "../segment/EQU.h"
#include "../segment/MSH.h"
#include "../segment/ROL.h"
#include "../segment/SAC.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct SSR_U04_SSR_U04_SPECIMEN_CONTAINER; /* SPECIMEN_CONTAINER */

/*  */
struct SSR_U04_SSR_U04 : public HL7Message {
  SSR_U04_SSR_U04() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SSR_U04_SSR_U04_MSH_1,
    SSR_U04_SSR_U04_SFT_2,
    SSR_U04_SSR_U04_UAC_3,
    SSR_U04_SSR_U04_EQU_4,
    SSR_U04_SSR_U04_ROL_6,
    SSR_U04_SSR_U04_SAC_7,
    FIELD_ID_MAX
  };

  const char* className() const { return "SSR_U04_SSR_U04"; }
  SSR_U04_SSR_U04* create() const { return new SSR_U04_SSR_U04(); }

 private:
  /* Initialize object */
  void init() {
    setName("SSR_U04_SSR_U04");
    addObject<MSH>(SSR_U04_SSR_U04_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(SSR_U04_SSR_U04_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(SSR_U04_SSR_U04_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EQU>(SSR_U04_SSR_U04_EQU_4, "EQU.4", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(SSR_U04_SSR_U04_ROL_6, "ROL.6", HL7::optional, HL7::repetition_off);
    addObject<SAC>(SSR_U04_SSR_U04_SAC_7, "SAC.7", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, SSR_U04_SSR_U04_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, SSR_U04_SSR_U04_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, SSR_U04_SSR_U04_UAC_3);
  }
  EQU* getEQU_4(size_t index = 0) {
    return (EQU*)this->getObjectSafe(index, SSR_U04_SSR_U04_EQU_4);
  }
  ROL* getROL_6(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, SSR_U04_SSR_U04_ROL_6);
  }
  SAC* getSAC_7(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, SSR_U04_SSR_U04_SAC_7);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, SSR_U04_SSR_U04_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, SSR_U04_SSR_U04_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, SSR_U04_SSR_U04_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEQU_4(size_t index = 0) {
    try {
      return this->getObject(index, SSR_U04_SSR_U04_EQU_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_6(size_t index = 0) {
    try {
      return this->getObject(index, SSR_U04_SSR_U04_ROL_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_7(size_t index = 0) {
    try {
      return this->getObject(index, SSR_U04_SSR_U04_SAC_7) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SSR_U04_SSR_U04_ */
} /* namespace HL7_29 */
#endif /*  __SSR_U04_SSR_U04__29_H__ */
