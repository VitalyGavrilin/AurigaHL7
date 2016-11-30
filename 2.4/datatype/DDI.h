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


#ifndef __DDI_v24_H__
#define __DDI_v24_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"

namespace HL7_24 {

/* daily deductible */
class DDI : public HL7Data {
 public:
  DDI() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    DDI_1, /* delay days */
    DDI_2, /* amount */
    DDI_3, /* number of days */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "DDI"; }
  DDI *create() const { return new DDI(); }

 private:
  void init() {
    // setName("DDI");
    /* Init members */
    addObject<NM>(DDI_1, "DDI.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(DDI_2, "DDI.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(DDI_3, "DDI.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * delay days
   */
  NM *getDDI_1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, DDI_1);
  }

  NM *getDelayDays(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, DDI_1);
  }

  bool isDDI_1(size_t index = 0) {
    try {
      return this->getObject(index, DDI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDelayDays(size_t index = 0) {
    try {
      return this->getObject(index, DDI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * amount
   */
  NM *getDDI_2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, DDI_2);
  }

  NM *getAmount(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, DDI_2);
  }

  bool isDDI_2(size_t index = 0) {
    try {
      return this->getObject(index, DDI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAmount(size_t index = 0) {
    try {
      return this->getObject(index, DDI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * number of days
   */
  NM *getDDI_3(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, DDI_3);
  }

  NM *getNumberOfDays(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, DDI_3);
  }

  bool isDDI_3(size_t index = 0) {
    try {
      return this->getObject(index, DDI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberOfDays(size_t index = 0) {
    try {
      return this->getObject(index, DDI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End DDI */

} /* End HL7_24 */

#endif /*__DDI_v24_H__ */
