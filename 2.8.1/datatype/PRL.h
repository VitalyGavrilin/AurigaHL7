/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 18:58:50 CEST 2020
 *
 * R. Carbone (rocco@tecsiel.it)
 * Jun 2020
 *
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 *
 * This file was developed as part of the ongoing activities related
 * to the design, implementation and execution of interoperability tests
 * between hacca-based versus AurigaHL7-based applications.
 *
 * In more details I decided to extend AurigaHL7 C++ Library with header files
 * implementing HL7 structures of the version 2.8.1 of the protocol (April 2014)
 * because the version 2.4 distributed with AurigaHL7 is a bit outdated (October 2000).
 *
 * All files in this fork was automatically generated by hacca-based tool [hawk]
 * and strictly follow the syntax and convention originally defined
 * by Auriga HL7 C++ Library just as form of continuity, convenience
 * and respect for their superb work.
 */


#ifndef __PRL_v281_H__
#define __PRL_v281_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/ST.h"
#include "../datatype/TX.h"

namespace HL7_281 {

/* Parent Result Link */
class PRL : public HL7Data {
 public:
  PRL() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    PRL_1, /* Parent Observation Identifier */
    PRL_2, /* Parent Observation Sub-identifier */
    PRL_3, /* Parent Observation Value Descriptor */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "PRL"; }
  PRL *create() const { return new PRL(); }

 private:
  void init() {
    setName("PRL");
    /* Init members */
    addObject<CWE>(PRL_1, "PRL.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PRL_2, "PRL.2", HL7::initialized, HL7::repetition_off);
    addObject<TX>(PRL_3, "PRL.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Parent Observation Identifier
   */
  CWE *getPRL_1(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, PRL_1);
  }

  CWE *getParentObservationIdentifier(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, PRL_1);
  }

  bool isPRL_1(size_t index = 0) {
    try {
      return this->getObject(index, PRL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParentObservationIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, PRL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Parent Observation Sub-identifier
   */
  ST *getPRL_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PRL_2);
  }

  ST *getParentObservationSubidentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PRL_2);
  }

  bool isPRL_2(size_t index = 0) {
    try {
      return this->getObject(index, PRL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParentObservationSubidentifier(size_t index = 0) {
    try {
      return this->getObject(index, PRL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Parent Observation Value Descriptor
   */
  TX *getPRL_3(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, PRL_3);
  }

  TX *getParentObservationValueDescriptor(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, PRL_3);
  }

  bool isPRL_3(size_t index = 0) {
    try {
      return this->getObject(index, PRL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParentObservationValueDescriptor(size_t index = 0) {
    try {
      return this->getObject(index, PRL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End PRL */

} /* End HL7_281 */

#endif /* __PRL_v281_H__ */