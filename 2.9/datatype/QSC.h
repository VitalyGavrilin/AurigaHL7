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


#ifndef __QSC_v29_H__
#define __QSC_v29_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* query selection criteria */
class QSC : public HL7Data {
 public:
  QSC() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    QSC_1, /* Segment Field Name */
    QSC_2, /* Relational Operator */
    QSC_3, /* Value */
    QSC_4, /* Relational Conjunction */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "QSC"; }
  QSC *create() const { return new QSC(); }

 private:
  void init() {
    setName("QSC");
    /* Init members */
    addObject<ST>(QSC_1, "QSC.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(QSC_2, "QSC.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(QSC_3, "QSC.3", HL7::initialized, HL7::repetition_off);
    addObject<ID>(QSC_4, "QSC.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Segment Field Name
   */
  ST *getQSC_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, QSC_1);
  }

  ST *getSegmentFieldName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, QSC_1);
  }

  bool isQSC_1(size_t index = 0) {
    try {
      return this->getObject(index, QSC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentFieldName(size_t index = 0) {
    try {
      return this->getObject(index, QSC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Relational Operator
   */
  ID *getQSC_2(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, QSC_2);
  }

  ID *getRelationalOperator(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, QSC_2);
  }

  bool isQSC_2(size_t index = 0) {
    try {
      return this->getObject(index, QSC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRelationalOperator(size_t index = 0) {
    try {
      return this->getObject(index, QSC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Value
   */
  ST *getQSC_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, QSC_3);
  }

  ST *getValue(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, QSC_3);
  }

  bool isQSC_3(size_t index = 0) {
    try {
      return this->getObject(index, QSC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValue(size_t index = 0) {
    try {
      return this->getObject(index, QSC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Relational Conjunction
   */
  ID *getQSC_4(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, QSC_4);
  }

  ID *getRelationalConjunction(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, QSC_4);
  }

  bool isQSC_4(size_t index = 0) {
    try {
      return this->getObject(index, QSC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRelationalConjunction(size_t index = 0) {
    try {
      return this->getObject(index, QSC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End QSC */

} /* End HL7_29 */

#endif /* __QSC_v29_H__ */
