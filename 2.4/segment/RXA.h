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


#ifndef __RXA_v24_H__
#define __RXA_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0227.h"
#include "../datatype/CE_0292.h"
#include "../datatype/ID.h"
#include "../datatype/LA2.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"
#include "../datatype/XCN.h"

namespace HL7_24 {

/* Pharmacy/Treatment Administration */
class RXA : public HL7Segment {
 public:
  RXA() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    RXA_1,
    RXA_2,
    RXA_3,
    RXA_4,
    RXA_5,
    RXA_6,
    RXA_7,
    RXA_8,
    RXA_9,
    RXA_10,
    RXA_11,
    RXA_12,
    RXA_13,
    RXA_14,
    RXA_15,
    RXA_16,
    RXA_17,
    RXA_18,
    RXA_19,
    RXA_20,
    RXA_21,
    RXA_22,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "RXA"; }
  RXA* create() const { return new RXA(); }

 private:
  void init() {
    setName("RXA");
    /* Init members */
    addObject<NM>(RXA_1, "RXA.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXA_2, "RXA.2", HL7::initialized, HL7::repetition_off);
    addObject<TS>(RXA_3, "RXA.3", HL7::initialized, HL7::repetition_off);
    addObject<TS>(RXA_4, "RXA.4", HL7::initialized, HL7::repetition_off);
    addObject<CE_0292>(RXA_5, "RXA.5", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXA_6, "RXA.6", HL7::initialized, HL7::repetition_off);
    addObject<CE>(RXA_7, "RXA.7", HL7::conditional, HL7::repetition_off);
    addObject<CE>(RXA_8, "RXA.8", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXA_9, "RXA.9", HL7::optional, HL7::repetition_on);
    addObject<XCN>(RXA_10, "RXA.10", HL7::optional, HL7::repetition_on);
    addObject<LA2>(RXA_11, "RXA.11", HL7::conditional, HL7::repetition_off);
    addObject<ST>(RXA_12, "RXA.12", HL7::conditional, HL7::repetition_off);
    addObject<NM>(RXA_13, "RXA.13", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXA_14, "RXA.14", HL7::optional, HL7::repetition_off);
    addObject<ST>(RXA_15, "RXA.15", HL7::optional, HL7::repetition_on);
    addObject<TS>(RXA_16, "RXA.16", HL7::optional, HL7::repetition_on);
    addObject<CE_0227>(RXA_17, "RXA.17", HL7::optional, HL7::repetition_on);
    addObject<CE>(RXA_18, "RXA.18", HL7::optional, HL7::repetition_on);
    addObject<CE>(RXA_19, "RXA.19", HL7::optional, HL7::repetition_on);
    addObject<ID>(RXA_20, "RXA.20", HL7::optional, HL7::repetition_off);
    addObject<ID>(RXA_21, "RXA.21", HL7::optional, HL7::repetition_off);
    addObject<TS>(RXA_22, "RXA.22", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Give Sub-ID Counter
   */

  NM* getRXA_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXA_1);
  }

  NM* getGiveSubIDCounter(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXA_1);
  }

