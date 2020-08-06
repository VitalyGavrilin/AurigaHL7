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


#ifndef __UVC_v29_H__
#define __UVC_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/MO.h"

namespace HL7_29 {

/* UB value code and amount */
class UVC : public HL7Data {
 public:
  UVC() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    UVC_1, /* Value Code */
    UVC_2, /* Value Amount */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "UVC"; }
  UVC *create() const { return new UVC(); }

 private:
  void init() {
    setName("UVC");
    /* Init members */
    addObject<CWE>(UVC_1, "UVC.1", HL7::initialized, HL7::repetition_off);
    addObject<MO>(UVC_2, "UVC.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Value Code
   */
  CWE *getUVC_1(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, UVC_1);
  }

  CWE *getValueCode(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, UVC_1);
  }

  bool isUVC_1(size_t index = 0) {
    try {
      return this->getObject(index, UVC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValueCode(size_t index = 0) {
    try {
      return this->getObject(index, UVC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Value Amount
   */
  MO *getUVC_2(size_t index = 0) {
    return (MO *)this->getObjectSafe(index, UVC_2);
  }

  MO *getValueAmount(size_t index = 0) {
    return (MO *)this->getObjectSafe(index, UVC_2);
  }

  bool isUVC_2(size_t index = 0) {
    try {
      return this->getObject(index, UVC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValueAmount(size_t index = 0) {
    try {
      return this->getObject(index, UVC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End UVC */

} /* End HL7_29 */

#endif /* __UVC_v29_H__ */
