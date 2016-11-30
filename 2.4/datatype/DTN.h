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


#ifndef __DTN_v24_H__
#define __DTN_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/NM.h"

namespace HL7_24 {

/* Day Type and Number */
class DTN : public HL7Data {
 public:
  DTN() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    DTN_1, /* day type */
    DTN_2, /* number of days */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "DTN"; }
  DTN *create() const { return new DTN(); }

 private:
  void init() {
    // setName("DTN");
    /* Init members */
    addObject<IS>(DTN_1, "DTN.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(DTN_2, "DTN.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * day type
   */
  IS *getDTN_1(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, DTN_1);
  }

  IS *getDayType(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, DTN_1);
  }

  bool isDTN_1(size_t index = 0) {
    try {
      return this->getObject(index, DTN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDayType(size_t index = 0) {
    try {
      return this->getObject(index, DTN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * number of days
   */
  NM *getDTN_2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, DTN_2);
  }

  NM *getNumberOfDays(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, DTN_2);
  }

  bool isDTN_2(size_t index = 0) {
    try {
      return this->getObject(index, DTN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberOfDays(size_t index = 0) {
    try {
      return this->getObject(index, DTN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End DTN */

} /* End HL7_24 */

#endif /*__DTN_v24_H__ */
