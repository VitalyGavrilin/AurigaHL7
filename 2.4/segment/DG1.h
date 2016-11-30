/*
 * This file is part of HCPPL.
 *
 * HCPPL is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * HCPPL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with HCPPL.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __DG1_v24_H__
#define __DG1_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0051.h"
#include "../datatype/CE_0055.h"
#include "../datatype/CE_0083.h"
#include "../datatype/CE_0118.h"
#include "../datatype/CP.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/NM.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"
#include "../datatype/XCN.h"

namespace HL7_24 {

/* Diagnosis */
class DG1 : public HL7Segment {
 public:
  DG1() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    DG1_1,
    DG1_2,
    DG1_3,
    DG1_4,
    DG1_5,
    DG1_6,
    DG1_7,
    DG1_8,
    DG1_9,
    DG1_10,
    DG1_11,
    DG1_12,
    DG1_13,
    DG1_14,
    DG1_15,
    DG1_16,
    DG1_17,
    DG1_18,
    DG1_19,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "DG1"; }
  DG1* create() const { return new DG1(); }

 private:
  void init() {
    setName("DG1");
    /* Init members */
    addObject<SI>(DG1_1, "DG1.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(DG1_2, "DG1.2", HL7::initialized, HL7::repetition_off);
    addObject<CE_0051>(DG1_3, "DG1.3", HL7::optional, HL7::repetition_off);
    addObject<ST>(DG1_4, "DG1.4", HL7::optional, HL7::repetition_off);
    addObject<TS>(DG1_5, "DG1.5", HL7::optional, HL7::repetition_off);
    addObject<IS>(DG1_6, "DG1.6", HL7::initialized, HL7::repetition_off);
    addObject<CE_0118>(DG1_7, "DG1.7", HL7::optional, HL7::repetition_off);
    addObject<CE_0055>(DG1_8, "DG1.8", HL7::optional, HL7::repetition_off);
    addObject<ID>(DG1_9, "DG1.9", HL7::optional, HL7::repetition_off);
    addObject<IS>(DG1_10, "DG1.10", HL7::optional, HL7::repetition_off);
    addObject<CE_0083>(DG1_11, "DG1.11", HL7::optional, HL7::repetition_off);
    addObject<NM>(DG1_12, "DG1.12", HL7::optional, HL7::repetition_off);
    addObject<CP>(DG1_13, "DG1.13", HL7::optional, HL7::repetition_off);
    addObject<ST>(DG1_14, "DG1.14", HL7::optional, HL7::repetition_off);
    addObject<ID>(DG1_15, "DG1.15", HL7::optional, HL7::repetition_off);
    addObject<XCN>(DG1_16, "DG1.16", HL7::optional, HL7::repetition_on);
    addObject<IS>(DG1_17, "DG1.17", HL7::optional, HL7::repetition_off);
    addObject<ID>(DG1_18, "DG1.18", HL7::optional, HL7::repetition_off);
    addObject<TS>(DG1_19, "DG1.19", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - DG1
   */

  SI* getDG1_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, DG1_1);
  }

  SI* getSetIDDG1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, DG1_1);
  }

  bool isDG1_1(size_t index = 0) {
    try {
      return this->getObject(index, DG1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDDG1(size_t index = 0) {
    try {
      return this->getObject(index, DG1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diagnosis Coding Method
   */

  ID* getDG1_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DG1_2);
  }

  ID* getDiagnosisCodingMethod(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DG1_2);
  }

  bool isDG1_2(size_t index = 0) {
    try {
      return this->getObject(index, DG1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosisCodingMethod(size_t index = 0) {
    try {
      return this->getObject(index, DG1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diagnosis Code - DG1
   */

  CE_0051* getDG1_3(size_t index = 0) {
    return (CE_0051*)this->getObjectSafe(index, DG1_3);
  }

  CE_0051* getDiagnosisCodeDG1(size_t index = 0) {
    return (CE_0051*)this->getObjectSafe(index, DG1_3);
  }

  bool isDG1_3(size_t index = 0) {
    try {
      return this->getObject(index, DG1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosisCodeDG1(size_t index = 0) {
    try {
      return this->getObject(index, DG1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diagnosis Description
   */

  ST* getDG1_4(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DG1_4);
  }

  ST* getDiagnosisDescription(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DG1_4);
  }

  bool isDG1_4(size_t index = 0) {
    try {
      return this->getObject(index, DG1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosisDescription(size_t index = 0) {
    try {
      return this->getObject(index, DG1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diagnosis Date/Time
   */

  TS* getDG1_5(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, DG1_5);
  }

  TS* getDiagnosisDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, DG1_5);
  }

  bool isDG1_5(size_t index = 0) {
    try {
      return this->getObject(index, DG1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosisDateTime(size_t index = 0) {
    try {
      return this->getObject(index, DG1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diagnosis Type
   */

  IS* getDG1_6(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, DG1_6);
  }

  IS* getDiagnosisType(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, DG1_6);
  }

  bool isDG1_6(size_t index = 0) {
    try {
      return this->getObject(index, DG1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosisType(size_t index = 0) {
    try {
      return this->getObject(index, DG1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Major Diagnostic Category
   */

  CE_0118* getDG1_7(size_t index = 0) {
    return (CE_0118*)this->getObjectSafe(index, DG1_7);
  }

  CE_0118* getMajorDiagnosticCategory(size_t index = 0) {
    return (CE_0118*)this->getObjectSafe(index, DG1_7);
  }

  bool isDG1_7(size_t index = 0) {
    try {
      return this->getObject(index, DG1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMajorDiagnosticCategory(size_t index = 0) {
    try {
      return this->getObject(index, DG1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diagnostic Related Group
   */

  CE_0055* getDG1_8(size_t index = 0) {
    return (CE_0055*)this->getObjectSafe(index, DG1_8);
  }

  CE_0055* getDiagnosticRelatedGroup(size_t index = 0) {
    return (CE_0055*)this->getObjectSafe(index, DG1_8);
  }

  bool isDG1_8(size_t index = 0) {
    try {
      return this->getObject(index, DG1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosticRelatedGroup(size_t index = 0) {
    try {
      return this->getObject(index, DG1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DRG Approval Indicator
   */

  ID* getDG1_9(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DG1_9);
  }

  ID* getDRGApprovalIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DG1_9);
  }

  bool isDG1_9(size_t index = 0) {
    try {
      return this->getObject(index, DG1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDRGApprovalIndicator(size_t index = 0) {
    try {
      return this->getObject(index, DG1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DRG Grouper Review Code
   */

  IS* getDG1_10(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, DG1_10);
  }

  IS* getDRGGrouperReviewCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, DG1_10);
  }

  bool isDG1_10(size_t index = 0) {
    try {
      return this->getObject(index, DG1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDRGGrouperReviewCode(size_t index = 0) {
    try {
      return this->getObject(index, DG1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Outlier Type
   */

  CE_0083* getDG1_11(size_t index = 0) {
    return (CE_0083*)this->getObjectSafe(index, DG1_11);
  }

  CE_0083* getOutlierType(size_t index = 0) {
    return (CE_0083*)this->getObjectSafe(index, DG1_11);
  }

  bool isDG1_11(size_t index = 0) {
    try {
      return this->getObject(index, DG1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOutlierType(size_t index = 0) {
    try {
      return this->getObject(index, DG1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Outlier Days
   */

  NM* getDG1_12(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, DG1_12);
  }

  NM* getOutlierDays(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, DG1_12);
  }

  bool isDG1_12(size_t index = 0) {
    try {
      return this->getObject(index, DG1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOutlierDays(size_t index = 0) {
    try {
      return this->getObject(index, DG1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Outlier Cost
   */

  CP* getDG1_13(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, DG1_13);
  }

  CP* getOutlierCost(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, DG1_13);
  }

  bool isDG1_13(size_t index = 0) {
    try {
      return this->getObject(index, DG1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOutlierCost(size_t index = 0) {
    try {
      return this->getObject(index, DG1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Grouper Version And Type
   */

  ST* getDG1_14(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DG1_14);
  }

  ST* getGrouperVersionAndType(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DG1_14);
  }

  bool isDG1_14(size_t index = 0) {
    try {
      return this->getObject(index, DG1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGrouperVersionAndType(size_t index = 0) {
    try {
      return this->getObject(index, DG1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diagnosis Priority
   */

  ID* getDG1_15(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DG1_15);
  }

  ID* getDiagnosisPriority(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DG1_15);
  }

  bool isDG1_15(size_t index = 0) {
    try {
      return this->getObject(index, DG1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosisPriority(size_t index = 0) {
    try {
      return this->getObject(index, DG1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diagnosing Clinician
   */

  XCN* getDG1_16(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, DG1_16);
  }

  XCN* getDiagnosingClinician(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, DG1_16);
  }

  bool isDG1_16(size_t index = 0) {
    try {
      return this->getObject(index, DG1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosingClinician(size_t index = 0) {
    try {
      return this->getObject(index, DG1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diagnosis Classification
   */

  IS* getDG1_17(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, DG1_17);
  }

  IS* getDiagnosisClassification(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, DG1_17);
  }

  bool isDG1_17(size_t index = 0) {
    try {
      return this->getObject(index, DG1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosisClassification(size_t index = 0) {
    try {
      return this->getObject(index, DG1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Confidential Indicator
   */

  ID* getDG1_18(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DG1_18);
  }

  ID* getConfidentialIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DG1_18);
  }

  bool isDG1_18(size_t index = 0) {
    try {
      return this->getObject(index, DG1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConfidentialIndicator(size_t index = 0) {
    try {
      return this->getObject(index, DG1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Attestation Date/Time
   */

  TS* getDG1_19(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, DG1_19);
  }

  TS* getAttestationDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, DG1_19);
  }

  bool isDG1_19(size_t index = 0) {
    try {
      return this->getObject(index, DG1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAttestationDateTime(size_t index = 0) {
    try {
      return this->getObject(index, DG1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of DG1 */

} /* End of namespace HL7_24 */
#endif /* __DG1_v24_H__ */
