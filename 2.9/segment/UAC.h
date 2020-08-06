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


#ifndef __UAC_v29_H__
#define __UAC_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/ED.h"

namespace HL7_29 {

/* UAC */
class UAC : public HL7Segment {
 public:
  UAC() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    UAC_1,
    UAC_2,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "UAC"; }
  UAC* create() const { return new UAC(); }

 private:
  void init() {
    setName("UAC");
    /* Init members */
    addObject<CWE>(UAC_1, "UAC.1", HL7::initialized, HL7::repetition_off);
    addObject<ED>(UAC_2, "UAC.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * User Authentication Credential Type Code
   */

  CWE* getUAC_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, UAC_1);
  }

  CWE* getUserAuthenticationCredentialTypeCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, UAC_1);
  }

  bool isUAC_1(size_t index = 0) {
    try {
      return this->getObject(index, UAC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUserAuthenticationCredentialTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, UAC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * User Authentication Credential
   */

  ED* getUAC_2(size_t index = 0) {
    return (ED*)this->getObjectSafe(index, UAC_2);
  }

  ED* getUserAuthenticationCredential(size_t index = 0) {
    return (ED*)this->getObjectSafe(index, UAC_2);
  }

  bool isUAC_2(size_t index = 0) {
    try {
      return this->getObject(index, UAC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUserAuthenticationCredential(size_t index = 0) {
    try {
      return this->getObject(index, UAC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of UAC */

} /* End of namespace HL7_29 */
#endif /* __UAC_v29_H__ */
