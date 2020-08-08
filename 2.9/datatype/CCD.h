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


#ifndef __CCD_v29_H__
#define __CCD_v29_H__

#include "../../common/Util.h"
#include "../datatype/DTM.h"
#include "../datatype/ID.h"

namespace HL7_29 {

/* charge code and date */
class CCD : public HL7Data {
 public:
  CCD() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CCD_1, /* Invocation Event */
    CCD_2, /* Date/time */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CCD"; }
  CCD *create() const { return new CCD(); }

 private:
  void init() {
    setName("CCD");
    /* Init members */
    addObject<ID>(CCD_1, "CCD.1", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CCD_2, "CCD.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Invocation Event
   */
  ID *getCCD_1(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CCD_1);
  }

  ID *getInvocationEvent(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CCD_1);
  }

  bool isCCD_1(size_t index = 0) {
    try {
      return this->getObject(index, CCD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInvocationEvent(size_t index = 0) {
    try {
      return this->getObject(index, CCD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/time
   */
  DTM *getCCD_2(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, CCD_2);
  }

  DTM *getDatetime(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, CCD_2);
  }

  bool isCCD_2(size_t index = 0) {
    try {
      return this->getObject(index, CCD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDatetime(size_t index = 0) {
    try {
      return this->getObject(index, CCD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CCD */

} /* End HL7_29 */

#endif /* __CCD_v29_H__ */
