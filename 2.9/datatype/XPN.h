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


#ifndef __XPN_v29_H__
#define __XPN_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/FN.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* extended person name */
class XPN : public HL7Data {
 public:
  XPN() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    XPN_1, /* Family Name */
    XPN_2, /* Given Name */
    XPN_3, /* Second and Further Given Names or Initials Thereof */
    XPN_4, /* Suffix */
    XPN_5, /* Prefix */
    XPN_6, /* Name Type Code */
    XPN_7, /* Name Representation Code */
    XPN_8, /* Name Context */
    XPN_9, /* Name Assembly Order */
    XPN_10, /* Effective Date */
    XPN_11, /* Expiration Date */
    XPN_12, /* Professional Suffix */
    XPN_13, /* Called By */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "XPN"; }
  XPN *create() const { return new XPN(); }

 private:
  void init() {
    setName("XPN");
    /* Init members */
    addObject<FN>(XPN_1, "XPN.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XPN_2, "XPN.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XPN_3, "XPN.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XPN_4, "XPN.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XPN_5, "XPN.5", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XPN_6, "XPN.6", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XPN_7, "XPN.7", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(XPN_8, "XPN.8", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XPN_9, "XPN.9", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(XPN_10, "XPN.10", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(XPN_11, "XPN.11", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XPN_12, "XPN.12", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XPN_13, "XPN.13", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Family Name
   */
  FN *getXPN_1(size_t index = 0) {
    return (FN *)this->getObjectSafe(index, XPN_1);
  }

  FN *getFamilyName(size_t index = 0) {
    return (FN *)this->getObjectSafe(index, XPN_1);
  }

  bool isXPN_1(size_t index = 0) {
    try {
      return this->getObject(index, XPN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFamilyName(size_t index = 0) {
    try {
      return this->getObject(index, XPN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Given Name
   */
  ST *getXPN_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XPN_2);
  }

  ST *getGivenName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XPN_2);
  }

  bool isXPN_2(size_t index = 0) {
    try {
      return this->getObject(index, XPN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGivenName(size_t index = 0) {
    try {
      return this->getObject(index, XPN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second and Further Given Names or Initials Thereof
   */
  ST *getXPN_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XPN_3);
  }

  ST *getSecondandFurtherGivenNamesorInitialsThereof(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XPN_3);
  }

  bool isXPN_3(size_t index = 0) {
    try {
      return this->getObject(index, XPN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondandFurtherGivenNamesorInitialsThereof(size_t index = 0) {
    try {
      return this->getObject(index, XPN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Suffix
   */
  ST *getXPN_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XPN_4);
  }

  ST *getSuffix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XPN_4);
  }

  bool isXPN_4(size_t index = 0) {
    try {
      return this->getObject(index, XPN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSuffix(size_t index = 0) {
    try {
      return this->getObject(index, XPN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Prefix
   */
  ST *getXPN_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XPN_5);
  }

  ST *getPrefix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XPN_5);
  }

  bool isXPN_5(size_t index = 0) {
    try {
      return this->getObject(index, XPN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrefix(size_t index = 0) {
    try {
      return this->getObject(index, XPN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name Type Code
   */
  ID *getXPN_6(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XPN_6);
  }

  ID *getNameTypeCode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XPN_6);
  }

  bool isXPN_6(size_t index = 0) {
    try {
      return this->getObject(index, XPN_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, XPN_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name Representation Code
   */
  ID *getXPN_7(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XPN_7);
  }

  ID *getNameRepresentationCode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XPN_7);
  }

  bool isXPN_7(size_t index = 0) {
    try {
      return this->getObject(index, XPN_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameRepresentationCode(size_t index = 0) {
    try {
      return this->getObject(index, XPN_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name Context
   */
  CWE *getXPN_8(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, XPN_8);
  }

  CWE *getNameContext(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, XPN_8);
  }

  bool isXPN_8(size_t index = 0) {
    try {
      return this->getObject(index, XPN_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameContext(size_t index = 0) {
    try {
      return this->getObject(index, XPN_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name Assembly Order
   */
  ID *getXPN_9(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XPN_9);
  }

  ID *getNameAssemblyOrder(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XPN_9);
  }

  bool isXPN_9(size_t index = 0) {
    try {
      return this->getObject(index, XPN_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameAssemblyOrder(size_t index = 0) {
    try {
      return this->getObject(index, XPN_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Date
   */
  DTM *getXPN_10(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, XPN_10);
  }

  DTM *getEffectiveDate(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, XPN_10);
  }

  bool isXPN_10(size_t index = 0) {
    try {
      return this->getObject(index, XPN_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, XPN_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expiration Date
   */
  DTM *getXPN_11(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, XPN_11);
  }

  DTM *getExpirationDate(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, XPN_11);
  }

  bool isXPN_11(size_t index = 0) {
    try {
      return this->getObject(index, XPN_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, XPN_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Professional Suffix
   */
  ST *getXPN_12(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XPN_12);
  }

  ST *getProfessionalSuffix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XPN_12);
  }

  bool isXPN_12(size_t index = 0) {
    try {
      return this->getObject(index, XPN_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProfessionalSuffix(size_t index = 0) {
    try {
      return this->getObject(index, XPN_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Called By
   */
  ST *getXPN_13(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XPN_13);
  }

  ST *getCalledBy(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XPN_13);
  }

  bool isXPN_13(size_t index = 0) {
    try {
      return this->getObject(index, XPN_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCalledBy(size_t index = 0) {
    try {
      return this->getObject(index, XPN_13) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End XPN */

} /* End HL7_29 */

#endif /* __XPN_v29_H__ */
