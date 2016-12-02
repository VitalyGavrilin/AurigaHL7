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


#ifndef __RXO_v24_H__
#define __RXO_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CQ.h"
#include "../datatype/ID.h"
#include "../datatype/LA1.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"
#include "../datatype/XCN.h"

namespace HL7_24 {

/* Pharmacy/Treatment Order */
class RXO : public HL7Segment {
 public:
  RXO() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    RXO_1,
    RXO_2,
    RXO_3,
    RXO_4,
    RXO_5,
    RXO_6,
    RXO_7,
    RXO_8,
    RXO_9,
    RXO_10,
    RXO_11,
    RXO_12,
    RXO_13,
    RXO_14,
    RXO_15,
    RXO_16,
    RXO_17,
    RXO_18,
    RXO_19,
    RXO_20,
    RXO_21,
    RXO_22,
    RXO_23,
    RXO_24,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "RXO"; }
  RXO* create() const { return new RXO(); }

 private:
  void init() {
    setName("RXO");
    /* Init members */
    addObject<CE>(RXO_1, "RXO.1", HL7::conditional, HL7::repetition_off);
    addObject<NM>(RXO_2, "RXO.2", HL7::conditional, HL7::repetition_off);
    addObject<NM>(RXO_3, "RXO.3", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXO_4, "RXO.4", HL7::conditional, HL7::repetition_off);
    addObject<CE>(RXO_5, "RXO.5", HL7::conditional, HL7::repetition_off);
    addObject<CE>(RXO_6, "RXO.6", HL7::optional, HL7::repetition_on);
    addObject<CE>(RXO_7, "RXO.7", HL7::optional, HL7::repetition_on);
    addObject<LA1>(RXO_8, "RXO.8", HL7::optional, HL7::repetition_off);
    addObject<ID>(RXO_9, "RXO.9", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXO_10, "RXO.10", HL7::optional, HL7::repetition_off);
    addObject<NM>(RXO_11, "RXO.11", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXO_12, "RXO.12", HL7::optional, HL7::repetition_off);
    addObject<NM>(RXO_13, "RXO.13", HL7::optional, HL7::repetition_off);
    addObject<XCN>(RXO_14, "RXO.14", HL7::conditional, HL7::repetition_on);
    addObject<XCN>(RXO_15, "RXO.15", HL7::conditional, HL7::repetition_on);
    addObject<ID>(RXO_16, "RXO.16", HL7::optional, HL7::repetition_off);
    addObject<ST>(RXO_17, "RXO.17", HL7::conditional, HL7::repetition_off);
    addObject<NM>(RXO_18, "RXO.18", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXO_19, "RXO.19", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXO_20, "RXO.20", HL7::optional, HL7::repetition_on);
    addObject<ST>(RXO_21, "RXO.21", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXO_22, "RXO.22", HL7::optional, HL7::repetition_off);
    addObject<CQ>(RXO_23, "RXO.23", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXO_24, "RXO.24", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Requested Give Code
   */

  CE* getRXO_1(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXO_1);
  }

  CE* getRequestedGiveCode(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXO_1);
  }

