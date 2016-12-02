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


#ifndef __PV1_v24_H__
#define __PV1_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0114.h"
#include "../datatype/CX.h"
#include "../datatype/DLD.h"
#include "../datatype/DT.h"
#include "../datatype/FC.h"
#include "../datatype/IS.h"
#include "../datatype/NM.h"
#include "../datatype/PL.h"
#include "../datatype/SI.h"
#include "../datatype/TS.h"
#include "../datatype/XCN.h"

namespace HL7_24 {

/* Patient visit */
class PV1 : public HL7Segment {
 public:
  PV1() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PV1_1,
    PV1_2,
    PV1_3,
    PV1_4,
    PV1_5,
    PV1_6,
    PV1_7,
    PV1_8,
    PV1_9,
    PV1_10,
    PV1_11,
    PV1_12,
    PV1_13,
    PV1_14,
    PV1_15,
    PV1_16,
    PV1_17,
    PV1_18,
    PV1_19,
    PV1_20,
    PV1_21,
    PV1_22,
    PV1_23,
    PV1_24,
    PV1_25,
    PV1_26,
    PV1_27,
    PV1_28,
    PV1_29,
    PV1_30,
    PV1_31,
    PV1_32,
    PV1_33,
    PV1_34,
    PV1_35,
    PV1_36,
    PV1_37,
    PV1_38,
    PV1_39,
    PV1_40,
    PV1_41,
    PV1_42,
    PV1_43,
    PV1_44,
    PV1_45,
    PV1_46,
    PV1_47,
    PV1_48,
    PV1_49,
    PV1_50,
    PV1_51,
    PV1_52,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PV1"; }
  PV1* create() const { return new PV1(); }

