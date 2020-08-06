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


#ifndef __MFA_v29_H__
#define __MFA_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* MFA */
class MFA : public HL7Segment {
 public:
  MFA() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    MFA_1,
    MFA_2,
    MFA_3,
    MFA_4,
    MFA_5,
    MFA_6,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "MFA"; }
  MFA* create() const { return new MFA(); }

 private:
  void init() {
    setName("MFA");
    /* Init members */
    addObject<ID>(MFA_1, "MFA.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(MFA_2, "MFA.2", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(MFA_3, "MFA.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(MFA_4, "MFA.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(MFA_5, "MFA.5", HL7::initialized, HL7::repetition_off);
    addObject<ID>(MFA_6, "MFA.6", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Record-Level Event Code
   */

  ID* getMFA_1(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MFA_1);
  }

  ID* getRecordLevelEventCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MFA_1);
  }

  bool isMFA_1(size_t index = 0) {
    try {
      return this->getObject(index, MFA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRecordLevelEventCode(size_t index = 0) {
    try {
      return this->getObject(index, MFA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * MFN Control ID
   */

  ST* getMFA_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MFA_2);
  }

  ST* getMFNControlID(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MFA_2);
  }

  bool isMFA_2(size_t index = 0) {
    try {
      return this->getObject(index, MFA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMFNControlID(size_t index = 0) {
    try {
      return this->getObject(index, MFA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Completion Date/Time
   */

  DTM* getMFA_3(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, MFA_3);
  }

  DTM* getEventCompletionDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, MFA_3);
  }

  bool isMFA_3(size_t index = 0) {
    try {
      return this->getObject(index, MFA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventCompletionDateTime(size_t index = 0) {
    try {
      return this->getObject(index, MFA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * MFN Record Level Error Return
   */

  CWE* getMFA_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, MFA_4);
  }

  CWE* getMFNRecordLevelErrorReturn(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, MFA_4);
  }

  bool isMFA_4(size_t index = 0) {
    try {
      return this->getObject(index, MFA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMFNRecordLevelErrorReturn(size_t index = 0) {
    try {
      return this->getObject(index, MFA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Key Value - MFA
   */

  CWE* getMFA_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, MFA_5);
  }

  CWE* getPrimaryKeyValueMFA(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, MFA_5);
  }

  bool isMFA_5(size_t index = 0) {
    try {
      return this->getObject(index, MFA_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryKeyValueMFA(size_t index = 0) {
    try {
      return this->getObject(index, MFA_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Key Value Type - MFA
   */

  ID* getMFA_6(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MFA_6);
  }

  ID* getPrimaryKeyValueTypeMFA(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MFA_6);
  }

  bool isMFA_6(size_t index = 0) {
    try {
      return this->getObject(index, MFA_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryKeyValueTypeMFA(size_t index = 0) {
    try {
      return this->getObject(index, MFA_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of MFA */

} /* End of namespace HL7_29 */
#endif /* __MFA_v29_H__ */
