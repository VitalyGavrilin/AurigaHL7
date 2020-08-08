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


#ifndef __MO_v29_H__
#define __MO_v29_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"

namespace HL7_29 {

/* money */
class MO : public HL7Data {
 public:
  MO() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    MO_1, /* Quantity */
    MO_2, /* Denomination */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "MO"; }
  MO *create() const { return new MO(); }

 private:
  void init() {
    setName("MO");
    /* Init members */
    addObject<NM>(MO_1, "MO.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(MO_2, "MO.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Quantity
   */
  NM *getMO_1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MO_1);
  }

  NM *getQuantity(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MO_1);
  }

  bool isMO_1(size_t index = 0) {
    try {
      return this->getObject(index, MO_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQuantity(size_t index = 0) {
    try {
      return this->getObject(index, MO_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Denomination
   */
  ID *getMO_2(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, MO_2);
  }

  ID *getDenomination(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, MO_2);
  }

  bool isMO_2(size_t index = 0) {
    try {
      return this->getObject(index, MO_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDenomination(size_t index = 0) {
    try {
      return this->getObject(index, MO_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End MO */

} /* End HL7_29 */

#endif /* __MO_v29_H__ */
