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


#ifndef __MSG_v24_H__
#define __MSG_v24_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"

namespace HL7_24 {

/* Message Type */
class MSG : public HL7Data {
 public:
  MSG() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    MSG_1, /* message type */
    MSG_2, /* trigger event */
    MSG_3, /* message structure */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "MSG"; }
  MSG *create() const { return new MSG(); }

 private:
  void init() {
    // setName("MSG");
    /* Init members */
    addObject<ID>(MSG_1, "MSG.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(MSG_2, "MSG.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(MSG_3, "MSG.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * message type
   */
  ID *getMSG_1(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, MSG_1);
  }

  ID *getMessageType(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, MSG_1);
  }

  bool isMSG_1(size_t index = 0) {
    try {
      return this->getObject(index, MSG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMessageType(size_t index = 0) {
    try {
      return this->getObject(index, MSG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * trigger event
   */
  ID *getMSG_2(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, MSG_2);
  }

  ID *getTriggerEvent(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, MSG_2);
  }

  bool isMSG_2(size_t index = 0) {
    try {
      return this->getObject(index, MSG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTriggerEvent(size_t index = 0) {
    try {
      return this->getObject(index, MSG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * message structure
   */
  ID *getMSG_3(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, MSG_3);
  }

  ID *getMessageStructure(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, MSG_3);
  }

  bool isMSG_3(size_t index = 0) {
    try {
      return this->getObject(index, MSG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMessageStructure(size_t index = 0) {
    try {
      return this->getObject(index, MSG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End MSG */

} /* End HL7_24 */

#endif /*__MSG_v24_H__ */
