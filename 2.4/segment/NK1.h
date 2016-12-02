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


#ifndef __NK1_v24_H__
#define __NK1_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0002.h"
#include "../datatype/CE_0005.h"
#include "../datatype/CE_0006.h"
#include "../datatype/CE_0063.h"
#include "../datatype/CE_0131.h"
#include "../datatype/CE_0171.h"
#include "../datatype/CE_0189.h"
#include "../datatype/CE_0212.h"
#include "../datatype/CE_0215.h"
#include "../datatype/CE_0222.h"
#include "../datatype/CE_0296.h"
#include "../datatype/CX.h"
#include "../datatype/DT.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/JCC.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"
#include "../datatype/XAD.h"
#include "../datatype/XON.h"
#include "../datatype/XPN.h"
#include "../datatype/XTN.h"

namespace HL7_24 {

/* Next of kin / associated parties */
class NK1 : public HL7Segment {
 public:
  NK1() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    NK1_1,
    NK1_2,
    NK1_3,
    NK1_4,
    NK1_5,
    NK1_6,
    NK1_7,
    NK1_8,
    NK1_9,
    NK1_10,
    NK1_11,
    NK1_12,
    NK1_13,
    NK1_14,
    NK1_15,
    NK1_16,
    NK1_17,
    NK1_18,
    NK1_19,
    NK1_20,
    NK1_21,
    NK1_22,
    NK1_23,
    NK1_24,
    NK1_25,
    NK1_26,
    NK1_27,
    NK1_28,
    NK1_29,
    NK1_30,
    NK1_31,
    NK1_32,
    NK1_33,
    NK1_34,
    NK1_35,
    NK1_36,
    NK1_37,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "NK1"; }
  NK1* create() const { return new NK1(); }

