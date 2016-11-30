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


#ifndef __AD_v24_H__
#define __AD_v24_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* address */
class AD : public HL7Data {
 public:
  AD() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    AD_1, /* street address (ST) */
    AD_2, /* other designation */
    AD_3, /* city */
    AD_4, /* state or province */
    AD_5, /* zip or postal code */
    AD_6, /* country */
    AD_7, /* address type */
    AD_8, /* other geographic designation */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "AD"; }
  AD *create() const { return new AD(); }

 private:
  void init() {
    // setName("AD");
    /* Init members */
    addObject<ST>(AD_1, "AD.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(AD_2, "AD.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(AD_3, "AD.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(AD_4, "AD.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(AD_5, "AD.5", HL7::initialized, HL7::repetition_off);
    addObject<ID>(AD_6, "AD.6", HL7::initialized, HL7::repetition_off);
    addObject<ID>(AD_7, "AD.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(AD_8, "AD.8", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * street address (ST)
   */
  ST *getAD_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, AD_1);
  }

  ST *getStreetAddress(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, AD_1);
  }

  bool isAD_1(size_t index = 0) {
    try {
      return this->getObject(index, AD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStreetAddress(size_t index = 0) {
    try {
      return this->getObject(index, AD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * other designation
   */
  ST *getAD_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, AD_2);
  }

  ST *getOtherDesignation(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, AD_2);
  }

  bool isAD_2(size_t index = 0) {
    try {
      return this->getObject(index, AD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOtherDesignation(size_t index = 0) {
    try {
      return this->getObject(index, AD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * city
   */
  ST *getAD_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, AD_3);
  }

  ST *getCity(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, AD_3);
  }

  bool isAD_3(size_t index = 0) {
    try {
      return this->getObject(index, AD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCity(size_t index = 0) {
    try {
      return this->getObject(index, AD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * state or province
   */
  ST *getAD_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, AD_4);
  }

  ST *getStateOrProvince(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, AD_4);
  }

  bool isAD_4(size_t index = 0) {
    try {
      return this->getObject(index, AD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStateOrProvince(size_t index = 0) {
    try {
      return this->getObject(index, AD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * zip or postal code
   */
  ST *getAD_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, AD_5);
  }

  ST *getZipOrPostalCode(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, AD_5);
  }

  bool isAD_5(size_t index = 0) {
    try {
      return this->getObject(index, AD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isZipOrPostalCode(size_t index = 0) {
    try {
      return this->getObject(index, AD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * country
   */
  ID *getAD_6(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, AD_6);
  }

  ID *getCountry(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, AD_6);
  }

  bool isAD_6(size_t index = 0) {
    try {
      return this->getObject(index, AD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCountry(size_t index = 0) {
    try {
      return this->getObject(index, AD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * address type
   */
  ID *getAD_7(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, AD_7);
  }

  ID *getAddressType(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, AD_7);
  }

  bool isAD_7(size_t index = 0) {
    try {
      return this->getObject(index, AD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAddressType(size_t index = 0) {
    try {
      return this->getObject(index, AD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * other geographic designation
   */
  ST *getAD_8(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, AD_8);
  }

  ST *getOtherGeographicDesignation(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, AD_8);
  }

  bool isAD_8(size_t index = 0) {
    try {
      return this->getObject(index, AD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOtherGeographicDesignation(size_t index = 0) {
    try {
      return this->getObject(index, AD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End AD */

} /* End HL7_24 */

#endif /*__AD_v24_H__ */
