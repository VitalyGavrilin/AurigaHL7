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


#ifndef __OM1_v29_H__
#define __OM1_v29_H__

#include "../../common/Util.h"
#include "../datatype/CQ.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/NR.h"
#include "../datatype/ST.h"
#include "../datatype/TX.h"
#include "../datatype/XAD.h"
#include "../datatype/XTN.h"

namespace HL7_29 {

/* OM1 */
class OM1 : public HL7Segment {
 public:
  OM1() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    OM1_1,
    OM1_2,
    OM1_3,
    OM1_4,
    OM1_5,
    OM1_6,
    OM1_7,
    OM1_8,
    OM1_9,
    OM1_10,
    OM1_11,
    OM1_12,
    OM1_13,
    OM1_14,
    OM1_15,
    OM1_16,
    OM1_17,
    OM1_18,
    OM1_19,
    OM1_20,
    OM1_21,
    OM1_22,
    OM1_23,
    OM1_24,
    OM1_25,
    OM1_26,
    OM1_27,
    OM1_28,
    OM1_29,
    OM1_30,
    OM1_31,
    OM1_32,
    OM1_33,
    OM1_34,
    OM1_35,
    OM1_36,
    OM1_37,
    OM1_38,
    OM1_39,
    OM1_40,
    OM1_41,
    OM1_42,
    OM1_43,
    OM1_44,
    OM1_45,
    OM1_46,
    OM1_47,
    OM1_48,
    OM1_49,
    OM1_50,
    OM1_51,
    OM1_52,
    OM1_53,
    OM1_54,
    OM1_55,
    OM1_56,
    OM1_57,
    OM1_58,
    OM1_59,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "OM1"; }
  OM1* create() const { return new OM1(); }

