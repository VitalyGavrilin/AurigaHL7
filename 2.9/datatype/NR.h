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


#ifndef __NR_v29_H__
#define __NR_v29_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"

namespace HL7_29 {

/* numeric range */
class NR : public HL7Data {
 public:
  NR() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    NR_1, /* Low Value */
    NR_2, /* High Value */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "NR"; }
  NR *create() const { return new NR(); }

 private:
  void init() {
    setName("NR");
    /* Init members */
    addObject<NM>(NR_1, "NR.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(NR_2, "NR.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Low Value
   */
  NM *getNR_1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NR_1);
  }

  NM *getLowValue(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NR_1);
  }

  bool isNR_1(size_t index = 0) {
    try {
      return this->getObject(index, NR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLowValue(size_t index = 0) {
    try {
      return this->getObject(index, NR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * High Value
   */
  NM *getNR_2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NR_2);
  }

  NM *getHighValue(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NR_2);
  }

  bool isNR_2(size_t index = 0) {
    try {
      return this->getObject(index, NR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHighValue(size_t index = 0) {
    try {
      return this->getObject(index, NR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End NR */

} /* End HL7_29 */

#endif /* __NR_v29_H__ */
