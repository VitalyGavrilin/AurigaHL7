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


#ifndef __DLD_v24_H__
#define __DLD_v24_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* discharge location */
class DLD : public HL7Data {
 public:
  DLD() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    DLD_1, /* discharge location */
    DLD_2, /* effective date */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "DLD"; }
  DLD *create() const { return new DLD(); }

 private:
  void init() {
    // setName("DLD");
    /* Init members */
    addObject<ID>(DLD_1, "DLD.1", HL7::initialized, HL7::repetition_off);
    addObject<TS>(DLD_2, "DLD.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * discharge location
   */
  ID *getDLD_1(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, DLD_1);
  }

  ID *getDischargeLocation(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, DLD_1);
  }

  bool isDLD_1(size_t index = 0) {
    try {
      return this->getObject(index, DLD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDischargeLocation(size_t index = 0) {
    try {
      return this->getObject(index, DLD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * effective date
   */
  TS *getDLD_2(size_t index = 0) {
    return (TS *)this->getObjectSafe(index, DLD_2);
  }

  TS *getEffectiveDate(size_t index = 0) {
    return (TS *)this->getObjectSafe(index, DLD_2);
  }

  bool isDLD_2(size_t index = 0) {
    try {
      return this->getObject(index, DLD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, DLD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End DLD */

} /* End HL7_24 */

#endif /*__DLD_v24_H__ */
