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


#ifndef __OM5_v29_H__
#define __OM5_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* OM5 */
class OM5 : public HL7Segment {
 public:
  OM5() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    OM5_1,
    OM5_2,
    OM5_3,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "OM5"; }
  OM5* create() const { return new OM5(); }

 private:
  void init() {
    setName("OM5");
    /* Init members */
    addObject<NM>(OM5_1, "OM5.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM5_2, "OM5.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OM5_3, "OM5.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Sequence Number - Test/Observation Master
   */

  NM* getOM5_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM5_1);
  }

  NM* getSequenceNumberTestObservationMaster(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM5_1);
  }

  bool isOM5_1(size_t index = 0) {
    try {
      return this->getObject(index, OM5_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSequenceNumberTestObservationMaster(size_t index = 0) {
    try {
      return this->getObject(index, OM5_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Test/Observations Included Within an
   */

  CWE* getOM5_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM5_2);
  }

  CWE* getTestObservationsIncludedWithinan(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM5_2);
  }

  bool isOM5_2(size_t index = 0) {
    try {
      return this->getObject(index, OM5_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTestObservationsIncludedWithinan(size_t index = 0) {
    try {
      return this->getObject(index, OM5_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Observation ID Suffixes
   */

  ST* getOM5_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM5_3);
  }

  ST* getObservationIDSuffixes(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM5_3);
  }

  bool isOM5_3(size_t index = 0) {
    try {
      return this->getObject(index, OM5_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isObservationIDSuffixes(size_t index = 0) {
    try {
      return this->getObject(index, OM5_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of OM5 */

} /* End of namespace HL7_29 */
#endif /* __OM5_v29_H__ */
