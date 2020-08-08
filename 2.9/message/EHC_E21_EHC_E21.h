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


#ifndef __EHC_E21_EHC_E21__29_H__
#define __EHC_E21_EHC_E21__29_H__

#include "../../common/Util.h"
#include "../segment/AUT.h"
#include "../segment/IVC.h"
#include "../segment/MSH.h"
#include "../segment/PSL.h"

namespace HL7_29 {

/* Internal structures/groups */
struct EHC_E21_EHC_E21_AUTHORIZATION_REQUEST; /* AUTHORIZATION_REQUEST */
struct EHC_E21_EHC_E21_PSL_ITEM_INFO; /* PSL_ITEM_INFO */

/*  */
struct EHC_E21_EHC_E21 : public HL7Message {
  EHC_E21_EHC_E21() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EHC_E21_EHC_E21_MSH_1,
    EHC_E21_EHC_E21_IVC_6,
    EHC_E21_EHC_E21_AUT_7,
    EHC_E21_EHC_E21_PSL_9,
    FIELD_ID_MAX
  };

  const char* className() const { return "EHC_E21_EHC_E21"; }
  EHC_E21_EHC_E21* create() const { return new EHC_E21_EHC_E21(); }

 private:
  /* Initialize object */
  void init() {
    setName("EHC_E21_EHC_E21");
    addObject<MSH>(EHC_E21_EHC_E21_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<IVC>(EHC_E21_EHC_E21_IVC_6, "IVC.6", HL7::initialized, HL7::repetition_off);
    addObject<AUT>(EHC_E21_EHC_E21_AUT_7, "AUT.7", HL7::optional, HL7::repetition_off);
    addObject<PSL>(EHC_E21_EHC_E21_PSL_9, "PSL.9", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, EHC_E21_EHC_E21_MSH_1);
  }
  IVC* getIVC_6(size_t index = 0) {
    return (IVC*)this->getObjectSafe(index, EHC_E21_EHC_E21_IVC_6);
  }
  AUT* getAUT_7(size_t index = 0) {
    return (AUT*)this->getObjectSafe(index, EHC_E21_EHC_E21_AUT_7);
  }
  PSL* getPSL_9(size_t index = 0) {
    return (PSL*)this->getObjectSafe(index, EHC_E21_EHC_E21_PSL_9);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E21_EHC_E21_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIVC_6(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E21_EHC_E21_IVC_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAUT_7(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E21_EHC_E21_AUT_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSL_9(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E21_EHC_E21_PSL_9) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EHC_E21_EHC_E21_ */
} /* namespace HL7_29 */
#endif /*  __EHC_E21_EHC_E21__29_H__ */
