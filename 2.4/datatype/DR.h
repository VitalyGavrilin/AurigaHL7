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


#ifndef __DR_v24_H__
#define __DR_v24_H__

#include "../../common/Util.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* date/time range */
class DR : public HL7Data {
 public:
  DR() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    DR_1, /* range start date/time */
    DR_2, /* range end date/time */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "DR"; }
  DR *create() const { return new DR(); }

 private:
  void init() {
    // setName("DR");
    /* Init members */
    addObject<TS>(DR_1, "DR.1", HL7::initialized, HL7::repetition_off);
    addObject<TS>(DR_2, "DR.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * range start date/time
   */
  TS *getDR_1(size_t index = 0) {
    return (TS *)this->getObjectSafe(index, DR_1);
  }

  TS *getRangeStartDateTime(size_t index = 0) {
    return (TS *)this->getObjectSafe(index, DR_1);
  }

  bool isDR_1(size_t index = 0) {
    try {
      return this->getObject(index, DR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRangeStartDateTime(size_t index = 0) {
    try {
      return this->getObject(index, DR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * range end date/time
   */
  TS *getDR_2(size_t index = 0) {
    return (TS *)this->getObjectSafe(index, DR_2);
  }

  TS *getRangeEndDateTime(size_t index = 0) {
    return (TS *)this->getObjectSafe(index, DR_2);
  }

  bool isDR_2(size_t index = 0) {
    try {
      return this->getObject(index, DR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRangeEndDateTime(size_t index = 0) {
    try {
      return this->getObject(index, DR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End DR */

} /* End HL7_24 */

#endif /*__DR_v24_H__ */
