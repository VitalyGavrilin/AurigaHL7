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


#ifndef __SPR_v24_H__
#define __SPR_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/ID.h"
#include "../datatype/QIP.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* Stored Procedure Request Definition */
class SPR : public HL7Segment {
 public:
  SPR() { this->init(); }

 private:
  /* */
  enum FIELD_ID { SPR_1, SPR_2, SPR_3, SPR_4, FIELD_ID_MAX };

 public:
  const char* className() const { return "SPR"; }
  SPR* create() const { return new SPR(); }

 private:
  void init() {
    setName("SPR");
    /* Init members */
    addObject<ST>(SPR_1, "SPR.1", HL7::optional, HL7::repetition_off);
    addObject<ID>(SPR_2, "SPR.2", HL7::initialized, HL7::repetition_off);
    addObject<CE>(SPR_3, "SPR.3", HL7::initialized, HL7::repetition_off);
    addObject<QIP>(SPR_4, "SPR.4", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Query Tag
   */

  ST* getSPR_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SPR_1);
  }

  ST* getQueryTag(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SPR_1);
  }

  bool isSPR_1(size_t index = 0) {
    try {
      return this->getObject(index, SPR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQueryTag(size_t index = 0) {
    try {
      return this->getObject(index, SPR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Query/Response Format Code
   */

  ID* getSPR_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, SPR_2);
  }

  ID* getQueryResponseFormatCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, SPR_2);
  }

  bool isSPR_2(size_t index = 0) {
    try {
      return this->getObject(index, SPR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQueryResponseFormatCode(size_t index = 0) {
    try {
      return this->getObject(index, SPR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Stored Procedure Name
   */

  CE* getSPR_3(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, SPR_3);
  }

  CE* getStoredProcedureName(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, SPR_3);
  }

  bool isSPR_3(size_t index = 0) {
    try {
      return this->getObject(index, SPR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStoredProcedureName(size_t index = 0) {
    try {
      return this->getObject(index, SPR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Input Parameter List
   */

  QIP* getSPR_4(size_t index = 0) {
    return (QIP*)this->getObjectSafe(index, SPR_4);
  }

  QIP* getInputParameterList(size_t index = 0) {
    return (QIP*)this->getObjectSafe(index, SPR_4);
  }

  bool isSPR_4(size_t index = 0) {
    try {
      return this->getObject(index, SPR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInputParameterList(size_t index = 0) {
    try {
      return this->getObject(index, SPR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of SPR */

} /* End of namespace HL7_24 */
#endif /* __SPR_v24_H__ */
