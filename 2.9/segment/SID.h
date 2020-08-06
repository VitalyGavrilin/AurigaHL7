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


#ifndef __SID_v29_H__
#define __SID_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* SID */
class SID : public HL7Segment {
 public:
  SID() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    SID_1,
    SID_2,
    SID_3,
    SID_4,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "SID"; }
  SID* create() const { return new SID(); }

 private:
  void init() {
    setName("SID");
    /* Init members */
    addObject<CWE>(SID_1, "SID.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(SID_2, "SID.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(SID_3, "SID.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SID_4, "SID.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Application/Method Identifier
   */

  CWE* getSID_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SID_1);
  }

  CWE* getApplicationMethodIdentifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SID_1);
  }

  bool isSID_1(size_t index = 0) {
    try {
      return this->getObject(index, SID_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isApplicationMethodIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, SID_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance Lot Number
   */

  ST* getSID_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SID_2);
  }

  ST* getSubstanceLotNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SID_2);
  }

  bool isSID_2(size_t index = 0) {
    try {
      return this->getObject(index, SID_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceLotNumber(size_t index = 0) {
    try {
      return this->getObject(index, SID_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance Container Identifier
   */

  ST* getSID_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SID_3);
  }

  ST* getSubstanceContainerIdentifier(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SID_3);
  }

  bool isSID_3(size_t index = 0) {
    try {
      return this->getObject(index, SID_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceContainerIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, SID_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance Manufacturer Identifier
   */

  CWE* getSID_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SID_4);
  }

  CWE* getSubstanceManufacturerIdentifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SID_4);
  }

  bool isSID_4(size_t index = 0) {
    try {
      return this->getObject(index, SID_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceManufacturerIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, SID_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of SID */

} /* End of namespace HL7_29 */
#endif /* __SID_v29_H__ */
