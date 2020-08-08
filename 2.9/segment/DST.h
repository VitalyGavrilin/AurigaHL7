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


#ifndef __DST_v29_H__
#define __DST_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"

namespace HL7_29 {

/* DST */
class DST : public HL7Segment {
 public:
  DST() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    DST_1,
    DST_2,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "DST"; }
  DST* create() const { return new DST(); }

 private:
  void init() {
    setName("DST");
    /* Init members */
    addObject<CWE>(DST_1, "DST.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DST_2, "DST.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Destination
   */

  CWE* getDST_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DST_1);
  }

  CWE* getDestination(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DST_1);
  }

  bool isDST_1(size_t index = 0) {
    try {
      return this->getObject(index, DST_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDestination(size_t index = 0) {
    try {
      return this->getObject(index, DST_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Route
   */

  CWE* getDST_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DST_2);
  }

  CWE* getRoute(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DST_2);
  }

  bool isDST_2(size_t index = 0) {
    try {
      return this->getObject(index, DST_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoute(size_t index = 0) {
    try {
      return this->getObject(index, DST_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of DST */

} /* End of namespace HL7_29 */
#endif /* __DST_v29_H__ */
