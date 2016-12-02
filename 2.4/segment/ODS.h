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


#ifndef __ODS_v24_H__
#define __ODS_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* Dietary Orders, Supplements, and Preferences */
class ODS : public HL7Segment {
 public:
  ODS() { this->init(); }

 private:
  /* */
  enum FIELD_ID { ODS_1, ODS_2, ODS_3, ODS_4, FIELD_ID_MAX };

 public:
  const char* className() const { return "ODS"; }
  ODS* create() const { return new ODS(); }

 private:
  void init() {
    setName("ODS");
    /* Init members */
    addObject<ID>(ODS_1, "ODS.1", HL7::initialized, HL7::repetition_off);
    addObject<CE>(ODS_2, "ODS.2", HL7::optional, HL7::repetition_on);
    addObject<CE>(ODS_3, "ODS.3", HL7::initialized, HL7::repetition_on);
    addObject<ST>(ODS_4, "ODS.4", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Type
   */

  ID* getODS_1(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ODS_1);
  }

  ID* getType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ODS_1);
  }

  bool isODS_1(size_t index = 0) {
    try {
      return this->getObject(index, ODS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isType(size_t index = 0) {
    try {
      return this->getObject(index, ODS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Service Period
   */

  CE* getODS_2(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, ODS_2);
  }

  CE* getServicePeriod(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, ODS_2);
  }

  bool isODS_2(size_t index = 0) {
    try {
      return this->getObject(index, ODS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isServicePeriod(size_t index = 0) {
    try {
      return this->getObject(index, ODS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diet, Supplement, or Preference Code
   */

  CE* getODS_3(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, ODS_3);
  }

  CE* getDietSupplementOrPreferenceCode(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, ODS_3);
  }

  bool isODS_3(size_t index = 0) {
    try {
      return this->getObject(index, ODS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDietSupplementOrPreferenceCode(size_t index = 0) {
    try {
      return this->getObject(index, ODS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Text Instruction
   */

  ST* getODS_4(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ODS_4);
  }

  ST* getTextInstruction(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ODS_4);
  }

  bool isODS_4(size_t index = 0) {
    try {
      return this->getObject(index, ODS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTextInstruction(size_t index = 0) {
    try {
      return this->getObject(index, ODS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ODS */

} /* End of namespace HL7_24 */
#endif /* __ODS_v24_H__ */
