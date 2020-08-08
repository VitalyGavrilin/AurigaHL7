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


#ifndef __SGT_v29_H__
#define __SGT_v29_H__

#include "../../common/Util.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* SGT */
class SGT : public HL7Segment {
 public:
  SGT() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    SGT_1,
    SGT_2,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "SGT"; }
  SGT* create() const { return new SGT(); }

 private:
  void init() {
    setName("SGT");
    /* Init members */
    addObject<SI>(SGT_1, "SGT.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(SGT_2, "SGT.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID – SGT
   */

  SI* getSGT_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, SGT_1);
  }

  SI* getSetIDSGT(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, SGT_1);
  }

  bool isSGT_1(size_t index = 0) {
    try {
      return this->getObject(index, SGT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDSGT(size_t index = 0) {
    try {
      return this->getObject(index, SGT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Segment Group Name
   */

  ST* getSGT_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SGT_2);
  }

  ST* getSegmentGroupName(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SGT_2);
  }

  bool isSGT_2(size_t index = 0) {
    try {
      return this->getObject(index, SGT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentGroupName(size_t index = 0) {
    try {
      return this->getObject(index, SGT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of SGT */

} /* End of namespace HL7_29 */
#endif /* __SGT_v29_H__ */
