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


#ifndef __TS_v24_H__
#define __TS_v24_H__

#include "../../common/Util.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* time stamp */
class TS : public HL7Data {
 public:
  TS() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    TS_1, /* time of an event */
    TS_2, /* degree of precision */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "TS"; }
  TS *create() const { return new TS(); }

 private:
  void init() {
    // setName("TS");
    /* Init members */
    addObject<ST>(TS_1, "TS.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(TS_2, "TS.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * time of an event
   */
  ST *getTS_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, TS_1);
  }

  ST *getTimeOfAnEvent(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, TS_1);
  }

  bool isTS_1(size_t index = 0) {
    try {
      return this->getObject(index, TS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTimeOfAnEvent(size_t index = 0) {
    try {
      return this->getObject(index, TS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * degree of precision
   */
  ST *getTS_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, TS_2);
  }

  ST *getDegreeOfPrecision(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, TS_2);
  }

  bool isTS_2(size_t index = 0) {
    try {
      return this->getObject(index, TS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDegreeOfPrecision(size_t index = 0) {
    try {
      return this->getObject(index, TS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End TS */

} /* End HL7_24 */

#endif /*__TS_v24_H__ */
