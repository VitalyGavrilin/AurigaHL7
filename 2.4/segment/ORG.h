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


#ifndef __ORG_v24_H__
#define __ORG_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0066.h"
#include "../datatype/CE_0405.h"
#include "../datatype/CE_0452.h"
#include "../datatype/CE_0453.h"
#include "../datatype/CE_0454.h"
#include "../datatype/CE_0474.h"
#include "../datatype/CX.h"
#include "../datatype/DR.h"
#include "../datatype/ID.h"
#include "../datatype/SI.h"

namespace HL7_24 {

/* Practitioner Organization Unit */
class ORG : public HL7Segment {
 public:
  ORG() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    ORG_1,
    ORG_2,
    ORG_3,
    ORG_4,
    ORG_5,
    ORG_6,
    ORG_7,
    ORG_8,
    ORG_9,
    ORG_10,
    ORG_11,
    ORG_12,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "ORG"; }
  ORG* create() const { return new ORG(); }

 private:
  void init() {
    setName("ORG");
    /* Init members */
    addObject<SI>(ORG_1, "ORG.1", HL7::initialized, HL7::repetition_off);
    addObject<CE_0405>(ORG_2, "ORG.2", HL7::optional, HL7::repetition_off);
    addObject<CE_0474>(ORG_3, "ORG.3", HL7::optional, HL7::repetition_off);
    addObject<ID>(ORG_4, "ORG.4", HL7::optional, HL7::repetition_off);
    addObject<CX>(ORG_5, "ORG.5", HL7::optional, HL7::repetition_off);
    addObject<CE_0452>(ORG_6, "ORG.6", HL7::optional, HL7::repetition_off);
    addObject<CE_0453>(ORG_7, "ORG.7", HL7::optional, HL7::repetition_off);
    addObject<CE_0454>(ORG_8, "ORG.8", HL7::optional, HL7::repetition_off);
    addObject<DR>(ORG_9, "ORG.9", HL7::optional, HL7::repetition_off);
    addObject<CE_0066>(ORG_10, "ORG.10", HL7::optional, HL7::repetition_off);
    addObject<ID>(ORG_11, "ORG.11", HL7::optional, HL7::repetition_off);
    addObject<ID>(ORG_12, "ORG.12", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - ORG
   */

  SI* getORG_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, ORG_1);
  }

  SI* getSetIDORG(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, ORG_1);
  }

  bool isORG_1(size_t index = 0) {
    try {
      return this->getObject(index, ORG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDORG(size_t index = 0) {
    try {
      return this->getObject(index, ORG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Organization Unit Code
   */

  CE_0405* getORG_2(size_t index = 0) {
    return (CE_0405*)this->getObjectSafe(index, ORG_2);
  }

  CE_0405* getOrganizationUnitCode(size_t index = 0) {
    return (CE_0405*)this->getObjectSafe(index, ORG_2);
  }

  bool isORG_2(size_t index = 0) {
    try {
      return this->getObject(index, ORG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrganizationUnitCode(size_t index = 0) {
    try {
      return this->getObject(index, ORG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Organization Unit Type Code - ORG
   */

  CE_0474* getORG_3(size_t index = 0) {
    return (CE_0474*)this->getObjectSafe(index, ORG_3);
  }

  CE_0474* getOrganizationUnitTypeCodeORG(size_t index = 0) {
    return (CE_0474*)this->getObjectSafe(index, ORG_3);
  }

  bool isORG_3(size_t index = 0) {
    try {
      return this->getObject(index, ORG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrganizationUnitTypeCodeORG(size_t index = 0) {
    try {
      return this->getObject(index, ORG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Org Unit Indicator
   */

  ID* getORG_4(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ORG_4);
  }

  ID* getPrimaryOrgUnitIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ORG_4);
  }

  bool isORG_4(size_t index = 0) {
    try {
      return this->getObject(index, ORG_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryOrgUnitIndicator(size_t index = 0) {
    try {
      return this->getObject(index, ORG_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Practitioner Org Unit Identifier
   */

  CX* getORG_5(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, ORG_5);
  }

  CX* getPractitionerOrgUnitIdentifier(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, ORG_5);
  }

  bool isORG_5(size_t index = 0) {
    try {
      return this->getObject(index, ORG_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPractitionerOrgUnitIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, ORG_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Health Care Provider Type Code
   */

  CE_0452* getORG_6(size_t index = 0) {
    return (CE_0452*)this->getObjectSafe(index, ORG_6);
  }

  CE_0452* getHealthCareProviderTypeCode(size_t index = 0) {
    return (CE_0452*)this->getObjectSafe(index, ORG_6);
  }

  bool isORG_6(size_t index = 0) {
    try {
      return this->getObject(index, ORG_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHealthCareProviderTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, ORG_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Health Care Provider Classification Code
   */

  CE_0453* getORG_7(size_t index = 0) {
    return (CE_0453*)this->getObjectSafe(index, ORG_7);
  }

  CE_0453* getHealthCareProviderClassificationCode(size_t index = 0) {
    return (CE_0453*)this->getObjectSafe(index, ORG_7);
  }

  bool isORG_7(size_t index = 0) {
    try {
      return this->getObject(index, ORG_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHealthCareProviderClassificationCode(size_t index = 0) {
    try {
      return this->getObject(index, ORG_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Health Care Provider Area of Specialization Code
   */

  CE_0454* getORG_8(size_t index = 0) {
    return (CE_0454*)this->getObjectSafe(index, ORG_8);
  }

  CE_0454* getHealthCareProviderAreaOfSpecializationCode(size_t index = 0) {
    return (CE_0454*)this->getObjectSafe(index, ORG_8);
  }

  bool isORG_8(size_t index = 0) {
    try {
      return this->getObject(index, ORG_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHealthCareProviderAreaOfSpecializationCode(size_t index = 0) {
    try {
      return this->getObject(index, ORG_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Date Range
   */

  DR* getORG_9(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, ORG_9);
  }

  DR* getEffectiveDateRange(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, ORG_9);
  }

  bool isORG_9(size_t index = 0) {
    try {
      return this->getObject(index, ORG_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveDateRange(size_t index = 0) {
    try {
      return this->getObject(index, ORG_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Employment Status Code
   */

  CE_0066* getORG_10(size_t index = 0) {
    return (CE_0066*)this->getObjectSafe(index, ORG_10);
  }

  CE_0066* getEmploymentStatusCode(size_t index = 0) {
    return (CE_0066*)this->getObjectSafe(index, ORG_10);
  }

  bool isORG_10(size_t index = 0) {
    try {
      return this->getObject(index, ORG_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEmploymentStatusCode(size_t index = 0) {
    try {
      return this->getObject(index, ORG_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Board Approval Indicator
   */

  ID* getORG_11(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ORG_11);
  }

  ID* getBoardApprovalIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ORG_11);
  }

  bool isORG_11(size_t index = 0) {
    try {
      return this->getObject(index, ORG_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBoardApprovalIndicator(size_t index = 0) {
    try {
      return this->getObject(index, ORG_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Care Physician Indicator
   */

  ID* getORG_12(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ORG_12);
  }

  ID* getPrimaryCarePhysicianIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ORG_12);
  }

  bool isORG_12(size_t index = 0) {
    try {
      return this->getObject(index, ORG_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryCarePhysicianIndicator(size_t index = 0) {
    try {
      return this->getObject(index, ORG_12) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ORG */

} /* End of namespace HL7_24 */
#endif /* __ORG_v24_H__ */
