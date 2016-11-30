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


#ifndef __GT1_v24_H__
#define __GT1_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0002.h"
#include "../datatype/CE_0005.h"
#include "../datatype/CE_0006.h"
#include "../datatype/CE_0063.h"
#include "../datatype/CE_0171.h"
#include "../datatype/CE_0189.h"
#include "../datatype/CE_0212.h"
#include "../datatype/CE_0215.h"
#include "../datatype/CE_0218.h"
#include "../datatype/CE_0222.h"
#include "../datatype/CE_0296.h"
#include "../datatype/CE_0341.h"
#include "../datatype/CP.h"
#include "../datatype/CX.h"
#include "../datatype/DT.h"
#include "../datatype/FC.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/JCC.h"
#include "../datatype/NM.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"
#include "../datatype/XAD.h"
#include "../datatype/XON.h"
#include "../datatype/XPN.h"
#include "../datatype/XTN.h"

namespace HL7_24 {

/* Guarantor */
class GT1 : public HL7Segment {
 public:
  GT1() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    GT1_1,
    GT1_2,
    GT1_3,
    GT1_4,
    GT1_5,
    GT1_6,
    GT1_7,
    GT1_8,
    GT1_9,
    GT1_10,
    GT1_11,
    GT1_12,
    GT1_13,
    GT1_14,
    GT1_15,
    GT1_16,
    GT1_17,
    GT1_18,
    GT1_19,
    GT1_20,
    GT1_21,
    GT1_22,
    GT1_23,
    GT1_24,
    GT1_25,
    GT1_26,
    GT1_27,
    GT1_28,
    GT1_29,
    GT1_30,
    GT1_31,
    GT1_32,
    GT1_33,
    GT1_34,
    GT1_35,
    GT1_36,
    GT1_37,
    GT1_38,
    GT1_39,
    GT1_40,
    GT1_41,
    GT1_42,
    GT1_43,
    GT1_44,
    GT1_45,
    GT1_46,
    GT1_47,
    GT1_48,
    GT1_49,
    GT1_50,
    GT1_51,
    GT1_52,
    GT1_53,
    GT1_54,
    GT1_55,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "GT1"; }
  GT1* create() const { return new GT1(); }

