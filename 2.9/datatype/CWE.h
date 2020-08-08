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


#ifndef __CWE_v29_H__
#define __CWE_v29_H__

#include "../../common/Util.h"
#include "../datatype/DTM.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* coded with exceptions */
class CWE : public HL7Data {
 public:
  CWE() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CWE_1, /* Identifier */
    CWE_2, /* Text */
    CWE_3, /* Name of Coding System */
    CWE_4, /* Alternate Identifier */
    CWE_5, /* Alternate Text */
    CWE_6, /* Name of Alternate Coding System */
    CWE_7, /* Coding System Version ID */
    CWE_8, /* Alternate Coding System Version ID */
    CWE_9, /* Original Text */
    CWE_10, /* Second Alternate Identifier */
    CWE_11, /* Second Alternate Text */
    CWE_12, /* Name of Second Alternate Coding System */
    CWE_13, /* Second Alternate Coding System Version ID */
    CWE_14, /* Coding System OID */
    CWE_15, /* Value Set OID */
    CWE_16, /* Value Set Version ID */
    CWE_17, /* Alternate Coding System OID */
    CWE_18, /* Alternate Value Set OID */
    CWE_19, /* Alternate Value Set Version ID */
    CWE_20, /* Second Alternate Coding System OID */
    CWE_21, /* Second Alternate Value Set OID */
    CWE_22, /* Second Alternate Value Set Version ID */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CWE"; }
  CWE *create() const { return new CWE(); }

