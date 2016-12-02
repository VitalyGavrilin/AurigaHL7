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


#ifndef __NPU_v24_H__
#define __NPU_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/PL.h"

namespace HL7_24 {

/* Bed status update */
class NPU : public HL7Segment {
 public:
  NPU() { this->init(); }

 private:
  /* */
  enum FIELD_ID { NPU_1, NPU_2, FIELD_ID_MAX };

 public:
  const char* className() const { return "NPU"; }
  NPU* create() const { return new NPU(); }

 private:
  void init() {
    setName("NPU");
    /* Init members */
    addObject<PL>(NPU_1, "NPU.1", HL7::initialized, HL7::repetition_off);
    addObject<IS>(NPU_2, "NPU.2", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Bed Location
   */

  PL* getNPU_1(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, NPU_1);
  }

  PL* getBedLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, NPU_1);
  }

  bool isNPU_1(size_t index = 0) {
    try {
      return this->getObject(index, NPU_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBedLocation(size_t index = 0) {
    try {
      return this->getObject(index, NPU_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Bed Status
   */

  IS* getNPU_2(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, NPU_2);
  }

  IS* getBedStatus(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, NPU_2);
  }

  bool isNPU_2(size_t index = 0) {
    try {
      return this->getObject(index, NPU_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBedStatus(size_t index = 0) {
    try {
      return this->getObject(index, NPU_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of NPU */

} /* End of namespace HL7_24 */
#endif /* __NPU_v24_H__ */
