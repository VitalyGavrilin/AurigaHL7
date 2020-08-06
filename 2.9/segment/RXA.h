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


#ifndef __RXA_v29_H__
#define __RXA_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/PL.h"
#include "../datatype/ST.h"
#include "../datatype/XAD.h"
#include "../datatype/XCN.h"

namespace HL7_29 {

/* RXA */
class RXA : public HL7Segment {
 public:
  RXA() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    RXA_1,
    RXA_2,
    RXA_3,
    RXA_4,
    RXA_5,
    RXA_6,
    RXA_7,
    RXA_8,
    RXA_9,
    RXA_10,
    RXA_11,
    RXA_12,
    RXA_13,
    RXA_14,
    RXA_15,
    RXA_16,
    RXA_17,
    RXA_18,
    RXA_19,
    RXA_20,
    RXA_21,
    RXA_22,
    RXA_23,
    RXA_24,
    RXA_25,
    RXA_26,
    RXA_27,
    RXA_28,
    RXA_29,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "RXA"; }
  RXA* create() const { return new RXA(); }

 private:
  void init() {
    setName("RXA");
    /* Init members */
    addObject<NM>(RXA_1, "RXA.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXA_2, "RXA.2", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(RXA_3, "RXA.3", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(RXA_4, "RXA.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXA_5, "RXA.5", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXA_6, "RXA.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXA_7, "RXA.7", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXA_8, "RXA.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXA_9, "RXA.9", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(RXA_10, "RXA.10", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RXA_11, "RXA.11", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RXA_12, "RXA.12", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXA_13, "RXA.13", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXA_14, "RXA.14", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RXA_15, "RXA.15", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(RXA_16, "RXA.16", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXA_17, "RXA.17", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXA_18, "RXA.18", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXA_19, "RXA.19", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RXA_20, "RXA.20", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RXA_21, "RXA.21", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(RXA_22, "RXA.22", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXA_23, "RXA.23", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXA_24, "RXA.24", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXA_25, "RXA.25", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RXA_26, "RXA.26", HL7::initialized, HL7::repetition_off);
    addObject<PL>(RXA_27, "RXA.27", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(RXA_28, "RXA.28", HL7::initialized, HL7::repetition_off);
    addObject<EI>(RXA_29, "RXA.29", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Give Sub-ID Counter
   */

  NM* getRXA_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXA_1);
  }

  NM* getGiveSubIDCounter(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXA_1);
  }

  bool isRXA_1(size_t index = 0) {
    try {
      return this->getObject(index, RXA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGiveSubIDCounter(size_t index = 0) {
    try {
      return this->getObject(index, RXA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administration Sub-ID Counter
   */

  NM* getRXA_2(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXA_2);
  }

  NM* getAdministrationSubIDCounter(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXA_2);
  }

  bool isRXA_2(size_t index = 0) {
    try {
      return this->getObject(index, RXA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministrationSubIDCounter(size_t index = 0) {
    try {
      return this->getObject(index, RXA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time Start of Administration
   */

  DTM* getRXA_3(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RXA_3);
  }

  DTM* getDateTimeStartofAdministration(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RXA_3);
  }

  bool isRXA_3(size_t index = 0) {
    try {
      return this->getObject(index, RXA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeStartofAdministration(size_t index = 0) {
    try {
      return this->getObject(index, RXA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time End of Administration
   */

  DTM* getRXA_4(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RXA_4);
  }

  DTM* getDateTimeEndofAdministration(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RXA_4);
  }

  bool isRXA_4(size_t index = 0) {
    try {
      return this->getObject(index, RXA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeEndofAdministration(size_t index = 0) {
    try {
      return this->getObject(index, RXA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administered Code
   */

  CWE* getRXA_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXA_5);
  }

  CWE* getAdministeredCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXA_5);
  }

  bool isRXA_5(size_t index = 0) {
    try {
      return this->getObject(index, RXA_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministeredCode(size_t index = 0) {
    try {
      return this->getObject(index, RXA_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administered Amount
   */

  NM* getRXA_6(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXA_6);
  }

  NM* getAdministeredAmount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXA_6);
  }

  bool isRXA_6(size_t index = 0) {
    try {
      return this->getObject(index, RXA_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministeredAmount(size_t index = 0) {
    try {
      return this->getObject(index, RXA_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administered Units
   */

  CWE* getRXA_7(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXA_7);
  }

  CWE* getAdministeredUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXA_7);
  }

  bool isRXA_7(size_t index = 0) {
    try {
      return this->getObject(index, RXA_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministeredUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXA_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administered Dosage Form
   */

  CWE* getRXA_8(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXA_8);
  }

  CWE* getAdministeredDosageForm(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXA_8);
  }

  bool isRXA_8(size_t index = 0) {
    try {
      return this->getObject(index, RXA_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministeredDosageForm(size_t index = 0) {
    try {
      return this->getObject(index, RXA_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administration Notes
   */

  CWE* getRXA_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXA_9);
  }

  CWE* getAdministrationNotes(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXA_9);
  }

  bool isRXA_9(size_t index = 0) {
    try {
      return this->getObject(index, RXA_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministrationNotes(size_t index = 0) {
    try {
      return this->getObject(index, RXA_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administering Provider
   */

  XCN* getRXA_10(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, RXA_10);
  }

  XCN* getAdministeringProvider(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, RXA_10);
  }

  bool isRXA_10(size_t index = 0) {
    try {
      return this->getObject(index, RXA_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministeringProvider(size_t index = 0) {
    try {
      return this->getObject(index, RXA_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administered-at Location
   */

  ST* getRXA_11(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXA_11);
  }

  ST* getAdministeredatLocation(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXA_11);
  }

  bool isRXA_11(size_t index = 0) {
    try {
      return this->getObject(index, RXA_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministeredatLocation(size_t index = 0) {
    try {
      return this->getObject(index, RXA_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administered Per
   */

  ST* getRXA_12(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXA_12);
  }

  ST* getAdministeredPer(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXA_12);
  }

  bool isRXA_12(size_t index = 0) {
    try {
      return this->getObject(index, RXA_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministeredPer(size_t index = 0) {
    try {
      return this->getObject(index, RXA_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administered Strength
   */

  NM* getRXA_13(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXA_13);
  }

  NM* getAdministeredStrength(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXA_13);
  }

  bool isRXA_13(size_t index = 0) {
    try {
      return this->getObject(index, RXA_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministeredStrength(size_t index = 0) {
    try {
      return this->getObject(index, RXA_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administered Strength Units
   */

  CWE* getRXA_14(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXA_14);
  }

  CWE* getAdministeredStrengthUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXA_14);
  }

  bool isRXA_14(size_t index = 0) {
    try {
      return this->getObject(index, RXA_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministeredStrengthUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXA_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance Lot Number
   */

  ST* getRXA_15(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXA_15);
  }

  ST* getSubstanceLotNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RXA_15);
  }

  bool isRXA_15(size_t index = 0) {
    try {
      return this->getObject(index, RXA_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceLotNumber(size_t index = 0) {
    try {
      return this->getObject(index, RXA_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance Expiration Date
   */

  DTM* getRXA_16(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RXA_16);
  }

  DTM* getSubstanceExpirationDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RXA_16);
  }

  bool isRXA_16(size_t index = 0) {
    try {
      return this->getObject(index, RXA_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, RXA_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance Manufacturer Name
   */

  CWE* getRXA_17(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXA_17);
  }

  CWE* getSubstanceManufacturerName(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXA_17);
  }

  bool isRXA_17(size_t index = 0) {
    try {
      return this->getObject(index, RXA_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceManufacturerName(size_t index = 0) {
    try {
      return this->getObject(index, RXA_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance/Treatment Refusal Reason
   */

  CWE* getRXA_18(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXA_18);
  }

  CWE* getSubstanceTreatmentRefusalReason(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXA_18);
  }

  bool isRXA_18(size_t index = 0) {
    try {
      return this->getObject(index, RXA_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceTreatmentRefusalReason(size_t index = 0) {
    try {
      return this->getObject(index, RXA_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Indication
   */

  CWE* getRXA_19(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXA_19);
  }

  CWE* getIndication(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXA_19);
  }

  bool isRXA_19(size_t index = 0) {
    try {
      return this->getObject(index, RXA_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIndication(size_t index = 0) {
    try {
      return this->getObject(index, RXA_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Completion Status
   */

  ID* getRXA_20(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXA_20);
  }

  ID* getCompletionStatus(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXA_20);
  }

  bool isRXA_20(size_t index = 0) {
    try {
      return this->getObject(index, RXA_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCompletionStatus(size_t index = 0) {
    try {
      return this->getObject(index, RXA_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code – RXA
   */

  ID* getRXA_21(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXA_21);
  }

  ID* getActionCodeRXA(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXA_21);
  }

  bool isRXA_21(size_t index = 0) {
    try {
      return this->getObject(index, RXA_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCodeRXA(size_t index = 0) {
    try {
      return this->getObject(index, RXA_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * System Entry Date/Time
   */

  DTM* getRXA_22(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RXA_22);
  }

  DTM* getSystemEntryDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RXA_22);
  }

  bool isRXA_22(size_t index = 0) {
    try {
      return this->getObject(index, RXA_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSystemEntryDateTime(size_t index = 0) {
    try {
      return this->getObject(index, RXA_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administered Drug Strength Volume
   */

  NM* getRXA_23(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXA_23);
  }

  NM* getAdministeredDrugStrengthVolume(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXA_23);
  }

  bool isRXA_23(size_t index = 0) {
    try {
      return this->getObject(index, RXA_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministeredDrugStrengthVolume(size_t index = 0) {
    try {
      return this->getObject(index, RXA_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administered Drug Strength Volume Units
   */

  CWE* getRXA_24(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXA_24);
  }

  CWE* getAdministeredDrugStrengthVolumeUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXA_24);
  }

  bool isRXA_24(size_t index = 0) {
    try {
      return this->getObject(index, RXA_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministeredDrugStrengthVolumeUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXA_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administered Barcode Identifier
   */

  CWE* getRXA_25(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXA_25);
  }

  CWE* getAdministeredBarcodeIdentifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXA_25);
  }

  bool isRXA_25(size_t index = 0) {
    try {
      return this->getObject(index, RXA_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministeredBarcodeIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, RXA_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pharmacy Order Type
   */

  ID* getRXA_26(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXA_26);
  }

  ID* getPharmacyOrderType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXA_26);
  }

  bool isRXA_26(size_t index = 0) {
    try {
      return this->getObject(index, RXA_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPharmacyOrderType(size_t index = 0) {
    try {
      return this->getObject(index, RXA_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administer-at
   */

  PL* getRXA_27(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, RXA_27);
  }

  PL* getAdministerat(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, RXA_27);
  }

  bool isRXA_27(size_t index = 0) {
    try {
      return this->getObject(index, RXA_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministerat(size_t index = 0) {
    try {
      return this->getObject(index, RXA_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administered-at Address
   */

  XAD* getRXA_28(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, RXA_28);
  }

  XAD* getAdministeredatAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, RXA_28);
  }

  bool isRXA_28(size_t index = 0) {
    try {
      return this->getObject(index, RXA_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministeredatAddress(size_t index = 0) {
    try {
      return this->getObject(index, RXA_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administered Tag Identifier
   */

  EI* getRXA_29(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, RXA_29);
  }

  EI* getAdministeredTagIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, RXA_29);
  }

  bool isRXA_29(size_t index = 0) {
    try {
      return this->getObject(index, RXA_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministeredTagIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, RXA_29) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RXA */

} /* End of namespace HL7_29 */
#endif /* __RXA_v29_H__ */
