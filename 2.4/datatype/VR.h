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


#ifndef __VR_v24_H__
#define __VR_v24_H__

#include "../../common/Util.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* value qualifier */
class VR : public HL7Data {
 public:
  VR() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    VR_1, /* first data code value */
    VR_2, /* Last data code calue */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "VR"; }
  VR *create() const { return new VR(); }

 private:
  void init() {
    // setName("VR");
    /* Init members */
    addObject<ST>(VR_1, "VR.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(VR_2, "VR.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * first data code value
   */
  ST *getVR_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, VR_1);
  }

  ST *getFirstDataCodeValue(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, VR_1);
  }

  bool isVR_1(size_t index = 0) {
    try {
      return this->getObject(index, VR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFirstDataCodeValue(size_t index = 0) {
    try {
      return this->getObject(index, VR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Last data code calue
   */
  ST *getVR_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, VR_2);
  }

  ST *getLastDataCodeCalue(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, VR_2);
  }

  bool isVR_2(size_t index = 0) {
    try {
      return this->getObject(index, VR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLastDataCodeCalue(size_t index = 0) {
    try {
      return this->getObject(index, VR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End VR */

} /* End HL7_24 */

#endif /*__VR_v24_H__ */
