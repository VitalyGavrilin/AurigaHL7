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


#ifndef __OM3_v29_H__
#define __OM3_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"

namespace HL7_29 {

/* OM3 */
class OM3 : public HL7Segment {
 public:
  OM3() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    OM3_1,
    OM3_2,
    OM3_3,
    OM3_4,
    OM3_5,
    OM3_6,
    OM3_7,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "OM3"; }
  OM3* create() const { return new OM3(); }

 private:
  void init() {
    setName("OM3");
    /* Init members */
    addObject<NM>(OM3_1, "OM3.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM3_2, "OM3.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM3_3, "OM3.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM3_4, "OM3.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM3_5, "OM3.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM3_6, "OM3.6", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OM3_7, "OM3.7", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Sequence Number - Test/Observation Master
   */

  NM* getOM3_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM3_1);
  }

  NM* getSequenceNumberTestObservationMaster(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM3_1);
  }

  bool isOM3_1(size_t index = 0) {
    try {
      return this->getObject(index, OM3_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSequenceNumberTestObservationMaster(size_t index = 0) {
    try {
      return this->getObject(index, OM3_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Preferred Coding System
   */

  CWE* getOM3_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM3_2);
  }

  CWE* getPreferredCodingSystem(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM3_2);
  }

  bool isOM3_2(size_t index = 0) {
    try {
      return this->getObject(index, OM3_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreferredCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, OM3_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Valid Coded "Answers"
   */

  CWE* getOM3_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM3_3);
  }

  CWE* getValidCodedAnswers(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM3_3);
  }

  bool isOM3_3(size_t index = 0) {
    try {
      return this->getObject(index, OM3_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValidCodedAnswers(size_t index = 0) {
    try {
      return this->getObject(index, OM3_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Normal Text/Codes for Categorical
   */

  CWE* getOM3_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM3_4);
  }

  CWE* getNormalTextCodesforCategorical(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM3_4);
  }

  bool isOM3_4(size_t index = 0) {
    try {
      return this->getObject(index, OM3_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNormalTextCodesforCategorical(size_t index = 0) {
    try {
      return this->getObject(index, OM3_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Abnormal Text/Codes for Categorical
   */

  CWE* getOM3_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM3_5);
  }

  CWE* getAbnormalTextCodesforCategorical(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM3_5);
  }

  bool isOM3_5(size_t index = 0) {
    try {
      return this->getObject(index, OM3_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAbnormalTextCodesforCategorical(size_t index = 0) {
    try {
      return this->getObject(index, OM3_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Critical Text/Codes for Categorical
   */

  CWE* getOM3_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM3_6);
  }

  CWE* getCriticalTextCodesforCategorical(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM3_6);
  }

  bool isOM3_6(size_t index = 0) {
    try {
      return this->getObject(index, OM3_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCriticalTextCodesforCategorical(size_t index = 0) {
    try {
      return this->getObject(index, OM3_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Value Type
   */

  ID* getOM3_7(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM3_7);
  }

  ID* getValueType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM3_7);
  }

  bool isOM3_7(size_t index = 0) {
    try {
      return this->getObject(index, OM3_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValueType(size_t index = 0) {
    try {
      return this->getObject(index, OM3_7) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of OM3 */

} /* End of namespace HL7_29 */
#endif /* __OM3_v29_H__ */
