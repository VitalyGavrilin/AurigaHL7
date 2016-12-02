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


#ifndef __QID_v24_H__
#define __QID_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0471.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* Query Identification */
class QID : public HL7Segment {
 public:
  QID() { this->init(); }

 private:
  /* */
  enum FIELD_ID { QID_1, QID_2, FIELD_ID_MAX };

 public:
  const char* className() const { return "QID"; }
  QID* create() const { return new QID(); }

 private:
  void init() {
    setName("QID");
    /* Init members */
    addObject<ST>(QID_1, "QID.1", HL7::initialized, HL7::repetition_off);
    addObject<CE_0471>(QID_2, "QID.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Query Tag
   */

  ST* getQID_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, QID_1);
  }

  ST* getQueryTag(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, QID_1);
  }

  bool isQID_1(size_t index = 0) {
    try {
      return this->getObject(index, QID_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQueryTag(size_t index = 0) {
    try {
      return this->getObject(index, QID_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Message Query Name
   */

  CE_0471* getQID_2(size_t index = 0) {
    return (CE_0471*)this->getObjectSafe(index, QID_2);
  }

  CE_0471* getMessageQueryName(size_t index = 0) {
    return (CE_0471*)this->getObjectSafe(index, QID_2);
  }

  bool isQID_2(size_t index = 0) {
    try {
      return this->getObject(index, QID_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMessageQueryName(size_t index = 0) {
    try {
      return this->getObject(index, QID_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of QID */

} /* End of namespace HL7_24 */
#endif /* __QID_v24_H__ */
