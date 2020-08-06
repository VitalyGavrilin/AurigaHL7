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


#ifndef __OSP_v29_H__
#define __OSP_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/DT.h"

namespace HL7_29 {

/* occurrence span code and date */
class OSP : public HL7Data {
 public:
  OSP() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    OSP_1, /* Occurrence Span Code */
    OSP_2, /* Occurrence Span Start Date */
    OSP_3, /* Occurrence Span Stop Date */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "OSP"; }
  OSP *create() const { return new OSP(); }

 private:
  void init() {
    setName("OSP");
    /* Init members */
    addObject<CNE>(OSP_1, "OSP.1", HL7::initialized, HL7::repetition_off);
    addObject<DT>(OSP_2, "OSP.2", HL7::initialized, HL7::repetition_off);
    addObject<DT>(OSP_3, "OSP.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Occurrence Span Code
   */
  CNE *getOSP_1(size_t index = 0) {
    return (CNE *)this->getObjectSafe(index, OSP_1);
  }

  CNE *getOccurrenceSpanCode(size_t index = 0) {
    return (CNE *)this->getObjectSafe(index, OSP_1);
  }

  bool isOSP_1(size_t index = 0) {
    try {
      return this->getObject(index, OSP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOccurrenceSpanCode(size_t index = 0) {
    try {
      return this->getObject(index, OSP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Occurrence Span Start Date
   */
  DT *getOSP_2(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, OSP_2);
  }

  DT *getOccurrenceSpanStartDate(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, OSP_2);
  }

  bool isOSP_2(size_t index = 0) {
    try {
      return this->getObject(index, OSP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOccurrenceSpanStartDate(size_t index = 0) {
    try {
      return this->getObject(index, OSP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Occurrence Span Stop Date
   */
  DT *getOSP_3(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, OSP_3);
  }

  DT *getOccurrenceSpanStopDate(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, OSP_3);
  }

  bool isOSP_3(size_t index = 0) {
    try {
      return this->getObject(index, OSP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOccurrenceSpanStopDate(size_t index = 0) {
    try {
      return this->getObject(index, OSP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End OSP */

} /* End HL7_29 */

#endif /* __OSP_v29_H__ */
