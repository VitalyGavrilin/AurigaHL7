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


#ifndef __OBX_v29_H__
#define __OBX_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/EIP.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/OG.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/XAD.h"
#include "../datatype/XCN.h"
#include "../datatype/XON.h"

namespace HL7_29 {

/* OBX */
class OBX : public HL7Segment {
 public:
  OBX() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    OBX_1,
    OBX_2,
    OBX_3,
    OBX_4,
    OBX_5,
    OBX_6,
    OBX_7,
    OBX_8,
    OBX_9,
    OBX_10,
    OBX_11,
    OBX_12,
    OBX_13,
    OBX_14,
    OBX_15,
    OBX_16,
    OBX_17,
    OBX_18,
    OBX_19,
    OBX_20,
    OBX_21,
    OBX_22,
    OBX_23,
    OBX_24,
    OBX_25,
    OBX_26,
    OBX_27,
    OBX_28,
    OBX_29,
    OBX_30,
    OBX_31,
    OBX_32,
    OBX_33,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "OBX"; }
  OBX* create() const { return new OBX(); }

 private:
  void init() {
    setName("OBX");
    /* Init members */
    addObject<SI>(OBX_1, "OBX.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OBX_2, "OBX.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OBX_3, "OBX.3", HL7::initialized, HL7::repetition_off);
    addObject<OG>(OBX_4, "OBX.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OBX_5, "OBX.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OBX_6, "OBX.6", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OBX_7, "OBX.7", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OBX_8, "OBX.8", HL7::initialized, HL7::repetition_off);
    addObject<NM>(OBX_9, "OBX.9", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OBX_10, "OBX.10", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OBX_11, "OBX.11", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(OBX_12, "OBX.12", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OBX_13, "OBX.13", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(OBX_14, "OBX.14", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OBX_15, "OBX.15", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(OBX_16, "OBX.16", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OBX_17, "OBX.17", HL7::initialized, HL7::repetition_off);
    addObject<EI>(OBX_18, "OBX.18", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(OBX_19, "OBX.19", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OBX_20, "OBX.20", HL7::initialized, HL7::repetition_off);
    addObject<EI>(OBX_21, "OBX.21", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(OBX_22, "OBX.22", HL7::initialized, HL7::repetition_off);
    addObject<XON>(OBX_23, "OBX.23", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(OBX_24, "OBX.24", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(OBX_25, "OBX.25", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OBX_26, "OBX.26", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OBX_27, "OBX.27", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OBX_28, "OBX.28", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OBX_29, "OBX.29", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OBX_30, "OBX.30", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OBX_31, "OBX.31", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OBX_32, "OBX.32", HL7::initialized, HL7::repetition_off);
    addObject<EIP>(OBX_33, "OBX.33", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID – OBX
   */

  SI* getOBX_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, OBX_1);
  }

  SI* getSetIDOBX(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, OBX_1);
  }

  bool isOBX_1(size_t index = 0) {
    try {
      return this->getObject(index, OBX_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDOBX(size_t index = 0) {
    try {
      return this->getObject(index, OBX_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Value Type
   */

  ID* getOBX_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBX_2);
  }

  ID* getValueType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBX_2);
  }

  bool isOBX_2(size_t index = 0) {
    try {
      return this->getObject(index, OBX_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValueType(size_t index = 0) {
    try {
      return this->getObject(index, OBX_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Observation Identifier
   */

  CWE* getOBX_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBX_3);
  }

  CWE* getObservationIdentifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBX_3);
  }

  bool isOBX_3(size_t index = 0) {
    try {
      return this->getObject(index, OBX_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isObservationIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, OBX_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Observation Sub-ID
   */

  OG* getOBX_4(size_t index = 0) {
    return (OG*)this->getObjectSafe(index, OBX_4);
  }

  OG* getObservationSubID(size_t index = 0) {
    return (OG*)this->getObjectSafe(index, OBX_4);
  }

  bool isOBX_4(size_t index = 0) {
    try {
      return this->getObject(index, OBX_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isObservationSubID(size_t index = 0) {
    try {
      return this->getObject(index, OBX_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Observation Value
   */

  ST* getOBX_5(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBX_5);
  }

  ST* getObservationValue(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBX_5);
  }

  bool isOBX_5(size_t index = 0) {
    try {
      return this->getObject(index, OBX_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isObservationValue(size_t index = 0) {
    try {
      return this->getObject(index, OBX_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Units
   */

  CWE* getOBX_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBX_6);
  }

  CWE* getUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBX_6);
  }

  bool isOBX_6(size_t index = 0) {
    try {
      return this->getObject(index, OBX_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUnits(size_t index = 0) {
    try {
      return this->getObject(index, OBX_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reference Range
   */

  ST* getOBX_7(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBX_7);
  }

  ST* getReferenceRange(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBX_7);
  }

  bool isOBX_7(size_t index = 0) {
    try {
      return this->getObject(index, OBX_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferenceRange(size_t index = 0) {
    try {
      return this->getObject(index, OBX_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Interpretation Codes
   */

  CWE* getOBX_8(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBX_8);
  }

  CWE* getInterpretationCodes(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBX_8);
  }

  bool isOBX_8(size_t index = 0) {
    try {
      return this->getObject(index, OBX_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInterpretationCodes(size_t index = 0) {
    try {
      return this->getObject(index, OBX_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Probability
   */

  NM* getOBX_9(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OBX_9);
  }

  NM* getProbability(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OBX_9);
  }

  bool isOBX_9(size_t index = 0) {
    try {
      return this->getObject(index, OBX_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProbability(size_t index = 0) {
    try {
      return this->getObject(index, OBX_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Nature of Abnormal Test
   */

  ID* getOBX_10(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBX_10);
  }

  ID* getNatureofAbnormalTest(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBX_10);
  }

  bool isOBX_10(size_t index = 0) {
    try {
      return this->getObject(index, OBX_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNatureofAbnormalTest(size_t index = 0) {
    try {
      return this->getObject(index, OBX_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Observation Result Status
   */

  ID* getOBX_11(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBX_11);
  }

  ID* getObservationResultStatus(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBX_11);
  }

  bool isOBX_11(size_t index = 0) {
    try {
      return this->getObject(index, OBX_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isObservationResultStatus(size_t index = 0) {
    try {
      return this->getObject(index, OBX_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Date of Reference Range
   */

  DTM* getOBX_12(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, OBX_12);
  }

  DTM* getEffectiveDateofReferenceRange(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, OBX_12);
  }

  bool isOBX_12(size_t index = 0) {
    try {
      return this->getObject(index, OBX_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveDateofReferenceRange(size_t index = 0) {
    try {
      return this->getObject(index, OBX_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * User Defined Access Checks
   */

  ST* getOBX_13(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBX_13);
  }

  ST* getUserDefinedAccessChecks(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBX_13);
  }

  bool isOBX_13(size_t index = 0) {
    try {
      return this->getObject(index, OBX_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUserDefinedAccessChecks(size_t index = 0) {
    try {
      return this->getObject(index, OBX_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time of the Observation
   */

  DTM* getOBX_14(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, OBX_14);
  }

  DTM* getDateTimeoftheObservation(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, OBX_14);
  }

  bool isOBX_14(size_t index = 0) {
    try {
      return this->getObject(index, OBX_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeoftheObservation(size_t index = 0) {
    try {
      return this->getObject(index, OBX_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Producer's ID
   */

  CWE* getOBX_15(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBX_15);
  }

  CWE* getProducersID(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBX_15);
  }

  bool isOBX_15(size_t index = 0) {
    try {
      return this->getObject(index, OBX_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProducersID(size_t index = 0) {
    try {
      return this->getObject(index, OBX_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Responsible Observer
   */

  XCN* getOBX_16(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, OBX_16);
  }

  XCN* getResponsibleObserver(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, OBX_16);
  }

  bool isOBX_16(size_t index = 0) {
    try {
      return this->getObject(index, OBX_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResponsibleObserver(size_t index = 0) {
    try {
      return this->getObject(index, OBX_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Observation Method
   */

  CWE* getOBX_17(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBX_17);
  }

  CWE* getObservationMethod(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBX_17);
  }

  bool isOBX_17(size_t index = 0) {
    try {
      return this->getObject(index, OBX_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isObservationMethod(size_t index = 0) {
    try {
      return this->getObject(index, OBX_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Equipment Instance Identifier
   */

  EI* getOBX_18(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, OBX_18);
  }

  EI* getEquipmentInstanceIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, OBX_18);
  }

  bool isOBX_18(size_t index = 0) {
    try {
      return this->getObject(index, OBX_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEquipmentInstanceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, OBX_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time of the Analysis
   */

  DTM* getOBX_19(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, OBX_19);
  }

  DTM* getDateTimeoftheAnalysis(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, OBX_19);
  }

  bool isOBX_19(size_t index = 0) {
    try {
      return this->getObject(index, OBX_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeoftheAnalysis(size_t index = 0) {
    try {
      return this->getObject(index, OBX_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Observation Site
   */

  CWE* getOBX_20(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBX_20);
  }

  CWE* getObservationSite(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBX_20);
  }

  bool isOBX_20(size_t index = 0) {
    try {
      return this->getObject(index, OBX_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isObservationSite(size_t index = 0) {
    try {
      return this->getObject(index, OBX_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Observation Instance Identifier
   */

  EI* getOBX_21(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, OBX_21);
  }

  EI* getObservationInstanceIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, OBX_21);
  }

  bool isOBX_21(size_t index = 0) {
    try {
      return this->getObject(index, OBX_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isObservationInstanceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, OBX_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Mood Code
   */

  CNE* getOBX_22(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, OBX_22);
  }

  CNE* getMoodCode(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, OBX_22);
  }

  bool isOBX_22(size_t index = 0) {
    try {
      return this->getObject(index, OBX_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMoodCode(size_t index = 0) {
    try {
      return this->getObject(index, OBX_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Performing Organization Name
   */

  XON* getOBX_23(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, OBX_23);
  }

  XON* getPerformingOrganizationName(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, OBX_23);
  }

  bool isOBX_23(size_t index = 0) {
    try {
      return this->getObject(index, OBX_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPerformingOrganizationName(size_t index = 0) {
    try {
      return this->getObject(index, OBX_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Performing Organization Address
   */

  XAD* getOBX_24(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, OBX_24);
  }

  XAD* getPerformingOrganizationAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, OBX_24);
  }

  bool isOBX_24(size_t index = 0) {
    try {
      return this->getObject(index, OBX_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPerformingOrganizationAddress(size_t index = 0) {
    try {
      return this->getObject(index, OBX_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Performing Organization Medical Director
   */

  XCN* getOBX_25(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, OBX_25);
  }

  XCN* getPerformingOrganizationMedicalDirector(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, OBX_25);
  }

  bool isOBX_25(size_t index = 0) {
    try {
      return this->getObject(index, OBX_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPerformingOrganizationMedicalDirector(size_t index = 0) {
    try {
      return this->getObject(index, OBX_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Results Release Category
   */

  ID* getOBX_26(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBX_26);
  }

  ID* getPatientResultsReleaseCategory(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBX_26);
  }

  bool isOBX_26(size_t index = 0) {
    try {
      return this->getObject(index, OBX_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientResultsReleaseCategory(size_t index = 0) {
    try {
      return this->getObject(index, OBX_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Root Cause
   */

  CWE* getOBX_27(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBX_27);
  }

  CWE* getRootCause(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBX_27);
  }

  bool isOBX_27(size_t index = 0) {
    try {
      return this->getObject(index, OBX_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRootCause(size_t index = 0) {
    try {
      return this->getObject(index, OBX_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Local Process Control
   */

  CWE* getOBX_28(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBX_28);
  }

  CWE* getLocalProcessControl(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBX_28);
  }

  bool isOBX_28(size_t index = 0) {
    try {
      return this->getObject(index, OBX_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocalProcessControl(size_t index = 0) {
    try {
      return this->getObject(index, OBX_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Observation Type
   */

  ID* getOBX_29(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBX_29);
  }

  ID* getObservationType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBX_29);
  }

  bool isOBX_29(size_t index = 0) {
    try {
      return this->getObject(index, OBX_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isObservationType(size_t index = 0) {
    try {
      return this->getObject(index, OBX_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Observation Sub-Type
   */

  ID* getOBX_30(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBX_30);
  }

  ID* getObservationSubType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBX_30);
  }

  bool isOBX_30(size_t index = 0) {
    try {
      return this->getObject(index, OBX_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isObservationSubType(size_t index = 0) {
    try {
      return this->getObject(index, OBX_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code
   */

  ID* getOBX_31(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBX_31);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBX_31);
  }

  bool isOBX_31(size_t index = 0) {
    try {
      return this->getObject(index, OBX_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, OBX_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Observation Value Absent Reason
   */

  CWE* getOBX_32(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBX_32);
  }

  CWE* getObservationValueAbsentReason(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBX_32);
  }

  bool isOBX_32(size_t index = 0) {
    try {
      return this->getObject(index, OBX_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isObservationValueAbsentReason(size_t index = 0) {
    try {
      return this->getObject(index, OBX_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Observation Related Specimen Identifier
   */

  EIP* getOBX_33(size_t index = 0) {
    return (EIP*)this->getObjectSafe(index, OBX_33);
  }

  EIP* getObservationRelatedSpecimenIdentifier(size_t index = 0) {
    return (EIP*)this->getObjectSafe(index, OBX_33);
  }

  bool isOBX_33(size_t index = 0) {
    try {
      return this->getObject(index, OBX_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isObservationRelatedSpecimenIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, OBX_33) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of OBX */

} /* End of namespace HL7_29 */
#endif /* __OBX_v29_H__ */
