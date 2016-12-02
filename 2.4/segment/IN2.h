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


#ifndef __IN2_v24_H__
#define __IN2_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0002.h"
#include "../datatype/CE_0005.h"
#include "../datatype/CE_0006.h"
#include "../datatype/CE_0063.h"
#include "../datatype/CE_0171.h"
#include "../datatype/CE_0189.h"
#include "../datatype/CE_0212.h"
#include "../datatype/CE_0215.h"
#include "../datatype/CE_0296.h"
#include "../datatype/CE_0342.h"
#include "../datatype/CE_0343.h"
#include "../datatype/CE_0344.h"
#include "../datatype/CX.h"
#include "../datatype/DDI.h"
#include "../datatype/DT.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/JCC.h"
#include "../datatype/PTA.h"
#include "../datatype/RMC.h"
#include "../datatype/ST.h"
#include "../datatype/XCN.h"
#include "../datatype/XON.h"
#include "../datatype/XPN.h"
#include "../datatype/XTN.h"

namespace HL7_24 {

/* Insurance Additional Information */
class IN2 : public HL7Segment {
 public:
  IN2() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    IN2_1,
    IN2_2,
    IN2_3,
    IN2_4,
    IN2_5,
    IN2_6,
    IN2_7,
    IN2_8,
    IN2_9,
    IN2_10,
    IN2_11,
    IN2_12,
    IN2_13,
    IN2_14,
    IN2_15,
    IN2_16,
    IN2_17,
    IN2_18,
    IN2_19,
    IN2_20,
    IN2_21,
    IN2_22,
    IN2_23,
    IN2_24,
    IN2_25,
    IN2_26,
    IN2_27,
    IN2_28,
    IN2_29,
    IN2_30,
    IN2_31,
    IN2_32,
    IN2_33,
    IN2_34,
    IN2_35,
    IN2_36,
    IN2_37,
    IN2_38,
    IN2_39,
    IN2_40,
    IN2_41,
    IN2_42,
    IN2_43,
    IN2_44,
    IN2_45,
    IN2_46,
    IN2_47,
    IN2_48,
    IN2_49,
    IN2_50,
    IN2_51,
    IN2_52,
    IN2_53,
    IN2_54,
    IN2_55,
    IN2_56,
    IN2_57,
    IN2_58,
    IN2_59,
    IN2_60,
    IN2_61,
    IN2_62,
    IN2_63,
    IN2_64,
    IN2_65,
    IN2_66,
    IN2_67,
    IN2_68,
    IN2_69,
    IN2_70,
    IN2_71,
    IN2_72,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "IN2"; }
  IN2* create() const { return new IN2(); }

