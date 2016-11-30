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


#ifndef __CCD_v24_H__
#define __CCD_v24_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* charge time */
class CCD : public HL7Data {
 public:
  CCD() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CCD_1, /* when to charge code */
    CCD_2, /* date/time */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CCD"; }
  CCD *create() const { return new CCD(); }

 private:
  void init() {
    // setName("CCD");
    /* Init members */
    addObject<ID>(CCD_1, "CCD.1", HL7::initialized, HL7::repetition_off);
    addObject<TS>(CCD_2, "CCD.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * when to charge code
   */
  ID *getCCD_1(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CCD_1);
  }

  ID *getWhenToChargeCode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CCD_1);
  }

  bool isCCD_1(size_t index = 0) {
    try {
      return this->getObject(index, CCD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isWhenToChargeCode(size_t index = 0) {
    try {
      return this->getObject(index, CCD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * date/time
   */
  TS *getCCD_2(size_t index = 0) {
    return (TS *)this->getObjectSafe(index, CCD_2);
  }

  TS *getDateTime(size_t index = 0) {
    return (TS *)this->getObjectSafe(index, CCD_2);
  }

  bool isCCD_2(size_t index = 0) {
    try {
      return this->getObject(index, CCD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTime(size_t index = 0) {
    try {
      return this->getObject(index, CCD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CCD */

} /* End HL7_24 */

#endif /*__CCD_v24_H__ */
