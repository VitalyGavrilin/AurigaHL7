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


#ifndef __OBX_v24_H__
#define __OBX_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/NM.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"
#include "../datatype/XCN.h"
#include "../datatype/varies.h"

namespace HL7_24 {

/* Observation/Result */
class OBX : public HL7Segment {
 public:
  OBX() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    OBX_1,
    OBX_2,
    OBX_3,
    OBX_4,
    OBX_5,
    OBX_6,
    OBX_7,
    OBX_8,
    OBX_9,
    OBX_10,
    OBX_11,
    OBX_12,
    OBX_13,
    OBX_14,
    OBX_15,
    OBX_16,
    OBX_17,
    OBX_18,
    OBX_19,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "OBX"; }
  OBX* create() const { return new OBX(); }

 private:
  void init() {
    setName("OBX");
    /* Init members */
    addObject<SI>(OBX_1, "OBX.1", HL7::optional, HL7::repetition_off);
    addObject<ID>(OBX_2, "OBX.2", HL7::conditional, HL7::repetition_off);
    addObject<CE>(OBX_3, "OBX.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OBX_4, "OBX.4", HL7::conditional, HL7::repetition_off);
    addObject<varies>(OBX_5, "OBX.5", HL7::conditional, HL7::repetition_on);
    addObject<CE>(OBX_6, "OBX.6", HL7::optional, HL7::repetition_off);
    addObject<ST>(OBX_7, "OBX.7", HL7::optional, HL7::repetition_off);
    addObject<IS>(OBX_8, "OBX.8", HL7::optional, HL7::repetition_off);
    addObject<NM>(OBX_9, "OBX.9", HL7::optional, HL7::repetition_on);
    addObject<ID>(OBX_10, "OBX.10", HL7::optional, HL7::repetition_off);
    addObject<ID>(OBX_11, "OBX.11", HL7::initialized, HL7::repetition_off);
    addObject<TS>(OBX_12, "OBX.12", HL7::optional, HL7::repetition_off);
    addObject<ST>(OBX_13, "OBX.13", HL7::optional, HL7::repetition_off);
    addObject<TS>(OBX_14, "OBX.14", HL7::optional, HL7::repetition_off);
    addObject<CE>(OBX_15, "OBX.15", HL7::optional, HL7::repetition_off);
    addObject<XCN>(OBX_16, "OBX.16", HL7::optional, HL7::repetition_off);
    addObject<CE>(OBX_17, "OBX.17", HL7::optional, HL7::repetition_on);
    addObject<EI>(OBX_18, "OBX.18", HL7::optional, HL7::repetition_on);
    addObject<TS>(OBX_19, "OBX.19", HL7::optional, HL7::repetition_off);
    linkObjects(OBX_2, OBX_5);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - OBX
   */

  SI* getOBX_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, OBX_1);
  }

