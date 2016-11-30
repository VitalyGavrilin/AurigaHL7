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


#ifndef __BLG_v24_H__
#define __BLG_v24_H__

#include "../../common/Util.h"
#include "../datatype/CCD.h"
#include "../datatype/CX.h"
#include "../datatype/ID.h"

namespace HL7_24 {

/* Billing */
class BLG : public HL7Segment {
 public:
  BLG() { this->init(); }

 private:
  /* */
  enum FIELD_ID { BLG_1, BLG_2, BLG_3, FIELD_ID_MAX };

 public:
  const char* className() const { return "BLG"; }
  BLG* create() const { return new BLG(); }

 private:
  void init() {
    setName("BLG");
    /* Init members */
    addObject<CCD>(BLG_1, "BLG.1", HL7::optional, HL7::repetition_off);
    addObject<ID>(BLG_2, "BLG.2", HL7::optional, HL7::repetition_off);
    addObject<CX>(BLG_3, "BLG.3", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * When to Charge
   */

  CCD* getBLG_1(size_t index = 0) {
    return (CCD*)this->getObjectSafe(index, BLG_1);
  }

  CCD* getWhenToCharge(size_t index = 0) {
    return (CCD*)this->getObjectSafe(index, BLG_1);
  }

  bool isBLG_1(size_t index = 0) {
    try {
      return this->getObject(index, BLG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isWhenToCharge(size_t index = 0) {
    try {
      return this->getObject(index, BLG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Charge Type
   */

  ID* getBLG_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, BLG_2);
  }

  ID* getChargeType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, BLG_2);
  }

  bool isBLG_2(size_t index = 0) {
    try {
      return this->getObject(index, BLG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChargeType(size_t index = 0) {
    try {
      return this->getObject(index, BLG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Account ID
   */

  CX* getBLG_3(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, BLG_3);
  }

  CX* getAccountID(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, BLG_3);
  }

  bool isBLG_3(size_t index = 0) {
    try {
      return this->getObject(index, BLG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccountID(size_t index = 0) {
    try {
      return this->getObject(index, BLG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of BLG */

} /* End of namespace HL7_24 */
#endif /* __BLG_v24_H__ */
