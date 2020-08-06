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


#ifndef __DLN_v29_H__
#define __DLN_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DT.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* driver's license number */
class DLN : public HL7Data {
 public:
  DLN() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    DLN_1, /* Driver’s License Number */
    DLN_2, /* Issuing State, Province, Country */
    DLN_3, /* Expiration Date */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "DLN"; }
  DLN *create() const { return new DLN(); }

 private:
  void init() {
    setName("DLN");
    /* Init members */
    addObject<ST>(DLN_1, "DLN.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DLN_2, "DLN.2", HL7::initialized, HL7::repetition_off);
    addObject<DT>(DLN_3, "DLN.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Driver’s License Number
   */
  ST *getDLN_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, DLN_1);
  }

  ST *getDriversLicenseNumber(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, DLN_1);
  }

  bool isDLN_1(size_t index = 0) {
    try {
      return this->getObject(index, DLN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDriversLicenseNumber(size_t index = 0) {
    try {
      return this->getObject(index, DLN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Issuing State, Province, Country
   */
  CWE *getDLN_2(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, DLN_2);
  }

  CWE *getIssuingStateProvinceCountry(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, DLN_2);
  }

  bool isDLN_2(size_t index = 0) {
    try {
      return this->getObject(index, DLN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIssuingStateProvinceCountry(size_t index = 0) {
    try {
      return this->getObject(index, DLN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expiration Date
   */
  DT *getDLN_3(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, DLN_3);
  }

  DT *getExpirationDate(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, DLN_3);
  }

  bool isDLN_3(size_t index = 0) {
    try {
      return this->getObject(index, DLN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, DLN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End DLN */

} /* End HL7_29 */

#endif /* __DLN_v29_H__ */
