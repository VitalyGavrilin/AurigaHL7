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


#ifndef __LCC_v29_H__
#define __LCC_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/PL.h"

namespace HL7_29 {

/* LCC */
class LCC : public HL7Segment {
 public:
  LCC() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    LCC_1,
    LCC_2,
    LCC_3,
    LCC_4,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "LCC"; }
  LCC* create() const { return new LCC(); }

 private:
  void init() {
    setName("LCC");
    /* Init members */
    addObject<PL>(LCC_1, "LCC.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(LCC_2, "LCC.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(LCC_3, "LCC.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(LCC_4, "LCC.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Primary Key Value - LCC
   */

  PL* getLCC_1(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, LCC_1);
  }

  PL* getPrimaryKeyValueLCC(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, LCC_1);
  }

  bool isLCC_1(size_t index = 0) {
    try {
      return this->getObject(index, LCC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryKeyValueLCC(size_t index = 0) {
    try {
      return this->getObject(index, LCC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Department
   */

  CWE* getLCC_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LCC_2);
  }

  CWE* getLocationDepartment(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LCC_2);
  }

  bool isLCC_2(size_t index = 0) {
    try {
      return this->getObject(index, LCC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationDepartment(size_t index = 0) {
    try {
      return this->getObject(index, LCC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Accommodation Type
   */

  CWE* getLCC_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LCC_3);
  }

  CWE* getAccommodationType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LCC_3);
  }

  bool isLCC_3(size_t index = 0) {
    try {
      return this->getObject(index, LCC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccommodationType(size_t index = 0) {
    try {
      return this->getObject(index, LCC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Charge Code
   */

  CWE* getLCC_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LCC_4);
  }

  CWE* getChargeCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LCC_4);
  }

  bool isLCC_4(size_t index = 0) {
    try {
      return this->getObject(index, LCC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChargeCode(size_t index = 0) {
    try {
      return this->getObject(index, LCC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of LCC */

} /* End of namespace HL7_29 */
#endif /* __LCC_v29_H__ */
