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


#ifndef __TQ1_v29_H__
#define __TQ1_v29_H__

#include "../../common/Util.h"
#include "../datatype/CQ.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/RPT.h"
#include "../datatype/SI.h"
#include "../datatype/TM.h"
#include "../datatype/TX.h"

namespace HL7_29 {

/* TQ1 */
class TQ1 : public HL7Segment {
 public:
  TQ1() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    TQ1_1,
    TQ1_2,
    TQ1_3,
    TQ1_4,
    TQ1_5,
    TQ1_6,
    TQ1_7,
    TQ1_8,
    TQ1_9,
    TQ1_10,
    TQ1_11,
    TQ1_12,
    TQ1_13,
    TQ1_14,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "TQ1"; }
  TQ1* create() const { return new TQ1(); }

 private:
  void init() {
    setName("TQ1");
    /* Init members */
    addObject<SI>(TQ1_1, "TQ1.1", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(TQ1_2, "TQ1.2", HL7::initialized, HL7::repetition_off);
    addObject<RPT>(TQ1_3, "TQ1.3", HL7::initialized, HL7::repetition_off);
    addObject<TM>(TQ1_4, "TQ1.4", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(TQ1_5, "TQ1.5", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(TQ1_6, "TQ1.6", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(TQ1_7, "TQ1.7", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(TQ1_8, "TQ1.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(TQ1_9, "TQ1.9", HL7::initialized, HL7::repetition_off);
    addObject<TX>(TQ1_10, "TQ1.10", HL7::initialized, HL7::repetition_off);
    addObject<TX>(TQ1_11, "TQ1.11", HL7::initialized, HL7::repetition_off);
    addObject<ID>(TQ1_12, "TQ1.12", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(TQ1_13, "TQ1.13", HL7::initialized, HL7::repetition_off);
    addObject<NM>(TQ1_14, "TQ1.14", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - TQ1
   */

  SI* getTQ1_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, TQ1_1);
  }

  SI* getSetIDTQ1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, TQ1_1);
  }

  bool isTQ1_1(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDTQ1(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Quantity
   */

  CQ* getTQ1_2(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, TQ1_2);
  }

  CQ* getQuantity(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, TQ1_2);
  }

  bool isTQ1_2(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQuantity(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Repeat Pattern
   */

  RPT* getTQ1_3(size_t index = 0) {
    return (RPT*)this->getObjectSafe(index, TQ1_3);
  }

  RPT* getRepeatPattern(size_t index = 0) {
    return (RPT*)this->getObjectSafe(index, TQ1_3);
  }

  bool isTQ1_3(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRepeatPattern(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Explicit Time
   */

  TM* getTQ1_4(size_t index = 0) {
    return (TM*)this->getObjectSafe(index, TQ1_4);
  }

  TM* getExplicitTime(size_t index = 0) {
    return (TM*)this->getObjectSafe(index, TQ1_4);
  }

  bool isTQ1_4(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExplicitTime(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Relative Time and Units
   */

  CQ* getTQ1_5(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, TQ1_5);
  }

  CQ* getRelativeTimeandUnits(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, TQ1_5);
  }

  bool isTQ1_5(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRelativeTimeandUnits(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Service Duration
   */

  CQ* getTQ1_6(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, TQ1_6);
  }

  CQ* getServiceDuration(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, TQ1_6);
  }

  bool isTQ1_6(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isServiceDuration(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Start date/time
   */

  DTM* getTQ1_7(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, TQ1_7);
  }

  DTM* getStartdatetime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, TQ1_7);
  }

  bool isTQ1_7(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartdatetime(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * End date/time
   */

  DTM* getTQ1_8(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, TQ1_8);
  }

  DTM* getEnddatetime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, TQ1_8);
  }

  bool isTQ1_8(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnddatetime(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Priority
   */

  CWE* getTQ1_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, TQ1_9);
  }

  CWE* getPriority(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, TQ1_9);
  }

  bool isTQ1_9(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPriority(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Condition text
   */

  TX* getTQ1_10(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, TQ1_10);
  }

  TX* getConditiontext(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, TQ1_10);
  }

  bool isTQ1_10(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConditiontext(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Text instruction
   */

  TX* getTQ1_11(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, TQ1_11);
  }

  TX* getTextinstruction(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, TQ1_11);
  }

  bool isTQ1_11(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTextinstruction(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Conjunction
   */

  ID* getTQ1_12(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TQ1_12);
  }

  ID* getConjunction(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TQ1_12);
  }

  bool isTQ1_12(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConjunction(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Occurrence duration
   */

  CQ* getTQ1_13(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, TQ1_13);
  }

  CQ* getOccurrenceduration(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, TQ1_13);
  }

  bool isTQ1_13(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOccurrenceduration(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Total occurrences
   */

  NM* getTQ1_14(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, TQ1_14);
  }

  NM* getTotaloccurrences(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, TQ1_14);
  }

  bool isTQ1_14(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTotaloccurrences(size_t index = 0) {
    try {
      return this->getObject(index, TQ1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of TQ1 */

} /* End of namespace HL7_29 */
#endif /* __TQ1_v29_H__ */
