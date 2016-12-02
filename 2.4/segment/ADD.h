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


#ifndef __ADD_v24_H__
#define __ADD_v24_H__

#include "../../common/Util.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* Addendum */
class ADD : public HL7Segment {
 public:
  ADD() { this->init(); }

 private:
  /* */
  enum FIELD_ID { ADD_1, FIELD_ID_MAX };

 public:
  const char* className() const { return "ADD"; }
  ADD* create() const { return new ADD(); }

 private:
  void init() {
    setName("ADD");
    /* Init members */
    addObject<ST>(ADD_1, "ADD.1", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Addendum Continuation Pointer
   */

  ST* getADD_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ADD_1);
  }

  ST* getAddendumContinuationPointer(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ADD_1);
  }

  bool isADD_1(size_t index = 0) {
    try {
      return this->getObject(index, ADD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAddendumContinuationPointer(size_t index = 0) {
    try {
      return this->getObject(index, ADD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ADD */

} /* End of namespace HL7_24 */
#endif /* __ADD_v24_H__ */
