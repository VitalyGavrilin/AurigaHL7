/*
 * This file is part of AurigaHL7.
 *
 * AurigaHL7 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * AurigaHL7 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with AurigaHL7.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __IAM_v24_H__
#define __IAM_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0063.h"
#include "../datatype/CE_0127.h"
#include "../datatype/CE_0128.h"
#include "../datatype/CE_0436.h"
#include "../datatype/CE_0437.h"
#include "../datatype/CE_0438.h"
#include "../datatype/CNE.h"
#include "../datatype/DT.h"
#include "../datatype/EI.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"
#include "../datatype/XCN.h"
#include "../datatype/XON.h"
#include "../datatype/XPN.h"

namespace HL7_24 {

/* Patient adverse reaction information - unique iden */
class IAM : public HL7Segment {
 public:
  IAM() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    IAM_1,
    IAM_2,
    IAM_3,
    IAM_4,
    IAM_5,
    IAM_6,
    IAM_7,
    IAM_8,
    IAM_9,
    IAM_10,
    IAM_11,
    IAM_12,
    IAM_13,
    IAM_14,
    IAM_15,
    IAM_16,
    IAM_17,
    IAM_18,
    IAM_19,
    IAM_20,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "IAM"; }
  IAM* create() const { return new IAM(); }

 private:
  void init() {
    setName("IAM");
    /* Init members */
    addObject<SI>(IAM_1, "IAM.1", HL7::initialized, HL7::repetition_off);
    addObject<CE_0127>(IAM_2, "IAM.2", HL7::optional, HL7::repetition_off);
    addObject<CE>(IAM_3, "IAM.3", HL7::initialized, HL7::repetition_off);
    addObject<CE_0128>(IAM_4, "IAM.4", HL7::optional, HL7::repetition_off);
    addObject<ST>(IAM_5, "IAM.5", HL7::optional, HL7::repetition_on);
    addObject<CNE>(IAM_6, "IAM.6", HL7::initialized, HL7::repetition_off);
    addObject<EI>(IAM_7, "IAM.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(IAM_8, "IAM.8", HL7::optional, HL7::repetition_off);
    addObject<CE_0436>(IAM_9, "IAM.9", HL7::optional, HL7::repetition_off);
    addObject<CE>(IAM_10, "IAM.10", HL7::optional, HL7::repetition_off);
    addObject<DT>(IAM_11, "IAM.11", HL7::optional, HL7::repetition_off);
    addObject<ST>(IAM_12, "IAM.12", HL7::optional, HL7::repetition_off);
    addObject<TS>(IAM_13, "IAM.13", HL7::optional, HL7::repetition_off);
    addObject<XPN>(IAM_14, "IAM.14", HL7::optional, HL7::repetition_off);
    addObject<CE_0063>(IAM_15, "IAM.15", HL7::optional, HL7::repetition_off);
    addObject<CE_0437>(IAM_16, "IAM.16", HL7::optional, HL7::repetition_off);
    addObject<CE_0438>(IAM_17, "IAM.17", HL7::optional, HL7::repetition_off);
    addObject<XCN>(IAM_18, "IAM.18", HL7::optional, HL7::repetition_off);
    addObject<XON>(IAM_19, "IAM.19", HL7::optional, HL7::repetition_off);
    addObject<TS>(IAM_20, "IAM.20", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - IAM
   */

  SI* getIAM_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, IAM_1);
  }

  SI* getSetIDIAM(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, IAM_1);
  }

  bool isIAM_1(size_t index = 0) {
    try {
      return this->getObject(index, IAM_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDIAM(size_t index = 0) {
    try {
      return this->getObject(index, IAM_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allergen Type Code
   */

  CE_0127* getIAM_2(size_t index = 0) {
    return (CE_0127*)this->getObjectSafe(index, IAM_2);
  }

  CE_0127* getAllergenTypeCode(size_t index = 0) {
    return (CE_0127*)this->getObjectSafe(index, IAM_2);
  }

  bool isIAM_2(size_t index = 0) {
    try {
      return this->getObject(index, IAM_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllergenTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, IAM_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allergen Code/Mnemonic/Description
   */

  CE* getIAM_3(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, IAM_3);
  }

  CE* getAllergenCodeMnemonicDescription(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, IAM_3);
  }

  bool isIAM_3(size_t index = 0) {
    try {
      return this->getObject(index, IAM_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllergenCodeMnemonicDescription(size_t index = 0) {
    try {
      return this->getObject(index, IAM_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allergy Severity Code
   */

  CE_0128* getIAM_4(size_t index = 0) {
    return (CE_0128*)this->getObjectSafe(index, IAM_4);
  }

  CE_0128* getAllergySeverityCode(size_t index = 0) {
    return (CE_0128*)this->getObjectSafe(index, IAM_4);
  }

  bool isIAM_4(size_t index = 0) {
    try {
      return this->getObject(index, IAM_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllergySeverityCode(size_t index = 0) {
    try {
      return this->getObject(index, IAM_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allergy Reaction Code
   */

  ST* getIAM_5(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IAM_5);
  }

  ST* getAllergyReactionCode(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IAM_5);
  }

  bool isIAM_5(size_t index = 0) {
    try {
      return this->getObject(index, IAM_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllergyReactionCode(size_t index = 0) {
    try {
      return this->getObject(index, IAM_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allergy Action Code
   */

  CNE* getIAM_6(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, IAM_6);
  }

  CNE* getAllergyActionCode(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, IAM_6);
  }

  bool isIAM_6(size_t index = 0) {
    try {
      return this->getObject(index, IAM_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllergyActionCode(size_t index = 0) {
    try {
      return this->getObject(index, IAM_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allergy Unique Identifier
   */

  EI* getIAM_7(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IAM_7);
  }

  EI* getAllergyUniqueIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, IAM_7);
  }

  bool isIAM_7(size_t index = 0) {
    try {
      return this->getObject(index, IAM_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllergyUniqueIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, IAM_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Reason
   */

  ST* getIAM_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IAM_8);
  }

  ST* getActionReason(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IAM_8);
  }

  bool isIAM_8(size_t index = 0) {
    try {
      return this->getObject(index, IAM_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionReason(size_t index = 0) {
    try {
      return this->getObject(index, IAM_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sensitivity to Causative Agent Code
   */

  CE_0436* getIAM_9(size_t index = 0) {
    return (CE_0436*)this->getObjectSafe(index, IAM_9);
  }

  CE_0436* getSensitivityToCausativeAgentCode(size_t index = 0) {
    return (CE_0436*)this->getObjectSafe(index, IAM_9);
  }

  bool isIAM_9(size_t index = 0) {
    try {
      return this->getObject(index, IAM_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSensitivityToCausativeAgentCode(size_t index = 0) {
    try {
      return this->getObject(index, IAM_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allergen Group Code/Mnemonic/Description
   */

  CE* getIAM_10(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, IAM_10);
  }

  CE* getAllergenGroupCodeMnemonicDescription(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, IAM_10);
  }

  bool isIAM_10(size_t index = 0) {
    try {
      return this->getObject(index, IAM_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllergenGroupCodeMnemonicDescription(size_t index = 0) {
    try {
      return this->getObject(index, IAM_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Onset Date
   */

  DT* getIAM_11(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IAM_11);
  }

  DT* getOnsetDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IAM_11);
  }

  bool isIAM_11(size_t index = 0) {
    try {
      return this->getObject(index, IAM_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOnsetDate(size_t index = 0) {
    try {
      return this->getObject(index, IAM_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Onset Date Text
   */

  ST* getIAM_12(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IAM_12);
  }

  ST* getOnsetDateText(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IAM_12);
  }

  bool isIAM_12(size_t index = 0) {
    try {
      return this->getObject(index, IAM_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOnsetDateText(size_t index = 0) {
    try {
      return this->getObject(index, IAM_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reported Date/Time
   */

  TS* getIAM_13(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, IAM_13);
  }

  TS* getReportedDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, IAM_13);
  }

  bool isIAM_13(size_t index = 0) {
    try {
      return this->getObject(index, IAM_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReportedDateTime(size_t index = 0) {
    try {
      return this->getObject(index, IAM_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reported By
   */

  XPN* getIAM_14(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IAM_14);
  }

  XPN* getReportedBy(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, IAM_14);
  }

  bool isIAM_14(size_t index = 0) {
    try {
      return this->getObject(index, IAM_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReportedBy(size_t index = 0) {
    try {
      return this->getObject(index, IAM_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Relationship to Patient Code
   */

  CE_0063* getIAM_15(size_t index = 0) {
    return (CE_0063*)this->getObjectSafe(index, IAM_15);
  }

  CE_0063* getRelationshipToPatientCode(size_t index = 0) {
    return (CE_0063*)this->getObjectSafe(index, IAM_15);
  }

  bool isIAM_15(size_t index = 0) {
    try {
      return this->getObject(index, IAM_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRelationshipToPatientCode(size_t index = 0) {
    try {
      return this->getObject(index, IAM_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alert Device Code
   */

  CE_0437* getIAM_16(size_t index = 0) {
    return (CE_0437*)this->getObjectSafe(index, IAM_16);
  }

  CE_0437* getAlertDeviceCode(size_t index = 0) {
    return (CE_0437*)this->getObjectSafe(index, IAM_16);
  }

  bool isIAM_16(size_t index = 0) {
    try {
      return this->getObject(index, IAM_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlertDeviceCode(size_t index = 0) {
    try {
      return this->getObject(index, IAM_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allergy Clinical Status Code
   */

  CE_0438* getIAM_17(size_t index = 0) {
    return (CE_0438*)this->getObjectSafe(index, IAM_17);
  }

  CE_0438* getAllergyClinicalStatusCode(size_t index = 0) {
    return (CE_0438*)this->getObjectSafe(index, IAM_17);
  }

  bool isIAM_17(size_t index = 0) {
    try {
      return this->getObject(index, IAM_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllergyClinicalStatusCode(size_t index = 0) {
    try {
      return this->getObject(index, IAM_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Statused by Person
   */

  XCN* getIAM_18(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IAM_18);
  }

  XCN* getStatusedByPerson(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IAM_18);
  }

  bool isIAM_18(size_t index = 0) {
    try {
      return this->getObject(index, IAM_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStatusedByPerson(size_t index = 0) {
    try {
      return this->getObject(index, IAM_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Statused by Organization
   */

  XON* getIAM_19(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IAM_19);
  }

  XON* getStatusedByOrganization(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, IAM_19);
  }

  bool isIAM_19(size_t index = 0) {
    try {
      return this->getObject(index, IAM_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStatusedByOrganization(size_t index = 0) {
    try {
      return this->getObject(index, IAM_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Statused at Date/Time
   */

  TS* getIAM_20(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, IAM_20);
  }

  TS* getStatusedAtDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, IAM_20);
  }

  bool isIAM_20(size_t index = 0) {
    try {
      return this->getObject(index, IAM_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStatusedAtDateTime(size_t index = 0) {
    try {
      return this->getObject(index, IAM_20) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of IAM */

} /* End of namespace HL7_24 */
#endif /* __IAM_v24_H__ */
