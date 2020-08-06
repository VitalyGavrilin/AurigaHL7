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


#ifndef __REL_v29_H__
#define __REL_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DR.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/SI.h"
#include "../datatype/XAD.h"
#include "../datatype/XCN.h"
#include "../datatype/XON.h"
#include "../datatype/XTN.h"

namespace HL7_29 {

/* REL */
class REL : public HL7Segment {
 public:
  REL() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    REL_1,
    REL_2,
    REL_3,
    REL_4,
    REL_5,
    REL_6,
    REL_7,
    REL_8,
    REL_9,
    REL_10,
    REL_11,
    REL_12,
    REL_13,
    REL_14,
    REL_15,
    REL_16,
    REL_17,
    REL_18,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "REL"; }
  REL* create() const { return new REL(); }

 private:
  void init() {
    setName("REL");
    /* Init members */
    addObject<SI>(REL_1, "REL.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(REL_2, "REL.2", HL7::initialized, HL7::repetition_off);
    addObject<EI>(REL_3, "REL.3", HL7::initialized, HL7::repetition_off);
    addObject<EI>(REL_4, "REL.4", HL7::initialized, HL7::repetition_off);
    addObject<EI>(REL_5, "REL.5", HL7::initialized, HL7::repetition_off);
    addObject<EI>(REL_6, "REL.6", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(REL_7, "REL.7", HL7::initialized, HL7::repetition_off);
    addObject<XON>(REL_8, "REL.8", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(REL_9, "REL.9", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(REL_10, "REL.10", HL7::initialized, HL7::repetition_off);
    addObject<DR>(REL_11, "REL.11", HL7::initialized, HL7::repetition_off);
    addObject<ID>(REL_12, "REL.12", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(REL_13, "REL.13", HL7::initialized, HL7::repetition_off);
    addObject<NM>(REL_14, "REL.14", HL7::initialized, HL7::repetition_off);
    addObject<NM>(REL_15, "REL.15", HL7::initialized, HL7::repetition_off);
    addObject<ID>(REL_16, "REL.16", HL7::initialized, HL7::repetition_off);
    addObject<ID>(REL_17, "REL.17", HL7::initialized, HL7::repetition_off);
    addObject<ID>(REL_18, "REL.18", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID –REL
   */

  SI* getREL_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, REL_1);
  }

  SI* getSetIDREL(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, REL_1);
  }

  bool isREL_1(size_t index = 0) {
    try {
      return this->getObject(index, REL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDREL(size_t index = 0) {
    try {
      return this->getObject(index, REL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Relationship Type
   */

  CWE* getREL_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, REL_2);
  }

  CWE* getRelationshipType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, REL_2);
  }

  bool isREL_2(size_t index = 0) {
    try {
      return this->getObject(index, REL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRelationshipType(size_t index = 0) {
    try {
      return this->getObject(index, REL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * This Relationship Instance Identifier
   */

  EI* getREL_3(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, REL_3);
  }

  EI* getThisRelationshipInstanceIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, REL_3);
  }

  bool isREL_3(size_t index = 0) {
    try {
      return this->getObject(index, REL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isThisRelationshipInstanceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, REL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Source Information Instance Identifier
   */

  EI* getREL_4(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, REL_4);
  }

  EI* getSourceInformationInstanceIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, REL_4);
  }

  bool isREL_4(size_t index = 0) {
    try {
      return this->getObject(index, REL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourceInformationInstanceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, REL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Target Information Instance Identifier
   */

  EI* getREL_5(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, REL_5);
  }

  EI* getTargetInformationInstanceIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, REL_5);
  }

  bool isREL_5(size_t index = 0) {
    try {
      return this->getObject(index, REL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTargetInformationInstanceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, REL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Asserting Entity Instance ID
   */

  EI* getREL_6(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, REL_6);
  }

  EI* getAssertingEntityInstanceID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, REL_6);
  }

  bool isREL_6(size_t index = 0) {
    try {
      return this->getObject(index, REL_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssertingEntityInstanceID(size_t index = 0) {
    try {
      return this->getObject(index, REL_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Asserting Person
   */

  XCN* getREL_7(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, REL_7);
  }

  XCN* getAssertingPerson(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, REL_7);
  }

  bool isREL_7(size_t index = 0) {
    try {
      return this->getObject(index, REL_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssertingPerson(size_t index = 0) {
    try {
      return this->getObject(index, REL_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Asserting Organization
   */

  XON* getREL_8(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, REL_8);
  }

  XON* getAssertingOrganization(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, REL_8);
  }

  bool isREL_8(size_t index = 0) {
    try {
      return this->getObject(index, REL_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssertingOrganization(size_t index = 0) {
    try {
      return this->getObject(index, REL_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assertor Address
   */

  XAD* getREL_9(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, REL_9);
  }

  XAD* getAssertorAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, REL_9);
  }

  bool isREL_9(size_t index = 0) {
    try {
      return this->getObject(index, REL_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssertorAddress(size_t index = 0) {
    try {
      return this->getObject(index, REL_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assertor Contact
   */

  XTN* getREL_10(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, REL_10);
  }

  XTN* getAssertorContact(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, REL_10);
  }

  bool isREL_10(size_t index = 0) {
    try {
      return this->getObject(index, REL_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssertorContact(size_t index = 0) {
    try {
      return this->getObject(index, REL_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assertion Date Range
   */

  DR* getREL_11(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, REL_11);
  }

  DR* getAssertionDateRange(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, REL_11);
  }

  bool isREL_11(size_t index = 0) {
    try {
      return this->getObject(index, REL_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssertionDateRange(size_t index = 0) {
    try {
      return this->getObject(index, REL_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Negation Indicator
   */

  ID* getREL_12(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, REL_12);
  }

  ID* getNegationIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, REL_12);
  }

  bool isREL_12(size_t index = 0) {
    try {
      return this->getObject(index, REL_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNegationIndicator(size_t index = 0) {
    try {
      return this->getObject(index, REL_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Certainty of Relationship
   */

  CWE* getREL_13(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, REL_13);
  }

  CWE* getCertaintyofRelationship(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, REL_13);
  }

  bool isREL_13(size_t index = 0) {
    try {
      return this->getObject(index, REL_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCertaintyofRelationship(size_t index = 0) {
    try {
      return this->getObject(index, REL_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Priority No
   */

  NM* getREL_14(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, REL_14);
  }

  NM* getPriorityNo(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, REL_14);
  }

  bool isREL_14(size_t index = 0) {
    try {
      return this->getObject(index, REL_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPriorityNo(size_t index = 0) {
    try {
      return this->getObject(index, REL_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Priority Sequence No
   */

  NM* getREL_15(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, REL_15);
  }

  NM* getPrioritySequenceNo(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, REL_15);
  }

  bool isREL_15(size_t index = 0) {
    try {
      return this->getObject(index, REL_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrioritySequenceNo(size_t index = 0) {
    try {
      return this->getObject(index, REL_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Separability Indicator
   */

  ID* getREL_16(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, REL_16);
  }

  ID* getSeparabilityIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, REL_16);
  }

  bool isREL_16(size_t index = 0) {
    try {
      return this->getObject(index, REL_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSeparabilityIndicator(size_t index = 0) {
    try {
      return this->getObject(index, REL_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Source Information Instance Object Type
   */

  ID* getREL_17(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, REL_17);
  }

  ID* getSourceInformationInstanceObjectType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, REL_17);
  }

  bool isREL_17(size_t index = 0) {
    try {
      return this->getObject(index, REL_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourceInformationInstanceObjectType(size_t index = 0) {
    try {
      return this->getObject(index, REL_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Target Information Instance Object Type
   */

  ID* getREL_18(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, REL_18);
  }

  ID* getTargetInformationInstanceObjectType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, REL_18);
  }

  bool isREL_18(size_t index = 0) {
    try {
      return this->getObject(index, REL_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTargetInformationInstanceObjectType(size_t index = 0) {
    try {
      return this->getObject(index, REL_18) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of REL */

} /* End of namespace HL7_29 */
#endif /* __REL_v29_H__ */
