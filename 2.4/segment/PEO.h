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


#ifndef __PEO_v24_H__
#define __PEO_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/FT.h"
#include "../datatype/ID.h"
#include "../datatype/TS.h"
#include "../datatype/XAD.h"
#include "../datatype/XPN.h"
#include "../datatype/XTN.h"

namespace HL7_24 {

/* Product Experience Observation */
class PEO : public HL7Segment {
 public:
  PEO() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PEO_1,
    PEO_2,
    PEO_3,
    PEO_4,
    PEO_5,
    PEO_6,
    PEO_7,
    PEO_8,
    PEO_9,
    PEO_10,
    PEO_11,
    PEO_12,
    PEO_13,
    PEO_14,
    PEO_15,
    PEO_16,
    PEO_17,
    PEO_18,
    PEO_19,
    PEO_20,
    PEO_21,
    PEO_22,
    PEO_23,
    PEO_24,
    PEO_25,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PEO"; }
  PEO* create() const { return new PEO(); }

 private:
  void init() {
    setName("PEO");
    /* Init members */
    addObject<CE>(PEO_1, "PEO.1", HL7::optional, HL7::repetition_on);
    addObject<CE>(PEO_2, "PEO.2", HL7::optional, HL7::repetition_on);
    addObject<TS>(PEO_3, "PEO.3", HL7::initialized, HL7::repetition_off);
    addObject<TS>(PEO_4, "PEO.4", HL7::optional, HL7::repetition_off);
    addObject<TS>(PEO_5, "PEO.5", HL7::optional, HL7::repetition_off);
    addObject<TS>(PEO_6, "PEO.6", HL7::optional, HL7::repetition_off);
    addObject<XAD>(PEO_7, "PEO.7", HL7::optional, HL7::repetition_on);
    addObject<ID>(PEO_8, "PEO.8", HL7::optional, HL7::repetition_on);
    addObject<ID>(PEO_9, "PEO.9", HL7::optional, HL7::repetition_off);
    addObject<ID>(PEO_10, "PEO.10", HL7::optional, HL7::repetition_off);
    addObject<ID>(PEO_11, "PEO.11", HL7::optional, HL7::repetition_on);
    addObject<ID>(PEO_12, "PEO.12", HL7::optional, HL7::repetition_off);
    addObject<FT>(PEO_13, "PEO.13", HL7::optional, HL7::repetition_on);
    addObject<FT>(PEO_14, "PEO.14", HL7::optional, HL7::repetition_on);
    addObject<FT>(PEO_15, "PEO.15", HL7::optional, HL7::repetition_on);
    addObject<FT>(PEO_16, "PEO.16", HL7::optional, HL7::repetition_on);
    addObject<FT>(PEO_17, "PEO.17", HL7::optional, HL7::repetition_on);
    addObject<CE>(PEO_18, "PEO.18", HL7::optional, HL7::repetition_on);
    addObject<XPN>(PEO_19, "PEO.19", HL7::optional, HL7::repetition_on);
    addObject<XAD>(PEO_20, "PEO.20", HL7::optional, HL7::repetition_on);
    addObject<XTN>(PEO_21, "PEO.21", HL7::optional, HL7::repetition_on);
    addObject<ID>(PEO_22, "PEO.22", HL7::optional, HL7::repetition_off);
    addObject<ID>(PEO_23, "PEO.23", HL7::optional, HL7::repetition_off);
    addObject<TS>(PEO_24, "PEO.24", HL7::optional, HL7::repetition_off);
    addObject<ID>(PEO_25, "PEO.25", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Event Identifiers Used
   */

  CE* getPEO_1(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PEO_1);
  }

  CE* getEventIdentifiersUsed(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PEO_1);
  }

