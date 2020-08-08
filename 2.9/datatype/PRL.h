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


#ifndef __PRL_v29_H__
#define __PRL_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/TX.h"

namespace HL7_29 {

/* parent result link */
class PRL : public HL7Data {
 public:
  PRL() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    PRL_1, /* Parent Observation Identifier */
    PRL_2, /* Parent Observation Value Descriptor */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "PRL"; }
  PRL *create() const { return new PRL(); }

 private:
  void init() {
    setName("PRL");
    /* Init members */
    addObject<CWE>(PRL_1, "PRL.1", HL7::initialized, HL7::repetition_off);
    addObject<TX>(PRL_2, "PRL.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Parent Observation Identifier
   */
  CWE *getPRL_1(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, PRL_1);
  }

  CWE *getParentObservationIdentifier(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, PRL_1);
  }

  bool isPRL_1(size_t index = 0) {
    try {
      return this->getObject(index, PRL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParentObservationIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, PRL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Parent Observation Value Descriptor
   */
  TX *getPRL_2(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, PRL_2);
  }

  TX *getParentObservationValueDescriptor(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, PRL_2);
  }

  bool isPRL_2(size_t index = 0) {
    try {
      return this->getObject(index, PRL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParentObservationValueDescriptor(size_t index = 0) {
    try {
      return this->getObject(index, PRL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End PRL */

} /* End HL7_29 */

#endif /* __PRL_v29_H__ */
