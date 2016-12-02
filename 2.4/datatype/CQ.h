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


#ifndef __CQ_v24_H__
#define __CQ_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/NM.h"

namespace HL7_24 {

/* composite quantity with units */
class CQ : public HL7Data {
 public:
  CQ() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CQ_1, /* quantity */
    CQ_2, /* units */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CQ"; }
  CQ *create() const { return new CQ(); }

 private:
  void init() {
    // setName("CQ");
    /* Init members */
    addObject<NM>(CQ_1, "CQ.1", HL7::initialized, HL7::repetition_off);
    addObject<CE>(CQ_2, "CQ.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * quantity
   */
  NM *getCQ_1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CQ_1);
  }

  NM *getQuantity(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CQ_1);
  }

  bool isCQ_1(size_t index = 0) {
    try {
      return this->getObject(index, CQ_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQuantity(size_t index = 0) {
    try {
      return this->getObject(index, CQ_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * units
   */
  CE *getCQ_2(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, CQ_2);
  }

  CE *getUnits(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, CQ_2);
  }

  bool isCQ_2(size_t index = 0) {
    try {
      return this->getObject(index, CQ_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUnits(size_t index = 0) {
    try {
      return this->getObject(index, CQ_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CQ */

} /* End HL7_24 */

#endif /*__CQ_v24_H__ */
