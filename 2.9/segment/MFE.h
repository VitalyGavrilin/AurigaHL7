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


#ifndef __MFE_v29_H__
#define __MFE_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"
#include "../datatype/XCN.h"

namespace HL7_29 {

/* MFE */
class MFE : public HL7Segment {
 public:
  MFE() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    MFE_1,
    MFE_2,
    MFE_3,
    MFE_4,
    MFE_5,
    MFE_6,
    MFE_7,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "MFE"; }
  MFE* create() const { return new MFE(); }

 private:
  void init() {
    setName("MFE");
    /* Init members */
    addObject<ID>(MFE_1, "MFE.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(MFE_2, "MFE.2", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(MFE_3, "MFE.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(MFE_4, "MFE.4", HL7::initialized, HL7::repetition_off);
    addObject<ID>(MFE_5, "MFE.5", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(MFE_6, "MFE.6", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(MFE_7, "MFE.7", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Record-Level Event Code
   */

  ID* getMFE_1(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MFE_1);
  }

  ID* getRecordLevelEventCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MFE_1);
  }

  bool isMFE_1(size_t index = 0) {
    try {
      return this->getObject(index, MFE_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRecordLevelEventCode(size_t index = 0) {
    try {
      return this->getObject(index, MFE_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * MFN Control ID
   */

  ST* getMFE_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MFE_2);
  }

  ST* getMFNControlID(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MFE_2);
  }

  bool isMFE_2(size_t index = 0) {
    try {
      return this->getObject(index, MFE_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMFNControlID(size_t index = 0) {
    try {
      return this->getObject(index, MFE_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Date/Time
   */

  DTM* getMFE_3(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, MFE_3);
  }

  DTM* getEffectiveDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, MFE_3);
  }

  bool isMFE_3(size_t index = 0) {
    try {
      return this->getObject(index, MFE_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveDateTime(size_t index = 0) {
    try {
      return this->getObject(index, MFE_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Key Value - MFE
   */

  CWE* getMFE_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, MFE_4);
  }

  CWE* getPrimaryKeyValueMFE(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, MFE_4);
  }

  bool isMFE_4(size_t index = 0) {
    try {
      return this->getObject(index, MFE_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryKeyValueMFE(size_t index = 0) {
    try {
      return this->getObject(index, MFE_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Key Value Type
   */

  ID* getMFE_5(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MFE_5);
  }

  ID* getPrimaryKeyValueType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MFE_5);
  }

  bool isMFE_5(size_t index = 0) {
    try {
      return this->getObject(index, MFE_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryKeyValueType(size_t index = 0) {
    try {
      return this->getObject(index, MFE_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entered Date/Time
   */

  DTM* getMFE_6(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, MFE_6);
  }

  DTM* getEnteredDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, MFE_6);
  }

  bool isMFE_6(size_t index = 0) {
    try {
      return this->getObject(index, MFE_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteredDateTime(size_t index = 0) {
    try {
      return this->getObject(index, MFE_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entered By
   */

  XCN* getMFE_7(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, MFE_7);
  }

  XCN* getEnteredBy(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, MFE_7);
  }

  bool isMFE_7(size_t index = 0) {
    try {
      return this->getObject(index, MFE_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteredBy(size_t index = 0) {
    try {
      return this->getObject(index, MFE_7) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of MFE */

} /* End of namespace HL7_29 */
#endif /* __MFE_v29_H__ */
