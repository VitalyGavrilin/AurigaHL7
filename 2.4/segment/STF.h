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


#ifndef __STF_v24_H__
#define __STF_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0002.h"
#include "../datatype/CE_0005.h"
#include "../datatype/CE_0066.h"
#include "../datatype/CE_0069.h"
#include "../datatype/CE_0184.h"
#include "../datatype/CE_0185.h"
#include "../datatype/CE_0189.h"
#include "../datatype/CX.h"
#include "../datatype/DIN.h"
#include "../datatype/DLN.h"
#include "../datatype/DT.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/JCC.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"
#include "../datatype/XAD.h"
#include "../datatype/XPN.h"
#include "../datatype/XTN.h"

namespace HL7_24 {

/* Staff Identification */
class STF : public HL7Segment {
 public:
  STF() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    STF_1,
    STF_2,
    STF_3,
    STF_4,
    STF_5,
    STF_6,
    STF_7,
    STF_8,
    STF_9,
    STF_10,
    STF_11,
    STF_12,
    STF_13,
    STF_14,
    STF_15,
    STF_16,
    STF_17,
    STF_18,
    STF_19,
    STF_20,
    STF_21,
    STF_22,
    STF_23,
    STF_24,
    STF_25,
    STF_26,
    STF_27,
    STF_28,
    STF_29,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "STF"; }
  STF* create() const { return new STF(); }

 private:
  void init() {
    setName("STF");
    /* Init members */
    addObject<CE>(STF_1, "STF.1", HL7::conditional, HL7::repetition_off);
    addObject<CX>(STF_2, "STF.2", HL7::optional, HL7::repetition_on);
    addObject<XPN>(STF_3, "STF.3", HL7::optional, HL7::repetition_on);
    addObject<IS>(STF_4, "STF.4", HL7::optional, HL7::repetition_on);
    addObject<IS>(STF_5, "STF.5", HL7::optional, HL7::repetition_off);
    addObject<TS>(STF_6, "STF.6", HL7::optional, HL7::repetition_off);
    addObject<ID>(STF_7, "STF.7", HL7::optional, HL7::repetition_off);
    addObject<CE_0184>(STF_8, "STF.8", HL7::optional, HL7::repetition_on);
    addObject<CE_0069>(STF_9, "STF.9", HL7::optional, HL7::repetition_on);
    addObject<XTN>(STF_10, "STF.10", HL7::optional, HL7::repetition_on);
    addObject<XAD>(STF_11, "STF.11", HL7::optional, HL7::repetition_on);
    addObject<DIN>(STF_12, "STF.12", HL7::optional, HL7::repetition_on);
    addObject<DIN>(STF_13, "STF.13", HL7::optional, HL7::repetition_on);
    addObject<CE>(STF_14, "STF.14", HL7::optional, HL7::repetition_on);
    addObject<ST>(STF_15, "STF.15", HL7::optional, HL7::repetition_on);
    addObject<CE_0185>(STF_16, "STF.16", HL7::optional, HL7::repetition_off);
    addObject<CE_0002>(STF_17, "STF.17", HL7::optional, HL7::repetition_off);
    addObject<ST>(STF_18, "STF.18", HL7::optional, HL7::repetition_off);
    addObject<JCC>(STF_19, "STF.19", HL7::optional, HL7::repetition_off);
    addObject<CE_0066>(STF_20, "STF.20", HL7::optional, HL7::repetition_off);
    addObject<ID>(STF_21, "STF.21", HL7::optional, HL7::repetition_off);
    addObject<DLN>(STF_22, "STF.22", HL7::optional, HL7::repetition_off);
    addObject<ID>(STF_23, "STF.23", HL7::optional, HL7::repetition_off);
    addObject<DT>(STF_24, "STF.24", HL7::optional, HL7::repetition_off);
    addObject<DT>(STF_25, "STF.25", HL7::optional, HL7::repetition_off);
    addObject<DT>(STF_26, "STF.26", HL7::optional, HL7::repetition_off);
    addObject<CE_0005>(STF_27, "STF.27", HL7::optional, HL7::repetition_off);
    addObject<CE_0189>(STF_28, "STF.28", HL7::optional, HL7::repetition_off);
    addObject<ID>(STF_29, "STF.29", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Primary Key Value - STF
   */

  CE* getSTF_1(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, STF_1);
  }

  CE* getPrimaryKeyValueSTF(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, STF_1);
  }

