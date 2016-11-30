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


#ifndef __OCD_v24_H__
#define __OCD_v24_H__

#include "../../common/Util.h"
#include "../datatype/DT.h"
#include "../datatype/IS.h"

namespace HL7_24 {

/* occurence */
class OCD : public HL7Data {
 public:
  OCD() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    OCD_1, /* occurrence code */
    OCD_2, /* occurrence date */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "OCD"; }
  OCD *create() const { return new OCD(); }

 private:
  void init() {
    // setName("OCD");
    /* Init members */
    addObject<IS>(OCD_1, "OCD.1", HL7::initialized, HL7::repetition_off);
    addObject<DT>(OCD_2, "OCD.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * occurrence code
   */
  IS *getOCD_1(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, OCD_1);
  }

  IS *getOccurrenceCode(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, OCD_1);
  }

  bool isOCD_1(size_t index = 0) {
    try {
      return this->getObject(index, OCD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOccurrenceCode(size_t index = 0) {
    try {
      return this->getObject(index, OCD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * occurrence date
   */
  DT *getOCD_2(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, OCD_2);
  }

  DT *getOccurrenceDate(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, OCD_2);
  }

  bool isOCD_2(size_t index = 0) {
    try {
      return this->getObject(index, OCD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOccurrenceDate(size_t index = 0) {
    try {
      return this->getObject(index, OCD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End OCD */

} /* End HL7_24 */

#endif /*__OCD_v24_H__ */
