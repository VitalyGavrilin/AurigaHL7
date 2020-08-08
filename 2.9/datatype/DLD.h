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


#ifndef __DLD_v29_H__
#define __DLD_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"

namespace HL7_29 {

/* discharge to location and date */
class DLD : public HL7Data {
 public:
  DLD() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    DLD_1, /* Discharge to Location */
    DLD_2, /* Effective Date */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "DLD"; }
  DLD *create() const { return new DLD(); }

 private:
  void init() {
    setName("DLD");
    /* Init members */
    addObject<CWE>(DLD_1, "DLD.1", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(DLD_2, "DLD.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Discharge to Location
   */
  CWE *getDLD_1(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, DLD_1);
  }

  CWE *getDischargetoLocation(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, DLD_1);
  }

  bool isDLD_1(size_t index = 0) {
    try {
      return this->getObject(index, DLD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDischargetoLocation(size_t index = 0) {
    try {
      return this->getObject(index, DLD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Date
   */
  DTM *getDLD_2(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, DLD_2);
  }

  DTM *getEffectiveDate(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, DLD_2);
  }

  bool isDLD_2(size_t index = 0) {
    try {
      return this->getObject(index, DLD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, DLD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End DLD */

} /* End HL7_29 */

#endif /* __DLD_v29_H__ */
