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


#ifndef __EVN_v29_H__
#define __EVN_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/HD.h"
#include "../datatype/ST.h"
#include "../datatype/XCN.h"

namespace HL7_29 {

/* EVN */
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
    addObject<ST>(EVN_1, "EVN.1", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(EVN_2, "EVN.2", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(EVN_3, "EVN.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(EVN_4, "EVN.4", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(EVN_5, "EVN.5", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(EVN_6, "EVN.6", HL7::initialized, HL7::repetition_off);
    addObject<HD>(EVN_7, "EVN.7", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Event Type Code
   */

  ST* getEVN_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, EVN_1);
  }

  ST* getEventTypeCode(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, EVN_1);
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

  DTM* getEVN_2(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, EVN_2);
  }

  DTM* getRecordedDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, EVN_2);
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

  DTM* getEVN_3(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, EVN_3);
  }

  DTM* getDateTimePlannedEvent(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, EVN_3);
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

  CWE* getEVN_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, EVN_4);
  }

  CWE* getEventReasonCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, EVN_4);
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

  DTM* getEVN_6(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, EVN_6);
  }

  DTM* getEventOccurred(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, EVN_6);
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

} /* End of namespace HL7_29 */
#endif /* __EVN_v29_H__ */
