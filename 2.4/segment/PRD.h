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


#ifndef __PRD_v24_H__
#define __PRD_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0185.h"
#include "../datatype/CE_0286.h"
#include "../datatype/PI.h"
#include "../datatype/PL.h"
#include "../datatype/TS.h"
#include "../datatype/XAD.h"
#include "../datatype/XPN.h"
#include "../datatype/XTN.h"

namespace HL7_24 {

/* Provider Data */
class PRD : public HL7Segment {
 public:
  PRD() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PRD_1,
    PRD_2,
    PRD_3,
    PRD_4,
    PRD_5,
    PRD_6,
    PRD_7,
    PRD_8,
    PRD_9,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PRD"; }
  PRD* create() const { return new PRD(); }

 private:
  void init() {
    setName("PRD");
    /* Init members */
    addObject<CE_0286>(PRD_1, "PRD.1", HL7::initialized, HL7::repetition_on);
    addObject<XPN>(PRD_2, "PRD.2", HL7::optional, HL7::repetition_on);
    addObject<XAD>(PRD_3, "PRD.3", HL7::optional, HL7::repetition_on);
    addObject<PL>(PRD_4, "PRD.4", HL7::optional, HL7::repetition_off);
    addObject<XTN>(PRD_5, "PRD.5", HL7::optional, HL7::repetition_on);
    addObject<CE_0185>(PRD_6, "PRD.6", HL7::optional, HL7::repetition_off);
    addObject<PI>(PRD_7, "PRD.7", HL7::optional, HL7::repetition_on);
    addObject<TS>(PRD_8, "PRD.8", HL7::optional, HL7::repetition_off);
    addObject<TS>(PRD_9, "PRD.9", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Provider Role
   */

  CE_0286* getPRD_1(size_t index = 0) {
    return (CE_0286*)this->getObjectSafe(index, PRD_1);
  }

  CE_0286* getProviderRole(size_t index = 0) {
    return (CE_0286*)this->getObjectSafe(index, PRD_1);
  }

  bool isPRD_1(size_t index = 0) {
    try {
      return this->getObject(index, PRD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderRole(size_t index = 0) {
    try {
      return this->getObject(index, PRD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider Name
   */

  XPN* getPRD_2(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, PRD_2);
  }

  XPN* getProviderName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, PRD_2);
  }

  bool isPRD_2(size_t index = 0) {
    try {
      return this->getObject(index, PRD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderName(size_t index = 0) {
    try {
      return this->getObject(index, PRD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider Address
   */

  XAD* getPRD_3(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, PRD_3);
  }

  XAD* getProviderAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, PRD_3);
  }

  bool isPRD_3(size_t index = 0) {
    try {
      return this->getObject(index, PRD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderAddress(size_t index = 0) {
    try {
      return this->getObject(index, PRD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider Location
   */

  PL* getPRD_4(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PRD_4);
  }

  PL* getProviderLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PRD_4);
  }

  bool isPRD_4(size_t index = 0) {
    try {
      return this->getObject(index, PRD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderLocation(size_t index = 0) {
    try {
      return this->getObject(index, PRD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider Communication Information
   */

  XTN* getPRD_5(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, PRD_5);
  }

  XTN* getProviderCommunicationInformation(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, PRD_5);
  }

  bool isPRD_5(size_t index = 0) {
    try {
      return this->getObject(index, PRD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderCommunicationInformation(size_t index = 0) {
    try {
      return this->getObject(index, PRD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Preferred Method of Contact
   */

  CE_0185* getPRD_6(size_t index = 0) {
    return (CE_0185*)this->getObjectSafe(index, PRD_6);
  }

  CE_0185* getPreferredMethodOfContact(size_t index = 0) {
    return (CE_0185*)this->getObjectSafe(index, PRD_6);
  }

  bool isPRD_6(size_t index = 0) {
    try {
      return this->getObject(index, PRD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreferredMethodOfContact(size_t index = 0) {
    try {
      return this->getObject(index, PRD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider Identifiers
   */

  PI* getPRD_7(size_t index = 0) {
    return (PI*)this->getObjectSafe(index, PRD_7);
  }

  PI* getProviderIdentifiers(size_t index = 0) {
    return (PI*)this->getObjectSafe(index, PRD_7);
  }

  bool isPRD_7(size_t index = 0) {
    try {
      return this->getObject(index, PRD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderIdentifiers(size_t index = 0) {
    try {
      return this->getObject(index, PRD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Start Date of Provider Role
   */

  TS* getPRD_8(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PRD_8);
  }

  TS* getEffectiveStartDateOfProviderRole(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PRD_8);
  }

  bool isPRD_8(size_t index = 0) {
    try {
      return this->getObject(index, PRD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveStartDateOfProviderRole(size_t index = 0) {
    try {
      return this->getObject(index, PRD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective End Date of Provider Role
   */

  TS* getPRD_9(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PRD_9);
  }

  TS* getEffectiveEndDateOfProviderRole(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PRD_9);
  }

  bool isPRD_9(size_t index = 0) {
    try {
      return this->getObject(index, PRD_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveEndDateOfProviderRole(size_t index = 0) {
    try {
      return this->getObject(index, PRD_9) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PRD */

} /* End of namespace HL7_24 */
#endif /* __PRD_v24_H__ */
