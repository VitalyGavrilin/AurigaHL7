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


#ifndef __NR_v24_H__
#define __NR_v24_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"

namespace HL7_24 {

/* Wertebereich */
class NR : public HL7Data {
 public:
  NR() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    NR_1, /* Low Value */
    NR_2, /* High Value */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "NR"; }
  NR *create() const { return new NR(); }

 private:
  void init() {
    // setName("NR");
    /* Init members */
    addObject<NM>(NR_1, "NR.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(NR_2, "NR.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Low Value
   */
  NM *getNR_1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NR_1);
  }

  NM *getLowValue(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NR_1);
  }

  bool isNR_1(size_t index = 0) {
    try {
      return this->getObject(index, NR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLowValue(size_t index = 0) {
    try {
      return this->getObject(index, NR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * High Value
   */
  NM *getNR_2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NR_2);
  }

  NM *getHighValue(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NR_2);
  }

  bool isNR_2(size_t index = 0) {
    try {
      return this->getObject(index, NR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHighValue(size_t index = 0) {
    try {
      return this->getObject(index, NR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End NR */

} /* End HL7_24 */

#endif /*__NR_v24_H__ */
