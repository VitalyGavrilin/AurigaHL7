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


#ifndef __NA_v29_H__
#define __NA_v29_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"

namespace HL7_29 {

/* numeric array */
class NA : public HL7Data {
 public:
  NA() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    NA_1, /* Value1 */
    NA_2, /* Value2 */
    NA_3, /* Value3 */
    NA_4, /* Value4 */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "NA"; }
  NA *create() const { return new NA(); }

 private:
  void init() {
    setName("NA");
    /* Init members */
    addObject<NM>(NA_1, "NA.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(NA_2, "NA.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(NA_3, "NA.3", HL7::initialized, HL7::repetition_off);
    addObject<NM>(NA_4, "NA.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Value1
   */
  NM *getNA_1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NA_1);
  }

  NM *getValue1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NA_1);
  }

  bool isNA_1(size_t index = 0) {
    try {
      return this->getObject(index, NA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValue1(size_t index = 0) {
    try {
      return this->getObject(index, NA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Value2
   */
  NM *getNA_2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NA_2);
  }

  NM *getValue2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NA_2);
  }

  bool isNA_2(size_t index = 0) {
    try {
      return this->getObject(index, NA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValue2(size_t index = 0) {
    try {
      return this->getObject(index, NA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Value3
   */
  NM *getNA_3(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NA_3);
  }

  NM *getValue3(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NA_3);
  }

  bool isNA_3(size_t index = 0) {
    try {
      return this->getObject(index, NA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValue3(size_t index = 0) {
    try {
      return this->getObject(index, NA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Value4
   */
  NM *getNA_4(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NA_4);
  }

  NM *getValue4(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NA_4);
  }

  bool isNA_4(size_t index = 0) {
    try {
      return this->getObject(index, NA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValue4(size_t index = 0) {
    try {
      return this->getObject(index, NA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End NA */

} /* End HL7_29 */

#endif /* __NA_v29_H__ */
