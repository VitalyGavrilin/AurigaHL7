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


#ifndef __SN_v24_H__
#define __SN_v24_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* structured numeric */
class SN : public HL7Data {
 public:
  SN() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    SN_1, /* comparator */
    SN_2, /* num1 */
    SN_3, /* separator/suffix */
    SN_4, /* num2 */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "SN"; }
  SN *create() const { return new SN(); }

 private:
  void init() {
    // setName("SN");
    /* Init members */
    addObject<ST>(SN_1, "SN.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(SN_2, "SN.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(SN_3, "SN.3", HL7::initialized, HL7::repetition_off);
    addObject<NM>(SN_4, "SN.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * comparator
   */
  ST *getSN_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SN_1);
  }

  ST *getComparator(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SN_1);
  }

  bool isSN_1(size_t index = 0) {
    try {
      return this->getObject(index, SN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isComparator(size_t index = 0) {
    try {
      return this->getObject(index, SN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * num1
   */
  NM *getSN_2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, SN_2);
  }

  NM *getNum1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, SN_2);
  }

  bool isSN_2(size_t index = 0) {
    try {
      return this->getObject(index, SN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNum1(size_t index = 0) {
    try {
      return this->getObject(index, SN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * separator/suffix
   */
  ST *getSN_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SN_3);
  }

  ST *getSeparatorSuffix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SN_3);
  }

  bool isSN_3(size_t index = 0) {
    try {
      return this->getObject(index, SN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSeparatorSuffix(size_t index = 0) {
    try {
      return this->getObject(index, SN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * num2
   */
  NM *getSN_4(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, SN_4);
  }

  NM *getNum2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, SN_4);
  }

  bool isSN_4(size_t index = 0) {
    try {
      return this->getObject(index, SN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNum2(size_t index = 0) {
    try {
      return this->getObject(index, SN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End SN */

} /* End HL7_24 */

#endif /*__SN_v24_H__ */
