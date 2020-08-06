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


#ifndef __LAN_v29_H__
#define __LAN_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/SI.h"

namespace HL7_29 {

/* LAN */
class LAN : public HL7Segment {
 public:
  LAN() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    LAN_1,
    LAN_2,
    LAN_3,
    LAN_4,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "LAN"; }
  LAN* create() const { return new LAN(); }

 private:
  void init() {
    setName("LAN");
    /* Init members */
    addObject<SI>(LAN_1, "LAN.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(LAN_2, "LAN.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(LAN_3, "LAN.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(LAN_4, "LAN.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID – LAN
   */

  SI* getLAN_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, LAN_1);
  }

  SI* getSetIDLAN(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, LAN_1);
  }

  bool isLAN_1(size_t index = 0) {
    try {
      return this->getObject(index, LAN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDLAN(size_t index = 0) {
    try {
      return this->getObject(index, LAN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Language Code
   */

  CWE* getLAN_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LAN_2);
  }

  CWE* getLanguageCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LAN_2);
  }

  bool isLAN_2(size_t index = 0) {
    try {
      return this->getObject(index, LAN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLanguageCode(size_t index = 0) {
    try {
      return this->getObject(index, LAN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Language Ability Code
   */

  CWE* getLAN_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LAN_3);
  }

  CWE* getLanguageAbilityCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LAN_3);
  }

  bool isLAN_3(size_t index = 0) {
    try {
      return this->getObject(index, LAN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLanguageAbilityCode(size_t index = 0) {
    try {
      return this->getObject(index, LAN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Language Proficiency Code
   */

  CWE* getLAN_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LAN_4);
  }

  CWE* getLanguageProficiencyCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LAN_4);
  }

  bool isLAN_4(size_t index = 0) {
    try {
      return this->getObject(index, LAN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLanguageProficiencyCode(size_t index = 0) {
    try {
      return this->getObject(index, LAN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of LAN */

} /* End of namespace HL7_29 */
#endif /* __LAN_v29_H__ */
