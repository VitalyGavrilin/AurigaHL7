/*
 * This file is part of HCPPL.
 *
 * HCPPL is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * HCPPL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with HCPPL.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __INV_v24_H__
#define __INV_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0383.h"
#include "../datatype/CE_0384.h"
#include "../datatype/CE_0385.h"
#include "../datatype/CE_0386.h"
#include "../datatype/CE_0451.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"
#include "../datatype/TQ.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Inventory Detail */
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
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "INV"; }
  INV* create() const { return new INV(); }

 private:
  void init() {
    setName("INV");
    /* Init members */
    addObject<CE_0451>(INV_1, "INV.1", HL7::initialized, HL7::repetition_off);
    addObject<CE_0383>(INV_2, "INV.2", HL7::initialized, HL7::repetition_on);
    addObject<CE_0384>(INV_3, "INV.3", HL7::optional, HL7::repetition_off);
    addObject<CE>(INV_4, "INV.4", HL7::optional, HL7::repetition_off);
    addObject<CE>(INV_5, "INV.5", HL7::optional, HL7::repetition_off);
    addObject<CE>(INV_6, "INV.6", HL7::optional, HL7::repetition_off);
    addObject<NM>(INV_7, "INV.7", HL7::optional, HL7::repetition_off);
    addObject<NM>(INV_8, "INV.8", HL7::optional, HL7::repetition_off);
    addObject<NM>(INV_9, "INV.9", HL7::optional, HL7::repetition_off);
    addObject<NM>(INV_10, "INV.10", HL7::optional, HL7::repetition_off);
    addObject<CE>(INV_11, "INV.11", HL7::optional, HL7::repetition_off);
    addObject<TS>(INV_12, "INV.12", HL7::optional, HL7::repetition_off);
    addObject<TS>(INV_13, "INV.13", HL7::optional, HL7::repetition_off);
    addObject<TQ>(INV_14, "INV.14", HL7::optional, HL7::repetition_off);
    addObject<CE>(INV_15, "INV.15", HL7::optional, HL7::repetition_on);
    addObject<ST>(INV_16, "INV.16", HL7::optional, HL7::repetition_off);
    addObject<CE_0385>(INV_17, "INV.17", HL7::optional, HL7::repetition_off);
    addObject<CE_0386>(INV_18, "INV.18", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Substance Identifier
   */

  CE_0451* getINV_1(size_t index = 0) {
    return (CE_0451*)this->getObjectSafe(index, INV_1);
  }

  CE_0451* getSubstanceIdentifier(size_t index = 0) {
    return (CE_0451*)this->getObjectSafe(index, INV_1);
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

  CE_0383* getINV_2(size_t index = 0) {
    return (CE_0383*)this->getObjectSafe(index, INV_2);
  }

  CE_0383* getSubstanceStatus(size_t index = 0) {
    return (CE_0383*)this->getObjectSafe(index, INV_2);
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

  CE_0384* getINV_3(size_t index = 0) {
    return (CE_0384*)this->getObjectSafe(index, INV_3);
  }

  CE_0384* getSubstanceType(size_t index = 0) {
    return (CE_0384*)this->getObjectSafe(index, INV_3);
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

  CE* getINV_4(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, INV_4);
  }

  CE* getInventoryContainerIdentifier(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, INV_4);
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

  CE* getINV_5(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, INV_5);
  }

  CE* getContainerCarrierIdentifier(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, INV_5);
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

  CE* getINV_6(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, INV_6);
  }

  CE* getPositionOnCarrier(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, INV_6);
  }

  bool isINV_6(size_t index = 0) {
    try {
      return this->getObject(index, INV_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPositionOnCarrier(size_t index = 0) {
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

  CE* getINV_11(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, INV_11);
  }

  CE* getQuantityUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, INV_11);
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

  TS* getINV_12(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, INV_12);
  }

  TS* getExpirationDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, INV_12);
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

  TS* getINV_13(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, INV_13);
  }

  TS* getFirstUsedDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, INV_13);
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

  TQ* getINV_14(size_t index = 0) {
    return (TQ*)this->getObjectSafe(index, INV_14);
  }

  TQ* getOnBoardStabilityDuration(size_t index = 0) {
    return (TQ*)this->getObjectSafe(index, INV_14);
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
   * Test/Fluid Identifier(s)
   */

  CE* getINV_15(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, INV_15);
  }

  CE* getTestFluidIdentifier(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, INV_15);
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

  CE_0385* getINV_17(size_t index = 0) {
    return (CE_0385*)this->getObjectSafe(index, INV_17);
  }

  CE_0385* getManufacturerIdentifier(size_t index = 0) {
    return (CE_0385*)this->getObjectSafe(index, INV_17);
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

  CE_0386* getINV_18(size_t index = 0) {
    return (CE_0386*)this->getObjectSafe(index, INV_18);
  }

  CE_0386* getSupplierIdentifier(size_t index = 0) {
    return (CE_0386*)this->getObjectSafe(index, INV_18);
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

}; /* End of INV */

} /* End of namespace HL7_24 */
#endif /* __INV_v24_H__ */
