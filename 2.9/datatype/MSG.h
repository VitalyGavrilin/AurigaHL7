/*
 * hacca - C Toolkit and Applications for the HL7 2.x Protocols
 *           http://github.com/rcarbone/hacca
 *           http://hub.docker.com/repository/docker/roccocarbone/hacca
 *
 * Warning: This file was automatically generated, please do not edit.
 *
 * R. Carbone (rocco@tecsiel.it)
 * Jul 2020
 *
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 */


#ifndef __MSG_v29_H__
#define __MSG_v29_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"

namespace HL7_29 {

/* message type */
class MSG : public HL7Data {
 public:
  MSG() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    MSG_1, /* Message Code */
    MSG_2, /* Trigger Event */
    MSG_3, /* Message Structure */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "MSG"; }
  MSG *create() const { return new MSG(); }

 private:
  void init() {
    setName("MSG");
    /* Init members */
    addObject<ID>(MSG_1, "MSG.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(MSG_2, "MSG.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(MSG_3, "MSG.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Message Code
   */
  ID *getMSG_1(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, MSG_1);
  }

  ID *getMessageCode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, MSG_1);
  }

  bool isMSG_1(size_t index = 0) {
    try {
      return this->getObject(index, MSG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMessageCode(size_t index = 0) {
    try {
      return this->getObject(index, MSG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Trigger Event
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
   * Message Structure
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

} /* End HL7_29 */

#endif /* __MSG_v29_H__ */
