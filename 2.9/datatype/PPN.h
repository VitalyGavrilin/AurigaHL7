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


#ifndef __PPN_v29_H__
#define __PPN_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/FN.h"
#include "../datatype/HD.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* performing person time stamp */
class PPN : public HL7Data {
 public:
  PPN() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    PPN_1, /* Person Identifier */
    PPN_2, /* Family Name */
    PPN_3, /* Given Name */
    PPN_4, /* Second and Further Given Names or Initials Thereof */
    PPN_5, /* Suffix */
    PPN_6, /* Prefix */
    PPN_7, /* Source Table */
    PPN_8, /* Assigning Authority */
    PPN_9, /* Name Type Code */
    PPN_10, /* Identifier Check Digit */
    PPN_11, /* Check Digit Scheme */
    PPN_12, /* Identifier Type Code */
    PPN_13, /* Assigning Facility */
    PPN_14, /* Date/Time Action Performed */
    PPN_15, /* Name Representation Code */
    PPN_16, /* Name Context */
    PPN_17, /* Name Assembly Order */
    PPN_18, /* Effective Date */
    PPN_19, /* Expiration Date */
    PPN_20, /* Professional Suffix */
    PPN_21, /* Assigning Jurisdiction */
    PPN_22, /* Assigning Agency or Department */
    PPN_23, /* Security Check */
    PPN_24, /* Security Check Scheme */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "PPN"; }
  PPN *create() const { return new PPN(); }

 private:
  void init() {
    setName("PPN");
    /* Init members */
    addObject<ST>(PPN_1, "PPN.1", HL7::initialized, HL7::repetition_off);
    addObject<FN>(PPN_2, "PPN.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PPN_3, "PPN.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PPN_4, "PPN.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PPN_5, "PPN.5", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PPN_6, "PPN.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PPN_7, "PPN.7", HL7::initialized, HL7::repetition_off);
    addObject<HD>(PPN_8, "PPN.8", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PPN_9, "PPN.9", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PPN_10, "PPN.10", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PPN_11, "PPN.11", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PPN_12, "PPN.12", HL7::initialized, HL7::repetition_off);
    addObject<HD>(PPN_13, "PPN.13", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PPN_14, "PPN.14", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PPN_15, "PPN.15", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PPN_16, "PPN.16", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PPN_17, "PPN.17", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PPN_18, "PPN.18", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PPN_19, "PPN.19", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PPN_20, "PPN.20", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PPN_21, "PPN.21", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PPN_22, "PPN.22", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PPN_23, "PPN.23", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PPN_24, "PPN.24", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Person Identifier
   */
  ST *getPPN_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_1);
  }

  ST *getPersonIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_1);
  }

  bool isPPN_1(size_t index = 0) {
    try {
      return this->getObject(index, PPN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPersonIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, PPN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Family Name
   */
  FN *getPPN_2(size_t index = 0) {
    return (FN *)this->getObjectSafe(index, PPN_2);
  }

  FN *getFamilyName(size_t index = 0) {
    return (FN *)this->getObjectSafe(index, PPN_2);
  }

  bool isPPN_2(size_t index = 0) {
    try {
      return this->getObject(index, PPN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFamilyName(size_t index = 0) {
    try {
      return this->getObject(index, PPN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Given Name
   */
  ST *getPPN_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_3);
  }

  ST *getGivenName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_3);
  }

  bool isPPN_3(size_t index = 0) {
    try {
      return this->getObject(index, PPN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGivenName(size_t index = 0) {
    try {
      return this->getObject(index, PPN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second and Further Given Names or Initials Thereof
   */
  ST *getPPN_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_4);
  }

  ST *getSecondandFurtherGivenNamesorInitialsThereof(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_4);
  }

  bool isPPN_4(size_t index = 0) {
    try {
      return this->getObject(index, PPN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondandFurtherGivenNamesorInitialsThereof(size_t index = 0) {
    try {
      return this->getObject(index, PPN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Suffix
   */
  ST *getPPN_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_5);
  }

  ST *getSuffix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_5);
  }

  bool isPPN_5(size_t index = 0) {
    try {
      return this->getObject(index, PPN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSuffix(size_t index = 0) {
    try {
      return this->getObject(index, PPN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Prefix
   */
  ST *getPPN_6(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_6);
  }

  ST *getPrefix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_6);
  }

  bool isPPN_6(size_t index = 0) {
    try {
      return this->getObject(index, PPN_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrefix(size_t index = 0) {
    try {
      return this->getObject(index, PPN_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Source Table
   */
  CWE *getPPN_7(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, PPN_7);
  }

  CWE *getSourceTable(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, PPN_7);
  }

  bool isPPN_7(size_t index = 0) {
    try {
      return this->getObject(index, PPN_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourceTable(size_t index = 0) {
    try {
      return this->getObject(index, PPN_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assigning Authority
   */
  HD *getPPN_8(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, PPN_8);
  }

  HD *getAssigningAuthority(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, PPN_8);
  }

  bool isPPN_8(size_t index = 0) {
    try {
      return this->getObject(index, PPN_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningAuthority(size_t index = 0) {
    try {
      return this->getObject(index, PPN_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name Type Code
   */
  ID *getPPN_9(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PPN_9);
  }

  ID *getNameTypeCode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PPN_9);
  }

  bool isPPN_9(size_t index = 0) {
    try {
      return this->getObject(index, PPN_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, PPN_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Identifier Check Digit
   */
  ST *getPPN_10(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_10);
  }

  ST *getIdentifierCheckDigit(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_10);
  }

  bool isPPN_10(size_t index = 0) {
    try {
      return this->getObject(index, PPN_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifierCheckDigit(size_t index = 0) {
    try {
      return this->getObject(index, PPN_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Check Digit Scheme
   */
  ID *getPPN_11(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PPN_11);
  }

  ID *getCheckDigitScheme(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PPN_11);
  }

  bool isPPN_11(size_t index = 0) {
    try {
      return this->getObject(index, PPN_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCheckDigitScheme(size_t index = 0) {
    try {
      return this->getObject(index, PPN_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Identifier Type Code
   */
  ID *getPPN_12(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PPN_12);
  }

  ID *getIdentifierTypeCode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PPN_12);
  }

  bool isPPN_12(size_t index = 0) {
    try {
      return this->getObject(index, PPN_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifierTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, PPN_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assigning Facility
   */
  HD *getPPN_13(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, PPN_13);
  }

  HD *getAssigningFacility(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, PPN_13);
  }

  bool isPPN_13(size_t index = 0) {
    try {
      return this->getObject(index, PPN_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningFacility(size_t index = 0) {
    try {
      return this->getObject(index, PPN_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time Action Performed
   */
  DTM *getPPN_14(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, PPN_14);
  }

  DTM *getDateTimeActionPerformed(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, PPN_14);
  }

  bool isPPN_14(size_t index = 0) {
    try {
      return this->getObject(index, PPN_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeActionPerformed(size_t index = 0) {
    try {
      return this->getObject(index, PPN_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name Representation Code
   */
  ID *getPPN_15(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PPN_15);
  }

  ID *getNameRepresentationCode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PPN_15);
  }

  bool isPPN_15(size_t index = 0) {
    try {
      return this->getObject(index, PPN_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameRepresentationCode(size_t index = 0) {
    try {
      return this->getObject(index, PPN_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name Context
   */
  CWE *getPPN_16(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, PPN_16);
  }

  CWE *getNameContext(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, PPN_16);
  }

  bool isPPN_16(size_t index = 0) {
    try {
      return this->getObject(index, PPN_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameContext(size_t index = 0) {
    try {
      return this->getObject(index, PPN_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name Assembly Order
   */
  ID *getPPN_17(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PPN_17);
  }

  ID *getNameAssemblyOrder(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PPN_17);
  }

  bool isPPN_17(size_t index = 0) {
    try {
      return this->getObject(index, PPN_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameAssemblyOrder(size_t index = 0) {
    try {
      return this->getObject(index, PPN_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Date
   */
  DTM *getPPN_18(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, PPN_18);
  }

  DTM *getEffectiveDate(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, PPN_18);
  }

  bool isPPN_18(size_t index = 0) {
    try {
      return this->getObject(index, PPN_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, PPN_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expiration Date
   */
  DTM *getPPN_19(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, PPN_19);
  }

  DTM *getExpirationDate(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, PPN_19);
  }

  bool isPPN_19(size_t index = 0) {
    try {
      return this->getObject(index, PPN_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, PPN_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Professional Suffix
   */
  ST *getPPN_20(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_20);
  }

  ST *getProfessionalSuffix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_20);
  }

  bool isPPN_20(size_t index = 0) {
    try {
      return this->getObject(index, PPN_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProfessionalSuffix(size_t index = 0) {
    try {
      return this->getObject(index, PPN_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assigning Jurisdiction
   */
  CWE *getPPN_21(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, PPN_21);
  }

  CWE *getAssigningJurisdiction(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, PPN_21);
  }

  bool isPPN_21(size_t index = 0) {
    try {
      return this->getObject(index, PPN_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningJurisdiction(size_t index = 0) {
    try {
      return this->getObject(index, PPN_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assigning Agency or Department
   */
  CWE *getPPN_22(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, PPN_22);
  }

  CWE *getAssigningAgencyorDepartment(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, PPN_22);
  }

  bool isPPN_22(size_t index = 0) {
    try {
      return this->getObject(index, PPN_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningAgencyorDepartment(size_t index = 0) {
    try {
      return this->getObject(index, PPN_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Security Check
   */
  ST *getPPN_23(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_23);
  }

  ST *getSecurityCheck(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PPN_23);
  }

  bool isPPN_23(size_t index = 0) {
    try {
      return this->getObject(index, PPN_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecurityCheck(size_t index = 0) {
    try {
      return this->getObject(index, PPN_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Security Check Scheme
   */
  ID *getPPN_24(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PPN_24);
  }

  ID *getSecurityCheckScheme(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PPN_24);
  }

  bool isPPN_24(size_t index = 0) {
    try {
      return this->getObject(index, PPN_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecurityCheckScheme(size_t index = 0) {
    try {
      return this->getObject(index, PPN_24) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End PPN */

} /* End HL7_29 */

#endif /* __PPN_v29_H__ */
