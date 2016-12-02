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


#ifndef __CSU_v24_H__
#define __CSU_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* channel sensitivity/units */
class CSU : public HL7Data {
 public:
  CSU() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CSU_1, /* channel sensitivity */
    CSU_2, /* unit of measure identifier */
    CSU_3, /* unit of measure description */
    CSU_4, /* unit of measure coding system */
    CSU_5, /* alternate unit of measure identifier */
    CSU_6, /* alternate unit of measure description */
    CSU_7, /* alternate unit of measure coding system */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CSU"; }
  CSU *create() const { return new CSU(); }

 private:
  void init() {
    // setName("CSU");
    /* Init members */
    addObject<NM>(CSU_1, "CSU.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CSU_2, "CSU.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CSU_3, "CSU.3", HL7::initialized, HL7::repetition_off);
    addObject<IS>(CSU_4, "CSU.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CSU_5, "CSU.5", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CSU_6, "CSU.6", HL7::initialized, HL7::repetition_off);
    addObject<IS>(CSU_7, "CSU.7", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * channel sensitivity
   */
  NM *getCSU_1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CSU_1);
  }

  NM *getChannelSensitivity(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CSU_1);
  }

  bool isCSU_1(size_t index = 0) {
    try {
      return this->getObject(index, CSU_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChannelSensitivity(size_t index = 0) {
    try {
      return this->getObject(index, CSU_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * unit of measure identifier
   */
  ST *getCSU_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_2);
  }

  ST *getUnitOfMeasureIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_2);
  }

  bool isCSU_2(size_t index = 0) {
    try {
      return this->getObject(index, CSU_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUnitOfMeasureIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CSU_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * unit of measure description
   */
  ST *getCSU_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_3);
  }

  ST *getUnitOfMeasureDescription(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_3);
  }

  bool isCSU_3(size_t index = 0) {
    try {
      return this->getObject(index, CSU_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUnitOfMeasureDescription(size_t index = 0) {
    try {
      return this->getObject(index, CSU_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * unit of measure coding system
   */
  IS *getCSU_4(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CSU_4);
  }

  IS *getUnitOfMeasureCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CSU_4);
  }

  bool isCSU_4(size_t index = 0) {
    try {
      return this->getObject(index, CSU_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUnitOfMeasureCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CSU_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate unit of measure identifier
   */
  ST *getCSU_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_5);
  }

  ST *getAlternateUnitOfMeasureIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_5);
  }

  bool isCSU_5(size_t index = 0) {
    try {
      return this->getObject(index, CSU_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateUnitOfMeasureIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CSU_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate unit of measure description
   */
  ST *getCSU_6(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_6);
  }

  ST *getAlternateUnitOfMeasureDescription(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_6);
  }

  bool isCSU_6(size_t index = 0) {
    try {
      return this->getObject(index, CSU_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateUnitOfMeasureDescription(size_t index = 0) {
    try {
      return this->getObject(index, CSU_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate unit of measure coding system
   */
  IS *getCSU_7(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CSU_7);
  }

  IS *getAlternateUnitOfMeasureCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CSU_7);
  }

  bool isCSU_7(size_t index = 0) {
    try {
      return this->getObject(index, CSU_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateUnitOfMeasureCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CSU_7) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CSU */

} /* End HL7_24 */

#endif /*__CSU_v24_H__ */
