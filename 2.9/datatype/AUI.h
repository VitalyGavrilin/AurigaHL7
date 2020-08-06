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


#ifndef __AUI_v29_H__
#define __AUI_v29_H__

#include "../../common/Util.h"
#include "../datatype/DT.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* authorization information */
class AUI : public HL7Data {
 public:
  AUI() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    AUI_1, /* Authorization Number */
    AUI_2, /* Date */
    AUI_3, /* Source */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "AUI"; }
  AUI *create() const { return new AUI(); }

 private:
  void init() {
    setName("AUI");
    /* Init members */
    addObject<ST>(AUI_1, "AUI.1", HL7::initialized, HL7::repetition_off);
    addObject<DT>(AUI_2, "AUI.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(AUI_3, "AUI.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Authorization Number
   */
  ST *getAUI_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, AUI_1);
  }

  ST *getAuthorizationNumber(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, AUI_1);
  }

  bool isAUI_1(size_t index = 0) {
    try {
      return this->getObject(index, AUI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAuthorizationNumber(size_t index = 0) {
    try {
      return this->getObject(index, AUI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date
   */
  DT *getAUI_2(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, AUI_2);
  }

  DT *getDate(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, AUI_2);
  }

  bool isAUI_2(size_t index = 0) {
    try {
      return this->getObject(index, AUI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDate(size_t index = 0) {
    try {
      return this->getObject(index, AUI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Source
   */
  ST *getAUI_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, AUI_3);
  }

  ST *getSource(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, AUI_3);
  }

  bool isAUI_3(size_t index = 0) {
    try {
      return this->getObject(index, AUI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSource(size_t index = 0) {
    try {
      return this->getObject(index, AUI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End AUI */

} /* End HL7_29 */

#endif /* __AUI_v29_H__ */
