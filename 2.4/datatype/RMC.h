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


#ifndef __RMC_v24_H__
#define __RMC_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/NM.h"

namespace HL7_24 {

/* Room Coverage */
class RMC : public HL7Data {
 public:
  RMC() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    RMC_1, /* room type */
    RMC_2, /* amount type */
    RMC_3, /* coverage amount */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "RMC"; }
  RMC *create() const { return new RMC(); }

 private:
  void init() {
    // setName("RMC");
    /* Init members */
    addObject<IS>(RMC_1, "RMC.1", HL7::initialized, HL7::repetition_off);
    addObject<IS>(RMC_2, "RMC.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RMC_3, "RMC.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * room type
   */
  IS *getRMC_1(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, RMC_1);
  }

  IS *getRoomType(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, RMC_1);
  }

  bool isRMC_1(size_t index = 0) {
    try {
      return this->getObject(index, RMC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoomType(size_t index = 0) {
    try {
      return this->getObject(index, RMC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * amount type
   */
  IS *getRMC_2(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, RMC_2);
  }

  IS *getAmountType(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, RMC_2);
  }

  bool isRMC_2(size_t index = 0) {
    try {
      return this->getObject(index, RMC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAmountType(size_t index = 0) {
    try {
      return this->getObject(index, RMC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * coverage amount
   */
  NM *getRMC_3(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, RMC_3);
  }

  NM *getCoverageAmount(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, RMC_3);
  }

  bool isRMC_3(size_t index = 0) {
    try {
      return this->getObject(index, RMC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCoverageAmount(size_t index = 0) {
    try {
      return this->getObject(index, RMC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End RMC */

} /* End HL7_24 */

#endif /*__RMC_v24_H__ */
