/*
 * hacca - C Toolkit and Applications for the HL7 2.x Protocols
 *           http://github.com/rcarbone/hacca
 *           http://hub.docker.com/repository/docker/roccocarbone/hacca
 *
 * Warning: This file was automatically generated, please do not edit.
 *
 * R. Carbone (rocco@tecsiel.it)
 * Jul 2020
 *
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 */


#ifndef __STF_v29_H__
#define __STF_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/CX.h"
#include "../datatype/DIN.h"
#include "../datatype/DLN.h"
#include "../datatype/DR.h"
#include "../datatype/DT.h"
#include "../datatype/DTM.h"
#include "../datatype/ED.h"
#include "../datatype/ID.h"
#include "../datatype/JCC.h"
#include "../datatype/ST.h"
#include "../datatype/XAD.h"
#include "../datatype/XPN.h"
#include "../datatype/XTN.h"

namespace HL7_29 {

/* STF */
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
    STF_30,
    STF_31,
    STF_32,
    STF_33,
    STF_34,
    STF_35,
    STF_36,
    STF_37,
    STF_38,
    STF_39,
    STF_40,
    STF_41,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "STF"; }
  STF* create() const { return new STF(); }

 private:
  void init() {
    setName("STF");
    /* Init members */
    addObject<CWE>(STF_1, "STF.1", HL7::initialized, HL7::repetition_off);
    addObject<CX>(STF_2, "STF.2", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(STF_3, "STF.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(STF_4, "STF.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(STF_5, "STF.5", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(STF_6, "STF.6", HL7::initialized, HL7::repetition_off);
    addObject<ID>(STF_7, "STF.7", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(STF_8, "STF.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(STF_9, "STF.9", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(STF_10, "STF.10", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(STF_11, "STF.11", HL7::initialized, HL7::repetition_off);
    addObject<DIN>(STF_12, "STF.12", HL7::initialized, HL7::repetition_off);
    addObject<DIN>(STF_13, "STF.13", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(STF_14, "STF.14", HL7::initialized, HL7::repetition_off);
    addObject<ST>(STF_15, "STF.15", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(STF_16, "STF.16", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(STF_17, "STF.17", HL7::initialized, HL7::repetition_off);
    addObject<ST>(STF_18, "STF.18", HL7::initialized, HL7::repetition_off);
    addObject<JCC>(STF_19, "STF.19", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(STF_20, "STF.20", HL7::initialized, HL7::repetition_off);
    addObject<ID>(STF_21, "STF.21", HL7::initialized, HL7::repetition_off);
    addObject<DLN>(STF_22, "STF.22", HL7::initialized, HL7::repetition_off);
    addObject<ID>(STF_23, "STF.23", HL7::initialized, HL7::repetition_off);
    addObject<DT>(STF_24, "STF.24", HL7::initialized, HL7::repetition_off);
    addObject<DT>(STF_25, "STF.25", HL7::initialized, HL7::repetition_off);
    addObject<DT>(STF_26, "STF.26", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(STF_27, "STF.27", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(STF_28, "STF.28", HL7::initialized, HL7::repetition_off);
    addObject<ID>(STF_29, "STF.29", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(STF_30, "STF.30", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(STF_31, "STF.31", HL7::initialized, HL7::repetition_off);
    addObject<ID>(STF_32, "STF.32", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(STF_33, "STF.33", HL7::initialized, HL7::repetition_off);
    addObject<DR>(STF_34, "STF.34", HL7::initialized, HL7::repetition_off);
    addObject<DT>(STF_35, "STF.35", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(STF_36, "STF.36", HL7::initialized, HL7::repetition_off);
    addObject<ID>(STF_37, "STF.37", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(STF_38, "STF.38", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(STF_39, "STF.39", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(STF_40, "STF.40", HL7::initialized, HL7::repetition_off);
    addObject<ED>(STF_41, "STF.41", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Primary Key Value – STF
   */

  CWE* getSTF_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_1);
  }

  CWE* getPrimaryKeyValueSTF(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_1);
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
   * Staff Identifier List
   */

  CX* getSTF_2(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, STF_2);
  }

  CX* getStaffIdentifierList(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, STF_2);
  }

  bool isSTF_2(size_t index = 0) {
    try {
      return this->getObject(index, STF_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStaffIdentifierList(size_t index = 0) {
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

  CWE* getSTF_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_4);
  }

  CWE* getStaffType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_4);
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

  CWE* getSTF_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_5);
  }

  CWE* getAdministrativeSex(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_5);
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
   * Date/Time of Birth
   */

  DTM* getSTF_6(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, STF_6);
  }

  DTM* getDateTimeofBirth(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, STF_6);
  }

  bool isSTF_6(size_t index = 0) {
    try {
      return this->getObject(index, STF_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeofBirth(size_t index = 0) {
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

  CWE* getSTF_8(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_8);
  }

  CWE* getDepartment(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_8);
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
   * Hospital Service – STF
   */

  CWE* getSTF_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_9);
  }

  CWE* getHospitalServiceSTF(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_9);
  }

  bool isSTF_9(size_t index = 0) {
    try {
      return this->getObject(index, STF_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHospitalServiceSTF(size_t index = 0) {
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
   * Office/Home Address/Birthplace
   */

  XAD* getSTF_11(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, STF_11);
  }

  XAD* getOfficeHomeAddressBirthplace(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, STF_11);
  }

  bool isSTF_11(size_t index = 0) {
    try {
      return this->getObject(index, STF_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOfficeHomeAddressBirthplace(size_t index = 0) {
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

  CWE* getSTF_14(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_14);
  }

  CWE* getBackupPersonID(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_14);
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

  CWE* getSTF_16(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_16);
  }

  CWE* getPreferredMethodofContact(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_16);
  }

  bool isSTF_16(size_t index = 0) {
    try {
      return this->getObject(index, STF_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreferredMethodofContact(size_t index = 0) {
    try {
      return this->getObject(index, STF_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Marital Status
   */

  CWE* getSTF_17(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_17);
  }

  CWE* getMaritalStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_17);
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

  CWE* getSTF_20(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_20);
  }

  CWE* getEmploymentStatusCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_20);
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
   * Additional Insured on Auto
   */

  ID* getSTF_21(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, STF_21);
  }

  ID* getAdditionalInsuredonAuto(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, STF_21);
  }

  bool isSTF_21(size_t index = 0) {
    try {
      return this->getObject(index, STF_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdditionalInsuredonAuto(size_t index = 0) {
    try {
      return this->getObject(index, STF_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Driver's License Number – Staff
   */

  DLN* getSTF_22(size_t index = 0) {
    return (DLN*)this->getObjectSafe(index, STF_22);
  }

  DLN* getDriversLicenseNumberStaff(size_t index = 0) {
    return (DLN*)this->getObjectSafe(index, STF_22);
  }

  bool isSTF_22(size_t index = 0) {
    try {
      return this->getObject(index, STF_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDriversLicenseNumberStaff(size_t index = 0) {
    try {
      return this->getObject(index, STF_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Copy Auto Ins
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
   * Auto Ins Expires
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

  CWE* getSTF_27(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_27);
  }

  CWE* getRace(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_27);
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

  CWE* getSTF_28(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_28);
  }

  CWE* getEthnicGroup(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_28);
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

  ID* getReactivationApprovalIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, STF_29);
  }

  bool isSTF_29(size_t index = 0) {
    try {
      return this->getObject(index, STF_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReactivationApprovalIndicator(size_t index = 0) {
    try {
      return this->getObject(index, STF_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Citizenship
   */

  CWE* getSTF_30(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_30);
  }

  CWE* getCitizenship(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_30);
  }

  bool isSTF_30(size_t index = 0) {
    try {
      return this->getObject(index, STF_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCitizenship(size_t index = 0) {
    try {
      return this->getObject(index, STF_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time of Death
   */

  DTM* getSTF_31(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, STF_31);
  }

  DTM* getDateTimeofDeath(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, STF_31);
  }

  bool isSTF_31(size_t index = 0) {
    try {
      return this->getObject(index, STF_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeofDeath(size_t index = 0) {
    try {
      return this->getObject(index, STF_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Death Indicator
   */

  ID* getSTF_32(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, STF_32);
  }

  ID* getDeathIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, STF_32);
  }

  bool isSTF_32(size_t index = 0) {
    try {
      return this->getObject(index, STF_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeathIndicator(size_t index = 0) {
    try {
      return this->getObject(index, STF_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Institution Relationship Type Code
   */

  CWE* getSTF_33(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_33);
  }

  CWE* getInstitutionRelationshipTypeCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_33);
  }

  bool isSTF_33(size_t index = 0) {
    try {
      return this->getObject(index, STF_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInstitutionRelationshipTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, STF_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Institution Relationship Period
   */

  DR* getSTF_34(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, STF_34);
  }

  DR* getInstitutionRelationshipPeriod(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, STF_34);
  }

  bool isSTF_34(size_t index = 0) {
    try {
      return this->getObject(index, STF_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInstitutionRelationshipPeriod(size_t index = 0) {
    try {
      return this->getObject(index, STF_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expected Return Date
   */

  DT* getSTF_35(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, STF_35);
  }

  DT* getExpectedReturnDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, STF_35);
  }

  bool isSTF_35(size_t index = 0) {
    try {
      return this->getObject(index, STF_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpectedReturnDate(size_t index = 0) {
    try {
      return this->getObject(index, STF_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Cost Center Code
   */

  CWE* getSTF_36(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_36);
  }

  CWE* getCostCenterCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_36);
  }

  bool isSTF_36(size_t index = 0) {
    try {
      return this->getObject(index, STF_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCostCenterCode(size_t index = 0) {
    try {
      return this->getObject(index, STF_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Generic Classification Indicator
   */

  ID* getSTF_37(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, STF_37);
  }

  ID* getGenericClassificationIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, STF_37);
  }

  bool isSTF_37(size_t index = 0) {
    try {
      return this->getObject(index, STF_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGenericClassificationIndicator(size_t index = 0) {
    try {
      return this->getObject(index, STF_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inactive Reason Code
   */

  CWE* getSTF_38(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_38);
  }

  CWE* getInactiveReasonCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_38);
  }

  bool isSTF_38(size_t index = 0) {
    try {
      return this->getObject(index, STF_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInactiveReasonCode(size_t index = 0) {
    try {
      return this->getObject(index, STF_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Generic resource type or category
   */

  CWE* getSTF_39(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_39);
  }

  CWE* getGenericresourcetypeorcategory(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_39);
  }

  bool isSTF_39(size_t index = 0) {
    try {
      return this->getObject(index, STF_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGenericresourcetypeorcategory(size_t index = 0) {
    try {
      return this->getObject(index, STF_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Religion
   */

  CWE* getSTF_40(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_40);
  }

  CWE* getReligion(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, STF_40);
  }

  bool isSTF_40(size_t index = 0) {
    try {
      return this->getObject(index, STF_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReligion(size_t index = 0) {
    try {
      return this->getObject(index, STF_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Signature
   */

  ED* getSTF_41(size_t index = 0) {
    return (ED*)this->getObjectSafe(index, STF_41);
  }

  ED* getSignature(size_t index = 0) {
    return (ED*)this->getObjectSafe(index, STF_41);
  }

  bool isSTF_41(size_t index = 0) {
    try {
      return this->getObject(index, STF_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSignature(size_t index = 0) {
    try {
      return this->getObject(index, STF_41) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of STF */

} /* End of namespace HL7_29 */
#endif /* __STF_v29_H__ */