  bool isRXA_1(size_t index = 0) {
    try {
      return this->getObject(index, RXA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveSubIDCounter(size_t index = 0) {
    try {
      return this->getObject(index, RXA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administration Sub-ID Counter
   */

  NM* getRXA_2(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXA_2);
  }

  NM* getAdministrationSubIDCounter(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXA_2);
  }

  bool isRXA_2(size_t index = 0) {
    try {
      return this->getObject(index, RXA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministrationSubIDCounter(size_t index = 0) {
    try {
      return this->getObject(index, RXA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time Start of Administration
   */

  TS* getRXA_3(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, RXA_3);
  }

  TS* getDateTimeStartOfAdministration(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, RXA_3);
  }

  bool isRXA_3(size_t index = 0) {
    try {
      return this->getObject(index, RXA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeStartOfAdministration(size_t index = 0) {
    try {
      return this->getObject(index, RXA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time End of Administration
   */

  TS* getRXA_4(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, RXA_4);
  }

  TS* getDateTimeEndOfAdministration(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, RXA_4);
  }

  bool isRXA_4(size_t index = 0) {
    try {
      return this->getObject(index, RXA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeEndOfAdministration(size_t index = 0) {
    try {
      return this->getObject(index, RXA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administered Code
   */

  CE_0292* getRXA_5(size_t index = 0) {
    return (CE_0292*)this->getObjectSafe(index, RXA_5);
  }

  CE_0292* getAdministeredCode(size_t index = 0) {
    return (CE_0292*)this->getObjectSafe(index, RXA_5);
  }

  bool isRXA_5(size_t index = 0) {
    try {
      return this->getObject(index, RXA_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministeredCode(size_t index = 0) {
    try {
      return this->getObject(index, RXA_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administered Amount
   */

  NM* getRXA_6(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXA_6);
  }

  NM* getAdministeredAmount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXA_6);
  }

  bool isRXA_6(size_t index = 0) {
    try {
      return this->getObject(index, RXA_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministeredAmount(size_t index = 0) {
    try {
      return this->getObject(index, RXA_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administered Units
   */

  CE* getRXA_7(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXA_7);
  }

  CE* getAdministeredUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXA_7);
  }

  bool isRXA_7(size_t index = 0) {
    try {
      return this->getObject(index, RXA_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministeredUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXA_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administered Dosage Form
   */

  CE* getRXA_8(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXA_8);
  }

  CE* getAdministeredDosageForm(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXA_8);
  }

  bool isRXA_8(size_t index = 0) {
    try {
      return this->getObject(index, RXA_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministeredDosageForm(size_t index = 0) {
    try {
      return this->getObject(index, RXA_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administration Notes
   */

  CE* getRXA_9(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXA_9);
  }

  CE* getAdministrationNotes(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXA_9);
  }

  bool isRXA_9(size_t index = 0) {
    try {
      return this->getObject(index, RXA_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministrationNotes(size_t index = 0) {
    try {
      return this->getObject(index, RXA_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administering Provider
   */

  XCN* getRXA_10(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, RXA_10);
  }

  XCN* getAdministeringProvider(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, RXA_10);
  }

  bool isRXA_10(size_t index = 0) {
    try {
      return this->getObject(index, RXA_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministeringProvider(size_t index = 0) {
    try {
      return this->getObject(index, RXA_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administered-at Location
   */

  LA2* getRXA_11(size_t index = 0) {
    return (LA2*)this->getObjectSafe(index, RXA_11);
  }

  LA2* getAdministeredAtLocation(size_t index = 0) {
    return (LA2*)this->getObjectSafe(index, RXA_11);
  }

  bool isRXA_11(size_t index = 0) {
    try {
      return this->getObject(index, RXA_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministeredAtLocation(size_t index = 0) {
    try {
      return this->getObject(index, RXA_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administered Per (Time Unit)
   */

  ST* getRXA_12(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXA_12);
  }

  ST* getAdministeredPer(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXA_12);
  }

  bool isRXA_12(size_t index = 0) {
    try {
      return this->getObject(index, RXA_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministeredPer(size_t index = 0) {
    try {
      return this->getObject(index, RXA_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administered Strength
   */

  NM* getRXA_13(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXA_13);
  }

  NM* getAdministeredStrength(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXA_13);
  }

  bool isRXA_13(size_t index = 0) {
    try {
      return this->getObject(index, RXA_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministeredStrength(size_t index = 0) {
    try {
      return this->getObject(index, RXA_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administered Strength Units
   */

  CE* getRXA_14(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXA_14);
  }

  CE* getAdministeredStrengthUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXA_14);
  }

  bool isRXA_14(size_t index = 0) {
    try {
      return this->getObject(index, RXA_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministeredStrengthUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXA_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance Lot Number
   */

  ST* getRXA_15(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXA_15);
  }

  ST* getSubstanceLotNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXA_15);
  }

  bool isRXA_15(size_t index = 0) {
    try {
      return this->getObject(index, RXA_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceLotNumber(size_t index = 0) {
    try {
      return this->getObject(index, RXA_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance Expiration Date
   */

  TS* getRXA_16(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, RXA_16);
  }

  TS* getSubstanceExpirationDate(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, RXA_16);
  }

  bool isRXA_16(size_t index = 0) {
    try {
      return this->getObject(index, RXA_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, RXA_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance Manufacturer Name
   */

  CE_0227* getRXA_17(size_t index = 0) {
    return (CE_0227*)this->getObjectSafe(index, RXA_17);
  }

  CE_0227* getSubstanceManufacturerName(size_t index = 0) {
    return (CE_0227*)this->getObjectSafe(index, RXA_17);
  }

  bool isRXA_17(size_t index = 0) {
    try {
      return this->getObject(index, RXA_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceManufacturerName(size_t index = 0) {
    try {
      return this->getObject(index, RXA_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance/Treatment Refusal Reason
   */

  CE* getRXA_18(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXA_18);
  }

  CE* getSubstanceTreatmentRefusalReason(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXA_18);
  }

  bool isRXA_18(size_t index = 0) {
    try {
      return this->getObject(index, RXA_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceTreatmentRefusalReason(size_t index = 0) {
    try {
      return this->getObject(index, RXA_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Indication
   */

  CE* getRXA_19(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXA_19);
  }

  CE* getIndication(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXA_19);
  }

  bool isRXA_19(size_t index = 0) {
    try {
      return this->getObject(index, RXA_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIndication(size_t index = 0) {
    try {
      return this->getObject(index, RXA_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Completion Status
   */

  ID* getRXA_20(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXA_20);
  }

  ID* getCompletionStatus(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXA_20);
  }

  bool isRXA_20(size_t index = 0) {
    try {
      return this->getObject(index, RXA_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCompletionStatus(size_t index = 0) {
    try {
      return this->getObject(index, RXA_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code-RXA
   */

  ID* getRXA_21(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXA_21);
  }

  ID* getActionCodeRXA(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXA_21);
  }

  bool isRXA_21(size_t index = 0) {
    try {
      return this->getObject(index, RXA_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCodeRXA(size_t index = 0) {
    try {
      return this->getObject(index, RXA_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * System Entry Date/Time
   */

  TS* getRXA_22(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, RXA_22);
  }

  TS* getSystemEntryDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, RXA_22);
  }

  bool isRXA_22(size_t index = 0) {
    try {
      return this->getObject(index, RXA_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSystemEntryDateTime(size_t index = 0) {
    try {
      return this->getObject(index, RXA_22) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RXA */

} /* End of namespace HL7_24 */
#endif /* __RXA_v24_H__ */
