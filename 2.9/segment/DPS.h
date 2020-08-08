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


#ifndef __DPS_v29_H__
#define __DPS_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"

namespace HL7_29 {

/* DPS */
class DPS : public HL7Segment {
 public:
  DPS() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    DPS_1,
    DPS_2,
    DPS_3,
    DPS_4,
    DPS_5,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "DPS"; }
  DPS* create() const { return new DPS(); }

 private:
  void init() {
    setName("DPS");
    /* Init members */
    addObject<CWE>(DPS_1, "DPS.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DPS_2, "DPS.2", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(DPS_3, "DPS.3", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(DPS_4, "DPS.4", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(DPS_5, "DPS.5", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Diagnosis Code - MCP
   */

  CWE* getDPS_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DPS_1);
  }

  CWE* getDiagnosisCodeMCP(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DPS_1);
  }

  bool isDPS_1(size_t index = 0) {
    try {
      return this->getObject(index, DPS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosisCodeMCP(size_t index = 0) {
    try {
      return this->getObject(index, DPS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Code
   */

  CWE* getDPS_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DPS_2);
  }

  CWE* getProcedureCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DPS_2);
  }

  bool isDPS_2(size_t index = 0) {
    try {
      return this->getObject(index, DPS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureCode(size_t index = 0) {
    try {
      return this->getObject(index, DPS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Date/Time
   */

  DTM* getDPS_3(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, DPS_3);
  }

  DTM* getEffectiveDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, DPS_3);
  }

  bool isDPS_3(size_t index = 0) {
    try {
      return this->getObject(index, DPS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveDateTime(size_t index = 0) {
    try {
      return this->getObject(index, DPS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expiration Date/Time
   */

  DTM* getDPS_4(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, DPS_4);
  }

  DTM* getExpirationDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, DPS_4);
  }

  bool isDPS_4(size_t index = 0) {
    try {
      return this->getObject(index, DPS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpirationDateTime(size_t index = 0) {
    try {
      return this->getObject(index, DPS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Type of Limitation
   */

  CNE* getDPS_5(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DPS_5);
  }

  CNE* getTypeofLimitation(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DPS_5);
  }

  bool isDPS_5(size_t index = 0) {
    try {
      return this->getObject(index, DPS_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTypeofLimitation(size_t index = 0) {
    try {
      return this->getObject(index, DPS_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of DPS */

} /* End of namespace HL7_29 */
#endif /* __DPS_v29_H__ */
