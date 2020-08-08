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


#ifndef __CSP_v29_H__
#define __CSP_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"

namespace HL7_29 {

/* CSP */
class CSP : public HL7Segment {
 public:
  CSP() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    CSP_1,
    CSP_2,
    CSP_3,
    CSP_4,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "CSP"; }
  CSP* create() const { return new CSP(); }

 private:
  void init() {
    setName("CSP");
    /* Init members */
    addObject<CWE>(CSP_1, "CSP.1", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CSP_2, "CSP.2", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CSP_3, "CSP.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CSP_4, "CSP.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Study Phase Identifier
   */

  CWE* getCSP_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CSP_1);
  }

  CWE* getStudyPhaseIdentifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CSP_1);
  }

  bool isCSP_1(size_t index = 0) {
    try {
      return this->getObject(index, CSP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStudyPhaseIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CSP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/time Study Phase Began
   */

  DTM* getCSP_2(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CSP_2);
  }

  DTM* getDatetimeStudyPhaseBegan(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CSP_2);
  }

  bool isCSP_2(size_t index = 0) {
    try {
      return this->getObject(index, CSP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDatetimeStudyPhaseBegan(size_t index = 0) {
    try {
      return this->getObject(index, CSP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/time Study Phase Ended
   */

  DTM* getCSP_3(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CSP_3);
  }

  DTM* getDatetimeStudyPhaseEnded(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CSP_3);
  }

  bool isCSP_3(size_t index = 0) {
    try {
      return this->getObject(index, CSP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDatetimeStudyPhaseEnded(size_t index = 0) {
    try {
      return this->getObject(index, CSP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Study Phase Evaluability
   */

  CWE* getCSP_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CSP_4);
  }

  CWE* getStudyPhaseEvaluability(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CSP_4);
  }

  bool isCSP_4(size_t index = 0) {
    try {
      return this->getObject(index, CSP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStudyPhaseEvaluability(size_t index = 0) {
    try {
      return this->getObject(index, CSP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of CSP */

} /* End of namespace HL7_29 */
#endif /* __CSP_v29_H__ */
