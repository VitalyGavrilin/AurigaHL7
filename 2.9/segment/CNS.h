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


#ifndef __CNS_v29_H__
#define __CNS_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/NM.h"

namespace HL7_29 {

/* CNS */
class CNS : public HL7Segment {
 public:
  CNS() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    CNS_1,
    CNS_2,
    CNS_3,
    CNS_4,
    CNS_5,
    CNS_6,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "CNS"; }
  CNS* create() const { return new CNS(); }

 private:
  void init() {
    setName("CNS");
    /* Init members */
    addObject<NM>(CNS_1, "CNS.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(CNS_2, "CNS.2", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CNS_3, "CNS.3", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CNS_4, "CNS.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CNS_5, "CNS.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CNS_6, "CNS.6", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Starting Notification Reference Number
   */

  NM* getCNS_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, CNS_1);
  }

  NM* getStartingNotificationReferenceNumber(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, CNS_1);
  }

  bool isCNS_1(size_t index = 0) {
    try {
      return this->getObject(index, CNS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartingNotificationReferenceNumber(size_t index = 0) {
    try {
      return this->getObject(index, CNS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ending Notification Reference Number
   */

  NM* getCNS_2(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, CNS_2);
  }

  NM* getEndingNotificationReferenceNumber(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, CNS_2);
  }

  bool isCNS_2(size_t index = 0) {
    try {
      return this->getObject(index, CNS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEndingNotificationReferenceNumber(size_t index = 0) {
    try {
      return this->getObject(index, CNS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Starting Notification Date/Time
   */

  DTM* getCNS_3(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CNS_3);
  }

  DTM* getStartingNotificationDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CNS_3);
  }

  bool isCNS_3(size_t index = 0) {
    try {
      return this->getObject(index, CNS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartingNotificationDateTime(size_t index = 0) {
    try {
      return this->getObject(index, CNS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ending Notification Date/Time
   */

  DTM* getCNS_4(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CNS_4);
  }

  DTM* getEndingNotificationDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CNS_4);
  }

  bool isCNS_4(size_t index = 0) {
    try {
      return this->getObject(index, CNS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEndingNotificationDateTime(size_t index = 0) {
    try {
      return this->getObject(index, CNS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Starting Notification Code
   */

  CWE* getCNS_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CNS_5);
  }

  CWE* getStartingNotificationCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CNS_5);
  }

  bool isCNS_5(size_t index = 0) {
    try {
      return this->getObject(index, CNS_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartingNotificationCode(size_t index = 0) {
    try {
      return this->getObject(index, CNS_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ending Notification Code
   */

  CWE* getCNS_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CNS_6);
  }

  CWE* getEndingNotificationCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CNS_6);
  }

  bool isCNS_6(size_t index = 0) {
    try {
      return this->getObject(index, CNS_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEndingNotificationCode(size_t index = 0) {
    try {
      return this->getObject(index, CNS_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of CNS */

} /* End of namespace HL7_29 */
#endif /* __CNS_v29_H__ */
