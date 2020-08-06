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


#ifndef __VH_v29_H__
#define __VH_v29_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/TM.h"

namespace HL7_29 {

/* visiting hours */
class VH : public HL7Data {
 public:
  VH() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    VH_1, /* Start Day Range */
    VH_2, /* End Day Range */
    VH_3, /* Start Hour Range */
    VH_4, /* End Hour Range */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "VH"; }
  VH *create() const { return new VH(); }

 private:
  void init() {
    setName("VH");
    /* Init members */
    addObject<ID>(VH_1, "VH.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(VH_2, "VH.2", HL7::initialized, HL7::repetition_off);
    addObject<TM>(VH_3, "VH.3", HL7::initialized, HL7::repetition_off);
    addObject<TM>(VH_4, "VH.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Start Day Range
   */
  ID *getVH_1(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, VH_1);
  }

  ID *getStartDayRange(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, VH_1);
  }

  bool isVH_1(size_t index = 0) {
    try {
      return this->getObject(index, VH_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartDayRange(size_t index = 0) {
    try {
      return this->getObject(index, VH_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * End Day Range
   */
  ID *getVH_2(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, VH_2);
  }

  ID *getEndDayRange(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, VH_2);
  }

  bool isVH_2(size_t index = 0) {
    try {
      return this->getObject(index, VH_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEndDayRange(size_t index = 0) {
    try {
      return this->getObject(index, VH_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Start Hour Range
   */
  TM *getVH_3(size_t index = 0) {
    return (TM *)this->getObjectSafe(index, VH_3);
  }

  TM *getStartHourRange(size_t index = 0) {
    return (TM *)this->getObjectSafe(index, VH_3);
  }

  bool isVH_3(size_t index = 0) {
    try {
      return this->getObject(index, VH_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartHourRange(size_t index = 0) {
    try {
      return this->getObject(index, VH_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * End Hour Range
   */
  TM *getVH_4(size_t index = 0) {
    return (TM *)this->getObjectSafe(index, VH_4);
  }

  TM *getEndHourRange(size_t index = 0) {
    return (TM *)this->getObjectSafe(index, VH_4);
  }

  bool isVH_4(size_t index = 0) {
    try {
      return this->getObject(index, VH_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEndHourRange(size_t index = 0) {
    try {
      return this->getObject(index, VH_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End VH */

} /* End HL7_29 */

#endif /* __VH_v29_H__ */