  bool isSTF_1(size_t index = 0) {
    try {
      return this->getObject(index, STF_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryKeyValueSTF(size_t index = 0) {
    try {
      return this->getObject(index, STF_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Staff ID Code
   */

  CX* getSTF_2(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, STF_2);
  }

  CX* getStaffIDCode(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, STF_2);
  }

  bool isSTF_2(size_t index = 0) {
    try {
      return this->getObject(index, STF_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStaffIDCode(size_t index = 0) {
    try {
      return this->getObject(index, STF_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Staff Name
   */

  XPN* getSTF_3(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, STF_3);
  }

  XPN* getStaffName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, STF_3);
  }

  bool isSTF_3(size_t index = 0) {
    try {
      return this->getObject(index, STF_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStaffName(size_t index = 0) {
    try {
      return this->getObject(index, STF_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Staff Type
   */

  IS* getSTF_4(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, STF_4);
  }

  IS* getStaffType(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, STF_4);
  }

  bool isSTF_4(size_t index = 0) {
    try {
      return this->getObject(index, STF_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStaffType(size_t index = 0) {
    try {
      return this->getObject(index, STF_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administrative Sex
   */

  IS* getSTF_5(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, STF_5);
  }

  IS* getAdministrativeSex(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, STF_5);
  }

  bool isSTF_5(size_t index = 0) {
    try {
      return this->getObject(index, STF_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministrativeSex(size_t index = 0) {
    try {
      return this->getObject(index, STF_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time Of Birth
   */

  TS* getSTF_6(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, STF_6);
  }

  TS* getDateTimeOfBirth(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, STF_6);
  }

  bool isSTF_6(size_t index = 0) {
    try {
      return this->getObject(index, STF_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeOfBirth(size_t index = 0) {
    try {
      return this->getObject(index, STF_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Active/Inactive Flag
   */

  ID* getSTF_7(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, STF_7);
  }

  ID* getActiveInactiveFlag(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, STF_7);
  }

  bool isSTF_7(size_t index = 0) {
    try {
      return this->getObject(index, STF_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActiveInactiveFlag(size_t index = 0) {
    try {
      return this->getObject(index, STF_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Department
   */

  CE_0184* getSTF_8(size_t index = 0) {
    return (CE_0184*)this->getObjectSafe(index, STF_8);
  }

  CE_0184* getDepartment(size_t index = 0) {
    return (CE_0184*)this->getObjectSafe(index, STF_8);
  }

  bool isSTF_8(size_t index = 0) {
    try {
      return this->getObject(index, STF_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDepartment(size_t index = 0) {
    try {
      return this->getObject(index, STF_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Hospital Service
   */

  CE_0069* getSTF_9(size_t index = 0) {
    return (CE_0069*)this->getObjectSafe(index, STF_9);
  }

  CE_0069* getHospitalService(size_t index = 0) {
    return (CE_0069*)this->getObjectSafe(index, STF_9);
  }

  bool isSTF_9(size_t index = 0) {
    try {
      return this->getObject(index, STF_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHospitalService(size_t index = 0) {
    try {
      return this->getObject(index, STF_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Phone
   */

  XTN* getSTF_10(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, STF_10);
  }

  XTN* getPhone(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, STF_10);
  }

  bool isSTF_10(size_t index = 0) {
    try {
      return this->getObject(index, STF_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPhone(size_t index = 0) {
    try {
      return this->getObject(index, STF_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Office/Home Address
   */

  XAD* getSTF_11(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, STF_11);
  }

  XAD* getOfficeHomeAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, STF_11);
  }

  bool isSTF_11(size_t index = 0) {
    try {
      return this->getObject(index, STF_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOfficeHomeAddress(size_t index = 0) {
    try {
      return this->getObject(index, STF_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Institution Activation Date
   */

  DIN* getSTF_12(size_t index = 0) {
    return (DIN*)this->getObjectSafe(index, STF_12);
  }

  DIN* getInstitutionActivationDate(size_t index = 0) {
    return (DIN*)this->getObjectSafe(index, STF_12);
  }

  bool isSTF_12(size_t index = 0) {
    try {
      return this->getObject(index, STF_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInstitutionActivationDate(size_t index = 0) {
    try {
      return this->getObject(index, STF_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Institution Inactivation Date
   */

  DIN* getSTF_13(size_t index = 0) {
    return (DIN*)this->getObjectSafe(index, STF_13);
  }

  DIN* getInstitutionInactivationDate(size_t index = 0) {
    return (DIN*)this->getObjectSafe(index, STF_13);
  }

  bool isSTF_13(size_t index = 0) {
    try {
      return this->getObject(index, STF_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInstitutionInactivationDate(size_t index = 0) {
    try {
      return this->getObject(index, STF_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Backup Person ID
   */

  CE* getSTF_14(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, STF_14);
  }

  CE* getBackupPersonID(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, STF_14);
  }

  bool isSTF_14(size_t index = 0) {
    try {
      return this->getObject(index, STF_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBackupPersonID(size_t index = 0) {
    try {
      return this->getObject(index, STF_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * E-Mail Address
   */

  ST* getSTF_15(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, STF_15);
  }

  ST* getEMailAddress(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, STF_15);
  }

  bool isSTF_15(size_t index = 0) {
    try {
      return this->getObject(index, STF_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEMailAddress(size_t index = 0) {
    try {
      return this->getObject(index, STF_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Preferred Method of Contact
   */

  CE_0185* getSTF_16(size_t index = 0) {
    return (CE_0185*)this->getObjectSafe(index, STF_16);
  }

  CE_0185* getPreferredMethodOfContact(size_t index = 0) {
    return (CE_0185*)this->getObjectSafe(index, STF_16);
  }

  bool isSTF_16(size_t index = 0) {
    try {
      return this->getObject(index, STF_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreferredMethodOfContact(size_t index = 0) {
    try {
      return this->getObject(index, STF_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Marital Status
   */

  CE_0002* getSTF_17(size_t index = 0) {
    return (CE_0002*)this->getObjectSafe(index, STF_17);
  }

  CE_0002* getMaritalStatus(size_t index = 0) {
    return (CE_0002*)this->getObjectSafe(index, STF_17);
  }

  bool isSTF_17(size_t index = 0) {
    try {
      return this->getObject(index, STF_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMaritalStatus(size_t index = 0) {
    try {
      return this->getObject(index, STF_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Job Title
   */

  ST* getSTF_18(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, STF_18);
  }

  ST* getJobTitle(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, STF_18);
  }

  bool isSTF_18(size_t index = 0) {
    try {
      return this->getObject(index, STF_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isJobTitle(size_t index = 0) {
    try {
      return this->getObject(index, STF_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Job Code/Class
   */

  JCC* getSTF_19(size_t index = 0) {
    return (JCC*)this->getObjectSafe(index, STF_19);
  }

  JCC* getJobCodeClass(size_t index = 0) {
    return (JCC*)this->getObjectSafe(index, STF_19);
  }

  bool isSTF_19(size_t index = 0) {
    try {
      return this->getObject(index, STF_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isJobCodeClass(size_t index = 0) {
    try {
      return this->getObject(index, STF_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Employment Status Code
   */

  CE_0066* getSTF_20(size_t index = 0) {
    return (CE_0066*)this->getObjectSafe(index, STF_20);
  }

  CE_0066* getEmploymentStatusCode(size_t index = 0) {
    return (CE_0066*)this->getObjectSafe(index, STF_20);
  }

  bool isSTF_20(size_t index = 0) {
    try {
      return this->getObject(index, STF_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEmploymentStatusCode(size_t index = 0) {
    try {
      return this->getObject(index, STF_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Additional Insured on  Auto
   */

  ID* getSTF_21(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, STF_21);
  }

  ID* getAdditionalInsuredOnAuto(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, STF_21);
  }

  bool isSTF_21(size_t index = 0) {
    try {
      return this->getObject(index, STF_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdditionalInsuredOnAuto(size_t index = 0) {
    try {
      return this->getObject(index, STF_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Driver's License Number - Staff
   */

  DLN* getSTF_22(size_t index = 0) {
    return (DLN*)this->getObjectSafe(index, STF_22);
  }

  DLN* getDriverSLicenseNumberStaff(size_t index = 0) {
    return (DLN*)this->getObjectSafe(index, STF_22);
  }

  bool isSTF_22(size_t index = 0) {
    try {
      return this->getObject(index, STF_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDriverSLicenseNumberStaff(size_t index = 0) {
    try {
      return this->getObject(index, STF_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Copy  Auto Ins
   */

  ID* getSTF_23(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, STF_23);
  }

  ID* getCopyAutoIns(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, STF_23);
  }

  bool isSTF_23(size_t index = 0) {
    try {
      return this->getObject(index, STF_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCopyAutoIns(size_t index = 0) {
    try {
      return this->getObject(index, STF_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Auto Ins. Expires
   */

  DT* getSTF_24(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, STF_24);
  }

  DT* getAutoInsExpires(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, STF_24);
  }

  bool isSTF_24(size_t index = 0) {
    try {
      return this->getObject(index, STF_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAutoInsExpires(size_t index = 0) {
    try {
      return this->getObject(index, STF_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date Last DMV Review
   */

  DT* getSTF_25(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, STF_25);
  }

  DT* getDateLastDMVReview(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, STF_25);
  }

  bool isSTF_25(size_t index = 0) {
    try {
      return this->getObject(index, STF_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateLastDMVReview(size_t index = 0) {
    try {
      return this->getObject(index, STF_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date Next DMV Review
   */

  DT* getSTF_26(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, STF_26);
  }

  DT* getDateNextDMVReview(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, STF_26);
  }

  bool isSTF_26(size_t index = 0) {
    try {
      return this->getObject(index, STF_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateNextDMVReview(size_t index = 0) {
    try {
      return this->getObject(index, STF_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Race
   */

  CE_0005* getSTF_27(size_t index = 0) {
    return (CE_0005*)this->getObjectSafe(index, STF_27);
  }

  CE_0005* getRace(size_t index = 0) {
    return (CE_0005*)this->getObjectSafe(index, STF_27);
  }

  bool isSTF_27(size_t index = 0) {
    try {
      return this->getObject(index, STF_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRace(size_t index = 0) {
    try {
      return this->getObject(index, STF_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ethnic Group
   */

  CE_0189* getSTF_28(size_t index = 0) {
    return (CE_0189*)this->getObjectSafe(index, STF_28);
  }

  CE_0189* getEthnicGroup(size_t index = 0) {
    return (CE_0189*)this->getObjectSafe(index, STF_28);
  }

  bool isSTF_28(size_t index = 0) {
    try {
      return this->getObject(index, STF_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEthnicGroup(size_t index = 0) {
    try {
      return this->getObject(index, STF_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Re-activation Approval Indicator
   */

  ID* getSTF_29(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, STF_29);
  }

  ID* getReActivationApprovalIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, STF_29);
  }

  bool isSTF_29(size_t index = 0) {
    try {
      return this->getObject(index, STF_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReActivationApprovalIndicator(size_t index = 0) {
    try {
      return this->getObject(index, STF_29) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of STF */

} /* End of namespace HL7_24 */
#endif /* __STF_v24_H__ */
