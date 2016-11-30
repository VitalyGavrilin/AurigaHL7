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


#ifndef __OM1_v24_H__
#define __OM1_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0254.h"
#include "../datatype/CE_0255.h"
#include "../datatype/CE_0258.h"
#include "../datatype/CE_0259.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"
#include "../datatype/TX.h"
#include "../datatype/XAD.h"
#include "../datatype/XTN.h"

namespace HL7_24 {

/* General Segment */
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
    addObject<CE>(OM1_2, "OM1.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OM1_3, "OM1.3", HL7::optional, HL7::repetition_on);
    addObject<ID>(OM1_4, "OM1.4", HL7::initialized, HL7::repetition_off);
    addObject<CE>(OM1_5, "OM1.5", HL7::initialized, HL7::repetition_off);
    addObject<TX>(OM1_6, "OM1.6", HL7::optional, HL7::repetition_off);
    addObject<CE>(OM1_7, "OM1.7", HL7::optional, HL7::repetition_off);
    addObject<ST>(OM1_8, "OM1.8", HL7::initialized, HL7::repetition_on);
    addObject<ST>(OM1_9, "OM1.9", HL7::optional, HL7::repetition_off);
    addObject<ST>(OM1_10, "OM1.10", HL7::optional, HL7::repetition_off);
    addObject<ST>(OM1_11, "OM1.11", HL7::optional, HL7::repetition_off);
    addObject<ID>(OM1_12, "OM1.12", HL7::optional, HL7::repetition_off);
    addObject<CE>(OM1_13, "OM1.13", HL7::optional, HL7::repetition_on);
    addObject<CE>(OM1_14, "OM1.14", HL7::optional, HL7::repetition_on);
    addObject<ID>(OM1_15, "OM1.15", HL7::optional, HL7::repetition_off);
    addObject<CE>(OM1_16, "OM1.16", HL7::optional, HL7::repetition_on);
    addObject<XTN>(OM1_17, "OM1.17", HL7::optional, HL7::repetition_off);
    addObject<IS>(OM1_18, "OM1.18", HL7::initialized, HL7::repetition_off);
    addObject<CE>(OM1_19, "OM1.19", HL7::optional, HL7::repetition_off);
    addObject<ST>(OM1_20, "OM1.20", HL7::optional, HL7::repetition_off);
    addObject<TS>(OM1_21, "OM1.21", HL7::optional, HL7::repetition_off);
    addObject<TS>(OM1_22, "OM1.22", HL7::optional, HL7::repetition_off);
    addObject<NM>(OM1_23, "OM1.23", HL7::optional, HL7::repetition_off);
    addObject<NM>(OM1_24, "OM1.24", HL7::optional, HL7::repetition_off);
    addObject<ID>(OM1_25, "OM1.25", HL7::optional, HL7::repetition_on);
    addObject<ID>(OM1_26, "OM1.26", HL7::optional, HL7::repetition_off);
    addObject<CE>(OM1_27, "OM1.27", HL7::optional, HL7::repetition_on);
    addObject<XAD>(OM1_28, "OM1.28", HL7::optional, HL7::repetition_on);
    addObject<XTN>(OM1_29, "OM1.29", HL7::optional, HL7::repetition_off);
    addObject<IS>(OM1_30, "OM1.30", HL7::optional, HL7::repetition_off);
    addObject<CE>(OM1_31, "OM1.31", HL7::optional, HL7::repetition_off);
    addObject<TX>(OM1_32, "OM1.32", HL7::optional, HL7::repetition_off);
    addObject<CE>(OM1_33, "OM1.33", HL7::optional, HL7::repetition_off);
    addObject<CE>(OM1_34, "OM1.34", HL7::optional, HL7::repetition_on);
    addObject<TX>(OM1_35, "OM1.35", HL7::optional, HL7::repetition_off);
    addObject<CE>(OM1_36, "OM1.36", HL7::optional, HL7::repetition_off);
    addObject<TX>(OM1_37, "OM1.37", HL7::optional, HL7::repetition_off);
    addObject<CE>(OM1_38, "OM1.38", HL7::optional, HL7::repetition_off);
    addObject<TX>(OM1_39, "OM1.39", HL7::optional, HL7::repetition_off);
    addObject<ST>(OM1_40, "OM1.40", HL7::optional, HL7::repetition_on);
    addObject<TX>(OM1_41, "OM1.41", HL7::optional, HL7::repetition_off);
    addObject<CE_0254>(OM1_42, "OM1.42", HL7::optional, HL7::repetition_off);
    addObject<CE_0255>(OM1_43, "OM1.43", HL7::optional, HL7::repetition_off);
    addObject<TX>(OM1_44, "OM1.44", HL7::optional, HL7::repetition_off);
    addObject<CE_0258>(OM1_45, "OM1.45", HL7::optional, HL7::repetition_off);
    addObject<CE>(OM1_46, "OM1.46", HL7::optional, HL7::repetition_off);
    addObject<CE_0259>(OM1_47, "OM1.47", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Sequence Number - Test/ Observation Master File
   */

  NM* getOM1_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM1_1);
  }

