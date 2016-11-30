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


#ifndef __PID_v24_H__
#define __PID_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0002.h"
#include "../datatype/CE_0005.h"
#include "../datatype/CE_0006.h"
#include "../datatype/CE_0171.h"
#include "../datatype/CE_0172.h"
#include "../datatype/CE_0189.h"
#include "../datatype/CE_0212.h"
#include "../datatype/CE_0296.h"
#include "../datatype/CE_0429.h"
#include "../datatype/CE_0446.h"
#include "../datatype/CE_0447.h"
#include "../datatype/CX.h"
#include "../datatype/DLN.h"
#include "../datatype/HD.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/NM.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"
#include "../datatype/XAD.h"
#include "../datatype/XPN.h"
#include "../datatype/XTN.h"

namespace HL7_24 {

/* Patient identification */
class PID : public HL7Segment {
 public:
  PID() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PID_1,
    PID_2,
    PID_3,
    PID_4,
    PID_5,
    PID_6,
    PID_7,
    PID_8,
    PID_9,
    PID_10,
    PID_11,
    PID_12,
    PID_13,
    PID_14,
    PID_15,
    PID_16,
    PID_17,
    PID_18,
    PID_19,
    PID_20,
    PID_21,
    PID_22,
    PID_23,
    PID_24,
    PID_25,
    PID_26,
    PID_27,
    PID_28,
    PID_29,
    PID_30,
    PID_31,
    PID_32,
    PID_33,
    PID_34,
    PID_35,
    PID_36,
    PID_37,
    PID_38,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PID"; }
  PID* create() const { return new PID(); }

 private:
  void init() {
    setName("PID");
    /* Init members */
    addObject<SI>(PID_1, "PID.1", HL7::optional, HL7::repetition_off);
    addObject<CX>(PID_2, "PID.2", HL7::optional, HL7::repetition_off);
    addObject<CX>(PID_3, "PID.3", HL7::initialized, HL7::repetition_on);
    addObject<CX>(PID_4, "PID.4", HL7::optional, HL7::repetition_on);
    addObject<XPN>(PID_5, "PID.5", HL7::initialized, HL7::repetition_on);
    addObject<XPN>(PID_6, "PID.6", HL7::optional, HL7::repetition_on);
    addObject<TS>(PID_7, "PID.7", HL7::optional, HL7::repetition_off);
    addObject<IS>(PID_8, "PID.8", HL7::optional, HL7::repetition_off);
    addObject<XPN>(PID_9, "PID.9", HL7::optional, HL7::repetition_on);
    addObject<CE_0005>(PID_10, "PID.10", HL7::optional, HL7::repetition_on);
    addObject<XAD>(PID_11, "PID.11", HL7::optional, HL7::repetition_on);
    addObject<IS>(PID_12, "PID.12", HL7::optional, HL7::repetition_off);
    addObject<XTN>(PID_13, "PID.13", HL7::optional, HL7::repetition_on);
    addObject<XTN>(PID_14, "PID.14", HL7::optional, HL7::repetition_on);
    addObject<CE_0296>(PID_15, "PID.15", HL7::optional, HL7::repetition_off);
    addObject<CE_0002>(PID_16, "PID.16", HL7::optional, HL7::repetition_off);
    addObject<CE_0006>(PID_17, "PID.17", HL7::optional, HL7::repetition_off);
    addObject<CX>(PID_18, "PID.18", HL7::optional, HL7::repetition_off);
    addObject<ST>(PID_19, "PID.19", HL7::optional, HL7::repetition_off);
    addObject<DLN>(PID_20, "PID.20", HL7::optional, HL7::repetition_off);
    addObject<CX>(PID_21, "PID.21", HL7::optional, HL7::repetition_on);
    addObject<CE_0189>(PID_22, "PID.22", HL7::optional, HL7::repetition_on);
    addObject<ST>(PID_23, "PID.23", HL7::optional, HL7::repetition_off);
    addObject<ID>(PID_24, "PID.24", HL7::optional, HL7::repetition_off);
    addObject<NM>(PID_25, "PID.25", HL7::optional, HL7::repetition_off);
    addObject<CE_0171>(PID_26, "PID.26", HL7::optional, HL7::repetition_on);
    addObject<CE_0172>(PID_27, "PID.27", HL7::optional, HL7::repetition_off);
    addObject<CE_0212>(PID_28, "PID.28", HL7::optional, HL7::repetition_off);
    addObject<TS>(PID_29, "PID.29", HL7::optional, HL7::repetition_off);
    addObject<ID>(PID_30, "PID.30", HL7::optional, HL7::repetition_off);
    addObject<ID>(PID_31, "PID.31", HL7::optional, HL7::repetition_off);
    addObject<IS>(PID_32, "PID.32", HL7::optional, HL7::repetition_on);
    addObject<TS>(PID_33, "PID.33", HL7::optional, HL7::repetition_off);
    addObject<HD>(PID_34, "PID.34", HL7::optional, HL7::repetition_off);
    addObject<CE_0446>(PID_35, "PID.35", HL7::conditional, HL7::repetition_off);
    addObject<CE_0447>(PID_36, "PID.36", HL7::conditional, HL7::repetition_off);
    addObject<ST>(PID_37, "PID.37", HL7::optional, HL7::repetition_off);
    addObject<CE_0429>(PID_38, "PID.38", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - PID
   */

  SI* getPID_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, PID_1);
  }

