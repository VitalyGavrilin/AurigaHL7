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


#ifndef __PV2_v24_H__
#define __PV2_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0129.h"
#include "../datatype/CE_0218.h"
#include "../datatype/CE_0430.h"
#include "../datatype/CE_0431.h"
#include "../datatype/CE_0432.h"
#include "../datatype/CE_0433.h"
#include "../datatype/CE_0434.h"
#include "../datatype/CE_0435.h"
#include "../datatype/DT.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/NM.h"
#include "../datatype/PL.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"
#include "../datatype/XCN.h"
#include "../datatype/XON.h"

namespace HL7_24 {

/* Patient visit - additional information */
class PV2 : public HL7Segment {
 public:
  PV2() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PV2_1,
    PV2_2,
    PV2_3,
    PV2_4,
    PV2_5,
    PV2_6,
    PV2_7,
    PV2_8,
    PV2_9,
    PV2_10,
    PV2_11,
    PV2_12,
    PV2_13,
    PV2_14,
    PV2_15,
    PV2_16,
    PV2_17,
    PV2_18,
    PV2_19,
    PV2_20,
    PV2_21,
    PV2_22,
    PV2_23,
    PV2_24,
    PV2_25,
    PV2_26,
    PV2_27,
    PV2_28,
    PV2_29,
    PV2_30,
    PV2_31,
    PV2_32,
    PV2_33,
    PV2_34,
    PV2_35,
    PV2_36,
    PV2_37,
    PV2_38,
    PV2_39,
    PV2_40,
    PV2_41,
    PV2_42,
    PV2_43,
    PV2_44,
    PV2_45,
    PV2_46,
    PV2_47,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PV2"; }
  PV2* create() const { return new PV2(); }

