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


#ifndef __ACK__29_H__
#define __ACK__29_H__

#include "../../common/Util.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Acknowledgment */
struct ACK : public HL7Message {
  ACK() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ACK_MSH_1,
    ACK_SFT_2,
    ACK_UAC_3,
    ACK_MSA_4,
    ACK_ERR_5,
    FIELD_ID_MAX
  };

  const char* className() const { return "ACK"; }
  ACK* create() const { return new ACK(); }

 private:
  /* Initialize object */
  void init() {
    setName("ACK");
    addObject<MSH>(ACK_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(ACK_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ACK_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MSA>(ACK_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(ACK_ERR_5, "ERR.5", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ACK_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ACK_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ACK_UAC_3);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ACK_MSA_4);
  }
  ERR* getERR_5(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ACK_ERR_5);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ACK_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, ACK_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, ACK_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, ACK_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_5(size_t index = 0) {
    try {
      return this->getObject(index, ACK_ERR_5) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ACK_ */
} /* namespace HL7_29 */
#endif /*  __ACK__29_H__ */
