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


#ifndef __SHP_v29_H__
#define __SHP_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/TX.h"

namespace HL7_29 {

/* SHP */
class SHP : public HL7Segment {
 public:
  SHP() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    SHP_1,
    SHP_2,
    SHP_3,
    SHP_4,
    SHP_5,
    SHP_6,
    SHP_7,
    SHP_8,
    SHP_9,
    SHP_10,
    SHP_11,
    SHP_12,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "SHP"; }
  SHP* create() const { return new SHP(); }

 private:
  void init() {
    setName("SHP");
    /* Init members */
    addObject<EI>(SHP_1, "SHP.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(SHP_2, "SHP.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SHP_3, "SHP.3", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(SHP_4, "SHP.4", HL7::initialized, HL7::repetition_off);
    addObject<TX>(SHP_5, "SHP.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SHP_6, "SHP.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SHP_7, "SHP.7", HL7::initialized, HL7::repetition_off);
    addObject<NM>(SHP_8, "SHP.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SHP_9, "SHP.9", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SHP_10, "SHP.10", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SHP_11, "SHP.11", HL7::initialized, HL7::repetition_off);
    addObject<ID>(SHP_12, "SHP.12", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Shipment ID
   */

  EI* getSHP_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SHP_1);
  }

  EI* getShipmentID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SHP_1);
  }

  bool isSHP_1(size_t index = 0) {
    try {
      return this->getObject(index, SHP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isShipmentID(size_t index = 0) {
    try {
      return this->getObject(index, SHP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Internal Shipment ID
   */

  EI* getSHP_2(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SHP_2);
  }

  EI* getInternalShipmentID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SHP_2);
  }

  bool isSHP_2(size_t index = 0) {
    try {
      return this->getObject(index, SHP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInternalShipmentID(size_t index = 0) {
    try {
      return this->getObject(index, SHP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Shipment Status
   */

  CWE* getSHP_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SHP_3);
  }

  CWE* getShipmentStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SHP_3);
  }

  bool isSHP_3(size_t index = 0) {
    try {
      return this->getObject(index, SHP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isShipmentStatus(size_t index = 0) {
    try {
      return this->getObject(index, SHP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Shipment Status Date/Time
   */

  DTM* getSHP_4(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, SHP_4);
  }

  DTM* getShipmentStatusDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, SHP_4);
  }

  bool isSHP_4(size_t index = 0) {
    try {
      return this->getObject(index, SHP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isShipmentStatusDateTime(size_t index = 0) {
    try {
      return this->getObject(index, SHP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Shipment Status Reason
   */

  TX* getSHP_5(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, SHP_5);
  }

  TX* getShipmentStatusReason(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, SHP_5);
  }

  bool isSHP_5(size_t index = 0) {
    try {
      return this->getObject(index, SHP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isShipmentStatusReason(size_t index = 0) {
    try {
      return this->getObject(index, SHP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Shipment Priority
   */

  CWE* getSHP_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SHP_6);
  }

  CWE* getShipmentPriority(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SHP_6);
  }

  bool isSHP_6(size_t index = 0) {
    try {
      return this->getObject(index, SHP_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isShipmentPriority(size_t index = 0) {
    try {
      return this->getObject(index, SHP_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Shipment Confidentiality
   */

  CWE* getSHP_7(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SHP_7);
  }

  CWE* getShipmentConfidentiality(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SHP_7);
  }

  bool isSHP_7(size_t index = 0) {
    try {
      return this->getObject(index, SHP_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isShipmentConfidentiality(size_t index = 0) {
    try {
      return this->getObject(index, SHP_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of Packages in Shipment
   */

  NM* getSHP_8(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SHP_8);
  }

  NM* getNumberofPackagesinShipment(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SHP_8);
  }

  bool isSHP_8(size_t index = 0) {
    try {
      return this->getObject(index, SHP_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberofPackagesinShipment(size_t index = 0) {
    try {
      return this->getObject(index, SHP_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Shipment Condition
   */

  CWE* getSHP_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SHP_9);
  }

  CWE* getShipmentCondition(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SHP_9);
  }

  bool isSHP_9(size_t index = 0) {
    try {
      return this->getObject(index, SHP_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isShipmentCondition(size_t index = 0) {
    try {
      return this->getObject(index, SHP_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Shipment Handling Code
   */

  CWE* getSHP_10(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SHP_10);
  }

  CWE* getShipmentHandlingCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SHP_10);
  }

  bool isSHP_10(size_t index = 0) {
    try {
      return this->getObject(index, SHP_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isShipmentHandlingCode(size_t index = 0) {
    try {
      return this->getObject(index, SHP_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Shipment Risk Code
   */

  CWE* getSHP_11(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SHP_11);
  }

  CWE* getShipmentRiskCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SHP_11);
  }

  bool isSHP_11(size_t index = 0) {
    try {
      return this->getObject(index, SHP_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isShipmentRiskCode(size_t index = 0) {
    try {
      return this->getObject(index, SHP_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code
   */

  ID* getSHP_12(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, SHP_12);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, SHP_12);
  }

  bool isSHP_12(size_t index = 0) {
    try {
      return this->getObject(index, SHP_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, SHP_12) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of SHP */

} /* End of namespace HL7_29 */
#endif /* __SHP_v29_H__ */
