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


#ifndef __DTN_v29_H__
#define __DTN_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/NM.h"

namespace HL7_29 {

/* day type and number */
class DTN : public HL7Data {
 public:
  DTN() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    DTN_1, /* Day Type */
    DTN_2, /* Number of Days */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "DTN"; }
  DTN *create() const { return new DTN(); }

 private:
  void init() {
    setName("DTN");
    /* Init members */
    addObject<CWE>(DTN_1, "DTN.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(DTN_2, "DTN.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Day Type
   */
  CWE *getDTN_1(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, DTN_1);
  }

  CWE *getDayType(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, DTN_1);
  }

  bool isDTN_1(size_t index = 0) {
    try {
      return this->getObject(index, DTN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDayType(size_t index = 0) {
    try {
      return this->getObject(index, DTN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of Days
   */
  NM *getDTN_2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, DTN_2);
  }

  NM *getNumberofDays(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, DTN_2);
  }

  bool isDTN_2(size_t index = 0) {
    try {
      return this->getObject(index, DTN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberofDays(size_t index = 0) {
    try {
      return this->getObject(index, DTN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End DTN */

} /* End HL7_29 */

#endif /* __DTN_v29_H__ */
