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


#ifndef __PLN_v24_H__
#define __PLN_v24_H__

#include "../../common/Util.h"
#include "../datatype/DT.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* Practitioner ID Numbers */
class PLN : public HL7Data {
 public:
  PLN() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    PLN_1, /* ID number (ST) */
    PLN_2, /* type of ID number (IS) */
    PLN_3, /* state/other qualifying info */
    PLN_4, /* expiration date */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "PLN"; }
  PLN *create() const { return new PLN(); }

 private:
  void init() {
    // setName("PLN");
    /* Init members */
    addObject<ST>(PLN_1, "PLN.1", HL7::initialized, HL7::repetition_off);
    addObject<IS>(PLN_2, "PLN.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PLN_3, "PLN.3", HL7::initialized, HL7::repetition_off);
    addObject<DT>(PLN_4, "PLN.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * ID number (ST)
   */
  ST *getPLN_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PLN_1);
  }

  ST *getIDNumber(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PLN_1);
  }

  bool isPLN_1(size_t index = 0) {
    try {
      return this->getObject(index, PLN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIDNumber(size_t index = 0) {
    try {
      return this->getObject(index, PLN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * type of ID number (IS)
   */
  IS *getPLN_2(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PLN_2);
  }

  IS *getTypeOfIDNumber(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PLN_2);
  }

  bool isPLN_2(size_t index = 0) {
    try {
      return this->getObject(index, PLN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTypeOfIDNumber(size_t index = 0) {
    try {
      return this->getObject(index, PLN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * state/other qualifying info
   */
  ST *getPLN_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PLN_3);
  }

  ST *getStateOtherQualifyingInfo(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PLN_3);
  }

  bool isPLN_3(size_t index = 0) {
    try {
      return this->getObject(index, PLN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStateOtherQualifyingInfo(size_t index = 0) {
    try {
      return this->getObject(index, PLN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * expiration date
   */
  DT *getPLN_4(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, PLN_4);
  }

  DT *getExpirationDate(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, PLN_4);
  }

  bool isPLN_4(size_t index = 0) {
    try {
      return this->getObject(index, PLN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, PLN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End PLN */

} /* End HL7_24 */

#endif /*__PLN_v24_H__ */
