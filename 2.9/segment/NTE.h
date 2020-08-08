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


#ifndef __NTE_v29_H__
#define __NTE_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/FT.h"
#include "../datatype/ID.h"
#include "../datatype/SI.h"
#include "../datatype/XCN.h"

namespace HL7_29 {

/* NTE */
class NTE : public HL7Segment {
 public:
  NTE() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    NTE_1,
    NTE_2,
    NTE_3,
    NTE_4,
    NTE_5,
    NTE_6,
    NTE_7,
    NTE_8,
    NTE_9,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "NTE"; }
  NTE* create() const { return new NTE(); }

 private:
  void init() {
    setName("NTE");
    /* Init members */
    addObject<SI>(NTE_1, "NTE.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(NTE_2, "NTE.2", HL7::initialized, HL7::repetition_off);
    addObject<FT>(NTE_3, "NTE.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(NTE_4, "NTE.4", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(NTE_5, "NTE.5", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(NTE_6, "NTE.6", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(NTE_7, "NTE.7", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(NTE_8, "NTE.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(NTE_9, "NTE.9", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - NTE
   */

  SI* getNTE_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, NTE_1);
  }

  SI* getSetIDNTE(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, NTE_1);
  }

  bool isNTE_1(size_t index = 0) {
    try {
      return this->getObject(index, NTE_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDNTE(size_t index = 0) {
    try {
      return this->getObject(index, NTE_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Source of Comment
   */

  ID* getNTE_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, NTE_2);
  }

  ID* getSourceofComment(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, NTE_2);
  }

  bool isNTE_2(size_t index = 0) {
    try {
      return this->getObject(index, NTE_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourceofComment(size_t index = 0) {
    try {
      return this->getObject(index, NTE_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Comment
   */

  FT* getNTE_3(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, NTE_3);
  }

  FT* getComment(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, NTE_3);
  }

  bool isNTE_3(size_t index = 0) {
    try {
      return this->getObject(index, NTE_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isComment(size_t index = 0) {
    try {
      return this->getObject(index, NTE_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Comment Type
   */

  CWE* getNTE_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, NTE_4);
  }

  CWE* getCommentType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, NTE_4);
  }

  bool isNTE_4(size_t index = 0) {
    try {
      return this->getObject(index, NTE_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCommentType(size_t index = 0) {
    try {
      return this->getObject(index, NTE_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entered By
   */

  XCN* getNTE_5(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, NTE_5);
  }

  XCN* getEnteredBy(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, NTE_5);
  }

  bool isNTE_5(size_t index = 0) {
    try {
      return this->getObject(index, NTE_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteredBy(size_t index = 0) {
    try {
      return this->getObject(index, NTE_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entered Date/Time
   */

  DTM* getNTE_6(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, NTE_6);
  }

  DTM* getEnteredDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, NTE_6);
  }

  bool isNTE_6(size_t index = 0) {
    try {
      return this->getObject(index, NTE_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteredDateTime(size_t index = 0) {
    try {
      return this->getObject(index, NTE_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Start Date
   */

  DTM* getNTE_7(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, NTE_7);
  }

  DTM* getEffectiveStartDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, NTE_7);
  }

  bool isNTE_7(size_t index = 0) {
    try {
      return this->getObject(index, NTE_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveStartDate(size_t index = 0) {
    try {
      return this->getObject(index, NTE_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expiration Date
   */

  DTM* getNTE_8(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, NTE_8);
  }

  DTM* getExpirationDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, NTE_8);
  }

  bool isNTE_8(size_t index = 0) {
    try {
      return this->getObject(index, NTE_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, NTE_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Coded Comment
   */

  CWE* getNTE_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, NTE_9);
  }

  CWE* getCodedComment(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, NTE_9);
  }

  bool isNTE_9(size_t index = 0) {
    try {
      return this->getObject(index, NTE_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCodedComment(size_t index = 0) {
    try {
      return this->getObject(index, NTE_9) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of NTE */

} /* End of namespace HL7_29 */
#endif /* __NTE_v29_H__ */
