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


#ifndef __CX_v29_H__
#define __CX_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DT.h"
#include "../datatype/HD.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* extended composite ID with check digit */
class CX : public HL7Data {
 public:
  CX() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CX_1, /* ID Number */
    CX_2, /* Identifier Check Digit */
    CX_3, /* Check Digit Scheme */
    CX_4, /* Assigning Authority */
    CX_5, /* Identifier Type Code */
    CX_6, /* Assigning Facility */
    CX_7, /* Effective Date */
    CX_8, /* Expiration Date */
    CX_9, /* Assigning Jurisdiction */
    CX_10, /* Assigning Agency or Department */
    CX_11, /* Security Check */
    CX_12, /* Security Check Scheme */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CX"; }
  CX *create() const { return new CX(); }

 private:
  void init() {
    setName("CX");
    /* Init members */
    addObject<ST>(CX_1, "CX.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CX_2, "CX.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CX_3, "CX.3", HL7::initialized, HL7::repetition_off);
    addObject<HD>(CX_4, "CX.4", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CX_5, "CX.5", HL7::initialized, HL7::repetition_off);
    addObject<HD>(CX_6, "CX.6", HL7::initialized, HL7::repetition_off);
    addObject<DT>(CX_7, "CX.7", HL7::initialized, HL7::repetition_off);
    addObject<DT>(CX_8, "CX.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CX_9, "CX.9", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CX_10, "CX.10", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CX_11, "CX.11", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CX_12, "CX.12", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * ID Number
   */
  ST *getCX_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CX_1);
  }

  ST *getIDNumber(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CX_1);
  }

  bool isCX_1(size_t index = 0) {
    try {
      return this->getObject(index, CX_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIDNumber(size_t index = 0) {
    try {
      return this->getObject(index, CX_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Identifier Check Digit
   */
  ST *getCX_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CX_2);
  }

  ST *getIdentifierCheckDigit(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CX_2);
  }

  bool isCX_2(size_t index = 0) {
    try {
      return this->getObject(index, CX_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifierCheckDigit(size_t index = 0) {
    try {
      return this->getObject(index, CX_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Check Digit Scheme
   */
  ID *getCX_3(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CX_3);
  }

  ID *getCheckDigitScheme(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CX_3);
  }

  bool isCX_3(size_t index = 0) {
    try {
      return this->getObject(index, CX_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCheckDigitScheme(size_t index = 0) {
    try {
      return this->getObject(index, CX_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assigning Authority
   */
  HD *getCX_4(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, CX_4);
  }

  HD *getAssigningAuthority(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, CX_4);
  }

  bool isCX_4(size_t index = 0) {
    try {
      return this->getObject(index, CX_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningAuthority(size_t index = 0) {
    try {
      return this->getObject(index, CX_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Identifier Type Code
   */
  ID *getCX_5(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CX_5);
  }

  ID *getIdentifierTypeCode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CX_5);
  }

  bool isCX_5(size_t index = 0) {
    try {
      return this->getObject(index, CX_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifierTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, CX_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assigning Facility
   */
  HD *getCX_6(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, CX_6);
  }

  HD *getAssigningFacility(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, CX_6);
  }

  bool isCX_6(size_t index = 0) {
    try {
      return this->getObject(index, CX_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningFacility(size_t index = 0) {
    try {
      return this->getObject(index, CX_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Date
   */
  DT *getCX_7(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, CX_7);
  }

  DT *getEffectiveDate(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, CX_7);
  }

  bool isCX_7(size_t index = 0) {
    try {
      return this->getObject(index, CX_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, CX_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expiration Date
   */
  DT *getCX_8(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, CX_8);
  }

  DT *getExpirationDate(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, CX_8);
  }

  bool isCX_8(size_t index = 0) {
    try {
      return this->getObject(index, CX_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, CX_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assigning Jurisdiction
   */
  CWE *getCX_9(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, CX_9);
  }

  CWE *getAssigningJurisdiction(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, CX_9);
  }

  bool isCX_9(size_t index = 0) {
    try {
      return this->getObject(index, CX_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningJurisdiction(size_t index = 0) {
    try {
      return this->getObject(index, CX_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assigning Agency or Department
   */
  CWE *getCX_10(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, CX_10);
  }

  CWE *getAssigningAgencyorDepartment(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, CX_10);
  }

  bool isCX_10(size_t index = 0) {
    try {
      return this->getObject(index, CX_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningAgencyorDepartment(size_t index = 0) {
    try {
      return this->getObject(index, CX_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Security Check
   */
  ST *getCX_11(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CX_11);
  }

  ST *getSecurityCheck(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CX_11);
  }

  bool isCX_11(size_t index = 0) {
    try {
      return this->getObject(index, CX_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecurityCheck(size_t index = 0) {
    try {
      return this->getObject(index, CX_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Security Check Scheme
   */
  ID *getCX_12(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CX_12);
  }

  ID *getSecurityCheckScheme(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CX_12);
  }

  bool isCX_12(size_t index = 0) {
    try {
      return this->getObject(index, CX_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecurityCheckScheme(size_t index = 0) {
    try {
      return this->getObject(index, CX_12) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CX */

} /* End HL7_29 */

#endif /* __CX_v29_H__ */
