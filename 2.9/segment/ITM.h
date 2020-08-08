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


#ifndef __ITM_v29_H__
#define __ITM_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CP.h"
#include "../datatype/CWE.h"
#include "../datatype/DR.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/MO.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"
#include "../datatype/XON.h"
#include "../datatype/XPN.h"
#include "../datatype/XTN.h"

namespace HL7_29 {

/* ITM */
class ITM : public HL7Segment {
 public:
  ITM() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    ITM_1,
    ITM_2,
    ITM_3,
    ITM_4,
    ITM_5,
    ITM_6,
    ITM_7,
    ITM_8,
    ITM_9,
    ITM_10,
    ITM_11,
    ITM_12,
    ITM_13,
    ITM_14,
    ITM_15,
    ITM_16,
    ITM_17,
    ITM_18,
    ITM_19,
    ITM_20,
    ITM_21,
    ITM_22,
    ITM_23,
    ITM_24,
    ITM_25,
    ITM_26,
    ITM_27,
    ITM_28,
    ITM_29,
    ITM_30,
    ITM_31,
    ITM_32,
    ITM_33,
    ITM_34,
    ITM_35,
    ITM_36,
    ITM_37,
    ITM_38,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "ITM"; }
  ITM* create() const { return new ITM(); }

 private:
  void init() {
    setName("ITM");
    /* Init members */
    addObject<EI>(ITM_1, "ITM.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ITM_2, "ITM.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ITM_3, "ITM.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ITM_4, "ITM.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ITM_5, "ITM.5", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(ITM_6, "ITM.6", HL7::initialized, HL7::repetition_off);
    addObject<EI>(ITM_7, "ITM.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ITM_8, "ITM.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ITM_9, "ITM.9", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ITM_10, "ITM.10", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(ITM_11, "ITM.11", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ITM_12, "ITM.12", HL7::initialized, HL7::repetition_off);
    addObject<CP>(ITM_13, "ITM.13", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(ITM_14, "ITM.14", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ITM_15, "ITM.15", HL7::initialized, HL7::repetition_off);
    addObject<XON>(ITM_16, "ITM.16", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(ITM_17, "ITM.17", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ITM_18, "ITM.18", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ITM_19, "ITM.19", HL7::initialized, HL7::repetition_off);
    addObject<NM>(ITM_20, "ITM.20", HL7::initialized, HL7::repetition_off);
    addObject<MO>(ITM_21, "ITM.21", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(ITM_22, "ITM.22", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(ITM_23, "ITM.23", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(ITM_24, "ITM.24", HL7::initialized, HL7::repetition_off);
    addObject<EI>(ITM_25, "ITM.25", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(ITM_26, "ITM.26", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(ITM_27, "ITM.27", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(ITM_28, "ITM.28", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ITM_29, "ITM.29", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(ITM_30, "ITM.30", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(ITM_31, "ITM.31", HL7::initialized, HL7::repetition_off);
    addObject<EI>(ITM_32, "ITM.32", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ITM_33, "ITM.33", HL7::initialized, HL7::repetition_off);
    addObject<DR>(ITM_34, "ITM.34", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(ITM_35, "ITM.35", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(ITM_36, "ITM.36", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ITM_37, "ITM.37", HL7::initialized, HL7::repetition_off);
    addObject<ID>(ITM_38, "ITM.38", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Item Identifier
   */

  EI* getITM_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ITM_1);
  }

  EI* getItemIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ITM_1);
  }

  bool isITM_1(size_t index = 0) {
    try {
      return this->getObject(index, ITM_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isItemIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, ITM_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Item Description
   */

  ST* getITM_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ITM_2);
  }

  ST* getItemDescription(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ITM_2);
  }

  bool isITM_2(size_t index = 0) {
    try {
      return this->getObject(index, ITM_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isItemDescription(size_t index = 0) {
    try {
      return this->getObject(index, ITM_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Item Status
   */

  CWE* getITM_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ITM_3);
  }

  CWE* getItemStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ITM_3);
  }

  bool isITM_3(size_t index = 0) {
    try {
      return this->getObject(index, ITM_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isItemStatus(size_t index = 0) {
    try {
      return this->getObject(index, ITM_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Item Type
   */

  CWE* getITM_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ITM_4);
  }

  CWE* getItemType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ITM_4);
  }

  bool isITM_4(size_t index = 0) {
    try {
      return this->getObject(index, ITM_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isItemType(size_t index = 0) {
    try {
      return this->getObject(index, ITM_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Item Category
   */

  CWE* getITM_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ITM_5);
  }

  CWE* getItemCategory(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ITM_5);
  }

  bool isITM_5(size_t index = 0) {
    try {
      return this->getObject(index, ITM_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isItemCategory(size_t index = 0) {
    try {
      return this->getObject(index, ITM_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Subject to Expiration Indicator
   */

  CNE* getITM_6(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ITM_6);
  }

  CNE* getSubjecttoExpirationIndicator(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ITM_6);
  }

  bool isITM_6(size_t index = 0) {
    try {
      return this->getObject(index, ITM_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubjecttoExpirationIndicator(size_t index = 0) {
    try {
      return this->getObject(index, ITM_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Manufacturer Identifier
   */

  EI* getITM_7(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ITM_7);
  }

  EI* getManufacturerIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ITM_7);
  }

  bool isITM_7(size_t index = 0) {
    try {
      return this->getObject(index, ITM_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isManufacturerIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, ITM_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Manufacturer Name
   */

  ST* getITM_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ITM_8);
  }

  ST* getManufacturerName(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ITM_8);
  }

  bool isITM_8(size_t index = 0) {
    try {
      return this->getObject(index, ITM_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isManufacturerName(size_t index = 0) {
    try {
      return this->getObject(index, ITM_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Manufacturer Catalog Number
   */

  ST* getITM_9(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ITM_9);
  }

  ST* getManufacturerCatalogNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ITM_9);
  }

  bool isITM_9(size_t index = 0) {
    try {
      return this->getObject(index, ITM_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isManufacturerCatalogNumber(size_t index = 0) {
    try {
      return this->getObject(index, ITM_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Manufacturer Labeler Identification Code
   */

  CWE* getITM_10(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ITM_10);
  }

  CWE* getManufacturerLabelerIdentificationCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ITM_10);
  }

  bool isITM_10(size_t index = 0) {
    try {
      return this->getObject(index, ITM_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isManufacturerLabelerIdentificationCode(size_t index = 0) {
    try {
      return this->getObject(index, ITM_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Chargeable Indicator
   */

  CNE* getITM_11(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ITM_11);
  }

  CNE* getPatientChargeableIndicator(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ITM_11);
  }

  bool isITM_11(size_t index = 0) {
    try {
      return this->getObject(index, ITM_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientChargeableIndicator(size_t index = 0) {
    try {
      return this->getObject(index, ITM_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Code
   */

  CWE* getITM_12(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ITM_12);
  }

  CWE* getTransactionCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ITM_12);
  }

  bool isITM_12(size_t index = 0) {
    try {
      return this->getObject(index, ITM_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionCode(size_t index = 0) {
    try {
      return this->getObject(index, ITM_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Amount - Unit
   */

  CP* getITM_13(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, ITM_13);
  }

  CP* getTransactionAmountUnit(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, ITM_13);
  }

  bool isITM_13(size_t index = 0) {
    try {
      return this->getObject(index, ITM_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionAmountUnit(size_t index = 0) {
    try {
      return this->getObject(index, ITM_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Stocked Item Indicator
   */

  CNE* getITM_14(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ITM_14);
  }

  CNE* getStockedItemIndicator(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ITM_14);
  }

  bool isITM_14(size_t index = 0) {
    try {
      return this->getObject(index, ITM_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStockedItemIndicator(size_t index = 0) {
    try {
      return this->getObject(index, ITM_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Supply Risk Codes
   */

  CWE* getITM_15(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ITM_15);
  }

  CWE* getSupplyRiskCodes(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ITM_15);
  }

  bool isITM_15(size_t index = 0) {
    try {
      return this->getObject(index, ITM_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSupplyRiskCodes(size_t index = 0) {
    try {
      return this->getObject(index, ITM_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Approving Regulatory Agency
   */

  XON* getITM_16(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, ITM_16);
  }

  XON* getApprovingRegulatoryAgency(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, ITM_16);
  }

  bool isITM_16(size_t index = 0) {
    try {
      return this->getObject(index, ITM_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isApprovingRegulatoryAgency(size_t index = 0) {
    try {
      return this->getObject(index, ITM_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Latex Indicator
   */

  CNE* getITM_17(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ITM_17);
  }

  CNE* getLatexIndicator(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ITM_17);
  }

  bool isITM_17(size_t index = 0) {
    try {
      return this->getObject(index, ITM_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLatexIndicator(size_t index = 0) {
    try {
      return this->getObject(index, ITM_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ruling Act
   */

  CWE* getITM_18(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ITM_18);
  }

  CWE* getRulingAct(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ITM_18);
  }

  bool isITM_18(size_t index = 0) {
    try {
      return this->getObject(index, ITM_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRulingAct(size_t index = 0) {
    try {
      return this->getObject(index, ITM_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Item Natural Account Code
   */

  CWE* getITM_19(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ITM_19);
  }

  CWE* getItemNaturalAccountCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ITM_19);
  }

  bool isITM_19(size_t index = 0) {
    try {
      return this->getObject(index, ITM_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isItemNaturalAccountCode(size_t index = 0) {
    try {
      return this->getObject(index, ITM_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Approved To Buy Quantity
   */

  NM* getITM_20(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ITM_20);
  }

  NM* getApprovedToBuyQuantity(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ITM_20);
  }

  bool isITM_20(size_t index = 0) {
    try {
      return this->getObject(index, ITM_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isApprovedToBuyQuantity(size_t index = 0) {
    try {
      return this->getObject(index, ITM_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Approved To Buy Price
   */

  MO* getITM_21(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, ITM_21);
  }

  MO* getApprovedToBuyPrice(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, ITM_21);
  }

  bool isITM_21(size_t index = 0) {
    try {
      return this->getObject(index, ITM_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isApprovedToBuyPrice(size_t index = 0) {
    try {
      return this->getObject(index, ITM_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Taxable Item Indicator
   */

  CNE* getITM_22(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ITM_22);
  }

  CNE* getTaxableItemIndicator(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ITM_22);
  }

  bool isITM_22(size_t index = 0) {
    try {
      return this->getObject(index, ITM_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTaxableItemIndicator(size_t index = 0) {
    try {
      return this->getObject(index, ITM_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Freight Charge Indicator
   */

  CNE* getITM_23(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ITM_23);
  }

  CNE* getFreightChargeIndicator(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ITM_23);
  }

  bool isITM_23(size_t index = 0) {
    try {
      return this->getObject(index, ITM_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFreightChargeIndicator(size_t index = 0) {
    try {
      return this->getObject(index, ITM_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Item Set Indicator
   */

  CNE* getITM_24(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ITM_24);
  }

  CNE* getItemSetIndicator(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ITM_24);
  }

  bool isITM_24(size_t index = 0) {
    try {
      return this->getObject(index, ITM_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isItemSetIndicator(size_t index = 0) {
    try {
      return this->getObject(index, ITM_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Item Set Identifier
   */

  EI* getITM_25(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ITM_25);
  }

  EI* getItemSetIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ITM_25);
  }

  bool isITM_25(size_t index = 0) {
    try {
      return this->getObject(index, ITM_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isItemSetIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, ITM_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Track Department Usage Indicator
   */

  CNE* getITM_26(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ITM_26);
  }

  CNE* getTrackDepartmentUsageIndicator(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ITM_26);
  }

  bool isITM_26(size_t index = 0) {
    try {
      return this->getObject(index, ITM_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTrackDepartmentUsageIndicator(size_t index = 0) {
    try {
      return this->getObject(index, ITM_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Code
   */

  CNE* getITM_27(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ITM_27);
  }

  CNE* getProcedureCode(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ITM_27);
  }

  bool isITM_27(size_t index = 0) {
    try {
      return this->getObject(index, ITM_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureCode(size_t index = 0) {
    try {
      return this->getObject(index, ITM_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Code Modifier
   */

  CNE* getITM_28(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ITM_28);
  }

  CNE* getProcedureCodeModifier(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ITM_28);
  }

  bool isITM_28(size_t index = 0) {
    try {
      return this->getObject(index, ITM_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureCodeModifier(size_t index = 0) {
    try {
      return this->getObject(index, ITM_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Special Handling Code
   */

  CWE* getITM_29(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ITM_29);
  }

  CWE* getSpecialHandlingCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ITM_29);
  }

  bool isITM_29(size_t index = 0) {
    try {
      return this->getObject(index, ITM_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialHandlingCode(size_t index = 0) {
    try {
      return this->getObject(index, ITM_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Hazardous Indicator
   */

  CNE* getITM_30(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ITM_30);
  }

  CNE* getHazardousIndicator(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ITM_30);
  }

  bool isITM_30(size_t index = 0) {
    try {
      return this->getObject(index, ITM_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHazardousIndicator(size_t index = 0) {
    try {
      return this->getObject(index, ITM_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sterile Indicator
   */

  CNE* getITM_31(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ITM_31);
  }

  CNE* getSterileIndicator(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ITM_31);
  }

  bool isITM_31(size_t index = 0) {
    try {
      return this->getObject(index, ITM_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSterileIndicator(size_t index = 0) {
    try {
      return this->getObject(index, ITM_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Material Data Safety Sheet Number
   */

  EI* getITM_32(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ITM_32);
  }

  EI* getMaterialDataSafetySheetNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ITM_32);
  }

  bool isITM_32(size_t index = 0) {
    try {
      return this->getObject(index, ITM_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMaterialDataSafetySheetNumber(size_t index = 0) {
    try {
      return this->getObject(index, ITM_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * United Nations Standard Products and
   */

  CWE* getITM_33(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ITM_33);
  }

  CWE* getUnitedNationsStandardProductsand(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ITM_33);
  }

  bool isITM_33(size_t index = 0) {
    try {
      return this->getObject(index, ITM_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUnitedNationsStandardProductsand(size_t index = 0) {
    try {
      return this->getObject(index, ITM_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contract Date
   */

  DR* getITM_34(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, ITM_34);
  }

  DR* getContractDate(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, ITM_34);
  }

  bool isITM_34(size_t index = 0) {
    try {
      return this->getObject(index, ITM_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContractDate(size_t index = 0) {
    try {
      return this->getObject(index, ITM_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Manufacturer Contact Name
   */

  XPN* getITM_35(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, ITM_35);
  }

  XPN* getManufacturerContactName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, ITM_35);
  }

  bool isITM_35(size_t index = 0) {
    try {
      return this->getObject(index, ITM_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isManufacturerContactName(size_t index = 0) {
    try {
      return this->getObject(index, ITM_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Manufacturer Contact Information
   */

  XTN* getITM_36(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, ITM_36);
  }

  XTN* getManufacturerContactInformation(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, ITM_36);
  }

  bool isITM_36(size_t index = 0) {
    try {
      return this->getObject(index, ITM_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isManufacturerContactInformation(size_t index = 0) {
    try {
      return this->getObject(index, ITM_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Class of Trade
   */

  ST* getITM_37(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ITM_37);
  }

  ST* getClassofTrade(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ITM_37);
  }

  bool isITM_37(size_t index = 0) {
    try {
      return this->getObject(index, ITM_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isClassofTrade(size_t index = 0) {
    try {
      return this->getObject(index, ITM_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Field Level Event Code
   */

  ID* getITM_38(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ITM_38);
  }

  ID* getFieldLevelEventCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ITM_38);
  }

  bool isITM_38(size_t index = 0) {
    try {
      return this->getObject(index, ITM_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFieldLevelEventCode(size_t index = 0) {
    try {
      return this->getObject(index, ITM_38) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ITM */

} /* End of namespace HL7_29 */
#endif /* __ITM_v29_H__ */
