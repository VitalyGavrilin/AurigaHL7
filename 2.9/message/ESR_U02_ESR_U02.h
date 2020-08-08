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


#ifndef __ESR_U02_ESR_U02__29_H__
#define __ESR_U02_ESR_U02__29_H__

#include "../../common/Util.h"
#include "../segment/EQU.h"
#include "../segment/MSH.h"
#include "../segment/ROL.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/*  */
struct ESR_U02_ESR_U02 : public HL7Message {
  ESR_U02_ESR_U02() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ESR_U02_ESR_U02_MSH_1,
    ESR_U02_ESR_U02_SFT_2,
    ESR_U02_ESR_U02_UAC_3,
    ESR_U02_ESR_U02_EQU_4,
    ESR_U02_ESR_U02_ROL_5,
    FIELD_ID_MAX
  };

  const char* className() const { return "ESR_U02_ESR_U02"; }
  ESR_U02_ESR_U02* create() const { return new ESR_U02_ESR_U02(); }

 private:
  /* Initialize object */
  void init() {
    setName("ESR_U02_ESR_U02");
    addObject<MSH>(ESR_U02_ESR_U02_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(ESR_U02_ESR_U02_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ESR_U02_ESR_U02_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EQU>(ESR_U02_ESR_U02_EQU_4, "EQU.4", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(ESR_U02_ESR_U02_ROL_5, "ROL.5", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ESR_U02_ESR_U02_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ESR_U02_ESR_U02_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ESR_U02_ESR_U02_UAC_3);
  }
  EQU* getEQU_4(size_t index = 0) {
    return (EQU*)this->getObjectSafe(index, ESR_U02_ESR_U02_EQU_4);
  }
  ROL* getROL_5(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ESR_U02_ESR_U02_ROL_5);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ESR_U02_ESR_U02_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, ESR_U02_ESR_U02_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, ESR_U02_ESR_U02_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEQU_4(size_t index = 0) {
    try {
      return this->getObject(index, ESR_U02_ESR_U02_EQU_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_5(size_t index = 0) {
    try {
      return this->getObject(index, ESR_U02_ESR_U02_ROL_5) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ESR_U02_ESR_U02_ */
} /* namespace HL7_29 */
#endif /*  __ESR_U02_ESR_U02__29_H__ */
