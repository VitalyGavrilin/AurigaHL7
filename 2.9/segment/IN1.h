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


#ifndef __IN1_v29_H__
#define __IN1_v29_H__

#include "../../common/Util.h"
#include "../datatype/AUI.h"
#include "../datatype/CP.h"
#include "../datatype/CWE.h"
#include "../datatype/CX.h"
#include "../datatype/DT.h"
#include "../datatype/DTM.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/XAD.h"
#include "../datatype/XCN.h"
#include "../datatype/XON.h"
#include "../datatype/XPN.h"
#include "../datatype/XTN.h"

namespace HL7_29 {

/* IN1 */
class IN1 : public HL7Segment {
 public:
  IN1() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    IN1_1,
    IN1_2,
    IN1_3,
    IN1_4,
    IN1_5,
    IN1_6,
    IN1_7,
    IN1_8,
    IN1_9,
    IN1_10,
    IN1_11,
    IN1_12,
    IN1_13,
    IN1_14,
    IN1_15,
    IN1_16,
    IN1_17,
    IN1_18,
    IN1_19,
    IN1_20,
    IN1_21,
    IN1_22,
    IN1_23,
    IN1_24,
    IN1_25,
    IN1_26,
    IN1_27,
    IN1_28,
    IN1_29,
    IN1_30,
    IN1_31,
    IN1_32,
    IN1_33,
    IN1_34,
    IN1_35,
    IN1_36,
    IN1_37,
    IN1_38,
    IN1_39,
    IN1_40,
    IN1_41,
    IN1_42,
    IN1_43,
    IN1_44,
    IN1_45,
    IN1_46,
    IN1_47,
    IN1_48,
    IN1_49,
    IN1_50,
    IN1_51,
    IN1_52,
    IN1_53,
    IN1_54,
    IN1_55,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "IN1"; }
  IN1* create() const { return new IN1(); }

