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


#ifndef __DDI_v29_H__
#define __DDI_v29_H__

#include "../../common/Util.h"
#include "../datatype/MO.h"
#include "../datatype/NM.h"

namespace HL7_29 {

/* daily deductible information */
class DDI : public HL7Data {
 public:
  DDI() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    DDI_1, /* Delay Days */
    DDI_2, /* Monetary Amount */
    DDI_3, /* Number of Days */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "DDI"; }
  DDI *create() const { return new DDI(); }

 private:
  void init() {
    setName("DDI");
    /* Init members */
    addObject<NM>(DDI_1, "DDI.1", HL7::initialized, HL7::repetition_off);
    addObject<MO>(DDI_2, "DDI.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(DDI_3, "DDI.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Delay Days
   */
  NM *getDDI_1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, DDI_1);
  }

  NM *getDelayDays(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, DDI_1);
  }

  bool isDDI_1(size_t index = 0) {
    try {
      return this->getObject(index, DDI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDelayDays(size_t index = 0) {
    try {
      return this->getObject(index, DDI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Monetary Amount
   */
  MO *getDDI_2(size_t index = 0) {
    return (MO *)this->getObjectSafe(index, DDI_2);
  }

  MO *getMonetaryAmount(size_t index = 0) {
    return (MO *)this->getObjectSafe(index, DDI_2);
  }

  bool isDDI_2(size_t index = 0) {
    try {
      return this->getObject(index, DDI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMonetaryAmount(size_t index = 0) {
    try {
      return this->getObject(index, DDI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of Days
   */
  NM *getDDI_3(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, DDI_3);
  }

  NM *getNumberofDays(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, DDI_3);
  }

  bool isDDI_3(size_t index = 0) {
    try {
      return this->getObject(index, DDI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberofDays(size_t index = 0) {
    try {
      return this->getObject(index, DDI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End DDI */

} /* End HL7_29 */

#endif /* __DDI_v29_H__ */