 private:
  void init() {
    setName("OM1");
    /* Init members */
    addObject<NM>(OM1_1, "OM1.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM1_2, "OM1.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OM1_3, "OM1.3", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OM1_4, "OM1.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM1_5, "OM1.5", HL7::initialized, HL7::repetition_off);
    addObject<TX>(OM1_6, "OM1.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM1_7, "OM1.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OM1_8, "OM1.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OM1_9, "OM1.9", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OM1_10, "OM1.10", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OM1_11, "OM1.11", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OM1_12, "OM1.12", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM1_13, "OM1.13", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM1_14, "OM1.14", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OM1_15, "OM1.15", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM1_16, "OM1.16", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(OM1_17, "OM1.17", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM1_18, "OM1.18", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM1_19, "OM1.19", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OM1_20, "OM1.20", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(OM1_21, "OM1.21", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(OM1_22, "OM1.22", HL7::initialized, HL7::repetition_off);
    addObject<NM>(OM1_23, "OM1.23", HL7::initialized, HL7::repetition_off);
    addObject<NM>(OM1_24, "OM1.24", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OM1_25, "OM1.25", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OM1_26, "OM1.26", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM1_27, "OM1.27", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(OM1_28, "OM1.28", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(OM1_29, "OM1.29", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM1_30, "OM1.30", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM1_31, "OM1.31", HL7::initialized, HL7::repetition_off);
    addObject<TX>(OM1_32, "OM1.32", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM1_33, "OM1.33", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM1_34, "OM1.34", HL7::initialized, HL7::repetition_off);
    addObject<TX>(OM1_35, "OM1.35", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM1_36, "OM1.36", HL7::initialized, HL7::repetition_off);
    addObject<TX>(OM1_37, "OM1.37", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM1_38, "OM1.38", HL7::initialized, HL7::repetition_off);
    addObject<TX>(OM1_39, "OM1.39", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OM1_40, "OM1.40", HL7::initialized, HL7::repetition_off);
    addObject<TX>(OM1_41, "OM1.41", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM1_42, "OM1.42", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM1_43, "OM1.43", HL7::initialized, HL7::repetition_off);
    addObject<TX>(OM1_44, "OM1.44", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM1_45, "OM1.45", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM1_46, "OM1.46", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM1_47, "OM1.47", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OM1_48, "OM1.48", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OM1_49, "OM1.49", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM1_50, "OM1.50", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OM1_51, "OM1.51", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM1_52, "OM1.52", HL7::initialized, HL7::repetition_off);
    addObject<TX>(OM1_53, "OM1.53", HL7::initialized, HL7::repetition_off);
    addObject<TX>(OM1_54, "OM1.54", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM1_55, "OM1.55", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM1_56, "OM1.56", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(OM1_57, "OM1.57", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM1_58, "OM1.58", HL7::initialized, HL7::repetition_off);
    addObject<NR>(OM1_59, "OM1.59", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Sequence Number - Test/Observation Master
   */

  NM* getOM1_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM1_1);
  }

  NM* getSequenceNumberTestObservationMaster(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM1_1);
  }

  bool isOM1_1(size_t index = 0) {
    try {
      return this->getObject(index, OM1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSequenceNumberTestObservationMaster(size_t index = 0) {
    try {
      return this->getObject(index, OM1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Producer's Service/Test/Observation ID
   */

  CWE* getOM1_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_2);
  }

  CWE* getProducersServiceTestObservationID(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_2);
  }

  bool isOM1_2(size_t index = 0) {
    try {
      return this->getObject(index, OM1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProducersServiceTestObservationID(size_t index = 0) {
    try {
      return this->getObject(index, OM1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Permitted Data Types
   */

  ID* getOM1_3(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM1_3);
  }

  ID* getPermittedDataTypes(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM1_3);
  }

  bool isOM1_3(size_t index = 0) {
    try {
      return this->getObject(index, OM1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPermittedDataTypes(size_t index = 0) {
    try {
      return this->getObject(index, OM1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Required
   */

  ID* getOM1_4(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM1_4);
  }

  ID* getSpecimenRequired(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM1_4);
  }

  bool isOM1_4(size_t index = 0) {
    try {
      return this->getObject(index, OM1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenRequired(size_t index = 0) {
    try {
      return this->getObject(index, OM1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Producer ID
   */

  CWE* getOM1_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_5);
  }

  CWE* getProducerID(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_5);
  }

  bool isOM1_5(size_t index = 0) {
    try {
      return this->getObject(index, OM1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProducerID(size_t index = 0) {
    try {
      return this->getObject(index, OM1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Observation Description
   */

  TX* getOM1_6(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM1_6);
  }

  TX* getObservationDescription(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM1_6);
  }

  bool isOM1_6(size_t index = 0) {
    try {
      return this->getObject(index, OM1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isObservationDescription(size_t index = 0) {
    try {
      return this->getObject(index, OM1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Other Service/Test/Observation IDs for the
   */

  CWE* getOM1_7(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_7);
  }

  CWE* getOtherServiceTestObservationIDsforthe(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_7);
  }

  bool isOM1_7(size_t index = 0) {
    try {
      return this->getObject(index, OM1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOtherServiceTestObservationIDsforthe(size_t index = 0) {
    try {
      return this->getObject(index, OM1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Other Names8
   */

  ST* getOM1_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM1_8);
  }

  ST* getOtherNames8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM1_8);
  }

  bool isOM1_8(size_t index = 0) {
    try {
      return this->getObject(index, OM1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOtherNames8(size_t index = 0) {
    try {
      return this->getObject(index, OM1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Preferred Report Name for the Observation
   */

  ST* getOM1_9(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM1_9);
  }

  ST* getPreferredReportNamefortheObservation(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM1_9);
  }

  bool isOM1_9(size_t index = 0) {
    try {
      return this->getObject(index, OM1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreferredReportNamefortheObservation(size_t index = 0) {
    try {
      return this->getObject(index, OM1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Preferred Short Name or Mnemonic for the
   */

  ST* getOM1_10(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM1_10);
  }

  ST* getPreferredShortNameorMnemonicforthe(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM1_10);
  }

  bool isOM1_10(size_t index = 0) {
    try {
      return this->getObject(index, OM1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreferredShortNameorMnemonicforthe(size_t index = 0) {
    try {
      return this->getObject(index, OM1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Preferred Long Name for the Observation
   */

  ST* getOM1_11(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM1_11);
  }

  ST* getPreferredLongNamefortheObservation(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM1_11);
  }

  bool isOM1_11(size_t index = 0) {
    try {
      return this->getObject(index, OM1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreferredLongNamefortheObservation(size_t index = 0) {
    try {
      return this->getObject(index, OM1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Orderability
   */

  ID* getOM1_12(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM1_12);
  }

  ID* getOrderability(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM1_12);
  }

  bool isOM1_12(size_t index = 0) {
    try {
      return this->getObject(index, OM1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderability(size_t index = 0) {
    try {
      return this->getObject(index, OM1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Identity of Instrument Used to Perform this
   */

  CWE* getOM1_13(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_13);
  }

  CWE* getIdentityofInstrumentUsedtoPerformthis(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_13);
  }

  bool isOM1_13(size_t index = 0) {
    try {
      return this->getObject(index, OM1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentityofInstrumentUsedtoPerformthis(size_t index = 0) {
    try {
      return this->getObject(index, OM1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Coded Representation of Method
   */

  CWE* getOM1_14(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_14);
  }

  CWE* getCodedRepresentationofMethod(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_14);
  }

  bool isOM1_14(size_t index = 0) {
    try {
      return this->getObject(index, OM1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCodedRepresentationofMethod(size_t index = 0) {
    try {
      return this->getObject(index, OM1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Portable Device Indicator
   */

  ID* getOM1_15(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM1_15);
  }

  ID* getPortableDeviceIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM1_15);
  }

  bool isOM1_15(size_t index = 0) {
    try {
      return this->getObject(index, OM1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPortableDeviceIndicator(size_t index = 0) {
    try {
      return this->getObject(index, OM1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Observation Producing Department/Section
   */

  CWE* getOM1_16(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_16);
  }

  CWE* getObservationProducingDepartmentSection(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_16);
  }

  bool isOM1_16(size_t index = 0) {
    try {
      return this->getObject(index, OM1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isObservationProducingDepartmentSection(size_t index = 0) {
    try {
      return this->getObject(index, OM1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Telephone Number of Section
   */

  XTN* getOM1_17(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, OM1_17);
  }

  XTN* getTelephoneNumberofSection(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, OM1_17);
  }

  bool isOM1_17(size_t index = 0) {
    try {
      return this->getObject(index, OM1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTelephoneNumberofSection(size_t index = 0) {
    try {
      return this->getObject(index, OM1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Nature of Service/Test/Observation
   */

  CWE* getOM1_18(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_18);
  }

  CWE* getNatureofServiceTestObservation(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_18);
  }

  bool isOM1_18(size_t index = 0) {
    try {
      return this->getObject(index, OM1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNatureofServiceTestObservation(size_t index = 0) {
    try {
      return this->getObject(index, OM1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Report Subheader
   */

  CWE* getOM1_19(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_19);
  }

  CWE* getReportSubheader(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_19);
  }

  bool isOM1_19(size_t index = 0) {
    try {
      return this->getObject(index, OM1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReportSubheader(size_t index = 0) {
    try {
      return this->getObject(index, OM1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Report Display Order
   */

  ST* getOM1_20(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM1_20);
  }

  ST* getReportDisplayOrder(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM1_20);
  }

  bool isOM1_20(size_t index = 0) {
    try {
      return this->getObject(index, OM1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReportDisplayOrder(size_t index = 0) {
    try {
      return this->getObject(index, OM1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time Stamp for Any Change in
   */

  DTM* getOM1_21(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, OM1_21);
  }

  DTM* getDateTimeStampforAnyChangein(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, OM1_21);
  }

  bool isOM1_21(size_t index = 0) {
    try {
      return this->getObject(index, OM1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeStampforAnyChangein(size_t index = 0) {
    try {
      return this->getObject(index, OM1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Date/Time of Change
   */

  DTM* getOM1_22(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, OM1_22);
  }

  DTM* getEffectiveDateTimeofChange(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, OM1_22);
  }

  bool isOM1_22(size_t index = 0) {
    try {
      return this->getObject(index, OM1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveDateTimeofChange(size_t index = 0) {
    try {
      return this->getObject(index, OM1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Typical Turn-Around Time23
   */

  NM* getOM1_23(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM1_23);
  }

  NM* getTypicalTurnAroundTime23(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM1_23);
  }

  bool isOM1_23(size_t index = 0) {
    try {
      return this->getObject(index, OM1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTypicalTurnAroundTime23(size_t index = 0) {
    try {
      return this->getObject(index, OM1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Processing Time
   */

  NM* getOM1_24(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM1_24);
  }

  NM* getProcessingTime(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM1_24);
  }

  bool isOM1_24(size_t index = 0) {
    try {
      return this->getObject(index, OM1_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcessingTime(size_t index = 0) {
    try {
      return this->getObject(index, OM1_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Processing Priority
   */

  ID* getOM1_25(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM1_25);
  }

  ID* getProcessingPriority(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM1_25);
  }

  bool isOM1_25(size_t index = 0) {
    try {
      return this->getObject(index, OM1_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcessingPriority(size_t index = 0) {
    try {
      return this->getObject(index, OM1_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reporting Priority
   */

  ID* getOM1_26(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM1_26);
  }

  ID* getReportingPriority(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM1_26);
  }

  bool isOM1_26(size_t index = 0) {
    try {
      return this->getObject(index, OM1_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReportingPriority(size_t index = 0) {
    try {
      return this->getObject(index, OM1_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Outside Site
   */

  CWE* getOM1_27(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_27);
  }

  CWE* getOutsideSite(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_27);
  }

  bool isOM1_27(size_t index = 0) {
    try {
      return this->getObject(index, OM1_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOutsideSite(size_t index = 0) {
    try {
      return this->getObject(index, OM1_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Address of Outside Site
   */

  XAD* getOM1_28(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, OM1_28);
  }

  XAD* getAddressofOutsideSite(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, OM1_28);
  }

  bool isOM1_28(size_t index = 0) {
    try {
      return this->getObject(index, OM1_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAddressofOutsideSite(size_t index = 0) {
    try {
      return this->getObject(index, OM1_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Phone Number of Outside Site
   */

  XTN* getOM1_29(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, OM1_29);
  }

  XTN* getPhoneNumberofOutsideSite(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, OM1_29);
  }

  bool isOM1_29(size_t index = 0) {
    try {
      return this->getObject(index, OM1_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPhoneNumberofOutsideSite(size_t index = 0) {
    try {
      return this->getObject(index, OM1_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Confidentiality Code
   */

  CWE* getOM1_30(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_30);
  }

  CWE* getConfidentialityCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_30);
  }

  bool isOM1_30(size_t index = 0) {
    try {
      return this->getObject(index, OM1_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConfidentialityCode(size_t index = 0) {
    try {
      return this->getObject(index, OM1_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Observations Required to Interpret this
   */

  CWE* getOM1_31(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_31);
  }

  CWE* getObservationsRequiredtoInterpretthis(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_31);
  }

  bool isOM1_31(size_t index = 0) {
    try {
      return this->getObject(index, OM1_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isObservationsRequiredtoInterpretthis(size_t index = 0) {
    try {
      return this->getObject(index, OM1_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Interpretation of Observations
   */

  TX* getOM1_32(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM1_32);
  }

  TX* getInterpretationofObservations(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM1_32);
  }

  bool isOM1_32(size_t index = 0) {
    try {
      return this->getObject(index, OM1_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInterpretationofObservations(size_t index = 0) {
    try {
      return this->getObject(index, OM1_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contraindications to Observations
   */

  CWE* getOM1_33(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_33);
  }

  CWE* getContraindicationstoObservations(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_33);
  }

  bool isOM1_33(size_t index = 0) {
    try {
      return this->getObject(index, OM1_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContraindicationstoObservations(size_t index = 0) {
    try {
      return this->getObject(index, OM1_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reflex Tests/Observations
   */

  CWE* getOM1_34(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_34);
  }

  CWE* getReflexTestsObservations(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_34);
  }

  bool isOM1_34(size_t index = 0) {
    try {
      return this->getObject(index, OM1_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReflexTestsObservations(size_t index = 0) {
    try {
      return this->getObject(index, OM1_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Rules that Trigger Reflex Testing
   */

  TX* getOM1_35(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM1_35);
  }

  TX* getRulesthatTriggerReflexTesting(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM1_35);
  }

  bool isOM1_35(size_t index = 0) {
    try {
      return this->getObject(index, OM1_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRulesthatTriggerReflexTesting(size_t index = 0) {
    try {
      return this->getObject(index, OM1_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Fixed Canned Message
   */

  CWE* getOM1_36(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_36);
  }

  CWE* getFixedCannedMessage(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_36);
  }

  bool isOM1_36(size_t index = 0) {
    try {
      return this->getObject(index, OM1_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFixedCannedMessage(size_t index = 0) {
    try {
      return this->getObject(index, OM1_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Preparation
   */

  TX* getOM1_37(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM1_37);
  }

  TX* getPatientPreparation(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM1_37);
  }

  bool isOM1_37(size_t index = 0) {
    try {
      return this->getObject(index, OM1_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientPreparation(size_t index = 0) {
    try {
      return this->getObject(index, OM1_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Medication
   */

  CWE* getOM1_38(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_38);
  }

  CWE* getProcedureMedication(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_38);
  }

  bool isOM1_38(size_t index = 0) {
    try {
      return this->getObject(index, OM1_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureMedication(size_t index = 0) {
    try {
      return this->getObject(index, OM1_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Factors that may Affect the Observation
   */

  TX* getOM1_39(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM1_39);
  }

  TX* getFactorsthatmayAffecttheObservation(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM1_39);
  }

  bool isOM1_39(size_t index = 0) {
    try {
      return this->getObject(index, OM1_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFactorsthatmayAffecttheObservation(size_t index = 0) {
    try {
      return this->getObject(index, OM1_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Service/Test/Observation Performance
   */

  ST* getOM1_40(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM1_40);
  }

  ST* getServiceTestObservationPerformance(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM1_40);
  }

  bool isOM1_40(size_t index = 0) {
    try {
      return this->getObject(index, OM1_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isServiceTestObservationPerformance(size_t index = 0) {
    try {
      return this->getObject(index, OM1_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Description of Test Methods
   */

  TX* getOM1_41(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM1_41);
  }

  TX* getDescriptionofTestMethods(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM1_41);
  }

  bool isOM1_41(size_t index = 0) {
    try {
      return this->getObject(index, OM1_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDescriptionofTestMethods(size_t index = 0) {
    try {
      return this->getObject(index, OM1_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Kind of Quantity Observed
   */

  CWE* getOM1_42(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_42);
  }

  CWE* getKindofQuantityObserved(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_42);
  }

  bool isOM1_42(size_t index = 0) {
    try {
      return this->getObject(index, OM1_42) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isKindofQuantityObserved(size_t index = 0) {
    try {
      return this->getObject(index, OM1_42) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Point Versus Interval
   */

  CWE* getOM1_43(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_43);
  }

  CWE* getPointVersusInterval(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_43);
  }

  bool isOM1_43(size_t index = 0) {
    try {
      return this->getObject(index, OM1_43) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPointVersusInterval(size_t index = 0) {
    try {
      return this->getObject(index, OM1_43) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Challenge Information
   */

  TX* getOM1_44(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM1_44);
  }

  TX* getChallengeInformation(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM1_44);
  }

  bool isOM1_44(size_t index = 0) {
    try {
      return this->getObject(index, OM1_44) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChallengeInformation(size_t index = 0) {
    try {
      return this->getObject(index, OM1_44) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Relationship Modifier
   */

  CWE* getOM1_45(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_45);
  }

  CWE* getRelationshipModifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_45);
  }

  bool isOM1_45(size_t index = 0) {
    try {
      return this->getObject(index, OM1_45) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRelationshipModifier(size_t index = 0) {
    try {
      return this->getObject(index, OM1_45) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Target Anatomic Site Of Test
   */

  CWE* getOM1_46(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_46);
  }

  CWE* getTargetAnatomicSiteOfTest(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_46);
  }

  bool isOM1_46(size_t index = 0) {
    try {
      return this->getObject(index, OM1_46) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTargetAnatomicSiteOfTest(size_t index = 0) {
    try {
      return this->getObject(index, OM1_46) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Modality of Imaging Measurement
   */

  CWE* getOM1_47(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_47);
  }

  CWE* getModalityofImagingMeasurement(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_47);
  }

  bool isOM1_47(size_t index = 0) {
    try {
      return this->getObject(index, OM1_47) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isModalityofImagingMeasurement(size_t index = 0) {
    try {
      return this->getObject(index, OM1_47) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Exclusive Test
   */

  ID* getOM1_48(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM1_48);
  }

  ID* getExclusiveTest(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM1_48);
  }

  bool isOM1_48(size_t index = 0) {
    try {
      return this->getObject(index, OM1_48) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExclusiveTest(size_t index = 0) {
    try {
      return this->getObject(index, OM1_48) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diagnostic Serv Sect ID
   */

  ID* getOM1_49(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM1_49);
  }

  ID* getDiagnosticServSectID(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM1_49);
  }

  bool isOM1_49(size_t index = 0) {
    try {
      return this->getObject(index, OM1_49) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosticServSectID(size_t index = 0) {
    try {
      return this->getObject(index, OM1_49) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Taxonomic Classification Code
   */

  CWE* getOM1_50(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_50);
  }

  CWE* getTaxonomicClassificationCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_50);
  }

  bool isOM1_50(size_t index = 0) {
    try {
      return this->getObject(index, OM1_50) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTaxonomicClassificationCode(size_t index = 0) {
    try {
      return this->getObject(index, OM1_50) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Other Names51
   */

  ST* getOM1_51(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM1_51);
  }

  ST* getOtherNames51(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM1_51);
  }

  bool isOM1_51(size_t index = 0) {
    try {
      return this->getObject(index, OM1_51) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOtherNames51(size_t index = 0) {
    try {
      return this->getObject(index, OM1_51) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Replacement Producer's
   */

  CWE* getOM1_52(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_52);
  }

  CWE* getReplacementProducers(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_52);
  }

  bool isOM1_52(size_t index = 0) {
    try {
      return this->getObject(index, OM1_52) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReplacementProducers(size_t index = 0) {
    try {
      return this->getObject(index, OM1_52) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Prior Resuts Instructions
   */

  TX* getOM1_53(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM1_53);
  }

  TX* getPriorResutsInstructions(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM1_53);
  }

  bool isOM1_53(size_t index = 0) {
    try {
      return this->getObject(index, OM1_53) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPriorResutsInstructions(size_t index = 0) {
    try {
      return this->getObject(index, OM1_53) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Special Instructions
   */

  TX* getOM1_54(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM1_54);
  }

  TX* getSpecialInstructions(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM1_54);
  }

  bool isOM1_54(size_t index = 0) {
    try {
      return this->getObject(index, OM1_54) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialInstructions(size_t index = 0) {
    try {
      return this->getObject(index, OM1_54) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Test Category
   */

  CWE* getOM1_55(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_55);
  }

  CWE* getTestCategory(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_55);
  }

  bool isOM1_55(size_t index = 0) {
    try {
      return this->getObject(index, OM1_55) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTestCategory(size_t index = 0) {
    try {
      return this->getObject(index, OM1_55) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Observation/Identifier associated with
   */

  CWE* getOM1_56(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_56);
  }

  CWE* getObservationIdentifierassociatedwith(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_56);
  }

  bool isOM1_56(size_t index = 0) {
    try {
      return this->getObject(index, OM1_56) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isObservationIdentifierassociatedwith(size_t index = 0) {
    try {
      return this->getObject(index, OM1_56) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Typical Turn-Around Time57
   */

  CQ* getOM1_57(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, OM1_57);
  }

  CQ* getTypicalTurnAroundTime57(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, OM1_57);
  }

  bool isOM1_57(size_t index = 0) {
    try {
      return this->getObject(index, OM1_57) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTypicalTurnAroundTime57(size_t index = 0) {
    try {
      return this->getObject(index, OM1_57) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Gender Restriction
   */

  CWE* getOM1_58(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_58);
  }

  CWE* getGenderRestriction(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM1_58);
  }

  bool isOM1_58(size_t index = 0) {
    try {
      return this->getObject(index, OM1_58) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGenderRestriction(size_t index = 0) {
    try {
      return this->getObject(index, OM1_58) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Age Restriction
   */

  NR* getOM1_59(size_t index = 0) {
    return (NR*)this->getObjectSafe(index, OM1_59);
  }

  NR* getAgeRestriction(size_t index = 0) {
    return (NR*)this->getObjectSafe(index, OM1_59);
  }

  bool isOM1_59(size_t index = 0) {
    try {
      return this->getObject(index, OM1_59) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAgeRestriction(size_t index = 0) {
    try {
      return this->getObject(index, OM1_59) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of OM1 */

} /* End of namespace HL7_29 */
#endif /* __OM1_v29_H__ */
