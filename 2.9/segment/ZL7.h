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


#ifndef __ZL7_v29_H__
#define __ZL7_v29_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"

namespace HL7_29 {

/* ZL7 */
class ZL7 : public HL7Segment {
 public:
  ZL7() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    ZL7_1,
    ZL7_2,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "ZL7"; }
  ZL7* create() const { return new ZL7(); }

 private:
  void init() {
    setName("ZL7");
    /* Init members */
    addObject<NM>(ZL7_1, "ZL7.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(ZL7_2, "ZL7.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Display-sort-key1
   */

  NM* getZL7_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ZL7_1);
  }

  NM* getDisplaysortkey1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ZL7_1);
  }

  bool isZL7_1(size_t index = 0) {
    try {
      return this->getObject(index, ZL7_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDisplaysortkey1(size_t index = 0) {
    try {
      return this->getObject(index, ZL7_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Display-sort-key2
   */

  NM* getZL7_2(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ZL7_2);
  }

  NM* getDisplaysortkey2(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ZL7_2);
  }

  bool isZL7_2(size_t index = 0) {
    try {
      return this->getObject(index, ZL7_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDisplaysortkey2(size_t index = 0) {
    try {
      return this->getObject(index, ZL7_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ZL7 */

} /* End of namespace HL7_29 */
#endif /* __ZL7_v29_H__ */
