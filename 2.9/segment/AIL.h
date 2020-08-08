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


#ifndef __AIL_v29_H__
#define __AIL_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/PL.h"
#include "../datatype/SI.h"

namespace HL7_29 {

/* AIL */
class AIL : public HL7Segment {
 public:
  AIL() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    AIL_1,
    AIL_2,
    AIL_3,
    AIL_4,
    AIL_5,
    AIL_6,
    AIL_7,
    AIL_8,
    AIL_9,
    AIL_10,
    AIL_11,
    AIL_12,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "AIL"; }
  AIL* create() const { return new AIL(); }

 private:
  void init() {
    setName("AIL");
    /* Init members */
    addObject<SI>(AIL_1, "AIL.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(AIL_2, "AIL.2", HL7::initialized, HL7::repetition_off);
    addObject<PL>(AIL_3, "AIL.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(AIL_4, "AIL.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(AIL_5, "AIL.5", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(AIL_6, "AIL.6", HL7::initialized, HL7::repetition_off);
    addObject<NM>(AIL_7, "AIL.7", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(AIL_8, "AIL.8", HL7::initialized, HL7::repetition_off);
    addObject<NM>(AIL_9, "AIL.9", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(AIL_10, "AIL.10", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(AIL_11, "AIL.11", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(AIL_12, "AIL.12", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - AIL
   */

  SI* getAIL_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, AIL_1);
  }

  SI* getSetIDAIL(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, AIL_1);
  }

  bool isAIL_1(size_t index = 0) {
    try {
      return this->getObject(index, AIL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDAIL(size_t index = 0) {
    try {
      return this->getObject(index, AIL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Segment Action Code
   */

  ID* getAIL_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, AIL_2);
  }

  ID* getSegmentActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, AIL_2);
  }

  bool isAIL_2(size_t index = 0) {
    try {
      return this->getObject(index, AIL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentActionCode(size_t index = 0) {
    try {
      return this->getObject(index, AIL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Resource ID
   */

  PL* getAIL_3(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, AIL_3);
  }

  PL* getLocationResourceID(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, AIL_3);
  }

  bool isAIL_3(size_t index = 0) {
    try {
      return this->getObject(index, AIL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationResourceID(size_t index = 0) {
    try {
      return this->getObject(index, AIL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Type - AIL
   */

  CWE* getAIL_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AIL_4);
  }

  CWE* getLocationTypeAIL(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AIL_4);
  }

  bool isAIL_4(size_t index = 0) {
    try {
      return this->getObject(index, AIL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationTypeAIL(size_t index = 0) {
    try {
      return this->getObject(index, AIL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Group
   */

  CWE* getAIL_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AIL_5);
  }

  CWE* getLocationGroup(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AIL_5);
  }

  bool isAIL_5(size_t index = 0) {
    try {
      return this->getObject(index, AIL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationGroup(size_t index = 0) {
    try {
      return this->getObject(index, AIL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Start Date/Time
   */

  DTM* getAIL_6(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, AIL_6);
  }

  DTM* getStartDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, AIL_6);
  }

  bool isAIL_6(size_t index = 0) {
    try {
      return this->getObject(index, AIL_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartDateTime(size_t index = 0) {
    try {
      return this->getObject(index, AIL_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Start Date/Time Offset
   */

  NM* getAIL_7(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, AIL_7);
  }

  NM* getStartDateTimeOffset(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, AIL_7);
  }

  bool isAIL_7(size_t index = 0) {
    try {
      return this->getObject(index, AIL_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartDateTimeOffset(size_t index = 0) {
    try {
      return this->getObject(index, AIL_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Start Date/Time Offset Units
   */

  CNE* getAIL_8(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, AIL_8);
  }

  CNE* getStartDateTimeOffsetUnits(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, AIL_8);
  }

  bool isAIL_8(size_t index = 0) {
    try {
      return this->getObject(index, AIL_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartDateTimeOffsetUnits(size_t index = 0) {
    try {
      return this->getObject(index, AIL_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Duration
   */

  NM* getAIL_9(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, AIL_9);
  }

  NM* getDuration(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, AIL_9);
  }

  bool isAIL_9(size_t index = 0) {
    try {
      return this->getObject(index, AIL_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDuration(size_t index = 0) {
    try {
      return this->getObject(index, AIL_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Duration Units
   */

  CNE* getAIL_10(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, AIL_10);
  }

  CNE* getDurationUnits(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, AIL_10);
  }

  bool isAIL_10(size_t index = 0) {
    try {
      return this->getObject(index, AIL_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDurationUnits(size_t index = 0) {
    try {
      return this->getObject(index, AIL_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allow Substitution Code
   */

  CWE* getAIL_11(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AIL_11);
  }

  CWE* getAllowSubstitutionCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AIL_11);
  }

  bool isAIL_11(size_t index = 0) {
    try {
      return this->getObject(index, AIL_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllowSubstitutionCode(size_t index = 0) {
    try {
      return this->getObject(index, AIL_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Status Code
   */

  CWE* getAIL_12(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AIL_12);
  }

  CWE* getFillerStatusCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AIL_12);
  }

  bool isAIL_12(size_t index = 0) {
    try {
      return this->getObject(index, AIL_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerStatusCode(size_t index = 0) {
    try {
      return this->getObject(index, AIL_12) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of AIL */

} /* End of namespace HL7_29 */
#endif /* __AIL_v29_H__ */
