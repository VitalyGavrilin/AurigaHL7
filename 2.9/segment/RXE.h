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


#ifndef __RXE_v29_H__
#define __RXE_v29_H__

#include "../../common/Util.h"
#include "../datatype/CQ.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/PL.h"
#include "../datatype/ST.h"
#include "../datatype/XAD.h"
#include "../datatype/XCN.h"
#include "../datatype/XTN.h"

namespace HL7_29 {

/* RXE */
class RXE : public HL7Segment {
 public:
  RXE() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    RXE_1,
    RXE_2,
    RXE_3,
    RXE_4,
    RXE_5,
    RXE_6,
    RXE_7,
    RXE_8,
    RXE_9,
    RXE_10,
    RXE_11,
    RXE_12,
    RXE_13,
    RXE_14,
    RXE_15,
    RXE_16,
    RXE_17,
    RXE_18,
    RXE_19,
    RXE_20,
    RXE_21,
    RXE_22,
    RXE_23,
    RXE_24,
    RXE_25,
    RXE_26,
    RXE_27,
    RXE_28,
    RXE_29,
    RXE_30,
    RXE_31,
    RXE_32,
    RXE_33,
    RXE_34,
    RXE_35,
    RXE_36,
    RXE_37,
    RXE_38,
    RXE_39,
    RXE_40,
    RXE_41,
    RXE_42,
    RXE_43,
    RXE_44,
    RXE_45,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "RXE"; }
  RXE* create() const { return new RXE(); }

