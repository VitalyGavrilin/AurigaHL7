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


#ifndef __LA1_v24_H__
#define __LA1_v24_H__

#include "../../common/Util.h"
#include "../datatype/AD.h"
#include "../datatype/HD.h"
#include "../datatype/IS.h"

namespace HL7_24 {

/* Location with address information (variant 1) */
class LA1 : public HL7Data {
 public:
  LA1() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    LA1_1, /* point of care (IS) */
    LA1_2, /* room */
    LA1_3, /* bed */
    LA1_4, /* facility (HD) */
    LA1_5, /* location status */
    LA1_6, /* person location type */
    LA1_7, /* building */
    LA1_8, /* floor */
    LA1_9, /* address */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "LA1"; }
  LA1 *create() const { return new LA1(); }

 private:
  void init() {
    // setName("LA1");
    /* Init members */
    addObject<IS>(LA1_1, "LA1.1", HL7::initialized, HL7::repetition_off);
    addObject<IS>(LA1_2, "LA1.2", HL7::initialized, HL7::repetition_off);
    addObject<IS>(LA1_3, "LA1.3", HL7::initialized, HL7::repetition_off);
    addObject<HD>(LA1_4, "LA1.4", HL7::initialized, HL7::repetition_off);
    addObject<IS>(LA1_5, "LA1.5", HL7::initialized, HL7::repetition_off);
    addObject<IS>(LA1_6, "LA1.6", HL7::initialized, HL7::repetition_off);
    addObject<IS>(LA1_7, "LA1.7", HL7::initialized, HL7::repetition_off);
    addObject<IS>(LA1_8, "LA1.8", HL7::initialized, HL7::repetition_off);
    addObject<AD>(LA1_9, "LA1.9", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * point of care (IS)
   */
  IS *getLA1_1(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA1_1);
  }

  IS *getPointOfCare(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA1_1);
  }

  bool isLA1_1(size_t index = 0) {
    try {
      return this->getObject(index, LA1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPointOfCare(size_t index = 0) {
    try {
      return this->getObject(index, LA1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * room
   */
  IS *getLA1_2(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA1_2);
  }

  IS *getRoom(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA1_2);
  }

  bool isLA1_2(size_t index = 0) {
    try {
      return this->getObject(index, LA1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoom(size_t index = 0) {
    try {
      return this->getObject(index, LA1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * bed
   */
  IS *getLA1_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA1_3);
  }

  IS *getBed(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA1_3);
  }

  bool isLA1_3(size_t index = 0) {
    try {
      return this->getObject(index, LA1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBed(size_t index = 0) {
    try {
      return this->getObject(index, LA1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * facility (HD)
   */
  HD *getLA1_4(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, LA1_4);
  }

  HD *getFacility(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, LA1_4);
  }

  bool isLA1_4(size_t index = 0) {
    try {
      return this->getObject(index, LA1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFacility(size_t index = 0) {
    try {
      return this->getObject(index, LA1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * location status
   */
  IS *getLA1_5(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA1_5);
  }

  IS *getLocationStatus(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA1_5);
  }

  bool isLA1_5(size_t index = 0) {
    try {
      return this->getObject(index, LA1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationStatus(size_t index = 0) {
    try {
      return this->getObject(index, LA1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * person location type
   */
  IS *getLA1_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA1_6);
  }

  IS *getPersonLocationType(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA1_6);
  }

  bool isLA1_6(size_t index = 0) {
    try {
      return this->getObject(index, LA1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPersonLocationType(size_t index = 0) {
    try {
      return this->getObject(index, LA1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * building
   */
  IS *getLA1_7(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA1_7);
  }

  IS *getBuilding(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA1_7);
  }

  bool isLA1_7(size_t index = 0) {
    try {
      return this->getObject(index, LA1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBuilding(size_t index = 0) {
    try {
      return this->getObject(index, LA1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * floor
   */
  IS *getLA1_8(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA1_8);
  }

  IS *getFloor(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA1_8);
  }

  bool isLA1_8(size_t index = 0) {
    try {
      return this->getObject(index, LA1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFloor(size_t index = 0) {
    try {
      return this->getObject(index, LA1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * address
   */
  AD *getLA1_9(size_t index = 0) {
    return (AD *)this->getObjectSafe(index, LA1_9);
  }

  AD *getAddress(size_t index = 0) {
    return (AD *)this->getObjectSafe(index, LA1_9);
  }

  bool isLA1_9(size_t index = 0) {
    try {
      return this->getObject(index, LA1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAddress(size_t index = 0) {
    try {
      return this->getObject(index, LA1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End LA1 */

} /* End HL7_24 */

#endif /*__LA1_v24_H__ */
