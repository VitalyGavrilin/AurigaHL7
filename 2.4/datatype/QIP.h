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


#ifndef __QIP_v24_H__
#define __QIP_v24_H__

#include "../../common/Util.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* query input parameter list */
class QIP : public HL7Data {
 public:
  QIP() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    QIP_1, /* segment field name */
    QIP_2, /* value1&value2&value3 */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "QIP"; }
  QIP *create() const { return new QIP(); }

 private:
  void init() {
    // setName("QIP");
    /* Init members */
    addObject<ST>(QIP_1, "QIP.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(QIP_2, "QIP.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * segment field name
   */
  ST *getQIP_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, QIP_1);
  }

  ST *getSegmentFieldName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, QIP_1);
  }

  bool isQIP_1(size_t index = 0) {
    try {
      return this->getObject(index, QIP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentFieldName(size_t index = 0) {
    try {
      return this->getObject(index, QIP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * value1&value2&value3
   */
  ST *getQIP_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, QIP_2);
  }

  ST *getValue1Value2Value3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, QIP_2);
  }

  bool isQIP_2(size_t index = 0) {
    try {
      return this->getObject(index, QIP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValue1Value2Value3(size_t index = 0) {
    try {
      return this->getObject(index, QIP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End QIP */

} /* End HL7_24 */

#endif /*__QIP_v24_H__ */
