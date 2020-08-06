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


#ifndef __AL1_v29_H__
#define __AL1_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* AL1 */
class AL1 : public HL7Segment {
 public:
  AL1() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    AL1_1,
    AL1_2,
    AL1_3,
    AL1_4,
    AL1_5,
    AL1_6,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "AL1"; }
  AL1* create() const { return new AL1(); }

 private:
  void init() {
    setName("AL1");
    /* Init members */
    addObject<SI>(AL1_1, "AL1.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(AL1_2, "AL1.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(AL1_3, "AL1.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(AL1_4, "AL1.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(AL1_5, "AL1.5", HL7::initialized, HL7::repetition_off);
    addObject<ST>(AL1_6, "AL1.6", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - AL1
   */

  SI* getAL1_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, AL1_1);
  }

  SI* getSetIDAL1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, AL1_1);
  }

  bool isAL1_1(size_t index = 0) {
    try {
      return this->getObject(index, AL1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDAL1(size_t index = 0) {
    try {
      return this->getObject(index, AL1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allergen Type Code
   */

  CWE* getAL1_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AL1_2);
  }

  CWE* getAllergenTypeCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AL1_2);
  }

  bool isAL1_2(size_t index = 0) {
    try {
      return this->getObject(index, AL1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllergenTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, AL1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allergen Code/Mnemonic/Description
   */

  CWE* getAL1_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AL1_3);
  }

  CWE* getAllergenCodeMnemonicDescription(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AL1_3);
  }

  bool isAL1_3(size_t index = 0) {
    try {
      return this->getObject(index, AL1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllergenCodeMnemonicDescription(size_t index = 0) {
    try {
      return this->getObject(index, AL1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allergy Severity Code
   */

  CWE* getAL1_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AL1_4);
  }

  CWE* getAllergySeverityCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AL1_4);
  }

  bool isAL1_4(size_t index = 0) {
    try {
      return this->getObject(index, AL1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllergySeverityCode(size_t index = 0) {
    try {
      return this->getObject(index, AL1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allergy Reaction Code
   */

  ST* getAL1_5(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, AL1_5);
  }

  ST* getAllergyReactionCode(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, AL1_5);
  }

  bool isAL1_5(size_t index = 0) {
    try {
      return this->getObject(index, AL1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllergyReactionCode(size_t index = 0) {
    try {
      return this->getObject(index, AL1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Identification Date
   */

  ST* getAL1_6(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, AL1_6);
  }

  ST* getIdentificationDate(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, AL1_6);
  }

  bool isAL1_6(size_t index = 0) {
    try {
      return this->getObject(index, AL1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentificationDate(size_t index = 0) {
    try {
      return this->getObject(index, AL1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of AL1 */

} /* End of namespace HL7_29 */
#endif /* __AL1_v29_H__ */
