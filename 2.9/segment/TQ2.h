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


#ifndef __TQ2_v29_H__
#define __TQ2_v29_H__

#include "../../common/Util.h"
#include "../datatype/CQ.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/SI.h"

namespace HL7_29 {

/* TQ2 */
class TQ2 : public HL7Segment {
 public:
  TQ2() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    TQ2_1,
    TQ2_2,
    TQ2_3,
    TQ2_4,
    TQ2_5,
    TQ2_6,
    TQ2_7,
    TQ2_8,
    TQ2_9,
    TQ2_10,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "TQ2"; }
  TQ2* create() const { return new TQ2(); }

 private:
  void init() {
    setName("TQ2");
    /* Init members */
    addObject<SI>(TQ2_1, "TQ2.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(TQ2_2, "TQ2.2", HL7::initialized, HL7::repetition_off);
    addObject<EI>(TQ2_3, "TQ2.3", HL7::initialized, HL7::repetition_off);
    addObject<EI>(TQ2_4, "TQ2.4", HL7::initialized, HL7::repetition_off);
    addObject<EI>(TQ2_5, "TQ2.5", HL7::initialized, HL7::repetition_off);
    addObject<ID>(TQ2_6, "TQ2.6", HL7::initialized, HL7::repetition_off);
    addObject<ID>(TQ2_7, "TQ2.7", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(TQ2_8, "TQ2.8", HL7::initialized, HL7::repetition_off);
    addObject<NM>(TQ2_9, "TQ2.9", HL7::initialized, HL7::repetition_off);
    addObject<ID>(TQ2_10, "TQ2.10", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - TQ2
   */

  SI* getTQ2_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, TQ2_1);
  }

  SI* getSetIDTQ2(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, TQ2_1);
  }

  bool isTQ2_1(size_t index = 0) {
    try {
      return this->getObject(index, TQ2_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDTQ2(size_t index = 0) {
    try {
      return this->getObject(index, TQ2_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sequence/Results Flag
   */

  ID* getTQ2_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TQ2_2);
  }

  ID* getSequenceResultsFlag(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TQ2_2);
  }

  bool isTQ2_2(size_t index = 0) {
    try {
      return this->getObject(index, TQ2_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSequenceResultsFlag(size_t index = 0) {
    try {
      return this->getObject(index, TQ2_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Related Placer Number
   */

  EI* getTQ2_3(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, TQ2_3);
  }

  EI* getRelatedPlacerNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, TQ2_3);
  }

  bool isTQ2_3(size_t index = 0) {
    try {
      return this->getObject(index, TQ2_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRelatedPlacerNumber(size_t index = 0) {
    try {
      return this->getObject(index, TQ2_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Related Filler Number
   */

  EI* getTQ2_4(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, TQ2_4);
  }

  EI* getRelatedFillerNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, TQ2_4);
  }

  bool isTQ2_4(size_t index = 0) {
    try {
      return this->getObject(index, TQ2_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRelatedFillerNumber(size_t index = 0) {
    try {
      return this->getObject(index, TQ2_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Related Placer Group Number
   */

  EI* getTQ2_5(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, TQ2_5);
  }

  EI* getRelatedPlacerGroupNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, TQ2_5);
  }

  bool isTQ2_5(size_t index = 0) {
    try {
      return this->getObject(index, TQ2_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRelatedPlacerGroupNumber(size_t index = 0) {
    try {
      return this->getObject(index, TQ2_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sequence Condition Code
   */

  ID* getTQ2_6(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TQ2_6);
  }

  ID* getSequenceConditionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TQ2_6);
  }

  bool isTQ2_6(size_t index = 0) {
    try {
      return this->getObject(index, TQ2_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSequenceConditionCode(size_t index = 0) {
    try {
      return this->getObject(index, TQ2_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Cyclic Entry/Exit Indicator
   */

  ID* getTQ2_7(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TQ2_7);
  }

  ID* getCyclicEntryExitIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TQ2_7);
  }

  bool isTQ2_7(size_t index = 0) {
    try {
      return this->getObject(index, TQ2_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCyclicEntryExitIndicator(size_t index = 0) {
    try {
      return this->getObject(index, TQ2_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sequence Condition Time Interval
   */

  CQ* getTQ2_8(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, TQ2_8);
  }

  CQ* getSequenceConditionTimeInterval(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, TQ2_8);
  }

  bool isTQ2_8(size_t index = 0) {
    try {
      return this->getObject(index, TQ2_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSequenceConditionTimeInterval(size_t index = 0) {
    try {
      return this->getObject(index, TQ2_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Cyclic Group Maximum Number of Repeats
   */

  NM* getTQ2_9(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, TQ2_9);
  }

  NM* getCyclicGroupMaximumNumberofRepeats(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, TQ2_9);
  }

  bool isTQ2_9(size_t index = 0) {
    try {
      return this->getObject(index, TQ2_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCyclicGroupMaximumNumberofRepeats(size_t index = 0) {
    try {
      return this->getObject(index, TQ2_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Special Service Request Relationship
   */

  ID* getTQ2_10(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TQ2_10);
  }

  ID* getSpecialServiceRequestRelationship(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TQ2_10);
  }

  bool isTQ2_10(size_t index = 0) {
    try {
      return this->getObject(index, TQ2_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialServiceRequestRelationship(size_t index = 0) {
    try {
      return this->getObject(index, TQ2_10) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of TQ2 */

} /* End of namespace HL7_29 */
#endif /* __TQ2_v29_H__ */
