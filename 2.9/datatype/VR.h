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


#ifndef __VR_v29_H__
#define __VR_v29_H__

#include "../../common/Util.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* value range */
class VR : public HL7Data {
 public:
  VR() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    VR_1, /* First Data Code Value */
    VR_2, /* Last Data Code Value */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "VR"; }
  VR *create() const { return new VR(); }

 private:
  void init() {
    setName("VR");
    /* Init members */
    addObject<ST>(VR_1, "VR.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(VR_2, "VR.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * First Data Code Value
   */
  ST *getVR_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, VR_1);
  }

  ST *getFirstDataCodeValue(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, VR_1);
  }

  bool isVR_1(size_t index = 0) {
    try {
      return this->getObject(index, VR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFirstDataCodeValue(size_t index = 0) {
    try {
      return this->getObject(index, VR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Last Data Code Value
   */
  ST *getVR_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, VR_2);
  }

  ST *getLastDataCodeValue(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, VR_2);
  }

  bool isVR_2(size_t index = 0) {
    try {
      return this->getObject(index, VR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLastDataCodeValue(size_t index = 0) {
    try {
      return this->getObject(index, VR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End VR */

} /* End HL7_29 */

#endif /* __VR_v29_H__ */