  SI* getSetIDPID(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, PID_1);
  }

  bool isPID_1(size_t index = 0) {
    try {
      return this->getObject(index, PID_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDPID(size_t index = 0) {
    try {
      return this->getObject(index, PID_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient ID
   */

  CX* getPID_2(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PID_2);
  }

  CX* getPatientID(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PID_2);
  }

  bool isPID_2(size_t index = 0) {
    try {
      return this->getObject(index, PID_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientID(size_t index = 0) {
    try {
      return this->getObject(index, PID_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Identifier List
   */

  CX* getPID_3(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PID_3);
  }

  CX* getPatientIdentifierList(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PID_3);
  }

  bool isPID_3(size_t index = 0) {
    try {
      return this->getObject(index, PID_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientIdentifierList(size_t index = 0) {
    try {
      return this->getObject(index, PID_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Patient ID - PID
   */

  CX* getPID_4(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PID_4);
  }

  CX* getAlternatePatientIDPID(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PID_4);
  }

  bool isPID_4(size_t index = 0) {
    try {
      return this->getObject(index, PID_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternatePatientIDPID(size_t index = 0) {
    try {
      return this->getObject(index, PID_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Name
   */

  XPN* getPID_5(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, PID_5);
  }

  XPN* getPatientName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, PID_5);
  }

  bool isPID_5(size_t index = 0) {
    try {
      return this->getObject(index, PID_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientName(size_t index = 0) {
    try {
      return this->getObject(index, PID_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Mother's Maiden Name
   */

  XPN* getPID_6(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, PID_6);
  }

  XPN* getMotherSMaidenName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, PID_6);
  }

  bool isPID_6(size_t index = 0) {
    try {
      return this->getObject(index, PID_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMotherSMaidenName(size_t index = 0) {
    try {
      return this->getObject(index, PID_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time Of Birth
   */

  TS* getPID_7(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PID_7);
  }

  TS* getDateTimeOfBirth(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PID_7);
  }

  bool isPID_7(size_t index = 0) {
    try {
      return this->getObject(index, PID_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeOfBirth(size_t index = 0) {
    try {
      return this->getObject(index, PID_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administrative Sex
   */

  IS* getPID_8(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PID_8);
  }

  IS* getAdministrativeSex(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PID_8);
  }

  bool isPID_8(size_t index = 0) {
    try {
      return this->getObject(index, PID_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministrativeSex(size_t index = 0) {
    try {
      return this->getObject(index, PID_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Alias
   */

  XPN* getPID_9(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, PID_9);
  }

  XPN* getPatientAlias(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, PID_9);
  }

  bool isPID_9(size_t index = 0) {
    try {
      return this->getObject(index, PID_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientAlias(size_t index = 0) {
    try {
      return this->getObject(index, PID_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Race
   */

  CE_0005* getPID_10(size_t index = 0) {
    return (CE_0005*)this->getObjectSafe(index, PID_10);
  }

  CE_0005* getRace(size_t index = 0) {
    return (CE_0005*)this->getObjectSafe(index, PID_10);
  }

  bool isPID_10(size_t index = 0) {
    try {
      return this->getObject(index, PID_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRace(size_t index = 0) {
    try {
      return this->getObject(index, PID_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Address
   */

  XAD* getPID_11(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, PID_11);
  }

  XAD* getPatientAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, PID_11);
  }

  bool isPID_11(size_t index = 0) {
    try {
      return this->getObject(index, PID_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientAddress(size_t index = 0) {
    try {
      return this->getObject(index, PID_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * County Code
   */

  IS* getPID_12(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PID_12);
  }

  IS* getCountyCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PID_12);
  }

  bool isPID_12(size_t index = 0) {
    try {
      return this->getObject(index, PID_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCountyCode(size_t index = 0) {
    try {
      return this->getObject(index, PID_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Phone Number - Home
   */

  XTN* getPID_13(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, PID_13);
  }

  XTN* getPhoneNumberHome(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, PID_13);
  }

  bool isPID_13(size_t index = 0) {
    try {
      return this->getObject(index, PID_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPhoneNumberHome(size_t index = 0) {
    try {
      return this->getObject(index, PID_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Phone Number - Business
   */

  XTN* getPID_14(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, PID_14);
  }

  XTN* getPhoneNumberBusiness(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, PID_14);
  }

  bool isPID_14(size_t index = 0) {
    try {
      return this->getObject(index, PID_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPhoneNumberBusiness(size_t index = 0) {
    try {
      return this->getObject(index, PID_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Language
   */

  CE_0296* getPID_15(size_t index = 0) {
    return (CE_0296*)this->getObjectSafe(index, PID_15);
  }

  CE_0296* getPrimaryLanguage(size_t index = 0) {
    return (CE_0296*)this->getObjectSafe(index, PID_15);
  }

  bool isPID_15(size_t index = 0) {
    try {
      return this->getObject(index, PID_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryLanguage(size_t index = 0) {
    try {
      return this->getObject(index, PID_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Marital Status
   */

  CE_0002* getPID_16(size_t index = 0) {
    return (CE_0002*)this->getObjectSafe(index, PID_16);
  }

  CE_0002* getMaritalStatus(size_t index = 0) {
    return (CE_0002*)this->getObjectSafe(index, PID_16);
  }

  bool isPID_16(size_t index = 0) {
    try {
      return this->getObject(index, PID_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMaritalStatus(size_t index = 0) {
    try {
      return this->getObject(index, PID_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Religion
   */

  CE_0006* getPID_17(size_t index = 0) {
    return (CE_0006*)this->getObjectSafe(index, PID_17);
  }

  CE_0006* getReligion(size_t index = 0) {
    return (CE_0006*)this->getObjectSafe(index, PID_17);
  }

  bool isPID_17(size_t index = 0) {
    try {
      return this->getObject(index, PID_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReligion(size_t index = 0) {
    try {
      return this->getObject(index, PID_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Account Number
   */

  CX* getPID_18(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PID_18);
  }

  CX* getPatientAccountNumber(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PID_18);
  }

  bool isPID_18(size_t index = 0) {
    try {
      return this->getObject(index, PID_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientAccountNumber(size_t index = 0) {
    try {
      return this->getObject(index, PID_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * SSN Number - Patient
   */

  ST* getPID_19(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PID_19);
  }

  ST* getSSNNumberPatient(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PID_19);
  }

  bool isPID_19(size_t index = 0) {
    try {
      return this->getObject(index, PID_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSSNNumberPatient(size_t index = 0) {
    try {
      return this->getObject(index, PID_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Driver's License Number - Patient
   */

  DLN* getPID_20(size_t index = 0) {
    return (DLN*)this->getObjectSafe(index, PID_20);
  }

  DLN* getDriverSLicenseNumberPatient(size_t index = 0) {
    return (DLN*)this->getObjectSafe(index, PID_20);
  }

  bool isPID_20(size_t index = 0) {
    try {
      return this->getObject(index, PID_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDriverSLicenseNumberPatient(size_t index = 0) {
    try {
      return this->getObject(index, PID_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Mother's Identifier
   */

  CX* getPID_21(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PID_21);
  }

  CX* getMotherSIdentifier(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PID_21);
  }

  bool isPID_21(size_t index = 0) {
    try {
      return this->getObject(index, PID_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMotherSIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, PID_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ethnic Group
   */

  CE_0189* getPID_22(size_t index = 0) {
    return (CE_0189*)this->getObjectSafe(index, PID_22);
  }

  CE_0189* getEthnicGroup(size_t index = 0) {
    return (CE_0189*)this->getObjectSafe(index, PID_22);
  }

  bool isPID_22(size_t index = 0) {
    try {
      return this->getObject(index, PID_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEthnicGroup(size_t index = 0) {
    try {
      return this->getObject(index, PID_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Birth Place
   */

  ST* getPID_23(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PID_23);
  }

  ST* getBirthPlace(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PID_23);
  }

  bool isPID_23(size_t index = 0) {
    try {
      return this->getObject(index, PID_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBirthPlace(size_t index = 0) {
    try {
      return this->getObject(index, PID_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Multiple Birth Indicator
   */

  ID* getPID_24(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PID_24);
  }

  ID* getMultipleBirthIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PID_24);
  }

  bool isPID_24(size_t index = 0) {
    try {
      return this->getObject(index, PID_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMultipleBirthIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PID_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Birth Order
   */

  NM* getPID_25(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PID_25);
  }

  NM* getBirthOrder(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PID_25);
  }

  bool isPID_25(size_t index = 0) {
    try {
      return this->getObject(index, PID_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBirthOrder(size_t index = 0) {
    try {
      return this->getObject(index, PID_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Citizenship
   */

  CE_0171* getPID_26(size_t index = 0) {
    return (CE_0171*)this->getObjectSafe(index, PID_26);
  }

  CE_0171* getCitizenship(size_t index = 0) {
    return (CE_0171*)this->getObjectSafe(index, PID_26);
  }

  bool isPID_26(size_t index = 0) {
    try {
      return this->getObject(index, PID_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCitizenship(size_t index = 0) {
    try {
      return this->getObject(index, PID_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Veterans Military Status
   */

  CE_0172* getPID_27(size_t index = 0) {
    return (CE_0172*)this->getObjectSafe(index, PID_27);
  }

  CE_0172* getVeteransMilitaryStatus(size_t index = 0) {
    return (CE_0172*)this->getObjectSafe(index, PID_27);
  }

  bool isPID_27(size_t index = 0) {
    try {
      return this->getObject(index, PID_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVeteransMilitaryStatus(size_t index = 0) {
    try {
      return this->getObject(index, PID_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Nationality
   */

  CE_0212* getPID_28(size_t index = 0) {
    return (CE_0212*)this->getObjectSafe(index, PID_28);
  }

  CE_0212* getNationality(size_t index = 0) {
    return (CE_0212*)this->getObjectSafe(index, PID_28);
  }

  bool isPID_28(size_t index = 0) {
    try {
      return this->getObject(index, PID_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNationality(size_t index = 0) {
    try {
      return this->getObject(index, PID_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Death Date and Time
   */

  TS* getPID_29(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PID_29);
  }

  TS* getPatientDeathDateAndTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PID_29);
  }

  bool isPID_29(size_t index = 0) {
    try {
      return this->getObject(index, PID_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientDeathDateAndTime(size_t index = 0) {
    try {
      return this->getObject(index, PID_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Death Indicator
   */

  ID* getPID_30(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PID_30);
  }

  ID* getPatientDeathIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PID_30);
  }

  bool isPID_30(size_t index = 0) {
    try {
      return this->getObject(index, PID_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientDeathIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PID_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Identity Unknown Indicator
   */

  ID* getPID_31(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PID_31);
  }

  ID* getIdentityUnknownIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PID_31);
  }

  bool isPID_31(size_t index = 0) {
    try {
      return this->getObject(index, PID_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentityUnknownIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PID_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Identity Reliability Code
   */

  IS* getPID_32(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PID_32);
  }

  IS* getIdentityReliabilityCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PID_32);
  }

  bool isPID_32(size_t index = 0) {
    try {
      return this->getObject(index, PID_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentityReliabilityCode(size_t index = 0) {
    try {
      return this->getObject(index, PID_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Last Update Date/Time
   */

  TS* getPID_33(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PID_33);
  }

  TS* getLastUpdateDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PID_33);
  }

  bool isPID_33(size_t index = 0) {
    try {
      return this->getObject(index, PID_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLastUpdateDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PID_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Last Update Facility
   */

  HD* getPID_34(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, PID_34);
  }

  HD* getLastUpdateFacility(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, PID_34);
  }

  bool isPID_34(size_t index = 0) {
    try {
      return this->getObject(index, PID_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLastUpdateFacility(size_t index = 0) {
    try {
      return this->getObject(index, PID_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Species Code
   */

  CE_0446* getPID_35(size_t index = 0) {
    return (CE_0446*)this->getObjectSafe(index, PID_35);
  }

  CE_0446* getSpeciesCode(size_t index = 0) {
    return (CE_0446*)this->getObjectSafe(index, PID_35);
  }

  bool isPID_35(size_t index = 0) {
    try {
      return this->getObject(index, PID_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpeciesCode(size_t index = 0) {
    try {
      return this->getObject(index, PID_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Breed Code
   */

  CE_0447* getPID_36(size_t index = 0) {
    return (CE_0447*)this->getObjectSafe(index, PID_36);
  }

  CE_0447* getBreedCode(size_t index = 0) {
    return (CE_0447*)this->getObjectSafe(index, PID_36);
  }

  bool isPID_36(size_t index = 0) {
    try {
      return this->getObject(index, PID_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBreedCode(size_t index = 0) {
    try {
      return this->getObject(index, PID_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Strain
   */

  ST* getPID_37(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PID_37);
  }

  ST* getStrain(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PID_37);
  }

  bool isPID_37(size_t index = 0) {
    try {
      return this->getObject(index, PID_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStrain(size_t index = 0) {
    try {
      return this->getObject(index, PID_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Production Class Code
   */

  CE_0429* getPID_38(size_t index = 0) {
    return (CE_0429*)this->getObjectSafe(index, PID_38);
  }

  CE_0429* getProductionClassCode(size_t index = 0) {
    return (CE_0429*)this->getObjectSafe(index, PID_38);
  }

  bool isPID_38(size_t index = 0) {
    try {
      return this->getObject(index, PID_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductionClassCode(size_t index = 0) {
    try {
      return this->getObject(index, PID_38) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PID */

} /* End of namespace HL7_24 */
#endif /* __PID_v24_H__ */
