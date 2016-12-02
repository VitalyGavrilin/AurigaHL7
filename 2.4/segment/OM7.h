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


#ifndef __OM7_v24_H__
#define __OM7_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0132.h"
#include "../datatype/CE_0412.h"
#include "../datatype/CE_0413.h"
#include "../datatype/CE_0414.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/NM.h"
#include "../datatype/PL.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"
#include "../datatype/TX.h"
#include "../datatype/XCN.h"

namespace HL7_24 {

/* Additional Basic Attributes */
class OM7 : public HL7Segment {
 public:
  OM7() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    OM7_1,
    OM7_2,
    OM7_3,
    OM7_4,
    OM7_5,
    OM7_6,
    OM7_7,
    OM7_8,
    OM7_9,
    OM7_10,
    OM7_11,
    OM7_12,
    OM7_13,
    OM7_14,
    OM7_15,
    OM7_16,
    OM7_17,
    OM7_18,
    OM7_19,
    OM7_20,
    OM7_21,
    OM7_22,
    OM7_23,
    OM7_24,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "OM7"; }
  OM7* create() const { return new OM7(); }

 private:
  void init() {
    setName("OM7");
    /* Init members */
    addObject<NM>(OM7_1, "OM7.1", HL7::initialized, HL7::repetition_off);
    addObject<CE>(OM7_2, "OM7.2", HL7::initialized, HL7::repetition_off);
    addObject<CE_0412>(OM7_3, "OM7.3", HL7::optional, HL7::repetition_on);
    addObject<TX>(OM7_4, "OM7.4", HL7::optional, HL7::repetition_off);
    addObject<ST>(OM7_5, "OM7.5", HL7::optional, HL7::repetition_on);
    addObject<TS>(OM7_6, "OM7.6", HL7::optional, HL7::repetition_off);
    addObject<TS>(OM7_7, "OM7.7", HL7::optional, HL7::repetition_off);
    addObject<NM>(OM7_8, "OM7.8", HL7::optional, HL7::repetition_off);
    addObject<CE>(OM7_9, "OM7.9", HL7::optional, HL7::repetition_off);
    addObject<IS>(OM7_10, "OM7.10", HL7::optional, HL7::repetition_off);
    addObject<ID>(OM7_11, "OM7.11", HL7::optional, HL7::repetition_off);
    addObject<CE_0413>(OM7_12, "OM7.12", HL7::optional, HL7::repetition_off);
    addObject<TS>(OM7_13, "OM7.13", HL7::optional, HL7::repetition_off);
    addObject<TS>(OM7_14, "OM7.14", HL7::optional, HL7::repetition_off);
    addObject<NM>(OM7_15, "OM7.15", HL7::optional, HL7::repetition_off);
    addObject<CE_0414>(OM7_16, "OM7.16", HL7::conditional, HL7::repetition_off);
    addObject<NM>(OM7_17, "OM7.17", HL7::optional, HL7::repetition_off);
    addObject<CE_0414>(OM7_18, "OM7.18", HL7::conditional, HL7::repetition_off);
    addObject<TS>(OM7_19, "OM7.19", HL7::optional, HL7::repetition_off);
    addObject<XCN>(OM7_20, "OM7.20", HL7::optional, HL7::repetition_off);
    addObject<PL>(OM7_21, "OM7.21", HL7::optional, HL7::repetition_on);
    addObject<IS>(OM7_22, "OM7.22", HL7::optional, HL7::repetition_off);
    addObject<ID>(OM7_23, "OM7.23", HL7::optional, HL7::repetition_off);
    addObject<CE_0132>(OM7_24, "OM7.24", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Sequence Number - Test/ Observation Master File
   */

  NM* getOM7_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM7_1);
  }