 private:
  void init() {
    setName("GT1");
    /* Init members */
    addObject<SI>(GT1_1, "GT1.1", HL7::initialized, HL7::repetition_off);
    addObject<CX>(GT1_2, "GT1.2", HL7::optional, HL7::repetition_on);
    addObject<XPN>(GT1_3, "GT1.3", HL7::initialized, HL7::repetition_on);
    addObject<XPN>(GT1_4, "GT1.4", HL7::optional, HL7::repetition_on);
    addObject<XAD>(GT1_5, "GT1.5", HL7::optional, HL7::repetition_on);
    addObject<XTN>(GT1_6, "GT1.6", HL7::optional, HL7::repetition_on);
    addObject<XTN>(GT1_7, "GT1.7", HL7::optional, HL7::repetition_on);
    addObject<TS>(GT1_8, "GT1.8", HL7::optional, HL7::repetition_off);
    addObject<IS>(GT1_9, "GT1.9", HL7::optional, HL7::repetition_off);
    addObject<IS>(GT1_10, "GT1.10", HL7::optional, HL7::repetition_off);
    addObject<CE_0063>(GT1_11, "GT1.11", HL7::optional, HL7::repetition_off);
    addObject<ST>(GT1_12, "GT1.12", HL7::optional, HL7::repetition_off);
    addObject<DT>(GT1_13, "GT1.13", HL7::optional, HL7::repetition_off);
    addObject<DT>(GT1_14, "GT1.14", HL7::optional, HL7::repetition_off);
    addObject<NM>(GT1_15, "GT1.15", HL7::optional, HL7::repetition_off);
    addObject<XPN>(GT1_16, "GT1.16", HL7::optional, HL7::repetition_on);
    addObject<XAD>(GT1_17, "GT1.17", HL7::optional, HL7::repetition_on);
    addObject<XTN>(GT1_18, "GT1.18", HL7::optional, HL7::repetition_on);
    addObject<CX>(GT1_19, "GT1.19", HL7::optional, HL7::repetition_on);
    addObject<IS>(GT1_20, "GT1.20", HL7::optional, HL7::repetition_off);
    addObject<XON>(GT1_21, "GT1.21", HL7::optional, HL7::repetition_on);
    addObject<ID>(GT1_22, "GT1.22", HL7::optional, HL7::repetition_off);
    addObject<CE_0341>(GT1_23, "GT1.23", HL7::optional, HL7::repetition_off);
    addObject<TS>(GT1_24, "GT1.24", HL7::optional, HL7::repetition_off);
    addObject<ID>(GT1_25, "GT1.25", HL7::optional, HL7::repetition_off);
    addObject<CE_0218>(GT1_26, "GT1.26", HL7::optional, HL7::repetition_off);
    addObject<CP>(GT1_27, "GT1.27", HL7::optional, HL7::repetition_off);
    addObject<NM>(GT1_28, "GT1.28", HL7::optional, HL7::repetition_off);
    addObject<CX>(GT1_29, "GT1.29", HL7::optional, HL7::repetition_on);
    addObject<CE_0002>(GT1_30, "GT1.30", HL7::optional, HL7::repetition_off);
    addObject<DT>(GT1_31, "GT1.31", HL7::optional, HL7::repetition_off);
    addObject<DT>(GT1_32, "GT1.32", HL7::optional, HL7::repetition_off);
    addObject<IS>(GT1_33, "GT1.33", HL7::optional, HL7::repetition_off);
    addObject<IS>(GT1_34, "GT1.34", HL7::optional, HL7::repetition_on);
    addObject<CE_0171>(GT1_35, "GT1.35", HL7::optional, HL7::repetition_on);
    addObject<CE_0296>(GT1_36, "GT1.36", HL7::optional, HL7::repetition_off);
    addObject<IS>(GT1_37, "GT1.37", HL7::optional, HL7::repetition_off);
    addObject<CE_0215>(GT1_38, "GT1.38", HL7::optional, HL7::repetition_off);
    addObject<ID>(GT1_39, "GT1.39", HL7::optional, HL7::repetition_off);
    addObject<IS>(GT1_40, "GT1.40", HL7::optional, HL7::repetition_off);
    addObject<CE_0006>(GT1_41, "GT1.41", HL7::optional, HL7::repetition_off);
    addObject<XPN>(GT1_42, "GT1.42", HL7::optional, HL7::repetition_on);
    addObject<CE_0212>(GT1_43, "GT1.43", HL7::optional, HL7::repetition_off);
    addObject<CE_0189>(GT1_44, "GT1.44", HL7::optional, HL7::repetition_on);
    addObject<XPN>(GT1_45, "GT1.45", HL7::optional, HL7::repetition_on);
    addObject<XTN>(GT1_46, "GT1.46", HL7::optional, HL7::repetition_on);
    addObject<CE_0222>(GT1_47, "GT1.47", HL7::optional, HL7::repetition_off);
    addObject<IS>(GT1_48, "GT1.48", HL7::optional, HL7::repetition_off);
    addObject<ST>(GT1_49, "GT1.49", HL7::optional, HL7::repetition_off);
    addObject<JCC>(GT1_50, "GT1.50", HL7::optional, HL7::repetition_off);
    addObject<XON>(GT1_51, "GT1.51", HL7::optional, HL7::repetition_on);
    addObject<IS>(GT1_52, "GT1.52", HL7::optional, HL7::repetition_off);
    addObject<IS>(GT1_53, "GT1.53", HL7::optional, HL7::repetition_off);
    addObject<FC>(GT1_54, "GT1.54", HL7::optional, HL7::repetition_off);
    addObject<CE_0005>(GT1_55, "GT1.55", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - GT1
   */

  SI* getGT1_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, GT1_1);
  }

