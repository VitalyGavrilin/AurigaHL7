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


#ifndef __LCC_v24_H__
#define __LCC_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0129.h"
#include "../datatype/CE_0132.h"
#include "../datatype/CE_0264.h"
#include "../datatype/PL.h"

namespace HL7_24 {

/* Location Charge Code */
class LCC : public HL7Segment {
 public:
  LCC() { this->init(); }

 private:
  /* */
  enum FIELD_ID { LCC_1, LCC_2, LCC_3, LCC_4, FIELD_ID_MAX };

 public:
  const char* className() const { return "LCC"; }
  LCC* create() const { return new LCC(); }

 private:
  void init() {
    setName("LCC");
    /* Init members */
    addObject<PL>(LCC_1, "LCC.1", HL7::initialized, HL7::repetition_off);
    addObject<CE_0264>(LCC_2, "LCC.2", HL7::initialized, HL7::repetition_off);
    addObject<CE_0129>(LCC_3, "LCC.3", HL7::optional, HL7::repetition_on);
    addObject<CE_0132>(LCC_4, "LCC.4", HL7::initialized, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Primary Key Value - LCC
   */

  PL* getLCC_1(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, LCC_1);
  }

  PL* getPrimaryKeyValueLCC(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, LCC_1);
  }

  bool isLCC_1(size_t index = 0) {
    try {
      return this->getObject(index, LCC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryKeyValueLCC(size_t index = 0) {
    try {
      return this->getObject(index, LCC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Department
   */

  CE_0264* getLCC_2(size_t index = 0) {
    return (CE_0264*)this->getObjectSafe(index, LCC_2);
  }

  CE_0264* getLocationDepartment(size_t index = 0) {
    return (CE_0264*)this->getObjectSafe(index, LCC_2);
  }

  bool isLCC_2(size_t index = 0) {
    try {
      return this->getObject(index, LCC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationDepartment(size_t index = 0) {
    try {
      return this->getObject(index, LCC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Accommodation Type
   */

  CE_0129* getLCC_3(size_t index = 0) {
    return (CE_0129*)this->getObjectSafe(index, LCC_3);
  }

  CE_0129* getAccommodationType(size_t index = 0) {
    return (CE_0129*)this->getObjectSafe(index, LCC_3);
  }

  bool isLCC_3(size_t index = 0) {
    try {
      return this->getObject(index, LCC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccommodationType(size_t index = 0) {
    try {
      return this->getObject(index, LCC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Charge Code
   */

  CE_0132* getLCC_4(size_t index = 0) {
    return (CE_0132*)this->getObjectSafe(index, LCC_4);
  }

  CE_0132* getChargeCode(size_t index = 0) {
    return (CE_0132*)this->getObjectSafe(index, LCC_4);
  }

  bool isLCC_4(size_t index = 0) {
    try {
      return this->getObject(index, LCC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChargeCode(size_t index = 0) {
    try {
      return this->getObject(index, LCC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of LCC */

} /* End of namespace HL7_24 */
#endif /* __LCC_v24_H__ */
