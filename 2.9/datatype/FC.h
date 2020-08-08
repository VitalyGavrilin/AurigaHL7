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


#ifndef __FC_v29_H__
#define __FC_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"

namespace HL7_29 {

/* financial class */
class FC : public HL7Data {
 public:
  FC() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    FC_1, /* Financial Class Code */
    FC_2, /* Effective Date */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "FC"; }
  FC *create() const { return new FC(); }

 private:
  void init() {
    setName("FC");
    /* Init members */
    addObject<CWE>(FC_1, "FC.1", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(FC_2, "FC.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Financial Class Code
   */
  CWE *getFC_1(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, FC_1);
  }

  CWE *getFinancialClassCode(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, FC_1);
  }

  bool isFC_1(size_t index = 0) {
    try {
      return this->getObject(index, FC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFinancialClassCode(size_t index = 0) {
    try {
      return this->getObject(index, FC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Date
   */
  DTM *getFC_2(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, FC_2);
  }

  DTM *getEffectiveDate(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, FC_2);
  }

  bool isFC_2(size_t index = 0) {
    try {
      return this->getObject(index, FC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, FC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End FC */

} /* End HL7_29 */

#endif /* __FC_v29_H__ */
