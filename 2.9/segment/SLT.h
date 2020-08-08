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


#ifndef __SLT_v29_H__
#define __SLT_v29_H__

#include "../../common/Util.h"
#include "../datatype/EI.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* SLT */
class SLT : public HL7Segment {
 public:
  SLT() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    SLT_1,
    SLT_2,
    SLT_3,
    SLT_4,
    SLT_5,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "SLT"; }
  SLT* create() const { return new SLT(); }

 private:
  void init() {
    setName("SLT");
    /* Init members */
    addObject<EI>(SLT_1, "SLT.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(SLT_2, "SLT.2", HL7::initialized, HL7::repetition_off);
    addObject<EI>(SLT_3, "SLT.3", HL7::initialized, HL7::repetition_off);
    addObject<EI>(SLT_4, "SLT.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(SLT_5, "SLT.5", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Device Number
   */

  EI* getSLT_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SLT_1);
  }

  EI* getDeviceNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SLT_1);
  }

  bool isSLT_1(size_t index = 0) {
    try {
      return this->getObject(index, SLT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeviceNumber(size_t index = 0) {
    try {
      return this->getObject(index, SLT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Device Name
   */

  ST* getSLT_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SLT_2);
  }

  ST* getDeviceName(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SLT_2);
  }

  bool isSLT_2(size_t index = 0) {
    try {
      return this->getObject(index, SLT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeviceName(size_t index = 0) {
    try {
      return this->getObject(index, SLT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Lot Number
   */

  EI* getSLT_3(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SLT_3);
  }

  EI* getLotNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SLT_3);
  }

  bool isSLT_3(size_t index = 0) {
    try {
      return this->getObject(index, SLT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLotNumber(size_t index = 0) {
    try {
      return this->getObject(index, SLT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Item Identifier
   */

  EI* getSLT_4(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SLT_4);
  }

  EI* getItemIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SLT_4);
  }

  bool isSLT_4(size_t index = 0) {
    try {
      return this->getObject(index, SLT_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isItemIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, SLT_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Bar Code
   */

  ST* getSLT_5(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SLT_5);
  }

  ST* getBarCode(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SLT_5);
  }

  bool isSLT_5(size_t index = 0) {
    try {
      return this->getObject(index, SLT_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBarCode(size_t index = 0) {
    try {
      return this->getObject(index, SLT_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of SLT */

} /* End of namespace HL7_29 */
#endif /* __SLT_v29_H__ */
