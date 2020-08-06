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


#ifndef __ECR_v29_H__
#define __ECR_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/TX.h"

namespace HL7_29 {

/* ECR */
class ECR : public HL7Segment {
 public:
  ECR() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    ECR_1,
    ECR_2,
    ECR_3,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "ECR"; }
  ECR* create() const { return new ECR(); }

 private:
  void init() {
    setName("ECR");
    /* Init members */
    addObject<CWE>(ECR_1, "ECR.1", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(ECR_2, "ECR.2", HL7::initialized, HL7::repetition_off);
    addObject<TX>(ECR_3, "ECR.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Command Response
   */

  CWE* getECR_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ECR_1);
  }

  CWE* getCommandResponse(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ECR_1);
  }

  bool isECR_1(size_t index = 0) {
    try {
      return this->getObject(index, ECR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCommandResponse(size_t index = 0) {
    try {
      return this->getObject(index, ECR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time Completed
   */

  DTM* getECR_2(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ECR_2);
  }

  DTM* getDateTimeCompleted(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ECR_2);
  }

  bool isECR_2(size_t index = 0) {
    try {
      return this->getObject(index, ECR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeCompleted(size_t index = 0) {
    try {
      return this->getObject(index, ECR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Command Response Parameters
   */

  TX* getECR_3(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, ECR_3);
  }

  TX* getCommandResponseParameters(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, ECR_3);
  }

  bool isECR_3(size_t index = 0) {
    try {
      return this->getObject(index, ECR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCommandResponseParameters(size_t index = 0) {
    try {
      return this->getObject(index, ECR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ECR */

} /* End of namespace HL7_29 */
#endif /* __ECR_v29_H__ */
