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


#ifndef __SRT_v29_H__
#define __SRT_v29_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"

namespace HL7_29 {

/* sort order */
class SRT : public HL7Data {
 public:
  SRT() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    SRT_1, /* Sequencing */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "SRT"; }
  SRT *create() const { return new SRT(); }

 private:
  void init() {
    setName("SRT");
    /* Init members */
    addObject<ID>(SRT_1, "SRT.1", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Sequencing
   */
  ID *getSRT_1(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, SRT_1);
  }

  ID *getSequencing(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, SRT_1);
  }

  bool isSRT_1(size_t index = 0) {
    try {
      return this->getObject(index, SRT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSequencing(size_t index = 0) {
    try {
      return this->getObject(index, SRT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End SRT */

} /* End HL7_29 */

#endif /* __SRT_v29_H__ */
