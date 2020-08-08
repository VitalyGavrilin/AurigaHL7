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


#ifndef __CSS_v29_H__
#define __CSS_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"

namespace HL7_29 {

/* CSS */
class CSS : public HL7Segment {
 public:
  CSS() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    CSS_1,
    CSS_2,
    CSS_3,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "CSS"; }
  CSS* create() const { return new CSS(); }

 private:
  void init() {
    setName("CSS");
    /* Init members */
    addObject<CWE>(CSS_1, "CSS.1", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CSS_2, "CSS.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CSS_3, "CSS.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Study Scheduled Time Point
   */

  CWE* getCSS_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CSS_1);
  }

  CWE* getStudyScheduledTimePoint(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CSS_1);
  }

  bool isCSS_1(size_t index = 0) {
    try {
      return this->getObject(index, CSS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStudyScheduledTimePoint(size_t index = 0) {
    try {
      return this->getObject(index, CSS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Study Scheduled Patient Time Point
   */

  DTM* getCSS_2(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CSS_2);
  }

  DTM* getStudyScheduledPatientTimePoint(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CSS_2);
  }

  bool isCSS_2(size_t index = 0) {
    try {
      return this->getObject(index, CSS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStudyScheduledPatientTimePoint(size_t index = 0) {
    try {
      return this->getObject(index, CSS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Study Quality Control Codes
   */

  CWE* getCSS_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CSS_3);
  }

  CWE* getStudyQualityControlCodes(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CSS_3);
  }

  bool isCSS_3(size_t index = 0) {
    try {
      return this->getObject(index, CSS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStudyQualityControlCodes(size_t index = 0) {
    try {
      return this->getObject(index, CSS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of CSS */

} /* End of namespace HL7_29 */
#endif /* __CSS_v29_H__ */
