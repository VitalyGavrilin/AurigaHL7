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


#ifndef __OM3_v24_H__
#define __OM3_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"

namespace HL7_24 {

/* Categorical Service/Test/Observation */
class OM3 : public HL7Segment {
 public:
  OM3() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    OM3_1,
    OM3_2,
    OM3_3,
    OM3_4,
    OM3_5,
    OM3_6,
    OM3_7,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "OM3"; }
  OM3* create() const { return new OM3(); }

 private:
  void init() {
    setName("OM3");
    /* Init members */
    addObject<NM>(OM3_1, "OM3.1", HL7::optional, HL7::repetition_off);
    addObject<CE>(OM3_2, "OM3.2", HL7::optional, HL7::repetition_off);
    addObject<CE>(OM3_3, "OM3.3", HL7::optional, HL7::repetition_off);
    addObject<CE>(OM3_4, "OM3.4", HL7::optional, HL7::repetition_on);
    addObject<CE>(OM3_5, "OM3.5", HL7::optional, HL7::repetition_off);
    addObject<CE>(OM3_6, "OM3.6", HL7::optional, HL7::repetition_off);
    addObject<ID>(OM3_7, "OM3.7", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Sequence Number - Test/ Observation Master File
   */

  NM* getOM3_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM3_1);
  }

  NM* getSequenceNumberTestObservationMasterFile(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM3_1);
  }

  bool isOM3_1(size_t index = 0) {
    try {
      return this->getObject(index, OM3_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSequenceNumberTestObservationMasterFile(size_t index = 0) {
    try {
      return this->getObject(index, OM3_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Preferred Coding System
   */

  CE* getOM3_2(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM3_2);
  }

  CE* getPreferredCodingSystem(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM3_2);
  }

  bool isOM3_2(size_t index = 0) {
    try {
      return this->getObject(index, OM3_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreferredCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, OM3_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Valid Coded "Answers
   */

  CE* getOM3_3(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM3_3);
  }

  CE* getValidCodedAnswers(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM3_3);
  }

  bool isOM3_3(size_t index = 0) {
    try {
      return this->getObject(index, OM3_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValidCodedAnswers(size_t index = 0) {
    try {
      return this->getObject(index, OM3_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Normal Text/Codes for Categorical Observations
   */

  CE* getOM3_4(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM3_4);
  }

  CE* getNormalTextCodesForCategoricalObservations(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM3_4);
  }

  bool isOM3_4(size_t index = 0) {
    try {
      return this->getObject(index, OM3_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNormalTextCodesForCategoricalObservations(size_t index = 0) {
    try {
      return this->getObject(index, OM3_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Abnormal Text/Codes for Categorical Observations
   */

  CE* getOM3_5(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM3_5);
  }

  CE* getAbnormalTextCodesForCategoricalObservations(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM3_5);
  }

  bool isOM3_5(size_t index = 0) {
    try {
      return this->getObject(index, OM3_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAbnormalTextCodesForCategoricalObservations(size_t index = 0) {
    try {
      return this->getObject(index, OM3_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Critical Text/Codes for Categorical Observations
   */

  CE* getOM3_6(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM3_6);
  }

  CE* getCriticalTextCodesForCategoricalObservations(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM3_6);
  }

  bool isOM3_6(size_t index = 0) {
    try {
      return this->getObject(index, OM3_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCriticalTextCodesForCategoricalObservations(size_t index = 0) {
    try {
      return this->getObject(index, OM3_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Value Type
   */

  ID* getOM3_7(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM3_7);
  }

  ID* getValueType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM3_7);
  }

  bool isOM3_7(size_t index = 0) {
    try {
      return this->getObject(index, OM3_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValueType(size_t index = 0) {
    try {
      return this->getObject(index, OM3_7) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of OM3 */

} /* End of namespace HL7_24 */
#endif /* __OM3_v24_H__ */
