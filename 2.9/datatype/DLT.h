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


#ifndef __DLT_v29_H__
#define __DLT_v29_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/NR.h"

namespace HL7_29 {

/* delta */
class DLT : public HL7Data {
 public:
  DLT() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    DLT_1, /* Normal Range */
    DLT_2, /* Numeric Threshold */
    DLT_3, /* Change Computation */
    DLT_4, /* Days Retained */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "DLT"; }
  DLT *create() const { return new DLT(); }

 private:
  void init() {
    setName("DLT");
    /* Init members */
    addObject<NR>(DLT_1, "DLT.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(DLT_2, "DLT.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(DLT_3, "DLT.3", HL7::initialized, HL7::repetition_off);
    addObject<NM>(DLT_4, "DLT.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Normal Range
   */
  NR *getDLT_1(size_t index = 0) {
    return (NR *)this->getObjectSafe(index, DLT_1);
  }

  NR *getNormalRange(size_t index = 0) {
    return (NR *)this->getObjectSafe(index, DLT_1);
  }

  bool isDLT_1(size_t index = 0) {
    try {
      return this->getObject(index, DLT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNormalRange(size_t index = 0) {
    try {
      return this->getObject(index, DLT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Numeric Threshold
   */
  NM *getDLT_2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, DLT_2);
  }

  NM *getNumericThreshold(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, DLT_2);
  }

  bool isDLT_2(size_t index = 0) {
    try {
      return this->getObject(index, DLT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumericThreshold(size_t index = 0) {
    try {
      return this->getObject(index, DLT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Change Computation
   */
  ID *getDLT_3(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, DLT_3);
  }

  ID *getChangeComputation(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, DLT_3);
  }

  bool isDLT_3(size_t index = 0) {
    try {
      return this->getObject(index, DLT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChangeComputation(size_t index = 0) {
    try {
      return this->getObject(index, DLT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Days Retained
   */
  NM *getDLT_4(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, DLT_4);
  }

  NM *getDaysRetained(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, DLT_4);
  }

  bool isDLT_4(size_t index = 0) {
    try {
      return this->getObject(index, DLT_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDaysRetained(size_t index = 0) {
    try {
      return this->getObject(index, DLT_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End DLT */

} /* End HL7_29 */

#endif /* __DLT_v29_H__ */
