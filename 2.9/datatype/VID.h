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


#ifndef __VID_v29_H__
#define __VID_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/ID.h"

namespace HL7_29 {

/* version identifier */
class VID : public HL7Data {
 public:
  VID() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    VID_1, /* Version ID */
    VID_2, /* Internationalization Code */
    VID_3, /* International Version ID */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "VID"; }
  VID *create() const { return new VID(); }

 private:
  void init() {
    setName("VID");
    /* Init members */
    addObject<ID>(VID_1, "VID.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(VID_2, "VID.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(VID_3, "VID.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Version ID
   */
  ID *getVID_1(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, VID_1);
  }

  ID *getVersionID(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, VID_1);
  }

  bool isVID_1(size_t index = 0) {
    try {
      return this->getObject(index, VID_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVersionID(size_t index = 0) {
    try {
      return this->getObject(index, VID_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Internationalization Code
   */
  CWE *getVID_2(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, VID_2);
  }

  CWE *getInternationalizationCode(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, VID_2);
  }

  bool isVID_2(size_t index = 0) {
    try {
      return this->getObject(index, VID_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInternationalizationCode(size_t index = 0) {
    try {
      return this->getObject(index, VID_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * International Version ID
   */
  CWE *getVID_3(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, VID_3);
  }

  CWE *getInternationalVersionID(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, VID_3);
  }

  bool isVID_3(size_t index = 0) {
    try {
      return this->getObject(index, VID_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInternationalVersionID(size_t index = 0) {
    try {
      return this->getObject(index, VID_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End VID */

} /* End HL7_29 */

#endif /* __VID_v29_H__ */