 private:
  void init() {
    setName("PV1");
    /* Init members */
    addObject<SI>(PV1_1, "PV1.1", HL7::optional, HL7::repetition_off);
    addObject<IS>(PV1_2, "PV1.2", HL7::initialized, HL7::repetition_off);
    addObject<PL>(PV1_3, "PV1.3", HL7::optional, HL7::repetition_off);
    addObject<IS>(PV1_4, "PV1.4", HL7::optional, HL7::repetition_off);
    addObject<CX>(PV1_5, "PV1.5", HL7::optional, HL7::repetition_off);
    addObject<PL>(PV1_6, "PV1.6", HL7::optional, HL7::repetition_off);
    addObject<XCN>(PV1_7, "PV1.7", HL7::optional, HL7::repetition_on);
    addObject<XCN>(PV1_8, "PV1.8", HL7::optional, HL7::repetition_on);
    addObject<XCN>(PV1_9, "PV1.9", HL7::optional, HL7::repetition_on);
    addObject<IS>(PV1_10, "PV1.10", HL7::optional, HL7::repetition_off);
    addObject<PL>(PV1_11, "PV1.11", HL7::optional, HL7::repetition_off);
    addObject<IS>(PV1_12, "PV1.12", HL7::optional, HL7::repetition_off);
    addObject<IS>(PV1_13, "PV1.13", HL7::optional, HL7::repetition_off);
    addObject<IS>(PV1_14, "PV1.14", HL7::optional, HL7::repetition_off);
    addObject<IS>(PV1_15, "PV1.15", HL7::optional, HL7::repetition_on);
    addObject<IS>(PV1_16, "PV1.16", HL7::optional, HL7::repetition_off);
    addObject<XCN>(PV1_17, "PV1.17", HL7::optional, HL7::repetition_on);
    addObject<IS>(PV1_18, "PV1.18", HL7::optional, HL7::repetition_off);
    addObject<CX>(PV1_19, "PV1.19", HL7::optional, HL7::repetition_off);
    addObject<FC>(PV1_20, "PV1.20", HL7::optional, HL7::repetition_on);
    addObject<IS>(PV1_21, "PV1.21", HL7::optional, HL7::repetition_off);
    addObject<IS>(PV1_22, "PV1.22", HL7::optional, HL7::repetition_off);
    addObject<IS>(PV1_23, "PV1.23", HL7::optional, HL7::repetition_off);
    addObject<IS>(PV1_24, "PV1.24", HL7::optional, HL7::repetition_on);
    addObject<DT>(PV1_25, "PV1.25", HL7::optional, HL7::repetition_on);
    addObject<NM>(PV1_26, "PV1.26", HL7::optional, HL7::repetition_on);
    addObject<NM>(PV1_27, "PV1.27", HL7::optional, HL7::repetition_on);
    addObject<IS>(PV1_28, "PV1.28", HL7::optional, HL7::repetition_off);
    addObject<IS>(PV1_29, "PV1.29", HL7::optional, HL7::repetition_off);
    addObject<DT>(PV1_30, "PV1.30", HL7::optional, HL7::repetition_off);
    addObject<IS>(PV1_31, "PV1.31", HL7::optional, HL7::repetition_off);
    addObject<NM>(PV1_32, "PV1.32", HL7::optional, HL7::repetition_off);
    addObject<NM>(PV1_33, "PV1.33", HL7::optional, HL7::repetition_off);
    addObject<IS>(PV1_34, "PV1.34", HL7::optional, HL7::repetition_off);
    addObject<DT>(PV1_35, "PV1.35", HL7::optional, HL7::repetition_off);
    addObject<IS>(PV1_36, "PV1.36", HL7::optional, HL7::repetition_off);
    addObject<DLD>(PV1_37, "PV1.37", HL7::optional, HL7::repetition_off);
    addObject<CE_0114>(PV1_38, "PV1.38", HL7::optional, HL7::repetition_off);
    addObject<IS>(PV1_39, "PV1.39", HL7::optional, HL7::repetition_off);
    addObject<IS>(PV1_40, "PV1.40", HL7::optional, HL7::repetition_off);
    addObject<IS>(PV1_41, "PV1.41", HL7::optional, HL7::repetition_off);
    addObject<PL>(PV1_42, "PV1.42", HL7::optional, HL7::repetition_off);
    addObject<PL>(PV1_43, "PV1.43", HL7::optional, HL7::repetition_off);
    addObject<TS>(PV1_44, "PV1.44", HL7::optional, HL7::repetition_off);
    addObject<TS>(PV1_45, "PV1.45", HL7::optional, HL7::repetition_on);
    addObject<NM>(PV1_46, "PV1.46", HL7::optional, HL7::repetition_off);
    addObject<NM>(PV1_47, "PV1.47", HL7::optional, HL7::repetition_off);
    addObject<NM>(PV1_48, "PV1.48", HL7::optional, HL7::repetition_off);
    addObject<NM>(PV1_49, "PV1.49", HL7::optional, HL7::repetition_off);
    addObject<CX>(PV1_50, "PV1.50", HL7::optional, HL7::repetition_off);
    addObject<IS>(PV1_51, "PV1.51", HL7::optional, HL7::repetition_off);
    addObject<XCN>(PV1_52, "PV1.52", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - PV1
   */

  SI* getPV1_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, PV1_1);
  }

