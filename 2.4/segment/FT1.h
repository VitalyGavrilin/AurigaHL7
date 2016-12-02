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


#ifndef __FT1_v24_H__
#define __FT1_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0049.h"
#include "../datatype/CE_0051.h"
#include "../datatype/CE_0072.h"
#include "../datatype/CE_0088.h"
#include "../datatype/CE_0132.h"
#include "../datatype/CE_0340.h"
#include "../datatype/CP.h"
#include "../datatype/EI.h"
#include "../datatype/IS.h"
#include "../datatype/NM.h"
#include "../datatype/PL.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"
#include "../datatype/XCN.h"

namespace HL7_24 {

/* Financial Transaction */
class FT1 : public HL7Segment {
 public:
  FT1() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    FT1_1,
    FT1_2,
    FT1_3,
    FT1_4,
    FT1_5,
    FT1_6,
    FT1_7,
    FT1_8,
    FT1_9,
    FT1_10,
    FT1_11,
    FT1_12,
    FT1_13,
    FT1_14,
    FT1_15,
    FT1_16,
    FT1_17,
    FT1_18,
    FT1_19,
    FT1_20,
    FT1_21,
    FT1_22,
    FT1_23,
    FT1_24,
    FT1_25,
    FT1_26,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "FT1"; }
  FT1* create() const { return new FT1(); }

