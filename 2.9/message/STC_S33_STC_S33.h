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


#ifndef __STC_S33_STC_S33__29_H__
#define __STC_S33_STC_S33__29_H__

#include "../../common/Util.h"
#include "../segment/MSH.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/*  */
struct STC_S33_STC_S33 : public HL7Message {
  STC_S33_STC_S33() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    STC_S33_STC_S33_MSH_1,
    STC_S33_STC_S33_SFT_2,
    STC_S33_STC_S33_UAC_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "STC_S33_STC_S33"; }
  STC_S33_STC_S33* create() const { return new STC_S33_STC_S33(); }

 private:
  /* Initialize object */
  void init() {
    setName("STC_S33_STC_S33");
    addObject<MSH>(STC_S33_STC_S33_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(STC_S33_STC_S33_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(STC_S33_STC_S33_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, STC_S33_STC_S33_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, STC_S33_STC_S33_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, STC_S33_STC_S33_UAC_3);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, STC_S33_STC_S33_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, STC_S33_STC_S33_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, STC_S33_STC_S33_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* STC_S33_STC_S33_ */
} /* namespace HL7_29 */
#endif /*  __STC_S33_STC_S33__29_H__ */
