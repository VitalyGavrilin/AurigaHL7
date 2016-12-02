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


#ifndef __PL_v24_H__
#define __PL_v24_H__

#include "../../common/Util.h"
#include "../datatype/HD.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* person location */
class PL : public HL7Data {
 public:
  PL() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    PL_1, /* point of care */
    PL_2, /* room */
    PL_3, /* bed */
    PL_4, /* facility (HD) */
    PL_5, /* location status */
    PL_6, /* person location type */
    PL_7, /* building */
    PL_8, /* floor */
    PL_9, /* Location description */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "PL"; }
  PL *create() const { return new PL(); }

 private:
  void init() {
    // setName("PL");
    /* Init members */
    addObject<IS>(PL_1, "PL.1", HL7::initialized, HL7::repetition_off);
    addObject<IS>(PL_2, "PL.2", HL7::initialized, HL7::repetition_off);
    addObject<IS>(PL_3, "PL.3", HL7::initialized, HL7::repetition_off);
    addObject<HD>(PL_4, "PL.4", HL7::initialized, HL7::repetition_off);
    addObject<IS>(PL_5, "PL.5", HL7::initialized, HL7::repetition_off);
    addObject<IS>(PL_6, "PL.6", HL7::initialized, HL7::repetition_off);
    addObject<IS>(PL_7, "PL.7", HL7::initialized, HL7::repetition_off);
    addObject<IS>(PL_8, "PL.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PL_9, "PL.9", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * point of care
   */
  IS *getPL_1(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PL_1);
  }

  IS *getPointOfCare(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PL_1);
  }

  bool isPL_1(size_t index = 0) {
    try {
      return this->getObject(index, PL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPointOfCare(size_t index = 0) {
    try {
      return this->getObject(index, PL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * room
   */
  IS *getPL_2(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PL_2);
  }

  IS *getRoom(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PL_2);
  }

  bool isPL_2(size_t index = 0) {
    try {
      return this->getObject(index, PL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoom(size_t index = 0) {
    try {
      return this->getObject(index, PL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * bed
   */
  IS *getPL_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PL_3);
  }

  IS *getBed(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PL_3);
  }

  bool isPL_3(size_t index = 0) {
    try {
      return this->getObject(index, PL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBed(size_t index = 0) {
    try {
      return this->getObject(index, PL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * facility (HD)
   */
  HD *getPL_4(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, PL_4);
  }

  HD *getFacility(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, PL_4);
  }

  bool isPL_4(size_t index = 0) {
    try {
      return this->getObject(index, PL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFacility(size_t index = 0) {
    try {
      return this->getObject(index, PL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * location status
   */
  IS *getPL_5(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PL_5);
  }

  IS *getLocationStatus(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PL_5);
  }

  bool isPL_5(size_t index = 0) {
    try {
      return this->getObject(index, PL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationStatus(size_t index = 0) {
    try {
      return this->getObject(index, PL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * person location type
   */
  IS *getPL_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PL_6);
  }

  IS *getPersonLocationType(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PL_6);
  }

  bool isPL_6(size_t index = 0) {
    try {
      return this->getObject(index, PL_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPersonLocationType(size_t index = 0) {
    try {
      return this->getObject(index, PL_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * building
   */
  IS *getPL_7(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PL_7);
  }

  IS *getBuilding(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PL_7);
  }

  bool isPL_7(size_t index = 0) {
    try {
      return this->getObject(index, PL_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBuilding(size_t index = 0) {
    try {
      return this->getObject(index, PL_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * floor
   */
  IS *getPL_8(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PL_8);
  }

  IS *getFloor(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PL_8);
  }

  bool isPL_8(size_t index = 0) {
    try {
      return this->getObject(index, PL_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFloor(size_t index = 0) {
    try {
      return this->getObject(index, PL_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location description
   */
  ST *getPL_9(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PL_9);
  }

  ST *getLocationDescription(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PL_9);
  }

  bool isPL_9(size_t index = 0) {
    try {
      return this->getObject(index, PL_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationDescription(size_t index = 0) {
    try {
      return this->getObject(index, PL_9) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End PL */

} /* End HL7_24 */

#endif /*__PL_v24_H__ */
