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


#ifndef __IPC_v29_H__
#define __IPC_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* IPC */
class IPC : public HL7Segment {
 public:
  IPC() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    IPC_1,
    IPC_2,
    IPC_3,
    IPC_4,
    IPC_5,
    IPC_6,
    IPC_7,
    IPC_8,
    IPC_9,
    IPC_10,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "IPC"; }
  IPC* create() const { return new IPC(); }

 private:
  void init() {
    setName("IPC");
    /* Init members */
    addObject<EI>(IPC_1, "IPC.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(IPC_2, "IPC.2", HL7::initialized, HL7::repetition_off);
    addObject<EI>(IPC_3, "IPC.3", HL7::initialized, HL7::repetition_off);
    addObject<EI>(IPC_4, "IPC.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IPC_5, "IPC.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IPC_6, "IPC.6", HL7::initialized, HL7::repetition_off);
    addObject<EI>(IPC_7, "IPC.7", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(IPC_8, "IPC.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IPC_9, "IPC.9", HL7::initialized, HL7::repetition_off);
    addObject<ID>(IPC_10, "IPC.10", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Accession Identifier
   */

  EI* getIPC_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IPC_1);
  }

  EI* getAccessionIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IPC_1);
  }

  bool isIPC_1(size_t index = 0) {
    try {
      return this->getObject(index, IPC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccessionIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, IPC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Procedure ID
   */

  EI* getIPC_2(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IPC_2);
  }

  EI* getRequestedProcedureID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IPC_2);
  }

  bool isIPC_2(size_t index = 0) {
    try {
      return this->getObject(index, IPC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedProcedureID(size_t index = 0) {
    try {
      return this->getObject(index, IPC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Study Instance UID
   */

  EI* getIPC_3(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IPC_3);
  }

  EI* getStudyInstanceUID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IPC_3);
  }

  bool isIPC_3(size_t index = 0) {
    try {
      return this->getObject(index, IPC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStudyInstanceUID(size_t index = 0) {
    try {
      return this->getObject(index, IPC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Scheduled Procedure Step ID
   */

  EI* getIPC_4(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IPC_4);
  }

  EI* getScheduledProcedureStepID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IPC_4);
  }

  bool isIPC_4(size_t index = 0) {
    try {
      return this->getObject(index, IPC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isScheduledProcedureStepID(size_t index = 0) {
    try {
      return this->getObject(index, IPC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Modality
   */

  CWE* getIPC_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IPC_5);
  }

  CWE* getModality(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IPC_5);
  }

  bool isIPC_5(size_t index = 0) {
    try {
      return this->getObject(index, IPC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isModality(size_t index = 0) {
    try {
      return this->getObject(index, IPC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Protocol Code
   */

  CWE* getIPC_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IPC_6);
  }

  CWE* getProtocolCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IPC_6);
  }

  bool isIPC_6(size_t index = 0) {
    try {
      return this->getObject(index, IPC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProtocolCode(size_t index = 0) {
    try {
      return this->getObject(index, IPC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Scheduled Station Name
   */

  EI* getIPC_7(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IPC_7);
  }

  EI* getScheduledStationName(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IPC_7);
  }

  bool isIPC_7(size_t index = 0) {
    try {
      return this->getObject(index, IPC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isScheduledStationName(size_t index = 0) {
    try {
      return this->getObject(index, IPC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Scheduled Procedure Step Location
   */

  CWE* getIPC_8(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IPC_8);
  }

  CWE* getScheduledProcedureStepLocation(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, IPC_8);
  }

  bool isIPC_8(size_t index = 0) {
    try {
      return this->getObject(index, IPC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isScheduledProcedureStepLocation(size_t index = 0) {
    try {
      return this->getObject(index, IPC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Scheduled Station AE Title
   */

  ST* getIPC_9(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IPC_9);
  }

  ST* getScheduledStationAETitle(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IPC_9);
  }

  bool isIPC_9(size_t index = 0) {
    try {
      return this->getObject(index, IPC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isScheduledStationAETitle(size_t index = 0) {
    try {
      return this->getObject(index, IPC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code
   */

  ID* getIPC_10(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IPC_10);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IPC_10);
  }

  bool isIPC_10(size_t index = 0) {
    try {
      return this->getObject(index, IPC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, IPC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of IPC */

} /* End of namespace HL7_29 */
#endif /* __IPC_v29_H__ */
