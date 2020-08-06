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


#ifndef __STZ_v29_H__
#define __STZ_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"

namespace HL7_29 {

/* STZ */
class STZ : public HL7Segment {
 public:
  STZ() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    STZ_1,
    STZ_2,
    STZ_3,
    STZ_4,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "STZ"; }
  STZ* create() const { return new STZ(); }

 private:
  void init() {
    setName("STZ");
    /* Init members */
    addObject<CWE>(STZ_1, "STZ.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(STZ_2, "STZ.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(STZ_3, "STZ.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(STZ_4, "STZ.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Sterilization Type
   */

  CWE* getSTZ_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STZ_1);
  }

  CWE* getSterilizationType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STZ_1);
  }

  bool isSTZ_1(size_t index = 0) {
    try {
      return this->getObject(index, STZ_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSterilizationType(size_t index = 0) {
    try {
      return this->getObject(index, STZ_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sterilization Cycle
   */

  CWE* getSTZ_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STZ_2);
  }

  CWE* getSterilizationCycle(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STZ_2);
  }

  bool isSTZ_2(size_t index = 0) {
    try {
      return this->getObject(index, STZ_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSterilizationCycle(size_t index = 0) {
    try {
      return this->getObject(index, STZ_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Maintenance Cycle
   */

  CWE* getSTZ_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STZ_3);
  }

  CWE* getMaintenanceCycle(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STZ_3);
  }

  bool isSTZ_3(size_t index = 0) {
    try {
      return this->getObject(index, STZ_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMaintenanceCycle(size_t index = 0) {
    try {
      return this->getObject(index, STZ_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Maintenance Type
   */

  CWE* getSTZ_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STZ_4);
  }

  CWE* getMaintenanceType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STZ_4);
  }

  bool isSTZ_4(size_t index = 0) {
    try {
      return this->getObject(index, STZ_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMaintenanceType(size_t index = 0) {
    try {
      return this->getObject(index, STZ_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of STZ */

} /* End of namespace HL7_29 */
#endif /* __STZ_v29_H__ */
