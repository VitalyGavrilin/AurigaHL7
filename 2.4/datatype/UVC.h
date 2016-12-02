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


#ifndef __UVC_v24_H__
#define __UVC_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/NM.h"

namespace HL7_24 {

/* Value code and amount */
class UVC : public HL7Data {
 public:
  UVC() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    UVC_1, /* value code */
    UVC_2, /* value amount */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "UVC"; }
  UVC *create() const { return new UVC(); }

 private:
  void init() {
    // setName("UVC");
    /* Init members */
    addObject<IS>(UVC_1, "UVC.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(UVC_2, "UVC.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * value code
   */
  IS *getUVC_1(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, UVC_1);
  }

  IS *getValueCode(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, UVC_1);
  }

  bool isUVC_1(size_t index = 0) {
    try {
      return this->getObject(index, UVC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValueCode(size_t index = 0) {
    try {
      return this->getObject(index, UVC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * value amount
   */
  NM *getUVC_2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, UVC_2);
  }

  NM *getValueAmount(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, UVC_2);
  }

  bool isUVC_2(size_t index = 0) {
    try {
      return this->getObject(index, UVC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValueAmount(size_t index = 0) {
    try {
      return this->getObject(index, UVC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End UVC */

} /* End HL7_24 */

#endif /*__UVC_v24_H__ */