  bool isRXO_1(size_t index = 0) {
    try {
      return this->getObject(index, RXO_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedGiveCode(size_t index = 0) {
    try {
      return this->getObject(index, RXO_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Give Amount - Minimum
   */

  NM* getRXO_2(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXO_2);
  }

  NM* getRequestedGiveAmountMinimum(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXO_2);
  }

  bool isRXO_2(size_t index = 0) {
    try {
      return this->getObject(index, RXO_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedGiveAmountMinimum(size_t index = 0) {
    try {
      return this->getObject(index, RXO_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Give Amount - Maximum
   */

  NM* getRXO_3(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXO_3);
  }

  NM* getRequestedGiveAmountMaximum(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXO_3);
  }

  bool isRXO_3(size_t index = 0) {
    try {
      return this->getObject(index, RXO_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedGiveAmountMaximum(size_t index = 0) {
    try {
      return this->getObject(index, RXO_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Give Units
   */

  CE* getRXO_4(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXO_4);
  }

  CE* getRequestedGiveUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXO_4);
  }

  bool isRXO_4(size_t index = 0) {
    try {
      return this->getObject(index, RXO_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedGiveUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXO_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Dosage Form
   */

  CE* getRXO_5(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXO_5);
  }

  CE* getRequestedDosageForm(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXO_5);
  }

  bool isRXO_5(size_t index = 0) {
    try {
      return this->getObject(index, RXO_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedDosageForm(size_t index = 0) {
    try {
      return this->getObject(index, RXO_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider's Pharmacy/Treatment Instructions
   */

  CE* getRXO_6(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXO_6);
  }

  CE* getProviderSPharmacyTreatmentInstructions(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXO_6);
  }

  bool isRXO_6(size_t index = 0) {
    try {
      return this->getObject(index, RXO_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderSPharmacyTreatmentInstructions(size_t index = 0) {
    try {
      return this->getObject(index, RXO_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider's Administration Instructions
   */

  CE* getRXO_7(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXO_7);
  }

  CE* getProviderSAdministrationInstructions(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXO_7);
  }

  bool isRXO_7(size_t index = 0) {
    try {
      return this->getObject(index, RXO_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderSAdministrationInstructions(size_t index = 0) {
    try {
      return this->getObject(index, RXO_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Deliver-To Location
   */

  LA1* getRXO_8(size_t index = 0) {
    return (LA1*)this->getObjectSafe(index, RXO_8);
  }

  LA1* getDeliverToLocation(size_t index = 0) {
    return (LA1*)this->getObjectSafe(index, RXO_8);
  }

  bool isRXO_8(size_t index = 0) {
    try {
      return this->getObject(index, RXO_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeliverToLocation(size_t index = 0) {
    try {
      return this->getObject(index, RXO_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allow Substitutions
   */

  ID* getRXO_9(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXO_9);
  }

  ID* getAllowSubstitutions(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXO_9);
  }

  bool isRXO_9(size_t index = 0) {
    try {
      return this->getObject(index, RXO_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllowSubstitutions(size_t index = 0) {
    try {
      return this->getObject(index, RXO_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Dispense Code
   */

  CE* getRXO_10(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXO_10);
  }

  CE* getRequestedDispenseCode(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXO_10);
  }

  bool isRXO_10(size_t index = 0) {
    try {
      return this->getObject(index, RXO_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedDispenseCode(size_t index = 0) {
    try {
      return this->getObject(index, RXO_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Dispense Amount
   */

  NM* getRXO_11(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXO_11);
  }

  NM* getRequestedDispenseAmount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXO_11);
  }

  bool isRXO_11(size_t index = 0) {
    try {
      return this->getObject(index, RXO_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedDispenseAmount(size_t index = 0) {
    try {
      return this->getObject(index, RXO_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Dispense Units
   */

  CE* getRXO_12(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXO_12);
  }

  CE* getRequestedDispenseUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXO_12);
  }

  bool isRXO_12(size_t index = 0) {
    try {
      return this->getObject(index, RXO_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedDispenseUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXO_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of Refills
   */

  NM* getRXO_13(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXO_13);
  }

  NM* getNumberOfRefills(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXO_13);
  }

  bool isRXO_13(size_t index = 0) {
    try {
      return this->getObject(index, RXO_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberOfRefills(size_t index = 0) {
    try {
      return this->getObject(index, RXO_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ordering Provider's DEA Number
   */

  XCN* getRXO_14(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, RXO_14);
  }

  XCN* getOrderingProviderSDEANumber(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, RXO_14);
  }

  bool isRXO_14(size_t index = 0) {
    try {
      return this->getObject(index, RXO_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderingProviderSDEANumber(size_t index = 0) {
    try {
      return this->getObject(index, RXO_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pharmacist/Treatment Supplier's Verifier ID
   */

  XCN* getRXO_15(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, RXO_15);
  }

  XCN* getPharmacistTreatmentSupplierSVerifierID(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, RXO_15);
  }

  bool isRXO_15(size_t index = 0) {
    try {
      return this->getObject(index, RXO_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPharmacistTreatmentSupplierSVerifierID(size_t index = 0) {
    try {
      return this->getObject(index, RXO_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Needs Human Review
   */

  ID* getRXO_16(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXO_16);
  }

  ID* getNeedsHumanReview(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXO_16);
  }

  bool isRXO_16(size_t index = 0) {
    try {
      return this->getObject(index, RXO_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNeedsHumanReview(size_t index = 0) {
    try {
      return this->getObject(index, RXO_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Give Per (Time Unit)
   */

  ST* getRXO_17(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXO_17);
  }

  ST* getRequestedGivePer(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXO_17);
  }

  bool isRXO_17(size_t index = 0) {
    try {
      return this->getObject(index, RXO_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedGivePer(size_t index = 0) {
    try {
      return this->getObject(index, RXO_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Give Strength
   */

  NM* getRXO_18(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXO_18);
  }

  NM* getRequestedGiveStrength(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXO_18);
  }

  bool isRXO_18(size_t index = 0) {
    try {
      return this->getObject(index, RXO_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedGiveStrength(size_t index = 0) {
    try {
      return this->getObject(index, RXO_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Give Strength Units
   */

  CE* getRXO_19(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXO_19);
  }

  CE* getRequestedGiveStrengthUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXO_19);
  }

  bool isRXO_19(size_t index = 0) {
    try {
      return this->getObject(index, RXO_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedGiveStrengthUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXO_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Indication
   */

  CE* getRXO_20(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXO_20);
  }

  CE* getIndication(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXO_20);
  }

  bool isRXO_20(size_t index = 0) {
    try {
      return this->getObject(index, RXO_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIndication(size_t index = 0) {
    try {
      return this->getObject(index, RXO_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Give Rate Amount
   */

  ST* getRXO_21(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXO_21);
  }

  ST* getRequestedGiveRateAmount(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXO_21);
  }

  bool isRXO_21(size_t index = 0) {
    try {
      return this->getObject(index, RXO_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedGiveRateAmount(size_t index = 0) {
    try {
      return this->getObject(index, RXO_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Give Rate Units
   */

  CE* getRXO_22(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXO_22);
  }

  CE* getRequestedGiveRateUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXO_22);
  }

  bool isRXO_22(size_t index = 0) {
    try {
      return this->getObject(index, RXO_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedGiveRateUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXO_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Total Daily Dose
   */

  CQ* getRXO_23(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, RXO_23);
  }

  CQ* getTotalDailyDose(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, RXO_23);
  }

  bool isRXO_23(size_t index = 0) {
    try {
      return this->getObject(index, RXO_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTotalDailyDose(size_t index = 0) {
    try {
      return this->getObject(index, RXO_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Supplementary Code
   */

  CE* getRXO_24(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXO_24);
  }

  CE* getSupplementaryCode(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXO_24);
  }

  bool isRXO_24(size_t index = 0) {
    try {
      return this->getObject(index, RXO_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSupplementaryCode(size_t index = 0) {
    try {
      return this->getObject(index, RXO_24) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RXO */

} /* End of namespace HL7_24 */
#endif /* __RXO_v24_H__ */
