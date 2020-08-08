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


#ifndef __DSC_v29_H__
#define __DSC_v29_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* DSC */
class DSC : public HL7Segment {
 public:
  DSC() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    DSC_1,
    DSC_2,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "DSC"; }
  DSC* create() const { return new DSC(); }

 private:
  void init() {
    setName("DSC");
    /* Init members */
    addObject<ST>(DSC_1, "DSC.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(DSC_2, "DSC.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Continuation Pointer
   */

  ST* getDSC_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DSC_1);
  }

  ST* getContinuationPointer(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DSC_1);
  }

  bool isDSC_1(size_t index = 0) {
    try {
      return this->getObject(index, DSC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContinuationPointer(size_t index = 0) {
    try {
      return this->getObject(index, DSC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Continuation Style
   */

  ID* getDSC_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DSC_2);
  }

  ID* getContinuationStyle(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DSC_2);
  }

  bool isDSC_2(size_t index = 0) {
    try {
      return this->getObject(index, DSC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContinuationStyle(size_t index = 0) {
    try {
      return this->getObject(index, DSC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of DSC */

} /* End of namespace HL7_29 */
#endif /* __DSC_v29_H__ */