 private:
  void init() {
    setName("IN2");
    /* Init members */
    addObject<CX>(IN2_1, "IN2.1", HL7::optional, HL7::repetition_on);
    addObject<ST>(IN2_2, "IN2.2", HL7::optional, HL7::repetition_off);
    addObject<XCN>(IN2_3, "IN2.3", HL7::optional, HL7::repetition_on);
    addObject<IS>(IN2_4, "IN2.4", HL7::optional, HL7::repetition_off);
    addObject<IS>(IN2_5, "IN2.5", HL7::optional, HL7::repetition_on);
    addObject<ST>(IN2_6, "IN2.6", HL7::optional, HL7::repetition_off);
    addObject<XPN>(IN2_7, "IN2.7", HL7::optional, HL7::repetition_on);
    addObject<ST>(IN2_8, "IN2.8", HL7::optional, HL7::repetition_off);
    addObject<XPN>(IN2_9, "IN2.9", HL7::optional, HL7::repetition_on);
    addObject<ST>(IN2_10, "IN2.10", HL7::optional, HL7::repetition_off);
    addObject<CE_0342>(IN2_11, "IN2.11", HL7::optional, HL7::repetition_off);
    addObject<ST>(IN2_12, "IN2.12", HL7::optional, HL7::repetition_off);
    addObject<ST>(IN2_13, "IN2.13", HL7::optional, HL7::repetition_off);
    addObject<IS>(IN2_14, "IN2.14", HL7::optional, HL7::repetition_off);
    addObject<IS>(IN2_15, "IN2.15", HL7::optional, HL7::repetition_off);
    addObject<IS>(IN2_16, "IN2.16", HL7::optional, HL7::repetition_off);
    addObject<DT>(IN2_17, "IN2.17", HL7::optional, HL7::repetition_off);
    addObject<ID>(IN2_18, "IN2.18", HL7::optional, HL7::repetition_off);
    addObject<ID>(IN2_19, "IN2.19", HL7::optional, HL7::repetition_off);
    addObject<ID>(IN2_20, "IN2.20", HL7::optional, HL7::repetition_off);
    addObject<ST>(IN2_21, "IN2.21", HL7::optional, HL7::repetition_off);
    addObject<XPN>(IN2_22, "IN2.22", HL7::optional, HL7::repetition_on);
    addObject<ST>(IN2_23, "IN2.23", HL7::optional, HL7::repetition_off);
    addObject<IS>(IN2_24, "IN2.24", HL7::optional, HL7::repetition_on);
    addObject<CX>(IN2_25, "IN2.25", HL7::optional, HL7::repetition_on);
    addObject<CX>(IN2_26, "IN2.26", HL7::optional, HL7::repetition_on);
    addObject<IS>(IN2_27, "IN2.27", HL7::optional, HL7::repetition_off);
    addObject<RMC>(IN2_28, "IN2.28", HL7::optional, HL7::repetition_on);
    addObject<PTA>(IN2_29, "IN2.29", HL7::optional, HL7::repetition_on);
    addObject<DDI>(IN2_30, "IN2.30", HL7::optional, HL7::repetition_off);
    addObject<IS>(IN2_31, "IN2.31", HL7::optional, HL7::repetition_off);
    addObject<IS>(IN2_32, "IN2.32", HL7::optional, HL7::repetition_on);
    addObject<CE_0171>(IN2_33, "IN2.33", HL7::optional, HL7::repetition_on);
    addObject<CE_0296>(IN2_34, "IN2.34", HL7::optional, HL7::repetition_off);
    addObject<IS>(IN2_35, "IN2.35", HL7::optional, HL7::repetition_off);
    addObject<CE_0215>(IN2_36, "IN2.36", HL7::optional, HL7::repetition_off);
    addObject<ID>(IN2_37, "IN2.37", HL7::optional, HL7::repetition_off);
    addObject<IS>(IN2_38, "IN2.38", HL7::optional, HL7::repetition_off);
    addObject<CE_0006>(IN2_39, "IN2.39", HL7::optional, HL7::repetition_off);
    addObject<XPN>(IN2_40, "IN2.40", HL7::optional, HL7::repetition_on);
    addObject<CE_0212>(IN2_41, "IN2.41", HL7::optional, HL7::repetition_off);
    addObject<CE_0189>(IN2_42, "IN2.42", HL7::optional, HL7::repetition_on);
    addObject<CE_0002>(IN2_43, "IN2.43", HL7::optional, HL7::repetition_on);
    addObject<DT>(IN2_44, "IN2.44", HL7::optional, HL7::repetition_off);
    addObject<DT>(IN2_45, "IN2.45", HL7::optional, HL7::repetition_off);
    addObject<ST>(IN2_46, "IN2.46", HL7::optional, HL7::repetition_off);
    addObject<JCC>(IN2_47, "IN2.47", HL7::optional, HL7::repetition_off);
    addObject<IS>(IN2_48, "IN2.48", HL7::optional, HL7::repetition_off);
    addObject<XPN>(IN2_49, "IN2.49", HL7::optional, HL7::repetition_on);
    addObject<XTN>(IN2_50, "IN2.50", HL7::optional, HL7::repetition_on);
    addObject<IS>(IN2_51, "IN2.51", HL7::optional, HL7::repetition_off);
    addObject<XPN>(IN2_52, "IN2.52", HL7::optional, HL7::repetition_on);
    addObject<XTN>(IN2_53, "IN2.53", HL7::optional, HL7::repetition_on);
    addObject<IS>(IN2_54, "IN2.54", HL7::optional, HL7::repetition_on);
    addObject<DT>(IN2_55, "IN2.55", HL7::optional, HL7::repetition_off);
    addObject<DT>(IN2_56, "IN2.56", HL7::optional, HL7::repetition_on);
    addObject<IS>(IN2_57, "IN2.57", HL7::optional, HL7::repetition_off);
    addObject<XTN>(IN2_58, "IN2.58", HL7::optional, HL7::repetition_off);
    addObject<IS>(IN2_59, "IN2.59", HL7::optional, HL7::repetition_off);
    addObject<IS>(IN2_60, "IN2.60", HL7::optional, HL7::repetition_off);
    addObject<CX>(IN2_61, "IN2.61", HL7::optional, HL7::repetition_off);
    addObject<CE_0063>(IN2_62, "IN2.62", HL7::optional, HL7::repetition_off);
    addObject<XTN>(IN2_63, "IN2.63", HL7::optional, HL7::repetition_on);
    addObject<XTN>(IN2_64, "IN2.64", HL7::optional, HL7::repetition_on);
    addObject<CE_0343>(IN2_65, "IN2.65", HL7::optional, HL7::repetition_off);
    addObject<ID>(IN2_66, "IN2.66", HL7::optional, HL7::repetition_off);
    addObject<ID>(IN2_67, "IN2.67", HL7::optional, HL7::repetition_off);
    addObject<ID>(IN2_68, "IN2.68", HL7::optional, HL7::repetition_off);
    addObject<XON>(IN2_69, "IN2.69", HL7::optional, HL7::repetition_on);
    addObject<XON>(IN2_70, "IN2.70", HL7::optional, HL7::repetition_on);
    addObject<CE_0005>(IN2_71, "IN2.71", HL7::optional, HL7::repetition_on);
    addObject<CE_0344>(IN2_72, "IN2.72", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Insured's Employee ID
   */

  CX* getIN2_1(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IN2_1);
  }

  CX* getInsuredSEmployeeID(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IN2_1);
  }

