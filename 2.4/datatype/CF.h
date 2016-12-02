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


#ifndef __CF_v24_H__
#define __CF_v24_H__

#include "../../common/Util.h"
#include "../datatype/FT.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"

namespace HL7_24 {

/* coded element with formatted values */
class CF : public HL7Data {
 public:
  CF() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CF_1, /* identifier (ID) */
    CF_2, /* formatted text */
    CF_3, /* name of coding system */
    CF_4, /* alternate identifier (ID) */
    CF_5, /* alternate formatted text */
    CF_6, /* name of alternate coding system */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CF"; }
  CF *create() const { return new CF(); }

 private:
  void init() {
    // setName("CF");
    /* Init members */
    addObject<ID>(CF_1, "CF.1", HL7::initialized, HL7::repetition_off);
    addObject<FT>(CF_2, "CF.2", HL7::initialized, HL7::repetition_off);
    addObject<IS>(CF_3, "CF.3", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CF_4, "CF.4", HL7::initialized, HL7::repetition_off);
    addObject<FT>(CF_5, "CF.5", HL7::initialized, HL7::repetition_off);
    addObject<IS>(CF_6, "CF.6", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * identifier (ID)
   */
  ID *getCF_1(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CF_1);
  }

  ID *getIdentifier(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CF_1);
  }

  bool isCF_1(size_t index = 0) {
    try {
      return this->getObject(index, CF_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CF_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * formatted text
   */
  FT *getCF_2(size_t index = 0) {
    return (FT *)this->getObjectSafe(index, CF_2);
  }

  FT *getFormattedText(size_t index = 0) {
    return (FT *)this->getObjectSafe(index, CF_2);
  }

  bool isCF_2(size_t index = 0) {
    try {
      return this->getObject(index, CF_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFormattedText(size_t index = 0) {
    try {
      return this->getObject(index, CF_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of coding system
   */
  IS *getCF_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CF_3);
  }

  IS *getNameOfCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CF_3);
  }

  bool isCF_3(size_t index = 0) {
    try {
      return this->getObject(index, CF_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CF_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate identifier (ID)
   */
  ID *getCF_4(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CF_4);
  }

  ID *getAlternateIdentifier(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CF_4);
  }

  bool isCF_4(size_t index = 0) {
    try {
      return this->getObject(index, CF_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CF_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate formatted text
   */
  FT *getCF_5(size_t index = 0) {
    return (FT *)this->getObjectSafe(index, CF_5);
  }

  FT *getAlternateFormattedText(size_t index = 0) {
    return (FT *)this->getObjectSafe(index, CF_5);
  }

  bool isCF_5(size_t index = 0) {
    try {
      return this->getObject(index, CF_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateFormattedText(size_t index = 0) {
    try {
      return this->getObject(index, CF_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of alternate coding system
   */
  IS *getCF_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CF_6);
  }

  IS *getNameOfAlternateCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CF_6);
  }

  bool isCF_6(size_t index = 0) {
    try {
      return this->getObject(index, CF_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CF_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CF */

} /* End HL7_24 */

#endif /*__CF_v24_H__ */
