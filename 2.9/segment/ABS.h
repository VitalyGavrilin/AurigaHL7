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


#ifndef __ABS_v29_H__
#define __ABS_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/XCN.h"

namespace HL7_29 {

/* ABS */
class ABS : public HL7Segment {
 public:
  ABS() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    ABS_1,
    ABS_2,
    ABS_3,
    ABS_4,
    ABS_5,
    ABS_6,
    ABS_7,
    ABS_8,
    ABS_9,
    ABS_10,
    ABS_11,
    ABS_12,
    ABS_13,
    ABS_14,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "ABS"; }
  ABS* create() const { return new ABS(); }

 private:
  void init() {
    setName("ABS");
    /* Init members */
    addObject<XCN>(ABS_1, "ABS.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ABS_2, "ABS.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ABS_3, "ABS.3", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(ABS_4, "ABS.4", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(ABS_5, "ABS.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ABS_6, "ABS.6", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(ABS_7, "ABS.7", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(ABS_8, "ABS.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ABS_9, "ABS.9", HL7::initialized, HL7::repetition_off);
    addObject<ID>(ABS_10, "ABS.10", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ABS_11, "ABS.11", HL7::initialized, HL7::repetition_off);
    addObject<NM>(ABS_12, "ABS.12", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ABS_13, "ABS.13", HL7::initialized, HL7::repetition_off);
    addObject<ID>(ABS_14, "ABS.14", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Discharge Care Provider
   */

  XCN* getABS_1(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ABS_1);
  }

  XCN* getDischargeCareProvider(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ABS_1);
  }

  bool isABS_1(size_t index = 0) {
    try {
      return this->getObject(index, ABS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDischargeCareProvider(size_t index = 0) {
    try {
      return this->getObject(index, ABS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transfer Medical Service Code
   */

  CWE* getABS_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ABS_2);
  }

  CWE* getTransferMedicalServiceCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ABS_2);
  }

  bool isABS_2(size_t index = 0) {
    try {
      return this->getObject(index, ABS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransferMedicalServiceCode(size_t index = 0) {
    try {
      return this->getObject(index, ABS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Severity of Illness Code
   */

  CWE* getABS_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ABS_3);
  }

  CWE* getSeverityofIllnessCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ABS_3);
  }

  bool isABS_3(size_t index = 0) {
    try {
      return this->getObject(index, ABS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSeverityofIllnessCode(size_t index = 0) {
    try {
      return this->getObject(index, ABS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time of Attestation
   */

  DTM* getABS_4(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ABS_4);
  }

  DTM* getDateTimeofAttestation(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ABS_4);
  }

  bool isABS_4(size_t index = 0) {
    try {
      return this->getObject(index, ABS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeofAttestation(size_t index = 0) {
    try {
      return this->getObject(index, ABS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Attested By
   */

  XCN* getABS_5(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ABS_5);
  }

  XCN* getAttestedBy(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ABS_5);
  }

  bool isABS_5(size_t index = 0) {
    try {
      return this->getObject(index, ABS_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAttestedBy(size_t index = 0) {
    try {
      return this->getObject(index, ABS_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Triage Code
   */

  CWE* getABS_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ABS_6);
  }

  CWE* getTriageCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ABS_6);
  }

  bool isABS_6(size_t index = 0) {
    try {
      return this->getObject(index, ABS_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTriageCode(size_t index = 0) {
    try {
      return this->getObject(index, ABS_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Abstract Completion Date/Time
   */

  DTM* getABS_7(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ABS_7);
  }

  DTM* getAbstractCompletionDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ABS_7);
  }

  bool isABS_7(size_t index = 0) {
    try {
      return this->getObject(index, ABS_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAbstractCompletionDateTime(size_t index = 0) {
    try {
      return this->getObject(index, ABS_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Abstracted By
   */

  XCN* getABS_8(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ABS_8);
  }

  XCN* getAbstractedBy(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ABS_8);
  }

  bool isABS_8(size_t index = 0) {
    try {
      return this->getObject(index, ABS_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAbstractedBy(size_t index = 0) {
    try {
      return this->getObject(index, ABS_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Case Category Code
   */

  CWE* getABS_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ABS_9);
  }

  CWE* getCaseCategoryCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ABS_9);
  }

  bool isABS_9(size_t index = 0) {
    try {
      return this->getObject(index, ABS_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCaseCategoryCode(size_t index = 0) {
    try {
      return this->getObject(index, ABS_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Caesarian Section Indicator
   */

  ID* getABS_10(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ABS_10);
  }

  ID* getCaesarianSectionIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ABS_10);
  }

  bool isABS_10(size_t index = 0) {
    try {
      return this->getObject(index, ABS_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCaesarianSectionIndicator(size_t index = 0) {
    try {
      return this->getObject(index, ABS_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Gestation Category Code
   */

  CWE* getABS_11(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ABS_11);
  }

  CWE* getGestationCategoryCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ABS_11);
  }

  bool isABS_11(size_t index = 0) {
    try {
      return this->getObject(index, ABS_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGestationCategoryCode(size_t index = 0) {
    try {
      return this->getObject(index, ABS_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Gestation Period - Weeks
   */

  NM* getABS_12(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ABS_12);
  }

  NM* getGestationPeriodWeeks(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ABS_12);
  }

  bool isABS_12(size_t index = 0) {
    try {
      return this->getObject(index, ABS_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGestationPeriodWeeks(size_t index = 0) {
    try {
      return this->getObject(index, ABS_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Newborn Code
   */

  CWE* getABS_13(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ABS_13);
  }

  CWE* getNewbornCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ABS_13);
  }

  bool isABS_13(size_t index = 0) {
    try {
      return this->getObject(index, ABS_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNewbornCode(size_t index = 0) {
    try {
      return this->getObject(index, ABS_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Stillborn Indicator
   */

  ID* getABS_14(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ABS_14);
  }

  ID* getStillbornIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ABS_14);
  }

  bool isABS_14(size_t index = 0) {
    try {
      return this->getObject(index, ABS_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStillbornIndicator(size_t index = 0) {
    try {
      return this->getObject(index, ABS_14) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ABS */

} /* End of namespace HL7_29 */
#endif /* __ABS_v29_H__ */
