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


#ifndef __QIP_v29_H__
#define __QIP_v29_H__

#include "../../common/Util.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* query input parameter list */
class QIP : public HL7Data {
 public:
  QIP() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    QIP_1, /* Segment Field Name */
    QIP_2, /* Values */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "QIP"; }
  QIP *create() const { return new QIP(); }

 private:
  void init() {
    setName("QIP");
    /* Init members */
    addObject<ST>(QIP_1, "QIP.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(QIP_2, "QIP.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Segment Field Name
   */
  ST *getQIP_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, QIP_1);
  }

  ST *getSegmentFieldName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, QIP_1);
  }

  bool isQIP_1(size_t index = 0) {
    try {
      return this->getObject(index, QIP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentFieldName(size_t index = 0) {
    try {
      return this->getObject(index, QIP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Values
   */
  ST *getQIP_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, QIP_2);
  }

  ST *getValues(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, QIP_2);
  }

  bool isQIP_2(size_t index = 0) {
    try {
      return this->getObject(index, QIP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValues(size_t index = 0) {
    try {
      return this->getObject(index, QIP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End QIP */

} /* End HL7_29 */

#endif /* __QIP_v29_H__ */
