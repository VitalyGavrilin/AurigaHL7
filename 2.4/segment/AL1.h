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


#ifndef __AL1_v24_H__
#define __AL1_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0127.h"
#include "../datatype/CE_0128.h"
#include "../datatype/DT.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* Patient allergy information */
class AL1 : public HL7Segment {
 public:
  AL1() { this->init(); }

 private:
  /* */
  enum FIELD_ID { AL1_1, AL1_2, AL1_3, AL1_4, AL1_5, AL1_6, FIELD_ID_MAX };

 public:
  const char* className() const { return "AL1"; }
  AL1* create() const { return new AL1(); }

 private:
  void init() {
    setName("AL1");
    /* Init members */
    addObject<CE>(AL1_1, "AL1.1", HL7::initialized, HL7::repetition_off);
    addObject<CE_0127>(AL1_2, "AL1.2", HL7::optional, HL7::repetition_off);
    addObject<CE>(AL1_3, "AL1.3", HL7::initialized, HL7::repetition_off);
    addObject<CE_0128>(AL1_4, "AL1.4", HL7::optional, HL7::repetition_off);
    addObject<ST>(AL1_5, "AL1.5", HL7::optional, HL7::repetition_on);
    addObject<DT>(AL1_6, "AL1.6", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - AL1
   */

  CE* getAL1_1(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AL1_1);
  }

  CE* getSetIDAL1(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AL1_1);
  }

  bool isAL1_1(size_t index = 0) {
    try {
      return this->getObject(index, AL1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDAL1(size_t index = 0) {
    try {
      return this->getObject(index, AL1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allergen Type Code
   */

  CE_0127* getAL1_2(size_t index = 0) {
    return (CE_0127*)this->getObjectSafe(index, AL1_2);
  }

  CE_0127* getAllergenTypeCode(size_t index = 0) {
    return (CE_0127*)this->getObjectSafe(index, AL1_2);
  }

  bool isAL1_2(size_t index = 0) {
    try {
      return this->getObject(index, AL1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllergenTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, AL1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allergen Code/Mnemonic/Description
   */

  CE* getAL1_3(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AL1_3);
  }

  CE* getAllergenCodeMnemonicDescription(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, AL1_3);
  }

  bool isAL1_3(size_t index = 0) {
    try {
      return this->getObject(index, AL1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllergenCodeMnemonicDescription(size_t index = 0) {
    try {
      return this->getObject(index, AL1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allergy Severity Code
   */

  CE_0128* getAL1_4(size_t index = 0) {
    return (CE_0128*)this->getObjectSafe(index, AL1_4);
  }

  CE_0128* getAllergySeverityCode(size_t index = 0) {
    return (CE_0128*)this->getObjectSafe(index, AL1_4);
  }

  bool isAL1_4(size_t index = 0) {
    try {
      return this->getObject(index, AL1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllergySeverityCode(size_t index = 0) {
    try {
      return this->getObject(index, AL1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allergy Reaction Code
   */

  ST* getAL1_5(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, AL1_5);
  }

  ST* getAllergyReactionCode(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, AL1_5);
  }

  bool isAL1_5(size_t index = 0) {
    try {
      return this->getObject(index, AL1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllergyReactionCode(size_t index = 0) {
    try {
      return this->getObject(index, AL1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Identification Date
   */

  DT* getAL1_6(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, AL1_6);
  }

  DT* getIdentificationDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, AL1_6);
  }

  bool isAL1_6(size_t index = 0) {
    try {
      return this->getObject(index, AL1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentificationDate(size_t index = 0) {
    try {
      return this->getObject(index, AL1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of AL1 */

} /* End of namespace HL7_24 */
#endif /* __AL1_v24_H__ */
