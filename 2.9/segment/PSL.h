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


#ifndef __PSL_v29_H__
#define __PSL_v29_H__

#include "../../common/Util.h"
#include "../datatype/CP.h"
#include "../datatype/CQ.h"
#include "../datatype/CWE.h"
#include "../datatype/CX.h"
#include "../datatype/DR.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/XCN.h"

namespace HL7_29 {

/* PSL */
class PSL : public HL7Segment {
 public:
  PSL() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PSL_1,
    PSL_2,
    PSL_3,
    PSL_4,
    PSL_5,
    PSL_6,
    PSL_7,
    PSL_8,
    PSL_9,
    PSL_10,
    PSL_11,
    PSL_12,
    PSL_13,
    PSL_14,
    PSL_15,
    PSL_16,
    PSL_17,
    PSL_18,
    PSL_19,
    PSL_20,
    PSL_21,
    PSL_22,
    PSL_23,
    PSL_24,
    PSL_25,
    PSL_26,
    PSL_27,
    PSL_28,
    PSL_29,
    PSL_30,
    PSL_31,
    PSL_32,
    PSL_33,
    PSL_34,
    PSL_35,
    PSL_36,
    PSL_37,
    PSL_38,
    PSL_39,
    PSL_40,
    PSL_41,
    PSL_42,
    PSL_43,
    PSL_44,
    PSL_45,
    PSL_46,
    PSL_47,
    PSL_48,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PSL"; }
  PSL* create() const { return new PSL(); }

