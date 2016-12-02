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


#ifndef __MO_v24_H__
#define __MO_v24_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"

namespace HL7_24 {

/* money */
class MO : public HL7Data {
 public:
  MO() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    MO_1, /* quantity */
    MO_2, /* denomination */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "MO"; }
  MO *create() const { return new MO(); }

 private:
  void init() {
    // setName("MO");
    /* Init members */
    addObject<NM>(MO_1, "MO.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(MO_2, "MO.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * quantity
   */
  NM *getMO_1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MO_1);
  }

  NM *getQuantity(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MO_1);
  }

  bool isMO_1(size_t index = 0) {
    try {
      return this->getObject(index, MO_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQuantity(size_t index = 0) {
    try {
      return this->getObject(index, MO_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * denomination
   */
  ID *getMO_2(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, MO_2);
  }

  ID *getDenomination(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, MO_2);
  }

  bool isMO_2(size_t index = 0) {
    try {
      return this->getObject(index, MO_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDenomination(size_t index = 0) {
    try {
      return this->getObject(index, MO_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End MO */

} /* End HL7_24 */

#endif /*__MO_v24_H__ */
