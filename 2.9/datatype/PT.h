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


#ifndef __PT_v29_H__
#define __PT_v29_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"

namespace HL7_29 {

/* processing type */
class PT : public HL7Data {
 public:
  PT() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    PT_1, /* Processing ID */
    PT_2, /* Processing Mode */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "PT"; }
  PT *create() const { return new PT(); }

 private:
  void init() {
    setName("PT");
    /* Init members */
    addObject<ID>(PT_1, "PT.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PT_2, "PT.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Processing ID
   */
  ID *getPT_1(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PT_1);
  }

  ID *getProcessingID(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PT_1);
  }

  bool isPT_1(size_t index = 0) {
    try {
      return this->getObject(index, PT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcessingID(size_t index = 0) {
    try {
      return this->getObject(index, PT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Processing Mode
   */
  ID *getPT_2(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PT_2);
  }

  ID *getProcessingMode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PT_2);
  }

  bool isPT_2(size_t index = 0) {
    try {
      return this->getObject(index, PT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcessingMode(size_t index = 0) {
    try {
      return this->getObject(index, PT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End PT */

} /* End HL7_29 */

#endif /* __PT_v29_H__ */
