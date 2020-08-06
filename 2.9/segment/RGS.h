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


#ifndef __RGS_v29_H__
#define __RGS_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/ID.h"
#include "../datatype/SI.h"

namespace HL7_29 {

/* RGS */
class RGS : public HL7Segment {
 public:
  RGS() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    RGS_1,
    RGS_2,
    RGS_3,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "RGS"; }
  RGS* create() const { return new RGS(); }

 private:
  void init() {
    setName("RGS");
    /* Init members */
    addObject<SI>(RGS_1, "RGS.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RGS_2, "RGS.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RGS_3, "RGS.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - RGS
   */

  SI* getRGS_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, RGS_1);
  }

  SI* getSetIDRGS(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, RGS_1);
  }

  bool isRGS_1(size_t index = 0) {
    try {
      return this->getObject(index, RGS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDRGS(size_t index = 0) {
    try {
      return this->getObject(index, RGS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Segment Action Code
   */

  ID* getRGS_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RGS_2);
  }

  ID* getSegmentActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RGS_2);
  }

  bool isRGS_2(size_t index = 0) {
    try {
      return this->getObject(index, RGS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentActionCode(size_t index = 0) {
    try {
      return this->getObject(index, RGS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Resource Group ID
   */

  CWE* getRGS_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RGS_3);
  }

  CWE* getResourceGroupID(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RGS_3);
  }

  bool isRGS_3(size_t index = 0) {
    try {
      return this->getObject(index, RGS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResourceGroupID(size_t index = 0) {
    try {
      return this->getObject(index, RGS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RGS */

} /* End of namespace HL7_29 */
#endif /* __RGS_v29_H__ */
