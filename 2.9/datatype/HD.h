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


#ifndef __HD_v29_H__
#define __HD_v29_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* hierarchic designator */
class HD : public HL7Data {
 public:
  HD() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    HD_1, /* Namespace ID */
    HD_2, /* Universal ID */
    HD_3, /* Universal ID Type */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "HD"; }
  HD *create() const { return new HD(); }

 private:
  void init() {
    setName("HD");
    /* Init members */
    addObject<IS>(HD_1, "HD.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(HD_2, "HD.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(HD_3, "HD.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Namespace ID
   */
  IS *getHD_1(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, HD_1);
  }

  IS *getNamespaceID(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, HD_1);
  }

  bool isHD_1(size_t index = 0) {
    try {
      return this->getObject(index, HD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNamespaceID(size_t index = 0) {
    try {
      return this->getObject(index, HD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Universal ID
   */
  ST *getHD_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, HD_2);
  }

  ST *getUniversalID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, HD_2);
  }

  bool isHD_2(size_t index = 0) {
    try {
      return this->getObject(index, HD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniversalID(size_t index = 0) {
    try {
      return this->getObject(index, HD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Universal ID Type
   */
  ID *getHD_3(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, HD_3);
  }

  ID *getUniversalIDType(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, HD_3);
  }

  bool isHD_3(size_t index = 0) {
    try {
      return this->getObject(index, HD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniversalIDType(size_t index = 0) {
    try {
      return this->getObject(index, HD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End HD */

} /* End HL7_29 */

#endif /* __HD_v29_H__ */
