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


#ifndef __SLR_S29_SLR_S28__29_H__
#define __SLR_S29_SLR_S28__29_H__

#include "../../common/Util.h"
#include "../segment/MSH.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/*  */
struct SLR_S29_SLR_S28 : public HL7Message {
  SLR_S29_SLR_S28() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SLR_S29_SLR_S28_MSH_1,
    SLR_S29_SLR_S28_SFT_2,
    SLR_S29_SLR_S28_UAC_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "SLR_S29_SLR_S28"; }
  SLR_S29_SLR_S28* create() const { return new SLR_S29_SLR_S28(); }

 private:
  /* Initialize object */
  void init() {
    setName("SLR_S29_SLR_S28");
    addObject<MSH>(SLR_S29_SLR_S28_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(SLR_S29_SLR_S28_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(SLR_S29_SLR_S28_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, SLR_S29_SLR_S28_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, SLR_S29_SLR_S28_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, SLR_S29_SLR_S28_UAC_3);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, SLR_S29_SLR_S28_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, SLR_S29_SLR_S28_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, SLR_S29_SLR_S28_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SLR_S29_SLR_S28_ */
} /* namespace HL7_29 */
#endif /*  __SLR_S29_SLR_S28__29_H__ */
