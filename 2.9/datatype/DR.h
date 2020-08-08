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


#ifndef __DR_v29_H__
#define __DR_v29_H__

#include "../../common/Util.h"
#include "../datatype/DTM.h"

namespace HL7_29 {

/* date/time range */
class DR : public HL7Data {
 public:
  DR() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    DR_1, /* Range Start Date/Time */
    DR_2, /* Range End Date/Time */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "DR"; }
  DR *create() const { return new DR(); }

 private:
  void init() {
    setName("DR");
    /* Init members */
    addObject<DTM>(DR_1, "DR.1", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(DR_2, "DR.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Range Start Date/Time
   */
  DTM *getDR_1(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, DR_1);
  }

  DTM *getRangeStartDateTime(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, DR_1);
  }

  bool isDR_1(size_t index = 0) {
    try {
      return this->getObject(index, DR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRangeStartDateTime(size_t index = 0) {
    try {
      return this->getObject(index, DR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Range End Date/Time
   */
  DTM *getDR_2(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, DR_2);
  }

  DTM *getRangeEndDateTime(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, DR_2);
  }

  bool isDR_2(size_t index = 0) {
    try {
      return this->getObject(index, DR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRangeEndDateTime(size_t index = 0) {
    try {
      return this->getObject(index, DR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End DR */

} /* End HL7_29 */

#endif /* __DR_v29_H__ */
