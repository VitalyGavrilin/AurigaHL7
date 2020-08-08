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


#ifndef __MOP_v29_H__
#define __MOP_v29_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"

namespace HL7_29 {

/* money or percentage */
class MOP : public HL7Data {
 public:
  MOP() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    MOP_1, /* Money or Percentage Indicator */
    MOP_2, /* Money or Percentage Quantity */
    MOP_3, /* Monetary Denomination */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "MOP"; }
  MOP *create() const { return new MOP(); }

 private:
  void init() {
    setName("MOP");
    /* Init members */
    addObject<ID>(MOP_1, "MOP.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(MOP_2, "MOP.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(MOP_3, "MOP.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Money or Percentage Indicator
   */
  ID *getMOP_1(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, MOP_1);
  }

  ID *getMoneyorPercentageIndicator(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, MOP_1);
  }

  bool isMOP_1(size_t index = 0) {
    try {
      return this->getObject(index, MOP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMoneyorPercentageIndicator(size_t index = 0) {
    try {
      return this->getObject(index, MOP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Money or Percentage Quantity
   */
  NM *getMOP_2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MOP_2);
  }

  NM *getMoneyorPercentageQuantity(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MOP_2);
  }

  bool isMOP_2(size_t index = 0) {
    try {
      return this->getObject(index, MOP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMoneyorPercentageQuantity(size_t index = 0) {
    try {
      return this->getObject(index, MOP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Monetary Denomination
   */
  ID *getMOP_3(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, MOP_3);
  }

  ID *getMonetaryDenomination(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, MOP_3);
  }

  bool isMOP_3(size_t index = 0) {
    try {
      return this->getObject(index, MOP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMonetaryDenomination(size_t index = 0) {
    try {
      return this->getObject(index, MOP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End MOP */

} /* End HL7_29 */

#endif /* __MOP_v29_H__ */
