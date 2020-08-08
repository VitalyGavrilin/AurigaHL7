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


#ifndef __PR1_v29_H__
#define __PR1_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/PL.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* PR1 */
class PR1 : public HL7Segment {
 public:
  PR1() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PR1_1,
    PR1_2,
    PR1_3,
    PR1_4,
    PR1_5,
    PR1_6,
    PR1_7,
    PR1_8,
    PR1_9,
    PR1_10,
    PR1_11,
    PR1_12,
    PR1_13,
    PR1_14,
    PR1_15,
    PR1_16,
    PR1_17,
    PR1_18,
    PR1_19,
    PR1_20,
    PR1_21,
    PR1_22,
    PR1_23,
    PR1_24,
    PR1_25,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PR1"; }
  PR1* create() const { return new PR1(); }

 private:
  void init() {
    setName("PR1");
    /* Init members */
    addObject<SI>(PR1_1, "PR1.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PR1_2, "PR1.2", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(PR1_3, "PR1.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PR1_4, "PR1.4", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PR1_5, "PR1.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PR1_6, "PR1.6", HL7::initialized, HL7::repetition_off);
    addObject<NM>(PR1_7, "PR1.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PR1_8, "PR1.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PR1_9, "PR1.9", HL7::initialized, HL7::repetition_off);
    addObject<NM>(PR1_10, "PR1.10", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PR1_11, "PR1.11", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PR1_12, "PR1.12", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PR1_13, "PR1.13", HL7::initialized, HL7::repetition_off);
    addObject<NM>(PR1_14, "PR1.14", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PR1_15, "PR1.15", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(PR1_16, "PR1.16", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PR1_17, "PR1.17", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PR1_18, "PR1.18", HL7::initialized, HL7::repetition_off);
    addObject<EI>(PR1_19, "PR1.19", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PR1_20, "PR1.20", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PR1_21, "PR1.21", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PR1_22, "PR1.22", HL7::initialized, HL7::repetition_off);
    addObject<PL>(PR1_23, "PR1.23", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PR1_24, "PR1.24", HL7::initialized, HL7::repetition_off);
    addObject<EI>(PR1_25, "PR1.25", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - PR1
   */

  SI* getPR1_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, PR1_1);
  }

  SI* getSetIDPR1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, PR1_1);
  }

