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


#ifndef __ODS_v29_H__
#define __ODS_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* ODS */
class ODS : public HL7Segment {
 public:
  ODS() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    ODS_1,
    ODS_2,
    ODS_3,
    ODS_4,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "ODS"; }
  ODS* create() const { return new ODS(); }

 private:
  void init() {
    setName("ODS");
    /* Init members */
    addObject<ID>(ODS_1, "ODS.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ODS_2, "ODS.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ODS_3, "ODS.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ODS_4, "ODS.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Type
   */

  ID* getODS_1(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ODS_1);
  }

  ID* getType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ODS_1);
  }

  bool isODS_1(size_t index = 0) {
    try {
      return this->getObject(index, ODS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isType(size_t index = 0) {
    try {
      return this->getObject(index, ODS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Service Period
   */

  CWE* getODS_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ODS_2);
  }

  CWE* getServicePeriod(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ODS_2);
  }

  bool isODS_2(size_t index = 0) {
    try {
      return this->getObject(index, ODS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isServicePeriod(size_t index = 0) {
    try {
      return this->getObject(index, ODS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diet, Supplement, or Preference Code
   */

  CWE* getODS_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ODS_3);
  }

  CWE* getDietSupplementorPreferenceCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ODS_3);
  }

  bool isODS_3(size_t index = 0) {
    try {
      return this->getObject(index, ODS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDietSupplementorPreferenceCode(size_t index = 0) {
    try {
      return this->getObject(index, ODS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Text Instruction
   */

  ST* getODS_4(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ODS_4);
  }

  ST* getTextInstruction(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ODS_4);
  }

  bool isODS_4(size_t index = 0) {
    try {
      return this->getObject(index, ODS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTextInstruction(size_t index = 0) {
    try {
      return this->getObject(index, ODS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ODS */

} /* End of namespace HL7_29 */
#endif /* __ODS_v29_H__ */
