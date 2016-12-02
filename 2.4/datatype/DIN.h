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


#ifndef __DIN_v24_H__
#define __DIN_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* activation date */
class DIN : public HL7Data {
 public:
  DIN() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    DIN_1, /* date */
    DIN_2, /* institution name */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "DIN"; }
  DIN *create() const { return new DIN(); }

 private:
  void init() {
    // setName("DIN");
    /* Init members */
    addObject<TS>(DIN_1, "DIN.1", HL7::initialized, HL7::repetition_off);
    addObject<CE>(DIN_2, "DIN.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * date
   */
  TS *getDIN_1(size_t index = 0) {
    return (TS *)this->getObjectSafe(index, DIN_1);
  }

  TS *getDate(size_t index = 0) {
    return (TS *)this->getObjectSafe(index, DIN_1);
  }

  bool isDIN_1(size_t index = 0) {
    try {
      return this->getObject(index, DIN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDate(size_t index = 0) {
    try {
      return this->getObject(index, DIN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * institution name
   */
  CE *getDIN_2(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, DIN_2);
  }

  CE *getInstitutionName(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, DIN_2);
  }

  bool isDIN_2(size_t index = 0) {
    try {
      return this->getObject(index, DIN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInstitutionName(size_t index = 0) {
    try {
      return this->getObject(index, DIN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End DIN */

} /* End HL7_24 */

#endif /*__DIN_v24_H__ */
