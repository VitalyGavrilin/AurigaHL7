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


#ifndef __CM2_v29_H__
#define __CM2_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* CM2 */
class CM2 : public HL7Segment {
 public:
  CM2() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    CM2_1,
    CM2_2,
    CM2_3,
    CM2_4,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "CM2"; }
  CM2* create() const { return new CM2(); }

 private:
  void init() {
    setName("CM2");
    /* Init members */
    addObject<SI>(CM2_1, "CM2.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CM2_2, "CM2.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CM2_3, "CM2.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CM2_4, "CM2.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID- CM2
   */

  SI* getCM2_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, CM2_1);
  }

  SI* getSetIDCM2(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, CM2_1);
  }

  bool isCM2_1(size_t index = 0) {
    try {
      return this->getObject(index, CM2_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDCM2(size_t index = 0) {
    try {
      return this->getObject(index, CM2_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Scheduled Time Point
   */

  CWE* getCM2_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CM2_2);
  }

  CWE* getScheduledTimePoint(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CM2_2);
  }

  bool isCM2_2(size_t index = 0) {
    try {
      return this->getObject(index, CM2_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isScheduledTimePoint(size_t index = 0) {
    try {
      return this->getObject(index, CM2_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Description of Time Point
   */

  ST* getCM2_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, CM2_3);
  }

  ST* getDescriptionofTimePoint(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, CM2_3);
  }

  bool isCM2_3(size_t index = 0) {
    try {
      return this->getObject(index, CM2_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDescriptionofTimePoint(size_t index = 0) {
    try {
      return this->getObject(index, CM2_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Events Scheduled This Time Point
   */

  CWE* getCM2_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CM2_4);
  }

  CWE* getEventsScheduledThisTimePoint(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CM2_4);
  }

  bool isCM2_4(size_t index = 0) {
    try {
      return this->getObject(index, CM2_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventsScheduledThisTimePoint(size_t index = 0) {
    try {
      return this->getObject(index, CM2_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of CM2 */

} /* End of namespace HL7_29 */
#endif /* __CM2_v29_H__ */
