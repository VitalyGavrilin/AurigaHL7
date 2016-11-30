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


#ifndef __FC_v24_H__
#define __FC_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* financial class */
class FC : public HL7Data {
 public:
  FC() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    FC_1, /* Financial Class */
    FC_2, /* Effective Date (TS) */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "FC"; }
  FC *create() const { return new FC(); }

 private:
  void init() {
    // setName("FC");
    /* Init members */
    addObject<IS>(FC_1, "FC.1", HL7::initialized, HL7::repetition_off);
    addObject<TS>(FC_2, "FC.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Financial Class
   */
  IS *getFC_1(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, FC_1);
  }

  IS *getFinancialClass(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, FC_1);
  }

  bool isFC_1(size_t index = 0) {
    try {
      return this->getObject(index, FC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFinancialClass(size_t index = 0) {
    try {
      return this->getObject(index, FC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Date (TS)
   */
  TS *getFC_2(size_t index = 0) {
    return (TS *)this->getObjectSafe(index, FC_2);
  }

  TS *getEffectiveDate(size_t index = 0) {
    return (TS *)this->getObjectSafe(index, FC_2);
  }

  bool isFC_2(size_t index = 0) {
    try {
      return this->getObject(index, FC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, FC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End FC */

} /* End HL7_24 */

#endif /*__FC_v24_H__ */
