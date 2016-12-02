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


#ifndef __DSC_v24_H__
#define __DSC_v24_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* Continuation Pointer */
class DSC : public HL7Segment {
 public:
  DSC() { this->init(); }

 private:
  /* */
  enum FIELD_ID { DSC_1, DSC_2, FIELD_ID_MAX };

 public:
  const char* className() const { return "DSC"; }
  DSC* create() const { return new DSC(); }

 private:
  void init() {
    setName("DSC");
    /* Init members */
    addObject<ST>(DSC_1, "DSC.1", HL7::optional, HL7::repetition_off);
    addObject<ID>(DSC_2, "DSC.2", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Continuation Pointer
   */

  ST* getDSC_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DSC_1);
  }

  ST* getContinuationPointer(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DSC_1);
  }

  bool isDSC_1(size_t index = 0) {
    try {
      return this->getObject(index, DSC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContinuationPointer(size_t index = 0) {
    try {
      return this->getObject(index, DSC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Continuation Style
   */

  ID* getDSC_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DSC_2);
  }

  ID* getContinuationStyle(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DSC_2);
  }

  bool isDSC_2(size_t index = 0) {
    try {
      return this->getObject(index, DSC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContinuationStyle(size_t index = 0) {
    try {
      return this->getObject(index, DSC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of DSC */

} /* End of namespace HL7_24 */
#endif /* __DSC_v24_H__ */
