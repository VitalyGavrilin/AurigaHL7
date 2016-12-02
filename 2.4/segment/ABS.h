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


#ifndef __ABS_v24_H__
#define __ABS_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0069.h"
#include "../datatype/CE_0421.h"
#include "../datatype/CE_0422.h"
#include "../datatype/CE_0423.h"
#include "../datatype/CE_0424.h"
#include "../datatype/CE_0425.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/TS.h"
#include "../datatype/XCN.h"

namespace HL7_24 {

/* Abstract */
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
    addObject<XCN>(ABS_1, "ABS.1", HL7::optional, HL7::repetition_off);
    addObject<CE_0069>(ABS_2, "ABS.2", HL7::optional, HL7::repetition_off);
    addObject<CE_0421>(ABS_3, "ABS.3", HL7::optional, HL7::repetition_off);
    addObject<TS>(ABS_4, "ABS.4", HL7::optional, HL7::repetition_off);
    addObject<XCN>(ABS_5, "ABS.5", HL7::optional, HL7::repetition_off);
    addObject<CE_0422>(ABS_6, "ABS.6", HL7::optional, HL7::repetition_off);
    addObject<TS>(ABS_7, "ABS.7", HL7::optional, HL7::repetition_off);
    addObject<XCN>(ABS_8, "ABS.8", HL7::optional, HL7::repetition_off);
    addObject<CE_0423>(ABS_9, "ABS.9", HL7::optional, HL7::repetition_off);
    addObject<ID>(ABS_10, "ABS.10", HL7::optional, HL7::repetition_off);
    addObject<CE_0424>(ABS_11, "ABS.11", HL7::optional, HL7::repetition_off);
    addObject<NM>(ABS_12, "ABS.12", HL7::optional, HL7::repetition_off);
    addObject<CE_0425>(ABS_13, "ABS.13", HL7::optional, HL7::repetition_off);
    addObject<ID>(ABS_14, "ABS.14", HL7::optional, HL7::repetition_off);
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

  CE_0069* getABS_2(size_t index = 0) {
    return (CE_0069*)this->getObjectSafe(index, ABS_2);
  }

  CE_0069* getTransferMedicalServiceCode(size_t index = 0) {
    return (CE_0069*)this->getObjectSafe(index, ABS_2);
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

  CE_0421* getABS_3(size_t index = 0) {
    return (CE_0421*)this->getObjectSafe(index, ABS_3);
  }

  CE_0421* getSeverityOfIllnessCode(size_t index = 0) {
    return (CE_0421*)this->getObjectSafe(index, ABS_3);
  }

  bool isABS_3(size_t index = 0) {
    try {
      return this->getObject(index, ABS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSeverityOfIllnessCode(size_t index = 0) {
    try {
      return this->getObject(index, ABS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time of Attestation
   */

  TS* getABS_4(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, ABS_4);
  }

  TS* getDateTimeOfAttestation(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, ABS_4);
  }

  bool isABS_4(size_t index = 0) {
    try {
      return this->getObject(index, ABS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeOfAttestation(size_t index = 0) {
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

  CE_0422* getABS_6(size_t index = 0) {
    return (CE_0422*)this->getObjectSafe(index, ABS_6);
  }

  CE_0422* getTriageCode(size_t index = 0) {
    return (CE_0422*)this->getObjectSafe(index, ABS_6);
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

  TS* getABS_7(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, ABS_7);
  }

  TS* getAbstractCompletionDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, ABS_7);
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

  CE_0423* getABS_9(size_t index = 0) {
    return (CE_0423*)this->getObjectSafe(index, ABS_9);
  }

  CE_0423* getCaseCategoryCode(size_t index = 0) {
    return (CE_0423*)this->getObjectSafe(index, ABS_9);
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

  CE_0424* getABS_11(size_t index = 0) {
    return (CE_0424*)this->getObjectSafe(index, ABS_11);
  }

  CE_0424* getGestationCategoryCode(size_t index = 0) {
    return (CE_0424*)this->getObjectSafe(index, ABS_11);
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

  CE_0425* getABS_13(size_t index = 0) {
    return (CE_0425*)this->getObjectSafe(index, ABS_13);
  }

  CE_0425* getNewbornCode(size_t index = 0) {
    return (CE_0425*)this->getObjectSafe(index, ABS_13);
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

} /* End of namespace HL7_24 */
#endif /* __ABS_v24_H__ */
