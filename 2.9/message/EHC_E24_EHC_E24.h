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


#ifndef __EHC_E24_EHC_E24__29_H__
#define __EHC_E24_EHC_E24__29_H__

#include "../../common/Util.h"
#include "../segment/ADJ.h"
#include "../segment/AUT.h"
#include "../segment/IVC.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/PSL.h"

namespace HL7_29 {

/* Internal structures/groups */
struct EHC_E24_EHC_E24_AUTHORIZATION_RESPONSE_INFO; /* AUTHORIZATION_RESPONSE_INFO */
struct EHC_E24_EHC_E24_PSL_ITEM_INFO; /* PSL_ITEM_INFO */

/*  */
struct EHC_E24_EHC_E24 : public HL7Message {
  EHC_E24_EHC_E24() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EHC_E24_EHC_E24_MSH_1,
    EHC_E24_EHC_E24_MSA_4,
    EHC_E24_EHC_E24_IVC_8,
    EHC_E24_EHC_E24_ADJ_9,
    EHC_E24_EHC_E24_AUT_10,
    EHC_E24_EHC_E24_PSL_11,
    FIELD_ID_MAX
  };

  const char* className() const { return "EHC_E24_EHC_E24"; }
  EHC_E24_EHC_E24* create() const { return new EHC_E24_EHC_E24(); }

 private:
  /* Initialize object */
  void init() {
    setName("EHC_E24_EHC_E24");
    addObject<MSH>(EHC_E24_EHC_E24_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<MSA>(EHC_E24_EHC_E24_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<IVC>(EHC_E24_EHC_E24_IVC_8, "IVC.8", HL7::initialized, HL7::repetition_off);
    addObject<ADJ>(EHC_E24_EHC_E24_ADJ_9, "ADJ.9", HL7::optional, HL7::repetition_on);
    addObject<AUT>(EHC_E24_EHC_E24_AUT_10, "AUT.10", HL7::optional, HL7::repetition_off);
    addObject<PSL>(EHC_E24_EHC_E24_PSL_11, "PSL.11", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, EHC_E24_EHC_E24_MSH_1);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, EHC_E24_EHC_E24_MSA_4);
  }
  IVC* getIVC_8(size_t index = 0) {
    return (IVC*)this->getObjectSafe(index, EHC_E24_EHC_E24_IVC_8);
  }
  ADJ* getADJ_9(size_t index = 0) {
    return (ADJ*)this->getObjectSafe(index, EHC_E24_EHC_E24_ADJ_9);
  }
  AUT* getAUT_10(size_t index = 0) {
    return (AUT*)this->getObjectSafe(index, EHC_E24_EHC_E24_AUT_10);
  }
  PSL* getPSL_11(size_t index = 0) {
    return (PSL*)this->getObjectSafe(index, EHC_E24_EHC_E24_PSL_11);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E24_EHC_E24_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E24_EHC_E24_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIVC_8(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E24_EHC_E24_IVC_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isADJ_9(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E24_EHC_E24_ADJ_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAUT_10(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E24_EHC_E24_AUT_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSL_11(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E24_EHC_E24_PSL_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EHC_E24_EHC_E24_ */
} /* namespace HL7_29 */
#endif /*  __EHC_E24_EHC_E24__29_H__ */
