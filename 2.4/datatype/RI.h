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


#ifndef __RI_v24_H__
#define __RI_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* repeat interval */
class RI : public HL7Data {
 public:
  RI() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    RI_1, /* repeat pattern */
    RI_2, /* explicit time interval */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "RI"; }
  RI *create() const { return new RI(); }

 private:
  void init() {
    // setName("RI");
    /* Init members */
    addObject<IS>(RI_1, "RI.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RI_2, "RI.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * repeat pattern
   */
  IS *getRI_1(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, RI_1);
  }

  IS *getRepeatPattern(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, RI_1);
  }

  bool isRI_1(size_t index = 0) {
    try {
      return this->getObject(index, RI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRepeatPattern(size_t index = 0) {
    try {
      return this->getObject(index, RI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * explicit time interval
   */
  ST *getRI_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, RI_2);
  }

  ST *getExplicitTimeInterval(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, RI_2);
  }

  bool isRI_2(size_t index = 0) {
    try {
      return this->getObject(index, RI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExplicitTimeInterval(size_t index = 0) {
    try {
      return this->getObject(index, RI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End RI */

} /* End HL7_24 */

#endif /*__RI_v24_H__ */
