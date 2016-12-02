/*
 * This file is part of Auriga HL7 library.
 *
 * Auriga HL7 library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Auriga HL7 library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Auriga HL7 library.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __CSR_v24_H__
#define __CSR_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CX.h"
#include "../datatype/EI.h"
#include "../datatype/TS.h"
#include "../datatype/XCN.h"

namespace HL7_24 {

/* Clinical Study Registration */
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
    addObject<EI>(CSR_2, "CSR.2", HL7::optional, HL7::repetition_off);
    addObject<CE>(CSR_3, "CSR.3", HL7::optional, HL7::repetition_off);
    addObject<CX>(CSR_4, "CSR.4", HL7::initialized, HL7::repetition_off);
    addObject<CX>(CSR_5, "CSR.5", HL7::optional, HL7::repetition_off);
    addObject<TS>(CSR_6, "CSR.6", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(CSR_7, "CSR.7", HL7::optional, HL7::repetition_on);
    addObject<XCN>(CSR_8, "CSR.8", HL7::initialized, HL7::repetition_on);
    addObject<TS>(CSR_9, "CSR.9", HL7::conditional, HL7::repetition_off);
    addObject<CE>(CSR_10, "CSR.10", HL7::conditional, HL7::repetition_off);
    addObject<TS>(CSR_11, "CSR.11", HL7::optional, HL7::repetition_on);
    addObject<CE>(CSR_12, "CSR.12", HL7::optional, HL7::repetition_on);
    addObject<CE>(CSR_13, "CSR.13", HL7::optional, HL7::repetition_on);
    addObject<CE>(CSR_14, "CSR.14", HL7::conditional, HL7::repetition_off);
    addObject<TS>(CSR_15, "CSR.15", HL7::conditional, HL7::repetition_off);
    addObject<CE>(CSR_16, "CSR.16", HL7::conditional, HL7::repetition_off);
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

  CE* getCSR_3(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CSR_3);
  }

  CE* getInstitutionRegisteringThePatient(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CSR_3);
  }

  bool isCSR_3(size_t index = 0) {
    try {
      return this->getObject(index, CSR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInstitutionRegisteringThePatient(size_t index = 0) {
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
   * Date/Time Of Patient Study Registration
   */

  TS* getCSR_6(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, CSR_6);
  }

  TS* getDateTimeOfPatientStudyRegistration(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, CSR_6);
  }

  bool isCSR_6(size_t index = 0) {
    try {
      return this->getObject(index, CSR_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeOfPatientStudyRegistration(size_t index = 0) {
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
   * Date/time Patient Study Consent Signed
   */

  TS* getCSR_9(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, CSR_9);
  }

  TS* getDateTimePatientStudyConsentSigned(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, CSR_9);
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

  CE* getCSR_10(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CSR_10);
  }

  CE* getPatientStudyEligibilityStatus(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CSR_10);
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

  TS* getCSR_11(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, CSR_11);
  }

  TS* getStudyRandomizationDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, CSR_11);
  }

  bool isCSR_11(size_t index = 0) {
    try {
      return this->getObject(index, CSR_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStudyRandomizationDateTime(size_t index = 0) {
    try {
      return this->getObject(index, CSR_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Randomized Study Arm
   */

  CE* getCSR_12(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CSR_12);
  }

  CE* getRandomizedStudyArm(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CSR_12);
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

  CE* getCSR_13(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CSR_13);
  }

  CE* getStratumForStudyRandomization(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CSR_13);
  }

  bool isCSR_13(size_t index = 0) {
    try {
      return this->getObject(index, CSR_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStratumForStudyRandomization(size_t index = 0) {
    try {
      return this->getObject(index, CSR_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Evaluability Status
   */

  CE* getCSR_14(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CSR_14);
  }

  CE* getPatientEvaluabilityStatus(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CSR_14);
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
   * Date/time Ended Study
   */

  TS* getCSR_15(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, CSR_15);
  }

  TS* getDateTimeEndedStudy(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, CSR_15);
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

  CE* getCSR_16(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CSR_16);
  }

  CE* getReasonEndedStudy(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CSR_16);
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

}; /* End of CSR */

} /* End of namespace HL7_24 */
#endif /* __CSR_v24_H__ */
