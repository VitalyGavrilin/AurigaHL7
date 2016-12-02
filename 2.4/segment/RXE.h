/*
 * This file is part of AurigaHL7.
 *
 * AurigaHL7 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * AurigaHL7 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with AurigaHL7.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __RXE_v24_H__
#define __RXE_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0292.h"
#include "../datatype/CQ.h"
#include "../datatype/ID.h"
#include "../datatype/LA1.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"
#include "../datatype/TQ.h"
#include "../datatype/TS.h"
#include "../datatype/XCN.h"

namespace HL7_24 {

/* Pharmacy/Treatment Encoded Order */
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
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "RXE"; }
  RXE* create() const { return new RXE(); }

 private:
  void init() {
    setName("RXE");
    /* Init members */
    addObject<TQ>(RXE_1, "RXE.1", HL7::initialized, HL7::repetition_off);
    addObject<CE_0292>(RXE_2, "RXE.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXE_3, "RXE.3", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXE_4, "RXE.4", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXE_5, "RXE.5", HL7::initialized, HL7::repetition_off);
    addObject<CE>(RXE_6, "RXE.6", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXE_7, "RXE.7", HL7::optional, HL7::repetition_on);
    addObject<LA1>(RXE_8, "RXE.8", HL7::conditional, HL7::repetition_off);
    addObject<ID>(RXE_9, "RXE.9", HL7::optional, HL7::repetition_off);
    addObject<NM>(RXE_10, "RXE.10", HL7::conditional, HL7::repetition_off);
    addObject<CE>(RXE_11, "RXE.11", HL7::conditional, HL7::repetition_off);
    addObject<NM>(RXE_12, "RXE.12", HL7::optional, HL7::repetition_off);
    addObject<XCN>(RXE_13, "RXE.13", HL7::conditional, HL7::repetition_on);
    addObject<XCN>(RXE_14, "RXE.14", HL7::optional, HL7::repetition_on);
    addObject<ST>(RXE_15, "RXE.15", HL7::conditional, HL7::repetition_off);
    addObject<NM>(RXE_16, "RXE.16", HL7::conditional, HL7::repetition_off);
    addObject<NM>(RXE_17, "RXE.17", HL7::conditional, HL7::repetition_off);
    addObject<TS>(RXE_18, "RXE.18", HL7::conditional, HL7::repetition_off);
    addObject<CQ>(RXE_19, "RXE.19", HL7::conditional, HL7::repetition_off);
    addObject<ID>(RXE_20, "RXE.20", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXE_21, "RXE.21", HL7::optional, HL7::repetition_on);
    addObject<ST>(RXE_22, "RXE.22", HL7::conditional, HL7::repetition_off);
    addObject<ST>(RXE_23, "RXE.23", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXE_24, "RXE.24", HL7::optional, HL7::repetition_off);
    addObject<NM>(RXE_25, "RXE.25", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXE_26, "RXE.26", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXE_27, "RXE.27", HL7::optional, HL7::repetition_on);
    addObject<NM>(RXE_28, "RXE.28", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXE_29, "RXE.29", HL7::optional, HL7::repetition_off);
    addObject<ID>(RXE_30, "RXE.30", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXE_31, "RXE.31", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Quantity/Timing
   */

  TQ* getRXE_1(size_t index = 0) {
    return (TQ*)this->getObjectSafe(index, RXE_1);
  }

  TQ* getQuantityTiming(size_t index = 0) {
    return (TQ*)this->getObjectSafe(index, RXE_1);
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

  CE_0292* getRXE_2(size_t index = 0) {
    return (CE_0292*)this->getObjectSafe(index, RXE_2);
  }

  CE_0292* getGiveCode(size_t index = 0) {
    return (CE_0292*)this->getObjectSafe(index, RXE_2);
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

  CE* getRXE_5(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXE_5);
  }

  CE* getGiveUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXE_5);
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

  CE* getRXE_6(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXE_6);
  }

  CE* getGiveDosageForm(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXE_6);
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

  CE* getRXE_7(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXE_7);
  }

  CE* getProviderSAdministrationInstructions(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXE_7);
  }

  bool isRXE_7(size_t index = 0) {
    try {
      return this->getObject(index, RXE_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderSAdministrationInstructions(size_t index = 0) {
    try {
      return this->getObject(index, RXE_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Deliver-To Location
   */

  LA1* getRXE_8(size_t index = 0) {
    return (LA1*)this->getObjectSafe(index, RXE_8);
  }

  LA1* getDeliverToLocation(size_t index = 0) {
    return (LA1*)this->getObjectSafe(index, RXE_8);
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

  CE* getRXE_11(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXE_11);
  }

  CE* getDispenseUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXE_11);
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
   * Number of Refills
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

  XCN* getOrderingProviderSDEANumber(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, RXE_13);
  }

  bool isRXE_13(size_t index = 0) {
    try {
      return this->getObject(index, RXE_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderingProviderSDEANumber(size_t index = 0) {
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

  XCN* getPharmacistTreatmentSupplierSVerifierID(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, RXE_14);
  }

  bool isRXE_14(size_t index = 0) {
    try {
      return this->getObject(index, RXE_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPharmacistTreatmentSupplierSVerifierID(size_t index = 0) {
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

  NM* getNumberOfRefillsRemaining(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXE_16);
  }

  bool isRXE_16(size_t index = 0) {
    try {
      return this->getObject(index, RXE_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberOfRefillsRemaining(size_t index = 0) {
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

  NM* getNumberOfRefillsDosesDispensed(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXE_17);
  }

  bool isRXE_17(size_t index = 0) {
    try {
      return this->getObject(index, RXE_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberOfRefillsDosesDispensed(size_t index = 0) {
    try {
      return this->getObject(index, RXE_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * D/T of Most Recent Refill or Dose Dispensed
   */

  TS* getRXE_18(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, RXE_18);
  }

  TS* getDTOfMostRecentRefillOrDoseDispensed(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, RXE_18);
  }

  bool isRXE_18(size_t index = 0) {
    try {
      return this->getObject(index, RXE_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDTOfMostRecentRefillOrDoseDispensed(size_t index = 0) {
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
   * Pharmacy/Treatment Supplier's Special Dispensing Instructions
   */

  CE* getRXE_21(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXE_21);
  }

  CE* getPharmacyTreatmentSupplierSSpecialDispensingInstructions(
      size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXE_21);
  }

  bool isRXE_21(size_t index = 0) {
    try {
      return this->getObject(index, RXE_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPharmacyTreatmentSupplierSSpecialDispensingInstructions(
      size_t index = 0) {
    try {
      return this->getObject(index, RXE_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Per (Time Unit)
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

  CE* getRXE_24(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXE_24);
  }

  CE* getGiveRateUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXE_24);
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

  CE* getRXE_26(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXE_26);
  }

  CE* getGiveStrengthUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXE_26);
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

  CE* getRXE_27(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXE_27);
  }

  CE* getGiveIndication(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXE_27);
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

  CE* getRXE_29(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXE_29);
  }

  CE* getDispensePackageSizeUnit(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXE_29);
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

  CE* getRXE_31(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXE_31);
  }

  CE* getSupplementaryCode(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXE_31);
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

}; /* End of RXE */

} /* End of namespace HL7_24 */
#endif /* __RXE_v24_H__ */
