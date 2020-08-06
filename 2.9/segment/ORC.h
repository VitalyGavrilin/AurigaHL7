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


#ifndef __ORC_v29_H__
#define __ORC_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CWE.h"
#include "../datatype/CX.h"
#include "../datatype/DR.h"
#include "../datatype/DT.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/EIP.h"
#include "../datatype/ID.h"
#include "../datatype/PL.h"
#include "../datatype/ST.h"
#include "../datatype/XCN.h"
#include "../datatype/XTN.h"

namespace HL7_29 {

/* ORC */
class ORC : public HL7Segment {
 public:
  ORC() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    ORC_1,
    ORC_2,
    ORC_3,
    ORC_4,
    ORC_5,
    ORC_6,
    ORC_7,
    ORC_8,
    ORC_9,
    ORC_10,
    ORC_11,
    ORC_12,
    ORC_13,
    ORC_14,
    ORC_15,
    ORC_16,
    ORC_17,
    ORC_18,
    ORC_19,
    ORC_20,
    ORC_21,
    ORC_22,
    ORC_23,
    ORC_24,
    ORC_25,
    ORC_26,
    ORC_27,
    ORC_28,
    ORC_29,
    ORC_30,
    ORC_31,
    ORC_32,
    ORC_33,
    ORC_34,
    ORC_35,
    ORC_36,
    ORC_37,
    ORC_38,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "ORC"; }
  ORC* create() const { return new ORC(); }

