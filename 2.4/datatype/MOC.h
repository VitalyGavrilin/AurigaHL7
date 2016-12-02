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


#ifndef __MOC_v24_H__
#define __MOC_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/MO.h"

namespace HL7_24 {

/* Charge To Practise */
class MOC : public HL7Data {
 public:
  MOC() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    MOC_1, /* dollar amount */
    MOC_2, /* charge code */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "MOC"; }
  MOC *create() const { return new MOC(); }

 private:
  void init() {
    // setName("MOC");
    /* Init members */
    addObject<MO>(MOC_1, "MOC.1", HL7::initialized, HL7::repetition_off);
    addObject<CE>(MOC_2, "MOC.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * dollar amount
   */
  MO *getMOC_1(size_t index = 0) {
    return (MO *)this->getObjectSafe(index, MOC_1);
  }

  MO *getDollarAmount(size_t index = 0) {
    return (MO *)this->getObjectSafe(index, MOC_1);
  }

  bool isMOC_1(size_t index = 0) {
    try {
      return this->getObject(index, MOC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDollarAmount(size_t index = 0) {
    try {
      return this->getObject(index, MOC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * charge code
   */
  CE *getMOC_2(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, MOC_2);
  }

  CE *getChargeCode(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, MOC_2);
  }

  bool isMOC_2(size_t index = 0) {
    try {
      return this->getObject(index, MOC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChargeCode(size_t index = 0) {
    try {
      return this->getObject(index, MOC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End MOC */

} /* End HL7_24 */

#endif /*__MOC_v24_H__ */
