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


#ifndef __OM6_v29_H__
#define __OM6_v29_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"
#include "../datatype/TX.h"

namespace HL7_29 {

/* OM6 */
class OM6 : public HL7Segment {
 public:
  OM6() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    OM6_1,
    OM6_2,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "OM6"; }
  OM6* create() const { return new OM6(); }

 private:
  void init() {
    setName("OM6");
    /* Init members */
    addObject<NM>(OM6_1, "OM6.1", HL7::initialized, HL7::repetition_off);
    addObject<TX>(OM6_2, "OM6.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Sequence Number - Test/Observation Master
   */

  NM* getOM6_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM6_1);
  }

  NM* getSequenceNumberTestObservationMaster(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM6_1);
  }

  bool isOM6_1(size_t index = 0) {
    try {
      return this->getObject(index, OM6_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSequenceNumberTestObservationMaster(size_t index = 0) {
    try {
      return this->getObject(index, OM6_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Derivation Rule
   */

  TX* getOM6_2(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM6_2);
  }

  TX* getDerivationRule(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM6_2);
  }

  bool isOM6_2(size_t index = 0) {
    try {
      return this->getObject(index, OM6_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDerivationRule(size_t index = 0) {
    try {
      return this->getObject(index, OM6_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of OM6 */

} /* End of namespace HL7_29 */
#endif /* __OM6_v29_H__ */
