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


#ifndef __OM2_v24_H__
#define __OM2_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/DLT.h"
#include "../datatype/NM.h"
#include "../datatype/NR.h"
#include "../datatype/RFR.h"
#include "../datatype/TX.h"

namespace HL7_24 {

/* Numeric Observation */
class OM2 : public HL7Segment {
 public:
  OM2() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    OM2_1,
    OM2_2,
    OM2_3,
    OM2_4,
    OM2_5,
    OM2_6,
    OM2_7,
    OM2_8,
    OM2_9,
    OM2_10,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "OM2"; }
  OM2* create() const { return new OM2(); }

 private:
  void init() {
    setName("OM2");
    /* Init members */
    addObject<NM>(OM2_1, "OM2.1", HL7::optional, HL7::repetition_off);
    addObject<CE>(OM2_2, "OM2.2", HL7::optional, HL7::repetition_off);
    addObject<NM>(OM2_3, "OM2.3", HL7::optional, HL7::repetition_on);
    addObject<CE>(OM2_4, "OM2.4", HL7::optional, HL7::repetition_off);
    addObject<TX>(OM2_5, "OM2.5", HL7::optional, HL7::repetition_off);
    addObject<RFR>(OM2_6, "OM2.6", HL7::optional, HL7::repetition_off);
    addObject<NR>(OM2_7, "OM2.7", HL7::optional, HL7::repetition_off);
    addObject<RFR>(OM2_8, "OM2.8", HL7::optional, HL7::repetition_off);
    addObject<DLT>(OM2_9, "OM2.9", HL7::optional, HL7::repetition_on);
    addObject<NM>(OM2_10, "OM2.10", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Sequence Number - Test/ Observation Master File
   */

  NM* getOM2_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM2_1);
  }

  NM* getSequenceNumberTestObservationMasterFile(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM2_1);
  }

  bool isOM2_1(size_t index = 0) {
    try {
      return this->getObject(index, OM2_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSequenceNumberTestObservationMasterFile(size_t index = 0) {
    try {
      return this->getObject(index, OM2_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Units of Measure
   */

  CE* getOM2_2(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM2_2);
  }

  CE* getUnitsOfMeasure(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM2_2);
  }

  bool isOM2_2(size_t index = 0) {
    try {
      return this->getObject(index, OM2_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUnitsOfMeasure(size_t index = 0) {
    try {
      return this->getObject(index, OM2_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Range of Decimal Precision
   */

  NM* getOM2_3(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM2_3);
  }

  NM* getRangeOfDecimalPrecision(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM2_3);
  }

  bool isOM2_3(size_t index = 0) {
    try {
      return this->getObject(index, OM2_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRangeOfDecimalPrecision(size_t index = 0) {
    try {
      return this->getObject(index, OM2_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Corresponding SI Units of Measure
   */

  CE* getOM2_4(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM2_4);
  }

  CE* getCorrespondingSIUnitsOfMeasure(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM2_4);
  }

  bool isOM2_4(size_t index = 0) {
    try {
      return this->getObject(index, OM2_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCorrespondingSIUnitsOfMeasure(size_t index = 0) {
    try {
      return this->getObject(index, OM2_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * SI Conversion Factor
   */

  TX* getOM2_5(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM2_5);
  }

  TX* getSIConversionFactor(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM2_5);
  }

  bool isOM2_5(size_t index = 0) {
    try {
      return this->getObject(index, OM2_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSIConversionFactor(size_t index = 0) {
    try {
      return this->getObject(index, OM2_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reference (Normal) Range - Ordinal and Continuous Observations
   */

  RFR* getOM2_6(size_t index = 0) {
    return (RFR*)this->getObjectSafe(index, OM2_6);
  }

  RFR* getReference(size_t index = 0) {
    return (RFR*)this->getObjectSafe(index, OM2_6);
  }

  bool isOM2_6(size_t index = 0) {
    try {
      return this->getObject(index, OM2_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReference(size_t index = 0) {
    try {
      return this->getObject(index, OM2_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Critical Range for Ordinal and Continuous Observations
   */

  NR* getOM2_7(size_t index = 0) {
    return (NR*)this->getObjectSafe(index, OM2_7);
  }

  NR* getCriticalRangeForOrdinalAndContinuousObservations(size_t index = 0) {
    return (NR*)this->getObjectSafe(index, OM2_7);
  }

  bool isOM2_7(size_t index = 0) {
    try {
      return this->getObject(index, OM2_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCriticalRangeForOrdinalAndContinuousObservations(size_t index = 0) {
    try {
      return this->getObject(index, OM2_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Absolute Range for Ordinal and Continuous Observations
   */

  RFR* getOM2_8(size_t index = 0) {
    return (RFR*)this->getObjectSafe(index, OM2_8);
  }

  RFR* getAbsoluteRangeForOrdinalAndContinuousObservations(size_t index = 0) {
    return (RFR*)this->getObjectSafe(index, OM2_8);
  }

  bool isOM2_8(size_t index = 0) {
    try {
      return this->getObject(index, OM2_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAbsoluteRangeForOrdinalAndContinuousObservations(size_t index = 0) {
    try {
      return this->getObject(index, OM2_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Delta Check Criteria
   */

  DLT* getOM2_9(size_t index = 0) {
    return (DLT*)this->getObjectSafe(index, OM2_9);
  }

  DLT* getDeltaCheckCriteria(size_t index = 0) {
    return (DLT*)this->getObjectSafe(index, OM2_9);
  }

  bool isOM2_9(size_t index = 0) {
    try {
      return this->getObject(index, OM2_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeltaCheckCriteria(size_t index = 0) {
    try {
      return this->getObject(index, OM2_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Minimum Meaningful Increments
   */

  NM* getOM2_10(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM2_10);
  }

  NM* getMinimumMeaningfulIncrements(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM2_10);
  }

  bool isOM2_10(size_t index = 0) {
    try {
      return this->getObject(index, OM2_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMinimumMeaningfulIncrements(size_t index = 0) {
    try {
      return this->getObject(index, OM2_10) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of OM2 */

} /* End of namespace HL7_24 */
#endif /* __OM2_v24_H__ */
