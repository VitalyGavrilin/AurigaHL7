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


#ifndef __OVR_v29_H__
#define __OVR_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/TX.h"
#include "../datatype/XCN.h"

namespace HL7_29 {

/* OVR */
class OVR : public HL7Segment {
 public:
  OVR() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    OVR_1,
    OVR_2,
    OVR_3,
    OVR_4,
    OVR_5,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "OVR"; }
  OVR* create() const { return new OVR(); }

 private:
  void init() {
    setName("OVR");
    /* Init members */
    addObject<CWE>(OVR_1, "OVR.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OVR_2, "OVR.2", HL7::initialized, HL7::repetition_off);
    addObject<TX>(OVR_3, "OVR.3", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(OVR_4, "OVR.4", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(OVR_5, "OVR.5", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Business Rule Override Type
   */

  CWE* getOVR_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OVR_1);
  }

  CWE* getBusinessRuleOverrideType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OVR_1);
  }

  bool isOVR_1(size_t index = 0) {
    try {
      return this->getObject(index, OVR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBusinessRuleOverrideType(size_t index = 0) {
    try {
      return this->getObject(index, OVR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Business Rule Override Code
   */

  CWE* getOVR_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OVR_2);
  }

  CWE* getBusinessRuleOverrideCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OVR_2);
  }

  bool isOVR_2(size_t index = 0) {
    try {
      return this->getObject(index, OVR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBusinessRuleOverrideCode(size_t index = 0) {
    try {
      return this->getObject(index, OVR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Override Comments
   */

  TX* getOVR_3(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OVR_3);
  }

  TX* getOverrideComments(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OVR_3);
  }

  bool isOVR_3(size_t index = 0) {
    try {
      return this->getObject(index, OVR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOverrideComments(size_t index = 0) {
    try {
      return this->getObject(index, OVR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Override Entered By
   */

  XCN* getOVR_4(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, OVR_4);
  }

  XCN* getOverrideEnteredBy(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, OVR_4);
  }

  bool isOVR_4(size_t index = 0) {
    try {
      return this->getObject(index, OVR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOverrideEnteredBy(size_t index = 0) {
    try {
      return this->getObject(index, OVR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Override Authorized By
   */

  XCN* getOVR_5(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, OVR_5);
  }

  XCN* getOverrideAuthorizedBy(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, OVR_5);
  }

  bool isOVR_5(size_t index = 0) {
    try {
      return this->getObject(index, OVR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOverrideAuthorizedBy(size_t index = 0) {
    try {
      return this->getObject(index, OVR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of OVR */

} /* End of namespace HL7_29 */
#endif /* __OVR_v29_H__ */