  bool isPR1_1(size_t index = 0) {
    try {
      return this->getObject(index, PR1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDPR1(size_t index = 0) {
    try {
      return this->getObject(index, PR1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Coding Method
   */

  ST* getPR1_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PR1_2);
  }

  ST* getProcedureCodingMethod(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PR1_2);
  }

  bool isPR1_2(size_t index = 0) {
    try {
      return this->getObject(index, PR1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureCodingMethod(size_t index = 0) {
    try {
      return this->getObject(index, PR1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Code
   */

  CNE* getPR1_3(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, PR1_3);
  }

  CNE* getProcedureCode(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, PR1_3);
  }

  bool isPR1_3(size_t index = 0) {
    try {
      return this->getObject(index, PR1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureCode(size_t index = 0) {
    try {
      return this->getObject(index, PR1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Description
   */

  ST* getPR1_4(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PR1_4);
  }

  ST* getProcedureDescription(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PR1_4);
  }

  bool isPR1_4(size_t index = 0) {
    try {
      return this->getObject(index, PR1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureDescription(size_t index = 0) {
    try {
      return this->getObject(index, PR1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Date/Time
   */

  DTM* getPR1_5(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PR1_5);
  }

  DTM* getProcedureDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PR1_5);
  }

  bool isPR1_5(size_t index = 0) {
    try {
      return this->getObject(index, PR1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PR1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Functional Type
   */

  CWE* getPR1_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PR1_6);
  }

  CWE* getProcedureFunctionalType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PR1_6);
  }

  bool isPR1_6(size_t index = 0) {
    try {
      return this->getObject(index, PR1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureFunctionalType(size_t index = 0) {
    try {
      return this->getObject(index, PR1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Minutes
   */

  NM* getPR1_7(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PR1_7);
  }

  NM* getProcedureMinutes(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PR1_7);
  }

  bool isPR1_7(size_t index = 0) {
    try {
      return this->getObject(index, PR1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureMinutes(size_t index = 0) {
    try {
      return this->getObject(index, PR1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Anesthesiologist
   */

  ST* getPR1_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PR1_8);
  }

  ST* getAnesthesiologist(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PR1_8);
  }

  bool isPR1_8(size_t index = 0) {
    try {
      return this->getObject(index, PR1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAnesthesiologist(size_t index = 0) {
    try {
      return this->getObject(index, PR1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Anesthesia Code
   */

  CWE* getPR1_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PR1_9);
  }

  CWE* getAnesthesiaCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PR1_9);
  }

  bool isPR1_9(size_t index = 0) {
    try {
      return this->getObject(index, PR1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAnesthesiaCode(size_t index = 0) {
    try {
      return this->getObject(index, PR1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Anesthesia Minutes
   */

  NM* getPR1_10(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PR1_10);
  }

  NM* getAnesthesiaMinutes(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PR1_10);
  }

  bool isPR1_10(size_t index = 0) {
    try {
      return this->getObject(index, PR1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAnesthesiaMinutes(size_t index = 0) {
    try {
      return this->getObject(index, PR1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Surgeon
   */

  ST* getPR1_11(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PR1_11);
  }

  ST* getSurgeon(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PR1_11);
  }

  bool isPR1_11(size_t index = 0) {
    try {
      return this->getObject(index, PR1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSurgeon(size_t index = 0) {
    try {
      return this->getObject(index, PR1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Practitioner
   */

  ST* getPR1_12(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PR1_12);
  }

  ST* getProcedurePractitioner(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PR1_12);
  }

  bool isPR1_12(size_t index = 0) {
    try {
      return this->getObject(index, PR1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedurePractitioner(size_t index = 0) {
    try {
      return this->getObject(index, PR1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consent Code
   */

  CWE* getPR1_13(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PR1_13);
  }

  CWE* getConsentCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PR1_13);
  }

  bool isPR1_13(size_t index = 0) {
    try {
      return this->getObject(index, PR1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsentCode(size_t index = 0) {
    try {
      return this->getObject(index, PR1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Priority
   */

  NM* getPR1_14(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PR1_14);
  }

  NM* getProcedurePriority(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PR1_14);
  }

  bool isPR1_14(size_t index = 0) {
    try {
      return this->getObject(index, PR1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedurePriority(size_t index = 0) {
    try {
      return this->getObject(index, PR1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Associated Diagnosis Code
   */

  CWE* getPR1_15(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PR1_15);
  }

  CWE* getAssociatedDiagnosisCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PR1_15);
  }

  bool isPR1_15(size_t index = 0) {
    try {
      return this->getObject(index, PR1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssociatedDiagnosisCode(size_t index = 0) {
    try {
      return this->getObject(index, PR1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Code Modifier
   */

  CNE* getPR1_16(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, PR1_16);
  }

  CNE* getProcedureCodeModifier(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, PR1_16);
  }

  bool isPR1_16(size_t index = 0) {
    try {
      return this->getObject(index, PR1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureCodeModifier(size_t index = 0) {
    try {
      return this->getObject(index, PR1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure DRG Type
   */

  CWE* getPR1_17(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PR1_17);
  }

  CWE* getProcedureDRGType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PR1_17);
  }

  bool isPR1_17(size_t index = 0) {
    try {
      return this->getObject(index, PR1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureDRGType(size_t index = 0) {
    try {
      return this->getObject(index, PR1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Tissue Type Code
   */

  CWE* getPR1_18(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PR1_18);
  }

  CWE* getTissueTypeCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PR1_18);
  }

  bool isPR1_18(size_t index = 0) {
    try {
      return this->getObject(index, PR1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTissueTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, PR1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Identifier
   */

  EI* getPR1_19(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PR1_19);
  }

  EI* getProcedureIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PR1_19);
  }

  bool isPR1_19(size_t index = 0) {
    try {
      return this->getObject(index, PR1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, PR1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Action Code
   */

  ID* getPR1_20(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PR1_20);
  }

  ID* getProcedureActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PR1_20);
  }

  bool isPR1_20(size_t index = 0) {
    try {
      return this->getObject(index, PR1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureActionCode(size_t index = 0) {
    try {
      return this->getObject(index, PR1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DRG Procedure Determination Status
   */

  CWE* getPR1_21(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PR1_21);
  }

  CWE* getDRGProcedureDeterminationStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PR1_21);
  }

  bool isPR1_21(size_t index = 0) {
    try {
      return this->getObject(index, PR1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDRGProcedureDeterminationStatus(size_t index = 0) {
    try {
      return this->getObject(index, PR1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DRG Procedure Relevance
   */

  CWE* getPR1_22(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PR1_22);
  }

  CWE* getDRGProcedureRelevance(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PR1_22);
  }

  bool isPR1_22(size_t index = 0) {
    try {
      return this->getObject(index, PR1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDRGProcedureRelevance(size_t index = 0) {
    try {
      return this->getObject(index, PR1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Treating Organizational Unit
   */

  PL* getPR1_23(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PR1_23);
  }

  PL* getTreatingOrganizationalUnit(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PR1_23);
  }

  bool isPR1_23(size_t index = 0) {
    try {
      return this->getObject(index, PR1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTreatingOrganizationalUnit(size_t index = 0) {
    try {
      return this->getObject(index, PR1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Respiratory Within Surgery
   */

  ID* getPR1_24(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PR1_24);
  }

  ID* getRespiratoryWithinSurgery(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PR1_24);
  }

  bool isPR1_24(size_t index = 0) {
    try {
      return this->getObject(index, PR1_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRespiratoryWithinSurgery(size_t index = 0) {
    try {
      return this->getObject(index, PR1_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Parent Procedure ID
   */

  EI* getPR1_25(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PR1_25);
  }

  EI* getParentProcedureID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PR1_25);
  }

  bool isPR1_25(size_t index = 0) {
    try {
      return this->getObject(index, PR1_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParentProcedureID(size_t index = 0) {
    try {
      return this->getObject(index, PR1_25) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PR1 */

} /* End of namespace HL7_29 */
#endif /* __PR1_v29_H__ */
