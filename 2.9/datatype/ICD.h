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


#ifndef __ICD_v29_H__
#define __ICD_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/ID.h"

namespace HL7_29 {

/* insurance certification definition */
class ICD : public HL7Data {
 public:
  ICD() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    ICD_1, /* Certification Patient Type */
    ICD_2, /* Certification Required */
    ICD_3, /* Date/Time Certification Required */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "ICD"; }
  ICD *create() const { return new ICD(); }

 private:
  void init() {
    setName("ICD");
    /* Init members */
    addObject<CWE>(ICD_1, "ICD.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(ICD_2, "ICD.2", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(ICD_3, "ICD.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Certification Patient Type
   */
  CWE *getICD_1(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, ICD_1);
  }

  CWE *getCertificationPatientType(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, ICD_1);
  }

  bool isICD_1(size_t index = 0) {
    try {
      return this->getObject(index, ICD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCertificationPatientType(size_t index = 0) {
    try {
      return this->getObject(index, ICD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Certification Required
   */
  ID *getICD_2(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, ICD_2);
  }

  ID *getCertificationRequired(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, ICD_2);
  }

  bool isICD_2(size_t index = 0) {
    try {
      return this->getObject(index, ICD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCertificationRequired(size_t index = 0) {
    try {
      return this->getObject(index, ICD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time Certification Required
   */
  DTM *getICD_3(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, ICD_3);
  }

  DTM *getDateTimeCertificationRequired(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, ICD_3);
  }

  bool isICD_3(size_t index = 0) {
    try {
      return this->getObject(index, ICD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeCertificationRequired(size_t index = 0) {
    try {
      return this->getObject(index, ICD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End ICD */

} /* End HL7_29 */

#endif /* __ICD_v29_H__ */
