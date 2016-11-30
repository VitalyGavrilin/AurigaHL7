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


#ifndef __LA2_v24_H__
#define __LA2_v24_H__

#include "../../common/Util.h"
#include "../datatype/HD.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* Location with address information (variant 2) */
class LA2 : public HL7Data {
 public:
  LA2() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    LA2_1,  /* point of care (IS) */
    LA2_2,  /* room */
    LA2_3,  /* bed */
    LA2_4,  /* facility (HD) */
    LA2_5,  /* location status */
    LA2_6,  /* person location type */
    LA2_7,  /* building */
    LA2_8,  /* floor */
    LA2_9,  /* street address (ST) */
    LA2_10, /* other designation */
    LA2_11, /* city */
    LA2_12, /* state or province */
    LA2_13, /* zip or postal code */
    LA2_14, /* country */
    LA2_15, /* address type */
    LA2_16, /* other geographic designation */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "LA2"; }
  LA2 *create() const { return new LA2(); }

 private:
  void init() {
    // setName("LA2");
    /* Init members */
    addObject<IS>(LA2_1, "LA2.1", HL7::initialized, HL7::repetition_off);
    addObject<IS>(LA2_2, "LA2.2", HL7::initialized, HL7::repetition_off);
    addObject<IS>(LA2_3, "LA2.3", HL7::initialized, HL7::repetition_off);
    addObject<HD>(LA2_4, "LA2.4", HL7::initialized, HL7::repetition_off);
    addObject<IS>(LA2_5, "LA2.5", HL7::initialized, HL7::repetition_off);
    addObject<IS>(LA2_6, "LA2.6", HL7::initialized, HL7::repetition_off);
    addObject<IS>(LA2_7, "LA2.7", HL7::initialized, HL7::repetition_off);
    addObject<IS>(LA2_8, "LA2.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(LA2_9, "LA2.9", HL7::initialized, HL7::repetition_off);
    addObject<ST>(LA2_10, "LA2.10", HL7::initialized, HL7::repetition_off);
    addObject<ST>(LA2_11, "LA2.11", HL7::initialized, HL7::repetition_off);
    addObject<ST>(LA2_12, "LA2.12", HL7::initialized, HL7::repetition_off);
    addObject<ST>(LA2_13, "LA2.13", HL7::initialized, HL7::repetition_off);
    addObject<ID>(LA2_14, "LA2.14", HL7::initialized, HL7::repetition_off);
    addObject<ID>(LA2_15, "LA2.15", HL7::initialized, HL7::repetition_off);
    addObject<ST>(LA2_16, "LA2.16", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * point of care (IS)
   */
  IS *getLA2_1(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA2_1);
  }

  IS *getPointOfCare(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA2_1);
  }

  bool isLA2_1(size_t index = 0) {
    try {
      return this->getObject(index, LA2_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPointOfCare(size_t index = 0) {
    try {
      return this->getObject(index, LA2_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * room
   */
  IS *getLA2_2(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA2_2);
  }

  IS *getRoom(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA2_2);
  }

  bool isLA2_2(size_t index = 0) {
    try {
      return this->getObject(index, LA2_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoom(size_t index = 0) {
    try {
      return this->getObject(index, LA2_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * bed
   */
  IS *getLA2_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA2_3);
  }

  IS *getBed(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA2_3);
  }

  bool isLA2_3(size_t index = 0) {
    try {
      return this->getObject(index, LA2_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBed(size_t index = 0) {
    try {
      return this->getObject(index, LA2_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * facility (HD)
   */
  HD *getLA2_4(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, LA2_4);
  }

  HD *getFacility(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, LA2_4);
  }

  bool isLA2_4(size_t index = 0) {
    try {
      return this->getObject(index, LA2_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFacility(size_t index = 0) {
    try {
      return this->getObject(index, LA2_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * location status
   */
  IS *getLA2_5(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA2_5);
  }

  IS *getLocationStatus(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA2_5);
  }

  bool isLA2_5(size_t index = 0) {
    try {
      return this->getObject(index, LA2_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationStatus(size_t index = 0) {
    try {
      return this->getObject(index, LA2_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * person location type
   */
  IS *getLA2_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA2_6);
  }

  IS *getPersonLocationType(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA2_6);
  }

  bool isLA2_6(size_t index = 0) {
    try {
      return this->getObject(index, LA2_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPersonLocationType(size_t index = 0) {
    try {
      return this->getObject(index, LA2_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * building
   */
  IS *getLA2_7(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA2_7);
  }

  IS *getBuilding(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA2_7);
  }

  bool isLA2_7(size_t index = 0) {
    try {
      return this->getObject(index, LA2_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBuilding(size_t index = 0) {
    try {
      return this->getObject(index, LA2_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * floor
   */
  IS *getLA2_8(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA2_8);
  }

  IS *getFloor(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, LA2_8);
  }

  bool isLA2_8(size_t index = 0) {
    try {
      return this->getObject(index, LA2_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFloor(size_t index = 0) {
    try {
      return this->getObject(index, LA2_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * street address (ST)
   */
  ST *getLA2_9(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, LA2_9);
  }

  ST *getStreetAddress(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, LA2_9);
  }

  bool isLA2_9(size_t index = 0) {
    try {
      return this->getObject(index, LA2_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStreetAddress(size_t index = 0) {
    try {
      return this->getObject(index, LA2_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * other designation
   */
  ST *getLA2_10(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, LA2_10);
  }

  ST *getOtherDesignation(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, LA2_10);
  }

  bool isLA2_10(size_t index = 0) {
    try {
      return this->getObject(index, LA2_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOtherDesignation(size_t index = 0) {
    try {
      return this->getObject(index, LA2_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * city
   */
  ST *getLA2_11(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, LA2_11);
  }

  ST *getCity(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, LA2_11);
  }

  bool isLA2_11(size_t index = 0) {
    try {
      return this->getObject(index, LA2_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCity(size_t index = 0) {
    try {
      return this->getObject(index, LA2_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * state or province
   */
  ST *getLA2_12(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, LA2_12);
  }

  ST *getStateOrProvince(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, LA2_12);
  }

  bool isLA2_12(size_t index = 0) {
    try {
      return this->getObject(index, LA2_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStateOrProvince(size_t index = 0) {
    try {
      return this->getObject(index, LA2_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * zip or postal code
   */
  ST *getLA2_13(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, LA2_13);
  }

  ST *getZipOrPostalCode(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, LA2_13);
  }

  bool isLA2_13(size_t index = 0) {
    try {
      return this->getObject(index, LA2_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isZipOrPostalCode(size_t index = 0) {
    try {
      return this->getObject(index, LA2_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * country
   */
  ID *getLA2_14(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, LA2_14);
  }

  ID *getCountry(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, LA2_14);
  }

  bool isLA2_14(size_t index = 0) {
    try {
      return this->getObject(index, LA2_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCountry(size_t index = 0) {
    try {
      return this->getObject(index, LA2_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * address type
   */
  ID *getLA2_15(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, LA2_15);
  }

  ID *getAddressType(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, LA2_15);
  }

  bool isLA2_15(size_t index = 0) {
    try {
      return this->getObject(index, LA2_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAddressType(size_t index = 0) {
    try {
      return this->getObject(index, LA2_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * other geographic designation
   */
  ST *getLA2_16(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, LA2_16);
  }

  ST *getOtherGeographicDesignation(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, LA2_16);
  }

  bool isLA2_16(size_t index = 0) {
    try {
      return this->getObject(index, LA2_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOtherGeographicDesignation(size_t index = 0) {
    try {
      return this->getObject(index, LA2_16) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End LA2 */

} /* End HL7_24 */

#endif /*__LA2_v24_H__ */
