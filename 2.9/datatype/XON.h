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


#ifndef __XON_v29_H__
#define __XON_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/HD.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* extended composite name and identification number for organizations */
class XON : public HL7Data {
 public:
  XON() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    XON_1, /* Organization Name */
    XON_2, /* Organization Name Type Code */
    XON_3, /* Identifier Check Digit */
    XON_4, /* Check Digit Scheme */
    XON_5, /* Assigning Authority */
    XON_6, /* Identifier Type Code */
    XON_7, /* Assigning Facility */
    XON_8, /* Name Representation Code */
    XON_9, /* Organization Identifier */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "XON"; }
  XON *create() const { return new XON(); }

 private:
  void init() {
    setName("XON");
    /* Init members */
    addObject<ST>(XON_1, "XON.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(XON_2, "XON.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(XON_3, "XON.3", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XON_4, "XON.4", HL7::initialized, HL7::repetition_off);
    addObject<HD>(XON_5, "XON.5", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XON_6, "XON.6", HL7::initialized, HL7::repetition_off);
    addObject<HD>(XON_7, "XON.7", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XON_8, "XON.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XON_9, "XON.9", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Organization Name
   */
  ST *getXON_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XON_1);
  }

  ST *getOrganizationName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XON_1);
  }

  bool isXON_1(size_t index = 0) {
    try {
      return this->getObject(index, XON_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrganizationName(size_t index = 0) {
    try {
      return this->getObject(index, XON_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Organization Name Type Code
   */
  CWE *getXON_2(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, XON_2);
  }

  CWE *getOrganizationNameTypeCode(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, XON_2);
  }

  bool isXON_2(size_t index = 0) {
    try {
      return this->getObject(index, XON_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrganizationNameTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, XON_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Identifier Check Digit
   */
  NM *getXON_3(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, XON_3);
  }

  NM *getIdentifierCheckDigit(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, XON_3);
  }

  bool isXON_3(size_t index = 0) {
    try {
      return this->getObject(index, XON_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifierCheckDigit(size_t index = 0) {
    try {
      return this->getObject(index, XON_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Check Digit Scheme
   */
  ID *getXON_4(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XON_4);
  }

  ID *getCheckDigitScheme(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XON_4);
  }

  bool isXON_4(size_t index = 0) {
    try {
      return this->getObject(index, XON_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCheckDigitScheme(size_t index = 0) {
    try {
      return this->getObject(index, XON_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assigning Authority
   */
  HD *getXON_5(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, XON_5);
  }

  HD *getAssigningAuthority(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, XON_5);
  }

  bool isXON_5(size_t index = 0) {
    try {
      return this->getObject(index, XON_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningAuthority(size_t index = 0) {
    try {
      return this->getObject(index, XON_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Identifier Type Code
   */
  ID *getXON_6(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XON_6);
  }

  ID *getIdentifierTypeCode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XON_6);
  }

  bool isXON_6(size_t index = 0) {
    try {
      return this->getObject(index, XON_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifierTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, XON_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assigning Facility
   */
  HD *getXON_7(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, XON_7);
  }

  HD *getAssigningFacility(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, XON_7);
  }

  bool isXON_7(size_t index = 0) {
    try {
      return this->getObject(index, XON_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningFacility(size_t index = 0) {
    try {
      return this->getObject(index, XON_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name Representation Code
   */
  ID *getXON_8(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XON_8);
  }

  ID *getNameRepresentationCode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XON_8);
  }

  bool isXON_8(size_t index = 0) {
    try {
      return this->getObject(index, XON_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameRepresentationCode(size_t index = 0) {
    try {
      return this->getObject(index, XON_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Organization Identifier
   */
  ST *getXON_9(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XON_9);
  }

  ST *getOrganizationIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XON_9);
  }

  bool isXON_9(size_t index = 0) {
    try {
      return this->getObject(index, XON_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrganizationIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, XON_9) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End XON */

} /* End HL7_29 */

#endif /* __XON_v29_H__ */
