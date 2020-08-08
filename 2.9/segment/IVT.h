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


#ifndef __IVT_v29_H__
#define __IVT_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CP.h"
#include "../datatype/CWE.h"
#include "../datatype/EI.h"
#include "../datatype/NM.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* IVT */
class IVT : public HL7Segment {
 public:
  IVT() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    IVT_1,
    IVT_2,
    IVT_3,
    IVT_4,
    IVT_5,
    IVT_6,
    IVT_7,
    IVT_8,
    IVT_9,
    IVT_10,
    IVT_11,
    IVT_12,
    IVT_13,
    IVT_14,
    IVT_15,
    IVT_16,
    IVT_17,
    IVT_18,
    IVT_19,
    IVT_20,
    IVT_21,
    IVT_22,
    IVT_23,
    IVT_24,
    IVT_25,
    IVT_26,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "IVT"; }
  IVT* create() const { return new IVT(); }

 private:
  void init() {
    setName("IVT");
    /* Init members */
    addObject<SI>(IVT_1, "IVT.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(IVT_2, "IVT.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IVT_3, "IVT.3", HL7::initialized, HL7::repetition_off);
    addObject<EI>(IVT_4, "IVT.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IVT_5, "IVT.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IVT_6, "IVT.6", HL7::initialized, HL7::repetition_off);
    addObject<EI>(IVT_7, "IVT.7", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IVT_8, "IVT.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IVT_9, "IVT.9", HL7::initialized, HL7::repetition_off);
    addObject<EI>(IVT_10, "IVT.10", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(IVT_11, "IVT.11", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IVT_12, "IVT.12", HL7::initialized, HL7::repetition_off);
    addObject<CP>(IVT_13, "IVT.13", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IVT_14, "IVT.14", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(IVT_15, "IVT.15", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(IVT_16, "IVT.16", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(IVT_17, "IVT.17", HL7::initialized, HL7::repetition_off);
    addObject<CP>(IVT_18, "IVT.18", HL7::initialized, HL7::repetition_off);
    addObject<EI>(IVT_19, "IVT.19", HL7::initialized, HL7::repetition_off);
    addObject<EI>(IVT_20, "IVT.20", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IVT_21, "IVT.21", HL7::initialized, HL7::repetition_off);
    addObject<NM>(IVT_22, "IVT.22", HL7::initialized, HL7::repetition_off);
    addObject<NM>(IVT_23, "IVT.23", HL7::initialized, HL7::repetition_off);
    addObject<NM>(IVT_24, "IVT.24", HL7::initialized, HL7::repetition_off);
    addObject<NM>(IVT_25, "IVT.25", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(IVT_26, "IVT.26", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set Id – IVT
   */

  SI* getIVT_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, IVT_1);
  }

  SI* getSetIdIVT(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, IVT_1);
  }

  bool isIVT_1(size_t index = 0) {
    try {
      return this->getObject(index, IVT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIdIVT(size_t index = 0) {
    try {
      return this->getObject(index, IVT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inventory Location Identifier
   */

  EI* getIVT_2(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IVT_2);
  }

  EI* getInventoryLocationIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IVT_2);
  }

  bool isIVT_2(size_t index = 0) {
    try {
      return this->getObject(index, IVT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInventoryLocationIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, IVT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inventory Location Name
   */

  ST* getIVT_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IVT_3);
  }

  ST* getInventoryLocationName(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IVT_3);
  }

  bool isIVT_3(size_t index = 0) {
    try {
      return this->getObject(index, IVT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInventoryLocationName(size_t index = 0) {
    try {
      return this->getObject(index, IVT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Source Location Identifier
   */

  EI* getIVT_4(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IVT_4);
  }

  EI* getSourceLocationIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IVT_4);
  }

  bool isIVT_4(size_t index = 0) {
    try {
      return this->getObject(index, IVT_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourceLocationIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, IVT_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Source Location Name
   */

  ST* getIVT_5(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IVT_5);
  }

  ST* getSourceLocationName(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IVT_5);
  }

  bool isIVT_5(size_t index = 0) {
    try {
      return this->getObject(index, IVT_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourceLocationName(size_t index = 0) {
    try {
      return this->getObject(index, IVT_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Item Status
   */

  CWE* getIVT_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IVT_6);
  }

  CWE* getItemStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IVT_6);
  }

  bool isIVT_6(size_t index = 0) {
    try {
      return this->getObject(index, IVT_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isItemStatus(size_t index = 0) {
    try {
      return this->getObject(index, IVT_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Bin Location Identifier
   */

  EI* getIVT_7(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IVT_7);
  }

  EI* getBinLocationIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IVT_7);
  }

  bool isIVT_7(size_t index = 0) {
    try {
      return this->getObject(index, IVT_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBinLocationIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, IVT_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Order Packaging
   */

  CWE* getIVT_8(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IVT_8);
  }

  CWE* getOrderPackaging(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IVT_8);
  }

  bool isIVT_8(size_t index = 0) {
    try {
      return this->getObject(index, IVT_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderPackaging(size_t index = 0) {
    try {
      return this->getObject(index, IVT_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Issue Packaging
   */

  CWE* getIVT_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IVT_9);
  }

  CWE* getIssuePackaging(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IVT_9);
  }

  bool isIVT_9(size_t index = 0) {
    try {
      return this->getObject(index, IVT_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIssuePackaging(size_t index = 0) {
    try {
      return this->getObject(index, IVT_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Default Inventory Asset Account
   */

  EI* getIVT_10(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IVT_10);
  }

  EI* getDefaultInventoryAssetAccount(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IVT_10);
  }

  bool isIVT_10(size_t index = 0) {
    try {
      return this->getObject(index, IVT_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDefaultInventoryAssetAccount(size_t index = 0) {
    try {
      return this->getObject(index, IVT_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Chargeable Indicator
   */

  CNE* getIVT_11(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, IVT_11);
  }

  CNE* getPatientChargeableIndicator(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, IVT_11);
  }

  bool isIVT_11(size_t index = 0) {
    try {
      return this->getObject(index, IVT_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientChargeableIndicator(size_t index = 0) {
    try {
      return this->getObject(index, IVT_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Code
   */

  CWE* getIVT_12(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IVT_12);
  }

  CWE* getTransactionCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IVT_12);
  }

  bool isIVT_12(size_t index = 0) {
    try {
      return this->getObject(index, IVT_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionCode(size_t index = 0) {
    try {
      return this->getObject(index, IVT_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Amount - Unit
   */

  CP* getIVT_13(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, IVT_13);
  }

  CP* getTransactionAmountUnit(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, IVT_13);
  }

  bool isIVT_13(size_t index = 0) {
    try {
      return this->getObject(index, IVT_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionAmountUnit(size_t index = 0) {
    try {
      return this->getObject(index, IVT_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Item Importance Code
   */

  CWE* getIVT_14(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IVT_14);
  }

  CWE* getItemImportanceCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IVT_14);
  }

  bool isIVT_14(size_t index = 0) {
    try {
      return this->getObject(index, IVT_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isItemImportanceCode(size_t index = 0) {
    try {
      return this->getObject(index, IVT_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Stocked Item Indicator
   */

  CNE* getIVT_15(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, IVT_15);
  }

  CNE* getStockedItemIndicator(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, IVT_15);
  }

  bool isIVT_15(size_t index = 0) {
    try {
      return this->getObject(index, IVT_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStockedItemIndicator(size_t index = 0) {
    try {
      return this->getObject(index, IVT_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consignment Item Indicator
   */

  CNE* getIVT_16(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, IVT_16);
  }

  CNE* getConsignmentItemIndicator(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, IVT_16);
  }

  bool isIVT_16(size_t index = 0) {
    try {
      return this->getObject(index, IVT_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsignmentItemIndicator(size_t index = 0) {
    try {
      return this->getObject(index, IVT_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reusable Item Indicator
   */

  CNE* getIVT_17(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, IVT_17);
  }

  CNE* getReusableItemIndicator(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, IVT_17);
  }

  bool isIVT_17(size_t index = 0) {
    try {
      return this->getObject(index, IVT_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReusableItemIndicator(size_t index = 0) {
    try {
      return this->getObject(index, IVT_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reusable Cost
   */

  CP* getIVT_18(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, IVT_18);
  }

  CP* getReusableCost(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, IVT_18);
  }

  bool isIVT_18(size_t index = 0) {
    try {
      return this->getObject(index, IVT_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReusableCost(size_t index = 0) {
    try {
      return this->getObject(index, IVT_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substitute Item Identifier
   */

  EI* getIVT_19(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IVT_19);
  }

  EI* getSubstituteItemIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IVT_19);
  }

  bool isIVT_19(size_t index = 0) {
    try {
      return this->getObject(index, IVT_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstituteItemIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, IVT_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Latex-Free Substitute Item Identifier
   */

  EI* getIVT_20(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IVT_20);
  }

  EI* getLatexFreeSubstituteItemIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IVT_20);
  }

  bool isIVT_20(size_t index = 0) {
    try {
      return this->getObject(index, IVT_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLatexFreeSubstituteItemIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, IVT_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Recommended Reorder Theory
   */

  CWE* getIVT_21(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IVT_21);
  }

  CWE* getRecommendedReorderTheory(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IVT_21);
  }

  bool isIVT_21(size_t index = 0) {
    try {
      return this->getObject(index, IVT_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRecommendedReorderTheory(size_t index = 0) {
    try {
      return this->getObject(index, IVT_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Recommended Safety Stock Days
   */

  NM* getIVT_22(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, IVT_22);
  }

  NM* getRecommendedSafetyStockDays(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, IVT_22);
  }

  bool isIVT_22(size_t index = 0) {
    try {
      return this->getObject(index, IVT_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRecommendedSafetyStockDays(size_t index = 0) {
    try {
      return this->getObject(index, IVT_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Recommended Maximum Days Inventory
   */

  NM* getIVT_23(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, IVT_23);
  }

  NM* getRecommendedMaximumDaysInventory(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, IVT_23);
  }

  bool isIVT_23(size_t index = 0) {
    try {
      return this->getObject(index, IVT_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRecommendedMaximumDaysInventory(size_t index = 0) {
    try {
      return this->getObject(index, IVT_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Recommended Order Point
   */

  NM* getIVT_24(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, IVT_24);
  }

  NM* getRecommendedOrderPoint(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, IVT_24);
  }

  bool isIVT_24(size_t index = 0) {
    try {
      return this->getObject(index, IVT_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRecommendedOrderPoint(size_t index = 0) {
    try {
      return this->getObject(index, IVT_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Recommended Order Amount
   */

  NM* getIVT_25(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, IVT_25);
  }

  NM* getRecommendedOrderAmount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, IVT_25);
  }

  bool isIVT_25(size_t index = 0) {
    try {
      return this->getObject(index, IVT_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRecommendedOrderAmount(size_t index = 0) {
    try {
      return this->getObject(index, IVT_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Operating Room Par Level Indicator
   */

  CNE* getIVT_26(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, IVT_26);
  }

  CNE* getOperatingRoomParLevelIndicator(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, IVT_26);
  }

  bool isIVT_26(size_t index = 0) {
    try {
      return this->getObject(index, IVT_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOperatingRoomParLevelIndicator(size_t index = 0) {
    try {
      return this->getObject(index, IVT_26) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of IVT */

} /* End of namespace HL7_29 */
#endif /* __IVT_v29_H__ */
