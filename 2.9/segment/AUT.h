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


#ifndef __AUT_v29_H__
#define __AUT_v29_H__

#include "../../common/Util.h"
#include "../datatype/CP.h"
#include "../datatype/CQ.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/MO.h"
#include "../datatype/ST.h"
#include "../datatype/XCN.h"
#include "../datatype/XON.h"
#include "../datatype/XTN.h"

namespace HL7_29 {

/* AUT */
class AUT : public HL7Segment {
 public:
  AUT() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    AUT_1,
    AUT_2,
    AUT_3,
    AUT_4,
    AUT_5,
    AUT_6,
    AUT_7,
    AUT_8,
    AUT_9,
    AUT_10,
    AUT_11,
    AUT_12,
    AUT_13,
    AUT_14,
    AUT_15,
    AUT_16,
    AUT_17,
    AUT_18,
    AUT_19,
    AUT_20,
    AUT_21,
    AUT_22,
    AUT_23,
    AUT_24,
    AUT_25,
    AUT_26,
    AUT_27,
    AUT_28,
    AUT_29,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "AUT"; }
  AUT* create() const { return new AUT(); }

 private:
  void init() {
    setName("AUT");
    /* Init members */
    addObject<CWE>(AUT_1, "AUT.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(AUT_2, "AUT.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(AUT_3, "AUT.3", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(AUT_4, "AUT.4", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(AUT_5, "AUT.5", HL7::initialized, HL7::repetition_off);
    addObject<EI>(AUT_6, "AUT.6", HL7::initialized, HL7::repetition_off);
    addObject<CP>(AUT_7, "AUT.7", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(AUT_8, "AUT.8", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(AUT_9, "AUT.9", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(AUT_10, "AUT.10", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(AUT_11, "AUT.11", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(AUT_12, "AUT.12", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(AUT_13, "AUT.13", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(AUT_14, "AUT.14", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(AUT_15, "AUT.15", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(AUT_16, "AUT.16", HL7::initialized, HL7::repetition_off);
    addObject<ST>(AUT_17, "AUT.17", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(AUT_18, "AUT.18", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(AUT_19, "AUT.19", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(AUT_20, "AUT.20", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(AUT_21, "AUT.21", HL7::initialized, HL7::repetition_off);
    addObject<MO>(AUT_22, "AUT.22", HL7::initialized, HL7::repetition_off);
    addObject<XON>(AUT_23, "AUT.23", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(AUT_24, "AUT.24", HL7::initialized, HL7::repetition_off);
    addObject<ST>(AUT_25, "AUT.25", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(AUT_26, "AUT.26", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(AUT_27, "AUT.27", HL7::initialized, HL7::repetition_off);
    addObject<ST>(AUT_28, "AUT.28", HL7::initialized, HL7::repetition_off);
    addObject<ID>(AUT_29, "AUT.29", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Authorizing Payor, Plan ID
   */

  CWE* getAUT_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AUT_1);
  }

  CWE* getAuthorizingPayorPlanID(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AUT_1);
  }

  bool isAUT_1(size_t index = 0) {
    try {
      return this->getObject(index, AUT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAuthorizingPayorPlanID(size_t index = 0) {
    try {
      return this->getObject(index, AUT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Authorizing Payor, Company ID
   */

  CWE* getAUT_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AUT_2);
  }

  CWE* getAuthorizingPayorCompanyID(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AUT_2);
  }

  bool isAUT_2(size_t index = 0) {
    try {
      return this->getObject(index, AUT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAuthorizingPayorCompanyID(size_t index = 0) {
    try {
      return this->getObject(index, AUT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Authorizing Payor, Company Name
   */

  ST* getAUT_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, AUT_3);
  }

  ST* getAuthorizingPayorCompanyName(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, AUT_3);
  }

  bool isAUT_3(size_t index = 0) {
    try {
      return this->getObject(index, AUT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAuthorizingPayorCompanyName(size_t index = 0) {
    try {
      return this->getObject(index, AUT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Authorization Effective Date
   */

  DTM* getAUT_4(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, AUT_4);
  }

  DTM* getAuthorizationEffectiveDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, AUT_4);
  }

  bool isAUT_4(size_t index = 0) {
    try {
      return this->getObject(index, AUT_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAuthorizationEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, AUT_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Authorization Expiration Date
   */

  DTM* getAUT_5(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, AUT_5);
  }

  DTM* getAuthorizationExpirationDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, AUT_5);
  }

  bool isAUT_5(size_t index = 0) {
    try {
      return this->getObject(index, AUT_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAuthorizationExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, AUT_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Authorization Identifier
   */

  EI* getAUT_6(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, AUT_6);
  }

  EI* getAuthorizationIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, AUT_6);
  }

  bool isAUT_6(size_t index = 0) {
    try {
      return this->getObject(index, AUT_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAuthorizationIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, AUT_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reimbursement Limit
   */

  CP* getAUT_7(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, AUT_7);
  }

  CP* getReimbursementLimit(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, AUT_7);
  }

  bool isAUT_7(size_t index = 0) {
    try {
      return this->getObject(index, AUT_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReimbursementLimit(size_t index = 0) {
    try {
      return this->getObject(index, AUT_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Number of Treatments
   */

  CQ* getAUT_8(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, AUT_8);
  }

  CQ* getRequestedNumberofTreatments(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, AUT_8);
  }

  bool isAUT_8(size_t index = 0) {
    try {
      return this->getObject(index, AUT_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedNumberofTreatments(size_t index = 0) {
    try {
      return this->getObject(index, AUT_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Authorized Number of Treatments
   */

  CQ* getAUT_9(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, AUT_9);
  }

  CQ* getAuthorizedNumberofTreatments(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, AUT_9);
  }

  bool isAUT_9(size_t index = 0) {
    try {
      return this->getObject(index, AUT_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAuthorizedNumberofTreatments(size_t index = 0) {
    try {
      return this->getObject(index, AUT_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Process Date
   */

  DTM* getAUT_10(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, AUT_10);
  }

  DTM* getProcessDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, AUT_10);
  }

  bool isAUT_10(size_t index = 0) {
    try {
      return this->getObject(index, AUT_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcessDate(size_t index = 0) {
    try {
      return this->getObject(index, AUT_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Discipline
   */

  CWE* getAUT_11(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AUT_11);
  }

  CWE* getRequestedDiscipline(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AUT_11);
  }

  bool isAUT_11(size_t index = 0) {
    try {
      return this->getObject(index, AUT_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedDiscipline(size_t index = 0) {
    try {
      return this->getObject(index, AUT_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Authorized Discipline
   */

  CWE* getAUT_12(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AUT_12);
  }

  CWE* getAuthorizedDiscipline(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AUT_12);
  }

  bool isAUT_12(size_t index = 0) {
    try {
      return this->getObject(index, AUT_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAuthorizedDiscipline(size_t index = 0) {
    try {
      return this->getObject(index, AUT_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Authorization Referral Type
   */

  CWE* getAUT_13(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AUT_13);
  }

  CWE* getAuthorizationReferralType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AUT_13);
  }

  bool isAUT_13(size_t index = 0) {
    try {
      return this->getObject(index, AUT_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAuthorizationReferralType(size_t index = 0) {
    try {
      return this->getObject(index, AUT_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Approval Status
   */

  CWE* getAUT_14(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AUT_14);
  }

  CWE* getApprovalStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AUT_14);
  }

  bool isAUT_14(size_t index = 0) {
    try {
      return this->getObject(index, AUT_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isApprovalStatus(size_t index = 0) {
    try {
      return this->getObject(index, AUT_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Planned Treatment Stop Date
   */

  DTM* getAUT_15(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, AUT_15);
  }

  DTM* getPlannedTreatmentStopDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, AUT_15);
  }

  bool isAUT_15(size_t index = 0) {
    try {
      return this->getObject(index, AUT_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlannedTreatmentStopDate(size_t index = 0) {
    try {
      return this->getObject(index, AUT_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Clinical Service
   */

  CWE* getAUT_16(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AUT_16);
  }

  CWE* getClinicalService(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AUT_16);
  }

  bool isAUT_16(size_t index = 0) {
    try {
      return this->getObject(index, AUT_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isClinicalService(size_t index = 0) {
    try {
      return this->getObject(index, AUT_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reason Text
   */

  ST* getAUT_17(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, AUT_17);
  }

  ST* getReasonText(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, AUT_17);
  }

  bool isAUT_17(size_t index = 0) {
    try {
      return this->getObject(index, AUT_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReasonText(size_t index = 0) {
    try {
      return this->getObject(index, AUT_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of Authorized Treatments/Units
   */

  CQ* getAUT_18(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, AUT_18);
  }

  CQ* getNumberofAuthorizedTreatmentsUnits(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, AUT_18);
  }

  bool isAUT_18(size_t index = 0) {
    try {
      return this->getObject(index, AUT_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberofAuthorizedTreatmentsUnits(size_t index = 0) {
    try {
      return this->getObject(index, AUT_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of Used Treatments/Units
   */

  CQ* getAUT_19(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, AUT_19);
  }

  CQ* getNumberofUsedTreatmentsUnits(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, AUT_19);
  }

  bool isAUT_19(size_t index = 0) {
    try {
      return this->getObject(index, AUT_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberofUsedTreatmentsUnits(size_t index = 0) {
    try {
      return this->getObject(index, AUT_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of Schedule Treatments/Units
   */

  CQ* getAUT_20(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, AUT_20);
  }

  CQ* getNumberofScheduleTreatmentsUnits(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, AUT_20);
  }

  bool isAUT_20(size_t index = 0) {
    try {
      return this->getObject(index, AUT_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberofScheduleTreatmentsUnits(size_t index = 0) {
    try {
      return this->getObject(index, AUT_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Encounter Type
   */

  CWE* getAUT_21(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AUT_21);
  }

  CWE* getEncounterType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AUT_21);
  }

  bool isAUT_21(size_t index = 0) {
    try {
      return this->getObject(index, AUT_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEncounterType(size_t index = 0) {
    try {
      return this->getObject(index, AUT_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Remaining Benefit Amount
   */

  MO* getAUT_22(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, AUT_22);
  }

  MO* getRemainingBenefitAmount(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, AUT_22);
  }

  bool isAUT_22(size_t index = 0) {
    try {
      return this->getObject(index, AUT_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRemainingBenefitAmount(size_t index = 0) {
    try {
      return this->getObject(index, AUT_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Authorized Provider
   */

  XON* getAUT_23(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, AUT_23);
  }

  XON* getAuthorizedProvider(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, AUT_23);
  }

  bool isAUT_23(size_t index = 0) {
    try {
      return this->getObject(index, AUT_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAuthorizedProvider(size_t index = 0) {
    try {
      return this->getObject(index, AUT_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Authorized Health Professional
   */

  XCN* getAUT_24(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, AUT_24);
  }

  XCN* getAuthorizedHealthProfessional(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, AUT_24);
  }

  bool isAUT_24(size_t index = 0) {
    try {
      return this->getObject(index, AUT_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAuthorizedHealthProfessional(size_t index = 0) {
    try {
      return this->getObject(index, AUT_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Source Text
   */

  ST* getAUT_25(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, AUT_25);
  }

  ST* getSourceText(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, AUT_25);
  }

  bool isAUT_25(size_t index = 0) {
    try {
      return this->getObject(index, AUT_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourceText(size_t index = 0) {
    try {
      return this->getObject(index, AUT_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Source Date
   */

  DTM* getAUT_26(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, AUT_26);
  }

  DTM* getSourceDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, AUT_26);
  }

  bool isAUT_26(size_t index = 0) {
    try {
      return this->getObject(index, AUT_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourceDate(size_t index = 0) {
    try {
      return this->getObject(index, AUT_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Source Phone
   */

  XTN* getAUT_27(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, AUT_27);
  }

  XTN* getSourcePhone(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, AUT_27);
  }

  bool isAUT_27(size_t index = 0) {
    try {
      return this->getObject(index, AUT_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourcePhone(size_t index = 0) {
    try {
      return this->getObject(index, AUT_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Comment
   */

  ST* getAUT_28(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, AUT_28);
  }

  ST* getComment(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, AUT_28);
  }

  bool isAUT_28(size_t index = 0) {
    try {
      return this->getObject(index, AUT_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isComment(size_t index = 0) {
    try {
      return this->getObject(index, AUT_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code
   */

  ID* getAUT_29(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, AUT_29);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, AUT_29);
  }

  bool isAUT_29(size_t index = 0) {
    try {
      return this->getObject(index, AUT_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, AUT_29) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of AUT */

} /* End of namespace HL7_29 */
#endif /* __AUT_v29_H__ */
