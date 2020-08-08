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


#ifndef __JCC_v29_H__
#define __JCC_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/TX.h"

namespace HL7_29 {

/* job code/class */
class JCC : public HL7Data {
 public:
  JCC() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    JCC_1, /* Job Code */
    JCC_2, /* Job Class */
    JCC_3, /* Job Description Text */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "JCC"; }
  JCC *create() const { return new JCC(); }

 private:
  void init() {
    setName("JCC");
    /* Init members */
    addObject<CWE>(JCC_1, "JCC.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(JCC_2, "JCC.2", HL7::initialized, HL7::repetition_off);
    addObject<TX>(JCC_3, "JCC.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Job Code
   */
  CWE *getJCC_1(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, JCC_1);
  }

  CWE *getJobCode(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, JCC_1);
  }

  bool isJCC_1(size_t index = 0) {
    try {
      return this->getObject(index, JCC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isJobCode(size_t index = 0) {
    try {
      return this->getObject(index, JCC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Job Class
   */
  CWE *getJCC_2(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, JCC_2);
  }

  CWE *getJobClass(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, JCC_2);
  }

  bool isJCC_2(size_t index = 0) {
    try {
      return this->getObject(index, JCC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isJobClass(size_t index = 0) {
    try {
      return this->getObject(index, JCC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Job Description Text
   */
  TX *getJCC_3(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, JCC_3);
  }

  TX *getJobDescriptionText(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, JCC_3);
  }

  bool isJCC_3(size_t index = 0) {
    try {
      return this->getObject(index, JCC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isJobDescriptionText(size_t index = 0) {
    try {
      return this->getObject(index, JCC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End JCC */

} /* End HL7_29 */

#endif /* __JCC_v29_H__ */
