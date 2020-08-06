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


#ifndef __MOC_v29_H__
#define __MOC_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/MO.h"

namespace HL7_29 {

/* money and charge code */
class MOC : public HL7Data {
 public:
  MOC() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    MOC_1, /* Monetary Amount */
    MOC_2, /* Charge Code */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "MOC"; }
  MOC *create() const { return new MOC(); }

 private:
  void init() {
    setName("MOC");
    /* Init members */
    addObject<MO>(MOC_1, "MOC.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(MOC_2, "MOC.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Monetary Amount
   */
  MO *getMOC_1(size_t index = 0) {
    return (MO *)this->getObjectSafe(index, MOC_1);
  }

  MO *getMonetaryAmount(size_t index = 0) {
    return (MO *)this->getObjectSafe(index, MOC_1);
  }

  bool isMOC_1(size_t index = 0) {
    try {
      return this->getObject(index, MOC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMonetaryAmount(size_t index = 0) {
    try {
      return this->getObject(index, MOC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Charge Code
   */
  CWE *getMOC_2(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, MOC_2);
  }

  CWE *getChargeCode(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, MOC_2);
  }

  bool isMOC_2(size_t index = 0) {
    try {
      return this->getObject(index, MOC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChargeCode(size_t index = 0) {
    try {
      return this->getObject(index, MOC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End MOC */

} /* End HL7_29 */

#endif /* __MOC_v29_H__ */
