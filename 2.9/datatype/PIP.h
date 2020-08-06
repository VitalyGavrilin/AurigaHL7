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


#ifndef __PIP_v29_H__
#define __PIP_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DT.h"
#include "../datatype/EI.h"

namespace HL7_29 {

/* practitioner institutional privileges */
class PIP : public HL7Data {
 public:
  PIP() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    PIP_1, /* Privilege */
    PIP_2, /* Privilege Class */
    PIP_3, /* Expiration Date */
    PIP_4, /* Activation Date */
    PIP_5, /* Facility */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "PIP"; }
  PIP *create() const { return new PIP(); }

 private:
  void init() {
    setName("PIP");
    /* Init members */
    addObject<CWE>(PIP_1, "PIP.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PIP_2, "PIP.2", HL7::initialized, HL7::repetition_off);
    addObject<DT>(PIP_3, "PIP.3", HL7::initialized, HL7::repetition_off);
    addObject<DT>(PIP_4, "PIP.4", HL7::initialized, HL7::repetition_off);
    addObject<EI>(PIP_5, "PIP.5", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Privilege
   */
  CWE *getPIP_1(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, PIP_1);
  }

  CWE *getPrivilege(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, PIP_1);
  }

  bool isPIP_1(size_t index = 0) {
    try {
      return this->getObject(index, PIP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrivilege(size_t index = 0) {
    try {
      return this->getObject(index, PIP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Privilege Class
   */
  CWE *getPIP_2(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, PIP_2);
  }

  CWE *getPrivilegeClass(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, PIP_2);
  }

  bool isPIP_2(size_t index = 0) {
    try {
      return this->getObject(index, PIP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrivilegeClass(size_t index = 0) {
    try {
      return this->getObject(index, PIP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expiration Date
   */
  DT *getPIP_3(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, PIP_3);
  }

  DT *getExpirationDate(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, PIP_3);
  }

  bool isPIP_3(size_t index = 0) {
    try {
      return this->getObject(index, PIP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, PIP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Activation Date
   */
  DT *getPIP_4(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, PIP_4);
  }

  DT *getActivationDate(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, PIP_4);
  }

  bool isPIP_4(size_t index = 0) {
    try {
      return this->getObject(index, PIP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActivationDate(size_t index = 0) {
    try {
      return this->getObject(index, PIP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Facility
   */
  EI *getPIP_5(size_t index = 0) {
    return (EI *)this->getObjectSafe(index, PIP_5);
  }

  EI *getFacility(size_t index = 0) {
    return (EI *)this->getObjectSafe(index, PIP_5);
  }

  bool isPIP_5(size_t index = 0) {
    try {
      return this->getObject(index, PIP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFacility(size_t index = 0) {
    try {
      return this->getObject(index, PIP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End PIP */

} /* End HL7_29 */

#endif /* __PIP_v29_H__ */
