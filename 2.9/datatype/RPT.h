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


#ifndef __RPT_v29_H__
#define __RPT_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/GTS.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"

namespace HL7_29 {

/* repeat pattern */
class RPT : public HL7Data {
 public:
  RPT() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    RPT_1, /* Repeat Pattern Code */
    RPT_2, /* Calendar Alignment */
    RPT_3, /* Phase Range Begin Value */
    RPT_4, /* Phase Range End Value */
    RPT_5, /* Period Quantity */
    RPT_6, /* Period Units */
    RPT_7, /* Institution Specified Time */
    RPT_8, /* Event */
    RPT_9, /* Event Offset Quantity */
    RPT_10, /* Event Offset Units */
    RPT_11, /* General Timing Specification */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "RPT"; }
  RPT *create() const { return new RPT(); }

 private:
  void init() {
    setName("RPT");
    /* Init members */
    addObject<CWE>(RPT_1, "RPT.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RPT_2, "RPT.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RPT_3, "RPT.3", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RPT_4, "RPT.4", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RPT_5, "RPT.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RPT_6, "RPT.6", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RPT_7, "RPT.7", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RPT_8, "RPT.8", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RPT_9, "RPT.9", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RPT_10, "RPT.10", HL7::initialized, HL7::repetition_off);
    addObject<GTS>(RPT_11, "RPT.11", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Repeat Pattern Code
   */
  CWE *getRPT_1(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, RPT_1);
  }

  CWE *getRepeatPatternCode(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, RPT_1);
  }

  bool isRPT_1(size_t index = 0) {
    try {
      return this->getObject(index, RPT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRepeatPatternCode(size_t index = 0) {
    try {
      return this->getObject(index, RPT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Calendar Alignment
   */
  ID *getRPT_2(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, RPT_2);
  }

  ID *getCalendarAlignment(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, RPT_2);
  }

  bool isRPT_2(size_t index = 0) {
    try {
      return this->getObject(index, RPT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCalendarAlignment(size_t index = 0) {
    try {
      return this->getObject(index, RPT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Phase Range Begin Value
   */
  NM *getRPT_3(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, RPT_3);
  }

  NM *getPhaseRangeBeginValue(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, RPT_3);
  }

  bool isRPT_3(size_t index = 0) {
    try {
      return this->getObject(index, RPT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPhaseRangeBeginValue(size_t index = 0) {
    try {
      return this->getObject(index, RPT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Phase Range End Value
   */
  NM *getRPT_4(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, RPT_4);
  }

  NM *getPhaseRangeEndValue(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, RPT_4);
  }

  bool isRPT_4(size_t index = 0) {
    try {
      return this->getObject(index, RPT_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPhaseRangeEndValue(size_t index = 0) {
    try {
      return this->getObject(index, RPT_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Period Quantity
   */
  NM *getRPT_5(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, RPT_5);
  }

  NM *getPeriodQuantity(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, RPT_5);
  }

  bool isRPT_5(size_t index = 0) {
    try {
      return this->getObject(index, RPT_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPeriodQuantity(size_t index = 0) {
    try {
      return this->getObject(index, RPT_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Period Units
   */
  CWE *getRPT_6(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, RPT_6);
  }

  CWE *getPeriodUnits(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, RPT_6);
  }

  bool isRPT_6(size_t index = 0) {
    try {
      return this->getObject(index, RPT_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPeriodUnits(size_t index = 0) {
    try {
      return this->getObject(index, RPT_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Institution Specified Time
   */
  ID *getRPT_7(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, RPT_7);
  }

  ID *getInstitutionSpecifiedTime(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, RPT_7);
  }

  bool isRPT_7(size_t index = 0) {
    try {
      return this->getObject(index, RPT_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInstitutionSpecifiedTime(size_t index = 0) {
    try {
      return this->getObject(index, RPT_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event
   */
  ID *getRPT_8(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, RPT_8);
  }

  ID *getEvent(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, RPT_8);
  }

  bool isRPT_8(size_t index = 0) {
    try {
      return this->getObject(index, RPT_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEvent(size_t index = 0) {
    try {
      return this->getObject(index, RPT_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Offset Quantity
   */
  NM *getRPT_9(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, RPT_9);
  }

  NM *getEventOffsetQuantity(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, RPT_9);
  }

  bool isRPT_9(size_t index = 0) {
    try {
      return this->getObject(index, RPT_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventOffsetQuantity(size_t index = 0) {
    try {
      return this->getObject(index, RPT_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Offset Units
   */
  CWE *getRPT_10(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, RPT_10);
  }

  CWE *getEventOffsetUnits(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, RPT_10);
  }

  bool isRPT_10(size_t index = 0) {
    try {
      return this->getObject(index, RPT_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventOffsetUnits(size_t index = 0) {
    try {
      return this->getObject(index, RPT_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * General Timing Specification
   */
  GTS *getRPT_11(size_t index = 0) {
    return (GTS *)this->getObjectSafe(index, RPT_11);
  }

  GTS *getGeneralTimingSpecification(size_t index = 0) {
    return (GTS *)this->getObjectSafe(index, RPT_11);
  }

  bool isRPT_11(size_t index = 0) {
    try {
      return this->getObject(index, RPT_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGeneralTimingSpecification(size_t index = 0) {
    try {
      return this->getObject(index, RPT_11) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End RPT */

} /* End HL7_29 */

#endif /* __RPT_v29_H__ */
