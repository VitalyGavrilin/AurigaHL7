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


#ifndef __EIP_v29_H__
#define __EIP_v29_H__

#include "../../common/Util.h"
#include "../datatype/EI.h"

namespace HL7_29 {

/* entity identifier pair */
class EIP : public HL7Data {
 public:
  EIP() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    EIP_1, /* Placer Assigned Identifier */
    EIP_2, /* Filler Assigned Identifier */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "EIP"; }
  EIP *create() const { return new EIP(); }

 private:
  void init() {
    setName("EIP");
    /* Init members */
    addObject<EI>(EIP_1, "EIP.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(EIP_2, "EIP.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Placer Assigned Identifier
   */
  EI *getEIP_1(size_t index = 0) {
    return (EI *)this->getObjectSafe(index, EIP_1);
  }

  EI *getPlacerAssignedIdentifier(size_t index = 0) {
    return (EI *)this->getObjectSafe(index, EIP_1);
  }

  bool isEIP_1(size_t index = 0) {
    try {
      return this->getObject(index, EIP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerAssignedIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, EIP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Assigned Identifier
   */
  EI *getEIP_2(size_t index = 0) {
    return (EI *)this->getObjectSafe(index, EIP_2);
  }

  EI *getFillerAssignedIdentifier(size_t index = 0) {
    return (EI *)this->getObjectSafe(index, EIP_2);
  }

  bool isEIP_2(size_t index = 0) {
    try {
      return this->getObject(index, EIP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerAssignedIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, EIP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End EIP */

} /* End HL7_29 */

#endif /* __EIP_v29_H__ */
