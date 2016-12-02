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


#ifndef __VH_v24_H__
#define __VH_v24_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/TM.h"

namespace HL7_24 {

/* visiting hours */
class VH : public HL7Data {
 public:
  VH() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    VH_1, /* start day range */
    VH_2, /* end day range */
    VH_3, /* start hour range */
    VH_4, /* end hour range */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "VH"; }
  VH *create() const { return new VH(); }

 private:
  void init() {
    // setName("VH");
    /* Init members */
    addObject<ID>(VH_1, "VH.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(VH_2, "VH.2", HL7::initialized, HL7::repetition_off);
    addObject<TM>(VH_3, "VH.3", HL7::initialized, HL7::repetition_off);
    addObject<TM>(VH_4, "VH.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * start day range
   */
  ID *getVH_1(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, VH_1);
  }

  ID *getStartDayRange(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, VH_1);
  }

  bool isVH_1(size_t index = 0) {
    try {
      return this->getObject(index, VH_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartDayRange(size_t index = 0) {
    try {
      return this->getObject(index, VH_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * end day range
   */
  ID *getVH_2(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, VH_2);
  }

  ID *getEndDayRange(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, VH_2);
  }

  bool isVH_2(size_t index = 0) {
    try {
      return this->getObject(index, VH_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEndDayRange(size_t index = 0) {
    try {
      return this->getObject(index, VH_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * start hour range
   */
  TM *getVH_3(size_t index = 0) {
    return (TM *)this->getObjectSafe(index, VH_3);
  }

  TM *getStartHourRange(size_t index = 0) {
    return (TM *)this->getObjectSafe(index, VH_3);
  }

  bool isVH_3(size_t index = 0) {
    try {
      return this->getObject(index, VH_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartHourRange(size_t index = 0) {
    try {
      return this->getObject(index, VH_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * end hour range
   */
  TM *getVH_4(size_t index = 0) {
    return (TM *)this->getObjectSafe(index, VH_4);
  }

  TM *getEndHourRange(size_t index = 0) {
    return (TM *)this->getObjectSafe(index, VH_4);
  }

  bool isVH_4(size_t index = 0) {
    try {
      return this->getObject(index, VH_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEndHourRange(size_t index = 0) {
    try {
      return this->getObject(index, VH_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End VH */

} /* End HL7_24 */

#endif /*__VH_v24_H__ */
