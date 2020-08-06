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


#ifndef __PDA_v29_H__
#define __PDA_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DR.h"
#include "../datatype/DTM.h"
#include "../datatype/ID.h"
#include "../datatype/PL.h"
#include "../datatype/XCN.h"

namespace HL7_29 {

/* PDA */
class PDA : public HL7Segment {
 public:
  PDA() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PDA_1,
    PDA_2,
    PDA_3,
    PDA_4,
    PDA_5,
    PDA_6,
    PDA_7,
    PDA_8,
    PDA_9,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PDA"; }
  PDA* create() const { return new PDA(); }

 private:
  void init() {
    setName("PDA");
    /* Init members */
    addObject<CWE>(PDA_1, "PDA.1", HL7::initialized, HL7::repetition_off);
    addObject<PL>(PDA_2, "PDA.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PDA_3, "PDA.3", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PDA_4, "PDA.4", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(PDA_5, "PDA.5", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PDA_6, "PDA.6", HL7::initialized, HL7::repetition_off);
    addObject<DR>(PDA_7, "PDA.7", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(PDA_8, "PDA.8", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PDA_9, "PDA.9", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Death Cause Code
   */

  CWE* getPDA_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PDA_1);
  }

  CWE* getDeathCauseCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PDA_1);
  }

  bool isPDA_1(size_t index = 0) {
    try {
      return this->getObject(index, PDA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeathCauseCode(size_t index = 0) {
    try {
      return this->getObject(index, PDA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Death Location
   */

  PL* getPDA_2(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PDA_2);
  }

  PL* getDeathLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PDA_2);
  }

  bool isPDA_2(size_t index = 0) {
    try {
      return this->getObject(index, PDA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeathLocation(size_t index = 0) {
    try {
      return this->getObject(index, PDA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Death Certified Indicator
   */

  ID* getPDA_3(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PDA_3);
  }

  ID* getDeathCertifiedIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PDA_3);
  }

  bool isPDA_3(size_t index = 0) {
    try {
      return this->getObject(index, PDA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeathCertifiedIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PDA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Death Certificate Signed Date/Time
   */

  DTM* getPDA_4(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PDA_4);
  }

  DTM* getDeathCertificateSignedDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PDA_4);
  }

  bool isPDA_4(size_t index = 0) {
    try {
      return this->getObject(index, PDA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeathCertificateSignedDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PDA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Death Certified By
   */

  XCN* getPDA_5(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PDA_5);
  }

  XCN* getDeathCertifiedBy(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PDA_5);
  }

  bool isPDA_5(size_t index = 0) {
    try {
      return this->getObject(index, PDA_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeathCertifiedBy(size_t index = 0) {
    try {
      return this->getObject(index, PDA_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Autopsy Indicator
   */

  ID* getPDA_6(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PDA_6);
  }

  ID* getAutopsyIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PDA_6);
  }

  bool isPDA_6(size_t index = 0) {
    try {
      return this->getObject(index, PDA_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAutopsyIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PDA_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Autopsy Start and End Date/Time
   */

  DR* getPDA_7(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, PDA_7);
  }

  DR* getAutopsyStartandEndDateTime(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, PDA_7);
  }

  bool isPDA_7(size_t index = 0) {
    try {
      return this->getObject(index, PDA_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAutopsyStartandEndDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PDA_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Autopsy Performed By
   */

  XCN* getPDA_8(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PDA_8);
  }

  XCN* getAutopsyPerformedBy(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PDA_8);
  }

  bool isPDA_8(size_t index = 0) {
    try {
      return this->getObject(index, PDA_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAutopsyPerformedBy(size_t index = 0) {
    try {
      return this->getObject(index, PDA_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Coroner Indicator
   */

  ID* getPDA_9(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PDA_9);
  }

  ID* getCoronerIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PDA_9);
  }

  bool isPDA_9(size_t index = 0) {
    try {
      return this->getObject(index, PDA_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCoronerIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PDA_9) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PDA */

} /* End of namespace HL7_29 */
#endif /* __PDA_v29_H__ */
