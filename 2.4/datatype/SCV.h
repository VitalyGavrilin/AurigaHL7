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


#ifndef __SCV_v24_H__
#define __SCV_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* scheduling class value pair */
class SCV : public HL7Data {
 public:
  SCV() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    SCV_1, /* parameter class */
    SCV_2, /* parameter value */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "SCV"; }
  SCV *create() const { return new SCV(); }

 private:
  void init() {
    // setName("SCV");
    /* Init members */
    addObject<IS>(SCV_1, "SCV.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(SCV_2, "SCV.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * parameter class
   */
  IS *getSCV_1(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, SCV_1);
  }

  IS *getParameterClass(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, SCV_1);
  }

  bool isSCV_1(size_t index = 0) {
    try {
      return this->getObject(index, SCV_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParameterClass(size_t index = 0) {
    try {
      return this->getObject(index, SCV_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * parameter value
   */
  ST *getSCV_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SCV_2);
  }

  ST *getParameterValue(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SCV_2);
  }

  bool isSCV_2(size_t index = 0) {
    try {
      return this->getObject(index, SCV_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParameterValue(size_t index = 0) {
    try {
      return this->getObject(index, SCV_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End SCV */

} /* End HL7_24 */

#endif /*__SCV_v24_H__ */
