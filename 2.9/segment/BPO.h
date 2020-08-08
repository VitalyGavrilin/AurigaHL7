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


#ifndef __BPO_v29_H__
#define __BPO_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/PL.h"
#include "../datatype/SI.h"
#include "../datatype/XAD.h"

namespace HL7_29 {

/* BPO */
class BPO : public HL7Segment {
 public:
  BPO() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    BPO_1,
    BPO_2,
    BPO_3,
    BPO_4,
    BPO_5,
    BPO_6,
    BPO_7,
    BPO_8,
    BPO_9,
    BPO_10,
    BPO_11,
    BPO_12,
    BPO_13,
    BPO_14,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "BPO"; }
  BPO* create() const { return new BPO(); }

 private:
  void init() {
    setName("BPO");
    /* Init members */
    addObject<SI>(BPO_1, "BPO.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(BPO_2, "BPO.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(BPO_3, "BPO.3", HL7::initialized, HL7::repetition_off);
    addObject<NM>(BPO_4, "BPO.4", HL7::initialized, HL7::repetition_off);
    addObject<NM>(BPO_5, "BPO.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(BPO_6, "BPO.6", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(BPO_7, "BPO.7", HL7::initialized, HL7::repetition_off);
    addObject<PL>(BPO_8, "BPO.8", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(BPO_9, "BPO.9", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(BPO_10, "BPO.10", HL7::initialized, HL7::repetition_off);
    addObject<PL>(BPO_11, "BPO.11", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(BPO_12, "BPO.12", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(BPO_13, "BPO.13", HL7::initialized, HL7::repetition_off);
    addObject<ID>(BPO_14, "BPO.14", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID – BPO
   */

  SI* getBPO_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, BPO_1);
  }

  SI* getSetIDBPO(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, BPO_1);
  }

  bool isBPO_1(size_t index = 0) {
    try {
      return this->getObject(index, BPO_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDBPO(size_t index = 0) {
    try {
      return this->getObject(index, BPO_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Universal Service Identifier
   */

  CWE* getBPO_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BPO_2);
  }

  CWE* getBPUniversalServiceIdentifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BPO_2);
  }

  bool isBPO_2(size_t index = 0) {
    try {
      return this->getObject(index, BPO_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPUniversalServiceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, BPO_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Processing Requirements
   */

  CWE* getBPO_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BPO_3);
  }

  CWE* getBPProcessingRequirements(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BPO_3);
  }

  bool isBPO_3(size_t index = 0) {
    try {
      return this->getObject(index, BPO_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPProcessingRequirements(size_t index = 0) {
    try {
      return this->getObject(index, BPO_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Quantity
   */

  NM* getBPO_4(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, BPO_4);
  }

  NM* getBPQuantity(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, BPO_4);
  }

  bool isBPO_4(size_t index = 0) {
    try {
      return this->getObject(index, BPO_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPQuantity(size_t index = 0) {
    try {
      return this->getObject(index, BPO_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Amount
   */

  NM* getBPO_5(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, BPO_5);
  }

  NM* getBPAmount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, BPO_5);
  }

  bool isBPO_5(size_t index = 0) {
    try {
      return this->getObject(index, BPO_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPAmount(size_t index = 0) {
    try {
      return this->getObject(index, BPO_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Units
   */

  CWE* getBPO_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BPO_6);
  }

  CWE* getBPUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BPO_6);
  }

  bool isBPO_6(size_t index = 0) {
    try {
      return this->getObject(index, BPO_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPUnits(size_t index = 0) {
    try {
      return this->getObject(index, BPO_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Intended Use Date/Time
   */

  DTM* getBPO_7(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, BPO_7);
  }

  DTM* getBPIntendedUseDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, BPO_7);
  }

  bool isBPO_7(size_t index = 0) {
    try {
      return this->getObject(index, BPO_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPIntendedUseDateTime(size_t index = 0) {
    try {
      return this->getObject(index, BPO_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Intended Dispense From Location
   */

  PL* getBPO_8(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, BPO_8);
  }

  PL* getBPIntendedDispenseFromLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, BPO_8);
  }

  bool isBPO_8(size_t index = 0) {
    try {
      return this->getObject(index, BPO_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPIntendedDispenseFromLocation(size_t index = 0) {
    try {
      return this->getObject(index, BPO_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Intended Dispense From Address
   */

  XAD* getBPO_9(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, BPO_9);
  }

  XAD* getBPIntendedDispenseFromAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, BPO_9);
  }

  bool isBPO_9(size_t index = 0) {
    try {
      return this->getObject(index, BPO_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPIntendedDispenseFromAddress(size_t index = 0) {
    try {
      return this->getObject(index, BPO_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Requested Dispense Date/Time
   */

  DTM* getBPO_10(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, BPO_10);
  }

  DTM* getBPRequestedDispenseDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, BPO_10);
  }

  bool isBPO_10(size_t index = 0) {
    try {
      return this->getObject(index, BPO_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPRequestedDispenseDateTime(size_t index = 0) {
    try {
      return this->getObject(index, BPO_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Requested Dispense To Location
   */

  PL* getBPO_11(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, BPO_11);
  }

  PL* getBPRequestedDispenseToLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, BPO_11);
  }

  bool isBPO_11(size_t index = 0) {
    try {
      return this->getObject(index, BPO_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPRequestedDispenseToLocation(size_t index = 0) {
    try {
      return this->getObject(index, BPO_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Requested Dispense To Address
   */

  XAD* getBPO_12(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, BPO_12);
  }

  XAD* getBPRequestedDispenseToAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, BPO_12);
  }

  bool isBPO_12(size_t index = 0) {
    try {
      return this->getObject(index, BPO_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPRequestedDispenseToAddress(size_t index = 0) {
    try {
      return this->getObject(index, BPO_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Indication for Use
   */

  CWE* getBPO_13(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BPO_13);
  }

  CWE* getBPIndicationforUse(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BPO_13);
  }

  bool isBPO_13(size_t index = 0) {
    try {
      return this->getObject(index, BPO_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPIndicationforUse(size_t index = 0) {
    try {
      return this->getObject(index, BPO_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Informed Consent Indicator
   */

  ID* getBPO_14(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, BPO_14);
  }

  ID* getBPInformedConsentIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, BPO_14);
  }

  bool isBPO_14(size_t index = 0) {
    try {
      return this->getObject(index, BPO_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPInformedConsentIndicator(size_t index = 0) {
    try {
      return this->getObject(index, BPO_14) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of BPO */

} /* End of namespace HL7_29 */
#endif /* __BPO_v29_H__ */
