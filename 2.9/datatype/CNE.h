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


#ifndef __CNE_v29_H__
#define __CNE_v29_H__

#include "../../common/Util.h"
#include "../datatype/DTM.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* coded with no exceptions */
class CNE : public HL7Data {
 public:
  CNE() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CNE_1, /* Identifier */
    CNE_2, /* Text */
    CNE_3, /* Name of Coding System */
    CNE_4, /* Alternate Identifier */
    CNE_5, /* Alternate Text */
    CNE_6, /* Name of Alternate Coding System */
    CNE_7, /* Coding System Version ID */
    CNE_8, /* Alternate Coding System Version ID */
    CNE_9, /* Original Text */
    CNE_10, /* Second Alternate Identifier */
    CNE_11, /* Second Alternate Text */
    CNE_12, /* Name of Second Alternate Coding System */
    CNE_13, /* Second Alternate Coding System Version ID */
    CNE_14, /* Coding System OID */
    CNE_15, /* Value Set OID */
    CNE_16, /* Value Set Version ID */
    CNE_17, /* Alternate Coding System OID */
    CNE_18, /* Alternate Value Set OID */
    CNE_19, /* Alternate Value Set Version ID */
    CNE_20, /* Second Alternate Coding System OID */
    CNE_21, /* Second Alternate Value Set OID */
    CNE_22, /* Second Alternate Value Set Version ID */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CNE"; }
  CNE *create() const { return new CNE(); }

