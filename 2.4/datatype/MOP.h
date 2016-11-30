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


#ifndef __MOP_v24_H__
#define __MOP_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/NM.h"

namespace HL7_24 {

/* money or percentage */
class MOP : public HL7Data {
 public:
  MOP() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    MOP_1, /* money or percentage indicator */
    MOP_2, /* money or percentage quantity */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "MOP"; }
  MOP *create() const { return new MOP(); }

 private:
  void init() {
    // setName("MOP");
    /* Init members */
    addObject<IS>(MOP_1, "MOP.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(MOP_2, "MOP.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * money or percentage indicator
   */
  IS *getMOP_1(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, MOP_1);
  }

  IS *getMoneyOrPercentageIndicator(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, MOP_1);
  }

  bool isMOP_1(size_t index = 0) {
    try {
      return this->getObject(index, MOP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMoneyOrPercentageIndicator(size_t index = 0) {
    try {
      return this->getObject(index, MOP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * money or percentage quantity
   */
  NM *getMOP_2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MOP_2);
  }

  NM *getMoneyOrPercentageQuantity(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MOP_2);
  }

  bool isMOP_2(size_t index = 0) {
    try {
      return this->getObject(index, MOP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMoneyOrPercentageQuantity(size_t index = 0) {
    try {
      return this->getObject(index, MOP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End MOP */

} /* End HL7_24 */

#endif /*__MOP_v24_H__ */
