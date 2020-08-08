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


#ifndef __INR_U14_INR_U14__29_H__
#define __INR_U14_INR_U14__29_H__

#include "../../common/Util.h"
#include "../segment/EQU.h"
#include "../segment/INV.h"
#include "../segment/MSH.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/*  */
struct INR_U14_INR_U14 : public HL7Message {
  INR_U14_INR_U14() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    INR_U14_INR_U14_MSH_1,
    INR_U14_INR_U14_SFT_2,
    INR_U14_INR_U14_UAC_3,
    INR_U14_INR_U14_EQU_4,
    INR_U14_INR_U14_INV_5,
    FIELD_ID_MAX
  };

  const char* className() const { return "INR_U14_INR_U14"; }
  INR_U14_INR_U14* create() const { return new INR_U14_INR_U14(); }

 private:
  /* Initialize object */
  void init() {
    setName("INR_U14_INR_U14");
    addObject<MSH>(INR_U14_INR_U14_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(INR_U14_INR_U14_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(INR_U14_INR_U14_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EQU>(INR_U14_INR_U14_EQU_4, "EQU.4", HL7::initialized, HL7::repetition_off);
    addObject<INV>(INR_U14_INR_U14_INV_5, "INV.5", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, INR_U14_INR_U14_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, INR_U14_INR_U14_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, INR_U14_INR_U14_UAC_3);
  }
  EQU* getEQU_4(size_t index = 0) {
    return (EQU*)this->getObjectSafe(index, INR_U14_INR_U14_EQU_4);
  }
  INV* getINV_5(size_t index = 0) {
    return (INV*)this->getObjectSafe(index, INR_U14_INR_U14_INV_5);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, INR_U14_INR_U14_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, INR_U14_INR_U14_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, INR_U14_INR_U14_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEQU_4(size_t index = 0) {
    try {
      return this->getObject(index, INR_U14_INR_U14_EQU_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINV_5(size_t index = 0) {
    try {
      return this->getObject(index, INR_U14_INR_U14_INV_5) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* INR_U14_INR_U14_ */
} /* namespace HL7_29 */
#endif /*  __INR_U14_INR_U14__29_H__ */
