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


#ifndef __ERQ_v24_H__
#define __ERQ_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/QIP.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* Event Replay Query */
class ERQ : public HL7Segment {
 public:
  ERQ() { this->init(); }

 private:
  /* */
  enum FIELD_ID { ERQ_1, ERQ_2, ERQ_3, FIELD_ID_MAX };

 public:
  const char* className() const { return "ERQ"; }
  ERQ* create() const { return new ERQ(); }

 private:
  void init() {
    setName("ERQ");
    /* Init members */
    addObject<ST>(ERQ_1, "ERQ.1", HL7::optional, HL7::repetition_off);
    addObject<CE>(ERQ_2, "ERQ.2", HL7::initialized, HL7::repetition_off);
    addObject<QIP>(ERQ_3, "ERQ.3", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Query Tag
   */

  ST* getERQ_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ERQ_1);
  }

  ST* getQueryTag(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ERQ_1);
  }

  bool isERQ_1(size_t index = 0) {
    try {
      return this->getObject(index, ERQ_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQueryTag(size_t index = 0) {
    try {
      return this->getObject(index, ERQ_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Identifier
   */

  CE* getERQ_2(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, ERQ_2);
  }

  CE* getEventIdentifier(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, ERQ_2);
  }

  bool isERQ_2(size_t index = 0) {
    try {
      return this->getObject(index, ERQ_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, ERQ_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Input Parameter List
   */

  QIP* getERQ_3(size_t index = 0) {
    return (QIP*)this->getObjectSafe(index, ERQ_3);
  }

  QIP* getInputParameterList(size_t index = 0) {
    return (QIP*)this->getObjectSafe(index, ERQ_3);
  }

  bool isERQ_3(size_t index = 0) {
    try {
      return this->getObject(index, ERQ_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInputParameterList(size_t index = 0) {
    try {
      return this->getObject(index, ERQ_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ERQ */

} /* End of namespace HL7_24 */
#endif /* __ERQ_v24_H__ */
