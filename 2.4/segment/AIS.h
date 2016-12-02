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


#ifndef __AIS_v24_H__
#define __AIS_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0278.h"
#include "../datatype/CE_0411.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/NM.h"
#include "../datatype/SI.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Appointment Information - Service */
class AIS : public HL7Segment {
 public:
  AIS() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    AIS_1,
    AIS_2,
    AIS_3,
    AIS_4,
    AIS_5,
    AIS_6,
    AIS_7,
    AIS_8,
    AIS_9,
    AIS_10,
    AIS_11,
    AIS_12,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "AIS"; }
  AIS* create() const { return new AIS(); }

 private:
  void init() {
    setName("AIS");
    /* Init members */
    addObject<SI>(AIS_1, "AIS.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(AIS_2, "AIS.2", HL7::conditional, HL7::repetition_off);
    addObject<CE>(AIS_3, "AIS.3", HL7::initialized, HL7::repetition_off);
    addObject<TS>(AIS_4, "AIS.4", HL7::conditional, HL7::repetition_off);
    addObject<NM>(AIS_5, "AIS.5", HL7::conditional, HL7::repetition_off);
    addObject<CE>(AIS_6, "AIS.6", HL7::conditional, HL7::repetition_off);
    addObject<NM>(AIS_7, "AIS.7", HL7::optional, HL7::repetition_off);
    addObject<CE>(AIS_8, "AIS.8", HL7::optional, HL7::repetition_off);
    addObject<IS>(AIS_9, "AIS.9", HL7::conditional, HL7::repetition_off);
    addObject<CE_0278>(AIS_10, "AIS.10", HL7::conditional, HL7::repetition_off);
    addObject<CE_0411>(AIS_11, "AIS.11", HL7::optional, HL7::repetition_on);
    addObject<CE_0411>(AIS_12, "AIS.12", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - AIS
   */

  SI* getAIS_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, AIS_1);
  }

  SI* getSetIDAIS(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, AIS_1);
  }

  bool isAIS_1(size_t index = 0) {
    try {
      return this->getObject(index, AIS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDAIS(size_t index = 0) {
    try {
      return this->getObject(index, AIS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Segment Action Code
   */

  ID* getAIS_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, AIS_2);
  }

  ID* getSegmentActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, AIS_2);
  }

  bool isAIS_2(size_t index = 0) {
    try {
      return this->getObject(index, AIS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentActionCode(size_t index = 0) {
    try {
      return this->getObject(index, AIS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Universal Service Identifier
   */

  CE* getAIS_3(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIS_3);
  }

  CE* getUniversalServiceIdentifier(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIS_3);
  }

  bool isAIS_3(size_t index = 0) {
    try {
      return this->getObject(index, AIS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniversalServiceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, AIS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Start Date/Time
   */

  TS* getAIS_4(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, AIS_4);
  }

  TS* getStartDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, AIS_4);
  }

  bool isAIS_4(size_t index = 0) {
    try {
      return this->getObject(index, AIS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartDateTime(size_t index = 0) {
    try {
      return this->getObject(index, AIS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Start Date/Time Offset
   */

  NM* getAIS_5(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, AIS_5);
  }

  NM* getStartDateTimeOffset(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, AIS_5);
  }

  bool isAIS_5(size_t index = 0) {
    try {
      return this->getObject(index, AIS_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartDateTimeOffset(size_t index = 0) {
    try {
      return this->getObject(index, AIS_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Start Date/Time Offset Units
   */

  CE* getAIS_6(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIS_6);
  }

  CE* getStartDateTimeOffsetUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIS_6);
  }

  bool isAIS_6(size_t index = 0) {
    try {
      return this->getObject(index, AIS_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartDateTimeOffsetUnits(size_t index = 0) {
    try {
      return this->getObject(index, AIS_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Duration
   */

  NM* getAIS_7(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, AIS_7);
  }

  NM* getDuration(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, AIS_7);
  }

  bool isAIS_7(size_t index = 0) {
    try {
      return this->getObject(index, AIS_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDuration(size_t index = 0) {
    try {
      return this->getObject(index, AIS_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Duration Units
   */

  CE* getAIS_8(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIS_8);
  }

  CE* getDurationUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AIS_8);
  }

  bool isAIS_8(size_t index = 0) {
    try {
      return this->getObject(index, AIS_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDurationUnits(size_t index = 0) {
    try {
      return this->getObject(index, AIS_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allow Substitution Code
   */

  IS* getAIS_9(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, AIS_9);
  }

  IS* getAllowSubstitutionCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, AIS_9);
  }

  bool isAIS_9(size_t index = 0) {
    try {
      return this->getObject(index, AIS_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllowSubstitutionCode(size_t index = 0) {
    try {
      return this->getObject(index, AIS_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Status Code
   */

  CE_0278* getAIS_10(size_t index = 0) {
    return (CE_0278*)this->getObjectSafe(index, AIS_10);
  }

  CE_0278* getFillerStatusCode(size_t index = 0) {
    return (CE_0278*)this->getObjectSafe(index, AIS_10);
  }

  bool isAIS_10(size_t index = 0) {
    try {
      return this->getObject(index, AIS_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerStatusCode(size_t index = 0) {
    try {
      return this->getObject(index, AIS_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Placer Supplemental Service Information
   */

  CE_0411* getAIS_11(size_t index = 0) {
    return (CE_0411*)this->getObjectSafe(index, AIS_11);
  }

  CE_0411* getPlacerSupplementalServiceInformation(size_t index = 0) {
    return (CE_0411*)this->getObjectSafe(index, AIS_11);
  }

  bool isAIS_11(size_t index = 0) {
    try {
      return this->getObject(index, AIS_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerSupplementalServiceInformation(size_t index = 0) {
    try {
      return this->getObject(index, AIS_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Supplemental Service Information
   */

  CE_0411* getAIS_12(size_t index = 0) {
    return (CE_0411*)this->getObjectSafe(index, AIS_12);
  }

  CE_0411* getFillerSupplementalServiceInformation(size_t index = 0) {
    return (CE_0411*)this->getObjectSafe(index, AIS_12);
  }

  bool isAIS_12(size_t index = 0) {
    try {
      return this->getObject(index, AIS_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerSupplementalServiceInformation(size_t index = 0) {
    try {
      return this->getObject(index, AIS_12) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of AIS */

} /* End of namespace HL7_24 */
#endif /* __AIS_v24_H__ */