 private:
  void init() {
    setName("FT1");
    /* Init members */
    addObject<SI>(FT1_1, "FT1.1", HL7::optional, HL7::repetition_off);
    addObject<ST>(FT1_2, "FT1.2", HL7::optional, HL7::repetition_off);
    addObject<ST>(FT1_3, "FT1.3", HL7::optional, HL7::repetition_off);
    addObject<TS>(FT1_4, "FT1.4", HL7::initialized, HL7::repetition_off);
    addObject<TS>(FT1_5, "FT1.5", HL7::optional, HL7::repetition_off);
    addObject<IS>(FT1_6, "FT1.6", HL7::initialized, HL7::repetition_off);
    addObject<CE_0132>(FT1_7, "FT1.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(FT1_8, "FT1.8", HL7::optional, HL7::repetition_off);
    addObject<ST>(FT1_9, "FT1.9", HL7::optional, HL7::repetition_off);
    addObject<NM>(FT1_10, "FT1.10", HL7::optional, HL7::repetition_off);
    addObject<CP>(FT1_11, "FT1.11", HL7::optional, HL7::repetition_off);
    addObject<CP>(FT1_12, "FT1.12", HL7::optional, HL7::repetition_off);
    addObject<CE_0049>(FT1_13, "FT1.13", HL7::optional, HL7::repetition_off);
    addObject<CE_0072>(FT1_14, "FT1.14", HL7::optional, HL7::repetition_off);
    addObject<CP>(FT1_15, "FT1.15", HL7::optional, HL7::repetition_off);
    addObject<PL>(FT1_16, "FT1.16", HL7::optional, HL7::repetition_off);
    addObject<IS>(FT1_17, "FT1.17", HL7::optional, HL7::repetition_off);
    addObject<IS>(FT1_18, "FT1.18", HL7::optional, HL7::repetition_off);
    addObject<CE_0051>(FT1_19, "FT1.19", HL7::optional, HL7::repetition_on);
    addObject<XCN>(FT1_20, "FT1.20", HL7::optional, HL7::repetition_on);
    addObject<XCN>(FT1_21, "FT1.21", HL7::optional, HL7::repetition_on);
    addObject<CP>(FT1_22, "FT1.22", HL7::optional, HL7::repetition_off);
    addObject<EI>(FT1_23, "FT1.23", HL7::optional, HL7::repetition_off);
    addObject<XCN>(FT1_24, "FT1.24", HL7::optional, HL7::repetition_on);
    addObject<CE_0088>(FT1_25, "FT1.25", HL7::optional, HL7::repetition_off);
    addObject<CE_0340>(FT1_26, "FT1.26", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - FT1
   */

  SI* getFT1_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, FT1_1);
  }

  SI* getSetIDFT1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, FT1_1);
  }

  bool isFT1_1(size_t index = 0) {
    try {
      return this->getObject(index, FT1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDFT1(size_t index = 0) {
    try {
      return this->getObject(index, FT1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction ID
   */

  ST* getFT1_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FT1_2);
  }

  ST* getTransactionID(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FT1_2);
  }

  bool isFT1_2(size_t index = 0) {
    try {
      return this->getObject(index, FT1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionID(size_t index = 0) {
    try {
      return this->getObject(index, FT1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Batch ID
   */

  ST* getFT1_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FT1_3);
  }

  ST* getTransactionBatchID(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FT1_3);
  }

  bool isFT1_3(size_t index = 0) {
    try {
      return this->getObject(index, FT1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionBatchID(size_t index = 0) {
    try {
      return this->getObject(index, FT1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Date
   */

  TS* getFT1_4(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, FT1_4);
  }

  TS* getTransactionDate(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, FT1_4);
  }

  bool isFT1_4(size_t index = 0) {
    try {
      return this->getObject(index, FT1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionDate(size_t index = 0) {
    try {
      return this->getObject(index, FT1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Posting Date
   */

  TS* getFT1_5(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, FT1_5);
  }

  TS* getTransactionPostingDate(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, FT1_5);
  }

  bool isFT1_5(size_t index = 0) {
    try {
      return this->getObject(index, FT1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionPostingDate(size_t index = 0) {
    try {
      return this->getObject(index, FT1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Type
   */

  IS* getFT1_6(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, FT1_6);
  }

  IS* getTransactionType(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, FT1_6);
  }

  bool isFT1_6(size_t index = 0) {
    try {
      return this->getObject(index, FT1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionType(size_t index = 0) {
    try {
      return this->getObject(index, FT1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Code
   */

  CE_0132* getFT1_7(size_t index = 0) {
    return (CE_0132*)this->getObjectSafe(index, FT1_7);
  }

  CE_0132* getTransactionCode(size_t index = 0) {
    return (CE_0132*)this->getObjectSafe(index, FT1_7);
  }

  bool isFT1_7(size_t index = 0) {
    try {
      return this->getObject(index, FT1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionCode(size_t index = 0) {
    try {
      return this->getObject(index, FT1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Description
   */

  ST* getFT1_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FT1_8);
  }

  ST* getTransactionDescription(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FT1_8);
  }

  bool isFT1_8(size_t index = 0) {
    try {
      return this->getObject(index, FT1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionDescription(size_t index = 0) {
    try {
      return this->getObject(index, FT1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Description - Alt
   */

  ST* getFT1_9(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FT1_9);
  }

  ST* getTransactionDescriptionAlt(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FT1_9);
  }

  bool isFT1_9(size_t index = 0) {
    try {
      return this->getObject(index, FT1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionDescriptionAlt(size_t index = 0) {
    try {
      return this->getObject(index, FT1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Quantity
   */

  NM* getFT1_10(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, FT1_10);
  }

  NM* getTransactionQuantity(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, FT1_10);
  }

  bool isFT1_10(size_t index = 0) {
    try {
      return this->getObject(index, FT1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionQuantity(size_t index = 0) {
    try {
      return this->getObject(index, FT1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Amount - Extended
   */

  CP* getFT1_11(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, FT1_11);
  }

  CP* getTransactionAmountExtended(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, FT1_11);
  }

  bool isFT1_11(size_t index = 0) {
    try {
      return this->getObject(index, FT1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionAmountExtended(size_t index = 0) {
    try {
      return this->getObject(index, FT1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Amount - Unit
   */

  CP* getFT1_12(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, FT1_12);
  }

  CP* getTransactionAmountUnit(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, FT1_12);
  }

  bool isFT1_12(size_t index = 0) {
    try {
      return this->getObject(index, FT1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionAmountUnit(size_t index = 0) {
    try {
      return this->getObject(index, FT1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Department Code
   */

  CE_0049* getFT1_13(size_t index = 0) {
    return (CE_0049*)this->getObjectSafe(index, FT1_13);
  }

  CE_0049* getDepartmentCode(size_t index = 0) {
    return (CE_0049*)this->getObjectSafe(index, FT1_13);
  }

  bool isFT1_13(size_t index = 0) {
    try {
      return this->getObject(index, FT1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDepartmentCode(size_t index = 0) {
    try {
      return this->getObject(index, FT1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insurance Plan ID
   */

  CE_0072* getFT1_14(size_t index = 0) {
    return (CE_0072*)this->getObjectSafe(index, FT1_14);
  }

  CE_0072* getInsurancePlanID(size_t index = 0) {
    return (CE_0072*)this->getObjectSafe(index, FT1_14);
  }

  bool isFT1_14(size_t index = 0) {
    try {
      return this->getObject(index, FT1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsurancePlanID(size_t index = 0) {
    try {
      return this->getObject(index, FT1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insurance Amount
   */

  CP* getFT1_15(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, FT1_15);
  }

  CP* getInsuranceAmount(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, FT1_15);
  }

  bool isFT1_15(size_t index = 0) {
    try {
      return this->getObject(index, FT1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuranceAmount(size_t index = 0) {
    try {
      return this->getObject(index, FT1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assigned Patient Location
   */

  PL* getFT1_16(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, FT1_16);
  }

  PL* getAssignedPatientLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, FT1_16);
  }

  bool isFT1_16(size_t index = 0) {
    try {
      return this->getObject(index, FT1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssignedPatientLocation(size_t index = 0) {
    try {
      return this->getObject(index, FT1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Fee Schedule
   */

  IS* getFT1_17(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, FT1_17);
  }

  IS* getFeeSchedule(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, FT1_17);
  }

  bool isFT1_17(size_t index = 0) {
    try {
      return this->getObject(index, FT1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFeeSchedule(size_t index = 0) {
    try {
      return this->getObject(index, FT1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Type
   */

  IS* getFT1_18(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, FT1_18);
  }

  IS* getPatientType(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, FT1_18);
  }

  bool isFT1_18(size_t index = 0) {
    try {
      return this->getObject(index, FT1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientType(size_t index = 0) {
    try {
      return this->getObject(index, FT1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diagnosis Code - FT1
   */

  CE_0051* getFT1_19(size_t index = 0) {
    return (CE_0051*)this->getObjectSafe(index, FT1_19);
  }

  CE_0051* getDiagnosisCodeFT1(size_t index = 0) {
    return (CE_0051*)this->getObjectSafe(index, FT1_19);
  }

  bool isFT1_19(size_t index = 0) {
    try {
      return this->getObject(index, FT1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosisCodeFT1(size_t index = 0) {
    try {
      return this->getObject(index, FT1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Performed By Code
   */

  XCN* getFT1_20(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, FT1_20);
  }

  XCN* getPerformedByCode(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, FT1_20);
  }

  bool isFT1_20(size_t index = 0) {
    try {
      return this->getObject(index, FT1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPerformedByCode(size_t index = 0) {
    try {
      return this->getObject(index, FT1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ordered By Code
   */

  XCN* getFT1_21(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, FT1_21);
  }

  XCN* getOrderedByCode(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, FT1_21);
  }

  bool isFT1_21(size_t index = 0) {
    try {
      return this->getObject(index, FT1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderedByCode(size_t index = 0) {
    try {
      return this->getObject(index, FT1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Unit Cost
   */

  CP* getFT1_22(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, FT1_22);
  }

  CP* getUnitCost(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, FT1_22);
  }

  bool isFT1_22(size_t index = 0) {
    try {
      return this->getObject(index, FT1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUnitCost(size_t index = 0) {
    try {
      return this->getObject(index, FT1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Order Number
   */

  EI* getFT1_23(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, FT1_23);
  }

  EI* getFillerOrderNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, FT1_23);
  }

  bool isFT1_23(size_t index = 0) {
    try {
      return this->getObject(index, FT1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerOrderNumber(size_t index = 0) {
    try {
      return this->getObject(index, FT1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entered By Code
   */

  XCN* getFT1_24(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, FT1_24);
  }

  XCN* getEnteredByCode(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, FT1_24);
  }

  bool isFT1_24(size_t index = 0) {
    try {
      return this->getObject(index, FT1_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteredByCode(size_t index = 0) {
    try {
      return this->getObject(index, FT1_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Code
   */

  CE_0088* getFT1_25(size_t index = 0) {
    return (CE_0088*)this->getObjectSafe(index, FT1_25);
  }

  CE_0088* getProcedureCode(size_t index = 0) {
    return (CE_0088*)this->getObjectSafe(index, FT1_25);
  }

  bool isFT1_25(size_t index = 0) {
    try {
      return this->getObject(index, FT1_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureCode(size_t index = 0) {
    try {
      return this->getObject(index, FT1_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Code Modifier
   */

  CE_0340* getFT1_26(size_t index = 0) {
    return (CE_0340*)this->getObjectSafe(index, FT1_26);
  }

  CE_0340* getProcedureCodeModifier(size_t index = 0) {
    return (CE_0340*)this->getObjectSafe(index, FT1_26);
  }

  bool isFT1_26(size_t index = 0) {
    try {
      return this->getObject(index, FT1_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureCodeModifier(size_t index = 0) {
    try {
      return this->getObject(index, FT1_26) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of FT1 */

} /* End of namespace HL7_24 */
#endif /* __FT1_v24_H__ */
