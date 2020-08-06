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


#ifndef __ADD_v29_H__
#define __ADD_v29_H__

#include "../../common/Util.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* ADD */
class ADD : public HL7Segment {
 public:
  ADD() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    ADD_1,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "ADD"; }
  ADD* create() const { return new ADD(); }

 private:
  void init() {
    setName("ADD");
    /* Init members */
    addObject<ST>(ADD_1, "ADD.1", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Addendum Continuation Pointer
   */

  ST* getADD_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ADD_1);
  }

  ST* getAddendumContinuationPointer(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ADD_1);
  }

  bool isADD_1(size_t index = 0) {
    try {
      return this->getObject(index, ADD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAddendumContinuationPointer(size_t index = 0) {
    try {
      return this->getObject(index, ADD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ADD */

} /* End of namespace HL7_29 */
#endif /* __ADD_v29_H__ */
