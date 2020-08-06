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


#ifndef __CSU_v29_H__
#define __CSU_v29_H__

#include "../../common/Util.h"
#include "../datatype/DTM.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* channel sensitivity and units */
class CSU : public HL7Data {
 public:
  CSU() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CSU_1, /* Channel Sensitivity */
    CSU_2, /* Unit of Measure Identifier */
    CSU_3, /* Unit of Measure Description */
    CSU_4, /* Unit of Measure Coding System */
    CSU_5, /* Alternate Unit of Measure Identifier */
    CSU_6, /* Alternate Unit of Measure Description */
    CSU_7, /* Alternate Unit of Measure Coding System */
    CSU_8, /* Unit of Measure Coding System Version ID */
    CSU_9, /* Alternate Unit of Measure Coding System Version ID */
    CSU_10, /* Original Text */
    CSU_11, /* Second Alternate Unit of Measure Identifier */
    CSU_12, /* Second Alternate Unit of Measure Text */
    CSU_13, /* Name of Second Alternate Unit of Measure Coding System */
    CSU_14, /* Second Alternate Unit of Measure Coding System Version ID */
    CSU_15, /* Unit of Measure Coding System OID */
    CSU_16, /* Unit of Measure Value Set OID */
    CSU_17, /* Unit of Measure Value Set Version ID */
    CSU_18, /* Alternate Unit of Measure Coding System OID */
    CSU_19, /* Alternate Unit of Measure Value Set OID */
    CSU_20, /* Alternate Unit of Measure Value Set Version ID */
    CSU_21, /* Second Alternate Unit of Measure Coding System OID */
    CSU_22, /* Second Alternate Unit of Measure Value Set OID */
    CSU_23, /* Second Alternate Unit of Measure Value Set Version ID */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CSU"; }
  CSU *create() const { return new CSU(); }

 private:
  void init() {
    setName("CSU");
    /* Init members */
    addObject<NM>(CSU_1, "CSU.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CSU_2, "CSU.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CSU_3, "CSU.3", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CSU_4, "CSU.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CSU_5, "CSU.5", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CSU_6, "CSU.6", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CSU_7, "CSU.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CSU_8, "CSU.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CSU_9, "CSU.9", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CSU_10, "CSU.10", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CSU_11, "CSU.11", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CSU_12, "CSU.12", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CSU_13, "CSU.13", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CSU_14, "CSU.14", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CSU_15, "CSU.15", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CSU_16, "CSU.16", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CSU_17, "CSU.17", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CSU_18, "CSU.18", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CSU_19, "CSU.19", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CSU_20, "CSU.20", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CSU_21, "CSU.21", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CSU_22, "CSU.22", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CSU_23, "CSU.23", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Channel Sensitivity
   */
  NM *getCSU_1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CSU_1);
  }

