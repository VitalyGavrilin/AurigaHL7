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


#ifndef __PCE_v29_H__
#define __PCE_v29_H__

#include "../../common/Util.h"
#include "../datatype/CP.h"
#include "../datatype/CWE.h"
#include "../datatype/CX.h"
#include "../datatype/SI.h"

namespace HL7_29 {

/* PCE */
class PCE : public HL7Segment {
 public:
  PCE() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PCE_1,
    PCE_2,
    PCE_3,
    PCE_4,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PCE"; }
  PCE* create() const { return new PCE(); }

 private:
  void init() {
    setName("PCE");
    /* Init members */
    addObject<SI>(PCE_1, "PCE.1", HL7::initialized, HL7::repetition_off);
    addObject<CX>(PCE_2, "PCE.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PCE_3, "PCE.3", HL7::initialized, HL7::repetition_off);
    addObject<CP>(PCE_4, "PCE.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID – PCE
   */

  SI* getPCE_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, PCE_1);
  }

  SI* getSetIDPCE(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, PCE_1);
  }

  bool isPCE_1(size_t index = 0) {
    try {
      return this->getObject(index, PCE_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDPCE(size_t index = 0) {
    try {
      return this->getObject(index, PCE_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Cost Center Account Number
   */

  CX* getPCE_2(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PCE_2);
  }

  CX* getCostCenterAccountNumber(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PCE_2);
  }

  bool isPCE_2(size_t index = 0) {
    try {
      return this->getObject(index, PCE_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCostCenterAccountNumber(size_t index = 0) {
    try {
      return this->getObject(index, PCE_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Code
   */

  CWE* getPCE_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PCE_3);
  }

  CWE* getTransactionCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PCE_3);
  }

  bool isPCE_3(size_t index = 0) {
    try {
      return this->getObject(index, PCE_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionCode(size_t index = 0) {
    try {
      return this->getObject(index, PCE_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Amount - Unit
   */

  CP* getPCE_4(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PCE_4);
  }

  CP* getTransactionAmountUnit(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PCE_4);
  }

  bool isPCE_4(size_t index = 0) {
    try {
      return this->getObject(index, PCE_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionAmountUnit(size_t index = 0) {
    try {
      return this->getObject(index, PCE_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PCE */

} /* End of namespace HL7_29 */
#endif /* __PCE_v29_H__ */
