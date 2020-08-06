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


#ifndef __BLC_v29_H__
#define __BLC_v29_H__

#include "../../common/Util.h"
#include "../datatype/CQ.h"
#include "../datatype/CWE.h"

namespace HL7_29 {

/* BLC */
class BLC : public HL7Segment {
 public:
  BLC() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    BLC_1,
    BLC_2,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "BLC"; }
  BLC* create() const { return new BLC(); }

 private:
  void init() {
    setName("BLC");
    /* Init members */
    addObject<CWE>(BLC_1, "BLC.1", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(BLC_2, "BLC.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Blood Product Code
   */

  CWE* getBLC_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BLC_1);
  }

  CWE* getBloodProductCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BLC_1);
  }

  bool isBLC_1(size_t index = 0) {
    try {
      return this->getObject(index, BLC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBloodProductCode(size_t index = 0) {
    try {
      return this->getObject(index, BLC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Blood Amount
   */

  CQ* getBLC_2(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, BLC_2);
  }

  CQ* getBloodAmount(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, BLC_2);
  }

  bool isBLC_2(size_t index = 0) {
    try {
      return this->getObject(index, BLC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBloodAmount(size_t index = 0) {
    try {
      return this->getObject(index, BLC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of BLC */

} /* End of namespace HL7_29 */
#endif /* __BLC_v29_H__ */
