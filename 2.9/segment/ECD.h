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


#ifndef __ECD_v29_H__
#define __ECD_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"
#include "../datatype/TX.h"

namespace HL7_29 {

/* ECD */
class ECD : public HL7Segment {
 public:
  ECD() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    ECD_1,
    ECD_2,
    ECD_3,
    ECD_4,
    ECD_5,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "ECD"; }
  ECD* create() const { return new ECD(); }

 private:
  void init() {
    setName("ECD");
    /* Init members */
    addObject<NM>(ECD_1, "ECD.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ECD_2, "ECD.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(ECD_3, "ECD.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ECD_4, "ECD.4", HL7::initialized, HL7::repetition_off);
    addObject<TX>(ECD_5, "ECD.5", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Reference Command Number
   */

  NM* getECD_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ECD_1);
  }

  NM* getReferenceCommandNumber(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ECD_1);
  }

  bool isECD_1(size_t index = 0) {
    try {
      return this->getObject(index, ECD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferenceCommandNumber(size_t index = 0) {
    try {
      return this->getObject(index, ECD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Remote Control Command
   */

  CWE* getECD_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ECD_2);
  }

  CWE* getRemoteControlCommand(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ECD_2);
  }

  bool isECD_2(size_t index = 0) {
    try {
      return this->getObject(index, ECD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRemoteControlCommand(size_t index = 0) {
    try {
      return this->getObject(index, ECD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Response Required
   */

  ID* getECD_3(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ECD_3);
  }

  ID* getResponseRequired(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ECD_3);
  }

  bool isECD_3(size_t index = 0) {
    try {
      return this->getObject(index, ECD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResponseRequired(size_t index = 0) {
    try {
      return this->getObject(index, ECD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Completion Time
   */

  ST* getECD_4(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ECD_4);
  }

  ST* getRequestedCompletionTime(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ECD_4);
  }

  bool isECD_4(size_t index = 0) {
    try {
      return this->getObject(index, ECD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedCompletionTime(size_t index = 0) {
    try {
      return this->getObject(index, ECD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Parameters
   */

  TX* getECD_5(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, ECD_5);
  }

  TX* getParameters(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, ECD_5);
  }

  bool isECD_5(size_t index = 0) {
    try {
      return this->getObject(index, ECD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParameters(size_t index = 0) {
    try {
      return this->getObject(index, ECD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ECD */

} /* End of namespace HL7_29 */
#endif /* __ECD_v29_H__ */