 private:
  void init() {
    setName("RXE");
    /* Init members */
    addObject<ST>(RXE_1, "RXE.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXE_2, "RXE.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXE_3, "RXE.3", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXE_4, "RXE.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXE_5, "RXE.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXE_6, "RXE.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXE_7, "RXE.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RXE_8, "RXE.8", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RXE_9, "RXE.9", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXE_10, "RXE.10", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXE_11, "RXE.11", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXE_12, "RXE.12", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(RXE_13, "RXE.13", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(RXE_14, "RXE.14", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RXE_15, "RXE.15", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXE_16, "RXE.16", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXE_17, "RXE.17", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(RXE_18, "RXE.18", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(RXE_19, "RXE.19", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RXE_20, "RXE.20", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXE_21, "RXE.21", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RXE_22, "RXE.22", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RXE_23, "RXE.23", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXE_24, "RXE.24", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXE_25, "RXE.25", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXE_26, "RXE.26", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXE_27, "RXE.27", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXE_28, "RXE.28", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXE_29, "RXE.29", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RXE_30, "RXE.30", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXE_31, "RXE.31", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(RXE_32, "RXE.32", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXE_33, "RXE.33", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXE_34, "RXE.34", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXE_35, "RXE.35", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RXE_36, "RXE.36", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXE_37, "RXE.37", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXE_38, "RXE.38", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXE_39, "RXE.39", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXE_40, "RXE.40", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(RXE_41, "RXE.41", HL7::initialized, HL7::repetition_off);
    addObject<PL>(RXE_42, "RXE.42", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(RXE_43, "RXE.43", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RXE_44, "RXE.44", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(RXE_45, "RXE.45", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Quantity/Timing
   */

  ST* getRXE_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXE_1);
  }

  ST* getQuantityTiming(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXE_1);
  }

  bool isRXE_1(size_t index = 0) {
    try {
      return this->getObject(index, RXE_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQuantityTiming(size_t index = 0) {
    try {
      return this->getObject(index, RXE_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Code
   */

  CWE* getRXE_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_2);
  }

  CWE* getGiveCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_2);
  }

  bool isRXE_2(size_t index = 0) {
    try {
      return this->getObject(index, RXE_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveCode(size_t index = 0) {
    try {
      return this->getObject(index, RXE_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Amount - Minimum
   */

  NM* getRXE_3(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXE_3);
  }

  NM* getGiveAmountMinimum(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXE_3);
  }

  bool isRXE_3(size_t index = 0) {
    try {
      return this->getObject(index, RXE_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveAmountMinimum(size_t index = 0) {
    try {
      return this->getObject(index, RXE_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Amount - Maximum
   */

  NM* getRXE_4(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXE_4);
  }

  NM* getGiveAmountMaximum(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXE_4);
  }

  bool isRXE_4(size_t index = 0) {
    try {
      return this->getObject(index, RXE_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveAmountMaximum(size_t index = 0) {
    try {
      return this->getObject(index, RXE_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Units
   */

  CWE* getRXE_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_5);
  }

  CWE* getGiveUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_5);
  }

  bool isRXE_5(size_t index = 0) {
    try {
      return this->getObject(index, RXE_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXE_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Dosage Form
   */

  CWE* getRXE_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_6);
  }

  CWE* getGiveDosageForm(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_6);
  }

  bool isRXE_6(size_t index = 0) {
    try {
      return this->getObject(index, RXE_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveDosageForm(size_t index = 0) {
    try {
      return this->getObject(index, RXE_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider's Administration Instructions
   */

  CWE* getRXE_7(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_7);
  }

  CWE* getProvidersAdministrationInstructions(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_7);
  }

  bool isRXE_7(size_t index = 0) {
    try {
      return this->getObject(index, RXE_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProvidersAdministrationInstructions(size_t index = 0) {
    try {
      return this->getObject(index, RXE_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Deliver-To Location
   */

  ST* getRXE_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXE_8);
  }

  ST* getDeliverToLocation(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXE_8);
  }

  bool isRXE_8(size_t index = 0) {
    try {
      return this->getObject(index, RXE_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeliverToLocation(size_t index = 0) {
    try {
      return this->getObject(index, RXE_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substitution Status
   */

  ID* getRXE_9(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXE_9);
  }

  ID* getSubstitutionStatus(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXE_9);
  }

  bool isRXE_9(size_t index = 0) {
    try {
      return this->getObject(index, RXE_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstitutionStatus(size_t index = 0) {
    try {
      return this->getObject(index, RXE_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense Amount
   */

  NM* getRXE_10(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXE_10);
  }

  NM* getDispenseAmount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXE_10);
  }

  bool isRXE_10(size_t index = 0) {
    try {
      return this->getObject(index, RXE_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispenseAmount(size_t index = 0) {
    try {
      return this->getObject(index, RXE_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense Units
   */

  CWE* getRXE_11(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_11);
  }

  CWE* getDispenseUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_11);
  }

  bool isRXE_11(size_t index = 0) {
    try {
      return this->getObject(index, RXE_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispenseUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXE_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number Of Refills
   */

  NM* getRXE_12(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXE_12);
  }

  NM* getNumberOfRefills(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXE_12);
  }

  bool isRXE_12(size_t index = 0) {
    try {
      return this->getObject(index, RXE_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberOfRefills(size_t index = 0) {
    try {
      return this->getObject(index, RXE_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ordering Provider's DEA Number
   */

  XCN* getRXE_13(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, RXE_13);
  }

  XCN* getOrderingProvidersDEANumber(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, RXE_13);
  }

  bool isRXE_13(size_t index = 0) {
    try {
      return this->getObject(index, RXE_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderingProvidersDEANumber(size_t index = 0) {
    try {
      return this->getObject(index, RXE_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pharmacist/Treatment Supplier's Verifier ID
   */

  XCN* getRXE_14(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, RXE_14);
  }

  XCN* getPharmacistTreatmentSuppliersVerifierID(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, RXE_14);
  }

  bool isRXE_14(size_t index = 0) {
    try {
      return this->getObject(index, RXE_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPharmacistTreatmentSuppliersVerifierID(size_t index = 0) {
    try {
      return this->getObject(index, RXE_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Prescription Number
   */

  ST* getRXE_15(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXE_15);
  }

  ST* getPrescriptionNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXE_15);
  }

  bool isRXE_15(size_t index = 0) {
    try {
      return this->getObject(index, RXE_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrescriptionNumber(size_t index = 0) {
    try {
      return this->getObject(index, RXE_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of Refills Remaining
   */

  NM* getRXE_16(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXE_16);
  }

  NM* getNumberofRefillsRemaining(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXE_16);
  }

  bool isRXE_16(size_t index = 0) {
    try {
      return this->getObject(index, RXE_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberofRefillsRemaining(size_t index = 0) {
    try {
      return this->getObject(index, RXE_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of Refills/Doses Dispensed
   */

  NM* getRXE_17(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXE_17);
  }

  NM* getNumberofRefillsDosesDispensed(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXE_17);
  }

  bool isRXE_17(size_t index = 0) {
    try {
      return this->getObject(index, RXE_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberofRefillsDosesDispensed(size_t index = 0) {
    try {
      return this->getObject(index, RXE_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * D/T of Most Recent Refill or Dose Dispensed
   */

  DTM* getRXE_18(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RXE_18);
  }

  DTM* getDTofMostRecentRefillorDoseDispensed(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RXE_18);
  }

  bool isRXE_18(size_t index = 0) {
    try {
      return this->getObject(index, RXE_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDTofMostRecentRefillorDoseDispensed(size_t index = 0) {
    try {
      return this->getObject(index, RXE_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Total Daily Dose
   */

  CQ* getRXE_19(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, RXE_19);
  }

  CQ* getTotalDailyDose(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, RXE_19);
  }

  bool isRXE_19(size_t index = 0) {
    try {
      return this->getObject(index, RXE_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTotalDailyDose(size_t index = 0) {
    try {
      return this->getObject(index, RXE_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Needs Human Review
   */

  ID* getRXE_20(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXE_20);
  }

  ID* getNeedsHumanReview(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXE_20);
  }

  bool isRXE_20(size_t index = 0) {
    try {
      return this->getObject(index, RXE_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNeedsHumanReview(size_t index = 0) {
    try {
      return this->getObject(index, RXE_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Special Dispensing Instructions
   */

  CWE* getRXE_21(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_21);
  }

  CWE* getSpecialDispensingInstructions(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_21);
  }

  bool isRXE_21(size_t index = 0) {
    try {
      return this->getObject(index, RXE_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialDispensingInstructions(size_t index = 0) {
    try {
      return this->getObject(index, RXE_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Per
   */

  ST* getRXE_22(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXE_22);
  }

  ST* getGivePer(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXE_22);
  }

  bool isRXE_22(size_t index = 0) {
    try {
      return this->getObject(index, RXE_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGivePer(size_t index = 0) {
    try {
      return this->getObject(index, RXE_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Rate Amount
   */

  ST* getRXE_23(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXE_23);
  }

  ST* getGiveRateAmount(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXE_23);
  }

  bool isRXE_23(size_t index = 0) {
    try {
      return this->getObject(index, RXE_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveRateAmount(size_t index = 0) {
    try {
      return this->getObject(index, RXE_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Rate Units
   */

  CWE* getRXE_24(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_24);
  }

  CWE* getGiveRateUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_24);
  }

  bool isRXE_24(size_t index = 0) {
    try {
      return this->getObject(index, RXE_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveRateUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXE_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Strength
   */

  NM* getRXE_25(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXE_25);
  }

  NM* getGiveStrength(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXE_25);
  }

  bool isRXE_25(size_t index = 0) {
    try {
      return this->getObject(index, RXE_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveStrength(size_t index = 0) {
    try {
      return this->getObject(index, RXE_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Strength Units
   */

  CWE* getRXE_26(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_26);
  }

  CWE* getGiveStrengthUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_26);
  }

  bool isRXE_26(size_t index = 0) {
    try {
      return this->getObject(index, RXE_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveStrengthUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXE_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Indication
   */

  CWE* getRXE_27(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_27);
  }

  CWE* getGiveIndication(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_27);
  }

  bool isRXE_27(size_t index = 0) {
    try {
      return this->getObject(index, RXE_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveIndication(size_t index = 0) {
    try {
      return this->getObject(index, RXE_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense Package Size
   */

  NM* getRXE_28(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXE_28);
  }

  NM* getDispensePackageSize(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXE_28);
  }

  bool isRXE_28(size_t index = 0) {
    try {
      return this->getObject(index, RXE_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispensePackageSize(size_t index = 0) {
    try {
      return this->getObject(index, RXE_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense Package Size Unit
   */

  CWE* getRXE_29(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_29);
  }

  CWE* getDispensePackageSizeUnit(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_29);
  }

  bool isRXE_29(size_t index = 0) {
    try {
      return this->getObject(index, RXE_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispensePackageSizeUnit(size_t index = 0) {
    try {
      return this->getObject(index, RXE_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense Package Method
   */

  ID* getRXE_30(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXE_30);
  }

  ID* getDispensePackageMethod(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXE_30);
  }

  bool isRXE_30(size_t index = 0) {
    try {
      return this->getObject(index, RXE_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispensePackageMethod(size_t index = 0) {
    try {
      return this->getObject(index, RXE_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Supplementary Code
   */

  CWE* getRXE_31(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_31);
  }

  CWE* getSupplementaryCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_31);
  }

  bool isRXE_31(size_t index = 0) {
    try {
      return this->getObject(index, RXE_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSupplementaryCode(size_t index = 0) {
    try {
      return this->getObject(index, RXE_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Original Order Date/Time
   */

  DTM* getRXE_32(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RXE_32);
  }

  DTM* getOriginalOrderDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RXE_32);
  }

  bool isRXE_32(size_t index = 0) {
    try {
      return this->getObject(index, RXE_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOriginalOrderDateTime(size_t index = 0) {
    try {
      return this->getObject(index, RXE_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Drug Strength Volume
   */

  NM* getRXE_33(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXE_33);
  }

  NM* getGiveDrugStrengthVolume(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXE_33);
  }

  bool isRXE_33(size_t index = 0) {
    try {
      return this->getObject(index, RXE_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveDrugStrengthVolume(size_t index = 0) {
    try {
      return this->getObject(index, RXE_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Drug Strength Volume Units
   */

  CWE* getRXE_34(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_34);
  }

  CWE* getGiveDrugStrengthVolumeUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_34);
  }

  bool isRXE_34(size_t index = 0) {
    try {
      return this->getObject(index, RXE_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveDrugStrengthVolumeUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXE_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Controlled Substance Schedule
   */

  CWE* getRXE_35(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_35);
  }

  CWE* getControlledSubstanceSchedule(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_35);
  }

  bool isRXE_35(size_t index = 0) {
    try {
      return this->getObject(index, RXE_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isControlledSubstanceSchedule(size_t index = 0) {
    try {
      return this->getObject(index, RXE_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Formulary Status
   */

  ID* getRXE_36(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXE_36);
  }

  ID* getFormularyStatus(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXE_36);
  }

  bool isRXE_36(size_t index = 0) {
    try {
      return this->getObject(index, RXE_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFormularyStatus(size_t index = 0) {
    try {
      return this->getObject(index, RXE_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pharmaceutical Substance Alternative
   */

  CWE* getRXE_37(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_37);
  }

  CWE* getPharmaceuticalSubstanceAlternative(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_37);
  }

  bool isRXE_37(size_t index = 0) {
    try {
      return this->getObject(index, RXE_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPharmaceuticalSubstanceAlternative(size_t index = 0) {
    try {
      return this->getObject(index, RXE_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pharmacy of Most Recent Fill
   */

  CWE* getRXE_38(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_38);
  }

  CWE* getPharmacyofMostRecentFill(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_38);
  }

  bool isRXE_38(size_t index = 0) {
    try {
      return this->getObject(index, RXE_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPharmacyofMostRecentFill(size_t index = 0) {
    try {
      return this->getObject(index, RXE_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Initial Dispense Amount
   */

  NM* getRXE_39(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXE_39);
  }

  NM* getInitialDispenseAmount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXE_39);
  }

  bool isRXE_39(size_t index = 0) {
    try {
      return this->getObject(index, RXE_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInitialDispenseAmount(size_t index = 0) {
    try {
      return this->getObject(index, RXE_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispensing Pharmacy
   */

  CWE* getRXE_40(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_40);
  }

  CWE* getDispensingPharmacy(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXE_40);
  }

  bool isRXE_40(size_t index = 0) {
    try {
      return this->getObject(index, RXE_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispensingPharmacy(size_t index = 0) {
    try {
      return this->getObject(index, RXE_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispensing Pharmacy Address
   */

  XAD* getRXE_41(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, RXE_41);
  }

  XAD* getDispensingPharmacyAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, RXE_41);
  }

  bool isRXE_41(size_t index = 0) {
    try {
      return this->getObject(index, RXE_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispensingPharmacyAddress(size_t index = 0) {
    try {
      return this->getObject(index, RXE_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Deliver-to Patient Location
   */

  PL* getRXE_42(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, RXE_42);
  }

  PL* getDelivertoPatientLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, RXE_42);
  }

  bool isRXE_42(size_t index = 0) {
    try {
      return this->getObject(index, RXE_42) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDelivertoPatientLocation(size_t index = 0) {
    try {
      return this->getObject(index, RXE_42) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Deliver-to Address
   */

  XAD* getRXE_43(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, RXE_43);
  }

  XAD* getDelivertoAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, RXE_43);
  }

  bool isRXE_43(size_t index = 0) {
    try {
      return this->getObject(index, RXE_43) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDelivertoAddress(size_t index = 0) {
    try {
      return this->getObject(index, RXE_43) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pharmacy Order Type
   */

  ID* getRXE_44(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXE_44);
  }

  ID* getPharmacyOrderType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXE_44);
  }

  bool isRXE_44(size_t index = 0) {
    try {
      return this->getObject(index, RXE_44) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPharmacyOrderType(size_t index = 0) {
    try {
      return this->getObject(index, RXE_44) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pharmacy Phone Number
   */

  XTN* getRXE_45(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, RXE_45);
  }

  XTN* getPharmacyPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, RXE_45);
  }

  bool isRXE_45(size_t index = 0) {
    try {
      return this->getObject(index, RXE_45) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPharmacyPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, RXE_45) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RXE */

} /* End of namespace HL7_29 */
#endif /* __RXE_v29_H__ */
