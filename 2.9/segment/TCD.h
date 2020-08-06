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


#ifndef __TCD_v29_H__
#define __TCD_v29_H__

#include "../../common/Util.h"
#include "../datatype/CQ.h"
#include "../datatype/CWE.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/SN.h"

namespace HL7_29 {

/* TCD */
class TCD : public HL7Segment {
 public:
  TCD() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    TCD_1,
    TCD_2,
    TCD_3,
    TCD_4,
    TCD_5,
    TCD_6,
    TCD_7,
    TCD_8,
    TCD_9,
    TCD_10,
    TCD_11,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "TCD"; }
  TCD* create() const { return new TCD(); }

 private:
  void init() {
    setName("TCD");
    /* Init members */
    addObject<CWE>(TCD_1, "TCD.1", HL7::initialized, HL7::repetition_off);
    addObject<SN>(TCD_2, "TCD.2", HL7::initialized, HL7::repetition_off);
    addObject<SN>(TCD_3, "TCD.3", HL7::initialized, HL7::repetition_off);
    addObject<SN>(TCD_4, "TCD.4", HL7::initialized, HL7::repetition_off);
    addObject<SN>(TCD_5, "TCD.5", HL7::initialized, HL7::repetition_off);
    addObject<ID>(TCD_6, "TCD.6", HL7::initialized, HL7::repetition_off);
    addObject<ID>(TCD_7, "TCD.7", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(TCD_8, "TCD.8", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(TCD_9, "TCD.9", HL7::initialized, HL7::repetition_off);
    addObject<NM>(TCD_10, "TCD.10", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(TCD_11, "TCD.11", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Universal Service Identifier
   */

  CWE* getTCD_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, TCD_1);
  }

  CWE* getUniversalServiceIdentifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, TCD_1);
  }

  bool isTCD_1(size_t index = 0) {
    try {
      return this->getObject(index, TCD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniversalServiceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, TCD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Auto-Dilution Factor
   */

  SN* getTCD_2(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, TCD_2);
  }

  SN* getAutoDilutionFactor(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, TCD_2);
  }

  bool isTCD_2(size_t index = 0) {
    try {
      return this->getObject(index, TCD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAutoDilutionFactor(size_t index = 0) {
    try {
      return this->getObject(index, TCD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Rerun Dilution Factor
   */

  SN* getTCD_3(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, TCD_3);
  }

  SN* getRerunDilutionFactor(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, TCD_3);
  }

  bool isTCD_3(size_t index = 0) {
    try {
      return this->getObject(index, TCD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRerunDilutionFactor(size_t index = 0) {
    try {
      return this->getObject(index, TCD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pre-Dilution Factor
   */

  SN* getTCD_4(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, TCD_4);
  }

  SN* getPreDilutionFactor(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, TCD_4);
  }

  bool isTCD_4(size_t index = 0) {
    try {
      return this->getObject(index, TCD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreDilutionFactor(size_t index = 0) {
    try {
      return this->getObject(index, TCD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Endogenous Content of Pre-Dilution Diluent
   */

  SN* getTCD_5(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, TCD_5);
  }

  SN* getEndogenousContentofPreDilutionDiluent(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, TCD_5);
  }

  bool isTCD_5(size_t index = 0) {
    try {
      return this->getObject(index, TCD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEndogenousContentofPreDilutionDiluent(size_t index = 0) {
    try {
      return this->getObject(index, TCD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Automatic Repeat Allowed
   */

  ID* getTCD_6(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TCD_6);
  }

  ID* getAutomaticRepeatAllowed(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TCD_6);
  }

  bool isTCD_6(size_t index = 0) {
    try {
      return this->getObject(index, TCD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAutomaticRepeatAllowed(size_t index = 0) {
    try {
      return this->getObject(index, TCD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reflex Allowed
   */

  ID* getTCD_7(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TCD_7);
  }

  ID* getReflexAllowed(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TCD_7);
  }

  bool isTCD_7(size_t index = 0) {
    try {
      return this->getObject(index, TCD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReflexAllowed(size_t index = 0) {
    try {
      return this->getObject(index, TCD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Analyte Repeat Status
   */

  CWE* getTCD_8(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, TCD_8);
  }

  CWE* getAnalyteRepeatStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, TCD_8);
  }

  bool isTCD_8(size_t index = 0) {
    try {
      return this->getObject(index, TCD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAnalyteRepeatStatus(size_t index = 0) {
    try {
      return this->getObject(index, TCD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Consumption Quantity
   */

  CQ* getTCD_9(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, TCD_9);
  }

  CQ* getSpecimenConsumptionQuantity(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, TCD_9);
  }

  bool isTCD_9(size_t index = 0) {
    try {
      return this->getObject(index, TCD_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenConsumptionQuantity(size_t index = 0) {
    try {
      return this->getObject(index, TCD_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pool Size
   */

  NM* getTCD_10(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, TCD_10);
  }

  NM* getPoolSize(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, TCD_10);
  }

  bool isTCD_10(size_t index = 0) {
    try {
      return this->getObject(index, TCD_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPoolSize(size_t index = 0) {
    try {
      return this->getObject(index, TCD_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Auto-Dilution Type
   */

  CWE* getTCD_11(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, TCD_11);
  }

  CWE* getAutoDilutionType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, TCD_11);
  }

  bool isTCD_11(size_t index = 0) {
    try {
      return this->getObject(index, TCD_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAutoDilutionType(size_t index = 0) {
    try {
      return this->getObject(index, TCD_11) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of TCD */

} /* End of namespace HL7_29 */
#endif /* __TCD_v29_H__ */
