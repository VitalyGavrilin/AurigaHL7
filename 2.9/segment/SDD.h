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


#ifndef __SDD_v29_H__
#define __SDD_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/EI.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* SDD */
class SDD : public HL7Segment {
 public:
  SDD() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    SDD_1,
    SDD_2,
    SDD_3,
    SDD_4,
    SDD_5,
    SDD_6,
    SDD_7,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "SDD"; }
  SDD* create() const { return new SDD(); }

 private:
  void init() {
    setName("SDD");
    /* Init members */
    addObject<EI>(SDD_1, "SDD.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(SDD_2, "SDD.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(SDD_3, "SDD.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SDD_4, "SDD.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SDD_5, "SDD.5", HL7::initialized, HL7::repetition_off);
    addObject<NM>(SDD_6, "SDD.6", HL7::initialized, HL7::repetition_off);
    addObject<ST>(SDD_7, "SDD.7", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Lot Number
   */

  EI* getSDD_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SDD_1);
  }

  EI* getLotNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SDD_1);
  }

  bool isSDD_1(size_t index = 0) {
    try {
      return this->getObject(index, SDD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLotNumber(size_t index = 0) {
    try {
      return this->getObject(index, SDD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Device Number
   */

  EI* getSDD_2(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SDD_2);
  }

  EI* getDeviceNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SDD_2);
  }

  bool isSDD_2(size_t index = 0) {
    try {
      return this->getObject(index, SDD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeviceNumber(size_t index = 0) {
    try {
      return this->getObject(index, SDD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Device Name
   */

  ST* getSDD_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SDD_3);
  }

  ST* getDeviceName(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SDD_3);
  }

  bool isSDD_3(size_t index = 0) {
    try {
      return this->getObject(index, SDD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeviceName(size_t index = 0) {
    try {
      return this->getObject(index, SDD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Device Data State
   */

  CWE* getSDD_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SDD_4);
  }

  CWE* getDeviceDataState(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SDD_4);
  }

  bool isSDD_4(size_t index = 0) {
    try {
      return this->getObject(index, SDD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeviceDataState(size_t index = 0) {
    try {
      return this->getObject(index, SDD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Load Status
   */

  CWE* getSDD_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SDD_5);
  }

  CWE* getLoadStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SDD_5);
  }

  bool isSDD_5(size_t index = 0) {
    try {
      return this->getObject(index, SDD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLoadStatus(size_t index = 0) {
    try {
      return this->getObject(index, SDD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Control Code
   */

  NM* getSDD_6(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SDD_6);
  }

  NM* getControlCode(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SDD_6);
  }

  bool isSDD_6(size_t index = 0) {
    try {
      return this->getObject(index, SDD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isControlCode(size_t index = 0) {
    try {
      return this->getObject(index, SDD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Operator Name
   */

  ST* getSDD_7(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SDD_7);
  }

  ST* getOperatorName(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SDD_7);
  }

  bool isSDD_7(size_t index = 0) {
    try {
      return this->getObject(index, SDD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOperatorName(size_t index = 0) {
    try {
      return this->getObject(index, SDD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of SDD */

} /* End of namespace HL7_29 */
#endif /* __SDD_v29_H__ */
