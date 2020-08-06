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


#ifndef __RP_v29_H__
#define __RP_v29_H__

#include "../../common/Util.h"
#include "../datatype/HD.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* reference pointer */
class RP : public HL7Data {
 public:
  RP() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    RP_1, /* Pointer */
    RP_2, /* Application ID */
    RP_3, /* Type of Data */
    RP_4, /* Subtype */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "RP"; }
  RP *create() const { return new RP(); }

 private:
  void init() {
    setName("RP");
    /* Init members */
    addObject<ST>(RP_1, "RP.1", HL7::initialized, HL7::repetition_off);
    addObject<HD>(RP_2, "RP.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RP_3, "RP.3", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RP_4, "RP.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Pointer
   */
  ST *getRP_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, RP_1);
  }

  ST *getPointer(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, RP_1);
  }

  bool isRP_1(size_t index = 0) {
    try {
      return this->getObject(index, RP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPointer(size_t index = 0) {
    try {
      return this->getObject(index, RP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Application ID
   */
  HD *getRP_2(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, RP_2);
  }

  HD *getApplicationID(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, RP_2);
  }

  bool isRP_2(size_t index = 0) {
    try {
      return this->getObject(index, RP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isApplicationID(size_t index = 0) {
    try {
      return this->getObject(index, RP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Type of Data
   */
  ID *getRP_3(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, RP_3);
  }

  ID *getTypeofData(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, RP_3);
  }

  bool isRP_3(size_t index = 0) {
    try {
      return this->getObject(index, RP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTypeofData(size_t index = 0) {
    try {
      return this->getObject(index, RP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Subtype
   */
  ID *getRP_4(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, RP_4);
  }

  ID *getSubtype(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, RP_4);
  }

  bool isRP_4(size_t index = 0) {
    try {
      return this->getObject(index, RP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubtype(size_t index = 0) {
    try {
      return this->getObject(index, RP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End RP */

} /* End HL7_29 */

#endif /* __RP_v29_H__ */