 private:
  void init() {
    setName("PSL");
    /* Init members */
    addObject<EI>(PSL_1, "PSL.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(PSL_2, "PSL.2", HL7::initialized, HL7::repetition_off);
    addObject<SI>(PSL_3, "PSL.3", HL7::initialized, HL7::repetition_off);
    addObject<EI>(PSL_4, "PSL.4", HL7::initialized, HL7::repetition_off);
    addObject<EI>(PSL_5, "PSL.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PSL_6, "PSL.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PSL_7, "PSL.7", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PSL_8, "PSL.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PSL_9, "PSL.9", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PSL_10, "PSL.10", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PSL_11, "PSL.11", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(PSL_12, "PSL.12", HL7::initialized, HL7::repetition_off);
    addObject<CP>(PSL_13, "PSL.13", HL7::initialized, HL7::repetition_off);
    addObject<NM>(PSL_14, "PSL.14", HL7::initialized, HL7::repetition_off);
    addObject<CP>(PSL_15, "PSL.15", HL7::initialized, HL7::repetition_off);
    addObject<CP>(PSL_16, "PSL.16", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PSL_17, "PSL.17", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PSL_18, "PSL.18", HL7::initialized, HL7::repetition_off);
    addObject<EI>(PSL_19, "PSL.19", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PSL_20, "PSL.20", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PSL_21, "PSL.21", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PSL_22, "PSL.22", HL7::initialized, HL7::repetition_off);
    addObject<CP>(PSL_23, "PSL.23", HL7::initialized, HL7::repetition_off);
    addObject<NM>(PSL_24, "PSL.24", HL7::initialized, HL7::repetition_off);
    addObject<CX>(PSL_25, "PSL.25", HL7::initialized, HL7::repetition_off);
    addObject<DR>(PSL_26, "PSL.26", HL7::initialized, HL7::repetition_off);
    addObject<NM>(PSL_27, "PSL.27", HL7::initialized, HL7::repetition_off);
    addObject<NM>(PSL_28, "PSL.28", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(PSL_29, "PSL.29", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(PSL_30, "PSL.30", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PSL_31, "PSL.31", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PSL_32, "PSL.32", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PSL_33, "PSL.33", HL7::initialized, HL7::repetition_off);
    addObject<NM>(PSL_34, "PSL.34", HL7::initialized, HL7::repetition_off);
    addObject<CP>(PSL_35, "PSL.35", HL7::initialized, HL7::repetition_off);
    addObject<NM>(PSL_36, "PSL.36", HL7::initialized, HL7::repetition_off);
    addObject<NM>(PSL_37, "PSL.37", HL7::initialized, HL7::repetition_off);
    addObject<CP>(PSL_38, "PSL.38", HL7::initialized, HL7::repetition_off);
    addObject<NM>(PSL_39, "PSL.39", HL7::initialized, HL7::repetition_off);
    addObject<CP>(PSL_40, "PSL.40", HL7::initialized, HL7::repetition_off);
    addObject<NM>(PSL_41, "PSL.41", HL7::initialized, HL7::repetition_off);
    addObject<NM>(PSL_42, "PSL.42", HL7::initialized, HL7::repetition_off);
    addObject<CP>(PSL_43, "PSL.43", HL7::initialized, HL7::repetition_off);
    addObject<CP>(PSL_44, "PSL.44", HL7::initialized, HL7::repetition_off);
    addObject<NM>(PSL_45, "PSL.45", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PSL_46, "PSL.46", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PSL_47, "PSL.47", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PSL_48, "PSL.48", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Provider Product/Service Line Item Number
   */

  EI* getPSL_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PSL_1);
  }

  EI* getProviderProductServiceLineItemNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PSL_1);
  }

  bool isPSL_1(size_t index = 0) {
    try {
      return this->getObject(index, PSL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderProductServiceLineItemNumber(size_t index = 0) {
    try {
      return this->getObject(index, PSL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payer Product/Service Line Item Number
   */

  EI* getPSL_2(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PSL_2);
  }

  EI* getPayerProductServiceLineItemNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PSL_2);
  }

  bool isPSL_2(size_t index = 0) {
    try {
      return this->getObject(index, PSL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPayerProductServiceLineItemNumber(size_t index = 0) {
    try {
      return this->getObject(index, PSL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product/Service Line Item Sequence Number
   */

  SI* getPSL_3(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, PSL_3);
  }

  SI* getProductServiceLineItemSequenceNumber(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, PSL_3);
  }

  bool isPSL_3(size_t index = 0) {
    try {
      return this->getObject(index, PSL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductServiceLineItemSequenceNumber(size_t index = 0) {
    try {
      return this->getObject(index, PSL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider Tracking ID
   */

  EI* getPSL_4(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PSL_4);
  }

  EI* getProviderTrackingID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PSL_4);
  }

  bool isPSL_4(size_t index = 0) {
    try {
      return this->getObject(index, PSL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderTrackingID(size_t index = 0) {
    try {
      return this->getObject(index, PSL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payer Tracking ID
   */

  EI* getPSL_5(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PSL_5);
  }

  EI* getPayerTrackingID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PSL_5);
  }

  bool isPSL_5(size_t index = 0) {
    try {
      return this->getObject(index, PSL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPayerTrackingID(size_t index = 0) {
    try {
      return this->getObject(index, PSL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product/Service Line Item Status
   */

  CWE* getPSL_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PSL_6);
  }

  CWE* getProductServiceLineItemStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PSL_6);
  }

  bool isPSL_6(size_t index = 0) {
    try {
      return this->getObject(index, PSL_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductServiceLineItemStatus(size_t index = 0) {
    try {
      return this->getObject(index, PSL_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product/Service Code
   */

  CWE* getPSL_7(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PSL_7);
  }

  CWE* getProductServiceCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PSL_7);
  }

  bool isPSL_7(size_t index = 0) {
    try {
      return this->getObject(index, PSL_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductServiceCode(size_t index = 0) {
    try {
      return this->getObject(index, PSL_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product/Service Code Modifier
   */

  CWE* getPSL_8(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PSL_8);
  }

  CWE* getProductServiceCodeModifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PSL_8);
  }

  bool isPSL_8(size_t index = 0) {
    try {
      return this->getObject(index, PSL_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductServiceCodeModifier(size_t index = 0) {
    try {
      return this->getObject(index, PSL_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product/Service Code Description
   */

  ST* getPSL_9(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PSL_9);
  }

  ST* getProductServiceCodeDescription(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PSL_9);
  }

  bool isPSL_9(size_t index = 0) {
    try {
      return this->getObject(index, PSL_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductServiceCodeDescription(size_t index = 0) {
    try {
      return this->getObject(index, PSL_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product/Service Effective Date
   */

  DTM* getPSL_10(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PSL_10);
  }

  DTM* getProductServiceEffectiveDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PSL_10);
  }

  bool isPSL_10(size_t index = 0) {
    try {
      return this->getObject(index, PSL_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductServiceEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, PSL_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product/Service Expiration Date
   */

  DTM* getPSL_11(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PSL_11);
  }

  DTM* getProductServiceExpirationDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PSL_11);
  }

  bool isPSL_11(size_t index = 0) {
    try {
      return this->getObject(index, PSL_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductServiceExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, PSL_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product/Service Quantity
   */

  CQ* getPSL_12(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, PSL_12);
  }

  CQ* getProductServiceQuantity(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, PSL_12);
  }

  bool isPSL_12(size_t index = 0) {
    try {
      return this->getObject(index, PSL_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductServiceQuantity(size_t index = 0) {
    try {
      return this->getObject(index, PSL_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product/Service Unit Cost
   */

  CP* getPSL_13(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PSL_13);
  }

  CP* getProductServiceUnitCost(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PSL_13);
  }

  bool isPSL_13(size_t index = 0) {
    try {
      return this->getObject(index, PSL_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductServiceUnitCost(size_t index = 0) {
    try {
      return this->getObject(index, PSL_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of Items per Unit
   */

  NM* getPSL_14(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PSL_14);
  }

  NM* getNumberofItemsperUnit(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PSL_14);
  }

  bool isPSL_14(size_t index = 0) {
    try {
      return this->getObject(index, PSL_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberofItemsperUnit(size_t index = 0) {
    try {
      return this->getObject(index, PSL_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product/Service Gross Amount
   */

  CP* getPSL_15(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PSL_15);
  }

  CP* getProductServiceGrossAmount(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PSL_15);
  }

  bool isPSL_15(size_t index = 0) {
    try {
      return this->getObject(index, PSL_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductServiceGrossAmount(size_t index = 0) {
    try {
      return this->getObject(index, PSL_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product/Service Billed Amount
   */

  CP* getPSL_16(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PSL_16);
  }

  CP* getProductServiceBilledAmount(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PSL_16);
  }

  bool isPSL_16(size_t index = 0) {
    try {
      return this->getObject(index, PSL_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductServiceBilledAmount(size_t index = 0) {
    try {
      return this->getObject(index, PSL_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product/Service Clarification Code Type
   */

  CWE* getPSL_17(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PSL_17);
  }

  CWE* getProductServiceClarificationCodeType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PSL_17);
  }

  bool isPSL_17(size_t index = 0) {
    try {
      return this->getObject(index, PSL_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductServiceClarificationCodeType(size_t index = 0) {
    try {
      return this->getObject(index, PSL_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product/Service Clarification Code Value
   */

  ST* getPSL_18(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PSL_18);
  }

  ST* getProductServiceClarificationCodeValue(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PSL_18);
  }

  bool isPSL_18(size_t index = 0) {
    try {
      return this->getObject(index, PSL_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductServiceClarificationCodeValue(size_t index = 0) {
    try {
      return this->getObject(index, PSL_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Health Document Reference Identifier
   */

  EI* getPSL_19(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PSL_19);
  }

  EI* getHealthDocumentReferenceIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PSL_19);
  }

  bool isPSL_19(size_t index = 0) {
    try {
      return this->getObject(index, PSL_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHealthDocumentReferenceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, PSL_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Processing Consideration Code
   */

  CWE* getPSL_20(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PSL_20);
  }

  CWE* getProcessingConsiderationCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PSL_20);
  }

  bool isPSL_20(size_t index = 0) {
    try {
      return this->getObject(index, PSL_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcessingConsiderationCode(size_t index = 0) {
    try {
      return this->getObject(index, PSL_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Restricted Disclosure Indicator
   */

  ID* getPSL_21(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PSL_21);
  }

  ID* getRestrictedDisclosureIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PSL_21);
  }

  bool isPSL_21(size_t index = 0) {
    try {
      return this->getObject(index, PSL_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRestrictedDisclosureIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PSL_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Related Product/Service Code Indicator
   */

  CWE* getPSL_22(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PSL_22);
  }

  CWE* getRelatedProductServiceCodeIndicator(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PSL_22);
  }

  bool isPSL_22(size_t index = 0) {
    try {
      return this->getObject(index, PSL_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRelatedProductServiceCodeIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PSL_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product/Service Amount for Physician
   */

  CP* getPSL_23(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PSL_23);
  }

  CP* getProductServiceAmountforPhysician(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PSL_23);
  }

  bool isPSL_23(size_t index = 0) {
    try {
      return this->getObject(index, PSL_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductServiceAmountforPhysician(size_t index = 0) {
    try {
      return this->getObject(index, PSL_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product/Service Cost Factor
   */

  NM* getPSL_24(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PSL_24);
  }

  NM* getProductServiceCostFactor(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PSL_24);
  }

  bool isPSL_24(size_t index = 0) {
    try {
      return this->getObject(index, PSL_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductServiceCostFactor(size_t index = 0) {
    try {
      return this->getObject(index, PSL_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Cost Center
   */

  CX* getPSL_25(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PSL_25);
  }

  CX* getCostCenter(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PSL_25);
  }

  bool isPSL_25(size_t index = 0) {
    try {
      return this->getObject(index, PSL_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCostCenter(size_t index = 0) {
    try {
      return this->getObject(index, PSL_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Billing Period
   */

  DR* getPSL_26(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, PSL_26);
  }

  DR* getBillingPeriod(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, PSL_26);
  }

  bool isPSL_26(size_t index = 0) {
    try {
      return this->getObject(index, PSL_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBillingPeriod(size_t index = 0) {
    try {
      return this->getObject(index, PSL_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Days without Billing
   */

  NM* getPSL_27(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PSL_27);
  }

  NM* getDayswithoutBilling(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PSL_27);
  }

  bool isPSL_27(size_t index = 0) {
    try {
      return this->getObject(index, PSL_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDayswithoutBilling(size_t index = 0) {
    try {
      return this->getObject(index, PSL_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Session-No
   */

  NM* getPSL_28(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PSL_28);
  }

  NM* getSessionNo(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PSL_28);
  }

  bool isPSL_28(size_t index = 0) {
    try {
      return this->getObject(index, PSL_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSessionNo(size_t index = 0) {
    try {
      return this->getObject(index, PSL_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Executing Physician ID
   */

  XCN* getPSL_29(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PSL_29);
  }

  XCN* getExecutingPhysicianID(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PSL_29);
  }

  bool isPSL_29(size_t index = 0) {
    try {
      return this->getObject(index, PSL_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExecutingPhysicianID(size_t index = 0) {
    try {
      return this->getObject(index, PSL_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Responsible Physician ID
   */

  XCN* getPSL_30(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PSL_30);
  }

  XCN* getResponsiblePhysicianID(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PSL_30);
  }

  bool isPSL_30(size_t index = 0) {
    try {
      return this->getObject(index, PSL_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResponsiblePhysicianID(size_t index = 0) {
    try {
      return this->getObject(index, PSL_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Role Executing Physician
   */

  CWE* getPSL_31(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PSL_31);
  }

  CWE* getRoleExecutingPhysician(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PSL_31);
  }

  bool isPSL_31(size_t index = 0) {
    try {
      return this->getObject(index, PSL_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoleExecutingPhysician(size_t index = 0) {
    try {
      return this->getObject(index, PSL_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Medical Role Executing Physician
   */

  CWE* getPSL_32(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PSL_32);
  }

  CWE* getMedicalRoleExecutingPhysician(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PSL_32);
  }

  bool isPSL_32(size_t index = 0) {
    try {
      return this->getObject(index, PSL_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMedicalRoleExecutingPhysician(size_t index = 0) {
    try {
      return this->getObject(index, PSL_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Side of body
   */

  CWE* getPSL_33(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PSL_33);
  }

  CWE* getSideofbody(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PSL_33);
  }

  bool isPSL_33(size_t index = 0) {
    try {
      return this->getObject(index, PSL_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSideofbody(size_t index = 0) {
    try {
      return this->getObject(index, PSL_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of TP's PP
   */

  NM* getPSL_34(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PSL_34);
  }

  NM* getNumberofTPsPP(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PSL_34);
  }

  bool isPSL_34(size_t index = 0) {
    try {
      return this->getObject(index, PSL_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberofTPsPP(size_t index = 0) {
    try {
      return this->getObject(index, PSL_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * TP-Value PP
   */

  CP* getPSL_35(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PSL_35);
  }

  CP* getTPValuePP(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PSL_35);
  }

  bool isPSL_35(size_t index = 0) {
    try {
      return this->getObject(index, PSL_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTPValuePP(size_t index = 0) {
    try {
      return this->getObject(index, PSL_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Internal Scaling Factor PP
   */

  NM* getPSL_36(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PSL_36);
  }

  NM* getInternalScalingFactorPP(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PSL_36);
  }

  bool isPSL_36(size_t index = 0) {
    try {
      return this->getObject(index, PSL_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInternalScalingFactorPP(size_t index = 0) {
    try {
      return this->getObject(index, PSL_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * External Scaling Factor PP
   */

  NM* getPSL_37(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PSL_37);
  }

  NM* getExternalScalingFactorPP(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PSL_37);
  }

  bool isPSL_37(size_t index = 0) {
    try {
      return this->getObject(index, PSL_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExternalScalingFactorPP(size_t index = 0) {
    try {
      return this->getObject(index, PSL_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Amount PP
   */

  CP* getPSL_38(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PSL_38);
  }

  CP* getAmountPP(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PSL_38);
  }

  bool isPSL_38(size_t index = 0) {
    try {
      return this->getObject(index, PSL_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAmountPP(size_t index = 0) {
    try {
      return this->getObject(index, PSL_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of TP's Technical Part
   */

  NM* getPSL_39(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PSL_39);
  }

  NM* getNumberofTPsTechnicalPart(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PSL_39);
  }

  bool isPSL_39(size_t index = 0) {
    try {
      return this->getObject(index, PSL_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberofTPsTechnicalPart(size_t index = 0) {
    try {
      return this->getObject(index, PSL_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * TP-Value Technical Part
   */

  CP* getPSL_40(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PSL_40);
  }

  CP* getTPValueTechnicalPart(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PSL_40);
  }

  bool isPSL_40(size_t index = 0) {
    try {
      return this->getObject(index, PSL_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTPValueTechnicalPart(size_t index = 0) {
    try {
      return this->getObject(index, PSL_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Internal Scaling Factor Technical Part
   */

  NM* getPSL_41(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PSL_41);
  }

  NM* getInternalScalingFactorTechnicalPart(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PSL_41);
  }

  bool isPSL_41(size_t index = 0) {
    try {
      return this->getObject(index, PSL_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInternalScalingFactorTechnicalPart(size_t index = 0) {
    try {
      return this->getObject(index, PSL_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * External Scaling Factor Technical Part
   */

  NM* getPSL_42(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PSL_42);
  }

  NM* getExternalScalingFactorTechnicalPart(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PSL_42);
  }

  bool isPSL_42(size_t index = 0) {
    try {
      return this->getObject(index, PSL_42) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExternalScalingFactorTechnicalPart(size_t index = 0) {
    try {
      return this->getObject(index, PSL_42) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Amount Technical Part
   */

  CP* getPSL_43(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PSL_43);
  }

  CP* getAmountTechnicalPart(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PSL_43);
  }

  bool isPSL_43(size_t index = 0) {
    try {
      return this->getObject(index, PSL_43) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAmountTechnicalPart(size_t index = 0) {
    try {
      return this->getObject(index, PSL_43) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Total Amount Professional Part + Technical
   */

  CP* getPSL_44(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PSL_44);
  }

  CP* getTotalAmountProfessionalPartTechnical(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PSL_44);
  }

  bool isPSL_44(size_t index = 0) {
    try {
      return this->getObject(index, PSL_44) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTotalAmountProfessionalPartTechnical(size_t index = 0) {
    try {
      return this->getObject(index, PSL_44) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * VAT-Rate
   */

  NM* getPSL_45(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PSL_45);
  }

  NM* getVATRate(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PSL_45);
  }

  bool isPSL_45(size_t index = 0) {
    try {
      return this->getObject(index, PSL_45) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVATRate(size_t index = 0) {
    try {
      return this->getObject(index, PSL_45) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Main-Service
   */

  ID* getPSL_46(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PSL_46);
  }

  ID* getMainService(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PSL_46);
  }

  bool isPSL_46(size_t index = 0) {
    try {
      return this->getObject(index, PSL_46) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMainService(size_t index = 0) {
    try {
      return this->getObject(index, PSL_46) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Validation
   */

  ID* getPSL_47(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PSL_47);
  }

  ID* getValidation(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PSL_47);
  }

  bool isPSL_47(size_t index = 0) {
    try {
      return this->getObject(index, PSL_47) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValidation(size_t index = 0) {
    try {
      return this->getObject(index, PSL_47) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Comment
   */

  ST* getPSL_48(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PSL_48);
  }

  ST* getComment(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PSL_48);
  }

  bool isPSL_48(size_t index = 0) {
    try {
      return this->getObject(index, PSL_48) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isComment(size_t index = 0) {
    try {
      return this->getObject(index, PSL_48) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PSL */

} /* End of namespace HL7_29 */
#endif /* __PSL_v29_H__ */
