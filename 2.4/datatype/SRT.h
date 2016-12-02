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


#ifndef __SRT_v24_H__
#define __SRT_v24_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* sort order */
class SRT : public HL7Data {
 public:
  SRT() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    SRT_1, /* sort-by field */
    SRT_2, /* sequencing */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "SRT"; }
  SRT *create() const { return new SRT(); }

 private:
  void init() {
    // setName("SRT");
    /* Init members */
    addObject<ST>(SRT_1, "SRT.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(SRT_2, "SRT.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * sort-by field
   */
  ST *getSRT_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SRT_1);
  }

  ST *getSortByField(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SRT_1);
  }

  bool isSRT_1(size_t index = 0) {
    try {
      return this->getObject(index, SRT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSortByField(size_t index = 0) {
    try {
      return this->getObject(index, SRT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * sequencing
   */
  ID *getSRT_2(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, SRT_2);
  }

  ID *getSequencing(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, SRT_2);
  }

  bool isSRT_2(size_t index = 0) {
    try {
      return this->getObject(index, SRT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSequencing(size_t index = 0) {
    try {
      return this->getObject(index, SRT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End SRT */

} /* End HL7_24 */

#endif /*__SRT_v24_H__ */
