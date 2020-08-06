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


#ifndef __LSR_U13_LSU_U12__29_H__
#define __LSR_U13_LSU_U12__29_H__

#include "../../common/Util.h"
#include "../segment/EQU.h"
#include "../segment/MSH.h"
#include "../segment/ROL.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/*  */
struct LSR_U13_LSU_U12 : public HL7Message {
  LSR_U13_LSU_U12() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    LSR_U13_LSU_U12_MSH_1,
    LSR_U13_LSU_U12_SFT_2,
    LSR_U13_LSU_U12_UAC_3,
    LSR_U13_LSU_U12_EQU_4,
    LSR_U13_LSU_U12_ROL_6,
    FIELD_ID_MAX
  };

  const char* className() const { return "LSR_U13_LSU_U12"; }
  LSR_U13_LSU_U12* create() const { return new LSR_U13_LSU_U12(); }

 private:
  /* Initialize object */
  void init() {
    setName("LSR_U13_LSU_U12");
    addObject<MSH>(LSR_U13_LSU_U12_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(LSR_U13_LSU_U12_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(LSR_U13_LSU_U12_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EQU>(LSR_U13_LSU_U12_EQU_4, "EQU.4", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(LSR_U13_LSU_U12_ROL_6, "ROL.6", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, LSR_U13_LSU_U12_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, LSR_U13_LSU_U12_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, LSR_U13_LSU_U12_UAC_3);
  }
  EQU* getEQU_4(size_t index = 0) {
    return (EQU*)this->getObjectSafe(index, LSR_U13_LSU_U12_EQU_4);
  }
  ROL* getROL_6(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, LSR_U13_LSU_U12_ROL_6);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, LSR_U13_LSU_U12_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, LSR_U13_LSU_U12_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, LSR_U13_LSU_U12_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEQU_4(size_t index = 0) {
    try {
      return this->getObject(index, LSR_U13_LSU_U12_EQU_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_6(size_t index = 0) {
    try {
      return this->getObject(index, LSR_U13_LSU_U12_ROL_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* LSR_U13_LSU_U12_ */
} /* namespace HL7_29 */
#endif /*  __LSR_U13_LSU_U12__29_H__ */
