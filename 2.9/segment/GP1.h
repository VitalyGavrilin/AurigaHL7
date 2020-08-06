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


#ifndef __GP1_v29_H__
#define __GP1_v29_H__

#include "../../common/Util.h"
#include "../datatype/CP.h"
#include "../datatype/CWE.h"

namespace HL7_29 {

/* GP1 */
class GP1 : public HL7Segment {
 public:
  GP1() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    GP1_1,
    GP1_2,
    GP1_3,
    GP1_4,
    GP1_5,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "GP1"; }
  GP1* create() const { return new GP1(); }

 private:
  void init() {
    setName("GP1");
    /* Init members */
    addObject<CWE>(GP1_1, "GP1.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(GP1_2, "GP1.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(GP1_3, "GP1.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(GP1_4, "GP1.4", HL7::initialized, HL7::repetition_off);
    addObject<CP>(GP1_5, "GP1.5", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Type of Bill Code
   */

  CWE* getGP1_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GP1_1);
  }

  CWE* getTypeofBillCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GP1_1);
  }

  bool isGP1_1(size_t index = 0) {
    try {
      return this->getObject(index, GP1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTypeofBillCode(size_t index = 0) {
    try {
      return this->getObject(index, GP1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Revenue Code
   */

  CWE* getGP1_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GP1_2);
  }

  CWE* getRevenueCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GP1_2);
  }

  bool isGP1_2(size_t index = 0) {
    try {
      return this->getObject(index, GP1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRevenueCode(size_t index = 0) {
    try {
      return this->getObject(index, GP1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Overall Claim Disposition Code
   */

  CWE* getGP1_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GP1_3);
  }

  CWE* getOverallClaimDispositionCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GP1_3);
  }

  bool isGP1_3(size_t index = 0) {
    try {
      return this->getObject(index, GP1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOverallClaimDispositionCode(size_t index = 0) {
    try {
      return this->getObject(index, GP1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * OCE Edits per Visit Code
   */

  CWE* getGP1_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GP1_4);
  }

  CWE* getOCEEditsperVisitCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GP1_4);
  }

  bool isGP1_4(size_t index = 0) {
    try {
      return this->getObject(index, GP1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOCEEditsperVisitCode(size_t index = 0) {
    try {
      return this->getObject(index, GP1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Outlier Cost
   */

  CP* getGP1_5(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, GP1_5);
  }

  CP* getOutlierCost(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, GP1_5);
  }

  bool isGP1_5(size_t index = 0) {
    try {
      return this->getObject(index, GP1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOutlierCost(size_t index = 0) {
    try {
      return this->getObject(index, GP1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of GP1 */

} /* End of namespace HL7_29 */
#endif /* __GP1_v29_H__ */
