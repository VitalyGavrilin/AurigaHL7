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


#ifndef __ERR_v29_H__
#define __ERR_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/ERL.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"
#include "../datatype/TX.h"
#include "../datatype/XTN.h"

namespace HL7_29 {

/* ERR */
class ERR : public HL7Segment {
 public:
  ERR() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    ERR_1,
    ERR_2,
    ERR_3,
    ERR_4,
    ERR_5,
    ERR_6,
    ERR_7,
    ERR_8,
    ERR_9,
    ERR_10,
    ERR_11,
    ERR_12,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "ERR"; }
  ERR* create() const { return new ERR(); }

 private:
  void init() {
    setName("ERR");
    /* Init members */
    addObject<ST>(ERR_1, "ERR.1", HL7::initialized, HL7::repetition_off);
    addObject<ERL>(ERR_2, "ERR.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ERR_3, "ERR.3", HL7::initialized, HL7::repetition_off);
    addObject<ID>(ERR_4, "ERR.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ERR_5, "ERR.5", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ERR_6, "ERR.6", HL7::initialized, HL7::repetition_off);
    addObject<TX>(ERR_7, "ERR.7", HL7::initialized, HL7::repetition_off);
    addObject<TX>(ERR_8, "ERR.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ERR_9, "ERR.9", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ERR_10, "ERR.10", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ERR_11, "ERR.11", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(ERR_12, "ERR.12", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Error Code and Location
   */

  ST* getERR_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ERR_1);
  }

  ST* getErrorCodeandLocation(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ERR_1);
  }

  bool isERR_1(size_t index = 0) {
    try {
      return this->getObject(index, ERR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isErrorCodeandLocation(size_t index = 0) {
    try {
      return this->getObject(index, ERR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Error Location
   */

  ERL* getERR_2(size_t index = 0) {
    return (ERL*)this->getObjectSafe(index, ERR_2);
  }

  ERL* getErrorLocation(size_t index = 0) {
    return (ERL*)this->getObjectSafe(index, ERR_2);
  }

  bool isERR_2(size_t index = 0) {
    try {
      return this->getObject(index, ERR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isErrorLocation(size_t index = 0) {
    try {
      return this->getObject(index, ERR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * HL7 Error Code
   */

  CWE* getERR_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ERR_3);
  }

  CWE* getHL7ErrorCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ERR_3);
  }

  bool isERR_3(size_t index = 0) {
    try {
      return this->getObject(index, ERR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHL7ErrorCode(size_t index = 0) {
    try {
      return this->getObject(index, ERR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Severity
   */

  ID* getERR_4(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ERR_4);
  }

  ID* getSeverity(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ERR_4);
  }

  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSeverity(size_t index = 0) {
    try {
      return this->getObject(index, ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Application Error Code
   */

  CWE* getERR_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ERR_5);
  }

  CWE* getApplicationErrorCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ERR_5);
  }

  bool isERR_5(size_t index = 0) {
    try {
      return this->getObject(index, ERR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isApplicationErrorCode(size_t index = 0) {
    try {
      return this->getObject(index, ERR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Application Error Parameter
   */

  ST* getERR_6(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ERR_6);
  }

  ST* getApplicationErrorParameter(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ERR_6);
  }

  bool isERR_6(size_t index = 0) {
    try {
      return this->getObject(index, ERR_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isApplicationErrorParameter(size_t index = 0) {
    try {
      return this->getObject(index, ERR_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diagnostic Information
   */

  TX* getERR_7(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, ERR_7);
  }

  TX* getDiagnosticInformation(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, ERR_7);
  }

  bool isERR_7(size_t index = 0) {
    try {
      return this->getObject(index, ERR_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosticInformation(size_t index = 0) {
    try {
      return this->getObject(index, ERR_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * User Message
   */

  TX* getERR_8(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, ERR_8);
  }

  TX* getUserMessage(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, ERR_8);
  }

  bool isERR_8(size_t index = 0) {
    try {
      return this->getObject(index, ERR_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUserMessage(size_t index = 0) {
    try {
      return this->getObject(index, ERR_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inform Person Indicator
   */

  CWE* getERR_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ERR_9);
  }

  CWE* getInformPersonIndicator(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ERR_9);
  }

  bool isERR_9(size_t index = 0) {
    try {
      return this->getObject(index, ERR_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInformPersonIndicator(size_t index = 0) {
    try {
      return this->getObject(index, ERR_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Override Type
   */

  CWE* getERR_10(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ERR_10);
  }

  CWE* getOverrideType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ERR_10);
  }

  bool isERR_10(size_t index = 0) {
    try {
      return this->getObject(index, ERR_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOverrideType(size_t index = 0) {
    try {
      return this->getObject(index, ERR_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Override Reason Code
   */

  CWE* getERR_11(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ERR_11);
  }

  CWE* getOverrideReasonCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ERR_11);
  }

  bool isERR_11(size_t index = 0) {
    try {
      return this->getObject(index, ERR_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOverrideReasonCode(size_t index = 0) {
    try {
      return this->getObject(index, ERR_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Help Desk Contact Point
   */

  XTN* getERR_12(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, ERR_12);
  }

  XTN* getHelpDeskContactPoint(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, ERR_12);
  }

  bool isERR_12(size_t index = 0) {
    try {
      return this->getObject(index, ERR_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHelpDeskContactPoint(size_t index = 0) {
    try {
      return this->getObject(index, ERR_12) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ERR */

} /* End of namespace HL7_29 */
#endif /* __ERR_v29_H__ */