 private:
  void init() {
    setName("CNE");
    /* Init members */
    addObject<ST>(CNE_1, "CNE.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNE_2, "CNE.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CNE_3, "CNE.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNE_4, "CNE.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNE_5, "CNE.5", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CNE_6, "CNE.6", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNE_7, "CNE.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNE_8, "CNE.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNE_9, "CNE.9", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNE_10, "CNE.10", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNE_11, "CNE.11", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CNE_12, "CNE.12", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNE_13, "CNE.13", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNE_14, "CNE.14", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNE_15, "CNE.15", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CNE_16, "CNE.16", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNE_17, "CNE.17", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNE_18, "CNE.18", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CNE_19, "CNE.19", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNE_20, "CNE.20", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNE_21, "CNE.21", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CNE_22, "CNE.22", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Identifier
   */
  ST *getCNE_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_1);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_1);
  }

  bool isCNE_1(size_t index = 0) {
    try {
      return this->getObject(index, CNE_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CNE_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Text
   */
  ST *getCNE_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_2);
  }

  ST *getText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_2);
  }

  bool isCNE_2(size_t index = 0) {
    try {
      return this->getObject(index, CNE_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isText(size_t index = 0) {
    try {
      return this->getObject(index, CNE_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name of Coding System
   */
  ID *getCNE_3(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CNE_3);
  }

  ID *getNameofCodingSystem(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CNE_3);
  }

  bool isCNE_3(size_t index = 0) {
    try {
      return this->getObject(index, CNE_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameofCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CNE_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Identifier
   */
  ST *getCNE_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_4);
  }

  ST *getAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_4);
  }

  bool isCNE_4(size_t index = 0) {
    try {
      return this->getObject(index, CNE_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CNE_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Text
   */
  ST *getCNE_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_5);
  }

  ST *getAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_5);
  }

  bool isCNE_5(size_t index = 0) {
    try {
      return this->getObject(index, CNE_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CNE_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name of Alternate Coding System
   */
  ID *getCNE_6(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CNE_6);
  }

  ID *getNameofAlternateCodingSystem(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CNE_6);
  }

  bool isCNE_6(size_t index = 0) {
    try {
      return this->getObject(index, CNE_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameofAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CNE_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Coding System Version ID
   */
  ST *getCNE_7(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_7);
  }

  ST *getCodingSystemVersionID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_7);
  }

  bool isCNE_7(size_t index = 0) {
    try {
      return this->getObject(index, CNE_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCodingSystemVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CNE_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Coding System Version ID
   */
  ST *getCNE_8(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_8);
  }

  ST *getAlternateCodingSystemVersionID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_8);
  }

  bool isCNE_8(size_t index = 0) {
    try {
      return this->getObject(index, CNE_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateCodingSystemVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CNE_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Original Text
   */
  ST *getCNE_9(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_9);
  }

  ST *getOriginalText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_9);
  }

  bool isCNE_9(size_t index = 0) {
    try {
      return this->getObject(index, CNE_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOriginalText(size_t index = 0) {
    try {
      return this->getObject(index, CNE_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Alternate Identifier
   */
  ST *getCNE_10(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_10);
  }

  ST *getSecondAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_10);
  }

  bool isCNE_10(size_t index = 0) {
    try {
      return this->getObject(index, CNE_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CNE_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Alternate Text
   */
  ST *getCNE_11(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_11);
  }

  ST *getSecondAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_11);
  }

  bool isCNE_11(size_t index = 0) {
    try {
      return this->getObject(index, CNE_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CNE_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name of Second Alternate Coding System
   */
  ID *getCNE_12(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CNE_12);
  }

  ID *getNameofSecondAlternateCodingSystem(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CNE_12);
  }

  bool isCNE_12(size_t index = 0) {
    try {
      return this->getObject(index, CNE_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameofSecondAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CNE_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Alternate Coding System Version ID
   */
  ST *getCNE_13(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_13);
  }

  ST *getSecondAlternateCodingSystemVersionID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_13);
  }

  bool isCNE_13(size_t index = 0) {
    try {
      return this->getObject(index, CNE_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAlternateCodingSystemVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CNE_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Coding System OID
   */
  ST *getCNE_14(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_14);
  }

  ST *getCodingSystemOID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_14);
  }

  bool isCNE_14(size_t index = 0) {
    try {
      return this->getObject(index, CNE_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCodingSystemOID(size_t index = 0) {
    try {
      return this->getObject(index, CNE_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Value Set OID
   */
  ST *getCNE_15(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_15);
  }

  ST *getValueSetOID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_15);
  }

  bool isCNE_15(size_t index = 0) {
    try {
      return this->getObject(index, CNE_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValueSetOID(size_t index = 0) {
    try {
      return this->getObject(index, CNE_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Value Set Version ID
   */
  DTM *getCNE_16(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, CNE_16);
  }

  DTM *getValueSetVersionID(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, CNE_16);
  }

  bool isCNE_16(size_t index = 0) {
    try {
      return this->getObject(index, CNE_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValueSetVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CNE_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Coding System OID
   */
  ST *getCNE_17(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_17);
  }

  ST *getAlternateCodingSystemOID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_17);
  }

  bool isCNE_17(size_t index = 0) {
    try {
      return this->getObject(index, CNE_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateCodingSystemOID(size_t index = 0) {
    try {
      return this->getObject(index, CNE_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Value Set OID
   */
  ST *getCNE_18(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_18);
  }

  ST *getAlternateValueSetOID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_18);
  }

  bool isCNE_18(size_t index = 0) {
    try {
      return this->getObject(index, CNE_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateValueSetOID(size_t index = 0) {
    try {
      return this->getObject(index, CNE_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Value Set Version ID
   */
  DTM *getCNE_19(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, CNE_19);
  }

  DTM *getAlternateValueSetVersionID(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, CNE_19);
  }

  bool isCNE_19(size_t index = 0) {
    try {
      return this->getObject(index, CNE_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateValueSetVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CNE_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Alternate Coding System OID
   */
  ST *getCNE_20(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_20);
  }

  ST *getSecondAlternateCodingSystemOID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_20);
  }

  bool isCNE_20(size_t index = 0) {
    try {
      return this->getObject(index, CNE_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAlternateCodingSystemOID(size_t index = 0) {
    try {
      return this->getObject(index, CNE_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Alternate Value Set OID
   */
  ST *getCNE_21(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_21);
  }

  ST *getSecondAlternateValueSetOID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNE_21);
  }

  bool isCNE_21(size_t index = 0) {
    try {
      return this->getObject(index, CNE_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAlternateValueSetOID(size_t index = 0) {
    try {
      return this->getObject(index, CNE_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Alternate Value Set Version ID
   */
  DTM *getCNE_22(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, CNE_22);
  }

  DTM *getSecondAlternateValueSetVersionID(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, CNE_22);
  }

  bool isCNE_22(size_t index = 0) {
    try {
      return this->getObject(index, CNE_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAlternateValueSetVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CNE_22) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CNE */

} /* End HL7_29 */

#endif /* __CNE_v29_H__ */
