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


#ifndef __OCD_v29_H__
#define __OCD_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/DT.h"

namespace HL7_29 {

/* occurrence code and date */
class OCD : public HL7Data {
 public:
  OCD() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    OCD_1, /* Occurrence Code */
    OCD_2, /* Occurrence Date */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "OCD"; }
  OCD *create() const { return new OCD(); }

 private:
  void init() {
    setName("OCD");
    /* Init members */
    addObject<CNE>(OCD_1, "OCD.1", HL7::initialized, HL7::repetition_off);
    addObject<DT>(OCD_2, "OCD.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Occurrence Code
   */
  CNE *getOCD_1(size_t index = 0) {
    return (CNE *)this->getObjectSafe(index, OCD_1);
  }

  CNE *getOccurrenceCode(size_t index = 0) {
    return (CNE *)this->getObjectSafe(index, OCD_1);
  }

  bool isOCD_1(size_t index = 0) {
    try {
      return this->getObject(index, OCD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOccurrenceCode(size_t index = 0) {
    try {
      return this->getObject(index, OCD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Occurrence Date
   */
  DT *getOCD_2(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, OCD_2);
  }

  DT *getOccurrenceDate(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, OCD_2);
  }

  bool isOCD_2(size_t index = 0) {
    try {
      return this->getObject(index, OCD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOccurrenceDate(size_t index = 0) {
    try {
      return this->getObject(index, OCD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End OCD */

} /* End HL7_29 */

#endif /* __OCD_v29_H__ */
