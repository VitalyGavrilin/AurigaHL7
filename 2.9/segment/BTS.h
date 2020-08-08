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


#ifndef __BTS_v29_H__
#define __BTS_v29_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* BTS */
class BTS : public HL7Segment {
 public:
  BTS() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    BTS_1,
    BTS_2,
    BTS_3,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "BTS"; }
  BTS* create() const { return new BTS(); }

 private:
  void init() {
    setName("BTS");
    /* Init members */
    addObject<ST>(BTS_1, "BTS.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(BTS_2, "BTS.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(BTS_3, "BTS.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Batch Message Count
   */

  ST* getBTS_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BTS_1);
  }

  ST* getBatchMessageCount(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BTS_1);
  }

  bool isBTS_1(size_t index = 0) {
    try {
      return this->getObject(index, BTS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchMessageCount(size_t index = 0) {
    try {
      return this->getObject(index, BTS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Batch Comment
   */

  ST* getBTS_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BTS_2);
  }

  ST* getBatchComment(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BTS_2);
  }

  bool isBTS_2(size_t index = 0) {
    try {
      return this->getObject(index, BTS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchComment(size_t index = 0) {
    try {
      return this->getObject(index, BTS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Batch Totals
   */

  NM* getBTS_3(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, BTS_3);
  }

  NM* getBatchTotals(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, BTS_3);
  }

  bool isBTS_3(size_t index = 0) {
    try {
      return this->getObject(index, BTS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchTotals(size_t index = 0) {
    try {
      return this->getObject(index, BTS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of BTS */

} /* End of namespace HL7_29 */
#endif /* __BTS_v29_H__ */
