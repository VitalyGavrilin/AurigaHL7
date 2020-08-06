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


#ifndef __NPU_v29_H__
#define __NPU_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/PL.h"

namespace HL7_29 {

/* NPU */
class NPU : public HL7Segment {
 public:
  NPU() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    NPU_1,
    NPU_2,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "NPU"; }
  NPU* create() const { return new NPU(); }

 private:
  void init() {
    setName("NPU");
    /* Init members */
    addObject<PL>(NPU_1, "NPU.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(NPU_2, "NPU.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Bed Location
   */

  PL* getNPU_1(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, NPU_1);
  }

  PL* getBedLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, NPU_1);
  }

  bool isNPU_1(size_t index = 0) {
    try {
      return this->getObject(index, NPU_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBedLocation(size_t index = 0) {
    try {
      return this->getObject(index, NPU_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Bed Status
   */

  CWE* getNPU_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, NPU_2);
  }

  CWE* getBedStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, NPU_2);
  }

  bool isNPU_2(size_t index = 0) {
    try {
      return this->getObject(index, NPU_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBedStatus(size_t index = 0) {
    try {
      return this->getObject(index, NPU_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of NPU */

} /* End of namespace HL7_29 */
#endif /* __NPU_v29_H__ */
