/*
 * This file is part of AurigaHL7.
 *
 * AurigaHL7 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * AurigaHL7 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with AurigaHL7.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __URS_v24_H__
#define __URS_v24_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"
#include "../datatype/TQ.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Unsolicited Selection */
class URS : public HL7Segment {
 public:
  URS() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    URS_1,
    URS_2,
    URS_3,
    URS_4,
    URS_5,
    URS_6,
    URS_7,
    URS_8,
    URS_9,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "URS"; }
  URS* create() const { return new URS(); }

 private:
  void init() {
    setName("URS");
    /* Init members */
    addObject<ST>(URS_1, "URS.1", HL7::initialized, HL7::repetition_on);
    addObject<TS>(URS_2, "URS.2", HL7::optional, HL7::repetition_off);
    addObject<TS>(URS_3, "URS.3", HL7::optional, HL7::repetition_off);
    addObject<ST>(URS_4, "URS.4", HL7::optional, HL7::repetition_on);
    addObject<ST>(URS_5, "URS.5", HL7::optional, HL7::repetition_on);
    addObject<ID>(URS_6, "URS.6", HL7::optional, HL7::repetition_on);
    addObject<ID>(URS_7, "URS.7", HL7::optional, HL7::repetition_on);
    addObject<ID>(URS_8, "URS.8", HL7::optional, HL7::repetition_on);
    addObject<TQ>(URS_9, "URS.9", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * R/U Where Subject Definition
   */

  ST* getURS_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, URS_1);
  }

  ST* getRUWhereSubjectDefinition(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, URS_1);
  }

  bool isURS_1(size_t index = 0) {
    try {
      return this->getObject(index, URS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRUWhereSubjectDefinition(size_t index = 0) {
    try {
      return this->getObject(index, URS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * R/U When Data Start Date/Time
   */

  TS* getURS_2(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, URS_2);
  }

  TS* getRUWhenDataStartDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, URS_2);
  }

  bool isURS_2(size_t index = 0) {
    try {
      return this->getObject(index, URS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRUWhenDataStartDateTime(size_t index = 0) {
    try {
      return this->getObject(index, URS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * R/U When Data End Date/Time
   */

  TS* getURS_3(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, URS_3);
  }

  TS* getRUWhenDataEndDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, URS_3);
  }

  bool isURS_3(size_t index = 0) {
    try {
      return this->getObject(index, URS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRUWhenDataEndDateTime(size_t index = 0) {
    try {
      return this->getObject(index, URS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * R/U What User Qualifier
   */

  ST* getURS_4(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, URS_4);
  }

  ST* getRUWhatUserQualifier(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, URS_4);
  }

  bool isURS_4(size_t index = 0) {
    try {
      return this->getObject(index, URS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRUWhatUserQualifier(size_t index = 0) {
    try {
      return this->getObject(index, URS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * R/U Other Results Subject Definition
   */

  ST* getURS_5(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, URS_5);
  }

  ST* getRUOtherResultsSubjectDefinition(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, URS_5);
  }

  bool isURS_5(size_t index = 0) {
    try {
      return this->getObject(index, URS_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRUOtherResultsSubjectDefinition(size_t index = 0) {
    try {
      return this->getObject(index, URS_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * R/U Which Date/Time Qualifier
   */

  ID* getURS_6(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, URS_6);
  }

  ID* getRUWhichDateTimeQualifier(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, URS_6);
  }

  bool isURS_6(size_t index = 0) {
    try {
      return this->getObject(index, URS_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRUWhichDateTimeQualifier(size_t index = 0) {
    try {
      return this->getObject(index, URS_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * R/U Which Date/Time Status Qualifier
   */

  ID* getURS_7(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, URS_7);
  }

  ID* getRUWhichDateTimeStatusQualifier(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, URS_7);
  }

  bool isURS_7(size_t index = 0) {
    try {
      return this->getObject(index, URS_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRUWhichDateTimeStatusQualifier(size_t index = 0) {
    try {
      return this->getObject(index, URS_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * R/U Date/Time Selection Qualifier
   */

  ID* getURS_8(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, URS_8);
  }

  ID* getRUDateTimeSelectionQualifier(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, URS_8);
  }

  bool isURS_8(size_t index = 0) {
    try {
      return this->getObject(index, URS_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRUDateTimeSelectionQualifier(size_t index = 0) {
    try {
      return this->getObject(index, URS_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * R/U Quantity/Timing Qualifier
   */

  TQ* getURS_9(size_t index = 0) {
    return (TQ*)this->getObjectSafe(index, URS_9);
  }

  TQ* getRUQuantityTimingQualifier(size_t index = 0) {
    return (TQ*)this->getObjectSafe(index, URS_9);
  }

  bool isURS_9(size_t index = 0) {
    try {
      return this->getObject(index, URS_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRUQuantityTimingQualifier(size_t index = 0) {
    try {
      return this->getObject(index, URS_9) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of URS */

} /* End of namespace HL7_24 */
#endif /* __URS_v24_H__ */
