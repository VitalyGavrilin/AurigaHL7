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


#ifndef __QRI_v29_H__
#define __QRI_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/NM.h"

namespace HL7_29 {

/* QRI */
class QRI : public HL7Segment {
 public:
  QRI() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    QRI_1,
    QRI_2,
    QRI_3,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "QRI"; }
  QRI* create() const { return new QRI(); }

 private:
  void init() {
    setName("QRI");
    /* Init members */
    addObject<NM>(QRI_1, "QRI.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(QRI_2, "QRI.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(QRI_3, "QRI.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Candidate Confidence
   */

  NM* getQRI_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, QRI_1);
  }

  NM* getCandidateConfidence(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, QRI_1);
  }

  bool isQRI_1(size_t index = 0) {
    try {
      return this->getObject(index, QRI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCandidateConfidence(size_t index = 0) {
    try {
      return this->getObject(index, QRI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Match Reason Code
   */

  CWE* getQRI_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, QRI_2);
  }

  CWE* getMatchReasonCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, QRI_2);
  }

  bool isQRI_2(size_t index = 0) {
    try {
      return this->getObject(index, QRI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMatchReasonCode(size_t index = 0) {
    try {
      return this->getObject(index, QRI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Algorithm Descriptor
   */

  CWE* getQRI_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, QRI_3);
  }

  CWE* getAlgorithmDescriptor(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, QRI_3);
  }

  bool isQRI_3(size_t index = 0) {
    try {
      return this->getObject(index, QRI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlgorithmDescriptor(size_t index = 0) {
    try {
      return this->getObject(index, QRI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of QRI */

} /* End of namespace HL7_29 */
#endif /* __QRI_v29_H__ */
