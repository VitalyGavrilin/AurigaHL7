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


#ifndef __LOC_v29_H__
#define __LOC_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/PL.h"
#include "../datatype/ST.h"
#include "../datatype/XAD.h"
#include "../datatype/XON.h"
#include "../datatype/XTN.h"

namespace HL7_29 {

/* LOC */
class LOC : public HL7Segment {
 public:
  LOC() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    LOC_1,
    LOC_2,
    LOC_3,
    LOC_4,
    LOC_5,
    LOC_6,
    LOC_7,
    LOC_8,
    LOC_9,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "LOC"; }
  LOC* create() const { return new LOC(); }

 private:
  void init() {
    setName("LOC");
    /* Init members */
    addObject<PL>(LOC_1, "LOC.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(LOC_2, "LOC.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(LOC_3, "LOC.3", HL7::initialized, HL7::repetition_off);
    addObject<XON>(LOC_4, "LOC.4", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(LOC_5, "LOC.5", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(LOC_6, "LOC.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(LOC_7, "LOC.7", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(LOC_8, "LOC.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(LOC_9, "LOC.9", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Primary Key Value - LOC
   */

  PL* getLOC_1(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, LOC_1);
  }

  PL* getPrimaryKeyValueLOC(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, LOC_1);
  }

  bool isLOC_1(size_t index = 0) {
    try {
      return this->getObject(index, LOC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryKeyValueLOC(size_t index = 0) {
    try {
      return this->getObject(index, LOC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Description
   */

  ST* getLOC_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, LOC_2);
  }

  ST* getLocationDescription(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, LOC_2);
  }

  bool isLOC_2(size_t index = 0) {
    try {
      return this->getObject(index, LOC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationDescription(size_t index = 0) {
    try {
      return this->getObject(index, LOC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Type - LOC
   */

  CWE* getLOC_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LOC_3);
  }

  CWE* getLocationTypeLOC(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LOC_3);
  }

  bool isLOC_3(size_t index = 0) {
    try {
      return this->getObject(index, LOC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationTypeLOC(size_t index = 0) {
    try {
      return this->getObject(index, LOC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Organization Name - LOC
   */

  XON* getLOC_4(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, LOC_4);
  }

  XON* getOrganizationNameLOC(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, LOC_4);
  }

  bool isLOC_4(size_t index = 0) {
    try {
      return this->getObject(index, LOC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrganizationNameLOC(size_t index = 0) {
    try {
      return this->getObject(index, LOC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Address
   */

  XAD* getLOC_5(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, LOC_5);
  }

  XAD* getLocationAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, LOC_5);
  }

  bool isLOC_5(size_t index = 0) {
    try {
      return this->getObject(index, LOC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationAddress(size_t index = 0) {
    try {
      return this->getObject(index, LOC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Phone
   */

  XTN* getLOC_6(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, LOC_6);
  }

  XTN* getLocationPhone(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, LOC_6);
  }

  bool isLOC_6(size_t index = 0) {
    try {
      return this->getObject(index, LOC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationPhone(size_t index = 0) {
    try {
      return this->getObject(index, LOC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * License Number
   */

  CWE* getLOC_7(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LOC_7);
  }

  CWE* getLicenseNumber(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LOC_7);
  }

  bool isLOC_7(size_t index = 0) {
    try {
      return this->getObject(index, LOC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLicenseNumber(size_t index = 0) {
    try {
      return this->getObject(index, LOC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Equipment
   */

  CWE* getLOC_8(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LOC_8);
  }

  CWE* getLocationEquipment(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LOC_8);
  }

  bool isLOC_8(size_t index = 0) {
    try {
      return this->getObject(index, LOC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationEquipment(size_t index = 0) {
    try {
      return this->getObject(index, LOC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Service Code
   */

  CWE* getLOC_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LOC_9);
  }

  CWE* getLocationServiceCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, LOC_9);
  }

  bool isLOC_9(size_t index = 0) {
    try {
      return this->getObject(index, LOC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationServiceCode(size_t index = 0) {
    try {
      return this->getObject(index, LOC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of LOC */

} /* End of namespace HL7_29 */
#endif /* __LOC_v29_H__ */
