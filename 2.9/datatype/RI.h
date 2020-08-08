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


#ifndef __RI_v29_H__
#define __RI_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* repeat interval */
class RI : public HL7Data {
 public:
  RI() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    RI_1, /* Repeat Pattern */
    RI_2, /* Explicit Time Interval */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "RI"; }
  RI *create() const { return new RI(); }

 private:
  void init() {
    setName("RI");
    /* Init members */
    addObject<CWE>(RI_1, "RI.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RI_2, "RI.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Repeat Pattern
   */
  CWE *getRI_1(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, RI_1);
  }

  CWE *getRepeatPattern(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, RI_1);
  }

  bool isRI_1(size_t index = 0) {
    try {
      return this->getObject(index, RI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRepeatPattern(size_t index = 0) {
    try {
      return this->getObject(index, RI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Explicit Time Interval
   */
  ST *getRI_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, RI_2);
  }

  ST *getExplicitTimeInterval(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, RI_2);
  }

  bool isRI_2(size_t index = 0) {
    try {
      return this->getObject(index, RI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExplicitTimeInterval(size_t index = 0) {
    try {
      return this->getObject(index, RI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End RI */

} /* End HL7_29 */

#endif /* __RI_v29_H__ */
