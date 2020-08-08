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


#ifndef __CSR_v29_H__
#define __CSR_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/CX.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/XCN.h"

namespace HL7_29 {

/* CSR */
class CSR : public HL7Segment {
 public:
  CSR() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    CSR_1,
    CSR_2,
    CSR_3,
    CSR_4,
    CSR_5,
    CSR_6,
    CSR_7,
    CSR_8,
    CSR_9,
    CSR_10,
    CSR_11,
    CSR_12,
    CSR_13,
    CSR_14,
    CSR_15,
    CSR_16,
    CSR_17,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "CSR"; }
  CSR* create() const { return new CSR(); }

 private:
  void init() {
    setName("CSR");
    /* Init members */
    addObject<EI>(CSR_1, "CSR.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(CSR_2, "CSR.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CSR_3, "CSR.3", HL7::initialized, HL7::repetition_off);
    addObject<CX>(CSR_4, "CSR.4", HL7::initialized, HL7::repetition_off);
    addObject<CX>(CSR_5, "CSR.5", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CSR_6, "CSR.6", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(CSR_7, "CSR.7", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(CSR_8, "CSR.8", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CSR_9, "CSR.9", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CSR_10, "CSR.10", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CSR_11, "CSR.11", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CSR_12, "CSR.12", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CSR_13, "CSR.13", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CSR_14, "CSR.14", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CSR_15, "CSR.15", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CSR_16, "CSR.16", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CSR_17, "CSR.17", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Sponsor Study ID
   */

  EI* getCSR_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, CSR_1);
  }

  EI* getSponsorStudyID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, CSR_1);
  }

  bool isCSR_1(size_t index = 0) {
    try {
      return this->getObject(index, CSR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSponsorStudyID(size_t index = 0) {
    try {
      return this->getObject(index, CSR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Study ID
   */

  EI* getCSR_2(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, CSR_2);
  }

  EI* getAlternateStudyID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, CSR_2);
  }

  bool isCSR_2(size_t index = 0) {
    try {
      return this->getObject(index, CSR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateStudyID(size_t index = 0) {
    try {
      return this->getObject(index, CSR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Institution Registering the Patient
   */

  CWE* getCSR_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CSR_3);
  }

  CWE* getInstitutionRegisteringthePatient(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CSR_3);
  }

  bool isCSR_3(size_t index = 0) {
    try {
      return this->getObject(index, CSR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInstitutionRegisteringthePatient(size_t index = 0) {
    try {
      return this->getObject(index, CSR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sponsor Patient ID
   */

  CX* getCSR_4(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, CSR_4);
  }

  CX* getSponsorPatientID(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, CSR_4);
  }

  bool isCSR_4(size_t index = 0) {
    try {
      return this->getObject(index, CSR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSponsorPatientID(size_t index = 0) {
    try {
      return this->getObject(index, CSR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Patient ID - CSR
   */

  CX* getCSR_5(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, CSR_5);
  }

  CX* getAlternatePatientIDCSR(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, CSR_5);
  }

  bool isCSR_5(size_t index = 0) {
    try {
      return this->getObject(index, CSR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternatePatientIDCSR(size_t index = 0) {
    try {
      return this->getObject(index, CSR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time of Patient Study Registration
   */

  DTM* getCSR_6(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CSR_6);
  }

  DTM* getDateTimeofPatientStudyRegistration(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CSR_6);
  }

  bool isCSR_6(size_t index = 0) {
    try {
      return this->getObject(index, CSR_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeofPatientStudyRegistration(size_t index = 0) {
    try {
      return this->getObject(index, CSR_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Person Performing Study Registration
   */

  XCN* getCSR_7(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, CSR_7);
  }

  XCN* getPersonPerformingStudyRegistration(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, CSR_7);
  }

  bool isCSR_7(size_t index = 0) {
    try {
      return this->getObject(index, CSR_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPersonPerformingStudyRegistration(size_t index = 0) {
    try {
      return this->getObject(index, CSR_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Study Authorizing Provider
   */

  XCN* getCSR_8(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, CSR_8);
  }

  XCN* getStudyAuthorizingProvider(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, CSR_8);
  }

  bool isCSR_8(size_t index = 0) {
    try {
      return this->getObject(index, CSR_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStudyAuthorizingProvider(size_t index = 0) {
    try {
      return this->getObject(index, CSR_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time Patient Study Consent Signed
   */

  DTM* getCSR_9(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CSR_9);
  }

  DTM* getDateTimePatientStudyConsentSigned(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CSR_9);
  }

  bool isCSR_9(size_t index = 0) {
    try {
      return this->getObject(index, CSR_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimePatientStudyConsentSigned(size_t index = 0) {
    try {
      return this->getObject(index, CSR_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Study Eligibility Status
   */

  CWE* getCSR_10(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CSR_10);
  }

  CWE* getPatientStudyEligibilityStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CSR_10);
  }

  bool isCSR_10(size_t index = 0) {
    try {
      return this->getObject(index, CSR_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientStudyEligibilityStatus(size_t index = 0) {
    try {
      return this->getObject(index, CSR_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Study Randomization Date/time
   */

  DTM* getCSR_11(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CSR_11);
  }

  DTM* getStudyRandomizationDatetime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CSR_11);
  }

  bool isCSR_11(size_t index = 0) {
    try {
      return this->getObject(index, CSR_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStudyRandomizationDatetime(size_t index = 0) {
    try {
      return this->getObject(index, CSR_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Randomized Study Arm
   */

  CWE* getCSR_12(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CSR_12);
  }

  CWE* getRandomizedStudyArm(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CSR_12);
  }

  bool isCSR_12(size_t index = 0) {
    try {
      return this->getObject(index, CSR_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRandomizedStudyArm(size_t index = 0) {
    try {
      return this->getObject(index, CSR_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Stratum for Study Randomization
   */

  CWE* getCSR_13(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CSR_13);
  }

  CWE* getStratumforStudyRandomization(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CSR_13);
  }

  bool isCSR_13(size_t index = 0) {
    try {
      return this->getObject(index, CSR_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStratumforStudyRandomization(size_t index = 0) {
    try {
      return this->getObject(index, CSR_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Evaluability Status
   */

  CWE* getCSR_14(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CSR_14);
  }

  CWE* getPatientEvaluabilityStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CSR_14);
  }

  bool isCSR_14(size_t index = 0) {
    try {
      return this->getObject(index, CSR_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientEvaluabilityStatus(size_t index = 0) {
    try {
      return this->getObject(index, CSR_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time Ended Study
   */

  DTM* getCSR_15(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CSR_15);
  }

  DTM* getDateTimeEndedStudy(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CSR_15);
  }

  bool isCSR_15(size_t index = 0) {
    try {
      return this->getObject(index, CSR_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeEndedStudy(size_t index = 0) {
    try {
      return this->getObject(index, CSR_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reason Ended Study
   */

  CWE* getCSR_16(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CSR_16);
  }

  CWE* getReasonEndedStudy(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CSR_16);
  }

  bool isCSR_16(size_t index = 0) {
    try {
      return this->getObject(index, CSR_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReasonEndedStudy(size_t index = 0) {
    try {
      return this->getObject(index, CSR_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code
   */

  ID* getCSR_17(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, CSR_17);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, CSR_17);
  }

  bool isCSR_17(size_t index = 0) {
    try {
      return this->getObject(index, CSR_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, CSR_17) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of CSR */

} /* End of namespace HL7_29 */
#endif /* __CSR_v29_H__ */
