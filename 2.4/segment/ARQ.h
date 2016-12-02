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


#ifndef __ARQ_v24_H__
#define __ARQ_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0276.h"
#include "../datatype/CE_0277.h"
#include "../datatype/DR.h"
#include "../datatype/EI.h"
#include "../datatype/NM.h"
#include "../datatype/PL.h"
#include "../datatype/RI.h"
#include "../datatype/ST.h"
#include "../datatype/XAD.h"
#include "../datatype/XCN.h"
#include "../datatype/XTN.h"

namespace HL7_24 {

/* Appointment Request */
class ARQ : public HL7Segment {
 public:
  ARQ() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    ARQ_1,
    ARQ_2,
    ARQ_3,
    ARQ_4,
    ARQ_5,
    ARQ_6,
    ARQ_7,
    ARQ_8,
    ARQ_9,
    ARQ_10,
    ARQ_11,
    ARQ_12,
    ARQ_13,
    ARQ_14,
    ARQ_15,
    ARQ_16,
    ARQ_17,
    ARQ_18,
    ARQ_19,
    ARQ_20,
    ARQ_21,
    ARQ_22,
    ARQ_23,
    ARQ_24,
    ARQ_25,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "ARQ"; }
  ARQ* create() const { return new ARQ(); }

 private:
  void init() {
    setName("ARQ");
    /* Init members */
    addObject<EI>(ARQ_1, "ARQ.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(ARQ_2, "ARQ.2", HL7::conditional, HL7::repetition_off);
    addObject<NM>(ARQ_3, "ARQ.3", HL7::conditional, HL7::repetition_off);
    addObject<EI>(ARQ_4, "ARQ.4", HL7::optional, HL7::repetition_off);
    addObject<CE>(ARQ_5, "ARQ.5", HL7::optional, HL7::repetition_off);
    addObject<CE>(ARQ_6, "ARQ.6", HL7::optional, HL7::repetition_off);
    addObject<CE_0276>(ARQ_7, "ARQ.7", HL7::optional, HL7::repetition_off);
    addObject<CE_0277>(ARQ_8, "ARQ.8", HL7::optional, HL7::repetition_off);
    addObject<NM>(ARQ_9, "ARQ.9", HL7::optional, HL7::repetition_off);
    addObject<CE>(ARQ_10, "ARQ.10", HL7::optional, HL7::repetition_off);
    addObject<DR>(ARQ_11, "ARQ.11", HL7::optional, HL7::repetition_on);
    addObject<ST>(ARQ_12, "ARQ.12", HL7::optional, HL7::repetition_off);
    addObject<RI>(ARQ_13, "ARQ.13", HL7::optional, HL7::repetition_off);
    addObject<ST>(ARQ_14, "ARQ.14", HL7::optional, HL7::repetition_off);
    addObject<XCN>(ARQ_15, "ARQ.15", HL7::initialized, HL7::repetition_on);
    addObject<XTN>(ARQ_16, "ARQ.16", HL7::optional, HL7::repetition_on);
    addObject<XAD>(ARQ_17, "ARQ.17", HL7::optional, HL7::repetition_on);
    addObject<PL>(ARQ_18, "ARQ.18", HL7::optional, HL7::repetition_off);
    addObject<XCN>(ARQ_19, "ARQ.19", HL7::initialized, HL7::repetition_on);
    addObject<XTN>(ARQ_20, "ARQ.20", HL7::optional, HL7::repetition_on);
    addObject<PL>(ARQ_21, "ARQ.21", HL7::optional, HL7::repetition_off);
    addObject<EI>(ARQ_22, "ARQ.22", HL7::optional, HL7::repetition_off);
    addObject<EI>(ARQ_23, "ARQ.23", HL7::optional, HL7::repetition_off);
    addObject<EI>(ARQ_24, "ARQ.24", HL7::conditional, HL7::repetition_on);
    addObject<EI>(ARQ_25, "ARQ.25", HL7::conditional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Placer Appointment ID
   */

  EI* getARQ_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ARQ_1);
  }

  EI* getPlacerAppointmentID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ARQ_1);
  }

  bool isARQ_1(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerAppointmentID(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Appointment ID
   */

  EI* getARQ_2(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ARQ_2);
  }

  EI* getFillerAppointmentID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ARQ_2);
  }

  bool isARQ_2(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerAppointmentID(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Occurrence Number
   */

  NM* getARQ_3(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ARQ_3);
  }

  NM* getOccurrenceNumber(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ARQ_3);
  }

  bool isARQ_3(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOccurrenceNumber(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Placer Group Number
   */

  EI* getARQ_4(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ARQ_4);
  }

  EI* getPlacerGroupNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ARQ_4);
  }

  bool isARQ_4(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerGroupNumber(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Schedule ID
   */

  CE* getARQ_5(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, ARQ_5);
  }

  CE* getScheduleID(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, ARQ_5);
  }

  bool isARQ_5(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isScheduleID(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Request Event Reason
   */

  CE* getARQ_6(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, ARQ_6);
  }

  CE* getRequestEventReason(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, ARQ_6);
  }

  bool isARQ_6(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestEventReason(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Appointment Reason
   */

  CE_0276* getARQ_7(size_t index = 0) {
    return (CE_0276*)this->getObjectSafe(index, ARQ_7);
  }

  CE_0276* getAppointmentReason(size_t index = 0) {
    return (CE_0276*)this->getObjectSafe(index, ARQ_7);
  }

  bool isARQ_7(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAppointmentReason(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Appointment Type
   */

  CE_0277* getARQ_8(size_t index = 0) {
    return (CE_0277*)this->getObjectSafe(index, ARQ_8);
  }

  CE_0277* getAppointmentType(size_t index = 0) {
    return (CE_0277*)this->getObjectSafe(index, ARQ_8);
  }

  bool isARQ_8(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAppointmentType(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Appointment Duration
   */

  NM* getARQ_9(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ARQ_9);
  }

  NM* getAppointmentDuration(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ARQ_9);
  }

  bool isARQ_9(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAppointmentDuration(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Appointment Duration Units
   */

  CE* getARQ_10(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, ARQ_10);
  }

  CE* getAppointmentDurationUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, ARQ_10);
  }

  bool isARQ_10(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAppointmentDurationUnits(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Start Date/Time Range
   */

  DR* getARQ_11(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, ARQ_11);
  }

  DR* getRequestedStartDateTimeRange(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, ARQ_11);
  }

  bool isARQ_11(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedStartDateTimeRange(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Priority-ARQ
   */

  ST* getARQ_12(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ARQ_12);
  }

  ST* getPriorityARQ(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ARQ_12);
  }

  bool isARQ_12(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPriorityARQ(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Repeating Interval
   */

  RI* getARQ_13(size_t index = 0) {
    return (RI*)this->getObjectSafe(index, ARQ_13);
  }

  RI* getRepeatingInterval(size_t index = 0) {
    return (RI*)this->getObjectSafe(index, ARQ_13);
  }

  bool isARQ_13(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRepeatingInterval(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Repeating Interval Duration
   */

  ST* getARQ_14(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ARQ_14);
  }

  ST* getRepeatingIntervalDuration(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ARQ_14);
  }

  bool isARQ_14(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRepeatingIntervalDuration(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Placer Contact Person
   */

  XCN* getARQ_15(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ARQ_15);
  }

  XCN* getPlacerContactPerson(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ARQ_15);
  }

  bool isARQ_15(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerContactPerson(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Placer Contact Phone Number
   */

  XTN* getARQ_16(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, ARQ_16);
  }

  XTN* getPlacerContactPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, ARQ_16);
  }

  bool isARQ_16(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerContactPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Placer Contact Address
   */

  XAD* getARQ_17(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, ARQ_17);
  }

  XAD* getPlacerContactAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, ARQ_17);
  }

  bool isARQ_17(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerContactAddress(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Placer Contact Location
   */

  PL* getARQ_18(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, ARQ_18);
  }

  PL* getPlacerContactLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, ARQ_18);
  }

  bool isARQ_18(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerContactLocation(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entered By Person
   */

  XCN* getARQ_19(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ARQ_19);
  }

  XCN* getEnteredByPerson(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ARQ_19);
  }

  bool isARQ_19(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteredByPerson(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entered By Phone Number
   */

  XTN* getARQ_20(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, ARQ_20);
  }

  XTN* getEnteredByPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, ARQ_20);
  }

  bool isARQ_20(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteredByPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entered by Location
   */

  PL* getARQ_21(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, ARQ_21);
  }

  PL* getEnteredByLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, ARQ_21);
  }

  bool isARQ_21(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteredByLocation(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Parent Placer Appointment ID
   */

  EI* getARQ_22(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ARQ_22);
  }

  EI* getParentPlacerAppointmentID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ARQ_22);
  }

  bool isARQ_22(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParentPlacerAppointmentID(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Parent Filler Appointment ID
   */

  EI* getARQ_23(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ARQ_23);
  }

  EI* getParentFillerAppointmentID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ARQ_23);
  }

  bool isARQ_23(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParentFillerAppointmentID(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Placer Order Number
   */

  EI* getARQ_24(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ARQ_24);
  }

  EI* getPlacerOrderNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ARQ_24);
  }

  bool isARQ_24(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerOrderNumber(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Order Number
   */

  EI* getARQ_25(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ARQ_25);
  }

  EI* getFillerOrderNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ARQ_25);
  }

  bool isARQ_25(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerOrderNumber(size_t index = 0) {
    try {
      return this->getObject(index, ARQ_25) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ARQ */

} /* End of namespace HL7_24 */
#endif /* __ARQ_v24_H__ */
