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


#ifndef __DLN_v24_H__
#define __DLN_v24_H__

#include "../../common/Util.h"
#include "../datatype/DT.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* driver's license number */
class DLN : public HL7Data {
 public:
  DLN() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    DLN_1, /* Driver´s License Number */
    DLN_2, /* Issuing State, province, country */
    DLN_3, /* expiration date */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "DLN"; }
  DLN *create() const { return new DLN(); }

 private:
  void init() {
    // setName("DLN");
    /* Init members */
    addObject<ST>(DLN_1, "DLN.1", HL7::initialized, HL7::repetition_off);
    addObject<IS>(DLN_2, "DLN.2", HL7::initialized, HL7::repetition_off);
    addObject<DT>(DLN_3, "DLN.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Driver´s License Number
   */
  ST *getDLN_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, DLN_1);
  }

  ST *getDriverSLicenseNumber(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, DLN_1);
  }

  bool isDLN_1(size_t index = 0) {
    try {
      return this->getObject(index, DLN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDriverSLicenseNumber(size_t index = 0) {
    try {
      return this->getObject(index, DLN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Issuing State, province, country
   */
  IS *getDLN_2(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, DLN_2);
  }

  IS *getIssuingStateProvinceCountry(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, DLN_2);
  }

  bool isDLN_2(size_t index = 0) {
    try {
      return this->getObject(index, DLN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIssuingStateProvinceCountry(size_t index = 0) {
    try {
      return this->getObject(index, DLN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * expiration date
   */
  DT *getDLN_3(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, DLN_3);
  }

  DT *getExpirationDate(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, DLN_3);
  }

  bool isDLN_3(size_t index = 0) {
    try {
      return this->getObject(index, DLN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, DLN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End DLN */

} /* End HL7_24 */

#endif /*__DLN_v24_H__ */
