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


#ifndef __RXD_v29_H__
#define __RXD_v29_H__

#include "../../common/Util.h"
#include "../datatype/CQ.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"
#include "../datatype/XAD.h"
#include "../datatype/XCN.h"
#include "../datatype/XTN.h"

namespace HL7_29 {

/* RXD */
class RXD : public HL7Segment {
 public:
  RXD() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    RXD_1,
    RXD_2,
    RXD_3,
    RXD_4,
    RXD_5,
    RXD_6,
    RXD_7,
    RXD_8,
    RXD_9,
    RXD_10,
    RXD_11,
    RXD_12,
    RXD_13,
    RXD_14,
    RXD_15,
    RXD_16,
    RXD_17,
    RXD_18,
    RXD_19,
    RXD_20,
    RXD_21,
    RXD_22,
    RXD_23,
    RXD_24,
    RXD_25,
    RXD_26,
    RXD_27,
    RXD_28,
    RXD_29,
    RXD_30,
    RXD_31,
    RXD_32,
    RXD_33,
    RXD_34,
    RXD_35,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "RXD"; }
  RXD* create() const { return new RXD(); }

 private:
  void init() {
    setName("RXD");
    /* Init members */
    addObject<NM>(RXD_1, "RXD.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXD_2, "RXD.2", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(RXD_3, "RXD.3", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXD_4, "RXD.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXD_5, "RXD.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXD_6, "RXD.6", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RXD_7, "RXD.7", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXD_8, "RXD.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RXD_9, "RXD.9", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(RXD_10, "RXD.10", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RXD_11, "RXD.11", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(RXD_12, "RXD.12", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RXD_13, "RXD.13", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RXD_14, "RXD.14", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXD_15, "RXD.15", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXD_16, "RXD.16", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXD_17, "RXD.17", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RXD_18, "RXD.18", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(RXD_19, "RXD.19", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXD_20, "RXD.20", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXD_21, "RXD.21", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXD_22, "RXD.22", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXD_23, "RXD.23", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RXD_24, "RXD.24", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXD_25, "RXD.25", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXD_26, "RXD.26", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXD_27, "RXD.27", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXD_28, "RXD.28", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXD_29, "RXD.29", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXD_30, "RXD.30", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(RXD_31, "RXD.31", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RXD_32, "RXD.32", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXD_33, "RXD.33", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(RXD_34, "RXD.34", HL7::initialized, HL7::repetition_off);
    addObject<EI>(RXD_35, "RXD.35", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Dispense Sub-ID Counter
   */

  NM* getRXD_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXD_1);
  }

  NM* getDispenseSubIDCounter(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXD_1);
  }

  bool isRXD_1(size_t index = 0) {
    try {
      return this->getObject(index, RXD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispenseSubIDCounter(size_t index = 0) {
    try {
      return this->getObject(index, RXD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense/Give Code
   */

  CWE* getRXD_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_2);
  }

  CWE* getDispenseGiveCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_2);
  }

  bool isRXD_2(size_t index = 0) {
    try {
      return this->getObject(index, RXD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispenseGiveCode(size_t index = 0) {
    try {
      return this->getObject(index, RXD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time Dispensed
   */

  DTM* getRXD_3(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RXD_3);
  }

  DTM* getDateTimeDispensed(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RXD_3);
  }

  bool isRXD_3(size_t index = 0) {
    try {
      return this->getObject(index, RXD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeDispensed(size_t index = 0) {
    try {
      return this->getObject(index, RXD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Actual Dispense Amount
   */

  NM* getRXD_4(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXD_4);
  }

  NM* getActualDispenseAmount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXD_4);
  }

  bool isRXD_4(size_t index = 0) {
    try {
      return this->getObject(index, RXD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActualDispenseAmount(size_t index = 0) {
    try {
      return this->getObject(index, RXD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Actual Dispense Units
   */

  CWE* getRXD_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_5);
  }

  CWE* getActualDispenseUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_5);
  }

  bool isRXD_5(size_t index = 0) {
    try {
      return this->getObject(index, RXD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActualDispenseUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Actual Dosage Form
   */

  CWE* getRXD_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_6);
  }

  CWE* getActualDosageForm(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_6);
  }

  bool isRXD_6(size_t index = 0) {
    try {
      return this->getObject(index, RXD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActualDosageForm(size_t index = 0) {
    try {
      return this->getObject(index, RXD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Prescription Number
   */

  ST* getRXD_7(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXD_7);
  }

  ST* getPrescriptionNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXD_7);
  }

  bool isRXD_7(size_t index = 0) {
    try {
      return this->getObject(index, RXD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrescriptionNumber(size_t index = 0) {
    try {
      return this->getObject(index, RXD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of Refills Remaining
   */

  NM* getRXD_8(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXD_8);
  }

  NM* getNumberofRefillsRemaining(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXD_8);
  }

  bool isRXD_8(size_t index = 0) {
    try {
      return this->getObject(index, RXD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberofRefillsRemaining(size_t index = 0) {
    try {
      return this->getObject(index, RXD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense Notes
   */

  ST* getRXD_9(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXD_9);
  }

  ST* getDispenseNotes(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXD_9);
  }

  bool isRXD_9(size_t index = 0) {
    try {
      return this->getObject(index, RXD_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispenseNotes(size_t index = 0) {
    try {
      return this->getObject(index, RXD_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispensing Provider
   */

  XCN* getRXD_10(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, RXD_10);
  }

  XCN* getDispensingProvider(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, RXD_10);
  }

  bool isRXD_10(size_t index = 0) {
    try {
      return this->getObject(index, RXD_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispensingProvider(size_t index = 0) {
    try {
      return this->getObject(index, RXD_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substitution Status
   */

  ID* getRXD_11(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXD_11);
  }

  ID* getSubstitutionStatus(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXD_11);
  }

  bool isRXD_11(size_t index = 0) {
    try {
      return this->getObject(index, RXD_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstitutionStatus(size_t index = 0) {
    try {
      return this->getObject(index, RXD_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Total Daily Dose
   */

  CQ* getRXD_12(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, RXD_12);
  }

  CQ* getTotalDailyDose(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, RXD_12);
  }

  bool isRXD_12(size_t index = 0) {
    try {
      return this->getObject(index, RXD_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTotalDailyDose(size_t index = 0) {
    try {
      return this->getObject(index, RXD_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense-to Location
   */

  ST* getRXD_13(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXD_13);
  }

  ST* getDispensetoLocation(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXD_13);
  }

  bool isRXD_13(size_t index = 0) {
    try {
      return this->getObject(index, RXD_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispensetoLocation(size_t index = 0) {
    try {
      return this->getObject(index, RXD_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Needs Human Review
   */

  ID* getRXD_14(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXD_14);
  }

  ID* getNeedsHumanReview(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXD_14);
  }

  bool isRXD_14(size_t index = 0) {
    try {
      return this->getObject(index, RXD_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNeedsHumanReview(size_t index = 0) {
    try {
      return this->getObject(index, RXD_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Special Dispensing Instructions
   */

  CWE* getRXD_15(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_15);
  }

  CWE* getSpecialDispensingInstructions(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_15);
  }

  bool isRXD_15(size_t index = 0) {
    try {
      return this->getObject(index, RXD_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialDispensingInstructions(size_t index = 0) {
    try {
      return this->getObject(index, RXD_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Actual Strength
   */

  NM* getRXD_16(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXD_16);
  }

  NM* getActualStrength(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXD_16);
  }

  bool isRXD_16(size_t index = 0) {
    try {
      return this->getObject(index, RXD_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActualStrength(size_t index = 0) {
    try {
      return this->getObject(index, RXD_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Actual Strength Unit
   */

  CWE* getRXD_17(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_17);
  }

  CWE* getActualStrengthUnit(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_17);
  }

  bool isRXD_17(size_t index = 0) {
    try {
      return this->getObject(index, RXD_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActualStrengthUnit(size_t index = 0) {
    try {
      return this->getObject(index, RXD_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance Lot Number
   */

  ST* getRXD_18(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXD_18);
  }

  ST* getSubstanceLotNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXD_18);
  }

  bool isRXD_18(size_t index = 0) {
    try {
      return this->getObject(index, RXD_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceLotNumber(size_t index = 0) {
    try {
      return this->getObject(index, RXD_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance Expiration Date
   */

  DTM* getRXD_19(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RXD_19);
  }

  DTM* getSubstanceExpirationDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RXD_19);
  }

  bool isRXD_19(size_t index = 0) {
    try {
      return this->getObject(index, RXD_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, RXD_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance Manufacturer Name
   */

  CWE* getRXD_20(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_20);
  }

  CWE* getSubstanceManufacturerName(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_20);
  }

  bool isRXD_20(size_t index = 0) {
    try {
      return this->getObject(index, RXD_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceManufacturerName(size_t index = 0) {
    try {
      return this->getObject(index, RXD_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Indication
   */

  CWE* getRXD_21(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_21);
  }

  CWE* getIndication(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_21);
  }

  bool isRXD_21(size_t index = 0) {
    try {
      return this->getObject(index, RXD_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIndication(size_t index = 0) {
    try {
      return this->getObject(index, RXD_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense Package Size
   */

  NM* getRXD_22(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXD_22);
  }

  NM* getDispensePackageSize(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXD_22);
  }

  bool isRXD_22(size_t index = 0) {
    try {
      return this->getObject(index, RXD_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispensePackageSize(size_t index = 0) {
    try {
      return this->getObject(index, RXD_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense Package Size Unit
   */

  CWE* getRXD_23(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_23);
  }

  CWE* getDispensePackageSizeUnit(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_23);
  }

  bool isRXD_23(size_t index = 0) {
    try {
      return this->getObject(index, RXD_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispensePackageSizeUnit(size_t index = 0) {
    try {
      return this->getObject(index, RXD_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense Package Method
   */

  ID* getRXD_24(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXD_24);
  }

  ID* getDispensePackageMethod(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXD_24);
  }

  bool isRXD_24(size_t index = 0) {
    try {
      return this->getObject(index, RXD_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispensePackageMethod(size_t index = 0) {
    try {
      return this->getObject(index, RXD_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Supplementary Code
   */

  CWE* getRXD_25(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_25);
  }

  CWE* getSupplementaryCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_25);
  }

  bool isRXD_25(size_t index = 0) {
    try {
      return this->getObject(index, RXD_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSupplementaryCode(size_t index = 0) {
    try {
      return this->getObject(index, RXD_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Initiating Location
   */

  CWE* getRXD_26(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_26);
  }

  CWE* getInitiatingLocation(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_26);
  }

  bool isRXD_26(size_t index = 0) {
    try {
      return this->getObject(index, RXD_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInitiatingLocation(size_t index = 0) {
    try {
      return this->getObject(index, RXD_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Packaging/Assembly Location
   */

  CWE* getRXD_27(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_27);
  }

  CWE* getPackagingAssemblyLocation(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_27);
  }

  bool isRXD_27(size_t index = 0) {
    try {
      return this->getObject(index, RXD_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPackagingAssemblyLocation(size_t index = 0) {
    try {
      return this->getObject(index, RXD_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Actual Drug Strength Volume
   */

  NM* getRXD_28(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXD_28);
  }

  NM* getActualDrugStrengthVolume(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXD_28);
  }

  bool isRXD_28(size_t index = 0) {
    try {
      return this->getObject(index, RXD_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActualDrugStrengthVolume(size_t index = 0) {
    try {
      return this->getObject(index, RXD_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Actual Drug Strength Volume Units
   */

  CWE* getRXD_29(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_29);
  }

  CWE* getActualDrugStrengthVolumeUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_29);
  }

  bool isRXD_29(size_t index = 0) {
    try {
      return this->getObject(index, RXD_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActualDrugStrengthVolumeUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXD_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense to Pharmacy
   */

  CWE* getRXD_30(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_30);
  }

  CWE* getDispensetoPharmacy(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_30);
  }

  bool isRXD_30(size_t index = 0) {
    try {
      return this->getObject(index, RXD_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispensetoPharmacy(size_t index = 0) {
    try {
      return this->getObject(index, RXD_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense to Pharmacy Address
   */

  XAD* getRXD_31(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, RXD_31);
  }

  XAD* getDispensetoPharmacyAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, RXD_31);
  }

  bool isRXD_31(size_t index = 0) {
    try {
      return this->getObject(index, RXD_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispensetoPharmacyAddress(size_t index = 0) {
    try {
      return this->getObject(index, RXD_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pharmacy Order Type
   */

  ID* getRXD_32(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXD_32);
  }

  ID* getPharmacyOrderType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXD_32);
  }

  bool isRXD_32(size_t index = 0) {
    try {
      return this->getObject(index, RXD_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPharmacyOrderType(size_t index = 0) {
    try {
      return this->getObject(index, RXD_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense Type
   */

  CWE* getRXD_33(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_33);
  }

  CWE* getDispenseType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXD_33);
  }

  bool isRXD_33(size_t index = 0) {
    try {
      return this->getObject(index, RXD_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispenseType(size_t index = 0) {
    try {
      return this->getObject(index, RXD_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pharmacy Phone Number
   */

  XTN* getRXD_34(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, RXD_34);
  }

  XTN* getPharmacyPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, RXD_34);
  }

  bool isRXD_34(size_t index = 0) {
    try {
      return this->getObject(index, RXD_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPharmacyPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, RXD_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense Tag Identifier
   */

  EI* getRXD_35(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, RXD_35);
  }

  EI* getDispenseTagIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, RXD_35);
  }

  bool isRXD_35(size_t index = 0) {
    try {
      return this->getObject(index, RXD_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispenseTagIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, RXD_35) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RXD */

} /* End of namespace HL7_29 */
#endif /* __RXD_v29_H__ */