  bool isPEO_1(size_t index = 0) {
    try {
      return this->getObject(index, PEO_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventIdentifiersUsed(size_t index = 0) {
    try {
      return this->getObject(index, PEO_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Symptom/Diagnosis Code
   */

  CE* getPEO_2(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PEO_2);
  }

  CE* getEventSymptomDiagnosisCode(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PEO_2);
  }

  bool isPEO_2(size_t index = 0) {
    try {
      return this->getObject(index, PEO_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventSymptomDiagnosisCode(size_t index = 0) {
    try {
      return this->getObject(index, PEO_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Onset Date/Time
   */

  TS* getPEO_3(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PEO_3);
  }

  TS* getEventOnsetDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PEO_3);
  }

  bool isPEO_3(size_t index = 0) {
    try {
      return this->getObject(index, PEO_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventOnsetDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PEO_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Exacerbation Date/Time
   */

  TS* getPEO_4(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PEO_4);
  }

  TS* getEventExacerbationDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PEO_4);
  }

  bool isPEO_4(size_t index = 0) {
    try {
      return this->getObject(index, PEO_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventExacerbationDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PEO_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Improved Date/Time
   */

  TS* getPEO_5(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PEO_5);
  }

  TS* getEventImprovedDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PEO_5);
  }

  bool isPEO_5(size_t index = 0) {
    try {
      return this->getObject(index, PEO_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventImprovedDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PEO_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Ended Data/Time
   */

  TS* getPEO_6(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PEO_6);
  }

  TS* getEventEndedDataTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PEO_6);
  }

  bool isPEO_6(size_t index = 0) {
    try {
      return this->getObject(index, PEO_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventEndedDataTime(size_t index = 0) {
    try {
      return this->getObject(index, PEO_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Location Occurred Address
   */

  XAD* getPEO_7(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, PEO_7);
  }

  XAD* getEventLocationOccurredAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, PEO_7);
  }

  bool isPEO_7(size_t index = 0) {
    try {
      return this->getObject(index, PEO_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventLocationOccurredAddress(size_t index = 0) {
    try {
      return this->getObject(index, PEO_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Qualification
   */

  ID* getPEO_8(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PEO_8);
  }

  ID* getEventQualification(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PEO_8);
  }

  bool isPEO_8(size_t index = 0) {
    try {
      return this->getObject(index, PEO_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventQualification(size_t index = 0) {
    try {
      return this->getObject(index, PEO_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Serious
   */

  ID* getPEO_9(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PEO_9);
  }

  ID* getEventSerious(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PEO_9);
  }

  bool isPEO_9(size_t index = 0) {
    try {
      return this->getObject(index, PEO_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventSerious(size_t index = 0) {
    try {
      return this->getObject(index, PEO_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Expected
   */

  ID* getPEO_10(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PEO_10);
  }

  ID* getEventExpected(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PEO_10);
  }

  bool isPEO_10(size_t index = 0) {
    try {
      return this->getObject(index, PEO_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventExpected(size_t index = 0) {
    try {
      return this->getObject(index, PEO_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Outcome
   */

  ID* getPEO_11(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PEO_11);
  }

  ID* getEventOutcome(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PEO_11);
  }

  bool isPEO_11(size_t index = 0) {
    try {
      return this->getObject(index, PEO_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventOutcome(size_t index = 0) {
    try {
      return this->getObject(index, PEO_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Outcome
   */

  ID* getPEO_12(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PEO_12);
  }

  ID* getPatientOutcome(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PEO_12);
  }

  bool isPEO_12(size_t index = 0) {
    try {
      return this->getObject(index, PEO_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientOutcome(size_t index = 0) {
    try {
      return this->getObject(index, PEO_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Description From Others
   */

  FT* getPEO_13(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, PEO_13);
  }

  FT* getEventDescriptionFromOthers(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, PEO_13);
  }

  bool isPEO_13(size_t index = 0) {
    try {
      return this->getObject(index, PEO_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventDescriptionFromOthers(size_t index = 0) {
    try {
      return this->getObject(index, PEO_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event From Original Reporter
   */

  FT* getPEO_14(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, PEO_14);
  }

  FT* getEventFromOriginalReporter(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, PEO_14);
  }

  bool isPEO_14(size_t index = 0) {
    try {
      return this->getObject(index, PEO_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventFromOriginalReporter(size_t index = 0) {
    try {
      return this->getObject(index, PEO_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Description From Patient
   */

  FT* getPEO_15(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, PEO_15);
  }

  FT* getEventDescriptionFromPatient(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, PEO_15);
  }

  bool isPEO_15(size_t index = 0) {
    try {
      return this->getObject(index, PEO_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventDescriptionFromPatient(size_t index = 0) {
    try {
      return this->getObject(index, PEO_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Description From Practitioner
   */

  FT* getPEO_16(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, PEO_16);
  }

  FT* getEventDescriptionFromPractitioner(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, PEO_16);
  }

  bool isPEO_16(size_t index = 0) {
    try {
      return this->getObject(index, PEO_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventDescriptionFromPractitioner(size_t index = 0) {
    try {
      return this->getObject(index, PEO_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Description From Autopsy
   */

  FT* getPEO_17(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, PEO_17);
  }

  FT* getEventDescriptionFromAutopsy(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, PEO_17);
  }

  bool isPEO_17(size_t index = 0) {
    try {
      return this->getObject(index, PEO_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventDescriptionFromAutopsy(size_t index = 0) {
    try {
      return this->getObject(index, PEO_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Cause Of Death
   */

  CE* getPEO_18(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PEO_18);
  }

  CE* getCauseOfDeath(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PEO_18);
  }

  bool isPEO_18(size_t index = 0) {
    try {
      return this->getObject(index, PEO_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCauseOfDeath(size_t index = 0) {
    try {
      return this->getObject(index, PEO_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Observer Name
   */

  XPN* getPEO_19(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, PEO_19);
  }

  XPN* getPrimaryObserverName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, PEO_19);
  }

  bool isPEO_19(size_t index = 0) {
    try {
      return this->getObject(index, PEO_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryObserverName(size_t index = 0) {
    try {
      return this->getObject(index, PEO_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Observer Address
   */

  XAD* getPEO_20(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, PEO_20);
  }

  XAD* getPrimaryObserverAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, PEO_20);
  }

  bool isPEO_20(size_t index = 0) {
    try {
      return this->getObject(index, PEO_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryObserverAddress(size_t index = 0) {
    try {
      return this->getObject(index, PEO_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Observer Telephone
   */

  XTN* getPEO_21(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, PEO_21);
  }

  XTN* getPrimaryObserverTelephone(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, PEO_21);
  }

  bool isPEO_21(size_t index = 0) {
    try {
      return this->getObject(index, PEO_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryObserverTelephone(size_t index = 0) {
    try {
      return this->getObject(index, PEO_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Observer's Qualification
   */

  ID* getPEO_22(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PEO_22);
  }

  ID* getPrimaryObserverSQualification(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PEO_22);
  }

  bool isPEO_22(size_t index = 0) {
    try {
      return this->getObject(index, PEO_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryObserverSQualification(size_t index = 0) {
    try {
      return this->getObject(index, PEO_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Confirmation Provided By
   */

  ID* getPEO_23(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PEO_23);
  }

  ID* getConfirmationProvidedBy(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PEO_23);
  }

  bool isPEO_23(size_t index = 0) {
    try {
      return this->getObject(index, PEO_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConfirmationProvidedBy(size_t index = 0) {
    try {
      return this->getObject(index, PEO_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Observer Aware Date/Time
   */

  TS* getPEO_24(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PEO_24);
  }

  TS* getPrimaryObserverAwareDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PEO_24);
  }

  bool isPEO_24(size_t index = 0) {
    try {
      return this->getObject(index, PEO_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryObserverAwareDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PEO_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Observer's identity May Be Divulged
   */

  ID* getPEO_25(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PEO_25);
  }

  ID* getPrimaryObserverSIdentityMayBeDivulged(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PEO_25);
  }

  bool isPEO_25(size_t index = 0) {
    try {
      return this->getObject(index, PEO_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryObserverSIdentityMayBeDivulged(size_t index = 0) {
    try {
      return this->getObject(index, PEO_25) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PEO */

} /* End of namespace HL7_24 */
#endif /* __PEO_v24_H__ */
