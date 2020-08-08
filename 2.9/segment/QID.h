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


#ifndef __QID_v29_H__
#define __QID_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* QID */
class QID : public HL7Segment {
 public:
  QID() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    QID_1,
    QID_2,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "QID"; }
  QID* create() const { return new QID(); }

 private:
  void init() {
    setName("QID");
    /* Init members */
    addObject<ST>(QID_1, "QID.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(QID_2, "QID.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Query Tag
   */

  ST* getQID_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, QID_1);
  }

  ST* getQueryTag(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, QID_1);
  }

  bool isQID_1(size_t index = 0) {
    try {
      return this->getObject(index, QID_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQueryTag(size_t index = 0) {
    try {
      return this->getObject(index, QID_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Message Query Name
   */

  CWE* getQID_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, QID_2);
  }

  CWE* getMessageQueryName(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, QID_2);
  }

  bool isQID_2(size_t index = 0) {
    try {
      return this->getObject(index, QID_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMessageQueryName(size_t index = 0) {
    try {
      return this->getObject(index, QID_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of QID */

} /* End of namespace HL7_29 */
#endif /* __QID_v29_H__ */
