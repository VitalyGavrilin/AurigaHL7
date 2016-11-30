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


#ifndef __EVN_v24_H__
#define __EVN_v24_H__

#include "../../common/Util.h"
#include "../datatype/HD.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/TS.h"
#include "../datatype/XCN.h"

namespace HL7_24 {

/* Event Type */
class EVN : public HL7Segment {
 public:
  EVN() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    EVN_1,
    EVN_2,
    EVN_3,
    EVN_4,
    EVN_5,
    EVN_6,
    EVN_7,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "EVN"; }
  EVN* create() const { return new EVN(); }

 private:
  void init() {
    setName("EVN");
    /* Init members */
    addObject<ID>(EVN_1, "EVN.1", HL7::optional, HL7::repetition_off);
    addObject<TS>(EVN_2, "EVN.2", HL7::initialized, HL7::repetition_off);
    addObject<TS>(EVN_3, "EVN.3", HL7::optional, HL7::repetition_off);
    addObject<IS>(EVN_4, "EVN.4", HL7::optional, HL7::repetition_off);
    addObject<XCN>(EVN_5, "EVN.5", HL7::optional, HL7::repetition_on);
    addObject<TS>(EVN_6, "EVN.6", HL7::optional, HL7::repetition_off);
    addObject<HD>(EVN_7, "EVN.7", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Event Type Code
   */

  ID* getEVN_1(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, EVN_1);
  }

  ID* getEventTypeCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, EVN_1);
  }

  bool isEVN_1(size_t index = 0) {
    try {
      return this->getObject(index, EVN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, EVN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Recorded Date/Time
   */

  TS* getEVN_2(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, EVN_2);
  }

  TS* getRecordedDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, EVN_2);
  }

  bool isEVN_2(size_t index = 0) {
    try {
      return this->getObject(index, EVN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRecordedDateTime(size_t index = 0) {
    try {
      return this->getObject(index, EVN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time Planned Event
   */

  TS* getEVN_3(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, EVN_3);
  }

  TS* getDateTimePlannedEvent(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, EVN_3);
  }

  bool isEVN_3(size_t index = 0) {
    try {
      return this->getObject(index, EVN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimePlannedEvent(size_t index = 0) {
    try {
      return this->getObject(index, EVN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Reason Code
   */

  IS* getEVN_4(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, EVN_4);
  }

  IS* getEventReasonCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, EVN_4);
  }

  bool isEVN_4(size_t index = 0) {
    try {
      return this->getObject(index, EVN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventReasonCode(size_t index = 0) {
    try {
      return this->getObject(index, EVN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Operator ID
   */

  XCN* getEVN_5(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, EVN_5);
  }

  XCN* getOperatorID(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, EVN_5);
  }

  bool isEVN_5(size_t index = 0) {
    try {
      return this->getObject(index, EVN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOperatorID(size_t index = 0) {
    try {
      return this->getObject(index, EVN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Occurred
   */

  TS* getEVN_6(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, EVN_6);
  }

  TS* getEventOccurred(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, EVN_6);
  }

  bool isEVN_6(size_t index = 0) {
    try {
      return this->getObject(index, EVN_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventOccurred(size_t index = 0) {
    try {
      return this->getObject(index, EVN_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Facility
   */

  HD* getEVN_7(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, EVN_7);
  }

  HD* getEventFacility(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, EVN_7);
  }

  bool isEVN_7(size_t index = 0) {
    try {
      return this->getObject(index, EVN_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventFacility(size_t index = 0) {
    try {
      return this->getObject(index, EVN_7) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of EVN */

} /* End of namespace HL7_24 */
#endif /* __EVN_v24_H__ */