  NM* getSequenceNumberTestObservationMasterFile(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM7_1);
  }

  bool isOM7_1(size_t index = 0) {
    try {
      return this->getObject(index, OM7_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSequenceNumberTestObservationMasterFile(size_t index = 0) {
    try {
      return this->getObject(index, OM7_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Universal Service Identifier
   */

  CE* getOM7_2(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM7_2);
  }

  CE* getUniversalServiceIdentifier(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM7_2);
  }

  bool isOM7_2(size_t index = 0) {
    try {
      return this->getObject(index, OM7_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniversalServiceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, OM7_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Category Identifier
   */

  CE_0412* getOM7_3(size_t index = 0) {
    return (CE_0412*)this->getObjectSafe(index, OM7_3);
  }

  CE_0412* getCategoryIdentifier(size_t index = 0) {
    return (CE_0412*)this->getObjectSafe(index, OM7_3);
  }

  bool isOM7_3(size_t index = 0) {
    try {
      return this->getObject(index, OM7_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCategoryIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, OM7_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Category Description
   */

  TX* getOM7_4(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM7_4);
  }

  TX* getCategoryDescription(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM7_4);
  }

  bool isOM7_4(size_t index = 0) {
    try {
      return this->getObject(index, OM7_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCategoryDescription(size_t index = 0) {
    try {
      return this->getObject(index, OM7_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Category Synonym
   */

  ST* getOM7_5(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM7_5);
  }

  ST* getCategorySynonym(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM7_5);
  }

  bool isOM7_5(size_t index = 0) {
    try {
      return this->getObject(index, OM7_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCategorySynonym(size_t index = 0) {
    try {
      return this->getObject(index, OM7_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Test/Service Start Date/Time
   */

  TS* getOM7_6(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, OM7_6);
  }

  TS* getEffectiveTestServiceStartDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, OM7_6);
  }

  bool isOM7_6(size_t index = 0) {
    try {
      return this->getObject(index, OM7_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveTestServiceStartDateTime(size_t index = 0) {
    try {
      return this->getObject(index, OM7_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Test/Service End Date/Time
   */

  TS* getOM7_7(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, OM7_7);
  }

  TS* getEffectiveTestServiceEndDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, OM7_7);
  }

  bool isOM7_7(size_t index = 0) {
    try {
      return this->getObject(index, OM7_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveTestServiceEndDateTime(size_t index = 0) {
    try {
      return this->getObject(index, OM7_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Test/Service Default Duration Quantity
   */

  NM* getOM7_8(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM7_8);
  }

  NM* getTestServiceDefaultDurationQuantity(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM7_8);
  }

  bool isOM7_8(size_t index = 0) {
    try {
      return this->getObject(index, OM7_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTestServiceDefaultDurationQuantity(size_t index = 0) {
    try {
      return this->getObject(index, OM7_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Test/Service Default Duration Units
   */

  CE* getOM7_9(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM7_9);
  }

  CE* getTestServiceDefaultDurationUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM7_9);
  }

  bool isOM7_9(size_t index = 0) {
    try {
      return this->getObject(index, OM7_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTestServiceDefaultDurationUnits(size_t index = 0) {
    try {
      return this->getObject(index, OM7_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Test/Service Default Frequency
   */

  IS* getOM7_10(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, OM7_10);
  }

  IS* getTestServiceDefaultFrequency(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, OM7_10);
  }

  bool isOM7_10(size_t index = 0) {
    try {
      return this->getObject(index, OM7_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTestServiceDefaultFrequency(size_t index = 0) {
    try {
      return this->getObject(index, OM7_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consent Indicator
   */

  ID* getOM7_11(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM7_11);
  }

  ID* getConsentIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM7_11);
  }

  bool isOM7_11(size_t index = 0) {
    try {
      return this->getObject(index, OM7_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsentIndicator(size_t index = 0) {
    try {
      return this->getObject(index, OM7_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consent Identifier
   */

  CE_0413* getOM7_12(size_t index = 0) {
    return (CE_0413*)this->getObjectSafe(index, OM7_12);
  }

  CE_0413* getConsentIdentifier(size_t index = 0) {
    return (CE_0413*)this->getObjectSafe(index, OM7_12);
  }

  bool isOM7_12(size_t index = 0) {
    try {
      return this->getObject(index, OM7_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsentIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, OM7_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consent Effective Start Date/Time
   */

  TS* getOM7_13(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, OM7_13);
  }

  TS* getConsentEffectiveStartDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, OM7_13);
  }

  bool isOM7_13(size_t index = 0) {
    try {
      return this->getObject(index, OM7_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsentEffectiveStartDateTime(size_t index = 0) {
    try {
      return this->getObject(index, OM7_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consent Effective End Date/Time
   */

  TS* getOM7_14(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, OM7_14);
  }

  TS* getConsentEffectiveEndDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, OM7_14);
  }

  bool isOM7_14(size_t index = 0) {
    try {
      return this->getObject(index, OM7_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsentEffectiveEndDateTime(size_t index = 0) {
    try {
      return this->getObject(index, OM7_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consent Interval Quantity
   */

  NM* getOM7_15(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM7_15);
  }

  NM* getConsentIntervalQuantity(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM7_15);
  }

  bool isOM7_15(size_t index = 0) {
    try {
      return this->getObject(index, OM7_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsentIntervalQuantity(size_t index = 0) {
    try {
      return this->getObject(index, OM7_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consent Interval Units
   */

  CE_0414* getOM7_16(size_t index = 0) {
    return (CE_0414*)this->getObjectSafe(index, OM7_16);
  }

  CE_0414* getConsentIntervalUnits(size_t index = 0) {
    return (CE_0414*)this->getObjectSafe(index, OM7_16);
  }

  bool isOM7_16(size_t index = 0) {
    try {
      return this->getObject(index, OM7_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsentIntervalUnits(size_t index = 0) {
    try {
      return this->getObject(index, OM7_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consent Waiting Period Quantity
   */

  NM* getOM7_17(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM7_17);
  }

  NM* getConsentWaitingPeriodQuantity(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM7_17);
  }

  bool isOM7_17(size_t index = 0) {
    try {
      return this->getObject(index, OM7_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsentWaitingPeriodQuantity(size_t index = 0) {
    try {
      return this->getObject(index, OM7_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consent Waiting Period Units
   */

  CE_0414* getOM7_18(size_t index = 0) {
    return (CE_0414*)this->getObjectSafe(index, OM7_18);
  }

  CE_0414* getConsentWaitingPeriodUnits(size_t index = 0) {
    return (CE_0414*)this->getObjectSafe(index, OM7_18);
  }

  bool isOM7_18(size_t index = 0) {
    try {
      return this->getObject(index, OM7_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsentWaitingPeriodUnits(size_t index = 0) {
    try {
      return this->getObject(index, OM7_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Date/Time of Change
   */

  TS* getOM7_19(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, OM7_19);
  }

  TS* getEffectiveDateTimeOfChange(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, OM7_19);
  }

  bool isOM7_19(size_t index = 0) {
    try {
      return this->getObject(index, OM7_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveDateTimeOfChange(size_t index = 0) {
    try {
      return this->getObject(index, OM7_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entered By
   */

  XCN* getOM7_20(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, OM7_20);
  }

  XCN* getEnteredBy(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, OM7_20);
  }

  bool isOM7_20(size_t index = 0) {
    try {
      return this->getObject(index, OM7_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteredBy(size_t index = 0) {
    try {
      return this->getObject(index, OM7_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Orderable-at Location
   */

  PL* getOM7_21(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, OM7_21);
  }

  PL* getOrderableAtLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, OM7_21);
  }

  bool isOM7_21(size_t index = 0) {
    try {
      return this->getObject(index, OM7_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderableAtLocation(size_t index = 0) {
    try {
      return this->getObject(index, OM7_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Formulary Status
   */

  IS* getOM7_22(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, OM7_22);
  }

  IS* getFormularyStatus(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, OM7_22);
  }

  bool isOM7_22(size_t index = 0) {
    try {
      return this->getObject(index, OM7_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFormularyStatus(size_t index = 0) {
    try {
      return this->getObject(index, OM7_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Special Order Indicator
   */

  ID* getOM7_23(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM7_23);
  }

  ID* getSpecialOrderIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM7_23);
  }

  bool isOM7_23(size_t index = 0) {
    try {
      return this->getObject(index, OM7_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialOrderIndicator(size_t index = 0) {
    try {
      return this->getObject(index, OM7_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Key Value - CDM
   */

  CE_0132* getOM7_24(size_t index = 0) {
    return (CE_0132*)this->getObjectSafe(index, OM7_24);
  }

  CE_0132* getPrimaryKeyValueCDM(size_t index = 0) {
    return (CE_0132*)this->getObjectSafe(index, OM7_24);
  }

  bool isOM7_24(size_t index = 0) {
    try {
      return this->getObject(index, OM7_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryKeyValueCDM(size_t index = 0) {
    try {
      return this->getObject(index, OM7_24) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of OM7 */

} /* End of namespace HL7_24 */
#endif /* __OM7_v24_H__ */
