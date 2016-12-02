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


#ifndef __RCD_v24_H__
#define __RCD_v24_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* row column definition */
class RCD : public HL7Data {
 public:
  RCD() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    RCD_1, /* segment field name */
    RCD_2, /* HL7 date type */
    RCD_3, /* maximum column width */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "RCD"; }
  RCD *create() const { return new RCD(); }

 private:
  void init() {
    // setName("RCD");
    /* Init members */
    addObject<ST>(RCD_1, "RCD.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RCD_2, "RCD.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RCD_3, "RCD.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * segment field name
   */
  ST *getRCD_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, RCD_1);
  }

  ST *getSegmentFieldName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, RCD_1);
  }

  bool isRCD_1(size_t index = 0) {
    try {
      return this->getObject(index, RCD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentFieldName(size_t index = 0) {
    try {
      return this->getObject(index, RCD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * HL7 date type
   */
  ST *getRCD_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, RCD_2);
  }

  ST *getHL7DateType(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, RCD_2);
  }

  bool isRCD_2(size_t index = 0) {
    try {
      return this->getObject(index, RCD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHL7DateType(size_t index = 0) {
    try {
      return this->getObject(index, RCD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * maximum column width
   */
  NM *getRCD_3(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, RCD_3);
  }

  NM *getMaximumColumnWidth(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, RCD_3);
  }

  bool isRCD_3(size_t index = 0) {
    try {
      return this->getObject(index, RCD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMaximumColumnWidth(size_t index = 0) {
    try {
      return this->getObject(index, RCD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End RCD */

} /* End HL7_24 */

#endif /*__RCD_v24_H__ */
