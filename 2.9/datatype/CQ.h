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


#ifndef __CQ_v29_H__
#define __CQ_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/NM.h"

namespace HL7_29 {

/* composite quantity with units */
class CQ : public HL7Data {
 public:
  CQ() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CQ_1, /* Quantity */
    CQ_2, /* Units */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CQ"; }
  CQ *create() const { return new CQ(); }

 private:
  void init() {
    setName("CQ");
    /* Init members */
    addObject<NM>(CQ_1, "CQ.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CQ_2, "CQ.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Quantity
   */
  NM *getCQ_1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CQ_1);
  }

  NM *getQuantity(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CQ_1);
  }

  bool isCQ_1(size_t index = 0) {
    try {
      return this->getObject(index, CQ_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQuantity(size_t index = 0) {
    try {
      return this->getObject(index, CQ_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Units
   */
  CWE *getCQ_2(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, CQ_2);
  }

  CWE *getUnits(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, CQ_2);
  }

  bool isCQ_2(size_t index = 0) {
    try {
      return this->getObject(index, CQ_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUnits(size_t index = 0) {
    try {
      return this->getObject(index, CQ_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CQ */

} /* End HL7_29 */

#endif /* __CQ_v29_H__ */