  SI* getSetIDOBX(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, OBX_1);
  }

  bool isOBX_1(size_t index = 0) {
    try {
      return this->getObject(index, OBX_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDOBX(size_t index = 0) {
    try {
      return this->getObject(index, OBX_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Value Type
   */

  ID* getOBX_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBX_2);
  }

  ID* getValueType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBX_2);
  }

  bool isOBX_2(size_t index = 0) {
    try {
      return this->getObject(index, OBX_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValueType(size_t index = 0) {
    try {
      return this->getObject(index, OBX_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Observation Identifier
   */

  CE* getOBX_3(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OBX_3);
  }

  CE* getObservationIdentifier(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OBX_3);
  }

  bool isOBX_3(size_t index = 0) {
    try {
      return this->getObject(index, OBX_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isObservationIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, OBX_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Observation Sub-Id
   */

  ST* getOBX_4(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBX_4);
  }

  ST* getObservationSubId(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBX_4);
  }

  bool isOBX_4(size_t index = 0) {
    try {
      return this->getObject(index, OBX_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isObservationSubId(size_t index = 0) {
    try {
      return this->getObject(index, OBX_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Observation Value
   */

  HL7Object* getOBX_5(size_t index = 0) {
    return (this->getObjectSafe(index, OBX_5));
  }

  HL7Object* getObservationValue(size_t index = 0) {
    return (this->getObjectSafe(index, OBX_5));
  }

  bool isOBX_5(size_t index = 0) {
    try {
      return (this->getObject(index, OBX_5) != NULL);
    } catch (...) {
    }
    return false;
  }

  bool isObservationValue(size_t index = 0) {
    try {
      return (this->getObject(index, OBX_5) != NULL);
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Units
   */

  CE* getOBX_6(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OBX_6);
  }

  CE* getUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OBX_6);
  }

  bool isOBX_6(size_t index = 0) {
    try {
      return this->getObject(index, OBX_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUnits(size_t index = 0) {
    try {
      return this->getObject(index, OBX_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * References Range
   */

  ST* getOBX_7(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBX_7);
  }

  ST* getReferencesRange(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBX_7);
  }

  bool isOBX_7(size_t index = 0) {
    try {
      return this->getObject(index, OBX_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferencesRange(size_t index = 0) {
    try {
      return this->getObject(index, OBX_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Abnormal Flags
   */

  IS* getOBX_8(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, OBX_8);
  }

  IS* getAbnormalFlags(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, OBX_8);
  }

  bool isOBX_8(size_t index = 0) {
    try {
      return this->getObject(index, OBX_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAbnormalFlags(size_t index = 0) {
    try {
      return this->getObject(index, OBX_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Probability
   */

  NM* getOBX_9(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OBX_9);
  }

  NM* getProbability(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OBX_9);
  }

  bool isOBX_9(size_t index = 0) {
    try {
      return this->getObject(index, OBX_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProbability(size_t index = 0) {
    try {
      return this->getObject(index, OBX_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Nature of Abnormal Test
   */

  ID* getOBX_10(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBX_10);
  }

  ID* getNatureOfAbnormalTest(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBX_10);
  }

  bool isOBX_10(size_t index = 0) {
    try {
      return this->getObject(index, OBX_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNatureOfAbnormalTest(size_t index = 0) {
    try {
      return this->getObject(index, OBX_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Observation Result Status
   */

  ID* getOBX_11(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBX_11);
  }

  ID* getObservationResultStatus(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBX_11);
  }

  bool isOBX_11(size_t index = 0) {
    try {
      return this->getObject(index, OBX_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isObservationResultStatus(size_t index = 0) {
    try {
      return this->getObject(index, OBX_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date Last Observation Normal Value
   */

  TS* getOBX_12(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, OBX_12);
  }

  TS* getDateLastObservationNormalValue(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, OBX_12);
  }

  bool isOBX_12(size_t index = 0) {
    try {
      return this->getObject(index, OBX_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateLastObservationNormalValue(size_t index = 0) {
    try {
      return this->getObject(index, OBX_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * User Defined Access Checks
   */

  ST* getOBX_13(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBX_13);
  }

  ST* getUserDefinedAccessChecks(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBX_13);
  }

  bool isOBX_13(size_t index = 0) {
    try {
      return this->getObject(index, OBX_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUserDefinedAccessChecks(size_t index = 0) {
    try {
      return this->getObject(index, OBX_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time of the Observation
   */

  TS* getOBX_14(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, OBX_14);
  }

  TS* getDateTimeOfTheObservation(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, OBX_14);
  }

  bool isOBX_14(size_t index = 0) {
    try {
      return this->getObject(index, OBX_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeOfTheObservation(size_t index = 0) {
    try {
      return this->getObject(index, OBX_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Producer's ID
   */

  CE* getOBX_15(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OBX_15);
  }

  CE* getProducerSID(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OBX_15);
  }

  bool isOBX_15(size_t index = 0) {
    try {
      return this->getObject(index, OBX_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProducerSID(size_t index = 0) {
    try {
      return this->getObject(index, OBX_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Responsible Observer
   */

  XCN* getOBX_16(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, OBX_16);
  }

  XCN* getResponsibleObserver(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, OBX_16);
  }

  bool isOBX_16(size_t index = 0) {
    try {
      return this->getObject(index, OBX_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResponsibleObserver(size_t index = 0) {
    try {
      return this->getObject(index, OBX_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Observation Method
   */

  CE* getOBX_17(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OBX_17);
  }

  CE* getObservationMethod(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OBX_17);
  }

  bool isOBX_17(size_t index = 0) {
    try {
      return this->getObject(index, OBX_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isObservationMethod(size_t index = 0) {
    try {
      return this->getObject(index, OBX_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Equipment Instance Identifier
   */

  EI* getOBX_18(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, OBX_18);
  }

  EI* getEquipmentInstanceIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, OBX_18);
  }

  bool isOBX_18(size_t index = 0) {
    try {
      return this->getObject(index, OBX_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEquipmentInstanceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, OBX_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time of the Analysis
   */

  TS* getOBX_19(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, OBX_19);
  }

  TS* getDateTimeOfTheAnalysis(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, OBX_19);
  }

  bool isOBX_19(size_t index = 0) {
    try {
      return this->getObject(index, OBX_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeOfTheAnalysis(size_t index = 0) {
    try {
      return this->getObject(index, OBX_19) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of OBX */

} /* End of namespace HL7_24 */
#endif /* __OBX_v24_H__ */
