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


#ifndef __DIN_v29_H__
#define __DIN_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"

namespace HL7_29 {

/* date and institution name */
class DIN : public HL7Data {
 public:
  DIN() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    DIN_1, /* Date */
    DIN_2, /* Institution Name */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "DIN"; }
  DIN *create() const { return new DIN(); }

 private:
  void init() {
    setName("DIN");
    /* Init members */
    addObject<DTM>(DIN_1, "DIN.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DIN_2, "DIN.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Date
   */
  DTM *getDIN_1(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, DIN_1);
  }

  DTM *getDate(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, DIN_1);
  }

  bool isDIN_1(size_t index = 0) {
    try {
      return this->getObject(index, DIN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDate(size_t index = 0) {
    try {
      return this->getObject(index, DIN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Institution Name
   */
  CWE *getDIN_2(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, DIN_2);
  }

  CWE *getInstitutionName(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, DIN_2);
  }

  bool isDIN_2(size_t index = 0) {
    try {
      return this->getObject(index, DIN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInstitutionName(size_t index = 0) {
    try {
      return this->getObject(index, DIN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End DIN */

} /* End HL7_29 */

#endif /* __DIN_v29_H__ */
