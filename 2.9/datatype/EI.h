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


#ifndef __EI_v29_H__
#define __EI_v29_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* entity identifier */
class EI : public HL7Data {
 public:
  EI() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    EI_1, /* Entity Identifier */
    EI_2, /* Namespace ID */
    EI_3, /* Universal ID */
    EI_4, /* Universal ID Type */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "EI"; }
  EI *create() const { return new EI(); }

 private:
  void init() {
    setName("EI");
    /* Init members */
    addObject<ST>(EI_1, "EI.1", HL7::initialized, HL7::repetition_off);
    addObject<IS>(EI_2, "EI.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(EI_3, "EI.3", HL7::initialized, HL7::repetition_off);
    addObject<ID>(EI_4, "EI.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Entity Identifier
   */
  ST *getEI_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, EI_1);
  }

  ST *getEntityIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, EI_1);
  }

  bool isEI_1(size_t index = 0) {
    try {
      return this->getObject(index, EI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEntityIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, EI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Namespace ID
   */
  IS *getEI_2(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, EI_2);
  }

  IS *getNamespaceID(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, EI_2);
  }

  bool isEI_2(size_t index = 0) {
    try {
      return this->getObject(index, EI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNamespaceID(size_t index = 0) {
    try {
      return this->getObject(index, EI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Universal ID
   */
  ST *getEI_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, EI_3);
  }

  ST *getUniversalID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, EI_3);
  }

  bool isEI_3(size_t index = 0) {
    try {
      return this->getObject(index, EI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniversalID(size_t index = 0) {
    try {
      return this->getObject(index, EI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Universal ID Type
   */
  ID *getEI_4(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, EI_4);
  }

  ID *getUniversalIDType(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, EI_4);
  }

  bool isEI_4(size_t index = 0) {
    try {
      return this->getObject(index, EI_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniversalIDType(size_t index = 0) {
    try {
      return this->getObject(index, EI_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End EI */

} /* End HL7_29 */

#endif /* __EI_v29_H__ */
