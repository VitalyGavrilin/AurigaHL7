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


#ifndef __CDO_v29_H__
#define __CDO_v29_H__

#include "../../common/Util.h"
#include "../datatype/CQ.h"
#include "../datatype/ID.h"
#include "../datatype/SI.h"

namespace HL7_29 {

/* CDO */
class CDO : public HL7Segment {
 public:
  CDO() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    CDO_1,
    CDO_2,
    CDO_3,
    CDO_4,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "CDO"; }
  CDO* create() const { return new CDO(); }

 private:
  void init() {
    setName("CDO");
    /* Init members */
    addObject<SI>(CDO_1, "CDO.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CDO_2, "CDO.2", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(CDO_3, "CDO.3", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(CDO_4, "CDO.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID – CDO
   */

  SI* getCDO_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, CDO_1);
  }

  SI* getSetIDCDO(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, CDO_1);
  }

  bool isCDO_1(size_t index = 0) {
    try {
      return this->getObject(index, CDO_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDCDO(size_t index = 0) {
    try {
      return this->getObject(index, CDO_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code
   */

  ID* getCDO_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, CDO_2);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, CDO_2);
  }

  bool isCDO_2(size_t index = 0) {
    try {
      return this->getObject(index, CDO_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, CDO_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Cumulative Dosage Limit
   */

  CQ* getCDO_3(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, CDO_3);
  }

  CQ* getCumulativeDosageLimit(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, CDO_3);
  }

  bool isCDO_3(size_t index = 0) {
    try {
      return this->getObject(index, CDO_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCumulativeDosageLimit(size_t index = 0) {
    try {
      return this->getObject(index, CDO_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Cumulative Dosage Limit Time Interval
   */

  CQ* getCDO_4(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, CDO_4);
  }

  CQ* getCumulativeDosageLimitTimeInterval(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, CDO_4);
  }

  bool isCDO_4(size_t index = 0) {
    try {
      return this->getObject(index, CDO_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCumulativeDosageLimitTimeInterval(size_t index = 0) {
    try {
      return this->getObject(index, CDO_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of CDO */

} /* End of namespace HL7_29 */
#endif /* __CDO_v29_H__ */
