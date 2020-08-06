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


#ifndef __SCV_v29_H__
#define __SCV_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* scheduling class value pair */
class SCV : public HL7Data {
 public:
  SCV() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    SCV_1, /* Parameter Class */
    SCV_2, /* Parameter Value */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "SCV"; }
  SCV *create() const { return new SCV(); }

 private:
  void init() {
    setName("SCV");
    /* Init members */
    addObject<CWE>(SCV_1, "SCV.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(SCV_2, "SCV.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Parameter Class
   */
  CWE *getSCV_1(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, SCV_1);
  }

  CWE *getParameterClass(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, SCV_1);
  }

  bool isSCV_1(size_t index = 0) {
    try {
      return this->getObject(index, SCV_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParameterClass(size_t index = 0) {
    try {
      return this->getObject(index, SCV_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Parameter Value
   */
  ST *getSCV_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SCV_2);
  }

  ST *getParameterValue(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SCV_2);
  }

  bool isSCV_2(size_t index = 0) {
    try {
      return this->getObject(index, SCV_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParameterValue(size_t index = 0) {
    try {
      return this->getObject(index, SCV_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End SCV */

} /* End HL7_29 */

#endif /* __SCV_v29_H__ */
