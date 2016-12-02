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


#ifndef __AIG_v24_H__
#define __AIG_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0278.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/NM.h"
#include "../datatype/SI.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Appointment Information - General Resource */
class AIG : public HL7Segment {
 public:
  AIG() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    AIG_1,
    AIG_2,
    AIG_3,
    AIG_4,
    AIG_5,
    AIG_6,
    AIG_7,
    AIG_8,
    AIG_9,
    AIG_10,
    AIG_11,
    AIG_12,
    AIG_13,
    AIG_14,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "AIG"; }
  AIG* create() const { return new AIG(); }

 private:
  void init() {
    setName("AIG");
    /* Init members */
    addObject<SI>(AIG_1, "AIG.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(AIG_2, "AIG.2", HL7::conditional, HL7::repetition_off);
    addObject<CE>(AIG_3, "AIG.3", HL7::conditional, HL7::repetition_off);
    addObject<CE>(AIG_4, "AIG.4", HL7::initialized, HL7::repetition_off);
    addObject<CE>(AIG_5, "AIG.5", HL7::optional, HL7::repetition_on);
    addObject<NM>(AIG_6, "AIG.6", HL7::optional, HL7::repetition_off);
    addObject<CE>(AIG_7, "AIG.7", HL7::optional, HL7::repetition_off);
    addObject<TS>(AIG_8, "AIG.8", HL7::conditional, HL7::repetition_off);
    addObject<NM>(AIG_9, "AIG.9", HL7::conditional, HL7::repetition_off);
    addObject<CE>(AIG_10, "AIG.10", HL7::conditional, HL7::repetition_off);
    addObject<NM>(AIG_11, "AIG.11", HL7::optional, HL7::repetition_off);
    addObject<CE>(AIG_12, "AIG.12", HL7::optional, HL7::repetition_off);
    addObject<IS>(AIG_13, "AIG.13", HL7::conditional, HL7::repetition_off);
    addObject<CE_0278>(AIG_14, "AIG.14", HL7::conditional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - AIG
   */

  SI* getAIG_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, AIG_1);
  }

  SI* getSetIDAIG(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, AIG_1);
  }

  bool isAIG_1(size_t index = 0) {
    try {
      return this->getObject(index, AIG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDAIG(size_t index = 0) {
    try {
      return this->getObject(index, AIG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Segment Action Code
   */

  ID* getAIG_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, AIG_2);
  }

  ID* getSegmentActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, AIG_2);
  }

  bool isAIG_2(size_t index = 0) {
    try {
      return this->getObject(index, AIG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentActionCode(size_t index = 0) {
    try {
      return this->getObject(index, AIG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Resource ID
   */

  CE* getAIG_3(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIG_3);
  }

  CE* getResourceID(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIG_3);
  }

  bool isAIG_3(size_t index = 0) {
    try {
      return this->getObject(index, AIG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResourceID(size_t index = 0) {
    try {
      return this->getObject(index, AIG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Resource Type
   */

  CE* getAIG_4(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIG_4);
  }

  CE* getResourceType(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIG_4);
  }

  bool isAIG_4(size_t index = 0) {
    try {
      return this->getObject(index, AIG_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResourceType(size_t index = 0) {
    try {
      return this->getObject(index, AIG_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Resource Group
   */

  CE* getAIG_5(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIG_5);
  }

  CE* getResourceGroup(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIG_5);
  }

  bool isAIG_5(size_t index = 0) {
    try {
      return this->getObject(index, AIG_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResourceGroup(size_t index = 0) {
    try {
      return this->getObject(index, AIG_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Resource Quantity
   */

  NM* getAIG_6(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, AIG_6);
  }

  NM* getResourceQuantity(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, AIG_6);
  }

  bool isAIG_6(size_t index = 0) {
    try {
      return this->getObject(index, AIG_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResourceQuantity(size_t index = 0) {
    try {
      return this->getObject(index, AIG_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Resource Quantity Units
   */

  CE* getAIG_7(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIG_7);
  }

  CE* getResourceQuantityUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIG_7);
  }

  bool isAIG_7(size_t index = 0) {
    try {
      return this->getObject(index, AIG_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResourceQuantityUnits(size_t index = 0) {
    try {
      return this->getObject(index, AIG_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Start Date/Time
   */

  TS* getAIG_8(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, AIG_8);
  }

  TS* getStartDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, AIG_8);
  }

  bool isAIG_8(size_t index = 0) {
    try {
      return this->getObject(index, AIG_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartDateTime(size_t index = 0) {
    try {
      return this->getObject(index, AIG_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Start Date/Time Offset
   */

  NM* getAIG_9(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, AIG_9);
  }

  NM* getStartDateTimeOffset(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, AIG_9);
  }

  bool isAIG_9(size_t index = 0) {
    try {
      return this->getObject(index, AIG_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartDateTimeOffset(size_t index = 0) {
    try {
      return this->getObject(index, AIG_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Start Date/Time Offset Units
   */

  CE* getAIG_10(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIG_10);
  }

  CE* getStartDateTimeOffsetUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIG_10);
  }

  bool isAIG_10(size_t index = 0) {
    try {
      return this->getObject(index, AIG_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartDateTimeOffsetUnits(size_t index = 0) {
    try {
      return this->getObject(index, AIG_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Duration
   */

  NM* getAIG_11(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, AIG_11);
  }

  NM* getDuration(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, AIG_11);
  }

  bool isAIG_11(size_t index = 0) {
    try {
      return this->getObject(index, AIG_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDuration(size_t index = 0) {
    try {
      return this->getObject(index, AIG_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Duration Units
   */

  CE* getAIG_12(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIG_12);
  }

  CE* getDurationUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIG_12);
  }

  bool isAIG_12(size_t index = 0) {
    try {
      return this->getObject(index, AIG_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDurationUnits(size_t index = 0) {
    try {
      return this->getObject(index, AIG_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allow Substitution Code
   */

  IS* getAIG_13(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, AIG_13);
  }

  IS* getAllowSubstitutionCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, AIG_13);
  }

  bool isAIG_13(size_t index = 0) {
    try {
      return this->getObject(index, AIG_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllowSubstitutionCode(size_t index = 0) {
    try {
      return this->getObject(index, AIG_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Status Code
   */

  CE_0278* getAIG_14(size_t index = 0) {
    return (CE_0278*)this->getObjectSafe(index, AIG_14);
  }

  CE_0278* getFillerStatusCode(size_t index = 0) {
    return (CE_0278*)this->getObjectSafe(index, AIG_14);
  }

  bool isAIG_14(size_t index = 0) {
    try {
      return this->getObject(index, AIG_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerStatusCode(size_t index = 0) {
    try {
      return this->getObject(index, AIG_14) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of AIG */

} /* End of namespace HL7_24 */
#endif /* __AIG_v24_H__ */
