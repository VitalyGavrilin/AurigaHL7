/*
 * This file is part of Auriga HL7 library.
 *
 * Auriga HL7 library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Auriga HL7 library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Auriga HL7 library.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __PI_v24_H__
#define __PI_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* person identifier */
class PI : public HL7Data {
 public:
  PI() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    PI_1, /* ID number (ST) */
    PI_2, /* type of ID number (IS) */
    PI_3, /* other qualifying info */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "PI"; }
  PI *create() const { return new PI(); }

 private:
  void init() {
    // setName("PI");
    /* Init members */
    addObject<ST>(PI_1, "PI.1", HL7::initialized, HL7::repetition_off);
    addObject<IS>(PI_2, "PI.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PI_3, "PI.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * ID number (ST)
   */
  ST *getPI_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PI_1);
  }

  ST *getIDNumber(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PI_1);
  }

  bool isPI_1(size_t index = 0) {
    try {
      return this->getObject(index, PI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIDNumber(size_t index = 0) {
    try {
      return this->getObject(index, PI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * type of ID number (IS)
   */
  IS *getPI_2(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PI_2);
  }

  IS *getTypeOfIDNumber(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PI_2);
  }

  bool isPI_2(size_t index = 0) {
    try {
      return this->getObject(index, PI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTypeOfIDNumber(size_t index = 0) {
    try {
      return this->getObject(index, PI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * other qualifying info
   */
  ST *getPI_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PI_3);
  }

  ST *getOtherQualifyingInfo(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PI_3);
  }

  bool isPI_3(size_t index = 0) {
    try {
      return this->getObject(index, PI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOtherQualifyingInfo(size_t index = 0) {
    try {
      return this->getObject(index, PI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End PI */

} /* End HL7_24 */

#endif /*__PI_v24_H__ */