 private:
  void init() {
    setName("PV2");
    /* Init members */
    addObject<PL>(PV2_1, "PV2.1", HL7::conditional, HL7::repetition_off);
    addObject<CE_0129>(PV2_2, "PV2.2", HL7::optional, HL7::repetition_off);
    addObject<CE>(PV2_3, "PV2.3", HL7::optional, HL7::repetition_off);
    addObject<CE>(PV2_4, "PV2.4", HL7::optional, HL7::repetition_off);
    addObject<ST>(PV2_5, "PV2.5", HL7::optional, HL7::repetition_on);
    addObject<ST>(PV2_6, "PV2.6", HL7::optional, HL7::repetition_off);
    addObject<IS>(PV2_7, "PV2.7", HL7::optional, HL7::repetition_on);
    addObject<TS>(PV2_8, "PV2.8", HL7::optional, HL7::repetition_off);
    addObject<TS>(PV2_9, "PV2.9", HL7::optional, HL7::repetition_off);
    addObject<NM>(PV2_10, "PV2.10", HL7::optional, HL7::repetition_off);
    addObject<NM>(PV2_11, "PV2.11", HL7::optional, HL7::repetition_off);
    addObject<ST>(PV2_12, "PV2.12", HL7::optional, HL7::repetition_off);
    addObject<XCN>(PV2_13, "PV2.13", HL7::optional, HL7::repetition_on);
    addObject<DT>(PV2_14, "PV2.14", HL7::optional, HL7::repetition_off);
    addObject<ID>(PV2_15, "PV2.15", HL7::optional, HL7::repetition_off);
    addObject<IS>(PV2_16, "PV2.16", HL7::optional, HL7::repetition_off);
    addObject<DT>(PV2_17, "PV2.17", HL7::optional, HL7::repetition_off);
    addObject<IS>(PV2_18, "PV2.18", HL7::optional, HL7::repetition_off);
    addObject<ID>(PV2_19, "PV2.19", HL7::optional, HL7::repetition_off);
    addObject<NM>(PV2_20, "PV2.20", HL7::optional, HL7::repetition_off);
    addObject<IS>(PV2_21, "PV2.21", HL7::optional, HL7::repetition_off);
    addObject<ID>(PV2_22, "PV2.22", HL7::optional, HL7::repetition_off);
    addObject<XON>(PV2_23, "PV2.23", HL7::optional, HL7::repetition_on);
    addObject<IS>(PV2_24, "PV2.24", HL7::optional, HL7::repetition_off);
    addObject<IS>(PV2_25, "PV2.25", HL7::optional, HL7::repetition_off);
    addObject<DT>(PV2_26, "PV2.26", HL7::optional, HL7::repetition_off);
    addObject<IS>(PV2_27, "PV2.27", HL7::optional, HL7::repetition_off);
    addObject<DT>(PV2_28, "PV2.28", HL7::optional, HL7::repetition_off);
    addObject<DT>(PV2_29, "PV2.29", HL7::optional, HL7::repetition_off);
    addObject<CE_0218>(PV2_30, "PV2.30", HL7::optional, HL7::repetition_off);
    addObject<IS>(PV2_31, "PV2.31", HL7::optional, HL7::repetition_off);
    addObject<ID>(PV2_32, "PV2.32", HL7::optional, HL7::repetition_off);
    addObject<TS>(PV2_33, "PV2.33", HL7::optional, HL7::repetition_off);
    addObject<ID>(PV2_34, "PV2.34", HL7::optional, HL7::repetition_off);
    addObject<ID>(PV2_35, "PV2.35", HL7::optional, HL7::repetition_off);
    addObject<ID>(PV2_36, "PV2.36", HL7::optional, HL7::repetition_off);
    addObject<ID>(PV2_37, "PV2.37", HL7::optional, HL7::repetition_off);
    addObject<CE_0430>(PV2_38, "PV2.38", HL7::optional, HL7::repetition_off);
    addObject<CE_0431>(PV2_39, "PV2.39", HL7::optional, HL7::repetition_on);
    addObject<CE_0432>(PV2_40, "PV2.40", HL7::optional, HL7::repetition_off);
    addObject<CE_0433>(PV2_41, "PV2.41", HL7::optional, HL7::repetition_on);
    addObject<CE_0434>(PV2_42, "PV2.42", HL7::optional, HL7::repetition_off);
    addObject<IS>(PV2_43, "PV2.43", HL7::optional, HL7::repetition_off);
    addObject<IS>(PV2_44, "PV2.44", HL7::optional, HL7::repetition_off);
    addObject<CE_0435>(PV2_45, "PV2.45", HL7::optional, HL7::repetition_on);
    addObject<DT>(PV2_46, "PV2.46", HL7::optional, HL7::repetition_off);
    addObject<TS>(PV2_47, "PV2.47", HL7::conditional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Prior Pending Location
   */

  PL* getPV2_1(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PV2_1);
  }

  PL* getPriorPendingLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PV2_1);
  }

