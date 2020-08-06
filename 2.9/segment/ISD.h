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


#ifndef __ISD_v29_H__
#define __ISD_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/NM.h"

namespace HL7_29 {

/* ISD */
class ISD : public HL7Segment {
 public:
  ISD() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    ISD_1,
    ISD_2,
    ISD_3,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "ISD"; }
  ISD* create() const { return new ISD(); }

 private:
  void init() {
    setName("ISD");
    /* Init members */
    addObject<NM>(ISD_1, "ISD.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ISD_2, "ISD.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ISD_3, "ISD.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Reference Interaction Number
   */

  NM* getISD_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ISD_1);
  }

  NM* getReferenceInteractionNumber(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ISD_1);
  }

  bool isISD_1(size_t index = 0) {
    try {
      return this->getObject(index, ISD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferenceInteractionNumber(size_t index = 0) {
    try {
      return this->getObject(index, ISD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Interaction Type Identifier
   */

  CWE* getISD_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ISD_2);
  }

  CWE* getInteractionTypeIdentifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ISD_2);
  }

  bool isISD_2(size_t index = 0) {
    try {
      return this->getObject(index, ISD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInteractionTypeIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, ISD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Interaction Active State
   */

  CWE* getISD_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ISD_3);
  }

  CWE* getInteractionActiveState(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ISD_3);
  }

  bool isISD_3(size_t index = 0) {
    try {
      return this->getObject(index, ISD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInteractionActiveState(size_t index = 0) {
    try {
      return this->getObject(index, ISD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ISD */

} /* End of namespace HL7_29 */
#endif /* __ISD_v29_H__ */
