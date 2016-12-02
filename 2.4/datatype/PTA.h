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


#ifndef __PTA_v24_H__
#define __PTA_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/NM.h"

namespace HL7_24 {

/* Policy Type */
class PTA : public HL7Data {
 public:
  PTA() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    PTA_1, /* policy type */
    PTA_2, /* amount class */
    PTA_3, /* amount */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "PTA"; }
  PTA *create() const { return new PTA(); }

 private:
  void init() {
    // setName("PTA");
    /* Init members */
    addObject<IS>(PTA_1, "PTA.1", HL7::initialized, HL7::repetition_off);
    addObject<IS>(PTA_2, "PTA.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(PTA_3, "PTA.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * policy type
   */
  IS *getPTA_1(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PTA_1);
  }

  IS *getPolicyType(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PTA_1);
  }

  bool isPTA_1(size_t index = 0) {
    try {
      return this->getObject(index, PTA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPolicyType(size_t index = 0) {
    try {
      return this->getObject(index, PTA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * amount class
   */
  IS *getPTA_2(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PTA_2);
  }

  IS *getAmountClass(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PTA_2);
  }

  bool isPTA_2(size_t index = 0) {
    try {
      return this->getObject(index, PTA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAmountClass(size_t index = 0) {
    try {
      return this->getObject(index, PTA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * amount
   */
  NM *getPTA_3(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, PTA_3);
  }

  NM *getAmount(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, PTA_3);
  }

  bool isPTA_3(size_t index = 0) {
    try {
      return this->getObject(index, PTA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAmount(size_t index = 0) {
    try {
      return this->getObject(index, PTA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End PTA */

} /* End HL7_24 */

#endif /*__PTA_v24_H__ */
