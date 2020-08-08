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


#ifndef __RCD_v29_H__
#define __RCD_v29_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* row column definition */
class RCD : public HL7Data {
 public:
  RCD() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    RCD_1, /* Segment Field Name */
    RCD_2, /* HL7 Data Type */
    RCD_3, /* Maximum Column Width */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "RCD"; }
  RCD *create() const { return new RCD(); }

 private:
  void init() {
    setName("RCD");
    /* Init members */
    addObject<ST>(RCD_1, "RCD.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RCD_2, "RCD.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RCD_3, "RCD.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Segment Field Name
   */
  ST *getRCD_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, RCD_1);
  }

  ST *getSegmentFieldName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, RCD_1);
  }

  bool isRCD_1(size_t index = 0) {
    try {
      return this->getObject(index, RCD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentFieldName(size_t index = 0) {
    try {
      return this->getObject(index, RCD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * HL7 Data Type
   */
  ID *getRCD_2(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, RCD_2);
  }

  ID *getHL7DataType(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, RCD_2);
  }

  bool isRCD_2(size_t index = 0) {
    try {
      return this->getObject(index, RCD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHL7DataType(size_t index = 0) {
    try {
      return this->getObject(index, RCD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Maximum Column Width
   */
  NM *getRCD_3(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, RCD_3);
  }

  NM *getMaximumColumnWidth(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, RCD_3);
  }

  bool isRCD_3(size_t index = 0) {
    try {
      return this->getObject(index, RCD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMaximumColumnWidth(size_t index = 0) {
    try {
      return this->getObject(index, RCD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End RCD */

} /* End HL7_29 */

#endif /* __RCD_v29_H__ */