 private:
  void init() {
    setName("CWE");
    /* Init members */
    addObject<ST>(CWE_1, "CWE.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CWE_2, "CWE.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CWE_3, "CWE.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CWE_4, "CWE.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CWE_5, "CWE.5", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CWE_6, "CWE.6", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CWE_7, "CWE.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CWE_8, "CWE.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CWE_9, "CWE.9", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CWE_10, "CWE.10", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CWE_11, "CWE.11", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CWE_12, "CWE.12", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CWE_13, "CWE.13", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CWE_14, "CWE.14", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CWE_15, "CWE.15", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CWE_16, "CWE.16", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CWE_17, "CWE.17", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CWE_18, "CWE.18", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CWE_19, "CWE.19", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CWE_20, "CWE.20", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CWE_21, "CWE.21", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CWE_22, "CWE.22", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Identifier
   */
  ST *getCWE_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_1);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_1);
  }

  bool isCWE_1(size_t index = 0) {
    try {
      return this->getObject(index, CWE_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CWE_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Text
   */
  ST *getCWE_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_2);
  }

  ST *getText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_2);
  }

  bool isCWE_2(size_t index = 0) {
    try {
      return this->getObject(index, CWE_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isText(size_t index = 0) {
    try {
      return this->getObject(index, CWE_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name of Coding System
   */
  ID *getCWE_3(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CWE_3);
  }

  ID *getNameofCodingSystem(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CWE_3);
  }

  bool isCWE_3(size_t index = 0) {
    try {
      return this->getObject(index, CWE_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameofCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CWE_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Identifier
   */
  ST *getCWE_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_4);
  }

  ST *getAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_4);
  }

  bool isCWE_4(size_t index = 0) {
    try {
      return this->getObject(index, CWE_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CWE_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Text
   */
  ST *getCWE_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_5);
  }

  ST *getAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_5);
  }

  bool isCWE_5(size_t index = 0) {
    try {
      return this->getObject(index, CWE_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CWE_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name of Alternate Coding System
   */
  ID *getCWE_6(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CWE_6);
  }

  ID *getNameofAlternateCodingSystem(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CWE_6);
  }

  bool isCWE_6(size_t index = 0) {
    try {
      return this->getObject(index, CWE_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameofAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CWE_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Coding System Version ID
   */
  ST *getCWE_7(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_7);
  }

  ST *getCodingSystemVersionID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_7);
  }

  bool isCWE_7(size_t index = 0) {
    try {
      return this->getObject(index, CWE_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCodingSystemVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CWE_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Coding System Version ID
   */
  ST *getCWE_8(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_8);
  }

  ST *getAlternateCodingSystemVersionID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_8);
  }

  bool isCWE_8(size_t index = 0) {
    try {
      return this->getObject(index, CWE_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateCodingSystemVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CWE_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Original Text
   */
  ST *getCWE_9(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_9);
  }

  ST *getOriginalText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_9);
  }

  bool isCWE_9(size_t index = 0) {
    try {
      return this->getObject(index, CWE_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOriginalText(size_t index = 0) {
    try {
      return this->getObject(index, CWE_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Alternate Identifier
   */
  ST *getCWE_10(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_10);
  }

  ST *getSecondAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_10);
  }

  bool isCWE_10(size_t index = 0) {
    try {
      return this->getObject(index, CWE_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CWE_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Alternate Text
   */
  ST *getCWE_11(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_11);
  }

  ST *getSecondAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_11);
  }

  bool isCWE_11(size_t index = 0) {
    try {
      return this->getObject(index, CWE_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CWE_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name of Second Alternate Coding System
   */
  ID *getCWE_12(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CWE_12);
  }

  ID *getNameofSecondAlternateCodingSystem(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CWE_12);
  }

  bool isCWE_12(size_t index = 0) {
    try {
      return this->getObject(index, CWE_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameofSecondAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CWE_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Alternate Coding System Version ID
   */
  ST *getCWE_13(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_13);
  }

  ST *getSecondAlternateCodingSystemVersionID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_13);
  }

  bool isCWE_13(size_t index = 0) {
    try {
      return this->getObject(index, CWE_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAlternateCodingSystemVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CWE_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Coding System OID
   */
  ST *getCWE_14(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_14);
  }

  ST *getCodingSystemOID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_14);
  }

  bool isCWE_14(size_t index = 0) {
    try {
      return this->getObject(index, CWE_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCodingSystemOID(size_t index = 0) {
    try {
      return this->getObject(index, CWE_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Value Set OID
   */
  ST *getCWE_15(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_15);
  }

  ST *getValueSetOID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_15);
  }

  bool isCWE_15(size_t index = 0) {
    try {
      return this->getObject(index, CWE_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValueSetOID(size_t index = 0) {
    try {
      return this->getObject(index, CWE_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Value Set Version ID
   */
  DTM *getCWE_16(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, CWE_16);
  }

  DTM *getValueSetVersionID(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, CWE_16);
  }

  bool isCWE_16(size_t index = 0) {
    try {
      return this->getObject(index, CWE_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValueSetVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CWE_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Coding System OID
   */
  ST *getCWE_17(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_17);
  }

  ST *getAlternateCodingSystemOID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_17);
  }

  bool isCWE_17(size_t index = 0) {
    try {
      return this->getObject(index, CWE_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateCodingSystemOID(size_t index = 0) {
    try {
      return this->getObject(index, CWE_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Value Set OID
   */
  ST *getCWE_18(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_18);
  }

  ST *getAlternateValueSetOID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_18);
  }

  bool isCWE_18(size_t index = 0) {
    try {
      return this->getObject(index, CWE_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateValueSetOID(size_t index = 0) {
    try {
      return this->getObject(index, CWE_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Value Set Version ID
   */
  DTM *getCWE_19(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, CWE_19);
  }

  DTM *getAlternateValueSetVersionID(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, CWE_19);
  }

  bool isCWE_19(size_t index = 0) {
    try {
      return this->getObject(index, CWE_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateValueSetVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CWE_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Alternate Coding System OID
   */
  ST *getCWE_20(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_20);
  }

  ST *getSecondAlternateCodingSystemOID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_20);
  }

  bool isCWE_20(size_t index = 0) {
    try {
      return this->getObject(index, CWE_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAlternateCodingSystemOID(size_t index = 0) {
    try {
      return this->getObject(index, CWE_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Alternate Value Set OID
   */
  ST *getCWE_21(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_21);
  }

  ST *getSecondAlternateValueSetOID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CWE_21);
  }

  bool isCWE_21(size_t index = 0) {
    try {
      return this->getObject(index, CWE_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAlternateValueSetOID(size_t index = 0) {
    try {
      return this->getObject(index, CWE_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Alternate Value Set Version ID
   */
  DTM *getCWE_22(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, CWE_22);
  }

  DTM *getSecondAlternateValueSetVersionID(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, CWE_22);
  }

  bool isCWE_22(size_t index = 0) {
    try {
      return this->getObject(index, CWE_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAlternateValueSetVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CWE_22) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CWE */

} /* End HL7_29 */

#endif /* __CWE_v29_H__ */
