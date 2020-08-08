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


#ifndef __BLG_v29_H__
#define __BLG_v29_H__

#include "../../common/Util.h"
#include "../datatype/CCD.h"
#include "../datatype/CWE.h"
#include "../datatype/CX.h"
#include "../datatype/ID.h"

namespace HL7_29 {

/* BLG */
class BLG : public HL7Segment {
 public:
  BLG() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    BLG_1,
    BLG_2,
    BLG_3,
    BLG_4,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "BLG"; }
  BLG* create() const { return new BLG(); }

 private:
  void init() {
    setName("BLG");
    /* Init members */
    addObject<CCD>(BLG_1, "BLG.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(BLG_2, "BLG.2", HL7::initialized, HL7::repetition_off);
    addObject<CX>(BLG_3, "BLG.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(BLG_4, "BLG.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * When to Charge
   */

  CCD* getBLG_1(size_t index = 0) {
    return (CCD*)this->getObjectSafe(index, BLG_1);
  }

  CCD* getWhentoCharge(size_t index = 0) {
    return (CCD*)this->getObjectSafe(index, BLG_1);
  }

  bool isBLG_1(size_t index = 0) {
    try {
      return this->getObject(index, BLG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isWhentoCharge(size_t index = 0) {
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

  /****************************************
   * Charge Type Reason
   */

  CWE* getBLG_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BLG_4);
  }

  CWE* getChargeTypeReason(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BLG_4);
  }

  bool isBLG_4(size_t index = 0) {
    try {
      return this->getObject(index, BLG_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChargeTypeReason(size_t index = 0) {
    try {
      return this->getObject(index, BLG_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of BLG */

} /* End of namespace HL7_29 */
#endif /* __BLG_v29_H__ */
