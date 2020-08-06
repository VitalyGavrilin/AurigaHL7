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


#ifndef __ERL_v29_H__
#define __ERL_v29_H__

#include "../../common/Util.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* Message location */
class ERL : public HL7Data {
 public:
  ERL() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    ERL_1, /* Segment ID */
    ERL_2, /* Segment Sequence */
    ERL_3, /* Field Position */
    ERL_4, /* Field Repetition */
    ERL_5, /* Component Number */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "ERL"; }
  ERL *create() const { return new ERL(); }

 private:
  void init() {
    setName("ERL");
    /* Init members */
    addObject<ST>(ERL_1, "ERL.1", HL7::initialized, HL7::repetition_off);
    addObject<SI>(ERL_2, "ERL.2", HL7::initialized, HL7::repetition_off);
    addObject<SI>(ERL_3, "ERL.3", HL7::initialized, HL7::repetition_off);
    addObject<SI>(ERL_4, "ERL.4", HL7::initialized, HL7::repetition_off);
    addObject<SI>(ERL_5, "ERL.5", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Segment ID
   */
  ST *getERL_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, ERL_1);
  }

  ST *getSegmentID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, ERL_1);
  }

  bool isERL_1(size_t index = 0) {
    try {
      return this->getObject(index, ERL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentID(size_t index = 0) {
    try {
      return this->getObject(index, ERL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Segment Sequence
   */
  SI *getERL_2(size_t index = 0) {
    return (SI *)this->getObjectSafe(index, ERL_2);
  }

  SI *getSegmentSequence(size_t index = 0) {
    return (SI *)this->getObjectSafe(index, ERL_2);
  }

  bool isERL_2(size_t index = 0) {
    try {
      return this->getObject(index, ERL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentSequence(size_t index = 0) {
    try {
      return this->getObject(index, ERL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Field Position
   */
  SI *getERL_3(size_t index = 0) {
    return (SI *)this->getObjectSafe(index, ERL_3);
  }

  SI *getFieldPosition(size_t index = 0) {
    return (SI *)this->getObjectSafe(index, ERL_3);
  }

  bool isERL_3(size_t index = 0) {
    try {
      return this->getObject(index, ERL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFieldPosition(size_t index = 0) {
    try {
      return this->getObject(index, ERL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Field Repetition
   */
  SI *getERL_4(size_t index = 0) {
    return (SI *)this->getObjectSafe(index, ERL_4);
  }

  SI *getFieldRepetition(size_t index = 0) {
    return (SI *)this->getObjectSafe(index, ERL_4);
  }

  bool isERL_4(size_t index = 0) {
    try {
      return this->getObject(index, ERL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFieldRepetition(size_t index = 0) {
    try {
      return this->getObject(index, ERL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Component Number
   */
  SI *getERL_5(size_t index = 0) {
    return (SI *)this->getObjectSafe(index, ERL_5);
  }

  SI *getComponentNumber(size_t index = 0) {
    return (SI *)this->getObjectSafe(index, ERL_5);
  }

  bool isERL_5(size_t index = 0) {
    try {
      return this->getObject(index, ERL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isComponentNumber(size_t index = 0) {
    try {
      return this->getObject(index, ERL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End ERL */

} /* End HL7_29 */

#endif /* __ERL_v29_H__ */
