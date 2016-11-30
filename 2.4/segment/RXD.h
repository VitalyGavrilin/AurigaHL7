/*
 * This file is part of HCPPL.
 *
 * HCPPL is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * HCPPL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with HCPPL.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __RXD_v24_H__
#define __RXD_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0227.h"
#include "../datatype/CE_0292.h"
#include "../datatype/CQ.h"
#include "../datatype/ID.h"
#include "../datatype/LA2.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"
#include "../datatype/XCN.h"

namespace HL7_24 {

/* Pharmacy/Treatment Dispense */
class RXD : public HL7Segment {
 public:
  RXD() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    RXD_1,
    RXD_2,
    RXD_3,
    RXD_4,
    RXD_5,
    RXD_6,
    RXD_7,
    RXD_8,
    RXD_9,
    RXD_10,
    RXD_11,
    RXD_12,
    RXD_13,
    RXD_14,
    RXD_15,
    RXD_16,
    RXD_17,
    RXD_18,
    RXD_19,
    RXD_20,
    RXD_21,
    RXD_22,
    RXD_23,
    RXD_24,
    RXD_25,
    RXD_26,
    RXD_27,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "RXD"; }
  RXD* create() const { return new RXD(); }

 private:
  void init() {
    setName("RXD");
    /* Init members */
    addObject<NM>(RXD_1, "RXD.1", HL7::initialized, HL7::repetition_off);
    addObject<CE_0292>(RXD_2, "RXD.2", HL7::initialized, HL7::repetition_off);
    addObject<TS>(RXD_3, "RXD.3", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXD_4, "RXD.4", HL7::initialized, HL7::repetition_off);
    addObject<CE>(RXD_5, "RXD.5", HL7::conditional, HL7::repetition_off);
    addObject<CE>(RXD_6, "RXD.6", HL7::optional, HL7::repetition_off);
    addObject<ST>(RXD_7, "RXD.7", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXD_8, "RXD.8", HL7::conditional, HL7::repetition_off);
    addObject<ST>(RXD_9, "RXD.9", HL7::optional, HL7::repetition_on);
    addObject<XCN>(RXD_10, "RXD.10", HL7::optional, HL7::repetition_on);
    addObject<ID>(RXD_11, "RXD.11", HL7::optional, HL7::repetition_off);
    addObject<CQ>(RXD_12, "RXD.12", HL7::optional, HL7::repetition_off);
    addObject<LA2>(RXD_13, "RXD.13", HL7::conditional, HL7::repetition_off);
    addObject<ID>(RXD_14, "RXD.14", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXD_15, "RXD.15", HL7::optional, HL7::repetition_on);
    addObject<NM>(RXD_16, "RXD.16", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXD_17, "RXD.17", HL7::optional, HL7::repetition_off);
    addObject<ST>(RXD_18, "RXD.18", HL7::optional, HL7::repetition_on);
    addObject<TS>(RXD_19, "RXD.19", HL7::optional, HL7::repetition_on);
    addObject<CE_0227>(RXD_20, "RXD.20", HL7::optional, HL7::repetition_on);
    addObject<CE>(RXD_21, "RXD.21", HL7::optional, HL7::repetition_on);
    addObject<NM>(RXD_22, "RXD.22", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXD_23, "RXD.23", HL7::optional, HL7::repetition_off);
    addObject<ID>(RXD_24, "RXD.24", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXD_25, "RXD.25", HL7::optional, HL7::repetition_on);
    addObject<CE>(RXD_26, "RXD.26", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXD_27, "RXD.27", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Dispense Sub-ID Counter
   */

  NM* getRXD_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXD_1);
  }

  NM* getDispenseSubIDCounter(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXD_1);
  }

  bool isRXD_1(size_t index = 0) {
    try {
      return this->getObject(index, RXD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispenseSubIDCounter(size_t index = 0) {
    try {
      return this->getObject(index, RXD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense/Give Code
   */

  CE_0292* getRXD_2(size_t index = 0) {
    return (CE_0292*)this->getObjectSafe(index, RXD_2);
  }

  CE_0292* getDispenseGiveCode(size_t index = 0) {
    return (CE_0292*)this->getObjectSafe(index, RXD_2);
  }

  bool isRXD_2(size_t index = 0) {
    try {
      return this->getObject(index, RXD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispenseGiveCode(size_t index = 0) {
    try {
      return this->getObject(index, RXD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time Dispensed
   */

  TS* getRXD_3(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, RXD_3);
  }

  TS* getDateTimeDispensed(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, RXD_3);
  }

  bool isRXD_3(size_t index = 0) {
    try {
      return this->getObject(index, RXD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeDispensed(size_t index = 0) {
    try {
      return this->getObject(index, RXD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Actual Dispense Amount
   */

  NM* getRXD_4(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXD_4);
  }

  NM* getActualDispenseAmount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXD_4);
  }

  bool isRXD_4(size_t index = 0) {
    try {
      return this->getObject(index, RXD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActualDispenseAmount(size_t index = 0) {
    try {
      return this->getObject(index, RXD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Actual Dispense Units
   */

  CE* getRXD_5(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXD_5);
  }

  CE* getActualDispenseUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXD_5);
  }

  bool isRXD_5(size_t index = 0) {
    try {
      return this->getObject(index, RXD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActualDispenseUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Actual Dosage Form
   */

  CE* getRXD_6(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXD_6);
  }

  CE* getActualDosageForm(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXD_6);
  }

  bool isRXD_6(size_t index = 0) {
    try {
      return this->getObject(index, RXD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActualDosageForm(size_t index = 0) {
    try {
      return this->getObject(index, RXD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Prescription Number
   */

  ST* getRXD_7(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXD_7);
  }

  ST* getPrescriptionNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXD_7);
  }

  bool isRXD_7(size_t index = 0) {
    try {
      return this->getObject(index, RXD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrescriptionNumber(size_t index = 0) {
    try {
      return this->getObject(index, RXD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of Refills Remaining
   */

  NM* getRXD_8(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXD_8);
  }

  NM* getNumberOfRefillsRemaining(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXD_8);
  }

  bool isRXD_8(size_t index = 0) {
    try {
      return this->getObject(index, RXD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberOfRefillsRemaining(size_t index = 0) {
    try {
      return this->getObject(index, RXD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense Notes
   */

  ST* getRXD_9(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXD_9);
  }

  ST* getDispenseNotes(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXD_9);
  }

  bool isRXD_9(size_t index = 0) {
    try {
      return this->getObject(index, RXD_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispenseNotes(size_t index = 0) {
    try {
      return this->getObject(index, RXD_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispensing Provider
   */

  XCN* getRXD_10(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, RXD_10);
  }

  XCN* getDispensingProvider(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, RXD_10);
  }

  bool isRXD_10(size_t index = 0) {
    try {
      return this->getObject(index, RXD_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispensingProvider(size_t index = 0) {
    try {
      return this->getObject(index, RXD_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substitution Status
   */

  ID* getRXD_11(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXD_11);
  }

  ID* getSubstitutionStatus(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXD_11);
  }

  bool isRXD_11(size_t index = 0) {
    try {
      return this->getObject(index, RXD_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstitutionStatus(size_t index = 0) {
    try {
      return this->getObject(index, RXD_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Total Daily Dose
   */

  CQ* getRXD_12(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, RXD_12);
  }

  CQ* getTotalDailyDose(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, RXD_12);
  }

  bool isRXD_12(size_t index = 0) {
    try {
      return this->getObject(index, RXD_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTotalDailyDose(size_t index = 0) {
    try {
      return this->getObject(index, RXD_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense-To Location
   */

  LA2* getRXD_13(size_t index = 0) {
    return (LA2*)this->getObjectSafe(index, RXD_13);
  }

  LA2* getDispenseToLocation(size_t index = 0) {
    return (LA2*)this->getObjectSafe(index, RXD_13);
  }

  bool isRXD_13(size_t index = 0) {
    try {
      return this->getObject(index, RXD_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispenseToLocation(size_t index = 0) {
    try {
      return this->getObject(index, RXD_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Needs Human Review
   */

  ID* getRXD_14(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXD_14);
  }

  ID* getNeedsHumanReview(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXD_14);
  }

  bool isRXD_14(size_t index = 0) {
    try {
      return this->getObject(index, RXD_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNeedsHumanReview(size_t index = 0) {
    try {
      return this->getObject(index, RXD_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pharmacy/Treatment Supplier's Special Dispensing Instructions
   */

  CE* getRXD_15(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXD_15);
  }

  CE* getPharmacyTreatmentSupplierSSpecialDispensingInstructions(
      size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXD_15);
  }

  bool isRXD_15(size_t index = 0) {
    try {
      return this->getObject(index, RXD_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPharmacyTreatmentSupplierSSpecialDispensingInstructions(
      size_t index = 0) {
    try {
      return this->getObject(index, RXD_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Actual Strength
   */

  NM* getRXD_16(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXD_16);
  }

  NM* getActualStrength(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXD_16);
  }

  bool isRXD_16(size_t index = 0) {
    try {
      return this->getObject(index, RXD_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActualStrength(size_t index = 0) {
    try {
      return this->getObject(index, RXD_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Actual Strength Unit
   */

  CE* getRXD_17(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXD_17);
  }

  CE* getActualStrengthUnit(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXD_17);
  }

  bool isRXD_17(size_t index = 0) {
    try {
      return this->getObject(index, RXD_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActualStrengthUnit(size_t index = 0) {
    try {
      return this->getObject(index, RXD_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance Lot Number
   */

  ST* getRXD_18(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXD_18);
  }

  ST* getSubstanceLotNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXD_18);
  }

  bool isRXD_18(size_t index = 0) {
    try {
      return this->getObject(index, RXD_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceLotNumber(size_t index = 0) {
    try {
      return this->getObject(index, RXD_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance Expiration Date
   */

  TS* getRXD_19(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, RXD_19);
  }

  TS* getSubstanceExpirationDate(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, RXD_19);
  }

  bool isRXD_19(size_t index = 0) {
    try {
      return this->getObject(index, RXD_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, RXD_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance Manufacturer Name
   */

  CE_0227* getRXD_20(size_t index = 0) {
    return (CE_0227*)this->getObjectSafe(index, RXD_20);
  }

  CE_0227* getSubstanceManufacturerName(size_t index = 0) {
    return (CE_0227*)this->getObjectSafe(index, RXD_20);
  }

  bool isRXD_20(size_t index = 0) {
    try {
      return this->getObject(index, RXD_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceManufacturerName(size_t index = 0) {
    try {
      return this->getObject(index, RXD_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Indication
   */

  CE* getRXD_21(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXD_21);
  }

  CE* getIndication(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXD_21);
  }

  bool isRXD_21(size_t index = 0) {
    try {
      return this->getObject(index, RXD_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIndication(size_t index = 0) {
    try {
      return this->getObject(index, RXD_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense Package Size
   */

  NM* getRXD_22(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXD_22);
  }

  NM* getDispensePackageSize(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXD_22);
  }

  bool isRXD_22(size_t index = 0) {
    try {
      return this->getObject(index, RXD_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispensePackageSize(size_t index = 0) {
    try {
      return this->getObject(index, RXD_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense Package Size Unit
   */

  CE* getRXD_23(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXD_23);
  }

  CE* getDispensePackageSizeUnit(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXD_23);
  }

  bool isRXD_23(size_t index = 0) {
    try {
      return this->getObject(index, RXD_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispensePackageSizeUnit(size_t index = 0) {
    try {
      return this->getObject(index, RXD_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense Package Method
   */

  ID* getRXD_24(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXD_24);
  }

  ID* getDispensePackageMethod(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXD_24);
  }

  bool isRXD_24(size_t index = 0) {
    try {
      return this->getObject(index, RXD_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispensePackageMethod(size_t index = 0) {
    try {
      return this->getObject(index, RXD_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Supplementary Code
   */

  CE* getRXD_25(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXD_25);
  }

  CE* getSupplementaryCode(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXD_25);
  }

  bool isRXD_25(size_t index = 0) {
    try {
      return this->getObject(index, RXD_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSupplementaryCode(size_t index = 0) {
    try {
      return this->getObject(index, RXD_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Initiating Location
   */

  CE* getRXD_26(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXD_26);
  }

  CE* getInitiatingLocation(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXD_26);
  }

  bool isRXD_26(size_t index = 0) {
    try {
      return this->getObject(index, RXD_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInitiatingLocation(size_t index = 0) {
    try {
      return this->getObject(index, RXD_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Packaging/Assembly Location
   */

  CE* getRXD_27(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXD_27);
  }

  CE* getPackagingAssemblyLocation(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXD_27);
  }

  bool isRXD_27(size_t index = 0) {
    try {
      return this->getObject(index, RXD_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPackagingAssemblyLocation(size_t index = 0) {
    try {
      return this->getObject(index, RXD_27) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RXD */

} /* End of namespace HL7_24 */
#endif /* __RXD_v24_H__ */
