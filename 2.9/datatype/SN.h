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


#ifndef __SN_v29_H__
#define __SN_v29_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* structured numeric */
class SN : public HL7Data {
 public:
  SN() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    SN_1, /* Comparator */
    SN_2, /* Num1 */
    SN_3, /* Separator/Suffix */
    SN_4, /* Num2 */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "SN"; }
  SN *create() const { return new SN(); }

 private:
  void init() {
    setName("SN");
    /* Init members */
    addObject<ST>(SN_1, "SN.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(SN_2, "SN.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(SN_3, "SN.3", HL7::initialized, HL7::repetition_off);
    addObject<NM>(SN_4, "SN.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Comparator
   */
  ST *getSN_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SN_1);
  }

  ST *getComparator(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SN_1);
  }

  bool isSN_1(size_t index = 0) {
    try {
      return this->getObject(index, SN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isComparator(size_t index = 0) {
    try {
      return this->getObject(index, SN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Num1
   */
  NM *getSN_2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, SN_2);
  }

  NM *getNum1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, SN_2);
  }

  bool isSN_2(size_t index = 0) {
    try {
      return this->getObject(index, SN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNum1(size_t index = 0) {
    try {
      return this->getObject(index, SN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Separator/Suffix
   */
  ST *getSN_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SN_3);
  }

  ST *getSeparatorSuffix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SN_3);
  }

  bool isSN_3(size_t index = 0) {
    try {
      return this->getObject(index, SN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSeparatorSuffix(size_t index = 0) {
    try {
      return this->getObject(index, SN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Num2
   */
  NM *getSN_4(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, SN_4);
  }

  NM *getNum2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, SN_4);
  }

  bool isSN_4(size_t index = 0) {
    try {
      return this->getObject(index, SN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNum2(size_t index = 0) {
    try {
      return this->getObject(index, SN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End SN */

} /* End HL7_29 */

#endif /* __SN_v29_H__ */
