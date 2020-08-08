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


#ifndef __OM2_v29_H__
#define __OM2_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DLT.h"
#include "../datatype/NM.h"
#include "../datatype/RFR.h"
#include "../datatype/TX.h"

namespace HL7_29 {

/* OM2 */
class OM2 : public HL7Segment {
 public:
  OM2() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    OM2_1,
    OM2_2,
    OM2_3,
    OM2_4,
    OM2_5,
    OM2_6,
    OM2_7,
    OM2_8,
    OM2_9,
    OM2_10,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "OM2"; }
  OM2* create() const { return new OM2(); }

 private:
  void init() {
    setName("OM2");
    /* Init members */
    addObject<NM>(OM2_1, "OM2.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM2_2, "OM2.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(OM2_3, "OM2.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OM2_4, "OM2.4", HL7::initialized, HL7::repetition_off);
    addObject<TX>(OM2_5, "OM2.5", HL7::initialized, HL7::repetition_off);
    addObject<RFR>(OM2_6, "OM2.6", HL7::initialized, HL7::repetition_off);
    addObject<RFR>(OM2_7, "OM2.7", HL7::initialized, HL7::repetition_off);
    addObject<RFR>(OM2_8, "OM2.8", HL7::initialized, HL7::repetition_off);
    addObject<DLT>(OM2_9, "OM2.9", HL7::initialized, HL7::repetition_off);
    addObject<NM>(OM2_10, "OM2.10", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Sequence Number - Test/Observation Master
   */

  NM* getOM2_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM2_1);
  }

  NM* getSequenceNumberTestObservationMaster(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM2_1);
  }

  bool isOM2_1(size_t index = 0) {
    try {
      return this->getObject(index, OM2_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSequenceNumberTestObservationMaster(size_t index = 0) {
    try {
      return this->getObject(index, OM2_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Units of Measure
   */

  CWE* getOM2_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM2_2);
  }

  CWE* getUnitsofMeasure(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM2_2);
  }

  bool isOM2_2(size_t index = 0) {
    try {
      return this->getObject(index, OM2_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUnitsofMeasure(size_t index = 0) {
    try {
      return this->getObject(index, OM2_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Range of Decimal Precision
   */

  NM* getOM2_3(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM2_3);
  }

  NM* getRangeofDecimalPrecision(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM2_3);
  }

  bool isOM2_3(size_t index = 0) {
    try {
      return this->getObject(index, OM2_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRangeofDecimalPrecision(size_t index = 0) {
    try {
      return this->getObject(index, OM2_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Corresponding SI Units of Measure
   */

  CWE* getOM2_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM2_4);
  }

  CWE* getCorrespondingSIUnitsofMeasure(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OM2_4);
  }

  bool isOM2_4(size_t index = 0) {
    try {
      return this->getObject(index, OM2_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCorrespondingSIUnitsofMeasure(size_t index = 0) {
    try {
      return this->getObject(index, OM2_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * SI Conversion Factor
   */

  TX* getOM2_5(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM2_5);
  }

  TX* getSIConversionFactor(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM2_5);
  }

  bool isOM2_5(size_t index = 0) {
    try {
      return this->getObject(index, OM2_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSIConversionFactor(size_t index = 0) {
    try {
      return this->getObject(index, OM2_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reference
   */

  RFR* getOM2_6(size_t index = 0) {
    return (RFR*)this->getObjectSafe(index, OM2_6);
  }

  RFR* getReference(size_t index = 0) {
    return (RFR*)this->getObjectSafe(index, OM2_6);
  }

  bool isOM2_6(size_t index = 0) {
    try {
      return this->getObject(index, OM2_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReference(size_t index = 0) {
    try {
      return this->getObject(index, OM2_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Critical Range for Ordinal and Continuous
   */

  RFR* getOM2_7(size_t index = 0) {
    return (RFR*)this->getObjectSafe(index, OM2_7);
  }

  RFR* getCriticalRangeforOrdinalandContinuous(size_t index = 0) {
    return (RFR*)this->getObjectSafe(index, OM2_7);
  }

  bool isOM2_7(size_t index = 0) {
    try {
      return this->getObject(index, OM2_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCriticalRangeforOrdinalandContinuous(size_t index = 0) {
    try {
      return this->getObject(index, OM2_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Absolute Range for Ordinal and Continuous
   */

  RFR* getOM2_8(size_t index = 0) {
    return (RFR*)this->getObjectSafe(index, OM2_8);
  }

  RFR* getAbsoluteRangeforOrdinalandContinuous(size_t index = 0) {
    return (RFR*)this->getObjectSafe(index, OM2_8);
  }

  bool isOM2_8(size_t index = 0) {
    try {
      return this->getObject(index, OM2_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAbsoluteRangeforOrdinalandContinuous(size_t index = 0) {
    try {
      return this->getObject(index, OM2_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Delta Check Criteria
   */

  DLT* getOM2_9(size_t index = 0) {
    return (DLT*)this->getObjectSafe(index, OM2_9);
  }

  DLT* getDeltaCheckCriteria(size_t index = 0) {
    return (DLT*)this->getObjectSafe(index, OM2_9);
  }

  bool isOM2_9(size_t index = 0) {
    try {
      return this->getObject(index, OM2_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeltaCheckCriteria(size_t index = 0) {
    try {
      return this->getObject(index, OM2_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Minimum Meaningful Increments
   */

  NM* getOM2_10(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM2_10);
  }

  NM* getMinimumMeaningfulIncrements(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM2_10);
  }

  bool isOM2_10(size_t index = 0) {
    try {
      return this->getObject(index, OM2_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMinimumMeaningfulIncrements(size_t index = 0) {
    try {
      return this->getObject(index, OM2_10) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of OM2 */

} /* End of namespace HL7_29 */
#endif /* __OM2_v29_H__ */