  bool isIN2_1(size_t index = 0) {
    try {
      return this->getObject(index, IN2_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredSEmployeeID(size_t index = 0) {
    try {
      return this->getObject(index, IN2_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured's Social Security Number
   */

  ST* getIN2_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_2);
  }

  ST* getInsuredSSocialSecurityNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_2);
  }

  bool isIN2_2(size_t index = 0) {
    try {
      return this->getObject(index, IN2_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredSSocialSecurityNumber(size_t index = 0) {
    try {
      return this->getObject(index, IN2_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured's Employer's Name and ID
   */

  XCN* getIN2_3(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IN2_3);
  }

  XCN* getInsuredSEmployerSNameAndID(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IN2_3);
  }

  bool isIN2_3(size_t index = 0) {
    try {
      return this->getObject(index, IN2_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredSEmployerSNameAndID(size_t index = 0) {
    try {
      return this->getObject(index, IN2_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Employer Information Data
   */

  IS* getIN2_4(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_4);
  }

  IS* getEmployerInformationData(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_4);
  }

  bool isIN2_4(size_t index = 0) {
    try {
      return this->getObject(index, IN2_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEmployerInformationData(size_t index = 0) {
    try {
      return this->getObject(index, IN2_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Mail Claim Party
   */

  IS* getIN2_5(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_5);
  }

  IS* getMailClaimParty(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_5);
  }

  bool isIN2_5(size_t index = 0) {
    try {
      return this->getObject(index, IN2_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMailClaimParty(size_t index = 0) {
    try {
      return this->getObject(index, IN2_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Medicare Health Ins Card Number
   */

  ST* getIN2_6(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_6);
  }

  ST* getMedicareHealthInsCardNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_6);
  }

  bool isIN2_6(size_t index = 0) {
    try {
      return this->getObject(index, IN2_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMedicareHealthInsCardNumber(size_t index = 0) {
    try {
      return this->getObject(index, IN2_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Medicaid Case Name
   */

  XPN* getIN2_7(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN2_7);
  }

  XPN* getMedicaidCaseName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN2_7);
  }

  bool isIN2_7(size_t index = 0) {
    try {
      return this->getObject(index, IN2_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMedicaidCaseName(size_t index = 0) {
    try {
      return this->getObject(index, IN2_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Medicaid Case Number
   */

  ST* getIN2_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_8);
  }

  ST* getMedicaidCaseNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_8);
  }

  bool isIN2_8(size_t index = 0) {
    try {
      return this->getObject(index, IN2_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMedicaidCaseNumber(size_t index = 0) {
    try {
      return this->getObject(index, IN2_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military Sponsor Name
   */

  XPN* getIN2_9(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN2_9);
  }

  XPN* getMilitarySponsorName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN2_9);
  }

  bool isIN2_9(size_t index = 0) {
    try {
      return this->getObject(index, IN2_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitarySponsorName(size_t index = 0) {
    try {
      return this->getObject(index, IN2_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military ID Number
   */

  ST* getIN2_10(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_10);
  }

  ST* getMilitaryIDNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_10);
  }

  bool isIN2_10(size_t index = 0) {
    try {
      return this->getObject(index, IN2_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitaryIDNumber(size_t index = 0) {
    try {
      return this->getObject(index, IN2_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dependent Of Military Recipient
   */

  CE_0342* getIN2_11(size_t index = 0) {
    return (CE_0342*)this->getObjectSafe(index, IN2_11);
  }

  CE_0342* getDependentOfMilitaryRecipient(size_t index = 0) {
    return (CE_0342*)this->getObjectSafe(index, IN2_11);
  }

  bool isIN2_11(size_t index = 0) {
    try {
      return this->getObject(index, IN2_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDependentOfMilitaryRecipient(size_t index = 0) {
    try {
      return this->getObject(index, IN2_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military Organization
   */

  ST* getIN2_12(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_12);
  }

  ST* getMilitaryOrganization(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_12);
  }

  bool isIN2_12(size_t index = 0) {
    try {
      return this->getObject(index, IN2_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitaryOrganization(size_t index = 0) {
    try {
      return this->getObject(index, IN2_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military Station
   */

  ST* getIN2_13(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_13);
  }

  ST* getMilitaryStation(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_13);
  }

  bool isIN2_13(size_t index = 0) {
    try {
      return this->getObject(index, IN2_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitaryStation(size_t index = 0) {
    try {
      return this->getObject(index, IN2_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military Service
   */

  IS* getIN2_14(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_14);
  }

  IS* getMilitaryService(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_14);
  }

  bool isIN2_14(size_t index = 0) {
    try {
      return this->getObject(index, IN2_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitaryService(size_t index = 0) {
    try {
      return this->getObject(index, IN2_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military Rank/Grade
   */

  IS* getIN2_15(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_15);
  }

  IS* getMilitaryRankGrade(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_15);
  }

  bool isIN2_15(size_t index = 0) {
    try {
      return this->getObject(index, IN2_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitaryRankGrade(size_t index = 0) {
    try {
      return this->getObject(index, IN2_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military Status
   */

  IS* getIN2_16(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_16);
  }

  IS* getMilitaryStatus(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_16);
  }

  bool isIN2_16(size_t index = 0) {
    try {
      return this->getObject(index, IN2_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitaryStatus(size_t index = 0) {
    try {
      return this->getObject(index, IN2_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military Retire Date
   */

  DT* getIN2_17(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN2_17);
  }

  DT* getMilitaryRetireDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN2_17);
  }

  bool isIN2_17(size_t index = 0) {
    try {
      return this->getObject(index, IN2_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitaryRetireDate(size_t index = 0) {
    try {
      return this->getObject(index, IN2_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military Non-Avail Cert On File
   */

  ID* getIN2_18(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_18);
  }

  ID* getMilitaryNonAvailCertOnFile(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_18);
  }

  bool isIN2_18(size_t index = 0) {
    try {
      return this->getObject(index, IN2_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitaryNonAvailCertOnFile(size_t index = 0) {
    try {
      return this->getObject(index, IN2_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Baby Coverage
   */

  ID* getIN2_19(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_19);
  }

  ID* getBabyCoverage(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_19);
  }

  bool isIN2_19(size_t index = 0) {
    try {
      return this->getObject(index, IN2_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBabyCoverage(size_t index = 0) {
    try {
      return this->getObject(index, IN2_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Combine Baby Bill
   */

  ID* getIN2_20(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_20);
  }

  ID* getCombineBabyBill(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_20);
  }

  bool isIN2_20(size_t index = 0) {
    try {
      return this->getObject(index, IN2_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCombineBabyBill(size_t index = 0) {
    try {
      return this->getObject(index, IN2_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Blood Deductible
   */

  ST* getIN2_21(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_21);
  }

  ST* getBloodDeductible(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_21);
  }

  bool isIN2_21(size_t index = 0) {
    try {
      return this->getObject(index, IN2_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBloodDeductible(size_t index = 0) {
    try {
      return this->getObject(index, IN2_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Special Coverage Approval Name
   */

  XPN* getIN2_22(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN2_22);
  }

  XPN* getSpecialCoverageApprovalName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN2_22);
  }

  bool isIN2_22(size_t index = 0) {
    try {
      return this->getObject(index, IN2_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialCoverageApprovalName(size_t index = 0) {
    try {
      return this->getObject(index, IN2_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Special Coverage Approval Title
   */

  ST* getIN2_23(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_23);
  }

  ST* getSpecialCoverageApprovalTitle(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_23);
  }

  bool isIN2_23(size_t index = 0) {
    try {
      return this->getObject(index, IN2_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialCoverageApprovalTitle(size_t index = 0) {
    try {
      return this->getObject(index, IN2_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Non-Covered Insurance Code
   */

  IS* getIN2_24(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_24);
  }

  IS* getNonCoveredInsuranceCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_24);
  }

  bool isIN2_24(size_t index = 0) {
    try {
      return this->getObject(index, IN2_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNonCoveredInsuranceCode(size_t index = 0) {
    try {
      return this->getObject(index, IN2_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payor ID
   */

  CX* getIN2_25(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IN2_25);
  }

  CX* getPayorID(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IN2_25);
  }

  bool isIN2_25(size_t index = 0) {
    try {
      return this->getObject(index, IN2_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPayorID(size_t index = 0) {
    try {
      return this->getObject(index, IN2_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payor Subscriber ID
   */

  CX* getIN2_26(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IN2_26);
  }

  CX* getPayorSubscriberID(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IN2_26);
  }

  bool isIN2_26(size_t index = 0) {
    try {
      return this->getObject(index, IN2_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPayorSubscriberID(size_t index = 0) {
    try {
      return this->getObject(index, IN2_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Eligibility Source
   */

  IS* getIN2_27(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_27);
  }

  IS* getEligibilitySource(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_27);
  }

  bool isIN2_27(size_t index = 0) {
    try {
      return this->getObject(index, IN2_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEligibilitySource(size_t index = 0) {
    try {
      return this->getObject(index, IN2_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Room Coverage Type/Amount
   */

  RMC* getIN2_28(size_t index = 0) {
    return (RMC*)this->getObjectSafe(index, IN2_28);
  }

  RMC* getRoomCoverageTypeAmount(size_t index = 0) {
    return (RMC*)this->getObjectSafe(index, IN2_28);
  }

  bool isIN2_28(size_t index = 0) {
    try {
      return this->getObject(index, IN2_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoomCoverageTypeAmount(size_t index = 0) {
    try {
      return this->getObject(index, IN2_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Policy Type/Amount
   */

  PTA* getIN2_29(size_t index = 0) {
    return (PTA*)this->getObjectSafe(index, IN2_29);
  }

  PTA* getPolicyTypeAmount(size_t index = 0) {
    return (PTA*)this->getObjectSafe(index, IN2_29);
  }

  bool isIN2_29(size_t index = 0) {
    try {
      return this->getObject(index, IN2_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPolicyTypeAmount(size_t index = 0) {
    try {
      return this->getObject(index, IN2_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Daily Deductible
   */

  DDI* getIN2_30(size_t index = 0) {
    return (DDI*)this->getObjectSafe(index, IN2_30);
  }

  DDI* getDailyDeductible(size_t index = 0) {
    return (DDI*)this->getObjectSafe(index, IN2_30);
  }

  bool isIN2_30(size_t index = 0) {
    try {
      return this->getObject(index, IN2_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDailyDeductible(size_t index = 0) {
    try {
      return this->getObject(index, IN2_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Living Dependency
   */

  IS* getIN2_31(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_31);
  }

  IS* getLivingDependency(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_31);
  }

  bool isIN2_31(size_t index = 0) {
    try {
      return this->getObject(index, IN2_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLivingDependency(size_t index = 0) {
    try {
      return this->getObject(index, IN2_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ambulatory Status
   */

  IS* getIN2_32(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_32);
  }

  IS* getAmbulatoryStatus(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_32);
  }

  bool isIN2_32(size_t index = 0) {
    try {
      return this->getObject(index, IN2_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAmbulatoryStatus(size_t index = 0) {
    try {
      return this->getObject(index, IN2_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Citizenship
   */

  CE_0171* getIN2_33(size_t index = 0) {
    return (CE_0171*)this->getObjectSafe(index, IN2_33);
  }

  CE_0171* getCitizenship(size_t index = 0) {
    return (CE_0171*)this->getObjectSafe(index, IN2_33);
  }

  bool isIN2_33(size_t index = 0) {
    try {
      return this->getObject(index, IN2_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCitizenship(size_t index = 0) {
    try {
      return this->getObject(index, IN2_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Language
   */

  CE_0296* getIN2_34(size_t index = 0) {
    return (CE_0296*)this->getObjectSafe(index, IN2_34);
  }

  CE_0296* getPrimaryLanguage(size_t index = 0) {
    return (CE_0296*)this->getObjectSafe(index, IN2_34);
  }

  bool isIN2_34(size_t index = 0) {
    try {
      return this->getObject(index, IN2_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryLanguage(size_t index = 0) {
    try {
      return this->getObject(index, IN2_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Living Arrangement
   */

  IS* getIN2_35(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_35);
  }

  IS* getLivingArrangement(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_35);
  }

  bool isIN2_35(size_t index = 0) {
    try {
      return this->getObject(index, IN2_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLivingArrangement(size_t index = 0) {
    try {
      return this->getObject(index, IN2_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Publicity Code
   */

  CE_0215* getIN2_36(size_t index = 0) {
    return (CE_0215*)this->getObjectSafe(index, IN2_36);
  }

  CE_0215* getPublicityCode(size_t index = 0) {
    return (CE_0215*)this->getObjectSafe(index, IN2_36);
  }

  bool isIN2_36(size_t index = 0) {
    try {
      return this->getObject(index, IN2_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPublicityCode(size_t index = 0) {
    try {
      return this->getObject(index, IN2_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Protection Indicator
   */

  ID* getIN2_37(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_37);
  }

  ID* getProtectionIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_37);
  }

  bool isIN2_37(size_t index = 0) {
    try {
      return this->getObject(index, IN2_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProtectionIndicator(size_t index = 0) {
    try {
      return this->getObject(index, IN2_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Student Indicator
   */

  IS* getIN2_38(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_38);
  }

  IS* getStudentIndicator(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_38);
  }

  bool isIN2_38(size_t index = 0) {
    try {
      return this->getObject(index, IN2_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStudentIndicator(size_t index = 0) {
    try {
      return this->getObject(index, IN2_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Religion
   */

  CE_0006* getIN2_39(size_t index = 0) {
    return (CE_0006*)this->getObjectSafe(index, IN2_39);
  }

  CE_0006* getReligion(size_t index = 0) {
    return (CE_0006*)this->getObjectSafe(index, IN2_39);
  }

  bool isIN2_39(size_t index = 0) {
    try {
      return this->getObject(index, IN2_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReligion(size_t index = 0) {
    try {
      return this->getObject(index, IN2_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Mother's Maiden Name
   */

  XPN* getIN2_40(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN2_40);
  }

  XPN* getMotherSMaidenName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN2_40);
  }

  bool isIN2_40(size_t index = 0) {
    try {
      return this->getObject(index, IN2_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMotherSMaidenName(size_t index = 0) {
    try {
      return this->getObject(index, IN2_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Nationality
   */

  CE_0212* getIN2_41(size_t index = 0) {
    return (CE_0212*)this->getObjectSafe(index, IN2_41);
  }

  CE_0212* getNationality(size_t index = 0) {
    return (CE_0212*)this->getObjectSafe(index, IN2_41);
  }

  bool isIN2_41(size_t index = 0) {
    try {
      return this->getObject(index, IN2_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNationality(size_t index = 0) {
    try {
      return this->getObject(index, IN2_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ethnic Group
   */

  CE_0189* getIN2_42(size_t index = 0) {
    return (CE_0189*)this->getObjectSafe(index, IN2_42);
  }

  CE_0189* getEthnicGroup(size_t index = 0) {
    return (CE_0189*)this->getObjectSafe(index, IN2_42);
  }

  bool isIN2_42(size_t index = 0) {
    try {
      return this->getObject(index, IN2_42) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEthnicGroup(size_t index = 0) {
    try {
      return this->getObject(index, IN2_42) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Marital Status
   */

  CE_0002* getIN2_43(size_t index = 0) {
    return (CE_0002*)this->getObjectSafe(index, IN2_43);
  }

  CE_0002* getMaritalStatus(size_t index = 0) {
    return (CE_0002*)this->getObjectSafe(index, IN2_43);
  }

  bool isIN2_43(size_t index = 0) {
    try {
      return this->getObject(index, IN2_43) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMaritalStatus(size_t index = 0) {
    try {
      return this->getObject(index, IN2_43) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured's Employment Start Date
   */

  DT* getIN2_44(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN2_44);
  }

  DT* getInsuredSEmploymentStartDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN2_44);
  }

  bool isIN2_44(size_t index = 0) {
    try {
      return this->getObject(index, IN2_44) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredSEmploymentStartDate(size_t index = 0) {
    try {
      return this->getObject(index, IN2_44) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Employment Stop Date
   */

  DT* getIN2_45(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN2_45);
  }

  DT* getEmploymentStopDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN2_45);
  }

  bool isIN2_45(size_t index = 0) {
    try {
      return this->getObject(index, IN2_45) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEmploymentStopDate(size_t index = 0) {
    try {
      return this->getObject(index, IN2_45) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Job Title
   */

  ST* getIN2_46(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_46);
  }

  ST* getJobTitle(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN2_46);
  }

  bool isIN2_46(size_t index = 0) {
    try {
      return this->getObject(index, IN2_46) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isJobTitle(size_t index = 0) {
    try {
      return this->getObject(index, IN2_46) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Job Code/Class
   */

  JCC* getIN2_47(size_t index = 0) {
    return (JCC*)this->getObjectSafe(index, IN2_47);
  }

  JCC* getJobCodeClass(size_t index = 0) {
    return (JCC*)this->getObjectSafe(index, IN2_47);
  }

  bool isIN2_47(size_t index = 0) {
    try {
      return this->getObject(index, IN2_47) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isJobCodeClass(size_t index = 0) {
    try {
      return this->getObject(index, IN2_47) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Job Status
   */

  IS* getIN2_48(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_48);
  }

  IS* getJobStatus(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_48);
  }

  bool isIN2_48(size_t index = 0) {
    try {
      return this->getObject(index, IN2_48) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isJobStatus(size_t index = 0) {
    try {
      return this->getObject(index, IN2_48) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Employer Contact Person Name
   */

  XPN* getIN2_49(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN2_49);
  }

  XPN* getEmployerContactPersonName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN2_49);
  }

  bool isIN2_49(size_t index = 0) {
    try {
      return this->getObject(index, IN2_49) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEmployerContactPersonName(size_t index = 0) {
    try {
      return this->getObject(index, IN2_49) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Employer Contact Person Phone Number
   */

  XTN* getIN2_50(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, IN2_50);
  }

  XTN* getEmployerContactPersonPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, IN2_50);
  }

  bool isIN2_50(size_t index = 0) {
    try {
      return this->getObject(index, IN2_50) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEmployerContactPersonPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, IN2_50) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Employer Contact Reason
   */

  IS* getIN2_51(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_51);
  }

  IS* getEmployerContactReason(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_51);
  }

  bool isIN2_51(size_t index = 0) {
    try {
      return this->getObject(index, IN2_51) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEmployerContactReason(size_t index = 0) {
    try {
      return this->getObject(index, IN2_51) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured's Contact Person's Name
   */

  XPN* getIN2_52(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN2_52);
  }

  XPN* getInsuredSContactPersonSName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IN2_52);
  }

  bool isIN2_52(size_t index = 0) {
    try {
      return this->getObject(index, IN2_52) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredSContactPersonSName(size_t index = 0) {
    try {
      return this->getObject(index, IN2_52) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured's Contact Person Phone Number
   */

  XTN* getIN2_53(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, IN2_53);
  }

  XTN* getInsuredSContactPersonPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, IN2_53);
  }

  bool isIN2_53(size_t index = 0) {
    try {
      return this->getObject(index, IN2_53) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredSContactPersonPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, IN2_53) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured's Contact Person Reason
   */

  IS* getIN2_54(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_54);
  }

  IS* getInsuredSContactPersonReason(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_54);
  }

  bool isIN2_54(size_t index = 0) {
    try {
      return this->getObject(index, IN2_54) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredSContactPersonReason(size_t index = 0) {
    try {
      return this->getObject(index, IN2_54) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Relationship To The Patient Start Date
   */

  DT* getIN2_55(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN2_55);
  }

  DT* getRelationshipToThePatientStartDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN2_55);
  }

  bool isIN2_55(size_t index = 0) {
    try {
      return this->getObject(index, IN2_55) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRelationshipToThePatientStartDate(size_t index = 0) {
    try {
      return this->getObject(index, IN2_55) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Relationship To The Patient Stop Date
   */

  DT* getIN2_56(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN2_56);
  }

  DT* getRelationshipToThePatientStopDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN2_56);
  }

  bool isIN2_56(size_t index = 0) {
    try {
      return this->getObject(index, IN2_56) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRelationshipToThePatientStopDate(size_t index = 0) {
    try {
      return this->getObject(index, IN2_56) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insurance Co. Contact Reason
   */

  IS* getIN2_57(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_57);
  }

  IS* getInsuranceCoContactReason(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_57);
  }

  bool isIN2_57(size_t index = 0) {
    try {
      return this->getObject(index, IN2_57) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuranceCoContactReason(size_t index = 0) {
    try {
      return this->getObject(index, IN2_57) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insurance Co Contact Phone Number
   */

  XTN* getIN2_58(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, IN2_58);
  }

  XTN* getInsuranceCoContactPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, IN2_58);
  }

  bool isIN2_58(size_t index = 0) {
    try {
      return this->getObject(index, IN2_58) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuranceCoContactPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, IN2_58) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Policy Scope
   */

  IS* getIN2_59(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_59);
  }

  IS* getPolicyScope(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_59);
  }

  bool isIN2_59(size_t index = 0) {
    try {
      return this->getObject(index, IN2_59) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPolicyScope(size_t index = 0) {
    try {
      return this->getObject(index, IN2_59) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Policy Source
   */

  IS* getIN2_60(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_60);
  }

  IS* getPolicySource(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN2_60);
  }

  bool isIN2_60(size_t index = 0) {
    try {
      return this->getObject(index, IN2_60) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPolicySource(size_t index = 0) {
    try {
      return this->getObject(index, IN2_60) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Member Number
   */

  CX* getIN2_61(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IN2_61);
  }

  CX* getPatientMemberNumber(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IN2_61);
  }

  bool isIN2_61(size_t index = 0) {
    try {
      return this->getObject(index, IN2_61) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientMemberNumber(size_t index = 0) {
    try {
      return this->getObject(index, IN2_61) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Guarantor's Relationship To Insured
   */

  CE_0063* getIN2_62(size_t index = 0) {
    return (CE_0063*)this->getObjectSafe(index, IN2_62);
  }

  CE_0063* getGuarantorSRelationshipToInsured(size_t index = 0) {
    return (CE_0063*)this->getObjectSafe(index, IN2_62);
  }

  bool isIN2_62(size_t index = 0) {
    try {
      return this->getObject(index, IN2_62) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGuarantorSRelationshipToInsured(size_t index = 0) {
    try {
      return this->getObject(index, IN2_62) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured's Phone Number - Home
   */

  XTN* getIN2_63(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, IN2_63);
  }

  XTN* getInsuredSPhoneNumberHome(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, IN2_63);
  }

  bool isIN2_63(size_t index = 0) {
    try {
      return this->getObject(index, IN2_63) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredSPhoneNumberHome(size_t index = 0) {
    try {
      return this->getObject(index, IN2_63) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured's Employer Phone Number
   */

  XTN* getIN2_64(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, IN2_64);
  }

  XTN* getInsuredSEmployerPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, IN2_64);
  }

  bool isIN2_64(size_t index = 0) {
    try {
      return this->getObject(index, IN2_64) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredSEmployerPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, IN2_64) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military Handicapped Program
   */

  CE_0343* getIN2_65(size_t index = 0) {
    return (CE_0343*)this->getObjectSafe(index, IN2_65);
  }

  CE_0343* getMilitaryHandicappedProgram(size_t index = 0) {
    return (CE_0343*)this->getObjectSafe(index, IN2_65);
  }

  bool isIN2_65(size_t index = 0) {
    try {
      return this->getObject(index, IN2_65) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitaryHandicappedProgram(size_t index = 0) {
    try {
      return this->getObject(index, IN2_65) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Suspend Flag
   */

  ID* getIN2_66(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_66);
  }

  ID* getSuspendFlag(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_66);
  }

  bool isIN2_66(size_t index = 0) {
    try {
      return this->getObject(index, IN2_66) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSuspendFlag(size_t index = 0) {
    try {
      return this->getObject(index, IN2_66) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Copay Limit Flag
   */

  ID* getIN2_67(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_67);
  }

  ID* getCopayLimitFlag(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_67);
  }

  bool isIN2_67(size_t index = 0) {
    try {
      return this->getObject(index, IN2_67) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCopayLimitFlag(size_t index = 0) {
    try {
      return this->getObject(index, IN2_67) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Stoploss Limit Flag
   */

  ID* getIN2_68(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_68);
  }

  ID* getStoplossLimitFlag(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN2_68);
  }

  bool isIN2_68(size_t index = 0) {
    try {
      return this->getObject(index, IN2_68) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStoplossLimitFlag(size_t index = 0) {
    try {
      return this->getObject(index, IN2_68) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured Organization Name And ID
   */

  XON* getIN2_69(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IN2_69);
  }

  XON* getInsuredOrganizationNameAndID(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IN2_69);
  }

  bool isIN2_69(size_t index = 0) {
    try {
      return this->getObject(index, IN2_69) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredOrganizationNameAndID(size_t index = 0) {
    try {
      return this->getObject(index, IN2_69) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insured Employer Organization Name And ID
   */

  XON* getIN2_70(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IN2_70);
  }

  XON* getInsuredEmployerOrganizationNameAndID(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IN2_70);
  }

  bool isIN2_70(size_t index = 0) {
    try {
      return this->getObject(index, IN2_70) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuredEmployerOrganizationNameAndID(size_t index = 0) {
    try {
      return this->getObject(index, IN2_70) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Race
   */

  CE_0005* getIN2_71(size_t index = 0) {
    return (CE_0005*)this->getObjectSafe(index, IN2_71);
  }

  CE_0005* getRace(size_t index = 0) {
    return (CE_0005*)this->getObjectSafe(index, IN2_71);
  }

  bool isIN2_71(size_t index = 0) {
    try {
      return this->getObject(index, IN2_71) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRace(size_t index = 0) {
    try {
      return this->getObject(index, IN2_71) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * HCFA Patient's Relationship to Insured
   */

  CE_0344* getIN2_72(size_t index = 0) {
    return (CE_0344*)this->getObjectSafe(index, IN2_72);
  }

  CE_0344* getHCFAPatientSRelationshipToInsured(size_t index = 0) {
    return (CE_0344*)this->getObjectSafe(index, IN2_72);
  }

  bool isIN2_72(size_t index = 0) {
    try {
      return this->getObject(index, IN2_72) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHCFAPatientSRelationshipToInsured(size_t index = 0) {
    try {
      return this->getObject(index, IN2_72) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of IN2 */

} /* End of namespace HL7_24 */
#endif /* __IN2_v24_H__ */
