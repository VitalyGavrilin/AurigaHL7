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


#ifndef __WVS_v29_H__
#define __WVS_v29_H__

#include "../../common/Util.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* waveform source */
class WVS : public HL7Data {
 public:
  WVS() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    WVS_1, /* Source One Name */
    WVS_2, /* Source Two Name */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "WVS"; }
  WVS *create() const { return new WVS(); }

 private:
  void init() {
    setName("WVS");
    /* Init members */
    addObject<ST>(WVS_1, "WVS.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(WVS_2, "WVS.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Source One Name
   */
  ST *getWVS_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, WVS_1);
  }

  ST *getSourceOneName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, WVS_1);
  }

  bool isWVS_1(size_t index = 0) {
    try {
      return this->getObject(index, WVS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourceOneName(size_t index = 0) {
    try {
      return this->getObject(index, WVS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Source Two Name
   */
  ST *getWVS_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, WVS_2);
  }

  ST *getSourceTwoName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, WVS_2);
  }

  bool isWVS_2(size_t index = 0) {
    try {
      return this->getObject(index, WVS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourceTwoName(size_t index = 0) {
    try {
      return this->getObject(index, WVS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End WVS */

} /* End HL7_29 */

#endif /* __WVS_v29_H__ */
