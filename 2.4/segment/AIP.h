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


#ifndef __AIP_v24_H__
#define __AIP_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0278.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/NM.h"
#include "../datatype/SI.h"
#include "../datatype/TS.h"
#include "../datatype/XCN.h"

namespace HL7_24 {

/* Appointment Information - Personnel Resource */
class AIP : public HL7Segment {
 public:
  AIP() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    AIP_1,
    AIP_2,
    AIP_3,
    AIP_4,
    AIP_5,
    AIP_6,
    AIP_7,
    AIP_8,
    AIP_9,
    AIP_10,
    AIP_11,
    AIP_12,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "AIP"; }
  AIP* create() const { return new AIP(); }

 private:
  void init() {
    setName("AIP");
    /* Init members */
    addObject<SI>(AIP_1, "AIP.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(AIP_2, "AIP.2", HL7::conditional, HL7::repetition_off);
    addObject<XCN>(AIP_3, "AIP.3", HL7::conditional, HL7::repetition_on);
    addObject<CE>(AIP_4, "AIP.4", HL7::initialized, HL7::repetition_off);
    addObject<CE>(AIP_5, "AIP.5", HL7::optional, HL7::repetition_off);
    addObject<TS>(AIP_6, "AIP.6", HL7::conditional, HL7::repetition_off);
    addObject<NM>(AIP_7, "AIP.7", HL7::conditional, HL7::repetition_off);
    addObject<CE>(AIP_8, "AIP.8", HL7::conditional, HL7::repetition_off);
    addObject<NM>(AIP_9, "AIP.9", HL7::optional, HL7::repetition_off);
    addObject<CE>(AIP_10, "AIP.10", HL7::optional, HL7::repetition_off);
    addObject<IS>(AIP_11, "AIP.11", HL7::conditional, HL7::repetition_off);
    addObject<CE_0278>(AIP_12, "AIP.12", HL7::conditional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - AIP
   */

  SI* getAIP_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, AIP_1);
  }

  SI* getSetIDAIP(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, AIP_1);
  }

  bool isAIP_1(size_t index = 0) {
    try {
      return this->getObject(index, AIP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDAIP(size_t index = 0) {
    try {
      return this->getObject(index, AIP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Segment Action Code
   */

  ID* getAIP_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, AIP_2);
  }

  ID* getSegmentActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, AIP_2);
  }

  bool isAIP_2(size_t index = 0) {
    try {
      return this->getObject(index, AIP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentActionCode(size_t index = 0) {
    try {
      return this->getObject(index, AIP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Personnel Resource ID
   */

  XCN* getAIP_3(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, AIP_3);
  }

  XCN* getPersonnelResourceID(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, AIP_3);
  }

  bool isAIP_3(size_t index = 0) {
    try {
      return this->getObject(index, AIP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPersonnelResourceID(size_t index = 0) {
    try {
      return this->getObject(index, AIP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Resource Role
   */

  CE* getAIP_4(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIP_4);
  }

  CE* getResourceRole(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIP_4);
  }

  bool isAIP_4(size_t index = 0) {
    try {
      return this->getObject(index, AIP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResourceRole(size_t index = 0) {
    try {
      return this->getObject(index, AIP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Resource Group
   */

  CE* getAIP_5(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIP_5);
  }

  CE* getResourceGroup(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIP_5);
  }

  bool isAIP_5(size_t index = 0) {
    try {
      return this->getObject(index, AIP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResourceGroup(size_t index = 0) {
    try {
      return this->getObject(index, AIP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Start Date/Time
   */

  TS* getAIP_6(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, AIP_6);
  }

  TS* getStartDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, AIP_6);
  }

  bool isAIP_6(size_t index = 0) {
    try {
      return this->getObject(index, AIP_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartDateTime(size_t index = 0) {
    try {
      return this->getObject(index, AIP_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Start Date/Time Offset
   */

  NM* getAIP_7(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, AIP_7);
  }

  NM* getStartDateTimeOffset(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, AIP_7);
  }

  bool isAIP_7(size_t index = 0) {
    try {
      return this->getObject(index, AIP_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartDateTimeOffset(size_t index = 0) {
    try {
      return this->getObject(index, AIP_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Start Date/Time Offset Units
   */

  CE* getAIP_8(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIP_8);
  }

  CE* getStartDateTimeOffsetUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIP_8);
  }

  bool isAIP_8(size_t index = 0) {
    try {
      return this->getObject(index, AIP_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartDateTimeOffsetUnits(size_t index = 0) {
    try {
      return this->getObject(index, AIP_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Duration
   */

  NM* getAIP_9(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, AIP_9);
  }

  NM* getDuration(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, AIP_9);
  }

  bool isAIP_9(size_t index = 0) {
    try {
      return this->getObject(index, AIP_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDuration(size_t index = 0) {
    try {
      return this->getObject(index, AIP_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Duration Units
   */

  CE* getAIP_10(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIP_10);
  }

  CE* getDurationUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIP_10);
  }

  bool isAIP_10(size_t index = 0) {
    try {
      return this->getObject(index, AIP_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDurationUnits(size_t index = 0) {
    try {
      return this->getObject(index, AIP_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allow Substitution Code
   */

  IS* getAIP_11(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, AIP_11);
  }

  IS* getAllowSubstitutionCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, AIP_11);
  }

  bool isAIP_11(size_t index = 0) {
    try {
      return this->getObject(index, AIP_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllowSubstitutionCode(size_t index = 0) {
    try {
      return this->getObject(index, AIP_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Status Code
   */

  CE_0278* getAIP_12(size_t index = 0) {
    return (CE_0278*)this->getObjectSafe(index, AIP_12);
  }

  CE_0278* getFillerStatusCode(size_t index = 0) {
    return (CE_0278*)this->getObjectSafe(index, AIP_12);
  }

  bool isAIP_12(size_t index = 0) {
    try {
      return this->getObject(index, AIP_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerStatusCode(size_t index = 0) {
    try {
      return this->getObject(index, AIP_12) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of AIP */

} /* End of namespace HL7_24 */
#endif /* __AIP_v24_H__ */
