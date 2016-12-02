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


#ifndef __NA_v24_H__
#define __NA_v24_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"

namespace HL7_24 {

/* numeric array */
class NA : public HL7Data {
 public:
  NA() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    NA_1, /* value1 */
    NA_2, /* value2 */
    NA_3, /* value3 */
    NA_4, /* value4 */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "NA"; }
  NA *create() const { return new NA(); }

 private:
  void init() {
    // setName("NA");
    /* Init members */
    addObject<NM>(NA_1, "NA.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(NA_2, "NA.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(NA_3, "NA.3", HL7::initialized, HL7::repetition_off);
    addObject<NM>(NA_4, "NA.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * value1
   */
  NM *getNA_1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NA_1);
  }

  NM *getValue1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NA_1);
  }

  bool isNA_1(size_t index = 0) {
    try {
      return this->getObject(index, NA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValue1(size_t index = 0) {
    try {
      return this->getObject(index, NA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * value2
   */
  NM *getNA_2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NA_2);
  }

  NM *getValue2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NA_2);
  }

  bool isNA_2(size_t index = 0) {
    try {
      return this->getObject(index, NA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValue2(size_t index = 0) {
    try {
      return this->getObject(index, NA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * value3
   */
  NM *getNA_3(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NA_3);
  }

  NM *getValue3(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NA_3);
  }

  bool isNA_3(size_t index = 0) {
    try {
      return this->getObject(index, NA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValue3(size_t index = 0) {
    try {
      return this->getObject(index, NA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * value4
   */
  NM *getNA_4(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NA_4);
  }

  NM *getValue4(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NA_4);
  }

  bool isNA_4(size_t index = 0) {
    try {
      return this->getObject(index, NA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValue4(size_t index = 0) {
    try {
      return this->getObject(index, NA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End NA */

} /* End HL7_24 */

#endif /*__NA_v24_H__ */
