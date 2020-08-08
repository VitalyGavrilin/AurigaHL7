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


#ifndef __CTI_v29_H__
#define __CTI_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"

namespace HL7_29 {

/* CTI */
class CTI : public HL7Segment {
 public:
  CTI() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    CTI_1,
    CTI_2,
    CTI_3,
    CTI_4,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "CTI"; }
  CTI* create() const { return new CTI(); }

 private:
  void init() {
    setName("CTI");
    /* Init members */
    addObject<EI>(CTI_1, "CTI.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CTI_2, "CTI.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CTI_3, "CTI.3", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CTI_4, "CTI.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Sponsor Study ID
   */

  EI* getCTI_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, CTI_1);
  }

  EI* getSponsorStudyID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, CTI_1);
  }

  bool isCTI_1(size_t index = 0) {
    try {
      return this->getObject(index, CTI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSponsorStudyID(size_t index = 0) {
    try {
      return this->getObject(index, CTI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Study Phase Identifier
   */

  CWE* getCTI_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CTI_2);
  }

  CWE* getStudyPhaseIdentifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CTI_2);
  }

  bool isCTI_2(size_t index = 0) {
    try {
      return this->getObject(index, CTI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStudyPhaseIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CTI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Study Scheduled Time Point
   */

  CWE* getCTI_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CTI_3);
  }

  CWE* getStudyScheduledTimePoint(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CTI_3);
  }

  bool isCTI_3(size_t index = 0) {
    try {
      return this->getObject(index, CTI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStudyScheduledTimePoint(size_t index = 0) {
    try {
      return this->getObject(index, CTI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code
   */

  ID* getCTI_4(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, CTI_4);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, CTI_4);
  }

  bool isCTI_4(size_t index = 0) {
    try {
      return this->getObject(index, CTI_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, CTI_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of CTI */

} /* End of namespace HL7_29 */
#endif /* __CTI_v29_H__ */
