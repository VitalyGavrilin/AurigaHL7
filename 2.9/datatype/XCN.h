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


#ifndef __XCN_v29_H__
#define __XCN_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/FN.h"
#include "../datatype/HD.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* extended composite ID number and name for persons */
class XCN : public HL7Data {
 public:
  XCN() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    XCN_1, /* Person Identifier */
    XCN_2, /* Family Name */
    XCN_3, /* Given Name */
    XCN_4, /* Second and Further Given Names or Initials Thereof */
    XCN_5, /* Suffix */
    XCN_6, /* Prefix */
    XCN_7, /* Source Table */
    XCN_8, /* Assigning Authority */
    XCN_9, /* Name Type Code */
    XCN_10, /* Identifier Check Digit */
    XCN_11, /* Check Digit Scheme */
    XCN_12, /* Identifier Type Code */
    XCN_13, /* Assigning Facility */
    XCN_14, /* Name Representation Code */
    XCN_15, /* Name Context */
    XCN_16, /* Name Assembly Order */
    XCN_17, /* Effective Date */
    XCN_18, /* Expiration Date */
    XCN_19, /* Professional Suffix */
    XCN_20, /* Assigning Jurisdiction */
    XCN_21, /* Assigning Agency or Department */
    XCN_22, /* Security Check */
    XCN_23, /* Security Check Scheme */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "XCN"; }
  XCN *create() const { return new XCN(); }

 private:
  void init() {
    setName("XCN");
    /* Init members */
    addObject<ST>(XCN_1, "XCN.1", HL7::initialized, HL7::repetition_off);
    addObject<FN>(XCN_2, "XCN.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XCN_3, "XCN.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XCN_4, "XCN.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XCN_5, "XCN.5", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XCN_6, "XCN.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(XCN_7, "XCN.7", HL7::initialized, HL7::repetition_off);
    addObject<HD>(XCN_8, "XCN.8", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XCN_9, "XCN.9", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XCN_10, "XCN.10", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XCN_11, "XCN.11", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XCN_12, "XCN.12", HL7::initialized, HL7::repetition_off);
    addObject<HD>(XCN_13, "XCN.13", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XCN_14, "XCN.14", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(XCN_15, "XCN.15", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XCN_16, "XCN.16", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(XCN_17, "XCN.17", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(XCN_18, "XCN.18", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XCN_19, "XCN.19", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(XCN_20, "XCN.20", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(XCN_21, "XCN.21", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XCN_22, "XCN.22", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XCN_23, "XCN.23", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Person Identifier
   */
  ST *getXCN_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_1);
  }

  ST *getPersonIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_1);
  }

  bool isXCN_1(size_t index = 0) {
    try {
      return this->getObject(index, XCN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPersonIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, XCN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Family Name
   */
  FN *getXCN_2(size_t index = 0) {
    return (FN *)this->getObjectSafe(index, XCN_2);
  }

  FN *getFamilyName(size_t index = 0) {
    return (FN *)this->getObjectSafe(index, XCN_2);
  }

  bool isXCN_2(size_t index = 0) {
    try {
      return this->getObject(index, XCN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFamilyName(size_t index = 0) {
    try {
      return this->getObject(index, XCN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Given Name
   */
  ST *getXCN_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_3);
  }

  ST *getGivenName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_3);
  }

  bool isXCN_3(size_t index = 0) {
    try {
      return this->getObject(index, XCN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGivenName(size_t index = 0) {
    try {
      return this->getObject(index, XCN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second and Further Given Names or Initials Thereof
   */
  ST *getXCN_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_4);
  }

  ST *getSecondandFurtherGivenNamesorInitialsThereof(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_4);
  }

  bool isXCN_4(size_t index = 0) {
    try {
      return this->getObject(index, XCN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondandFurtherGivenNamesorInitialsThereof(size_t index = 0) {
    try {
      return this->getObject(index, XCN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Suffix
   */
  ST *getXCN_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_5);
  }

  ST *getSuffix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_5);
  }

  bool isXCN_5(size_t index = 0) {
    try {
      return this->getObject(index, XCN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSuffix(size_t index = 0) {
    try {
      return this->getObject(index, XCN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Prefix
   */
  ST *getXCN_6(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_6);
  }

  ST *getPrefix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_6);
  }

  bool isXCN_6(size_t index = 0) {
    try {
      return this->getObject(index, XCN_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrefix(size_t index = 0) {
    try {
      return this->getObject(index, XCN_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Source Table
   */
  CWE *getXCN_7(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, XCN_7);
  }

  CWE *getSourceTable(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, XCN_7);
  }

  bool isXCN_7(size_t index = 0) {
    try {
      return this->getObject(index, XCN_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourceTable(size_t index = 0) {
    try {
      return this->getObject(index, XCN_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assigning Authority
   */
  HD *getXCN_8(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, XCN_8);
  }

  HD *getAssigningAuthority(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, XCN_8);
  }

  bool isXCN_8(size_t index = 0) {
    try {
      return this->getObject(index, XCN_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningAuthority(size_t index = 0) {
    try {
      return this->getObject(index, XCN_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name Type Code
   */
  ID *getXCN_9(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XCN_9);
  }

  ID *getNameTypeCode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XCN_9);
  }

  bool isXCN_9(size_t index = 0) {
    try {
      return this->getObject(index, XCN_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, XCN_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Identifier Check Digit
   */
  ST *getXCN_10(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_10);
  }

  ST *getIdentifierCheckDigit(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_10);
  }

  bool isXCN_10(size_t index = 0) {
    try {
      return this->getObject(index, XCN_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifierCheckDigit(size_t index = 0) {
    try {
      return this->getObject(index, XCN_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Check Digit Scheme
   */
  ID *getXCN_11(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XCN_11);
  }

  ID *getCheckDigitScheme(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XCN_11);
  }

  bool isXCN_11(size_t index = 0) {
    try {
      return this->getObject(index, XCN_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCheckDigitScheme(size_t index = 0) {
    try {
      return this->getObject(index, XCN_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Identifier Type Code
   */
  ID *getXCN_12(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XCN_12);
  }

  ID *getIdentifierTypeCode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XCN_12);
  }

  bool isXCN_12(size_t index = 0) {
    try {
      return this->getObject(index, XCN_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifierTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, XCN_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assigning Facility
   */
  HD *getXCN_13(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, XCN_13);
  }

  HD *getAssigningFacility(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, XCN_13);
  }

  bool isXCN_13(size_t index = 0) {
    try {
      return this->getObject(index, XCN_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningFacility(size_t index = 0) {
    try {
      return this->getObject(index, XCN_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name Representation Code
   */
  ID *getXCN_14(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XCN_14);
  }

  ID *getNameRepresentationCode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XCN_14);
  }

  bool isXCN_14(size_t index = 0) {
    try {
      return this->getObject(index, XCN_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameRepresentationCode(size_t index = 0) {
    try {
      return this->getObject(index, XCN_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name Context
   */
  CWE *getXCN_15(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, XCN_15);
  }

  CWE *getNameContext(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, XCN_15);
  }

  bool isXCN_15(size_t index = 0) {
    try {
      return this->getObject(index, XCN_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameContext(size_t index = 0) {
    try {
      return this->getObject(index, XCN_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name Assembly Order
   */
  ID *getXCN_16(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XCN_16);
  }

  ID *getNameAssemblyOrder(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XCN_16);
  }

  bool isXCN_16(size_t index = 0) {
    try {
      return this->getObject(index, XCN_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameAssemblyOrder(size_t index = 0) {
    try {
      return this->getObject(index, XCN_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Date
   */
  DTM *getXCN_17(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, XCN_17);
  }

  DTM *getEffectiveDate(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, XCN_17);
  }

  bool isXCN_17(size_t index = 0) {
    try {
      return this->getObject(index, XCN_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, XCN_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expiration Date
   */
  DTM *getXCN_18(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, XCN_18);
  }

  DTM *getExpirationDate(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, XCN_18);
  }

  bool isXCN_18(size_t index = 0) {
    try {
      return this->getObject(index, XCN_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, XCN_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Professional Suffix
   */
  ST *getXCN_19(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_19);
  }

  ST *getProfessionalSuffix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_19);
  }

  bool isXCN_19(size_t index = 0) {
    try {
      return this->getObject(index, XCN_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProfessionalSuffix(size_t index = 0) {
    try {
      return this->getObject(index, XCN_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assigning Jurisdiction
   */
  CWE *getXCN_20(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, XCN_20);
  }

  CWE *getAssigningJurisdiction(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, XCN_20);
  }

  bool isXCN_20(size_t index = 0) {
    try {
      return this->getObject(index, XCN_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningJurisdiction(size_t index = 0) {
    try {
      return this->getObject(index, XCN_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assigning Agency or Department
   */
  CWE *getXCN_21(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, XCN_21);
  }

  CWE *getAssigningAgencyorDepartment(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, XCN_21);
  }

  bool isXCN_21(size_t index = 0) {
    try {
      return this->getObject(index, XCN_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningAgencyorDepartment(size_t index = 0) {
    try {
      return this->getObject(index, XCN_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Security Check
   */
  ST *getXCN_22(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_22);
  }

  ST *getSecurityCheck(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XCN_22);
  }

  bool isXCN_22(size_t index = 0) {
    try {
      return this->getObject(index, XCN_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecurityCheck(size_t index = 0) {
    try {
      return this->getObject(index, XCN_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Security Check Scheme
   */
  ID *getXCN_23(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XCN_23);
  }

  ID *getSecurityCheckScheme(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XCN_23);
  }

  bool isXCN_23(size_t index = 0) {
    try {
      return this->getObject(index, XCN_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecurityCheckScheme(size_t index = 0) {
    try {
      return this->getObject(index, XCN_23) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End XCN */

} /* End HL7_29 */

#endif /* __XCN_v29_H__ */
