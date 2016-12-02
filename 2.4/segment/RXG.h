/*
 * This file is part of Auriga HL7 library.
 *
 * Auriga HL7 library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Auriga HL7 library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Auriga HL7 library.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __RXG_v24_H__
#define __RXG_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0227.h"
#include "../datatype/CE_0292.h"
#include "../datatype/ID.h"
#include "../datatype/LA2.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"
#include "../datatype/TQ.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Pharmacy/Treatment Give */
class RXG : public HL7Segment {
 public:
  RXG() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    RXG_1,
    RXG_2,
    RXG_3,
    RXG_4,
    RXG_5,
    RXG_6,
    RXG_7,
    RXG_8,
    RXG_9,
    RXG_10,
    RXG_11,
    RXG_12,
    RXG_13,
    RXG_14,
    RXG_15,
    RXG_16,
    RXG_17,
    RXG_18,
    RXG_19,
    RXG_20,
    RXG_21,
    RXG_22,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "RXG"; }
  RXG* create() const { return new RXG(); }

 private:
  void init() {
    setName("RXG");
    /* Init members */
    addObject<NM>(RXG_1, "RXG.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXG_2, "RXG.2", HL7::optional, HL7::repetition_off);
    addObject<TQ>(RXG_3, "RXG.3", HL7::initialized, HL7::repetition_off);
    addObject<CE_0292>(RXG_4, "RXG.4", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXG_5, "RXG.5", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXG_6, "RXG.6", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXG_7, "RXG.7", HL7::initialized, HL7::repetition_off);
    addObject<CE>(RXG_8, "RXG.8", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXG_9, "RXG.9", HL7::optional, HL7::repetition_on);
    addObject<ID>(RXG_10, "RXG.10", HL7::optional, HL7::repetition_off);
    addObject<LA2>(RXG_11, "RXG.11", HL7::optional, HL7::repetition_off);
    addObject<ID>(RXG_12, "RXG.12", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXG_13, "RXG.13", HL7::optional, HL7::repetition_on);
    addObject<ST>(RXG_14, "RXG.14", HL7::conditional, HL7::repetition_off);
    addObject<ST>(RXG_15, "RXG.15", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXG_16, "RXG.16", HL7::optional, HL7::repetition_off);
    addObject<NM>(RXG_17, "RXG.17", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXG_18, "RXG.18", HL7::optional, HL7::repetition_off);
    addObject<ST>(RXG_19, "RXG.19", HL7::optional, HL7::repetition_on);
    addObject<TS>(RXG_20, "RXG.20", HL7::optional, HL7::repetition_on);
    addObject<CE_0227>(RXG_21, "RXG.21", HL7::optional, HL7::repetition_on);
    addObject<CE>(RXG_22, "RXG.22", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Give Sub-ID Counter
   */

  NM* getRXG_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXG_1);
  }

  NM* getGiveSubIDCounter(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXG_1);
  }

  bool isRXG_1(size_t index = 0) {
    try {
      return this->getObject(index, RXG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveSubIDCounter(size_t index = 0) {
    try {
      return this->getObject(index, RXG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense Sub-ID Counter
   */

  NM* getRXG_2(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXG_2);
  }

  NM* getDispenseSubIDCounter(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXG_2);
  }

  bool isRXG_2(size_t index = 0) {
    try {
      return this->getObject(index, RXG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispenseSubIDCounter(size_t index = 0) {
    try {
      return this->getObject(index, RXG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Quantity/Timing
   */

  TQ* getRXG_3(size_t index = 0) {
    return (TQ*)this->getObjectSafe(index, RXG_3);
  }

  TQ* getQuantityTiming(size_t index = 0) {
    return (TQ*)this->getObjectSafe(index, RXG_3);
  }

  bool isRXG_3(size_t index = 0) {
    try {
      return this->getObject(index, RXG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQuantityTiming(size_t index = 0) {
    try {
      return this->getObject(index, RXG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Code
   */

  CE_0292* getRXG_4(size_t index = 0) {
    return (CE_0292*)this->getObjectSafe(index, RXG_4);
  }

  CE_0292* getGiveCode(size_t index = 0) {
    return (CE_0292*)this->getObjectSafe(index, RXG_4);
  }

  bool isRXG_4(size_t index = 0) {
    try {
      return this->getObject(index, RXG_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveCode(size_t index = 0) {
    try {
      return this->getObject(index, RXG_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Amount - Minimum
   */

  NM* getRXG_5(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXG_5);
  }

  NM* getGiveAmountMinimum(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXG_5);
  }

  bool isRXG_5(size_t index = 0) {
    try {
      return this->getObject(index, RXG_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveAmountMinimum(size_t index = 0) {
    try {
      return this->getObject(index, RXG_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Amount - Maximum
   */

  NM* getRXG_6(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXG_6);
  }

  NM* getGiveAmountMaximum(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXG_6);
  }

  bool isRXG_6(size_t index = 0) {
    try {
      return this->getObject(index, RXG_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveAmountMaximum(size_t index = 0) {
    try {
      return this->getObject(index, RXG_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Units
   */

  CE* getRXG_7(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXG_7);
  }

  CE* getGiveUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXG_7);
  }

  bool isRXG_7(size_t index = 0) {
    try {
      return this->getObject(index, RXG_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXG_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Dosage Form
   */

  CE* getRXG_8(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXG_8);
  }

  CE* getGiveDosageForm(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXG_8);
  }

  bool isRXG_8(size_t index = 0) {
    try {
      return this->getObject(index, RXG_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveDosageForm(size_t index = 0) {
    try {
      return this->getObject(index, RXG_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administration Notes
   */

  CE* getRXG_9(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXG_9);
  }

  CE* getAdministrationNotes(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXG_9);
  }

  bool isRXG_9(size_t index = 0) {
    try {
      return this->getObject(index, RXG_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministrationNotes(size_t index = 0) {
    try {
      return this->getObject(index, RXG_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substitution Status
   */

  ID* getRXG_10(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXG_10);
  }

  ID* getSubstitutionStatus(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXG_10);
  }

  bool isRXG_10(size_t index = 0) {
    try {
      return this->getObject(index, RXG_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstitutionStatus(size_t index = 0) {
    try {
      return this->getObject(index, RXG_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense-To Location
   */

  LA2* getRXG_11(size_t index = 0) {
    return (LA2*)this->getObjectSafe(index, RXG_11);
  }

  LA2* getDispenseToLocation(size_t index = 0) {
    return (LA2*)this->getObjectSafe(index, RXG_11);
  }

  bool isRXG_11(size_t index = 0) {
    try {
      return this->getObject(index, RXG_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispenseToLocation(size_t index = 0) {
    try {
      return this->getObject(index, RXG_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Needs Human Review
   */

  ID* getRXG_12(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXG_12);
  }

  ID* getNeedsHumanReview(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXG_12);
  }

  bool isRXG_12(size_t index = 0) {
    try {
      return this->getObject(index, RXG_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNeedsHumanReview(size_t index = 0) {
    try {
      return this->getObject(index, RXG_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pharmacy/Treatment Supplier's Special Administration Instructions
   */

  CE* getRXG_13(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXG_13);
  }

  CE* getPharmacyTreatmentSupplierSSpecialAdministrationInstructions(
      size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXG_13);
  }

  bool isRXG_13(size_t index = 0) {
    try {
      return this->getObject(index, RXG_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPharmacyTreatmentSupplierSSpecialAdministrationInstructions(
      size_t index = 0) {
    try {
      return this->getObject(index, RXG_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Per (Time Unit)
   */

  ST* getRXG_14(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXG_14);
  }

  ST* getGivePer(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXG_14);
  }

  bool isRXG_14(size_t index = 0) {
    try {
      return this->getObject(index, RXG_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGivePer(size_t index = 0) {
    try {
      return this->getObject(index, RXG_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Rate Amount
   */

  ST* getRXG_15(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXG_15);
  }

  ST* getGiveRateAmount(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXG_15);
  }

  bool isRXG_15(size_t index = 0) {
    try {
      return this->getObject(index, RXG_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveRateAmount(size_t index = 0) {
    try {
      return this->getObject(index, RXG_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Rate Units
   */

  CE* getRXG_16(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXG_16);
  }

  CE* getGiveRateUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXG_16);
  }

  bool isRXG_16(size_t index = 0) {
    try {
      return this->getObject(index, RXG_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveRateUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXG_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Strength
   */

  NM* getRXG_17(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXG_17);
  }

  NM* getGiveStrength(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXG_17);
  }

  bool isRXG_17(size_t index = 0) {
    try {
      return this->getObject(index, RXG_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveStrength(size_t index = 0) {
    try {
      return this->getObject(index, RXG_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Give Strength Units
   */

  CE* getRXG_18(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXG_18);
  }

  CE* getGiveStrengthUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXG_18);
  }

  bool isRXG_18(size_t index = 0) {
    try {
      return this->getObject(index, RXG_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveStrengthUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXG_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance Lot Number
   */

  ST* getRXG_19(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXG_19);
  }

  ST* getSubstanceLotNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXG_19);
  }

  bool isRXG_19(size_t index = 0) {
    try {
      return this->getObject(index, RXG_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceLotNumber(size_t index = 0) {
    try {
      return this->getObject(index, RXG_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance Expiration Date
   */

  TS* getRXG_20(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, RXG_20);
  }

  TS* getSubstanceExpirationDate(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, RXG_20);
  }

  bool isRXG_20(size_t index = 0) {
    try {
      return this->getObject(index, RXG_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, RXG_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance Manufacturer Name
   */

  CE_0227* getRXG_21(size_t index = 0) {
    return (CE_0227*)this->getObjectSafe(index, RXG_21);
  }

  CE_0227* getSubstanceManufacturerName(size_t index = 0) {
    return (CE_0227*)this->getObjectSafe(index, RXG_21);
  }

  bool isRXG_21(size_t index = 0) {
    try {
      return this->getObject(index, RXG_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceManufacturerName(size_t index = 0) {
    try {
      return this->getObject(index, RXG_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Indication
   */

  CE* getRXG_22(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXG_22);
  }

  CE* getIndication(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXG_22);
  }

  bool isRXG_22(size_t index = 0) {
    try {
      return this->getObject(index, RXG_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIndication(size_t index = 0) {
    try {
      return this->getObject(index, RXG_22) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RXG */

} /* End of namespace HL7_24 */
#endif /* __RXG_v24_H__ */
