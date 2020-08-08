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


#ifndef __SAD_v29_H__
#define __SAD_v29_H__

#include "../../common/Util.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* street address */
class SAD : public HL7Data {
 public:
  SAD() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    SAD_1, /* Street or Mailing Address */
    SAD_2, /* Street Name */
    SAD_3, /* Dwelling Number */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "SAD"; }
  SAD *create() const { return new SAD(); }

 private:
  void init() {
    setName("SAD");
    /* Init members */
    addObject<ST>(SAD_1, "SAD.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(SAD_2, "SAD.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(SAD_3, "SAD.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Street or Mailing Address
   */
  ST *getSAD_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SAD_1);
  }

  ST *getStreetorMailingAddress(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SAD_1);
  }

  bool isSAD_1(size_t index = 0) {
    try {
      return this->getObject(index, SAD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStreetorMailingAddress(size_t index = 0) {
    try {
      return this->getObject(index, SAD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Street Name
   */
  ST *getSAD_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SAD_2);
  }

  ST *getStreetName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SAD_2);
  }

  bool isSAD_2(size_t index = 0) {
    try {
      return this->getObject(index, SAD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStreetName(size_t index = 0) {
    try {
      return this->getObject(index, SAD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dwelling Number
   */
  ST *getSAD_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SAD_3);
  }

  ST *getDwellingNumber(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SAD_3);
  }

  bool isSAD_3(size_t index = 0) {
    try {
      return this->getObject(index, SAD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDwellingNumber(size_t index = 0) {
    try {
      return this->getObject(index, SAD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End SAD */

} /* End HL7_29 */

#endif /* __SAD_v29_H__ */