 private:
  void init() {
    setName("IN1");
    /* Init members */
    addObject<SI>(IN1_1, "IN1.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN1_2, "IN1.2", HL7::initialized, HL7::repetition_off);
    addObject<CX>(IN1_3, "IN1.3", HL7::initialized, HL7::repetition_off);
    addObject<XON>(IN1_4, "IN1.4", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(IN1_5, "IN1.5", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(IN1_6, "IN1.6", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(IN1_7, "IN1.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IN1_8, "IN1.8", HL7::initialized, HL7::repetition_off);
    addObject<XON>(IN1_9, "IN1.9", HL7::initialized, HL7::repetition_off);
    addObject<CX>(IN1_10, "IN1.10", HL7::initialized, HL7::repetition_off);
    addObject<XON>(IN1_11, "IN1.11", HL7::initialized, HL7::repetition_off);
    addObject<DT>(IN1_12, "IN1.12", HL7::initialized, HL7::repetition_off);
    addObject<DT>(IN1_13, "IN1.13", HL7::initialized, HL7::repetition_off);
    addObject<AUI>(IN1_14, "IN1.14", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN1_15, "IN1.15", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(IN1_16, "IN1.16", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN1_17, "IN1.17", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(IN1_18, "IN1.18", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(IN1_19, "IN1.19", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN1_20, "IN1.20", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN1_21, "IN1.21", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IN1_22, "IN1.22", HL7::initialized, HL7::repetition_off);
    addObject<ID>(IN1_23, "IN1.23", HL7::initialized, HL7::repetition_off);
    addObject<DT>(IN1_24, "IN1.24", HL7::initialized, HL7::repetition_off);
    addObject<ID>(IN1_25, "IN1.25", HL7::initialized, HL7::repetition_off);
    addObject<DT>(IN1_26, "IN1.26", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN1_27, "IN1.27", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IN1_28, "IN1.28", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(IN1_29, "IN1.29", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(IN1_30, "IN1.30", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN1_31, "IN1.31", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN1_32, "IN1.32", HL7::initialized, HL7::repetition_off);
    addObject<NM>(IN1_33, "IN1.33", HL7::initialized, HL7::repetition_off);
    addObject<NM>(IN1_34, "IN1.34", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN1_35, "IN1.35", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IN1_36, "IN1.36", HL7::initialized, HL7::repetition_off);
    addObject<CP>(IN1_37, "IN1.37", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IN1_38, "IN1.38", HL7::initialized, HL7::repetition_off);
    addObject<NM>(IN1_39, "IN1.39", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IN1_40, "IN1.40", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IN1_41, "IN1.41", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN1_42, "IN1.42", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN1_43, "IN1.43", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(IN1_44, "IN1.44", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IN1_45, "IN1.45", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN1_46, "IN1.46", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN1_47, "IN1.47", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN1_48, "IN1.48", HL7::initialized, HL7::repetition_off);
    addObject<CX>(IN1_49, "IN1.49", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN1_50, "IN1.50", HL7::initialized, HL7::repetition_off);
    addObject<DT>(IN1_51, "IN1.51", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IN1_52, "IN1.52", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IN1_53, "IN1.53", HL7::initialized, HL7::repetition_off);
    addObject<CX>(IN1_54, "IN1.54", HL7::initialized, HL7::repetition_off);
    addObject<ID>(IN1_55, "IN1.55", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - IN1
   */

  SI* getIN1_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, IN1_1);
  }

  SI* getSetIDIN1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, IN1_1);
  }

  bool isIN1_1(size_t index = 0) {
    try {
      return this->getObject(index, IN1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDIN1(size_t index = 0) {
    try {
      return this->getObject(index, IN1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Health Plan ID
   */

  CWE* getIN1_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_2);
  }

  CWE* getHealthPlanID(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_2);
  }

  bool isIN1_2(size_t index = 0) {
    try {
      return this->getObject(index, IN1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHealthPlanID(size_t index = 0) {
    try {
      return this->getObject(index, IN1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insurance Company ID
   */

  CX* getIN1_3(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IN1_3);
  }

  CX* getInsuranceCompanyID(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IN1_3);
  }

  bool isIN1_3(size_t index = 0) {
    try {
      return this->getObject(index, IN1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuranceCompanyID(size_t index = 0) {
    try {
      return this->getObject(index, IN1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insurance Company Name
   */

  XON* getIN1_4(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IN1_4);
  }

  XON* getInsuranceCompanyName(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IN1_4);
  }

  bool isIN1_4(size_t index = 0) {
    try {
      return this->getObject(index, IN1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuranceCompanyName(size_t index = 0) {
    try {
      return this->getObject(index, IN1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insurance Company Address
   */

  XAD* getIN1_5(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, IN1_5);
  }

  XAD* getInsuranceCompanyAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, IN1_5);
  }

  bool isIN1_5(size_t index = 0) {
    try {
      return this->getObject(index, IN1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuranceCompanyAddress(size_t index = 0) {
    try {
      return this->getObject(index, IN1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insurance Co Contact Person
   */

  XPN* getIN1_6(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN1_6);
  }

  XPN* getInsuranceCoContactPerson(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN1_6);
  }

  bool isIN1_6(size_t index = 0) {
    try {
      return this->getObject(index, IN1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuranceCoContactPerson(size_t index = 0) {
    try {
      return this->getObject(index, IN1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insurance Co Phone Number
   */

  XTN* getIN1_7(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, IN1_7);
  }

  XTN* getInsuranceCoPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, IN1_7);
  }

  bool isIN1_7(size_t index = 0) {
    try {
      return this->getObject(index, IN1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuranceCoPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, IN1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Group Number
   */

  ST* getIN1_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN1_8);
  }

  ST* getGroupNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN1_8);
  }

  bool isIN1_8(size_t index = 0) {
    try {
      return this->getObject(index, IN1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGroupNumber(size_t index = 0) {
    try {
      return this->getObject(index, IN1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Group Name
   */

  XON* getIN1_9(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IN1_9);
  }

  XON* getGroupName(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IN1_9);
  }

  bool isIN1_9(size_t index = 0) {
    try {
      return this->getObject(index, IN1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGroupName(size_t index = 0) {
    try {
      return this->getObject(index, IN1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured's Group Emp ID
   */

  CX* getIN1_10(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IN1_10);
  }

  CX* getInsuredsGroupEmpID(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IN1_10);
  }

  bool isIN1_10(size_t index = 0) {
    try {
      return this->getObject(index, IN1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredsGroupEmpID(size_t index = 0) {
    try {
      return this->getObject(index, IN1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured's Group Emp Name
   */

  XON* getIN1_11(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IN1_11);
  }

  XON* getInsuredsGroupEmpName(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IN1_11);
  }

  bool isIN1_11(size_t index = 0) {
    try {
      return this->getObject(index, IN1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredsGroupEmpName(size_t index = 0) {
    try {
      return this->getObject(index, IN1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Plan Effective Date
   */

  DT* getIN1_12(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN1_12);
  }

  DT* getPlanEffectiveDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN1_12);
  }

  bool isIN1_12(size_t index = 0) {
    try {
      return this->getObject(index, IN1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlanEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, IN1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Plan Expiration Date
   */

  DT* getIN1_13(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN1_13);
  }

  DT* getPlanExpirationDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN1_13);
  }

  bool isIN1_13(size_t index = 0) {
    try {
      return this->getObject(index, IN1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlanExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, IN1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Authorization Information
   */

  AUI* getIN1_14(size_t index = 0) {
    return (AUI*)this->getObjectSafe(index, IN1_14);
  }

  AUI* getAuthorizationInformation(size_t index = 0) {
    return (AUI*)this->getObjectSafe(index, IN1_14);
  }

  bool isIN1_14(size_t index = 0) {
    try {
      return this->getObject(index, IN1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAuthorizationInformation(size_t index = 0) {
    try {
      return this->getObject(index, IN1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Plan Type
   */

  CWE* getIN1_15(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_15);
  }

  CWE* getPlanType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_15);
  }

  bool isIN1_15(size_t index = 0) {
    try {
      return this->getObject(index, IN1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlanType(size_t index = 0) {
    try {
      return this->getObject(index, IN1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name Of Insured
   */

  XPN* getIN1_16(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN1_16);
  }

  XPN* getNameOfInsured(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN1_16);
  }

  bool isIN1_16(size_t index = 0) {
    try {
      return this->getObject(index, IN1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfInsured(size_t index = 0) {
    try {
      return this->getObject(index, IN1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured's Relationship To Patient
   */

  CWE* getIN1_17(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_17);
  }

  CWE* getInsuredsRelationshipToPatient(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_17);
  }

  bool isIN1_17(size_t index = 0) {
    try {
      return this->getObject(index, IN1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredsRelationshipToPatient(size_t index = 0) {
    try {
      return this->getObject(index, IN1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured's Date Of Birth
   */

  DTM* getIN1_18(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IN1_18);
  }

  DTM* getInsuredsDateOfBirth(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IN1_18);
  }

  bool isIN1_18(size_t index = 0) {
    try {
      return this->getObject(index, IN1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredsDateOfBirth(size_t index = 0) {
    try {
      return this->getObject(index, IN1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured's Address
   */

  XAD* getIN1_19(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, IN1_19);
  }

  XAD* getInsuredsAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, IN1_19);
  }

  bool isIN1_19(size_t index = 0) {
    try {
      return this->getObject(index, IN1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredsAddress(size_t index = 0) {
    try {
      return this->getObject(index, IN1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assignment Of Benefits
   */

  CWE* getIN1_20(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_20);
  }

  CWE* getAssignmentOfBenefits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_20);
  }

  bool isIN1_20(size_t index = 0) {
    try {
      return this->getObject(index, IN1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssignmentOfBenefits(size_t index = 0) {
    try {
      return this->getObject(index, IN1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Coordination Of Benefits
   */

  CWE* getIN1_21(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_21);
  }

  CWE* getCoordinationOfBenefits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_21);
  }

  bool isIN1_21(size_t index = 0) {
    try {
      return this->getObject(index, IN1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCoordinationOfBenefits(size_t index = 0) {
    try {
      return this->getObject(index, IN1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Coord Of Ben. Priority
   */

  ST* getIN1_22(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN1_22);
  }

  ST* getCoordOfBenPriority(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN1_22);
  }

  bool isIN1_22(size_t index = 0) {
    try {
      return this->getObject(index, IN1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCoordOfBenPriority(size_t index = 0) {
    try {
      return this->getObject(index, IN1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Notice Of Admission Flag
   */

  ID* getIN1_23(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN1_23);
  }

  ID* getNoticeOfAdmissionFlag(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN1_23);
  }

  bool isIN1_23(size_t index = 0) {
    try {
      return this->getObject(index, IN1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNoticeOfAdmissionFlag(size_t index = 0) {
    try {
      return this->getObject(index, IN1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Notice Of Admission Date
   */

  DT* getIN1_24(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN1_24);
  }

  DT* getNoticeOfAdmissionDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN1_24);
  }

  bool isIN1_24(size_t index = 0) {
    try {
      return this->getObject(index, IN1_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNoticeOfAdmissionDate(size_t index = 0) {
    try {
      return this->getObject(index, IN1_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Report Of Eligibility Flag
   */

  ID* getIN1_25(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN1_25);
  }

  ID* getReportOfEligibilityFlag(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN1_25);
  }

  bool isIN1_25(size_t index = 0) {
    try {
      return this->getObject(index, IN1_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReportOfEligibilityFlag(size_t index = 0) {
    try {
      return this->getObject(index, IN1_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Report Of Eligibility Date
   */

  DT* getIN1_26(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN1_26);
  }

  DT* getReportOfEligibilityDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN1_26);
  }

  bool isIN1_26(size_t index = 0) {
    try {
      return this->getObject(index, IN1_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReportOfEligibilityDate(size_t index = 0) {
    try {
      return this->getObject(index, IN1_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Release Information Code
   */

  CWE* getIN1_27(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_27);
  }

  CWE* getReleaseInformationCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_27);
  }

  bool isIN1_27(size_t index = 0) {
    try {
      return this->getObject(index, IN1_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReleaseInformationCode(size_t index = 0) {
    try {
      return this->getObject(index, IN1_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pre-Admit Cert
   */

  ST* getIN1_28(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN1_28);
  }

  ST* getPreAdmitCert(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN1_28);
  }

  bool isIN1_28(size_t index = 0) {
    try {
      return this->getObject(index, IN1_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreAdmitCert(size_t index = 0) {
    try {
      return this->getObject(index, IN1_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Verification Date/Time
   */

  DTM* getIN1_29(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IN1_29);
  }

  DTM* getVerificationDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, IN1_29);
  }

  bool isIN1_29(size_t index = 0) {
    try {
      return this->getObject(index, IN1_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVerificationDateTime(size_t index = 0) {
    try {
      return this->getObject(index, IN1_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Verification By
   */

  XCN* getIN1_30(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IN1_30);
  }

  XCN* getVerificationBy(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IN1_30);
  }

  bool isIN1_30(size_t index = 0) {
    try {
      return this->getObject(index, IN1_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVerificationBy(size_t index = 0) {
    try {
      return this->getObject(index, IN1_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Type Of Agreement Code
   */

  CWE* getIN1_31(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_31);
  }

  CWE* getTypeOfAgreementCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_31);
  }

  bool isIN1_31(size_t index = 0) {
    try {
      return this->getObject(index, IN1_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTypeOfAgreementCode(size_t index = 0) {
    try {
      return this->getObject(index, IN1_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Billing Status
   */

  CWE* getIN1_32(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_32);
  }

  CWE* getBillingStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_32);
  }

  bool isIN1_32(size_t index = 0) {
    try {
      return this->getObject(index, IN1_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBillingStatus(size_t index = 0) {
    try {
      return this->getObject(index, IN1_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Lifetime Reserve Days
   */

  NM* getIN1_33(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, IN1_33);
  }

  NM* getLifetimeReserveDays(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, IN1_33);
  }

  bool isIN1_33(size_t index = 0) {
    try {
      return this->getObject(index, IN1_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLifetimeReserveDays(size_t index = 0) {
    try {
      return this->getObject(index, IN1_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Delay Before L.R. Day
   */

  NM* getIN1_34(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, IN1_34);
  }

  NM* getDelayBeforeLRDay(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, IN1_34);
  }

  bool isIN1_34(size_t index = 0) {
    try {
      return this->getObject(index, IN1_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDelayBeforeLRDay(size_t index = 0) {
    try {
      return this->getObject(index, IN1_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Company Plan Code
   */

  CWE* getIN1_35(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_35);
  }

  CWE* getCompanyPlanCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_35);
  }

  bool isIN1_35(size_t index = 0) {
    try {
      return this->getObject(index, IN1_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCompanyPlanCode(size_t index = 0) {
    try {
      return this->getObject(index, IN1_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Policy Number
   */

  ST* getIN1_36(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN1_36);
  }

  ST* getPolicyNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN1_36);
  }

  bool isIN1_36(size_t index = 0) {
    try {
      return this->getObject(index, IN1_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPolicyNumber(size_t index = 0) {
    try {
      return this->getObject(index, IN1_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Policy Deductible
   */

  CP* getIN1_37(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, IN1_37);
  }

  CP* getPolicyDeductible(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, IN1_37);
  }

  bool isIN1_37(size_t index = 0) {
    try {
      return this->getObject(index, IN1_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPolicyDeductible(size_t index = 0) {
    try {
      return this->getObject(index, IN1_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Policy Limit - Amount
   */

  ST* getIN1_38(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN1_38);
  }

  ST* getPolicyLimitAmount(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN1_38);
  }

  bool isIN1_38(size_t index = 0) {
    try {
      return this->getObject(index, IN1_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPolicyLimitAmount(size_t index = 0) {
    try {
      return this->getObject(index, IN1_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Policy Limit - Days
   */

  NM* getIN1_39(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, IN1_39);
  }

  NM* getPolicyLimitDays(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, IN1_39);
  }

  bool isIN1_39(size_t index = 0) {
    try {
      return this->getObject(index, IN1_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPolicyLimitDays(size_t index = 0) {
    try {
      return this->getObject(index, IN1_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Room Rate - Semi-Private
   */

  ST* getIN1_40(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN1_40);
  }

  ST* getRoomRateSemiPrivate(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN1_40);
  }

  bool isIN1_40(size_t index = 0) {
    try {
      return this->getObject(index, IN1_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoomRateSemiPrivate(size_t index = 0) {
    try {
      return this->getObject(index, IN1_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Room Rate - Private
   */

  ST* getIN1_41(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN1_41);
  }

  ST* getRoomRatePrivate(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN1_41);
  }

  bool isIN1_41(size_t index = 0) {
    try {
      return this->getObject(index, IN1_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoomRatePrivate(size_t index = 0) {
    try {
      return this->getObject(index, IN1_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured's Employment Status
   */

  CWE* getIN1_42(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_42);
  }

  CWE* getInsuredsEmploymentStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_42);
  }

  bool isIN1_42(size_t index = 0) {
    try {
      return this->getObject(index, IN1_42) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredsEmploymentStatus(size_t index = 0) {
    try {
      return this->getObject(index, IN1_42) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured's Administrative Sex
   */

  CWE* getIN1_43(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_43);
  }

  CWE* getInsuredsAdministrativeSex(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_43);
  }

  bool isIN1_43(size_t index = 0) {
    try {
      return this->getObject(index, IN1_43) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredsAdministrativeSex(size_t index = 0) {
    try {
      return this->getObject(index, IN1_43) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured's Employer's Address
   */

  XAD* getIN1_44(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, IN1_44);
  }

  XAD* getInsuredsEmployersAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, IN1_44);
  }

  bool isIN1_44(size_t index = 0) {
    try {
      return this->getObject(index, IN1_44) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredsEmployersAddress(size_t index = 0) {
    try {
      return this->getObject(index, IN1_44) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Verification Status
   */

  ST* getIN1_45(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN1_45);
  }

  ST* getVerificationStatus(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN1_45);
  }

  bool isIN1_45(size_t index = 0) {
    try {
      return this->getObject(index, IN1_45) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVerificationStatus(size_t index = 0) {
    try {
      return this->getObject(index, IN1_45) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Prior Insurance Plan ID
   */

  CWE* getIN1_46(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_46);
  }

  CWE* getPriorInsurancePlanID(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_46);
  }

  bool isIN1_46(size_t index = 0) {
    try {
      return this->getObject(index, IN1_46) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPriorInsurancePlanID(size_t index = 0) {
    try {
      return this->getObject(index, IN1_46) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Coverage Type
   */

  CWE* getIN1_47(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_47);
  }

  CWE* getCoverageType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_47);
  }

  bool isIN1_47(size_t index = 0) {
    try {
      return this->getObject(index, IN1_47) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCoverageType(size_t index = 0) {
    try {
      return this->getObject(index, IN1_47) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Handicap
   */

  CWE* getIN1_48(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_48);
  }

  CWE* getHandicap(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_48);
  }

  bool isIN1_48(size_t index = 0) {
    try {
      return this->getObject(index, IN1_48) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHandicap(size_t index = 0) {
    try {
      return this->getObject(index, IN1_48) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured's ID Number
   */

  CX* getIN1_49(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IN1_49);
  }

  CX* getInsuredsIDNumber(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IN1_49);
  }

  bool isIN1_49(size_t index = 0) {
    try {
      return this->getObject(index, IN1_49) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredsIDNumber(size_t index = 0) {
    try {
      return this->getObject(index, IN1_49) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Signature Code
   */

  CWE* getIN1_50(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_50);
  }

  CWE* getSignatureCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_50);
  }

  bool isIN1_50(size_t index = 0) {
    try {
      return this->getObject(index, IN1_50) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSignatureCode(size_t index = 0) {
    try {
      return this->getObject(index, IN1_50) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Signature Code Date
   */

  DT* getIN1_51(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN1_51);
  }

  DT* getSignatureCodeDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN1_51);
  }

  bool isIN1_51(size_t index = 0) {
    try {
      return this->getObject(index, IN1_51) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSignatureCodeDate(size_t index = 0) {
    try {
      return this->getObject(index, IN1_51) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured's Birth Place
   */

  ST* getIN1_52(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN1_52);
  }

  ST* getInsuredsBirthPlace(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN1_52);
  }

  bool isIN1_52(size_t index = 0) {
    try {
      return this->getObject(index, IN1_52) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredsBirthPlace(size_t index = 0) {
    try {
      return this->getObject(index, IN1_52) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * VIP Indicator
   */

  CWE* getIN1_53(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_53);
  }

  CWE* getVIPIndicator(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IN1_53);
  }

  bool isIN1_53(size_t index = 0) {
    try {
      return this->getObject(index, IN1_53) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVIPIndicator(size_t index = 0) {
    try {
      return this->getObject(index, IN1_53) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * External Health Plan Identifiers
   */

  CX* getIN1_54(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IN1_54);
  }

  CX* getExternalHealthPlanIdentifiers(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IN1_54);
  }

  bool isIN1_54(size_t index = 0) {
    try {
      return this->getObject(index, IN1_54) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExternalHealthPlanIdentifiers(size_t index = 0) {
    try {
      return this->getObject(index, IN1_54) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insurance Action Code
   */

  ID* getIN1_55(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN1_55);
  }

  ID* getInsuranceActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN1_55);
  }

  bool isIN1_55(size_t index = 0) {
    try {
      return this->getObject(index, IN1_55) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuranceActionCode(size_t index = 0) {
    try {
      return this->getObject(index, IN1_55) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of IN1 */

} /* End of namespace HL7_29 */
#endif /* __IN1_v29_H__ */
