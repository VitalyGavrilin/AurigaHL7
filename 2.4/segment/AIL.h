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


#ifndef __AIL_v24_H__
#define __AIL_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0278.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/NM.h"
#include "../datatype/PL.h"
#include "../datatype/SI.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Appointment Information - Location Resource */
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
    addObject<ID>(AIL_2, "AIL.2", HL7::conditional, HL7::repetition_off);
    addObject<PL>(AIL_3, "AIL.3", HL7::conditional, HL7::repetition_off);
    addObject<CE>(AIL_4, "AIL.4", HL7::initialized, HL7::repetition_off);
    addObject<CE>(AIL_5, "AIL.5", HL7::optional, HL7::repetition_off);
    addObject<TS>(AIL_6, "AIL.6", HL7::conditional, HL7::repetition_off);
    addObject<NM>(AIL_7, "AIL.7", HL7::conditional, HL7::repetition_off);
    addObject<CE>(AIL_8, "AIL.8", HL7::conditional, HL7::repetition_off);
    addObject<NM>(AIL_9, "AIL.9", HL7::optional, HL7::repetition_off);
    addObject<CE>(AIL_10, "AIL.10", HL7::optional, HL7::repetition_off);
    addObject<IS>(AIL_11, "AIL.11", HL7::conditional, HL7::repetition_off);
    addObject<CE_0278>(AIL_12, "AIL.12", HL7::conditional, HL7::repetition_off);
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
   * Location Type-AIL
   */

  CE* getAIL_4(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIL_4);
  }

  CE* getLocationTypeAIL(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIL_4);
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

  CE* getAIL_5(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIL_5);
  }

  CE* getLocationGroup(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIL_5);
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

  TS* getAIL_6(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, AIL_6);
  }

  TS* getStartDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, AIL_6);
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

  CE* getAIL_8(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIL_8);
  }

  CE* getStartDateTimeOffsetUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIL_8);
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

  CE* getAIL_10(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIL_10);
  }

  CE* getDurationUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIL_10);
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

  IS* getAIL_11(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, AIL_11);
  }

  IS* getAllowSubstitutionCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, AIL_11);
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

  CE_0278* getAIL_12(size_t index = 0) {
    return (CE_0278*)this->getObjectSafe(index, AIL_12);
  }

  CE_0278* getFillerStatusCode(size_t index = 0) {
    return (CE_0278*)this->getObjectSafe(index, AIL_12);
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

} /* End of namespace HL7_24 */
#endif /* __AIL_v24_H__ */
