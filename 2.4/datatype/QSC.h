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


#ifndef __QSC_v24_H__
#define __QSC_v24_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* query selection criteria */
class QSC : public HL7Data {
 public:
  QSC() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    QSC_1, /* segment field name */
    QSC_2, /* relational operator */
    QSC_3, /* Value */
    QSC_4, /* relational conjunction */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "QSC"; }
  QSC *create() const { return new QSC(); }

 private:
  void init() {
    // setName("QSC");
    /* Init members */
    addObject<ST>(QSC_1, "QSC.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(QSC_2, "QSC.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(QSC_3, "QSC.3", HL7::initialized, HL7::repetition_off);
    addObject<ID>(QSC_4, "QSC.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * segment field name
   */
  ST *getQSC_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, QSC_1);
  }

  ST *getSegmentFieldName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, QSC_1);
  }

  bool isQSC_1(size_t index = 0) {
    try {
      return this->getObject(index, QSC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentFieldName(size_t index = 0) {
    try {
      return this->getObject(index, QSC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * relational operator
   */
  ID *getQSC_2(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, QSC_2);
  }

  ID *getRelationalOperator(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, QSC_2);
  }

  bool isQSC_2(size_t index = 0) {
    try {
      return this->getObject(index, QSC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRelationalOperator(size_t index = 0) {
    try {
      return this->getObject(index, QSC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Value
   */
  ST *getQSC_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, QSC_3);
  }

  ST *getValue(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, QSC_3);
  }

  bool isQSC_3(size_t index = 0) {
    try {
      return this->getObject(index, QSC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValue(size_t index = 0) {
    try {
      return this->getObject(index, QSC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * relational conjunction
   */
  ID *getQSC_4(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, QSC_4);
  }

  ID *getRelationalConjunction(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, QSC_4);
  }

  bool isQSC_4(size_t index = 0) {
    try {
      return this->getObject(index, QSC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRelationalConjunction(size_t index = 0) {
    try {
      return this->getObject(index, QSC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End QSC */

} /* End HL7_24 */

#endif /*__QSC_v24_H__ */
