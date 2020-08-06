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


#ifndef __IAR_v29_H__
#define __IAR_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* IAR */
class IAR : public HL7Segment {
 public:
  IAR() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    IAR_1,
    IAR_2,
    IAR_3,
    IAR_4,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "IAR"; }
  IAR* create() const { return new IAR(); }

 private:
  void init() {
    setName("IAR");
    /* Init members */
    addObject<CWE>(IAR_1, "IAR.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IAR_2, "IAR.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IAR_3, "IAR.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IAR_4, "IAR.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Allergy Reaction Code
   */

  CWE* getIAR_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IAR_1);
  }

  CWE* getAllergyReactionCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IAR_1);
  }

  bool isIAR_1(size_t index = 0) {
    try {
      return this->getObject(index, IAR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllergyReactionCode(size_t index = 0) {
    try {
      return this->getObject(index, IAR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allergy Severity Code
   */

  CWE* getIAR_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IAR_2);
  }

  CWE* getAllergySeverityCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IAR_2);
  }

  bool isIAR_2(size_t index = 0) {
    try {
      return this->getObject(index, IAR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllergySeverityCode(size_t index = 0) {
    try {
      return this->getObject(index, IAR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sensitivity to Causative Agent Code
   */

  CWE* getIAR_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IAR_3);
  }

  CWE* getSensitivitytoCausativeAgentCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IAR_3);
  }

  bool isIAR_3(size_t index = 0) {
    try {
      return this->getObject(index, IAR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSensitivitytoCausativeAgentCode(size_t index = 0) {
    try {
      return this->getObject(index, IAR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Management
   */

  ST* getIAR_4(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IAR_4);
  }

  ST* getManagement(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IAR_4);
  }

  bool isIAR_4(size_t index = 0) {
    try {
      return this->getObject(index, IAR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isManagement(size_t index = 0) {
    try {
      return this->getObject(index, IAR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of IAR */

} /* End of namespace HL7_29 */
#endif /* __IAR_v29_H__ */
