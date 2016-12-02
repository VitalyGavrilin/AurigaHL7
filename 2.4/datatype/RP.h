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


#ifndef __RP_v24_H__
#define __RP_v24_H__

#include "../../common/Util.h"
#include "../datatype/HD.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* reference pointer */
class RP : public HL7Data {
 public:
  RP() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    RP_1, /* pointer */
    RP_2, /* application ID */
    RP_3, /* type of data */
    RP_4, /* subtype */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "RP"; }
  RP *create() const { return new RP(); }

 private:
  void init() {
    // setName("RP");
    /* Init members */
    addObject<ST>(RP_1, "RP.1", HL7::initialized, HL7::repetition_off);
    addObject<HD>(RP_2, "RP.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RP_3, "RP.3", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RP_4, "RP.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * pointer
   */
  ST *getRP_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, RP_1);
  }

  ST *getPointer(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, RP_1);
  }

  bool isRP_1(size_t index = 0) {
    try {
      return this->getObject(index, RP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPointer(size_t index = 0) {
    try {
      return this->getObject(index, RP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * application ID
   */
  HD *getRP_2(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, RP_2);
  }

  HD *getApplicationID(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, RP_2);
  }

  bool isRP_2(size_t index = 0) {
    try {
      return this->getObject(index, RP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isApplicationID(size_t index = 0) {
    try {
      return this->getObject(index, RP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * type of data
   */
  ID *getRP_3(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, RP_3);
  }

  ID *getTypeOfData(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, RP_3);
  }

  bool isRP_3(size_t index = 0) {
    try {
      return this->getObject(index, RP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTypeOfData(size_t index = 0) {
    try {
      return this->getObject(index, RP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * subtype
   */
  ID *getRP_4(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, RP_4);
  }

  ID *getSubtype(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, RP_4);
  }

  bool isRP_4(size_t index = 0) {
    try {
      return this->getObject(index, RP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubtype(size_t index = 0) {
    try {
      return this->getObject(index, RP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End RP */

} /* End HL7_24 */

#endif /*__RP_v24_H__ */
