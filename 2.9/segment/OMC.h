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


#ifndef __OMC_v29_H__
#define __OMC_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* OMC */
class OMC : public HL7Segment {
 public:
  OMC() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    OMC_1,
    OMC_2,
    OMC_3,
    OMC_4,
    OMC_5,
    OMC_6,
    OMC_7,
    OMC_8,
    OMC_9,
    OMC_10,
    OMC_11,
    OMC_12,
    OMC_13,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "OMC"; }
  OMC* create() const { return new OMC(); }

 private:
  void init() {
    setName("OMC");
    /* Init members */
    addObject<NM>(OMC_1, "OMC.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OMC_2, "OMC.2", HL7::initialized, HL7::repetition_off);
    addObject<EI>(OMC_3, "OMC.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OMC_4, "OMC.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OMC_5, "OMC.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OMC_6, "OMC.6", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OMC_7, "OMC.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OMC_8, "OMC.8", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OMC_9, "OMC.9", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OMC_10, "OMC.10", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OMC_11, "OMC.11", HL7::initialized, HL7::repetition_off);
    addObject<NM>(OMC_12, "OMC.12", HL7::initialized, HL7::repetition_off);
    addObject<NM>(OMC_13, "OMC.13", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Sequence Number - Test/Observation Master
   */

  NM* getOMC_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OMC_1);
  }

  NM* getSequenceNumberTestObservationMaster(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OMC_1);
  }

  bool isOMC_1(size_t index = 0) {
    try {
      return this->getObject(index, OMC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSequenceNumberTestObservationMaster(size_t index = 0) {
    try {
      return this->getObject(index, OMC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Segment Action Code
   */

  ID* getOMC_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OMC_2);
  }

  ID* getSegmentActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OMC_2);
  }

  bool isOMC_2(size_t index = 0) {
    try {
      return this->getObject(index, OMC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentActionCode(size_t index = 0) {
    try {
      return this->getObject(index, OMC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Segment Unique Key
   */

  EI* getOMC_3(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, OMC_3);
  }

  EI* getSegmentUniqueKey(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, OMC_3);
  }

  bool isOMC_3(size_t index = 0) {
    try {
      return this->getObject(index, OMC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentUniqueKey(size_t index = 0) {
    try {
      return this->getObject(index, OMC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Clinical Information Request
   */

  CWE* getOMC_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OMC_4);
  }

  CWE* getClinicalInformationRequest(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OMC_4);
  }

  bool isOMC_4(size_t index = 0) {
    try {
      return this->getObject(index, OMC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isClinicalInformationRequest(size_t index = 0) {
    try {
      return this->getObject(index, OMC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Collection Event/Process Step
   */

  CWE* getOMC_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OMC_5);
  }

  CWE* getCollectionEventProcessStep(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OMC_5);
  }

  bool isOMC_5(size_t index = 0) {
    try {
      return this->getObject(index, OMC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCollectionEventProcessStep(size_t index = 0) {
    try {
      return this->getObject(index, OMC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Communication Location
   */

  CWE* getOMC_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OMC_6);
  }

  CWE* getCommunicationLocation(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OMC_6);
  }

  bool isOMC_6(size_t index = 0) {
    try {
      return this->getObject(index, OMC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCommunicationLocation(size_t index = 0) {
    try {
      return this->getObject(index, OMC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Answer Required
   */

  ID* getOMC_7(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OMC_7);
  }

  ID* getAnswerRequired(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OMC_7);
  }

  bool isOMC_7(size_t index = 0) {
    try {
      return this->getObject(index, OMC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAnswerRequired(size_t index = 0) {
    try {
      return this->getObject(index, OMC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Hint/Help Text
   */

  ST* getOMC_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OMC_8);
  }

  ST* getHintHelpText(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OMC_8);
  }

  bool isOMC_8(size_t index = 0) {
    try {
      return this->getObject(index, OMC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHintHelpText(size_t index = 0) {
    try {
      return this->getObject(index, OMC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Type of Answer
   */

  ID* getOMC_9(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OMC_9);
  }

  ID* getTypeofAnswer(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OMC_9);
  }

  bool isOMC_9(size_t index = 0) {
    try {
      return this->getObject(index, OMC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTypeofAnswer(size_t index = 0) {
    try {
      return this->getObject(index, OMC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Multiple Answers Allowed
   */

  ID* getOMC_10(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OMC_10);
  }

  ID* getMultipleAnswersAllowed(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OMC_10);
  }

  bool isOMC_10(size_t index = 0) {
    try {
      return this->getObject(index, OMC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMultipleAnswersAllowed(size_t index = 0) {
    try {
      return this->getObject(index, OMC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Answer Choices
   */

  CWE* getOMC_11(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OMC_11);
  }

  CWE* getAnswerChoices(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OMC_11);
  }

  bool isOMC_11(size_t index = 0) {
    try {
      return this->getObject(index, OMC_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAnswerChoices(size_t index = 0) {
    try {
      return this->getObject(index, OMC_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Character Limit
   */

  NM* getOMC_12(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OMC_12);
  }

  NM* getCharacterLimit(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OMC_12);
  }

  bool isOMC_12(size_t index = 0) {
    try {
      return this->getObject(index, OMC_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCharacterLimit(size_t index = 0) {
    try {
      return this->getObject(index, OMC_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of Decimals
   */

  NM* getOMC_13(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OMC_13);
  }

  NM* getNumberofDecimals(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OMC_13);
  }

  bool isOMC_13(size_t index = 0) {
    try {
      return this->getObject(index, OMC_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberofDecimals(size_t index = 0) {
    try {
      return this->getObject(index, OMC_13) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of OMC */

} /* End of namespace HL7_29 */
#endif /* __OMC_v29_H__ */
