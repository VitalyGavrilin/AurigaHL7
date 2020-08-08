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


#ifndef __RXC_v29_H__
#define __RXC_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"

namespace HL7_29 {

/* RXC */
class RXC : public HL7Segment {
 public:
  RXC() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    RXC_1,
    RXC_2,
    RXC_3,
    RXC_4,
    RXC_5,
    RXC_6,
    RXC_7,
    RXC_8,
    RXC_9,
    RXC_10,
    RXC_11,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "RXC"; }
  RXC* create() const { return new RXC(); }

 private:
  void init() {
    setName("RXC");
    /* Init members */
    addObject<ID>(RXC_1, "RXC.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXC_2, "RXC.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXC_3, "RXC.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXC_4, "RXC.4", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXC_5, "RXC.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXC_6, "RXC.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXC_7, "RXC.7", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXC_8, "RXC.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXC_9, "RXC.9", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXC_10, "RXC.10", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXC_11, "RXC.11", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * RX Component Type
   */

  ID* getRXC_1(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXC_1);
  }

  ID* getRXComponentType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXC_1);
  }

  bool isRXC_1(size_t index = 0) {
    try {
      return this->getObject(index, RXC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRXComponentType(size_t index = 0) {
    try {
      return this->getObject(index, RXC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Component Code
   */

  CWE* getRXC_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXC_2);
  }

  CWE* getComponentCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXC_2);
  }

  bool isRXC_2(size_t index = 0) {
    try {
      return this->getObject(index, RXC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isComponentCode(size_t index = 0) {
    try {
      return this->getObject(index, RXC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Component Amount
   */

  NM* getRXC_3(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXC_3);
  }

  NM* getComponentAmount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXC_3);
  }

  bool isRXC_3(size_t index = 0) {
    try {
      return this->getObject(index, RXC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isComponentAmount(size_t index = 0) {
    try {
      return this->getObject(index, RXC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Component Units
   */

  CWE* getRXC_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXC_4);
  }

  CWE* getComponentUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXC_4);
  }

  bool isRXC_4(size_t index = 0) {
    try {
      return this->getObject(index, RXC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isComponentUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Component Strength
   */

  NM* getRXC_5(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXC_5);
  }

  NM* getComponentStrength(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXC_5);
  }

  bool isRXC_5(size_t index = 0) {
    try {
      return this->getObject(index, RXC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isComponentStrength(size_t index = 0) {
    try {
      return this->getObject(index, RXC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Component Strength Units
   */

  CWE* getRXC_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXC_6);
  }

  CWE* getComponentStrengthUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXC_6);
  }

  bool isRXC_6(size_t index = 0) {
    try {
      return this->getObject(index, RXC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isComponentStrengthUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Supplementary Code
   */

  CWE* getRXC_7(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXC_7);
  }

  CWE* getSupplementaryCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXC_7);
  }

  bool isRXC_7(size_t index = 0) {
    try {
      return this->getObject(index, RXC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSupplementaryCode(size_t index = 0) {
    try {
      return this->getObject(index, RXC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Component Drug Strength Volume
   */

  NM* getRXC_8(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXC_8);
  }

  NM* getComponentDrugStrengthVolume(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXC_8);
  }

  bool isRXC_8(size_t index = 0) {
    try {
      return this->getObject(index, RXC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isComponentDrugStrengthVolume(size_t index = 0) {
    try {
      return this->getObject(index, RXC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Component Drug Strength Volume Units
   */

  CWE* getRXC_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXC_9);
  }

  CWE* getComponentDrugStrengthVolumeUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXC_9);
  }

  bool isRXC_9(size_t index = 0) {
    try {
      return this->getObject(index, RXC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isComponentDrugStrengthVolumeUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense Amount
   */

  NM* getRXC_10(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXC_10);
  }

  NM* getDispenseAmount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXC_10);
  }

  bool isRXC_10(size_t index = 0) {
    try {
      return this->getObject(index, RXC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispenseAmount(size_t index = 0) {
    try {
      return this->getObject(index, RXC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dispense Units
   */

  CWE* getRXC_11(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXC_11);
  }

  CWE* getDispenseUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXC_11);
  }

  bool isRXC_11(size_t index = 0) {
    try {
      return this->getObject(index, RXC_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDispenseUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXC_11) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RXC */

} /* End of namespace HL7_29 */
#endif /* __RXC_v29_H__ */
