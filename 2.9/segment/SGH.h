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


#ifndef __SGH_v29_H__
#define __SGH_v29_H__

#include "../../common/Util.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* SGH */
class SGH : public HL7Segment {
 public:
  SGH() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    SGH_1,
    SGH_2,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "SGH"; }
  SGH* create() const { return new SGH(); }

 private:
  void init() {
    setName("SGH");
    /* Init members */
    addObject<SI>(SGH_1, "SGH.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(SGH_2, "SGH.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID – SGH
   */

  SI* getSGH_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, SGH_1);
  }

  SI* getSetIDSGH(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, SGH_1);
  }

  bool isSGH_1(size_t index = 0) {
    try {
      return this->getObject(index, SGH_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDSGH(size_t index = 0) {
    try {
      return this->getObject(index, SGH_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Segment Group Name
   */

  ST* getSGH_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SGH_2);
  }

  ST* getSegmentGroupName(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SGH_2);
  }

  bool isSGH_2(size_t index = 0) {
    try {
      return this->getObject(index, SGH_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentGroupName(size_t index = 0) {
    try {
      return this->getObject(index, SGH_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of SGH */

} /* End of namespace HL7_29 */
#endif /* __SGH_v29_H__ */
