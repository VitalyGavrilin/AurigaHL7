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


#ifndef __QPD_v29_H__
#define __QPD_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* QPD */
class QPD : public HL7Segment {
 public:
  QPD() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    QPD_1,
    QPD_2,
    QPD_3,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "QPD"; }
  QPD* create() const { return new QPD(); }

 private:
  void init() {
    setName("QPD");
    /* Init members */
    addObject<CWE>(QPD_1, "QPD.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(QPD_2, "QPD.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(QPD_3, "QPD.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Message Query Name
   */

  CWE* getQPD_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, QPD_1);
  }

  CWE* getMessageQueryName(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, QPD_1);
  }

  bool isQPD_1(size_t index = 0) {
    try {
      return this->getObject(index, QPD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMessageQueryName(size_t index = 0) {
    try {
      return this->getObject(index, QPD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Query Tag
   */

  ST* getQPD_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, QPD_2);
  }

  ST* getQueryTag(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, QPD_2);
  }

  bool isQPD_2(size_t index = 0) {
    try {
      return this->getObject(index, QPD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQueryTag(size_t index = 0) {
    try {
      return this->getObject(index, QPD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * User Parameters
   */

  ST* getQPD_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, QPD_3);
  }

  ST* getUserParameters(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, QPD_3);
  }

  bool isQPD_3(size_t index = 0) {
    try {
      return this->getObject(index, QPD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUserParameters(size_t index = 0) {
    try {
      return this->getObject(index, QPD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of QPD */

} /* End of namespace HL7_29 */
#endif /* __QPD_v29_H__ */