 private:
  void init() {
    setName("NK1");
    /* Init members */
    addObject<SI>(NK1_1, "NK1.1", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(NK1_2, "NK1.2", HL7::optional, HL7::repetition_on);
    addObject<CE_0063>(NK1_3, "NK1.3", HL7::optional, HL7::repetition_off);
    addObject<XAD>(NK1_4, "NK1.4", HL7::optional, HL7::repetition_on);
    addObject<XTN>(NK1_5, "NK1.5", HL7::optional, HL7::repetition_on);
    addObject<XTN>(NK1_6, "NK1.6", HL7::optional, HL7::repetition_on);
    addObject<CE_0131>(NK1_7, "NK1.7", HL7::optional, HL7::repetition_off);
    addObject<DT>(NK1_8, "NK1.8", HL7::optional, HL7::repetition_off);
    addObject<DT>(NK1_9, "NK1.9", HL7::optional, HL7::repetition_off);
    addObject<ST>(NK1_10, "NK1.10", HL7::optional, HL7::repetition_off);
    addObject<JCC>(NK1_11, "NK1.11", HL7::optional, HL7::repetition_off);
    addObject<CX>(NK1_12, "NK1.12", HL7::optional, HL7::repetition_off);
    addObject<XON>(NK1_13, "NK1.13", HL7::optional, HL7::repetition_on);
    addObject<CE_0002>(NK1_14, "NK1.14", HL7::optional, HL7::repetition_off);
    addObject<IS>(NK1_15, "NK1.15", HL7::optional, HL7::repetition_off);
    addObject<TS>(NK1_16, "NK1.16", HL7::optional, HL7::repetition_off);
    addObject<IS>(NK1_17, "NK1.17", HL7::optional, HL7::repetition_on);
    addObject<IS>(NK1_18, "NK1.18", HL7::optional, HL7::repetition_on);
    addObject<CE_0171>(NK1_19, "NK1.19", HL7::optional, HL7::repetition_on);
    addObject<CE_0296>(NK1_20, "NK1.20", HL7::optional, HL7::repetition_off);
    addObject<IS>(NK1_21, "NK1.21", HL7::optional, HL7::repetition_off);
    addObject<CE_0215>(NK1_22, "NK1.22", HL7::optional, HL7::repetition_off);
    addObject<ID>(NK1_23, "NK1.23", HL7::optional, HL7::repetition_off);
    addObject<IS>(NK1_24, "NK1.24", HL7::optional, HL7::repetition_off);
    addObject<CE_0006>(NK1_25, "NK1.25", HL7::optional, HL7::repetition_off);
    addObject<XPN>(NK1_26, "NK1.26", HL7::optional, HL7::repetition_on);
    addObject<CE_0212>(NK1_27, "NK1.27", HL7::optional, HL7::repetition_off);
    addObject<CE_0189>(NK1_28, "NK1.28", HL7::optional, HL7::repetition_on);
    addObject<CE_0222>(NK1_29, "NK1.29", HL7::optional, HL7::repetition_on);
    addObject<XPN>(NK1_30, "NK1.30", HL7::optional, HL7::repetition_on);
    addObject<XTN>(NK1_31, "NK1.31", HL7::optional, HL7::repetition_on);
    addObject<XAD>(NK1_32, "NK1.32", HL7::optional, HL7::repetition_on);
    addObject<CX>(NK1_33, "NK1.33", HL7::optional, HL7::repetition_on);
    addObject<IS>(NK1_34, "NK1.34", HL7::optional, HL7::repetition_off);
    addObject<CE_0005>(NK1_35, "NK1.35", HL7::optional, HL7::repetition_on);
    addObject<IS>(NK1_36, "NK1.36", HL7::optional, HL7::repetition_off);
    addObject<ST>(NK1_37, "NK1.37", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - NK1
   */

  SI* getNK1_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, NK1_1);
  }

  SI* getSetIDNK1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, NK1_1);
  }

  bool isNK1_1(size_t index = 0) {
    try {
      return this->getObject(index, NK1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDNK1(size_t index = 0) {
    try {
      return this->getObject(index, NK1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name
   */

  XPN* getNK1_2(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, NK1_2);
  }

  XPN* getName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, NK1_2);
  }

  bool isNK1_2(size_t index = 0) {
    try {
      return this->getObject(index, NK1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isName(size_t index = 0) {
    try {
      return this->getObject(index, NK1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Relationship
   */

  CE_0063* getNK1_3(size_t index = 0) {
    return (CE_0063*)this->getObjectSafe(index, NK1_3);
  }

  CE_0063* getRelationship(size_t index = 0) {
    return (CE_0063*)this->getObjectSafe(index, NK1_3);
  }

  bool isNK1_3(size_t index = 0) {
    try {
      return this->getObject(index, NK1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRelationship(size_t index = 0) {
    try {
      return this->getObject(index, NK1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Address
   */

  XAD* getNK1_4(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, NK1_4);
  }

  XAD* getAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, NK1_4);
  }

  bool isNK1_4(size_t index = 0) {
    try {
      return this->getObject(index, NK1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAddress(size_t index = 0) {
    try {
      return this->getObject(index, NK1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Phone Number
   */

  XTN* getNK1_5(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, NK1_5);
  }

  XTN* getPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, NK1_5);
  }

  bool isNK1_5(size_t index = 0) {
    try {
      return this->getObject(index, NK1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, NK1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Business Phone Number
   */

  XTN* getNK1_6(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, NK1_6);
  }

  XTN* getBusinessPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, NK1_6);
  }

  bool isNK1_6(size_t index = 0) {
    try {
      return this->getObject(index, NK1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBusinessPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, NK1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact Role
   */

  CE_0131* getNK1_7(size_t index = 0) {
    return (CE_0131*)this->getObjectSafe(index, NK1_7);
  }

  CE_0131* getContactRole(size_t index = 0) {
    return (CE_0131*)this->getObjectSafe(index, NK1_7);
  }

  bool isNK1_7(size_t index = 0) {
    try {
      return this->getObject(index, NK1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactRole(size_t index = 0) {
    try {
      return this->getObject(index, NK1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Start Date
   */

  DT* getNK1_8(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, NK1_8);
  }

  DT* getStartDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, NK1_8);
  }

  bool isNK1_8(size_t index = 0) {
    try {
      return this->getObject(index, NK1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartDate(size_t index = 0) {
    try {
      return this->getObject(index, NK1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * End Date
   */

  DT* getNK1_9(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, NK1_9);
  }

  DT* getEndDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, NK1_9);
  }

  bool isNK1_9(size_t index = 0) {
    try {
      return this->getObject(index, NK1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEndDate(size_t index = 0) {
    try {
      return this->getObject(index, NK1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Next of Kin / Associated Parties Job Title
   */

  ST* getNK1_10(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, NK1_10);
  }

  ST* getNextOfKinAssociatedPartiesJobTitle(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, NK1_10);
  }

  bool isNK1_10(size_t index = 0) {
    try {
      return this->getObject(index, NK1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNextOfKinAssociatedPartiesJobTitle(size_t index = 0) {
    try {
      return this->getObject(index, NK1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Next of Kin / Associated Parties Job Code/Class
   */

  JCC* getNK1_11(size_t index = 0) {
    return (JCC*)this->getObjectSafe(index, NK1_11);
  }

  JCC* getNextOfKinAssociatedPartiesJobCodeClass(size_t index = 0) {
    return (JCC*)this->getObjectSafe(index, NK1_11);
  }

  bool isNK1_11(size_t index = 0) {
    try {
      return this->getObject(index, NK1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNextOfKinAssociatedPartiesJobCodeClass(size_t index = 0) {
    try {
      return this->getObject(index, NK1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Next of Kin / Associated Parties Employee Number
   */

  CX* getNK1_12(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, NK1_12);
  }

  CX* getNextOfKinAssociatedPartiesEmployeeNumber(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, NK1_12);
  }

  bool isNK1_12(size_t index = 0) {
    try {
      return this->getObject(index, NK1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNextOfKinAssociatedPartiesEmployeeNumber(size_t index = 0) {
    try {
      return this->getObject(index, NK1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Organization Name - NK1
   */

  XON* getNK1_13(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, NK1_13);
  }

  XON* getOrganizationNameNK1(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, NK1_13);
  }

  bool isNK1_13(size_t index = 0) {
    try {
      return this->getObject(index, NK1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrganizationNameNK1(size_t index = 0) {
    try {
      return this->getObject(index, NK1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Marital Status
   */

  CE_0002* getNK1_14(size_t index = 0) {
    return (CE_0002*)this->getObjectSafe(index, NK1_14);
  }

  CE_0002* getMaritalStatus(size_t index = 0) {
    return (CE_0002*)this->getObjectSafe(index, NK1_14);
  }

  bool isNK1_14(size_t index = 0) {
    try {
      return this->getObject(index, NK1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMaritalStatus(size_t index = 0) {
    try {
      return this->getObject(index, NK1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administrative Sex
   */

  IS* getNK1_15(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, NK1_15);
  }

  IS* getAdministrativeSex(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, NK1_15);
  }

  bool isNK1_15(size_t index = 0) {
    try {
      return this->getObject(index, NK1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministrativeSex(size_t index = 0) {
    try {
      return this->getObject(index, NK1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time Of Birth
   */

  TS* getNK1_16(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, NK1_16);
  }

  TS* getDateTimeOfBirth(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, NK1_16);
  }

  bool isNK1_16(size_t index = 0) {
    try {
      return this->getObject(index, NK1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeOfBirth(size_t index = 0) {
    try {
      return this->getObject(index, NK1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Living Dependency
   */

  IS* getNK1_17(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, NK1_17);
  }

  IS* getLivingDependency(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, NK1_17);
  }

  bool isNK1_17(size_t index = 0) {
    try {
      return this->getObject(index, NK1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLivingDependency(size_t index = 0) {
    try {
      return this->getObject(index, NK1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ambulatory Status
   */

  IS* getNK1_18(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, NK1_18);
  }

  IS* getAmbulatoryStatus(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, NK1_18);
  }

  bool isNK1_18(size_t index = 0) {
    try {
      return this->getObject(index, NK1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAmbulatoryStatus(size_t index = 0) {
    try {
      return this->getObject(index, NK1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Citizenship
   */

  CE_0171* getNK1_19(size_t index = 0) {
    return (CE_0171*)this->getObjectSafe(index, NK1_19);
  }

  CE_0171* getCitizenship(size_t index = 0) {
    return (CE_0171*)this->getObjectSafe(index, NK1_19);
  }

  bool isNK1_19(size_t index = 0) {
    try {
      return this->getObject(index, NK1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCitizenship(size_t index = 0) {
    try {
      return this->getObject(index, NK1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Language
   */

  CE_0296* getNK1_20(size_t index = 0) {
    return (CE_0296*)this->getObjectSafe(index, NK1_20);
  }

  CE_0296* getPrimaryLanguage(size_t index = 0) {
    return (CE_0296*)this->getObjectSafe(index, NK1_20);
  }

  bool isNK1_20(size_t index = 0) {
    try {
      return this->getObject(index, NK1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryLanguage(size_t index = 0) {
    try {
      return this->getObject(index, NK1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Living Arrangement
   */

  IS* getNK1_21(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, NK1_21);
  }

  IS* getLivingArrangement(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, NK1_21);
  }

  bool isNK1_21(size_t index = 0) {
    try {
      return this->getObject(index, NK1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLivingArrangement(size_t index = 0) {
    try {
      return this->getObject(index, NK1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Publicity Code
   */

  CE_0215* getNK1_22(size_t index = 0) {
    return (CE_0215*)this->getObjectSafe(index, NK1_22);
  }

  CE_0215* getPublicityCode(size_t index = 0) {
    return (CE_0215*)this->getObjectSafe(index, NK1_22);
  }

  bool isNK1_22(size_t index = 0) {
    try {
      return this->getObject(index, NK1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPublicityCode(size_t index = 0) {
    try {
      return this->getObject(index, NK1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Protection Indicator
   */

  ID* getNK1_23(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, NK1_23);
  }

  ID* getProtectionIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, NK1_23);
  }

  bool isNK1_23(size_t index = 0) {
    try {
      return this->getObject(index, NK1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProtectionIndicator(size_t index = 0) {
    try {
      return this->getObject(index, NK1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Student Indicator
   */

  IS* getNK1_24(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, NK1_24);
  }

  IS* getStudentIndicator(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, NK1_24);
  }

  bool isNK1_24(size_t index = 0) {
    try {
      return this->getObject(index, NK1_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStudentIndicator(size_t index = 0) {
    try {
      return this->getObject(index, NK1_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Religion
   */

  CE_0006* getNK1_25(size_t index = 0) {
    return (CE_0006*)this->getObjectSafe(index, NK1_25);
  }

  CE_0006* getReligion(size_t index = 0) {
    return (CE_0006*)this->getObjectSafe(index, NK1_25);
  }

  bool isNK1_25(size_t index = 0) {
    try {
      return this->getObject(index, NK1_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReligion(size_t index = 0) {
    try {
      return this->getObject(index, NK1_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Mother's Maiden Name
   */

  XPN* getNK1_26(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, NK1_26);
  }

  XPN* getMotherSMaidenName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, NK1_26);
  }

  bool isNK1_26(size_t index = 0) {
    try {
      return this->getObject(index, NK1_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMotherSMaidenName(size_t index = 0) {
    try {
      return this->getObject(index, NK1_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Nationality
   */

  CE_0212* getNK1_27(size_t index = 0) {
    return (CE_0212*)this->getObjectSafe(index, NK1_27);
  }

  CE_0212* getNationality(size_t index = 0) {
    return (CE_0212*)this->getObjectSafe(index, NK1_27);
  }

  bool isNK1_27(size_t index = 0) {
    try {
      return this->getObject(index, NK1_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNationality(size_t index = 0) {
    try {
      return this->getObject(index, NK1_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ethnic Group
   */

  CE_0189* getNK1_28(size_t index = 0) {
    return (CE_0189*)this->getObjectSafe(index, NK1_28);
  }

  CE_0189* getEthnicGroup(size_t index = 0) {
    return (CE_0189*)this->getObjectSafe(index, NK1_28);
  }

  bool isNK1_28(size_t index = 0) {
    try {
      return this->getObject(index, NK1_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEthnicGroup(size_t index = 0) {
    try {
      return this->getObject(index, NK1_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact Reason
   */

  CE_0222* getNK1_29(size_t index = 0) {
    return (CE_0222*)this->getObjectSafe(index, NK1_29);
  }

  CE_0222* getContactReason(size_t index = 0) {
    return (CE_0222*)this->getObjectSafe(index, NK1_29);
  }

  bool isNK1_29(size_t index = 0) {
    try {
      return this->getObject(index, NK1_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactReason(size_t index = 0) {
    try {
      return this->getObject(index, NK1_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact Person's Name
   */

  XPN* getNK1_30(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, NK1_30);
  }

  XPN* getContactPersonSName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, NK1_30);
  }

  bool isNK1_30(size_t index = 0) {
    try {
      return this->getObject(index, NK1_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactPersonSName(size_t index = 0) {
    try {
      return this->getObject(index, NK1_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact Person's Telephone Number
   */

  XTN* getNK1_31(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, NK1_31);
  }

  XTN* getContactPersonSTelephoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, NK1_31);
  }

  bool isNK1_31(size_t index = 0) {
    try {
      return this->getObject(index, NK1_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactPersonSTelephoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, NK1_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact Person's Address
   */

  XAD* getNK1_32(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, NK1_32);
  }

  XAD* getContactPersonSAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, NK1_32);
  }

  bool isNK1_32(size_t index = 0) {
    try {
      return this->getObject(index, NK1_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactPersonSAddress(size_t index = 0) {
    try {
      return this->getObject(index, NK1_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Next of Kin/Associated Party's Identifiers
   */

  CX* getNK1_33(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, NK1_33);
  }

  CX* getNextOfKinAssociatedPartySIdentifiers(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, NK1_33);
  }

  bool isNK1_33(size_t index = 0) {
    try {
      return this->getObject(index, NK1_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNextOfKinAssociatedPartySIdentifiers(size_t index = 0) {
    try {
      return this->getObject(index, NK1_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Job Status
   */

  IS* getNK1_34(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, NK1_34);
  }

  IS* getJobStatus(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, NK1_34);
  }

  bool isNK1_34(size_t index = 0) {
    try {
      return this->getObject(index, NK1_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isJobStatus(size_t index = 0) {
    try {
      return this->getObject(index, NK1_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Race
   */

  CE_0005* getNK1_35(size_t index = 0) {
    return (CE_0005*)this->getObjectSafe(index, NK1_35);
  }

  CE_0005* getRace(size_t index = 0) {
    return (CE_0005*)this->getObjectSafe(index, NK1_35);
  }

  bool isNK1_35(size_t index = 0) {
    try {
      return this->getObject(index, NK1_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRace(size_t index = 0) {
    try {
      return this->getObject(index, NK1_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Handicap
   */

  IS* getNK1_36(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, NK1_36);
  }

  IS* getHandicap(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, NK1_36);
  }

  bool isNK1_36(size_t index = 0) {
    try {
      return this->getObject(index, NK1_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHandicap(size_t index = 0) {
    try {
      return this->getObject(index, NK1_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact Person Social Security Number
   */

  ST* getNK1_37(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, NK1_37);
  }

  ST* getContactPersonSocialSecurityNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, NK1_37);
  }

  bool isNK1_37(size_t index = 0) {
    try {
      return this->getObject(index, NK1_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactPersonSocialSecurityNumber(size_t index = 0) {
    try {
      return this->getObject(index, NK1_37) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of NK1 */

} /* End of namespace HL7_24 */
#endif /* __NK1_v24_H__ */