  NM* getSequenceNumberTestObservationMasterFile(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM1_1);
  }

  bool isOM1_1(size_t index = 0) {
    try {
      return this->getObject(index, OM1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSequenceNumberTestObservationMasterFile(size_t index = 0) {
    try {
      return this->getObject(index, OM1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Producer's Service/Test/Observation ID
   */

  CE* getOM1_2(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_2);
  }

  CE* getProducerSServiceTestObservationID(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_2);
  }

  bool isOM1_2(size_t index = 0) {
    try {
      return this->getObject(index, OM1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProducerSServiceTestObservationID(size_t index = 0) {
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

  CE* getOM1_5(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_5);
  }

  CE* getProducerID(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_5);
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
   * Other Service/Test/Observation IDs for the Observation
   */

  CE* getOM1_7(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_7);
  }

  CE* getOtherServiceTestObservationIDsForTheObservation(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_7);
  }

  bool isOM1_7(size_t index = 0) {
    try {
      return this->getObject(index, OM1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOtherServiceTestObservationIDsForTheObservation(size_t index = 0) {
    try {
      return this->getObject(index, OM1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Other Names
   */

  ST* getOM1_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM1_8);
  }

  ST* getOtherNames(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM1_8);
  }

  bool isOM1_8(size_t index = 0) {
    try {
      return this->getObject(index, OM1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOtherNames(size_t index = 0) {
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

  ST* getPreferredReportNameForTheObservation(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM1_9);
  }

  bool isOM1_9(size_t index = 0) {
    try {
      return this->getObject(index, OM1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreferredReportNameForTheObservation(size_t index = 0) {
    try {
      return this->getObject(index, OM1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Preferred Short Name or Mnemonic for Observation
   */

  ST* getOM1_10(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM1_10);
  }

  ST* getPreferredShortNameOrMnemonicForObservation(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM1_10);
  }

  bool isOM1_10(size_t index = 0) {
    try {
      return this->getObject(index, OM1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreferredShortNameOrMnemonicForObservation(size_t index = 0) {
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

  ST* getPreferredLongNameForTheObservation(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM1_11);
  }

  bool isOM1_11(size_t index = 0) {
    try {
      return this->getObject(index, OM1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreferredLongNameForTheObservation(size_t index = 0) {
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
   * Identity of Instrument Used to Perform this Study
   */

  CE* getOM1_13(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_13);
  }

  CE* getIdentityOfInstrumentUsedToPerformThisStudy(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_13);
  }

  bool isOM1_13(size_t index = 0) {
    try {
      return this->getObject(index, OM1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentityOfInstrumentUsedToPerformThisStudy(size_t index = 0) {
    try {
      return this->getObject(index, OM1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Coded Representation of Method
   */

  CE* getOM1_14(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_14);
  }

  CE* getCodedRepresentationOfMethod(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_14);
  }

  bool isOM1_14(size_t index = 0) {
    try {
      return this->getObject(index, OM1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCodedRepresentationOfMethod(size_t index = 0) {
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

  CE* getOM1_16(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_16);
  }

  CE* getObservationProducingDepartmentSection(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_16);
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

  XTN* getTelephoneNumberOfSection(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, OM1_17);
  }

  bool isOM1_17(size_t index = 0) {
    try {
      return this->getObject(index, OM1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTelephoneNumberOfSection(size_t index = 0) {
    try {
      return this->getObject(index, OM1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Nature of Service/Test/Observation
   */

  IS* getOM1_18(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, OM1_18);
  }

  IS* getNatureOfServiceTestObservation(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, OM1_18);
  }

  bool isOM1_18(size_t index = 0) {
    try {
      return this->getObject(index, OM1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNatureOfServiceTestObservation(size_t index = 0) {
    try {
      return this->getObject(index, OM1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Report Subheader
   */

  CE* getOM1_19(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_19);
  }

  CE* getReportSubheader(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_19);
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
   * Date/Time Stamp for any change in Definition for the Observation
   */

  TS* getOM1_21(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, OM1_21);
  }

  TS* getDateTimeStampForAnyChangeInDefinitionForTheObservation(
      size_t index = 0) {
    return (TS*)this->getObjectSafe(index, OM1_21);
  }

  bool isOM1_21(size_t index = 0) {
    try {
      return this->getObject(index, OM1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeStampForAnyChangeInDefinitionForTheObservation(
      size_t index = 0) {
    try {
      return this->getObject(index, OM1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Date/Time of Change
   */

  TS* getOM1_22(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, OM1_22);
  }

  TS* getEffectiveDateTimeOfChange(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, OM1_22);
  }

  bool isOM1_22(size_t index = 0) {
    try {
      return this->getObject(index, OM1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveDateTimeOfChange(size_t index = 0) {
    try {
      return this->getObject(index, OM1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Typical Turn-Around Time
   */

  NM* getOM1_23(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM1_23);
  }

  NM* getTypicalTurnAroundTime(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM1_23);
  }

  bool isOM1_23(size_t index = 0) {
    try {
      return this->getObject(index, OM1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTypicalTurnAroundTime(size_t index = 0) {
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
   * Outside Site(s) Where Observation may be Performed
   */

  CE* getOM1_27(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_27);
  }

  CE* getOutsideSite(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_27);
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
   * Address of Outside Site(s)
   */

  XAD* getOM1_28(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, OM1_28);
  }

  XAD* getAddressOfOutsideSite(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, OM1_28);
  }

  bool isOM1_28(size_t index = 0) {
    try {
      return this->getObject(index, OM1_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAddressOfOutsideSite(size_t index = 0) {
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

  XTN* getPhoneNumberOfOutsideSite(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, OM1_29);
  }

  bool isOM1_29(size_t index = 0) {
    try {
      return this->getObject(index, OM1_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPhoneNumberOfOutsideSite(size_t index = 0) {
    try {
      return this->getObject(index, OM1_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Confidentiality Code
   */

  IS* getOM1_30(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, OM1_30);
  }

  IS* getConfidentialityCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, OM1_30);
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
   * Observations Required to Interpret the Observation
   */

  CE* getOM1_31(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_31);
  }

  CE* getObservationsRequiredToInterpretTheObservation(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_31);
  }

  bool isOM1_31(size_t index = 0) {
    try {
      return this->getObject(index, OM1_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isObservationsRequiredToInterpretTheObservation(size_t index = 0) {
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

  TX* getInterpretationOfObservations(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM1_32);
  }

  bool isOM1_32(size_t index = 0) {
    try {
      return this->getObject(index, OM1_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInterpretationOfObservations(size_t index = 0) {
    try {
      return this->getObject(index, OM1_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contraindications to Observations
   */

  CE* getOM1_33(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_33);
  }

  CE* getContraindicationsToObservations(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_33);
  }

  bool isOM1_33(size_t index = 0) {
    try {
      return this->getObject(index, OM1_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContraindicationsToObservations(size_t index = 0) {
    try {
      return this->getObject(index, OM1_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reflex Tests/Observations
   */

  CE* getOM1_34(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_34);
  }

  CE* getReflexTestsObservations(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_34);
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

  TX* getRulesThatTriggerReflexTesting(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM1_35);
  }

  bool isOM1_35(size_t index = 0) {
    try {
      return this->getObject(index, OM1_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRulesThatTriggerReflexTesting(size_t index = 0) {
    try {
      return this->getObject(index, OM1_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Fixed Canned Message
   */

  CE* getOM1_36(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_36);
  }

  CE* getFixedCannedMessage(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_36);
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

  CE* getOM1_38(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_38);
  }

  CE* getProcedureMedication(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_38);
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
   * Factors that may Affect Affect the Observation
   */

  TX* getOM1_39(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM1_39);
  }

  TX* getFactorsThatMayAffectAffectTheObservation(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM1_39);
  }

  bool isOM1_39(size_t index = 0) {
    try {
      return this->getObject(index, OM1_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFactorsThatMayAffectAffectTheObservation(size_t index = 0) {
    try {
      return this->getObject(index, OM1_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Service/Test/Observation Performance Schedule
   */

  ST* getOM1_40(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM1_40);
  }

  ST* getServiceTestObservationPerformanceSchedule(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM1_40);
  }

  bool isOM1_40(size_t index = 0) {
    try {
      return this->getObject(index, OM1_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isServiceTestObservationPerformanceSchedule(size_t index = 0) {
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

  TX* getDescriptionOfTestMethods(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM1_41);
  }

  bool isOM1_41(size_t index = 0) {
    try {
      return this->getObject(index, OM1_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDescriptionOfTestMethods(size_t index = 0) {
    try {
      return this->getObject(index, OM1_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Kind of Quantity Observed
   */

  CE_0254* getOM1_42(size_t index = 0) {
    return (CE_0254*)this->getObjectSafe(index, OM1_42);
  }

  CE_0254* getKindOfQuantityObserved(size_t index = 0) {
    return (CE_0254*)this->getObjectSafe(index, OM1_42);
  }

  bool isOM1_42(size_t index = 0) {
    try {
      return this->getObject(index, OM1_42) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isKindOfQuantityObserved(size_t index = 0) {
    try {
      return this->getObject(index, OM1_42) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Point Versus Interval
   */

  CE_0255* getOM1_43(size_t index = 0) {
    return (CE_0255*)this->getObjectSafe(index, OM1_43);
  }

  CE_0255* getPointVersusInterval(size_t index = 0) {
    return (CE_0255*)this->getObjectSafe(index, OM1_43);
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

  CE_0258* getOM1_45(size_t index = 0) {
    return (CE_0258*)this->getObjectSafe(index, OM1_45);
  }

  CE_0258* getRelationshipModifier(size_t index = 0) {
    return (CE_0258*)this->getObjectSafe(index, OM1_45);
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

  CE* getOM1_46(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_46);
  }

  CE* getTargetAnatomicSiteOfTest(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM1_46);
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
   * Modality Of Imaging Measurement
   */

  CE_0259* getOM1_47(size_t index = 0) {
    return (CE_0259*)this->getObjectSafe(index, OM1_47);
  }

  CE_0259* getModalityOfImagingMeasurement(size_t index = 0) {
    return (CE_0259*)this->getObjectSafe(index, OM1_47);
  }

  bool isOM1_47(size_t index = 0) {
    try {
      return this->getObject(index, OM1_47) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isModalityOfImagingMeasurement(size_t index = 0) {
    try {
      return this->getObject(index, OM1_47) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of OM1 */

} /* End of namespace HL7_24 */
#endif /* __OM1_v24_H__ */
