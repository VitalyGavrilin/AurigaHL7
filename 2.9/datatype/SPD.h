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


#ifndef __SPD_v29_H__
#define __SPD_v29_H__

#include "../../common/Util.h"
#include "../datatype/DT.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* specialty description */
class SPD : public HL7Data {
 public:
  SPD() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    SPD_1, /* Specialty Name */
    SPD_2, /* Governing Board */
    SPD_3, /* Eligible or Certified */
    SPD_4, /* Date of Certification */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "SPD"; }
  SPD *create() const { return new SPD(); }

 private:
  void init() {
    setName("SPD");
    /* Init members */
    addObject<ST>(SPD_1, "SPD.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(SPD_2, "SPD.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(SPD_3, "SPD.3", HL7::initialized, HL7::repetition_off);
    addObject<DT>(SPD_4, "SPD.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Specialty Name
   */
  ST *getSPD_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SPD_1);
  }

  ST *getSpecialtyName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SPD_1);
  }

  bool isSPD_1(size_t index = 0) {
    try {
      return this->getObject(index, SPD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialtyName(size_t index = 0) {
    try {
      return this->getObject(index, SPD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Governing Board
   */
  ST *getSPD_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SPD_2);
  }

  ST *getGoverningBoard(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SPD_2);
  }

  bool isSPD_2(size_t index = 0) {
    try {
      return this->getObject(index, SPD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGoverningBoard(size_t index = 0) {
    try {
      return this->getObject(index, SPD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Eligible or Certified
   */
  ID *getSPD_3(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, SPD_3);
  }

  ID *getEligibleorCertified(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, SPD_3);
  }

  bool isSPD_3(size_t index = 0) {
    try {
      return this->getObject(index, SPD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEligibleorCertified(size_t index = 0) {
    try {
      return this->getObject(index, SPD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date of Certification
   */
  DT *getSPD_4(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, SPD_4);
  }

  DT *getDateofCertification(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, SPD_4);
  }

  bool isSPD_4(size_t index = 0) {
    try {
      return this->getObject(index, SPD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateofCertification(size_t index = 0) {
    try {
      return this->getObject(index, SPD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End SPD */

} /* End HL7_29 */

#endif /* __SPD_v29_H__ */