  NM *getChannelSensitivity(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CSU_1);
  }

  bool isCSU_1(size_t index = 0) {
    try {
      return this->getObject(index, CSU_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChannelSensitivity(size_t index = 0) {
    try {
      return this->getObject(index, CSU_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Unit of Measure Identifier
   */
  ST *getCSU_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_2);
  }

  ST *getUnitofMeasureIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_2);
  }

  bool isCSU_2(size_t index = 0) {
    try {
      return this->getObject(index, CSU_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUnitofMeasureIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CSU_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Unit of Measure Description
   */
  ST *getCSU_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_3);
  }

  ST *getUnitofMeasureDescription(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_3);
  }

  bool isCSU_3(size_t index = 0) {
    try {
      return this->getObject(index, CSU_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUnitofMeasureDescription(size_t index = 0) {
    try {
      return this->getObject(index, CSU_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Unit of Measure Coding System
   */
  ID *getCSU_4(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CSU_4);
  }

  ID *getUnitofMeasureCodingSystem(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CSU_4);
  }

  bool isCSU_4(size_t index = 0) {
    try {
      return this->getObject(index, CSU_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUnitofMeasureCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CSU_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Unit of Measure Identifier
   */
  ST *getCSU_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_5);
  }

  ST *getAlternateUnitofMeasureIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_5);
  }

  bool isCSU_5(size_t index = 0) {
    try {
      return this->getObject(index, CSU_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateUnitofMeasureIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CSU_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Unit of Measure Description
   */
  ST *getCSU_6(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_6);
  }

  ST *getAlternateUnitofMeasureDescription(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_6);
  }

  bool isCSU_6(size_t index = 0) {
    try {
      return this->getObject(index, CSU_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateUnitofMeasureDescription(size_t index = 0) {
    try {
      return this->getObject(index, CSU_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Unit of Measure Coding System
   */
  ID *getCSU_7(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CSU_7);
  }

  ID *getAlternateUnitofMeasureCodingSystem(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CSU_7);
  }

  bool isCSU_7(size_t index = 0) {
    try {
      return this->getObject(index, CSU_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateUnitofMeasureCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CSU_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Unit of Measure Coding System Version ID
   */
  ST *getCSU_8(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_8);
  }

  ST *getUnitofMeasureCodingSystemVersionID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_8);
  }

  bool isCSU_8(size_t index = 0) {
    try {
      return this->getObject(index, CSU_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUnitofMeasureCodingSystemVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CSU_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Unit of Measure Coding System Version ID
   */
  ST *getCSU_9(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_9);
  }

  ST *getAlternateUnitofMeasureCodingSystemVersionID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_9);
  }

  bool isCSU_9(size_t index = 0) {
    try {
      return this->getObject(index, CSU_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateUnitofMeasureCodingSystemVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CSU_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Original Text
   */
  ST *getCSU_10(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_10);
  }

  ST *getOriginalText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_10);
  }

  bool isCSU_10(size_t index = 0) {
    try {
      return this->getObject(index, CSU_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOriginalText(size_t index = 0) {
    try {
      return this->getObject(index, CSU_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Alternate Unit of Measure Identifier
   */
  ST *getCSU_11(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_11);
  }

  ST *getSecondAlternateUnitofMeasureIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_11);
  }

  bool isCSU_11(size_t index = 0) {
    try {
      return this->getObject(index, CSU_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAlternateUnitofMeasureIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CSU_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Alternate Unit of Measure Text
   */
  ST *getCSU_12(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_12);
  }

  ST *getSecondAlternateUnitofMeasureText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_12);
  }

  bool isCSU_12(size_t index = 0) {
    try {
      return this->getObject(index, CSU_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAlternateUnitofMeasureText(size_t index = 0) {
    try {
      return this->getObject(index, CSU_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name of Second Alternate Unit of Measure Coding System
   */
  ID *getCSU_13(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CSU_13);
  }

  ID *getNameofSecondAlternateUnitofMeasureCodingSystem(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CSU_13);
  }

  bool isCSU_13(size_t index = 0) {
    try {
      return this->getObject(index, CSU_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameofSecondAlternateUnitofMeasureCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CSU_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Alternate Unit of Measure Coding System Version ID
   */
  ST *getCSU_14(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_14);
  }

  ST *getSecondAlternateUnitofMeasureCodingSystemVersionID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_14);
  }

  bool isCSU_14(size_t index = 0) {
    try {
      return this->getObject(index, CSU_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAlternateUnitofMeasureCodingSystemVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CSU_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Unit of Measure Coding System OID
   */
  ST *getCSU_15(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_15);
  }

  ST *getUnitofMeasureCodingSystemOID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_15);
  }

  bool isCSU_15(size_t index = 0) {
    try {
      return this->getObject(index, CSU_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUnitofMeasureCodingSystemOID(size_t index = 0) {
    try {
      return this->getObject(index, CSU_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Unit of Measure Value Set OID
   */
  ST *getCSU_16(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_16);
  }

  ST *getUnitofMeasureValueSetOID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_16);
  }

  bool isCSU_16(size_t index = 0) {
    try {
      return this->getObject(index, CSU_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUnitofMeasureValueSetOID(size_t index = 0) {
    try {
      return this->getObject(index, CSU_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Unit of Measure Value Set Version ID
   */
  DTM *getCSU_17(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, CSU_17);
  }

  DTM *getUnitofMeasureValueSetVersionID(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, CSU_17);
  }

  bool isCSU_17(size_t index = 0) {
    try {
      return this->getObject(index, CSU_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUnitofMeasureValueSetVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CSU_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Unit of Measure Coding System OID
   */
  ST *getCSU_18(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_18);
  }

  ST *getAlternateUnitofMeasureCodingSystemOID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_18);
  }

  bool isCSU_18(size_t index = 0) {
    try {
      return this->getObject(index, CSU_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateUnitofMeasureCodingSystemOID(size_t index = 0) {
    try {
      return this->getObject(index, CSU_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Unit of Measure Value Set OID
   */
  ST *getCSU_19(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_19);
  }

  ST *getAlternateUnitofMeasureValueSetOID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_19);
  }

  bool isCSU_19(size_t index = 0) {
    try {
      return this->getObject(index, CSU_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateUnitofMeasureValueSetOID(size_t index = 0) {
    try {
      return this->getObject(index, CSU_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Unit of Measure Value Set Version ID
   */
  DTM *getCSU_20(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, CSU_20);
  }

  DTM *getAlternateUnitofMeasureValueSetVersionID(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, CSU_20);
  }

  bool isCSU_20(size_t index = 0) {
    try {
      return this->getObject(index, CSU_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateUnitofMeasureValueSetVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CSU_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Alternate Unit of Measure Coding System OID
   */
  ST *getCSU_21(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_21);
  }

  ST *getSecondAlternateUnitofMeasureCodingSystemOID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_21);
  }

  bool isCSU_21(size_t index = 0) {
    try {
      return this->getObject(index, CSU_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAlternateUnitofMeasureCodingSystemOID(size_t index = 0) {
    try {
      return this->getObject(index, CSU_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Alternate Unit of Measure Value Set OID
   */
  ST *getCSU_22(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_22);
  }

  ST *getSecondAlternateUnitofMeasureValueSetOID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_22);
  }

  bool isCSU_22(size_t index = 0) {
    try {
      return this->getObject(index, CSU_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAlternateUnitofMeasureValueSetOID(size_t index = 0) {
    try {
      return this->getObject(index, CSU_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Alternate Unit of Measure Value Set Version ID
   */
  ST *getCSU_23(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_23);
  }

  ST *getSecondAlternateUnitofMeasureValueSetVersionID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CSU_23);
  }

  bool isCSU_23(size_t index = 0) {
    try {
      return this->getObject(index, CSU_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondAlternateUnitofMeasureValueSetVersionID(size_t index = 0) {
    try {
      return this->getObject(index, CSU_23) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CSU */

} /* End HL7_29 */

#endif /* __CSU_v29_H__ */
