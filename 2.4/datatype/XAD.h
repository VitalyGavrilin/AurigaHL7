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


#ifndef __XAD_v24_H__
#define __XAD_v24_H__

#include "../../common/Util.h"
#include "../datatype/DR.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/SAD.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* extended address */
class XAD : public HL7Data {
 public:
  XAD() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    XAD_1,  /* street address (SAD) */
    XAD_2,  /* other designation */
    XAD_3,  /* city */
    XAD_4,  /* state or province */
    XAD_5,  /* zip or postal code */
    XAD_6,  /* country */
    XAD_7,  /* address type */
    XAD_8,  /* other geographic designation */
    XAD_9,  /* county/parish code */
    XAD_10, /* census tract */
    XAD_11, /* address representation code */
    XAD_12, /* address validity range */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "XAD"; }
  XAD *create() const { return new XAD(); }

 private:
  void init() {
    // setName("XAD");
    /* Init members */
    addObject<SAD>(XAD_1, "XAD.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XAD_2, "XAD.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XAD_3, "XAD.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XAD_4, "XAD.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XAD_5, "XAD.5", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XAD_6, "XAD.6", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XAD_7, "XAD.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XAD_8, "XAD.8", HL7::initialized, HL7::repetition_off);
    addObject<IS>(XAD_9, "XAD.9", HL7::initialized, HL7::repetition_off);
    addObject<IS>(XAD_10, "XAD.10", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XAD_11, "XAD.11", HL7::initialized, HL7::repetition_off);
    addObject<DR>(XAD_12, "XAD.12", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * street address (SAD)
   */
  SAD *getXAD_1(size_t index = 0) {
    return (SAD *)this->getObjectSafe(index, XAD_1);
  }

  SAD *getStreetAddress(size_t index = 0) {
    return (SAD *)this->getObjectSafe(index, XAD_1);
  }

  bool isXAD_1(size_t index = 0) {
    try {
      return this->getObject(index, XAD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStreetAddress(size_t index = 0) {
    try {
      return this->getObject(index, XAD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * other designation
   */
  ST *getXAD_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XAD_2);
  }

  ST *getOtherDesignation(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XAD_2);
  }

  bool isXAD_2(size_t index = 0) {
    try {
      return this->getObject(index, XAD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOtherDesignation(size_t index = 0) {
    try {
      return this->getObject(index, XAD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * city
   */
  ST *getXAD_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XAD_3);
  }

  ST *getCity(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XAD_3);
  }

  bool isXAD_3(size_t index = 0) {
    try {
      return this->getObject(index, XAD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCity(size_t index = 0) {
    try {
      return this->getObject(index, XAD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * state or province
   */
  ST *getXAD_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XAD_4);
  }

  ST *getStateOrProvince(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XAD_4);
  }

  bool isXAD_4(size_t index = 0) {
    try {
      return this->getObject(index, XAD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStateOrProvince(size_t index = 0) {
    try {
      return this->getObject(index, XAD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * zip or postal code
   */
  ST *getXAD_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XAD_5);
  }

  ST *getZipOrPostalCode(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XAD_5);
  }

  bool isXAD_5(size_t index = 0) {
    try {
      return this->getObject(index, XAD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isZipOrPostalCode(size_t index = 0) {
    try {
      return this->getObject(index, XAD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * country
   */
  ID *getXAD_6(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XAD_6);
  }

  ID *getCountry(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XAD_6);
  }

  bool isXAD_6(size_t index = 0) {
    try {
      return this->getObject(index, XAD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCountry(size_t index = 0) {
    try {
      return this->getObject(index, XAD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * address type
   */
  ID *getXAD_7(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XAD_7);
  }

  ID *getAddressType(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XAD_7);
  }

  bool isXAD_7(size_t index = 0) {
    try {
      return this->getObject(index, XAD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAddressType(size_t index = 0) {
    try {
      return this->getObject(index, XAD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * other geographic designation
   */
  ST *getXAD_8(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XAD_8);
  }

  ST *getOtherGeographicDesignation(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XAD_8);
  }

  bool isXAD_8(size_t index = 0) {
    try {
      return this->getObject(index, XAD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOtherGeographicDesignation(size_t index = 0) {
    try {
      return this->getObject(index, XAD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * county/parish code
   */
  IS *getXAD_9(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, XAD_9);
  }

  IS *getCountyParishCode(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, XAD_9);
  }

  bool isXAD_9(size_t index = 0) {
    try {
      return this->getObject(index, XAD_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCountyParishCode(size_t index = 0) {
    try {
      return this->getObject(index, XAD_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * census tract
   */
  IS *getXAD_10(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, XAD_10);
  }

  IS *getCensusTract(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, XAD_10);
  }

  bool isXAD_10(size_t index = 0) {
    try {
      return this->getObject(index, XAD_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCensusTract(size_t index = 0) {
    try {
      return this->getObject(index, XAD_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * address representation code
   */
  ID *getXAD_11(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XAD_11);
  }

  ID *getAddressRepresentationCode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XAD_11);
  }

  bool isXAD_11(size_t index = 0) {
    try {
      return this->getObject(index, XAD_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAddressRepresentationCode(size_t index = 0) {
    try {
      return this->getObject(index, XAD_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * address validity range
   */
  DR *getXAD_12(size_t index = 0) {
    return (DR *)this->getObjectSafe(index, XAD_12);
  }

  DR *getAddressValidityRange(size_t index = 0) {
    return (DR *)this->getObjectSafe(index, XAD_12);
  }

  bool isXAD_12(size_t index = 0) {
    try {
      return this->getObject(index, XAD_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAddressValidityRange(size_t index = 0) {
    try {
      return this->getObject(index, XAD_12) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End XAD */

} /* End HL7_24 */

#endif /*__XAD_v24_H__ */