  SI* getSetIDPV1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, PV1_1);
  }

  bool isPV1_1(size_t index = 0) {
    try {
      return this->getObject(index, PV1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDPV1(size_t index = 0) {
    try {
      return this->getObject(index, PV1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Class
   */

  IS* getPV1_2(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_2);
  }

  IS* getPatientClass(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_2);
  }

  bool isPV1_2(size_t index = 0) {
    try {
      return this->getObject(index, PV1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientClass(size_t index = 0) {
    try {
      return this->getObject(index, PV1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assigned Patient Location
   */

  PL* getPV1_3(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PV1_3);
  }

  PL* getAssignedPatientLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PV1_3);
  }

  bool isPV1_3(size_t index = 0) {
    try {
      return this->getObject(index, PV1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssignedPatientLocation(size_t index = 0) {
    try {
      return this->getObject(index, PV1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Admission Type
   */

  IS* getPV1_4(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_4);
  }

  IS* getAdmissionType(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_4);
  }

  bool isPV1_4(size_t index = 0) {
    try {
      return this->getObject(index, PV1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdmissionType(size_t index = 0) {
    try {
      return this->getObject(index, PV1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Preadmit Number
   */

  CX* getPV1_5(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PV1_5);
  }

  CX* getPreadmitNumber(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PV1_5);
  }

  bool isPV1_5(size_t index = 0) {
    try {
      return this->getObject(index, PV1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreadmitNumber(size_t index = 0) {
    try {
      return this->getObject(index, PV1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Prior Patient Location
   */

  PL* getPV1_6(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PV1_6);
  }

  PL* getPriorPatientLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PV1_6);
  }

  bool isPV1_6(size_t index = 0) {
    try {
      return this->getObject(index, PV1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPriorPatientLocation(size_t index = 0) {
    try {
      return this->getObject(index, PV1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Attending Doctor
   */

  XCN* getPV1_7(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PV1_7);
  }

  XCN* getAttendingDoctor(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PV1_7);
  }

  bool isPV1_7(size_t index = 0) {
    try {
      return this->getObject(index, PV1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAttendingDoctor(size_t index = 0) {
    try {
      return this->getObject(index, PV1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Referring Doctor
   */

  XCN* getPV1_8(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PV1_8);
  }

  XCN* getReferringDoctor(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PV1_8);
  }

  bool isPV1_8(size_t index = 0) {
    try {
      return this->getObject(index, PV1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferringDoctor(size_t index = 0) {
    try {
      return this->getObject(index, PV1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consulting Doctor
   */

  XCN* getPV1_9(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PV1_9);
  }

  XCN* getConsultingDoctor(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PV1_9);
  }

  bool isPV1_9(size_t index = 0) {
    try {
      return this->getObject(index, PV1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsultingDoctor(size_t index = 0) {
    try {
      return this->getObject(index, PV1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Hospital Service
   */

  IS* getPV1_10(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_10);
  }

  IS* getHospitalService(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_10);
  }

  bool isPV1_10(size_t index = 0) {
    try {
      return this->getObject(index, PV1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHospitalService(size_t index = 0) {
    try {
      return this->getObject(index, PV1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Temporary Location
   */

  PL* getPV1_11(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PV1_11);
  }

  PL* getTemporaryLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PV1_11);
  }

  bool isPV1_11(size_t index = 0) {
    try {
      return this->getObject(index, PV1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTemporaryLocation(size_t index = 0) {
    try {
      return this->getObject(index, PV1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Preadmit Test Indicator
   */

  IS* getPV1_12(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_12);
  }

  IS* getPreadmitTestIndicator(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_12);
  }

  bool isPV1_12(size_t index = 0) {
    try {
      return this->getObject(index, PV1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreadmitTestIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PV1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Re-admission Indicator
   */

  IS* getPV1_13(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_13);
  }

  IS* getReAdmissionIndicator(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_13);
  }

  bool isPV1_13(size_t index = 0) {
    try {
      return this->getObject(index, PV1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReAdmissionIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PV1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Admit Source
   */

  IS* getPV1_14(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_14);
  }

  IS* getAdmitSource(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_14);
  }

  bool isPV1_14(size_t index = 0) {
    try {
      return this->getObject(index, PV1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdmitSource(size_t index = 0) {
    try {
      return this->getObject(index, PV1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ambulatory Status
   */

  IS* getPV1_15(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_15);
  }

  IS* getAmbulatoryStatus(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_15);
  }

  bool isPV1_15(size_t index = 0) {
    try {
      return this->getObject(index, PV1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAmbulatoryStatus(size_t index = 0) {
    try {
      return this->getObject(index, PV1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * VIP Indicator
   */

  IS* getPV1_16(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_16);
  }

  IS* getVIPIndicator(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_16);
  }

  bool isPV1_16(size_t index = 0) {
    try {
      return this->getObject(index, PV1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVIPIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PV1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Admitting Doctor
   */

  XCN* getPV1_17(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PV1_17);
  }

  XCN* getAdmittingDoctor(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PV1_17);
  }

  bool isPV1_17(size_t index = 0) {
    try {
      return this->getObject(index, PV1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdmittingDoctor(size_t index = 0) {
    try {
      return this->getObject(index, PV1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Type
   */

  IS* getPV1_18(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_18);
  }

  IS* getPatientType(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_18);
  }

  bool isPV1_18(size_t index = 0) {
    try {
      return this->getObject(index, PV1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientType(size_t index = 0) {
    try {
      return this->getObject(index, PV1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Visit Number
   */

  CX* getPV1_19(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PV1_19);
  }

  CX* getVisitNumber(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PV1_19);
  }

  bool isPV1_19(size_t index = 0) {
    try {
      return this->getObject(index, PV1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVisitNumber(size_t index = 0) {
    try {
      return this->getObject(index, PV1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Financial Class
   */

  FC* getPV1_20(size_t index = 0) {
    return (FC*)this->getObjectSafe(index, PV1_20);
  }

  FC* getFinancialClass(size_t index = 0) {
    return (FC*)this->getObjectSafe(index, PV1_20);
  }

  bool isPV1_20(size_t index = 0) {
    try {
      return this->getObject(index, PV1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFinancialClass(size_t index = 0) {
    try {
      return this->getObject(index, PV1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Charge Price Indicator
   */

  IS* getPV1_21(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_21);
  }

  IS* getChargePriceIndicator(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_21);
  }

  bool isPV1_21(size_t index = 0) {
    try {
      return this->getObject(index, PV1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChargePriceIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PV1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Courtesy Code
   */

  IS* getPV1_22(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_22);
  }

  IS* getCourtesyCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_22);
  }

  bool isPV1_22(size_t index = 0) {
    try {
      return this->getObject(index, PV1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCourtesyCode(size_t index = 0) {
    try {
      return this->getObject(index, PV1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Credit Rating
   */

  IS* getPV1_23(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_23);
  }

  IS* getCreditRating(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_23);
  }

  bool isPV1_23(size_t index = 0) {
    try {
      return this->getObject(index, PV1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCreditRating(size_t index = 0) {
    try {
      return this->getObject(index, PV1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contract Code
   */

  IS* getPV1_24(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_24);
  }

  IS* getContractCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_24);
  }

  bool isPV1_24(size_t index = 0) {
    try {
      return this->getObject(index, PV1_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContractCode(size_t index = 0) {
    try {
      return this->getObject(index, PV1_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contract Effective Date
   */

  DT* getPV1_25(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PV1_25);
  }

  DT* getContractEffectiveDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PV1_25);
  }

  bool isPV1_25(size_t index = 0) {
    try {
      return this->getObject(index, PV1_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContractEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, PV1_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contract Amount
   */

  NM* getPV1_26(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PV1_26);
  }

  NM* getContractAmount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PV1_26);
  }

  bool isPV1_26(size_t index = 0) {
    try {
      return this->getObject(index, PV1_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContractAmount(size_t index = 0) {
    try {
      return this->getObject(index, PV1_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contract Period
   */

  NM* getPV1_27(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PV1_27);
  }

  NM* getContractPeriod(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PV1_27);
  }

  bool isPV1_27(size_t index = 0) {
    try {
      return this->getObject(index, PV1_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContractPeriod(size_t index = 0) {
    try {
      return this->getObject(index, PV1_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Interest Code
   */

  IS* getPV1_28(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_28);
  }

  IS* getInterestCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_28);
  }

  bool isPV1_28(size_t index = 0) {
    try {
      return this->getObject(index, PV1_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInterestCode(size_t index = 0) {
    try {
      return this->getObject(index, PV1_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transfer to Bad Debt Code
   */

  IS* getPV1_29(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_29);
  }

  IS* getTransferToBadDebtCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_29);
  }

  bool isPV1_29(size_t index = 0) {
    try {
      return this->getObject(index, PV1_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransferToBadDebtCode(size_t index = 0) {
    try {
      return this->getObject(index, PV1_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transfer to Bad Debt Date
   */

  DT* getPV1_30(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PV1_30);
  }

  DT* getTransferToBadDebtDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PV1_30);
  }

  bool isPV1_30(size_t index = 0) {
    try {
      return this->getObject(index, PV1_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransferToBadDebtDate(size_t index = 0) {
    try {
      return this->getObject(index, PV1_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Bad Debt Agency Code
   */

  IS* getPV1_31(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_31);
  }

  IS* getBadDebtAgencyCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_31);
  }

  bool isPV1_31(size_t index = 0) {
    try {
      return this->getObject(index, PV1_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBadDebtAgencyCode(size_t index = 0) {
    try {
      return this->getObject(index, PV1_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Bad Debt Transfer Amount
   */

  NM* getPV1_32(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PV1_32);
  }

  NM* getBadDebtTransferAmount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PV1_32);
  }

  bool isPV1_32(size_t index = 0) {
    try {
      return this->getObject(index, PV1_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBadDebtTransferAmount(size_t index = 0) {
    try {
      return this->getObject(index, PV1_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Bad Debt Recovery Amount
   */

  NM* getPV1_33(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PV1_33);
  }

  NM* getBadDebtRecoveryAmount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PV1_33);
  }

  bool isPV1_33(size_t index = 0) {
    try {
      return this->getObject(index, PV1_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBadDebtRecoveryAmount(size_t index = 0) {
    try {
      return this->getObject(index, PV1_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Delete Account Indicator
   */

  IS* getPV1_34(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_34);
  }

  IS* getDeleteAccountIndicator(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_34);
  }

  bool isPV1_34(size_t index = 0) {
    try {
      return this->getObject(index, PV1_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeleteAccountIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PV1_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Delete Account Date
   */

  DT* getPV1_35(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PV1_35);
  }

  DT* getDeleteAccountDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PV1_35);
  }

  bool isPV1_35(size_t index = 0) {
    try {
      return this->getObject(index, PV1_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeleteAccountDate(size_t index = 0) {
    try {
      return this->getObject(index, PV1_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Discharge Disposition
   */

  IS* getPV1_36(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_36);
  }

  IS* getDischargeDisposition(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_36);
  }

  bool isPV1_36(size_t index = 0) {
    try {
      return this->getObject(index, PV1_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDischargeDisposition(size_t index = 0) {
    try {
      return this->getObject(index, PV1_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Discharged to Location
   */

  DLD* getPV1_37(size_t index = 0) {
    return (DLD*)this->getObjectSafe(index, PV1_37);
  }

  DLD* getDischargedToLocation(size_t index = 0) {
    return (DLD*)this->getObjectSafe(index, PV1_37);
  }

  bool isPV1_37(size_t index = 0) {
    try {
      return this->getObject(index, PV1_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDischargedToLocation(size_t index = 0) {
    try {
      return this->getObject(index, PV1_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diet Type
   */

  CE_0114* getPV1_38(size_t index = 0) {
    return (CE_0114*)this->getObjectSafe(index, PV1_38);
  }

  CE_0114* getDietType(size_t index = 0) {
    return (CE_0114*)this->getObjectSafe(index, PV1_38);
  }

  bool isPV1_38(size_t index = 0) {
    try {
      return this->getObject(index, PV1_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDietType(size_t index = 0) {
    try {
      return this->getObject(index, PV1_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Servicing Facility
   */

  IS* getPV1_39(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_39);
  }

  IS* getServicingFacility(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_39);
  }

  bool isPV1_39(size_t index = 0) {
    try {
      return this->getObject(index, PV1_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isServicingFacility(size_t index = 0) {
    try {
      return this->getObject(index, PV1_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Bed Status
   */

  IS* getPV1_40(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_40);
  }

  IS* getBedStatus(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_40);
  }

  bool isPV1_40(size_t index = 0) {
    try {
      return this->getObject(index, PV1_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBedStatus(size_t index = 0) {
    try {
      return this->getObject(index, PV1_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Account Status
   */

  IS* getPV1_41(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_41);
  }

  IS* getAccountStatus(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_41);
  }

  bool isPV1_41(size_t index = 0) {
    try {
      return this->getObject(index, PV1_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccountStatus(size_t index = 0) {
    try {
      return this->getObject(index, PV1_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pending Location
   */

  PL* getPV1_42(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PV1_42);
  }

  PL* getPendingLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PV1_42);
  }

  bool isPV1_42(size_t index = 0) {
    try {
      return this->getObject(index, PV1_42) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPendingLocation(size_t index = 0) {
    try {
      return this->getObject(index, PV1_42) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Prior Temporary Location
   */

  PL* getPV1_43(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PV1_43);
  }

  PL* getPriorTemporaryLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PV1_43);
  }

  bool isPV1_43(size_t index = 0) {
    try {
      return this->getObject(index, PV1_43) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPriorTemporaryLocation(size_t index = 0) {
    try {
      return this->getObject(index, PV1_43) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Admit Date/Time
   */

  TS* getPV1_44(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PV1_44);
  }

  TS* getAdmitDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PV1_44);
  }

  bool isPV1_44(size_t index = 0) {
    try {
      return this->getObject(index, PV1_44) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdmitDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PV1_44) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Discharge Date/Time
   */

  TS* getPV1_45(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PV1_45);
  }

  TS* getDischargeDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PV1_45);
  }

  bool isPV1_45(size_t index = 0) {
    try {
      return this->getObject(index, PV1_45) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDischargeDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PV1_45) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Current Patient Balance
   */

  NM* getPV1_46(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PV1_46);
  }

  NM* getCurrentPatientBalance(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PV1_46);
  }

  bool isPV1_46(size_t index = 0) {
    try {
      return this->getObject(index, PV1_46) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCurrentPatientBalance(size_t index = 0) {
    try {
      return this->getObject(index, PV1_46) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Total Charges
   */

  NM* getPV1_47(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PV1_47);
  }

  NM* getTotalCharges(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PV1_47);
  }

  bool isPV1_47(size_t index = 0) {
    try {
      return this->getObject(index, PV1_47) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTotalCharges(size_t index = 0) {
    try {
      return this->getObject(index, PV1_47) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Total Adjustments
   */

  NM* getPV1_48(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PV1_48);
  }

  NM* getTotalAdjustments(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PV1_48);
  }

  bool isPV1_48(size_t index = 0) {
    try {
      return this->getObject(index, PV1_48) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTotalAdjustments(size_t index = 0) {
    try {
      return this->getObject(index, PV1_48) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Total Payments
   */

  NM* getPV1_49(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PV1_49);
  }

  NM* getTotalPayments(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PV1_49);
  }

  bool isPV1_49(size_t index = 0) {
    try {
      return this->getObject(index, PV1_49) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTotalPayments(size_t index = 0) {
    try {
      return this->getObject(index, PV1_49) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Visit ID
   */

  CX* getPV1_50(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PV1_50);
  }

  CX* getAlternateVisitID(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PV1_50);
  }

  bool isPV1_50(size_t index = 0) {
    try {
      return this->getObject(index, PV1_50) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateVisitID(size_t index = 0) {
    try {
      return this->getObject(index, PV1_50) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Visit Indicator
   */

  IS* getPV1_51(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_51);
  }

  IS* getVisitIndicator(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PV1_51);
  }

  bool isPV1_51(size_t index = 0) {
    try {
      return this->getObject(index, PV1_51) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVisitIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PV1_51) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Other Healthcare Provider
   */

  XCN* getPV1_52(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PV1_52);
  }

  XCN* getOtherHealthcareProvider(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PV1_52);
  }

  bool isPV1_52(size_t index = 0) {
    try {
      return this->getObject(index, PV1_52) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOtherHealthcareProvider(size_t index = 0) {
    try {
      return this->getObject(index, PV1_52) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PV1 */

} /* End of namespace HL7_24 */
#endif /* __PV1_v24_H__ */
