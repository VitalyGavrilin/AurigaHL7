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


#ifndef __EQL_v24_H__
#define __EQL_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* Embedded Query Language */
class EQL : public HL7Segment {
 public:
  EQL() { this->init(); }

 private:
  /* */
  enum FIELD_ID { EQL_1, EQL_2, EQL_3, EQL_4, FIELD_ID_MAX };

 public:
  const char* className() const { return "EQL"; }
  EQL* create() const { return new EQL(); }

 private:
  void init() {
    setName("EQL");
    /* Init members */
    addObject<ST>(EQL_1, "EQL.1", HL7::optional, HL7::repetition_off);
    addObject<ID>(EQL_2, "EQL.2", HL7::initialized, HL7::repetition_off);
    addObject<CE>(EQL_3, "EQL.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(EQL_4, "EQL.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Query Tag
   */

  ST* getEQL_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, EQL_1);
  }

  ST* getQueryTag(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, EQL_1);
  }

  bool isEQL_1(size_t index = 0) {
    try {
      return this->getObject(index, EQL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQueryTag(size_t index = 0) {
    try {
      return this->getObject(index, EQL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Query/Response Format Code
   */

  ID* getEQL_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, EQL_2);
  }

  ID* getQueryResponseFormatCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, EQL_2);
  }

  bool isEQL_2(size_t index = 0) {
    try {
      return this->getObject(index, EQL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQueryResponseFormatCode(size_t index = 0) {
    try {
      return this->getObject(index, EQL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * EQL Query Name
   */

  CE* getEQL_3(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, EQL_3);
  }

  CE* getEQLQueryName(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, EQL_3);
  }

  bool isEQL_3(size_t index = 0) {
    try {
      return this->getObject(index, EQL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEQLQueryName(size_t index = 0) {
    try {
      return this->getObject(index, EQL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * EQL Query Statement
   */

  ST* getEQL_4(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, EQL_4);
  }

  ST* getEQLQueryStatement(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, EQL_4);
  }

  bool isEQL_4(size_t index = 0) {
    try {
      return this->getObject(index, EQL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEQLQueryStatement(size_t index = 0) {
    try {
      return this->getObject(index, EQL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of EQL */

} /* End of namespace HL7_24 */
#endif /* __EQL_v24_H__ */
