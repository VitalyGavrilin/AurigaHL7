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


#ifndef __OG_v29_H__
#define __OG_v29_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* observation grouper */
class OG : public HL7Data {
 public:
  OG() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    OG_1, /* Original Sub-Identifier */
    OG_2, /* Group */
    OG_3, /* Sequence */
    OG_4, /* Identifier */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "OG"; }
  OG *create() const { return new OG(); }

 private:
  void init() {
    setName("OG");
    /* Init members */
    addObject<ST>(OG_1, "OG.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(OG_2, "OG.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(OG_3, "OG.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OG_4, "OG.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Original Sub-Identifier
   */
  ST *getOG_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, OG_1);
  }

  ST *getOriginalSubIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, OG_1);
  }

  bool isOG_1(size_t index = 0) {
    try {
      return this->getObject(index, OG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOriginalSubIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, OG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Group
   */
  NM *getOG_2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, OG_2);
  }

  NM *getGroup(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, OG_2);
  }

  bool isOG_2(size_t index = 0) {
    try {
      return this->getObject(index, OG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGroup(size_t index = 0) {
    try {
      return this->getObject(index, OG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sequence
   */
  NM *getOG_3(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, OG_3);
  }

  NM *getSequence(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, OG_3);
  }

  bool isOG_3(size_t index = 0) {
    try {
      return this->getObject(index, OG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSequence(size_t index = 0) {
    try {
      return this->getObject(index, OG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Identifier
   */
  ST *getOG_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, OG_4);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, OG_4);
  }

  bool isOG_4(size_t index = 0) {
    try {
      return this->getObject(index, OG_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, OG_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End OG */

} /* End HL7_29 */

#endif /* __OG_v29_H__ */