  bool isPV2_1(size_t index = 0) {
    try {
      return this->getObject(index, PV2_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPriorPendingLocation(size_t index = 0) {
    try {
      return this->getObject(index, PV2_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Accommodation Code
   */

  CE_0129* getPV2_2(size_t index = 0) {
    return (CE_0129*)this->getObjectSafe(index, PV2_2);
  }

  CE_0129* getAccommodationCode(size_t index = 0) {
    return (CE_0129*)this->getObjectSafe(index, PV2_2);
  }

  bool isPV2_2(size_t index = 0) {
    try {
      return this->getObject(index, PV2_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccommodationCode(size_t index = 0) {
    try {
      return this->getObject(index, PV2_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Admit Reason
   */

  CE* getPV2_3(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PV2_3);
  }

  CE* getAdmitReason(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PV2_3);
  }

  bool isPV2_3(size_t index = 0) {
    try {
      return this->getObject(index, PV2_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdmitReason(size_t index = 0) {
    try {
      return this->getObject(index, PV2_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transfer Reason
   */

  CE* getPV2_4(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PV2_4);
  }

  CE* getTransferReason(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PV2_4);
  }

  bool isPV2_4(size_t index = 0) {
    try {
      return this->getObject(index, PV2_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransferReason(size_t index = 0) {
    try {
      return this->getObject(index, PV2_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Valuables
   */

  ST* getPV2_5(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PV2_5);
  }

  ST* getPatientValuables(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PV2_5);
  }

  bool isPV2_5(size_t index = 0) {
    try {
      return this->getObject(index, PV2_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientValuables(size_t index = 0) {
    try {
      return this->getObject(index, PV2_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Valuables Location
   */

  ST* getPV2_6(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PV2_6);
  }

  ST* getPatientValuablesLocation(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PV2_6);
  }

  bool isPV2_6(size_t index = 0) {
    try {
      return this->getObject(index, PV2_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientValuablesLocation(size_t index = 0) {
    try {
      return this->getObject(index, PV2_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Visit User Code
   */

  IS* getPV2_7(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV2_7);
  }

  IS* getVisitUserCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV2_7);
  }

  bool isPV2_7(size_t index = 0) {
    try {
      return this->getObject(index, PV2_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVisitUserCode(size_t index = 0) {
    try {
      return this->getObject(index, PV2_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expected Admit Date/Time
   */

  TS* getPV2_8(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PV2_8);
  }

  TS* getExpectedAdmitDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PV2_8);
  }

  bool isPV2_8(size_t index = 0) {
    try {
      return this->getObject(index, PV2_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpectedAdmitDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PV2_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expected Discharge Date/Time
   */

  TS* getPV2_9(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PV2_9);
  }

  TS* getExpectedDischargeDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PV2_9);
  }

  bool isPV2_9(size_t index = 0) {
    try {
      return this->getObject(index, PV2_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpectedDischargeDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PV2_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Estimated Length of Inpatient Stay
   */

  NM* getPV2_10(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PV2_10);
  }

  NM* getEstimatedLengthOfInpatientStay(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PV2_10);
  }

  bool isPV2_10(size_t index = 0) {
    try {
      return this->getObject(index, PV2_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEstimatedLengthOfInpatientStay(size_t index = 0) {
    try {
      return this->getObject(index, PV2_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Actual Length of Inpatient Stay
   */

  NM* getPV2_11(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PV2_11);
  }

  NM* getActualLengthOfInpatientStay(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PV2_11);
  }

  bool isPV2_11(size_t index = 0) {
    try {
      return this->getObject(index, PV2_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActualLengthOfInpatientStay(size_t index = 0) {
    try {
      return this->getObject(index, PV2_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Visit Description
   */

  ST* getPV2_12(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PV2_12);
  }

  ST* getVisitDescription(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PV2_12);
  }

  bool isPV2_12(size_t index = 0) {
    try {
      return this->getObject(index, PV2_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVisitDescription(size_t index = 0) {
    try {
      return this->getObject(index, PV2_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Referral Source Code
   */

  XCN* getPV2_13(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PV2_13);
  }

  XCN* getReferralSourceCode(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PV2_13);
  }

  bool isPV2_13(size_t index = 0) {
    try {
      return this->getObject(index, PV2_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferralSourceCode(size_t index = 0) {
    try {
      return this->getObject(index, PV2_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Previous Service Date
   */

  DT* getPV2_14(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PV2_14);
  }

  DT* getPreviousServiceDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PV2_14);
  }

  bool isPV2_14(size_t index = 0) {
    try {
      return this->getObject(index, PV2_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreviousServiceDate(size_t index = 0) {
    try {
      return this->getObject(index, PV2_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Employment Illness Related Indicator
   */

  ID* getPV2_15(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PV2_15);
  }

  ID* getEmploymentIllnessRelatedIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PV2_15);
  }

  bool isPV2_15(size_t index = 0) {
    try {
      return this->getObject(index, PV2_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEmploymentIllnessRelatedIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PV2_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Purge Status Code
   */

  IS* getPV2_16(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV2_16);
  }

  IS* getPurgeStatusCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV2_16);
  }

  bool isPV2_16(size_t index = 0) {
    try {
      return this->getObject(index, PV2_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPurgeStatusCode(size_t index = 0) {
    try {
      return this->getObject(index, PV2_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Purge Status Date
   */

  DT* getPV2_17(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PV2_17);
  }

  DT* getPurgeStatusDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PV2_17);
  }

  bool isPV2_17(size_t index = 0) {
    try {
      return this->getObject(index, PV2_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPurgeStatusDate(size_t index = 0) {
    try {
      return this->getObject(index, PV2_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Special Program Code
   */

  IS* getPV2_18(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV2_18);
  }

  IS* getSpecialProgramCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV2_18);
  }

  bool isPV2_18(size_t index = 0) {
    try {
      return this->getObject(index, PV2_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialProgramCode(size_t index = 0) {
    try {
      return this->getObject(index, PV2_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Retention Indicator
   */

  ID* getPV2_19(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PV2_19);
  }

  ID* getRetentionIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PV2_19);
  }

  bool isPV2_19(size_t index = 0) {
    try {
      return this->getObject(index, PV2_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRetentionIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PV2_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expected Number of Insurance Plans
   */

  NM* getPV2_20(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PV2_20);
  }

  NM* getExpectedNumberOfInsurancePlans(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PV2_20);
  }

  bool isPV2_20(size_t index = 0) {
    try {
      return this->getObject(index, PV2_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpectedNumberOfInsurancePlans(size_t index = 0) {
    try {
      return this->getObject(index, PV2_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Visit Publicity Code
   */

  IS* getPV2_21(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV2_21);
  }

  IS* getVisitPublicityCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV2_21);
  }

  bool isPV2_21(size_t index = 0) {
    try {
      return this->getObject(index, PV2_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVisitPublicityCode(size_t index = 0) {
    try {
      return this->getObject(index, PV2_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Visit Protection Indicator
   */

  ID* getPV2_22(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PV2_22);
  }

  ID* getVisitProtectionIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PV2_22);
  }

  bool isPV2_22(size_t index = 0) {
    try {
      return this->getObject(index, PV2_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVisitProtectionIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PV2_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Clinic Organization Name
   */

  XON* getPV2_23(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PV2_23);
  }

  XON* getClinicOrganizationName(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PV2_23);
  }

  bool isPV2_23(size_t index = 0) {
    try {
      return this->getObject(index, PV2_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isClinicOrganizationName(size_t index = 0) {
    try {
      return this->getObject(index, PV2_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Status Code
   */

  IS* getPV2_24(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV2_24);
  }

  IS* getPatientStatusCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV2_24);
  }

  bool isPV2_24(size_t index = 0) {
    try {
      return this->getObject(index, PV2_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientStatusCode(size_t index = 0) {
    try {
      return this->getObject(index, PV2_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Visit Priority Code
   */

  IS* getPV2_25(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV2_25);
  }

  IS* getVisitPriorityCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV2_25);
  }

  bool isPV2_25(size_t index = 0) {
    try {
      return this->getObject(index, PV2_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVisitPriorityCode(size_t index = 0) {
    try {
      return this->getObject(index, PV2_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Previous Treatment Date
   */

  DT* getPV2_26(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PV2_26);
  }

  DT* getPreviousTreatmentDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PV2_26);
  }

  bool isPV2_26(size_t index = 0) {
    try {
      return this->getObject(index, PV2_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreviousTreatmentDate(size_t index = 0) {
    try {
      return this->getObject(index, PV2_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expected Discharge Disposition
   */

  IS* getPV2_27(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV2_27);
  }

  IS* getExpectedDischargeDisposition(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV2_27);
  }

  bool isPV2_27(size_t index = 0) {
    try {
      return this->getObject(index, PV2_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpectedDischargeDisposition(size_t index = 0) {
    try {
      return this->getObject(index, PV2_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Signature on File Date
   */

  DT* getPV2_28(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PV2_28);
  }

  DT* getSignatureOnFileDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PV2_28);
  }

  bool isPV2_28(size_t index = 0) {
    try {
      return this->getObject(index, PV2_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSignatureOnFileDate(size_t index = 0) {
    try {
      return this->getObject(index, PV2_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * First Similar Illness Date
   */

  DT* getPV2_29(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PV2_29);
  }

  DT* getFirstSimilarIllnessDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PV2_29);
  }

  bool isPV2_29(size_t index = 0) {
    try {
      return this->getObject(index, PV2_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFirstSimilarIllnessDate(size_t index = 0) {
    try {
      return this->getObject(index, PV2_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Charge Adjustment Code
   */

  CE_0218* getPV2_30(size_t index = 0) {
    return (CE_0218*)this->getObjectSafe(index, PV2_30);
  }

  CE_0218* getPatientChargeAdjustmentCode(size_t index = 0) {
    return (CE_0218*)this->getObjectSafe(index, PV2_30);
  }

  bool isPV2_30(size_t index = 0) {
    try {
      return this->getObject(index, PV2_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientChargeAdjustmentCode(size_t index = 0) {
    try {
      return this->getObject(index, PV2_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Recurring Service Code
   */

  IS* getPV2_31(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV2_31);
  }

  IS* getRecurringServiceCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV2_31);
  }

  bool isPV2_31(size_t index = 0) {
    try {
      return this->getObject(index, PV2_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRecurringServiceCode(size_t index = 0) {
    try {
      return this->getObject(index, PV2_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Billing Media Code
   */

  ID* getPV2_32(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PV2_32);
  }

  ID* getBillingMediaCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PV2_32);
  }

  bool isPV2_32(size_t index = 0) {
    try {
      return this->getObject(index, PV2_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBillingMediaCode(size_t index = 0) {
    try {
      return this->getObject(index, PV2_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expected Surgery Date and Time
   */

  TS* getPV2_33(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PV2_33);
  }

  TS* getExpectedSurgeryDateAndTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PV2_33);
  }

  bool isPV2_33(size_t index = 0) {
    try {
      return this->getObject(index, PV2_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpectedSurgeryDateAndTime(size_t index = 0) {
    try {
      return this->getObject(index, PV2_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military Partnership Code
   */

  ID* getPV2_34(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PV2_34);
  }

  ID* getMilitaryPartnershipCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PV2_34);
  }

  bool isPV2_34(size_t index = 0) {
    try {
      return this->getObject(index, PV2_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitaryPartnershipCode(size_t index = 0) {
    try {
      return this->getObject(index, PV2_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military Non-Availability Code
   */

  ID* getPV2_35(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PV2_35);
  }

  ID* getMilitaryNonAvailabilityCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PV2_35);
  }

  bool isPV2_35(size_t index = 0) {
    try {
      return this->getObject(index, PV2_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitaryNonAvailabilityCode(size_t index = 0) {
    try {
      return this->getObject(index, PV2_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Newborn Baby Indicator
   */

  ID* getPV2_36(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PV2_36);
  }

  ID* getNewbornBabyIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PV2_36);
  }

  bool isPV2_36(size_t index = 0) {
    try {
      return this->getObject(index, PV2_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNewbornBabyIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PV2_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Baby Detained Indicator
   */

  ID* getPV2_37(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PV2_37);
  }

  ID* getBabyDetainedIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PV2_37);
  }

  bool isPV2_37(size_t index = 0) {
    try {
      return this->getObject(index, PV2_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBabyDetainedIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PV2_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Mode of Arrival Code
   */

  CE_0430* getPV2_38(size_t index = 0) {
    return (CE_0430*)this->getObjectSafe(index, PV2_38);
  }

  CE_0430* getModeOfArrivalCode(size_t index = 0) {
    return (CE_0430*)this->getObjectSafe(index, PV2_38);
  }

  bool isPV2_38(size_t index = 0) {
    try {
      return this->getObject(index, PV2_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isModeOfArrivalCode(size_t index = 0) {
    try {
      return this->getObject(index, PV2_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Recreational Drug Use Code
   */

  CE_0431* getPV2_39(size_t index = 0) {
    return (CE_0431*)this->getObjectSafe(index, PV2_39);
  }

  CE_0431* getRecreationalDrugUseCode(size_t index = 0) {
    return (CE_0431*)this->getObjectSafe(index, PV2_39);
  }

  bool isPV2_39(size_t index = 0) {
    try {
      return this->getObject(index, PV2_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRecreationalDrugUseCode(size_t index = 0) {
    try {
      return this->getObject(index, PV2_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Admission Level of Care Code
   */

  CE_0432* getPV2_40(size_t index = 0) {
    return (CE_0432*)this->getObjectSafe(index, PV2_40);
  }

  CE_0432* getAdmissionLevelOfCareCode(size_t index = 0) {
    return (CE_0432*)this->getObjectSafe(index, PV2_40);
  }

  bool isPV2_40(size_t index = 0) {
    try {
      return this->getObject(index, PV2_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdmissionLevelOfCareCode(size_t index = 0) {
    try {
      return this->getObject(index, PV2_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Precaution Code
   */

  CE_0433* getPV2_41(size_t index = 0) {
    return (CE_0433*)this->getObjectSafe(index, PV2_41);
  }

  CE_0433* getPrecautionCode(size_t index = 0) {
    return (CE_0433*)this->getObjectSafe(index, PV2_41);
  }

  bool isPV2_41(size_t index = 0) {
    try {
      return this->getObject(index, PV2_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrecautionCode(size_t index = 0) {
    try {
      return this->getObject(index, PV2_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Condition Code
   */

  CE_0434* getPV2_42(size_t index = 0) {
    return (CE_0434*)this->getObjectSafe(index, PV2_42);
  }

  CE_0434* getPatientConditionCode(size_t index = 0) {
    return (CE_0434*)this->getObjectSafe(index, PV2_42);
  }

  bool isPV2_42(size_t index = 0) {
    try {
      return this->getObject(index, PV2_42) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientConditionCode(size_t index = 0) {
    try {
      return this->getObject(index, PV2_42) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Living Will Code
   */

  IS* getPV2_43(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV2_43);
  }

  IS* getLivingWillCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV2_43);
  }

  bool isPV2_43(size_t index = 0) {
    try {
      return this->getObject(index, PV2_43) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLivingWillCode(size_t index = 0) {
    try {
      return this->getObject(index, PV2_43) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Organ Donor Code
   */

  IS* getPV2_44(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV2_44);
  }

  IS* getOrganDonorCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV2_44);
  }

  bool isPV2_44(size_t index = 0) {
    try {
      return this->getObject(index, PV2_44) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrganDonorCode(size_t index = 0) {
    try {
      return this->getObject(index, PV2_44) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Advance Directive Code
   */

  CE_0435* getPV2_45(size_t index = 0) {
    return (CE_0435*)this->getObjectSafe(index, PV2_45);
  }

  CE_0435* getAdvanceDirectiveCode(size_t index = 0) {
    return (CE_0435*)this->getObjectSafe(index, PV2_45);
  }

  bool isPV2_45(size_t index = 0) {
    try {
      return this->getObject(index, PV2_45) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdvanceDirectiveCode(size_t index = 0) {
    try {
      return this->getObject(index, PV2_45) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Status Effective Date
   */

  DT* getPV2_46(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PV2_46);
  }

  DT* getPatientStatusEffectiveDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PV2_46);
  }

  bool isPV2_46(size_t index = 0) {
    try {
      return this->getObject(index, PV2_46) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientStatusEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, PV2_46) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expected LOA Return Date/Time
   */

  TS* getPV2_47(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PV2_47);
  }

  TS* getExpectedLOAReturnDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PV2_47);
  }

  bool isPV2_47(size_t index = 0) {
    try {
      return this->getObject(index, PV2_47) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpectedLOAReturnDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PV2_47) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PV2 */

} /* End of namespace HL7_24 */
#endif /* __PV2_v24_H__ */
