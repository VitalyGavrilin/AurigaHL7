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


#ifndef __WVI_v29_H__
#define __WVI_v29_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* channel identifier */
class WVI : public HL7Data {
 public:
  WVI() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    WVI_1, /* Channel Number */
    WVI_2, /* Channel Name */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "WVI"; }
  WVI *create() const { return new WVI(); }

 private:
  void init() {
    setName("WVI");
    /* Init members */
    addObject<NM>(WVI_1, "WVI.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(WVI_2, "WVI.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Channel Number
   */
  NM *getWVI_1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, WVI_1);
  }

  NM *getChannelNumber(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, WVI_1);
  }

  bool isWVI_1(size_t index = 0) {
    try {
      return this->getObject(index, WVI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChannelNumber(size_t index = 0) {
    try {
      return this->getObject(index, WVI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Channel Name
   */
  ST *getWVI_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, WVI_2);
  }

  ST *getChannelName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, WVI_2);
  }

  bool isWVI_2(size_t index = 0) {
    try {
      return this->getObject(index, WVI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChannelName(size_t index = 0) {
    try {
      return this->getObject(index, WVI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End WVI */

} /* End HL7_29 */

#endif /* __WVI_v29_H__ */
