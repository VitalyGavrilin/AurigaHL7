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


#ifndef __INV_v29_H__
#define __INV_v29_H__

#include "../../common/Util.h"
#include "../datatype/CQ.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* INV */
class INV : public HL7Segment {
 public:
  INV() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    INV_1,
    INV_2,
    INV_3,
    INV_4,
    INV_5,
    INV_6,
    INV_7,
    INV_8,
    INV_9,
    INV_10,
    INV_11,
    INV_12,
    INV_13,
    INV_14,
    INV_15,
    INV_16,
    INV_17,
    INV_18,
    INV_19,
    INV_20,
    INV_21,
    INV_22,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "INV"; }
  INV* create() const { return new INV(); }

 private:
  void init() {
    setName("INV");
    /* Init members */
    addObject<CWE>(INV_1, "INV.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(INV_2, "INV.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(INV_3, "INV.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(INV_4, "INV.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(INV_5, "INV.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(INV_6, "INV.6", HL7::initialized, HL7::repetition_off);
    addObject<NM>(INV_7, "INV.7", HL7::initialized, HL7::repetition_off);
    addObject<NM>(INV_8, "INV.8", HL7::initialized, HL7::repetition_off);
    addObject<NM>(INV_9, "INV.9", HL7::initialized, HL7::repetition_off);
    addObject<NM>(INV_10, "INV.10", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(INV_11, "INV.11", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(INV_12, "INV.12", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(INV_13, "INV.13", HL7::initialized, HL7::repetition_off);
    addObject<ST>(INV_14, "INV.14", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(INV_15, "INV.15", HL7::initialized, HL7::repetition_off);
    addObject<ST>(INV_16, "INV.16", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(INV_17, "INV.17", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(INV_18, "INV.18", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(INV_19, "INV.19", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(INV_20, "INV.20", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(INV_21, "INV.21", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(INV_22, "INV.22", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Substance Identifier
   */

  CWE* getINV_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, INV_1);
  }

  CWE* getSubstanceIdentifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, INV_1);
  }

  bool isINV_1(size_t index = 0) {
    try {
      return this->getObject(index, INV_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, INV_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance Status
   */

  CWE* getINV_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, INV_2);
  }

  CWE* getSubstanceStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, INV_2);
  }

  bool isINV_2(size_t index = 0) {
    try {
      return this->getObject(index, INV_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceStatus(size_t index = 0) {
    try {
      return this->getObject(index, INV_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance Type
   */

  CWE* getINV_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, INV_3);
  }

  CWE* getSubstanceType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, INV_3);
  }

  bool isINV_3(size_t index = 0) {
    try {
      return this->getObject(index, INV_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceType(size_t index = 0) {
    try {
      return this->getObject(index, INV_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inventory Container Identifier
   */

  CWE* getINV_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, INV_4);
  }

  CWE* getInventoryContainerIdentifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, INV_4);
  }

  bool isINV_4(size_t index = 0) {
    try {
      return this->getObject(index, INV_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInventoryContainerIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, INV_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Container Carrier Identifier
   */

  CWE* getINV_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, INV_5);
  }

  CWE* getContainerCarrierIdentifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, INV_5);
  }

  bool isINV_5(size_t index = 0) {
    try {
      return this->getObject(index, INV_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContainerCarrierIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, INV_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Position on Carrier
   */

  CWE* getINV_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, INV_6);
  }

  CWE* getPositiononCarrier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, INV_6);
  }

  bool isINV_6(size_t index = 0) {
    try {
      return this->getObject(index, INV_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPositiononCarrier(size_t index = 0) {
    try {
      return this->getObject(index, INV_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Initial Quantity
   */

  NM* getINV_7(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, INV_7);
  }

  NM* getInitialQuantity(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, INV_7);
  }

  bool isINV_7(size_t index = 0) {
    try {
      return this->getObject(index, INV_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInitialQuantity(size_t index = 0) {
    try {
      return this->getObject(index, INV_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Current Quantity
   */

  NM* getINV_8(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, INV_8);
  }

  NM* getCurrentQuantity(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, INV_8);
  }

  bool isINV_8(size_t index = 0) {
    try {
      return this->getObject(index, INV_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCurrentQuantity(size_t index = 0) {
    try {
      return this->getObject(index, INV_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Available Quantity
   */

  NM* getINV_9(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, INV_9);
  }

  NM* getAvailableQuantity(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, INV_9);
  }

  bool isINV_9(size_t index = 0) {
    try {
      return this->getObject(index, INV_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAvailableQuantity(size_t index = 0) {
    try {
      return this->getObject(index, INV_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consumption Quantity
   */

  NM* getINV_10(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, INV_10);
  }

  NM* getConsumptionQuantity(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, INV_10);
  }

  bool isINV_10(size_t index = 0) {
    try {
      return this->getObject(index, INV_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsumptionQuantity(size_t index = 0) {
    try {
      return this->getObject(index, INV_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Quantity Units
   */

  CWE* getINV_11(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, INV_11);
  }

  CWE* getQuantityUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, INV_11);
  }

  bool isINV_11(size_t index = 0) {
    try {
      return this->getObject(index, INV_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQuantityUnits(size_t index = 0) {
    try {
      return this->getObject(index, INV_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expiration Date/Time
   */

  DTM* getINV_12(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, INV_12);
  }

  DTM* getExpirationDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, INV_12);
  }

  bool isINV_12(size_t index = 0) {
    try {
      return this->getObject(index, INV_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpirationDateTime(size_t index = 0) {
    try {
      return this->getObject(index, INV_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * First Used Date/Time
   */

  DTM* getINV_13(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, INV_13);
  }

  DTM* getFirstUsedDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, INV_13);
  }

  bool isINV_13(size_t index = 0) {
    try {
      return this->getObject(index, INV_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFirstUsedDateTime(size_t index = 0) {
    try {
      return this->getObject(index, INV_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * On Board Stability Duration
   */

  ST* getINV_14(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, INV_14);
  }

  ST* getOnBoardStabilityDuration(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, INV_14);
  }

  bool isINV_14(size_t index = 0) {
    try {
      return this->getObject(index, INV_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOnBoardStabilityDuration(size_t index = 0) {
    try {
      return this->getObject(index, INV_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Test/Fluid Identifier
   */

  CWE* getINV_15(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, INV_15);
  }

  CWE* getTestFluidIdentifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, INV_15);
  }

  bool isINV_15(size_t index = 0) {
    try {
      return this->getObject(index, INV_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTestFluidIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, INV_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Manufacturer Lot Number
   */

  ST* getINV_16(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, INV_16);
  }

  ST* getManufacturerLotNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, INV_16);
  }

  bool isINV_16(size_t index = 0) {
    try {
      return this->getObject(index, INV_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isManufacturerLotNumber(size_t index = 0) {
    try {
      return this->getObject(index, INV_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Manufacturer Identifier
   */

  CWE* getINV_17(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, INV_17);
  }

  CWE* getManufacturerIdentifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, INV_17);
  }

  bool isINV_17(size_t index = 0) {
    try {
      return this->getObject(index, INV_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isManufacturerIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, INV_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Supplier Identifier
   */

  CWE* getINV_18(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, INV_18);
  }

  CWE* getSupplierIdentifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, INV_18);
  }

  bool isINV_18(size_t index = 0) {
    try {
      return this->getObject(index, INV_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSupplierIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, INV_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * On Board Stability Time
   */

  CQ* getINV_19(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, INV_19);
  }

  CQ* getOnBoardStabilityTime(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, INV_19);
  }

  bool isINV_19(size_t index = 0) {
    try {
      return this->getObject(index, INV_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOnBoardStabilityTime(size_t index = 0) {
    try {
      return this->getObject(index, INV_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Target Value
   */

  CQ* getINV_20(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, INV_20);
  }

  CQ* getTargetValue(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, INV_20);
  }

  bool isINV_20(size_t index = 0) {
    try {
      return this->getObject(index, INV_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTargetValue(size_t index = 0) {
    try {
      return this->getObject(index, INV_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Equipment State Indicator Type Code
   */

  CWE* getINV_21(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, INV_21);
  }

  CWE* getEquipmentStateIndicatorTypeCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, INV_21);
  }

  bool isINV_21(size_t index = 0) {
    try {
      return this->getObject(index, INV_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEquipmentStateIndicatorTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, INV_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Equipment State Indicator Value
   */

  CQ* getINV_22(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, INV_22);
  }

  CQ* getEquipmentStateIndicatorValue(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, INV_22);
  }

  bool isINV_22(size_t index = 0) {
    try {
      return this->getObject(index, INV_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEquipmentStateIndicatorValue(size_t index = 0) {
    try {
      return this->getObject(index, INV_22) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of INV */

} /* End of namespace HL7_29 */
#endif /* __INV_v29_H__ */