  SI* getSetIDGT1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, GT1_1);
  }

  bool isGT1_1(size_t index = 0) {
    try {
      return this->getObject(index, GT1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDGT1(size_t index = 0) {
    try {
      return this->getObject(index, GT1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Number
   */

  CX* getGT1_2(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, GT1_2);
  }

  CX* getGuarantorNumber(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, GT1_2);
  }

  bool isGT1_2(size_t index = 0) {
    try {
      return this->getObject(index, GT1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorNumber(size_t index = 0) {
    try {
      return this->getObject(index, GT1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Name
   */

  XPN* getGT1_3(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, GT1_3);
  }

  XPN* getGuarantorName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, GT1_3);
  }

  bool isGT1_3(size_t index = 0) {
    try {
      return this->getObject(index, GT1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorName(size_t index = 0) {
    try {
      return this->getObject(index, GT1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Spouse Name
   */

  XPN* getGT1_4(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, GT1_4);
  }

  XPN* getGuarantorSpouseName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, GT1_4);
  }

  bool isGT1_4(size_t index = 0) {
    try {
      return this->getObject(index, GT1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorSpouseName(size_t index = 0) {
    try {
      return this->getObject(index, GT1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Address
   */

  XAD* getGT1_5(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, GT1_5);
  }

  XAD* getGuarantorAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, GT1_5);
  }

  bool isGT1_5(size_t index = 0) {
    try {
      return this->getObject(index, GT1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorAddress(size_t index = 0) {
    try {
      return this->getObject(index, GT1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Ph Num - Home
   */

  XTN* getGT1_6(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, GT1_6);
  }

  XTN* getGuarantorPhNumHome(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, GT1_6);
  }

  bool isGT1_6(size_t index = 0) {
    try {
      return this->getObject(index, GT1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorPhNumHome(size_t index = 0) {
    try {
      return this->getObject(index, GT1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Ph Num - Business
   */

  XTN* getGT1_7(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, GT1_7);
  }

  XTN* getGuarantorPhNumBusiness(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, GT1_7);
  }

  bool isGT1_7(size_t index = 0) {
    try {
      return this->getObject(index, GT1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorPhNumBusiness(size_t index = 0) {
    try {
      return this->getObject(index, GT1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Date/Time Of Birth
   */

  TS* getGT1_8(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, GT1_8);
  }

  TS* getGuarantorDateTimeOfBirth(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, GT1_8);
  }

  bool isGT1_8(size_t index = 0) {
    try {
      return this->getObject(index, GT1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorDateTimeOfBirth(size_t index = 0) {
    try {
      return this->getObject(index, GT1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Administrative Sex
   */

  IS* getGT1_9(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GT1_9);
  }

  IS* getGuarantorAdministrativeSex(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GT1_9);
  }

  bool isGT1_9(size_t index = 0) {
    try {
      return this->getObject(index, GT1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorAdministrativeSex(size_t index = 0) {
    try {
      return this->getObject(index, GT1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Type
   */

  IS* getGT1_10(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GT1_10);
  }

  IS* getGuarantorType(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GT1_10);
  }

  bool isGT1_10(size_t index = 0) {
    try {
      return this->getObject(index, GT1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorType(size_t index = 0) {
    try {
      return this->getObject(index, GT1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Relationship
   */

  CE_0063* getGT1_11(size_t index = 0) {
    return (CE_0063*)this->getObjectSafe(index, GT1_11);
  }

  CE_0063* getGuarantorRelationship(size_t index = 0) {
    return (CE_0063*)this->getObjectSafe(index, GT1_11);
  }

  bool isGT1_11(size_t index = 0) {
    try {
      return this->getObject(index, GT1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorRelationship(size_t index = 0) {
    try {
      return this->getObject(index, GT1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor SSN
   */

  ST* getGT1_12(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, GT1_12);
  }

  ST* getGuarantorSSN(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, GT1_12);
  }

  bool isGT1_12(size_t index = 0) {
    try {
      return this->getObject(index, GT1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorSSN(size_t index = 0) {
    try {
      return this->getObject(index, GT1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Date - Begin
   */

  DT* getGT1_13(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, GT1_13);
  }

  DT* getGuarantorDateBegin(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, GT1_13);
  }

  bool isGT1_13(size_t index = 0) {
    try {
      return this->getObject(index, GT1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorDateBegin(size_t index = 0) {
    try {
      return this->getObject(index, GT1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Date - End
   */

  DT* getGT1_14(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, GT1_14);
  }

  DT* getGuarantorDateEnd(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, GT1_14);
  }

  bool isGT1_14(size_t index = 0) {
    try {
      return this->getObject(index, GT1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorDateEnd(size_t index = 0) {
    try {
      return this->getObject(index, GT1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Priority
   */

  NM* getGT1_15(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, GT1_15);
  }

  NM* getGuarantorPriority(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, GT1_15);
  }

  bool isGT1_15(size_t index = 0) {
    try {
      return this->getObject(index, GT1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorPriority(size_t index = 0) {
    try {
      return this->getObject(index, GT1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Employer Name
   */

  XPN* getGT1_16(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, GT1_16);
  }

  XPN* getGuarantorEmployerName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, GT1_16);
  }

  bool isGT1_16(size_t index = 0) {
    try {
      return this->getObject(index, GT1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorEmployerName(size_t index = 0) {
    try {
      return this->getObject(index, GT1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Employer Address
   */

  XAD* getGT1_17(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, GT1_17);
  }

  XAD* getGuarantorEmployerAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, GT1_17);
  }

  bool isGT1_17(size_t index = 0) {
    try {
      return this->getObject(index, GT1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorEmployerAddress(size_t index = 0) {
    try {
      return this->getObject(index, GT1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Employer Phone Number
   */

  XTN* getGT1_18(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, GT1_18);
  }

  XTN* getGuarantorEmployerPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, GT1_18);
  }

  bool isGT1_18(size_t index = 0) {
    try {
      return this->getObject(index, GT1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorEmployerPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, GT1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Employee ID Number
   */

  CX* getGT1_19(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, GT1_19);
  }

  CX* getGuarantorEmployeeIDNumber(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, GT1_19);
  }

  bool isGT1_19(size_t index = 0) {
    try {
      return this->getObject(index, GT1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorEmployeeIDNumber(size_t index = 0) {
    try {
      return this->getObject(index, GT1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Employment Status
   */

  IS* getGT1_20(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GT1_20);
  }

  IS* getGuarantorEmploymentStatus(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GT1_20);
  }

  bool isGT1_20(size_t index = 0) {
    try {
      return this->getObject(index, GT1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorEmploymentStatus(size_t index = 0) {
    try {
      return this->getObject(index, GT1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Organization Name
   */

  XON* getGT1_21(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, GT1_21);
  }

  XON* getGuarantorOrganizationName(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, GT1_21);
  }

  bool isGT1_21(size_t index = 0) {
    try {
      return this->getObject(index, GT1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorOrganizationName(size_t index = 0) {
    try {
      return this->getObject(index, GT1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Billing Hold Flag
   */

  ID* getGT1_22(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, GT1_22);
  }

  ID* getGuarantorBillingHoldFlag(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, GT1_22);
  }

  bool isGT1_22(size_t index = 0) {
    try {
      return this->getObject(index, GT1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorBillingHoldFlag(size_t index = 0) {
    try {
      return this->getObject(index, GT1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Credit Rating Code
   */

  CE_0341* getGT1_23(size_t index = 0) {
    return (CE_0341*)this->getObjectSafe(index, GT1_23);
  }

  CE_0341* getGuarantorCreditRatingCode(size_t index = 0) {
    return (CE_0341*)this->getObjectSafe(index, GT1_23);
  }

  bool isGT1_23(size_t index = 0) {
    try {
      return this->getObject(index, GT1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorCreditRatingCode(size_t index = 0) {
    try {
      return this->getObject(index, GT1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Death Date And Time
   */

  TS* getGT1_24(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, GT1_24);
  }

  TS* getGuarantorDeathDateAndTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, GT1_24);
  }

  bool isGT1_24(size_t index = 0) {
    try {
      return this->getObject(index, GT1_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorDeathDateAndTime(size_t index = 0) {
    try {
      return this->getObject(index, GT1_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Death Flag
   */

  ID* getGT1_25(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, GT1_25);
  }

  ID* getGuarantorDeathFlag(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, GT1_25);
  }

  bool isGT1_25(size_t index = 0) {
    try {
      return this->getObject(index, GT1_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorDeathFlag(size_t index = 0) {
    try {
      return this->getObject(index, GT1_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Charge Adjustment Code
   */

  CE_0218* getGT1_26(size_t index = 0) {
    return (CE_0218*)this->getObjectSafe(index, GT1_26);
  }

  CE_0218* getGuarantorChargeAdjustmentCode(size_t index = 0) {
    return (CE_0218*)this->getObjectSafe(index, GT1_26);
  }

  bool isGT1_26(size_t index = 0) {
    try {
      return this->getObject(index, GT1_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorChargeAdjustmentCode(size_t index = 0) {
    try {
      return this->getObject(index, GT1_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Household Annual Income
   */

  CP* getGT1_27(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, GT1_27);
  }

  CP* getGuarantorHouseholdAnnualIncome(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, GT1_27);
  }

  bool isGT1_27(size_t index = 0) {
    try {
      return this->getObject(index, GT1_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorHouseholdAnnualIncome(size_t index = 0) {
    try {
      return this->getObject(index, GT1_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Household Size
   */

  NM* getGT1_28(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, GT1_28);
  }

  NM* getGuarantorHouseholdSize(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, GT1_28);
  }

  bool isGT1_28(size_t index = 0) {
    try {
      return this->getObject(index, GT1_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorHouseholdSize(size_t index = 0) {
    try {
      return this->getObject(index, GT1_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Employer ID Number
   */

  CX* getGT1_29(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, GT1_29);
  }

  CX* getGuarantorEmployerIDNumber(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, GT1_29);
  }

  bool isGT1_29(size_t index = 0) {
    try {
      return this->getObject(index, GT1_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorEmployerIDNumber(size_t index = 0) {
    try {
      return this->getObject(index, GT1_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Marital Status Code
   */

  CE_0002* getGT1_30(size_t index = 0) {
    return (CE_0002*)this->getObjectSafe(index, GT1_30);
  }

  CE_0002* getGuarantorMaritalStatusCode(size_t index = 0) {
    return (CE_0002*)this->getObjectSafe(index, GT1_30);
  }

  bool isGT1_30(size_t index = 0) {
    try {
      return this->getObject(index, GT1_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorMaritalStatusCode(size_t index = 0) {
    try {
      return this->getObject(index, GT1_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Hire Effective Date
   */

  DT* getGT1_31(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, GT1_31);
  }

  DT* getGuarantorHireEffectiveDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, GT1_31);
  }

  bool isGT1_31(size_t index = 0) {
    try {
      return this->getObject(index, GT1_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorHireEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, GT1_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Employment Stop Date
   */

  DT* getGT1_32(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, GT1_32);
  }

  DT* getEmploymentStopDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, GT1_32);
  }

  bool isGT1_32(size_t index = 0) {
    try {
      return this->getObject(index, GT1_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEmploymentStopDate(size_t index = 0) {
    try {
      return this->getObject(index, GT1_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Living Dependency
   */

  IS* getGT1_33(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GT1_33);
  }

  IS* getLivingDependency(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GT1_33);
  }

  bool isGT1_33(size_t index = 0) {
    try {
      return this->getObject(index, GT1_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLivingDependency(size_t index = 0) {
    try {
      return this->getObject(index, GT1_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ambulatory Status
   */

  IS* getGT1_34(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GT1_34);
  }

  IS* getAmbulatoryStatus(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GT1_34);
  }

  bool isGT1_34(size_t index = 0) {
    try {
      return this->getObject(index, GT1_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAmbulatoryStatus(size_t index = 0) {
    try {
      return this->getObject(index, GT1_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Citizenship
   */

  CE_0171* getGT1_35(size_t index = 0) {
    return (CE_0171*)this->getObjectSafe(index, GT1_35);
  }

  CE_0171* getCitizenship(size_t index = 0) {
    return (CE_0171*)this->getObjectSafe(index, GT1_35);
  }

  bool isGT1_35(size_t index = 0) {
    try {
      return this->getObject(index, GT1_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCitizenship(size_t index = 0) {
    try {
      return this->getObject(index, GT1_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Language
   */

  CE_0296* getGT1_36(size_t index = 0) {
    return (CE_0296*)this->getObjectSafe(index, GT1_36);
  }

  CE_0296* getPrimaryLanguage(size_t index = 0) {
    return (CE_0296*)this->getObjectSafe(index, GT1_36);
  }

  bool isGT1_36(size_t index = 0) {
    try {
      return this->getObject(index, GT1_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryLanguage(size_t index = 0) {
    try {
      return this->getObject(index, GT1_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Living Arrangement
   */

  IS* getGT1_37(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GT1_37);
  }

  IS* getLivingArrangement(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GT1_37);
  }

  bool isGT1_37(size_t index = 0) {
    try {
      return this->getObject(index, GT1_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLivingArrangement(size_t index = 0) {
    try {
      return this->getObject(index, GT1_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Publicity Code
   */

  CE_0215* getGT1_38(size_t index = 0) {
    return (CE_0215*)this->getObjectSafe(index, GT1_38);
  }

  CE_0215* getPublicityCode(size_t index = 0) {
    return (CE_0215*)this->getObjectSafe(index, GT1_38);
  }

  bool isGT1_38(size_t index = 0) {
    try {
      return this->getObject(index, GT1_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPublicityCode(size_t index = 0) {
    try {
      return this->getObject(index, GT1_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Protection Indicator
   */

  ID* getGT1_39(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, GT1_39);
  }

  ID* getProtectionIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, GT1_39);
  }

  bool isGT1_39(size_t index = 0) {
    try {
      return this->getObject(index, GT1_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProtectionIndicator(size_t index = 0) {
    try {
      return this->getObject(index, GT1_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Student Indicator
   */

  IS* getGT1_40(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GT1_40);
  }

  IS* getStudentIndicator(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GT1_40);
  }

  bool isGT1_40(size_t index = 0) {
    try {
      return this->getObject(index, GT1_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStudentIndicator(size_t index = 0) {
    try {
      return this->getObject(index, GT1_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Religion
   */

  CE_0006* getGT1_41(size_t index = 0) {
    return (CE_0006*)this->getObjectSafe(index, GT1_41);
  }

  CE_0006* getReligion(size_t index = 0) {
    return (CE_0006*)this->getObjectSafe(index, GT1_41);
  }

  bool isGT1_41(size_t index = 0) {
    try {
      return this->getObject(index, GT1_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReligion(size_t index = 0) {
    try {
      return this->getObject(index, GT1_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Mother's Maiden Name
   */

  XPN* getGT1_42(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, GT1_42);
  }

  XPN* getMotherSMaidenName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, GT1_42);
  }

  bool isGT1_42(size_t index = 0) {
    try {
      return this->getObject(index, GT1_42) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMotherSMaidenName(size_t index = 0) {
    try {
      return this->getObject(index, GT1_42) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Nationality
   */

  CE_0212* getGT1_43(size_t index = 0) {
    return (CE_0212*)this->getObjectSafe(index, GT1_43);
  }

  CE_0212* getNationality(size_t index = 0) {
    return (CE_0212*)this->getObjectSafe(index, GT1_43);
  }

  bool isGT1_43(size_t index = 0) {
    try {
      return this->getObject(index, GT1_43) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNationality(size_t index = 0) {
    try {
      return this->getObject(index, GT1_43) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ethnic Group
   */

  CE_0189* getGT1_44(size_t index = 0) {
    return (CE_0189*)this->getObjectSafe(index, GT1_44);
  }

  CE_0189* getEthnicGroup(size_t index = 0) {
    return (CE_0189*)this->getObjectSafe(index, GT1_44);
  }

  bool isGT1_44(size_t index = 0) {
    try {
      return this->getObject(index, GT1_44) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEthnicGroup(size_t index = 0) {
    try {
      return this->getObject(index, GT1_44) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact Person's Name
   */

  XPN* getGT1_45(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, GT1_45);
  }

  XPN* getContactPersonSName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, GT1_45);
  }

  bool isGT1_45(size_t index = 0) {
    try {
      return this->getObject(index, GT1_45) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactPersonSName(size_t index = 0) {
    try {
      return this->getObject(index, GT1_45) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact Person's Telephone Number
   */

  XTN* getGT1_46(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, GT1_46);
  }

  XTN* getContactPersonSTelephoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, GT1_46);
  }

  bool isGT1_46(size_t index = 0) {
    try {
      return this->getObject(index, GT1_46) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactPersonSTelephoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, GT1_46) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact Reason
   */

  CE_0222* getGT1_47(size_t index = 0) {
    return (CE_0222*)this->getObjectSafe(index, GT1_47);
  }

  CE_0222* getContactReason(size_t index = 0) {
    return (CE_0222*)this->getObjectSafe(index, GT1_47);
  }

  bool isGT1_47(size_t index = 0) {
    try {
      return this->getObject(index, GT1_47) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactReason(size_t index = 0) {
    try {
      return this->getObject(index, GT1_47) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact Relationship
   */

  IS* getGT1_48(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GT1_48);
  }

  IS* getContactRelationship(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GT1_48);
  }

  bool isGT1_48(size_t index = 0) {
    try {
      return this->getObject(index, GT1_48) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactRelationship(size_t index = 0) {
    try {
      return this->getObject(index, GT1_48) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Job Title
   */

  ST* getGT1_49(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, GT1_49);
  }

  ST* getJobTitle(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, GT1_49);
  }

  bool isGT1_49(size_t index = 0) {
    try {
      return this->getObject(index, GT1_49) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isJobTitle(size_t index = 0) {
    try {
      return this->getObject(index, GT1_49) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Job Code/Class
   */

  JCC* getGT1_50(size_t index = 0) {
    return (JCC*)this->getObjectSafe(index, GT1_50);
  }

  JCC* getJobCodeClass(size_t index = 0) {
    return (JCC*)this->getObjectSafe(index, GT1_50);
  }

  bool isGT1_50(size_t index = 0) {
    try {
      return this->getObject(index, GT1_50) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isJobCodeClass(size_t index = 0) {
    try {
      return this->getObject(index, GT1_50) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Employer's Organization Name
   */

  XON* getGT1_51(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, GT1_51);
  }

  XON* getGuarantorEmployerSOrganizationName(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, GT1_51);
  }

  bool isGT1_51(size_t index = 0) {
    try {
      return this->getObject(index, GT1_51) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorEmployerSOrganizationName(size_t index = 0) {
    try {
      return this->getObject(index, GT1_51) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Handicap
   */

  IS* getGT1_52(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GT1_52);
  }

  IS* getHandicap(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GT1_52);
  }

  bool isGT1_52(size_t index = 0) {
    try {
      return this->getObject(index, GT1_52) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHandicap(size_t index = 0) {
    try {
      return this->getObject(index, GT1_52) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Job Status
   */

  IS* getGT1_53(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GT1_53);
  }

  IS* getJobStatus(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GT1_53);
  }

  bool isGT1_53(size_t index = 0) {
    try {
      return this->getObject(index, GT1_53) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isJobStatus(size_t index = 0) {
    try {
      return this->getObject(index, GT1_53) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Financial Class
   */

  FC* getGT1_54(size_t index = 0) {
    return (FC*)this->getObjectSafe(index, GT1_54);
  }

  FC* getGuarantorFinancialClass(size_t index = 0) {
    return (FC*)this->getObjectSafe(index, GT1_54);
  }

  bool isGT1_54(size_t index = 0) {
    try {
      return this->getObject(index, GT1_54) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorFinancialClass(size_t index = 0) {
    try {
      return this->getObject(index, GT1_54) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor Race
   */

  CE_0005* getGT1_55(size_t index = 0) {
    return (CE_0005*)this->getObjectSafe(index, GT1_55);
  }

  CE_0005* getGuarantorRace(size_t index = 0) {
    return (CE_0005*)this->getObjectSafe(index, GT1_55);
  }

  bool isGT1_55(size_t index = 0) {
    try {
      return this->getObject(index, GT1_55) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorRace(size_t index = 0) {
    try {
      return this->getObject(index, GT1_55) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of GT1 */

} /* End of namespace HL7_24 */
#endif /* __GT1_v24_H__ */
