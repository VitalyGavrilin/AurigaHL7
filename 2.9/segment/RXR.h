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


#ifndef __RXR_v29_H__
#define __RXR_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"

namespace HL7_29 {

/* RXR */
class RXR : public HL7Segment {
 public:
  RXR() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    RXR_1,
    RXR_2,
    RXR_3,
    RXR_4,
    RXR_5,
    RXR_6,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "RXR"; }
  RXR* create() const { return new RXR(); }

 private:
  void init() {
    setName("RXR");
    /* Init members */
    addObject<CWE>(RXR_1, "RXR.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXR_2, "RXR.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXR_3, "RXR.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXR_4, "RXR.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXR_5, "RXR.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXR_6, "RXR.6", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Route
   */

  CWE* getRXR_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXR_1);
  }

  CWE* getRoute(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXR_1);
  }

  bool isRXR_1(size_t index = 0) {
    try {
      return this->getObject(index, RXR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoute(size_t index = 0) {
    try {
      return this->getObject(index, RXR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administration Site
   */

  CWE* getRXR_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXR_2);
  }

  CWE* getAdministrationSite(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXR_2);
  }

  bool isRXR_2(size_t index = 0) {
    try {
      return this->getObject(index, RXR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministrationSite(size_t index = 0) {
    try {
      return this->getObject(index, RXR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administration Device
   */

  CWE* getRXR_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXR_3);
  }

  CWE* getAdministrationDevice(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXR_3);
  }

  bool isRXR_3(size_t index = 0) {
    try {
      return this->getObject(index, RXR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministrationDevice(size_t index = 0) {
    try {
      return this->getObject(index, RXR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administration Method
   */

  CWE* getRXR_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXR_4);
  }

  CWE* getAdministrationMethod(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXR_4);
  }

  bool isRXR_4(size_t index = 0) {
    try {
      return this->getObject(index, RXR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministrationMethod(size_t index = 0) {
    try {
      return this->getObject(index, RXR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Routing Instruction
   */

  CWE* getRXR_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXR_5);
  }

  CWE* getRoutingInstruction(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXR_5);
  }

  bool isRXR_5(size_t index = 0) {
    try {
      return this->getObject(index, RXR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoutingInstruction(size_t index = 0) {
    try {
      return this->getObject(index, RXR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administration Site Modifier
   */

  CWE* getRXR_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXR_6);
  }

  CWE* getAdministrationSiteModifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXR_6);
  }

  bool isRXR_6(size_t index = 0) {
    try {
      return this->getObject(index, RXR_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministrationSiteModifier(size_t index = 0) {
    try {
      return this->getObject(index, RXR_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RXR */

} /* End of namespace HL7_29 */
#endif /* __RXR_v29_H__ */
