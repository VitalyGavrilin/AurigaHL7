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


#ifndef __LCH_v29_H__
#define __LCH_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/PL.h"

namespace HL7_29 {

/* LCH */
class LCH : public HL7Segment {
 public:
  LCH() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    LCH_1,
    LCH_2,
    LCH_3,
    LCH_4,
    LCH_5,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "LCH"; }
  LCH* create() const { return new LCH(); }

 private:
  void init() {
    setName("LCH");
    /* Init members */
    addObject<PL>(LCH_1, "LCH.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(LCH_2, "LCH.2", HL7::initialized, HL7::repetition_off);
    addObject<EI>(LCH_3, "LCH.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(LCH_4, "LCH.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(LCH_5, "LCH.5", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Primary Key Value - LCH
   */

  PL* getLCH_1(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, LCH_1);
  }

  PL* getPrimaryKeyValueLCH(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, LCH_1);
  }

  bool isLCH_1(size_t index = 0) {
    try {
      return this->getObject(index, LCH_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryKeyValueLCH(size_t index = 0) {
    try {
      return this->getObject(index, LCH_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Segment Action Code
   */

  ID* getLCH_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, LCH_2);
  }

  ID* getSegmentActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, LCH_2);
  }

  bool isLCH_2(size_t index = 0) {
    try {
      return this->getObject(index, LCH_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentActionCode(size_t index = 0) {
    try {
      return this->getObject(index, LCH_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Segment Unique Key
   */

  EI* getLCH_3(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, LCH_3);
  }

  EI* getSegmentUniqueKey(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, LCH_3);
  }

  bool isLCH_3(size_t index = 0) {
    try {
      return this->getObject(index, LCH_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentUniqueKey(size_t index = 0) {
    try {
      return this->getObject(index, LCH_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Characteristic ID
   */

  CWE* getLCH_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LCH_4);
  }

  CWE* getLocationCharacteristicID(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LCH_4);
  }

  bool isLCH_4(size_t index = 0) {
    try {
      return this->getObject(index, LCH_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationCharacteristicID(size_t index = 0) {
    try {
      return this->getObject(index, LCH_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Characteristic Value - LCH
   */

  CWE* getLCH_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LCH_5);
  }

  CWE* getLocationCharacteristicValueLCH(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LCH_5);
  }

  bool isLCH_5(size_t index = 0) {
    try {
      return this->getObject(index, LCH_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationCharacteristicValueLCH(size_t index = 0) {
    try {
      return this->getObject(index, LCH_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of LCH */

} /* End of namespace HL7_29 */
#endif /* __LCH_v29_H__ */
