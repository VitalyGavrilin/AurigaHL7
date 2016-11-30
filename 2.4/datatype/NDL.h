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


#ifndef __NDL_v24_H__
#define __NDL_v24_H__

#include "../../common/Util.h"
#include "../datatype/CNN.h"
#include "../datatype/HD.h"
#include "../datatype/IS.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* observing practitioner */
class NDL : public HL7Data {
 public:
  NDL() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    NDL_1,  /* name */
    NDL_2,  /* start date/time */
    NDL_3,  /* end date/time */
    NDL_4,  /* point of care (IS) */
    NDL_5,  /* room */
    NDL_6,  /* bed */
    NDL_7,  /* facility (HD) */
    NDL_8,  /* location status */
    NDL_9,  /* person location type */
    NDL_10, /* building */
    NDL_11, /* floor */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "NDL"; }
  NDL *create() const { return new NDL(); }

 private:
  void init() {
    // setName("NDL");
    /* Init members */
    addObject<CNN>(NDL_1, "NDL.1", HL7::initialized, HL7::repetition_off);
    addObject<TS>(NDL_2, "NDL.2", HL7::initialized, HL7::repetition_off);
    addObject<TS>(NDL_3, "NDL.3", HL7::initialized, HL7::repetition_off);
    addObject<IS>(NDL_4, "NDL.4", HL7::initialized, HL7::repetition_off);
    addObject<IS>(NDL_5, "NDL.5", HL7::initialized, HL7::repetition_off);
    addObject<IS>(NDL_6, "NDL.6", HL7::initialized, HL7::repetition_off);
    addObject<HD>(NDL_7, "NDL.7", HL7::initialized, HL7::repetition_off);
    addObject<IS>(NDL_8, "NDL.8", HL7::initialized, HL7::repetition_off);
    addObject<IS>(NDL_9, "NDL.9", HL7::initialized, HL7::repetition_off);
    addObject<IS>(NDL_10, "NDL.10", HL7::initialized, HL7::repetition_off);
    addObject<IS>(NDL_11, "NDL.11", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * name
   */
  CNN *getNDL_1(size_t index = 0) {
    return (CNN *)this->getObjectSafe(index, NDL_1);
  }

  CNN *getName(size_t index = 0) {
    return (CNN *)this->getObjectSafe(index, NDL_1);
  }

  bool isNDL_1(size_t index = 0) {
    try {
      return this->getObject(index, NDL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isName(size_t index = 0) {
    try {
      return this->getObject(index, NDL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * start date/time
   */
  TS *getNDL_2(size_t index = 0) {
    return (TS *)this->getObjectSafe(index, NDL_2);
  }

  TS *getStartDateTime(size_t index = 0) {
    return (TS *)this->getObjectSafe(index, NDL_2);
  }

  bool isNDL_2(size_t index = 0) {
    try {
      return this->getObject(index, NDL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartDateTime(size_t index = 0) {
    try {
      return this->getObject(index, NDL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * end date/time
   */
  TS *getNDL_3(size_t index = 0) {
    return (TS *)this->getObjectSafe(index, NDL_3);
  }

  TS *getEndDateTime(size_t index = 0) {
    return (TS *)this->getObjectSafe(index, NDL_3);
  }

  bool isNDL_3(size_t index = 0) {
    try {
      return this->getObject(index, NDL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEndDateTime(size_t index = 0) {
    try {
      return this->getObject(index, NDL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * point of care (IS)
   */
  IS *getNDL_4(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_4);
  }

  IS *getPointOfCare(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_4);
  }

  bool isNDL_4(size_t index = 0) {
    try {
      return this->getObject(index, NDL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPointOfCare(size_t index = 0) {
    try {
      return this->getObject(index, NDL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * room
   */
  IS *getNDL_5(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_5);
  }

  IS *getRoom(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_5);
  }

  bool isNDL_5(size_t index = 0) {
    try {
      return this->getObject(index, NDL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoom(size_t index = 0) {
    try {
      return this->getObject(index, NDL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * bed
   */
  IS *getNDL_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_6);
  }

  IS *getBed(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_6);
  }

  bool isNDL_6(size_t index = 0) {
    try {
      return this->getObject(index, NDL_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBed(size_t index = 0) {
    try {
      return this->getObject(index, NDL_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * facility (HD)
   */
  HD *getNDL_7(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, NDL_7);
  }

  HD *getFacility(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, NDL_7);
  }

  bool isNDL_7(size_t index = 0) {
    try {
      return this->getObject(index, NDL_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFacility(size_t index = 0) {
    try {
      return this->getObject(index, NDL_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * location status
   */
  IS *getNDL_8(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_8);
  }

  IS *getLocationStatus(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_8);
  }

  bool isNDL_8(size_t index = 0) {
    try {
      return this->getObject(index, NDL_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationStatus(size_t index = 0) {
    try {
      return this->getObject(index, NDL_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * person location type
   */
  IS *getNDL_9(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_9);
  }

  IS *getPersonLocationType(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_9);
  }

  bool isNDL_9(size_t index = 0) {
    try {
      return this->getObject(index, NDL_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPersonLocationType(size_t index = 0) {
    try {
      return this->getObject(index, NDL_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * building
   */
  IS *getNDL_10(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_10);
  }

  IS *getBuilding(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_10);
  }

  bool isNDL_10(size_t index = 0) {
    try {
      return this->getObject(index, NDL_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBuilding(size_t index = 0) {
    try {
      return this->getObject(index, NDL_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * floor
   */
  IS *getNDL_11(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_11);
  }

  IS *getFloor(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_11);
  }

  bool isNDL_11(size_t index = 0) {
    try {
      return this->getObject(index, NDL_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFloor(size_t index = 0) {
    try {
      return this->getObject(index, NDL_11) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End NDL */

} /* End HL7_24 */

#endif /*__NDL_v24_H__ */
