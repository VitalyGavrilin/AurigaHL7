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


#ifndef __BUI_v29_H__
#define __BUI_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CWE.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/NR.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/XON.h"

namespace HL7_29 {

/* BUI */
class BUI : public HL7Segment {
 public:
  BUI() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    BUI_1,
    BUI_2,
    BUI_3,
    BUI_4,
    BUI_5,
    BUI_6,
    BUI_7,
    BUI_8,
    BUI_9,
    BUI_10,
    BUI_11,
    BUI_12,
    BUI_13,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "BUI"; }
  BUI* create() const { return new BUI(); }

 private:
  void init() {
    setName("BUI");
    /* Init members */
    addObject<SI>(BUI_1, "BUI.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(BUI_2, "BUI.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(BUI_3, "BUI.3", HL7::initialized, HL7::repetition_off);
    addObject<NM>(BUI_4, "BUI.4", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(BUI_5, "BUI.5", HL7::initialized, HL7::repetition_off);
    addObject<NM>(BUI_6, "BUI.6", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(BUI_7, "BUI.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(BUI_8, "BUI.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(BUI_9, "BUI.9", HL7::initialized, HL7::repetition_off);
    addObject<XON>(BUI_10, "BUI.10", HL7::initialized, HL7::repetition_off);
    addObject<NR>(BUI_11, "BUI.11", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(BUI_12, "BUI.12", HL7::initialized, HL7::repetition_off);
    addObject<ID>(BUI_13, "BUI.13", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID – BUI
   */

  SI* getBUI_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, BUI_1);
  }

  SI* getSetIDBUI(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, BUI_1);
  }

  bool isBUI_1(size_t index = 0) {
    try {
      return this->getObject(index, BUI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDBUI(size_t index = 0) {
    try {
      return this->getObject(index, BUI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Blood Unit Identifier
   */

  EI* getBUI_2(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, BUI_2);
  }

  EI* getBloodUnitIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, BUI_2);
  }

  bool isBUI_2(size_t index = 0) {
    try {
      return this->getObject(index, BUI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBloodUnitIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, BUI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Blood Unit Type
   */

  CWE* getBUI_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BUI_3);
  }

  CWE* getBloodUnitType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BUI_3);
  }

  bool isBUI_3(size_t index = 0) {
    try {
      return this->getObject(index, BUI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBloodUnitType(size_t index = 0) {
    try {
      return this->getObject(index, BUI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Blood Unit Weight
   */

  NM* getBUI_4(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, BUI_4);
  }

  NM* getBloodUnitWeight(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, BUI_4);
  }

  bool isBUI_4(size_t index = 0) {
    try {
      return this->getObject(index, BUI_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBloodUnitWeight(size_t index = 0) {
    try {
      return this->getObject(index, BUI_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Weight Units
   */

  CNE* getBUI_5(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, BUI_5);
  }

  CNE* getWeightUnits(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, BUI_5);
  }

  bool isBUI_5(size_t index = 0) {
    try {
      return this->getObject(index, BUI_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isWeightUnits(size_t index = 0) {
    try {
      return this->getObject(index, BUI_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Blood Unit Volume
   */

  NM* getBUI_6(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, BUI_6);
  }

  NM* getBloodUnitVolume(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, BUI_6);
  }

  bool isBUI_6(size_t index = 0) {
    try {
      return this->getObject(index, BUI_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBloodUnitVolume(size_t index = 0) {
    try {
      return this->getObject(index, BUI_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Volume Units
   */

  CNE* getBUI_7(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, BUI_7);
  }

  CNE* getVolumeUnits(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, BUI_7);
  }

  bool isBUI_7(size_t index = 0) {
    try {
      return this->getObject(index, BUI_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVolumeUnits(size_t index = 0) {
    try {
      return this->getObject(index, BUI_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Container Catalog Number
   */

  ST* getBUI_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BUI_8);
  }

  ST* getContainerCatalogNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BUI_8);
  }

  bool isBUI_8(size_t index = 0) {
    try {
      return this->getObject(index, BUI_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContainerCatalogNumber(size_t index = 0) {
    try {
      return this->getObject(index, BUI_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Container Lot Number
   */

  ST* getBUI_9(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BUI_9);
  }

  ST* getContainerLotNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BUI_9);
  }

  bool isBUI_9(size_t index = 0) {
    try {
      return this->getObject(index, BUI_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContainerLotNumber(size_t index = 0) {
    try {
      return this->getObject(index, BUI_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Container Manufacturer
   */

  XON* getBUI_10(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, BUI_10);
  }

  XON* getContainerManufacturer(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, BUI_10);
  }

  bool isBUI_10(size_t index = 0) {
    try {
      return this->getObject(index, BUI_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContainerManufacturer(size_t index = 0) {
    try {
      return this->getObject(index, BUI_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transport Temperature
   */

  NR* getBUI_11(size_t index = 0) {
    return (NR*)this->getObjectSafe(index, BUI_11);
  }

  NR* getTransportTemperature(size_t index = 0) {
    return (NR*)this->getObjectSafe(index, BUI_11);
  }

  bool isBUI_11(size_t index = 0) {
    try {
      return this->getObject(index, BUI_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransportTemperature(size_t index = 0) {
    try {
      return this->getObject(index, BUI_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transport Temperature Units
   */

  CNE* getBUI_12(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, BUI_12);
  }

  CNE* getTransportTemperatureUnits(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, BUI_12);
  }

  bool isBUI_12(size_t index = 0) {
    try {
      return this->getObject(index, BUI_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransportTemperatureUnits(size_t index = 0) {
    try {
      return this->getObject(index, BUI_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code
   */

  ID* getBUI_13(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, BUI_13);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, BUI_13);
  }

  bool isBUI_13(size_t index = 0) {
    try {
      return this->getObject(index, BUI_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, BUI_13) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of BUI */

} /* End of namespace HL7_29 */
#endif /* __BUI_v29_H__ */
