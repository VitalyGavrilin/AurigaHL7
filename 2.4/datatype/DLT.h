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


#ifndef __DLT_v24_H__
#define __DLT_v24_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"
#include "../datatype/NR.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* delta check */
class DLT : public HL7Data {
 public:
  DLT() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    DLT_1, /* Range */
    DLT_2, /* numeric threshold */
    DLT_3, /* change computation */
    DLT_4, /* length of time-days */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "DLT"; }
  DLT *create() const { return new DLT(); }

 private:
  void init() {
    // setName("DLT");
    /* Init members */
    addObject<NR>(DLT_1, "DLT.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(DLT_2, "DLT.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(DLT_3, "DLT.3", HL7::initialized, HL7::repetition_off);
    addObject<NM>(DLT_4, "DLT.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Range
   */
  NR *getDLT_1(size_t index = 0) {
    return (NR *)this->getObjectSafe(index, DLT_1);
  }

  NR *getRange(size_t index = 0) {
    return (NR *)this->getObjectSafe(index, DLT_1);
  }

  bool isDLT_1(size_t index = 0) {
    try {
      return this->getObject(index, DLT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRange(size_t index = 0) {
    try {
      return this->getObject(index, DLT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * numeric threshold
   */
  NM *getDLT_2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, DLT_2);
  }

  NM *getNumericThreshold(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, DLT_2);
  }

  bool isDLT_2(size_t index = 0) {
    try {
      return this->getObject(index, DLT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumericThreshold(size_t index = 0) {
    try {
      return this->getObject(index, DLT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * change computation
   */
  ST *getDLT_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, DLT_3);
  }

  ST *getChangeComputation(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, DLT_3);
  }

  bool isDLT_3(size_t index = 0) {
    try {
      return this->getObject(index, DLT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChangeComputation(size_t index = 0) {
    try {
      return this->getObject(index, DLT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * length of time-days
   */
  NM *getDLT_4(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, DLT_4);
  }

  NM *getLengthOfTimeDays(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, DLT_4);
  }

  bool isDLT_4(size_t index = 0) {
    try {
      return this->getObject(index, DLT_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLengthOfTimeDays(size_t index = 0) {
    try {
      return this->getObject(index, DLT_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End DLT */

} /* End HL7_24 */

#endif /*__DLT_v24_H__ */
