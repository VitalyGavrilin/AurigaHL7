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


#ifndef __CON_v29_H__
#define __CON_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/FT.h"
#include "../datatype/ID.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/XPN.h"

namespace HL7_29 {

/* CON */
class CON : public HL7Segment {
 public:
  CON() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    CON_1,
    CON_2,
    CON_3,
    CON_4,
    CON_5,
    CON_6,
    CON_7,
    CON_8,
    CON_9,
    CON_10,
    CON_11,
    CON_12,
    CON_13,
    CON_14,
    CON_15,
    CON_16,
    CON_17,
    CON_18,
    CON_19,
    CON_20,
    CON_21,
    CON_22,
    CON_23,
    CON_24,
    CON_25,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "CON"; }
  CON* create() const { return new CON(); }

 private:
  void init() {
    setName("CON");
    /* Init members */
    addObject<SI>(CON_1, "CON.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CON_2, "CON.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CON_3, "CON.3", HL7::initialized, HL7::repetition_off);
    addObject<EI>(CON_4, "CON.4", HL7::initialized, HL7::repetition_off);
    addObject<FT>(CON_5, "CON.5", HL7::initialized, HL7::repetition_off);
    addObject<FT>(CON_6, "CON.6", HL7::initialized, HL7::repetition_off);
    addObject<FT>(CON_7, "CON.7", HL7::initialized, HL7::repetition_off);
    addObject<FT>(CON_8, "CON.8", HL7::initialized, HL7::repetition_off);
    addObject<FT>(CON_9, "CON.9", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(CON_10, "CON.10", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(CON_11, "CON.11", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CON_12, "CON.12", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CON_13, "CON.13", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CON_14, "CON.14", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CON_15, "CON.15", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CON_16, "CON.16", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CON_17, "CON.17", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CON_18, "CON.18", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CON_19, "CON.19", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CON_20, "CON.20", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CON_21, "CON.21", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CON_22, "CON.22", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CON_23, "CON.23", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(CON_24, "CON.24", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CON_25, "CON.25", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - CON
   */

  SI* getCON_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, CON_1);
  }

  SI* getSetIDCON(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, CON_1);
  }

  bool isCON_1(size_t index = 0) {
    try {
      return this->getObject(index, CON_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDCON(size_t index = 0) {
    try {
      return this->getObject(index, CON_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consent Type
   */

  CWE* getCON_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CON_2);
  }

  CWE* getConsentType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CON_2);
  }

  bool isCON_2(size_t index = 0) {
    try {
      return this->getObject(index, CON_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsentType(size_t index = 0) {
    try {
      return this->getObject(index, CON_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consent Form ID and Version
   */

  ST* getCON_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, CON_3);
  }

  ST* getConsentFormIDandVersion(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, CON_3);
  }

  bool isCON_3(size_t index = 0) {
    try {
      return this->getObject(index, CON_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsentFormIDandVersion(size_t index = 0) {
    try {
      return this->getObject(index, CON_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consent Form Number
   */

  EI* getCON_4(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, CON_4);
  }

  EI* getConsentFormNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, CON_4);
  }

  bool isCON_4(size_t index = 0) {
    try {
      return this->getObject(index, CON_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsentFormNumber(size_t index = 0) {
    try {
      return this->getObject(index, CON_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consent Text
   */

  FT* getCON_5(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, CON_5);
  }

  FT* getConsentText(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, CON_5);
  }

  bool isCON_5(size_t index = 0) {
    try {
      return this->getObject(index, CON_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsentText(size_t index = 0) {
    try {
      return this->getObject(index, CON_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Subject-specific Consent Text
   */

  FT* getCON_6(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, CON_6);
  }

  FT* getSubjectspecificConsentText(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, CON_6);
  }

  bool isCON_6(size_t index = 0) {
    try {
      return this->getObject(index, CON_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubjectspecificConsentText(size_t index = 0) {
    try {
      return this->getObject(index, CON_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consent Background Information
   */

  FT* getCON_7(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, CON_7);
  }

  FT* getConsentBackgroundInformation(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, CON_7);
  }

  bool isCON_7(size_t index = 0) {
    try {
      return this->getObject(index, CON_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsentBackgroundInformation(size_t index = 0) {
    try {
      return this->getObject(index, CON_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Subject-specific Consent Background Text
   */

  FT* getCON_8(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, CON_8);
  }

  FT* getSubjectspecificConsentBackgroundText(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, CON_8);
  }

  bool isCON_8(size_t index = 0) {
    try {
      return this->getObject(index, CON_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubjectspecificConsentBackgroundText(size_t index = 0) {
    try {
      return this->getObject(index, CON_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consenter-imposed limitations
   */

  FT* getCON_9(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, CON_9);
  }

  FT* getConsenterimposedlimitations(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, CON_9);
  }

  bool isCON_9(size_t index = 0) {
    try {
      return this->getObject(index, CON_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsenterimposedlimitations(size_t index = 0) {
    try {
      return this->getObject(index, CON_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consent Mode
   */

  CNE* getCON_10(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, CON_10);
  }

  CNE* getConsentMode(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, CON_10);
  }

  bool isCON_10(size_t index = 0) {
    try {
      return this->getObject(index, CON_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsentMode(size_t index = 0) {
    try {
      return this->getObject(index, CON_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consent Status
   */

  CNE* getCON_11(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, CON_11);
  }

  CNE* getConsentStatus(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, CON_11);
  }

  bool isCON_11(size_t index = 0) {
    try {
      return this->getObject(index, CON_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsentStatus(size_t index = 0) {
    try {
      return this->getObject(index, CON_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consent Discussion Date/Time
   */

  DTM* getCON_12(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CON_12);
  }

  DTM* getConsentDiscussionDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CON_12);
  }

  bool isCON_12(size_t index = 0) {
    try {
      return this->getObject(index, CON_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsentDiscussionDateTime(size_t index = 0) {
    try {
      return this->getObject(index, CON_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consent Decision Date/Time
   */

  DTM* getCON_13(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CON_13);
  }

  DTM* getConsentDecisionDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CON_13);
  }

  bool isCON_13(size_t index = 0) {
    try {
      return this->getObject(index, CON_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsentDecisionDateTime(size_t index = 0) {
    try {
      return this->getObject(index, CON_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consent Effective Date/Time
   */

  DTM* getCON_14(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CON_14);
  }

  DTM* getConsentEffectiveDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CON_14);
  }

  bool isCON_14(size_t index = 0) {
    try {
      return this->getObject(index, CON_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsentEffectiveDateTime(size_t index = 0) {
    try {
      return this->getObject(index, CON_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consent End Date/Time
   */

  DTM* getCON_15(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CON_15);
  }

  DTM* getConsentEndDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CON_15);
  }

  bool isCON_15(size_t index = 0) {
    try {
      return this->getObject(index, CON_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsentEndDateTime(size_t index = 0) {
    try {
      return this->getObject(index, CON_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Subject Competence Indicator
   */

  ID* getCON_16(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, CON_16);
  }

  ID* getSubjectCompetenceIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, CON_16);
  }

  bool isCON_16(size_t index = 0) {
    try {
      return this->getObject(index, CON_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubjectCompetenceIndicator(size_t index = 0) {
    try {
      return this->getObject(index, CON_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Translator Assistance Indicator
   */

  ID* getCON_17(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, CON_17);
  }

  ID* getTranslatorAssistanceIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, CON_17);
  }

  bool isCON_17(size_t index = 0) {
    try {
      return this->getObject(index, CON_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTranslatorAssistanceIndicator(size_t index = 0) {
    try {
      return this->getObject(index, CON_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Language Translated To
   */

  CWE* getCON_18(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CON_18);
  }

  CWE* getLanguageTranslatedTo(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CON_18);
  }

  bool isCON_18(size_t index = 0) {
    try {
      return this->getObject(index, CON_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLanguageTranslatedTo(size_t index = 0) {
    try {
      return this->getObject(index, CON_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Informational Material Supplied Indicator
   */

  ID* getCON_19(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, CON_19);
  }

  ID* getInformationalMaterialSuppliedIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, CON_19);
  }

  bool isCON_19(size_t index = 0) {
    try {
      return this->getObject(index, CON_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInformationalMaterialSuppliedIndicator(size_t index = 0) {
    try {
      return this->getObject(index, CON_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consent Bypass Reason
   */

  CWE* getCON_20(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CON_20);
  }

  CWE* getConsentBypassReason(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CON_20);
  }

  bool isCON_20(size_t index = 0) {
    try {
      return this->getObject(index, CON_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsentBypassReason(size_t index = 0) {
    try {
      return this->getObject(index, CON_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consent Disclosure Level
   */

  ID* getCON_21(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, CON_21);
  }

  ID* getConsentDisclosureLevel(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, CON_21);
  }

  bool isCON_21(size_t index = 0) {
    try {
      return this->getObject(index, CON_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsentDisclosureLevel(size_t index = 0) {
    try {
      return this->getObject(index, CON_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consent Non-disclosure Reason
   */

  CWE* getCON_22(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CON_22);
  }

  CWE* getConsentNondisclosureReason(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CON_22);
  }

  bool isCON_22(size_t index = 0) {
    try {
      return this->getObject(index, CON_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsentNondisclosureReason(size_t index = 0) {
    try {
      return this->getObject(index, CON_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Non-subject Consenter Reason
   */

  CWE* getCON_23(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CON_23);
  }

  CWE* getNonsubjectConsenterReason(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CON_23);
  }

  bool isCON_23(size_t index = 0) {
    try {
      return this->getObject(index, CON_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNonsubjectConsenterReason(size_t index = 0) {
    try {
      return this->getObject(index, CON_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consenter ID
   */

  XPN* getCON_24(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, CON_24);
  }

  XPN* getConsenterID(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, CON_24);
  }

  bool isCON_24(size_t index = 0) {
    try {
      return this->getObject(index, CON_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsenterID(size_t index = 0) {
    try {
      return this->getObject(index, CON_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Relationship to Subject
   */

  CWE* getCON_25(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CON_25);
  }

  CWE* getRelationshiptoSubject(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CON_25);
  }

  bool isCON_25(size_t index = 0) {
    try {
      return this->getObject(index, CON_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRelationshiptoSubject(size_t index = 0) {
    try {
      return this->getObject(index, CON_25) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of CON */

} /* End of namespace HL7_29 */
#endif /* __CON_v29_H__ */
