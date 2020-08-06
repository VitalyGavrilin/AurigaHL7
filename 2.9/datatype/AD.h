/*
 * hacca - C Toolkit and Applications for the HL7 2.x Protocols
 *           http://github.com/rcarbone/hacca
 *           http://hub.docker.com/repository/docker/roccocarbone/hacca
 *
 * Warning: This file was automatically generated, please do not edit.
 *
 * R. Carbone (rocco@tecsiel.it)
 * Jul 2020
 *
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 */


#ifndef __AD_v29_H__
#define __AD_v29_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* address */
class AD : public HL7Data {
 public:
  AD() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    AD_1, /* Street Address */
    AD_2, /* Other Designation */
    AD_3, /* City */
    AD_4, /* State or Province */
    AD_5, /* Zip or Postal Code */
    AD_6, /* Country */
    AD_7, /* Address Type */
    AD_8, /* Other Geographic Designation */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "AD"; }
  AD *create() const { return new AD(); }

 private:
  void init() {
    setName("AD");
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
   * Street Address
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
   * Other Designation
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
   * City
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
   * State or Province
   */
  ST *getAD_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, AD_4);
  }

  ST *getStateorProvince(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, AD_4);
  }

  bool isAD_4(size_t index = 0) {
    try {
      return this->getObject(index, AD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStateorProvince(size_t index = 0) {
    try {
      return this->getObject(index, AD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Zip or Postal Code
   */
  ST *getAD_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, AD_5);
  }

  ST *getZiporPostalCode(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, AD_5);
  }

  bool isAD_5(size_t index = 0) {
    try {
      return this->getObject(index, AD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isZiporPostalCode(size_t index = 0) {
    try {
      return this->getObject(index, AD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Country
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
   * Address Type
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
   * Other Geographic Designation
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

} /* End HL7_29 */

#endif /* __AD_v29_H__ */