 private:
  void init() {
    setName("ORC");
    /* Init members */
    addObject<ID>(ORC_1, "ORC.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(ORC_2, "ORC.2", HL7::initialized, HL7::repetition_off);
    addObject<EI>(ORC_3, "ORC.3", HL7::initialized, HL7::repetition_off);
    addObject<EI>(ORC_4, "ORC.4", HL7::initialized, HL7::repetition_off);
    addObject<ID>(ORC_5, "ORC.5", HL7::initialized, HL7::repetition_off);
    addObject<ID>(ORC_6, "ORC.6", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ORC_7, "ORC.7", HL7::initialized, HL7::repetition_off);
    addObject<EIP>(ORC_8, "ORC.8", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(ORC_9, "ORC.9", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(ORC_10, "ORC.10", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ORC_11, "ORC.11", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ORC_12, "ORC.12", HL7::initialized, HL7::repetition_off);
    addObject<PL>(ORC_13, "ORC.13", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(ORC_14, "ORC.14", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(ORC_15, "ORC.15", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ORC_16, "ORC.16", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ORC_17, "ORC.17", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ORC_18, "ORC.18", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ORC_19, "ORC.19", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ORC_20, "ORC.20", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ORC_21, "ORC.21", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ORC_22, "ORC.22", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ORC_23, "ORC.23", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ORC_24, "ORC.24", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ORC_25, "ORC.25", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ORC_26, "ORC.26", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(ORC_27, "ORC.27", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ORC_28, "ORC.28", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ORC_29, "ORC.29", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(ORC_30, "ORC.30", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ORC_31, "ORC.31", HL7::initialized, HL7::repetition_off);
    addObject<DT>(ORC_32, "ORC.32", HL7::initialized, HL7::repetition_off);
    addObject<CX>(ORC_33, "ORC.33", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ORC_34, "ORC.34", HL7::initialized, HL7::repetition_off);
    addObject<ID>(ORC_35, "ORC.35", HL7::initialized, HL7::repetition_off);
    addObject<DR>(ORC_36, "ORC.36", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(ORC_37, "ORC.37", HL7::initialized, HL7::repetition_off);
    addObject<EI>(ORC_38, "ORC.38", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Order Control
   */

  ID* getORC_1(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ORC_1);
  }

  ID* getOrderControl(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ORC_1);
  }

  bool isORC_1(size_t index = 0) {
    try {
      return this->getObject(index, ORC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderControl(size_t index = 0) {
    try {
      return this->getObject(index, ORC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Placer Order Number
   */

  EI* getORC_2(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ORC_2);
  }

  EI* getPlacerOrderNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ORC_2);
  }

  bool isORC_2(size_t index = 0) {
    try {
      return this->getObject(index, ORC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerOrderNumber(size_t index = 0) {
    try {
      return this->getObject(index, ORC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Order Number
   */

  EI* getORC_3(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ORC_3);
  }

  EI* getFillerOrderNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ORC_3);
  }

  bool isORC_3(size_t index = 0) {
    try {
      return this->getObject(index, ORC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerOrderNumber(size_t index = 0) {
    try {
      return this->getObject(index, ORC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Placer Order Group Number
   */

  EI* getORC_4(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ORC_4);
  }

  EI* getPlacerOrderGroupNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ORC_4);
  }

  bool isORC_4(size_t index = 0) {
    try {
      return this->getObject(index, ORC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerOrderGroupNumber(size_t index = 0) {
    try {
      return this->getObject(index, ORC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Order Status
   */

  ID* getORC_5(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ORC_5);
  }

  ID* getOrderStatus(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ORC_5);
  }

  bool isORC_5(size_t index = 0) {
    try {
      return this->getObject(index, ORC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderStatus(size_t index = 0) {
    try {
      return this->getObject(index, ORC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Response Flag
   */

  ID* getORC_6(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ORC_6);
  }

  ID* getResponseFlag(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ORC_6);
  }

  bool isORC_6(size_t index = 0) {
    try {
      return this->getObject(index, ORC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResponseFlag(size_t index = 0) {
    try {
      return this->getObject(index, ORC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Quantity/Timing
   */

  ST* getORC_7(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ORC_7);
  }

  ST* getQuantityTiming(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ORC_7);
  }

  bool isORC_7(size_t index = 0) {
    try {
      return this->getObject(index, ORC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQuantityTiming(size_t index = 0) {
    try {
      return this->getObject(index, ORC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Parent Order
   */

  EIP* getORC_8(size_t index = 0) {
    return (EIP*)this->getObjectSafe(index, ORC_8);
  }

  EIP* getParentOrder(size_t index = 0) {
    return (EIP*)this->getObjectSafe(index, ORC_8);
  }

  bool isORC_8(size_t index = 0) {
    try {
      return this->getObject(index, ORC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParentOrder(size_t index = 0) {
    try {
      return this->getObject(index, ORC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time of Order Event
   */

  DTM* getORC_9(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ORC_9);
  }

  DTM* getDateTimeofOrderEvent(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ORC_9);
  }

  bool isORC_9(size_t index = 0) {
    try {
      return this->getObject(index, ORC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeofOrderEvent(size_t index = 0) {
    try {
      return this->getObject(index, ORC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entered By
   */

  XCN* getORC_10(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ORC_10);
  }

  XCN* getEnteredBy(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ORC_10);
  }

  bool isORC_10(size_t index = 0) {
    try {
      return this->getObject(index, ORC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteredBy(size_t index = 0) {
    try {
      return this->getObject(index, ORC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Verified By
   */

  ST* getORC_11(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ORC_11);
  }

  ST* getVerifiedBy(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ORC_11);
  }

  bool isORC_11(size_t index = 0) {
    try {
      return this->getObject(index, ORC_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVerifiedBy(size_t index = 0) {
    try {
      return this->getObject(index, ORC_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ordering Provider
   */

  ST* getORC_12(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ORC_12);
  }

  ST* getOrderingProvider(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ORC_12);
  }

  bool isORC_12(size_t index = 0) {
    try {
      return this->getObject(index, ORC_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderingProvider(size_t index = 0) {
    try {
      return this->getObject(index, ORC_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Enterer's Location
   */

  PL* getORC_13(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, ORC_13);
  }

  PL* getEnterersLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, ORC_13);
  }

  bool isORC_13(size_t index = 0) {
    try {
      return this->getObject(index, ORC_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnterersLocation(size_t index = 0) {
    try {
      return this->getObject(index, ORC_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Call Back Phone Number
   */

  XTN* getORC_14(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, ORC_14);
  }

  XTN* getCallBackPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, ORC_14);
  }

  bool isORC_14(size_t index = 0) {
    try {
      return this->getObject(index, ORC_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCallBackPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, ORC_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Order Effective Date/Time
   */

  DTM* getORC_15(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ORC_15);
  }

  DTM* getOrderEffectiveDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ORC_15);
  }

  bool isORC_15(size_t index = 0) {
    try {
      return this->getObject(index, ORC_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderEffectiveDateTime(size_t index = 0) {
    try {
      return this->getObject(index, ORC_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Order Control Code Reason
   */

  CWE* getORC_16(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORC_16);
  }

  CWE* getOrderControlCodeReason(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORC_16);
  }

  bool isORC_16(size_t index = 0) {
    try {
      return this->getObject(index, ORC_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderControlCodeReason(size_t index = 0) {
    try {
      return this->getObject(index, ORC_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entering Organization
   */

  ST* getORC_17(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ORC_17);
  }

  ST* getEnteringOrganization(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ORC_17);
  }

  bool isORC_17(size_t index = 0) {
    try {
      return this->getObject(index, ORC_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteringOrganization(size_t index = 0) {
    try {
      return this->getObject(index, ORC_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entering Device
   */

  ST* getORC_18(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ORC_18);
  }

  ST* getEnteringDevice(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ORC_18);
  }

  bool isORC_18(size_t index = 0) {
    try {
      return this->getObject(index, ORC_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteringDevice(size_t index = 0) {
    try {
      return this->getObject(index, ORC_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action By
   */

  ST* getORC_19(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ORC_19);
  }

  ST* getActionBy(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ORC_19);
  }

  bool isORC_19(size_t index = 0) {
    try {
      return this->getObject(index, ORC_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionBy(size_t index = 0) {
    try {
      return this->getObject(index, ORC_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Advanced Beneficiary Notice Code
   */

  CWE* getORC_20(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORC_20);
  }

  CWE* getAdvancedBeneficiaryNoticeCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORC_20);
  }

  bool isORC_20(size_t index = 0) {
    try {
      return this->getObject(index, ORC_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdvancedBeneficiaryNoticeCode(size_t index = 0) {
    try {
      return this->getObject(index, ORC_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ordering Facility Name
   */

  ST* getORC_21(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ORC_21);
  }

  ST* getOrderingFacilityName(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ORC_21);
  }

  bool isORC_21(size_t index = 0) {
    try {
      return this->getObject(index, ORC_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderingFacilityName(size_t index = 0) {
    try {
      return this->getObject(index, ORC_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ordering Facility Address
   */

  ST* getORC_22(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ORC_22);
  }

  ST* getOrderingFacilityAddress(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ORC_22);
  }

  bool isORC_22(size_t index = 0) {
    try {
      return this->getObject(index, ORC_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderingFacilityAddress(size_t index = 0) {
    try {
      return this->getObject(index, ORC_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ordering Facility Phone Number
   */

  ST* getORC_23(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ORC_23);
  }

  ST* getOrderingFacilityPhoneNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ORC_23);
  }

  bool isORC_23(size_t index = 0) {
    try {
      return this->getObject(index, ORC_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderingFacilityPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, ORC_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ordering Provider Address
   */

  ST* getORC_24(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ORC_24);
  }

  ST* getOrderingProviderAddress(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ORC_24);
  }

  bool isORC_24(size_t index = 0) {
    try {
      return this->getObject(index, ORC_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderingProviderAddress(size_t index = 0) {
    try {
      return this->getObject(index, ORC_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Order Status Modifier
   */

  CWE* getORC_25(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORC_25);
  }

  CWE* getOrderStatusModifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORC_25);
  }

  bool isORC_25(size_t index = 0) {
    try {
      return this->getObject(index, ORC_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderStatusModifier(size_t index = 0) {
    try {
      return this->getObject(index, ORC_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Advanced Beneficiary Notice Override
   */

  CWE* getORC_26(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORC_26);
  }

  CWE* getAdvancedBeneficiaryNoticeOverride(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORC_26);
  }

  bool isORC_26(size_t index = 0) {
    try {
      return this->getObject(index, ORC_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdvancedBeneficiaryNoticeOverride(size_t index = 0) {
    try {
      return this->getObject(index, ORC_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler's Expected Availability Date/Time
   */

  DTM* getORC_27(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ORC_27);
  }

  DTM* getFillersExpectedAvailabilityDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ORC_27);
  }

  bool isORC_27(size_t index = 0) {
    try {
      return this->getObject(index, ORC_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillersExpectedAvailabilityDateTime(size_t index = 0) {
    try {
      return this->getObject(index, ORC_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Confidentiality Code
   */

  CWE* getORC_28(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORC_28);
  }

  CWE* getConfidentialityCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORC_28);
  }

  bool isORC_28(size_t index = 0) {
    try {
      return this->getObject(index, ORC_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConfidentialityCode(size_t index = 0) {
    try {
      return this->getObject(index, ORC_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Order Type
   */

  CWE* getORC_29(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORC_29);
  }

  CWE* getOrderType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORC_29);
  }

  bool isORC_29(size_t index = 0) {
    try {
      return this->getObject(index, ORC_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderType(size_t index = 0) {
    try {
      return this->getObject(index, ORC_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Enterer Authorization Mode
   */

  CNE* getORC_30(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ORC_30);
  }

  CNE* getEntererAuthorizationMode(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ORC_30);
  }

  bool isORC_30(size_t index = 0) {
    try {
      return this->getObject(index, ORC_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEntererAuthorizationMode(size_t index = 0) {
    try {
      return this->getObject(index, ORC_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Parent Universal Service Identifier
   */

  ST* getORC_31(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ORC_31);
  }

  ST* getParentUniversalServiceIdentifier(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ORC_31);
  }

  bool isORC_31(size_t index = 0) {
    try {
      return this->getObject(index, ORC_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParentUniversalServiceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, ORC_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Advanced Beneficiary Notice Date
   */

  DT* getORC_32(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, ORC_32);
  }

  DT* getAdvancedBeneficiaryNoticeDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, ORC_32);
  }

  bool isORC_32(size_t index = 0) {
    try {
      return this->getObject(index, ORC_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdvancedBeneficiaryNoticeDate(size_t index = 0) {
    try {
      return this->getObject(index, ORC_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Placer Order Number
   */

  CX* getORC_33(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, ORC_33);
  }

  CX* getAlternatePlacerOrderNumber(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, ORC_33);
  }

  bool isORC_33(size_t index = 0) {
    try {
      return this->getObject(index, ORC_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternatePlacerOrderNumber(size_t index = 0) {
    try {
      return this->getObject(index, ORC_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Order Workflow Profile
   */

  CWE* getORC_34(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORC_34);
  }

  CWE* getOrderWorkflowProfile(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORC_34);
  }

  bool isORC_34(size_t index = 0) {
    try {
      return this->getObject(index, ORC_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderWorkflowProfile(size_t index = 0) {
    try {
      return this->getObject(index, ORC_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code
   */

  ID* getORC_35(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ORC_35);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ORC_35);
  }

  bool isORC_35(size_t index = 0) {
    try {
      return this->getObject(index, ORC_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, ORC_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Order Status Date Range
   */

  DR* getORC_36(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, ORC_36);
  }

  DR* getOrderStatusDateRange(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, ORC_36);
  }

  bool isORC_36(size_t index = 0) {
    try {
      return this->getObject(index, ORC_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderStatusDateRange(size_t index = 0) {
    try {
      return this->getObject(index, ORC_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Order Creation Date/Time
   */

  DTM* getORC_37(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ORC_37);
  }

  DTM* getOrderCreationDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ORC_37);
  }

  bool isORC_37(size_t index = 0) {
    try {
      return this->getObject(index, ORC_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderCreationDateTime(size_t index = 0) {
    try {
      return this->getObject(index, ORC_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Order Group Number
   */

  EI* getORC_38(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ORC_38);
  }

  EI* getFillerOrderGroupNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ORC_38);
  }

  bool isORC_38(size_t index = 0) {
    try {
      return this->getObject(index, ORC_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerOrderGroupNumber(size_t index = 0) {
    try {
      return this->getObject(index, ORC_38) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ORC */

} /* End of namespace HL7_29 */
#endif /* __ORC_v29_H__ */
