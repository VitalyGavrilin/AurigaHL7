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


#ifndef __EQP_v29_H__
#define __EQP_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/FT.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* EQP */
class EQP : public HL7Segment {
 public:
  EQP() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    EQP_1,
    EQP_2,
    EQP_3,
    EQP_4,
    EQP_5,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "EQP"; }
  EQP* create() const { return new EQP(); }

 private:
  void init() {
    setName("EQP");
    /* Init members */
    addObject<CWE>(EQP_1, "EQP.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(EQP_2, "EQP.2", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(EQP_3, "EQP.3", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(EQP_4, "EQP.4", HL7::initialized, HL7::repetition_off);
    addObject<FT>(EQP_5, "EQP.5", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Event type
   */

  CWE* getEQP_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, EQP_1);
  }

  CWE* getEventtype(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, EQP_1);
  }

  bool isEQP_1(size_t index = 0) {
    try {
      return this->getObject(index, EQP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventtype(size_t index = 0) {
    try {
      return this->getObject(index, EQP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * File Name
   */

  ST* getEQP_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, EQP_2);
  }

  ST* getFileName(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, EQP_2);
  }

  bool isEQP_2(size_t index = 0) {
    try {
      return this->getObject(index, EQP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFileName(size_t index = 0) {
    try {
      return this->getObject(index, EQP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Start Date/Time
   */

  DTM* getEQP_3(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, EQP_3);
  }

  DTM* getStartDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, EQP_3);
  }

  bool isEQP_3(size_t index = 0) {
    try {
      return this->getObject(index, EQP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartDateTime(size_t index = 0) {
    try {
      return this->getObject(index, EQP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * End Date/Time
   */

  DTM* getEQP_4(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, EQP_4);
  }

  DTM* getEndDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, EQP_4);
  }

  bool isEQP_4(size_t index = 0) {
    try {
      return this->getObject(index, EQP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEndDateTime(size_t index = 0) {
    try {
      return this->getObject(index, EQP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Data
   */

  FT* getEQP_5(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, EQP_5);
  }

  FT* getTransactionData(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, EQP_5);
  }

  bool isEQP_5(size_t index = 0) {
    try {
      return this->getObject(index, EQP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionData(size_t index = 0) {
    try {
      return this->getObject(index, EQP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of EQP */

} /* End of namespace HL7_29 */
#endif /* __EQP_v29_H__ */
