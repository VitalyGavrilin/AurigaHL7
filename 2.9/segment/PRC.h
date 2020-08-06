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


#ifndef __PRC_v29_H__
#define __PRC_v29_H__

#include "../../common/Util.h"
#include "../datatype/CP.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/ID.h"
#include "../datatype/MO.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* PRC */
class PRC : public HL7Segment {
 public:
  PRC() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PRC_1,
    PRC_2,
    PRC_3,
    PRC_4,
    PRC_5,
    PRC_6,
    PRC_7,
    PRC_8,
    PRC_9,
    PRC_10,
    PRC_11,
    PRC_12,
    PRC_13,
    PRC_14,
    PRC_15,
    PRC_16,
    PRC_17,
    PRC_18,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PRC"; }
  PRC* create() const { return new PRC(); }

 private:
  void init() {
    setName("PRC");
    /* Init members */
    addObject<CWE>(PRC_1, "PRC.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PRC_2, "PRC.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PRC_3, "PRC.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PRC_4, "PRC.4", HL7::initialized, HL7::repetition_off);
    addObject<CP>(PRC_5, "PRC.5", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PRC_6, "PRC.6", HL7::initialized, HL7::repetition_off);
    addObject<NM>(PRC_7, "PRC.7", HL7::initialized, HL7::repetition_off);
    addObject<NM>(PRC_8, "PRC.8", HL7::initialized, HL7::repetition_off);
    addObject<MO>(PRC_9, "PRC.9", HL7::initialized, HL7::repetition_off);
    addObject<MO>(PRC_10, "PRC.10", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PRC_11, "PRC.11", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PRC_12, "PRC.12", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PRC_13, "PRC.13", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PRC_14, "PRC.14", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PRC_15, "PRC.15", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PRC_16, "PRC.16", HL7::initialized, HL7::repetition_off);
    addObject<MO>(PRC_17, "PRC.17", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PRC_18, "PRC.18", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Primary Key Value - PRC
   */

  CWE* getPRC_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRC_1);
  }

  CWE* getPrimaryKeyValuePRC(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRC_1);
  }

  bool isPRC_1(size_t index = 0) {
    try {
      return this->getObject(index, PRC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryKeyValuePRC(size_t index = 0) {
    try {
      return this->getObject(index, PRC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Facility ID - PRC
   */

  CWE* getPRC_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRC_2);
  }

  CWE* getFacilityIDPRC(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRC_2);
  }

  bool isPRC_2(size_t index = 0) {
    try {
      return this->getObject(index, PRC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFacilityIDPRC(size_t index = 0) {
    try {
      return this->getObject(index, PRC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Department
   */

  CWE* getPRC_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRC_3);
  }

  CWE* getDepartment(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRC_3);
  }

  bool isPRC_3(size_t index = 0) {
    try {
      return this->getObject(index, PRC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDepartment(size_t index = 0) {
    try {
      return this->getObject(index, PRC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Valid Patient Classes
   */

  CWE* getPRC_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRC_4);
  }

  CWE* getValidPatientClasses(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRC_4);
  }

  bool isPRC_4(size_t index = 0) {
    try {
      return this->getObject(index, PRC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValidPatientClasses(size_t index = 0) {
    try {
      return this->getObject(index, PRC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Price
   */

  CP* getPRC_5(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PRC_5);
  }

  CP* getPrice(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PRC_5);
  }

  bool isPRC_5(size_t index = 0) {
    try {
      return this->getObject(index, PRC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrice(size_t index = 0) {
    try {
      return this->getObject(index, PRC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Formula
   */

  ST* getPRC_6(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PRC_6);
  }

  ST* getFormula(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PRC_6);
  }

  bool isPRC_6(size_t index = 0) {
    try {
      return this->getObject(index, PRC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFormula(size_t index = 0) {
    try {
      return this->getObject(index, PRC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Minimum Quantity
   */

  NM* getPRC_7(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PRC_7);
  }

  NM* getMinimumQuantity(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PRC_7);
  }

  bool isPRC_7(size_t index = 0) {
    try {
      return this->getObject(index, PRC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMinimumQuantity(size_t index = 0) {
    try {
      return this->getObject(index, PRC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Maximum Quantity
   */

  NM* getPRC_8(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PRC_8);
  }

  NM* getMaximumQuantity(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PRC_8);
  }

  bool isPRC_8(size_t index = 0) {
    try {
      return this->getObject(index, PRC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMaximumQuantity(size_t index = 0) {
    try {
      return this->getObject(index, PRC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Minimum Price
   */

  MO* getPRC_9(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, PRC_9);
  }

  MO* getMinimumPrice(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, PRC_9);
  }

  bool isPRC_9(size_t index = 0) {
    try {
      return this->getObject(index, PRC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMinimumPrice(size_t index = 0) {
    try {
      return this->getObject(index, PRC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Maximum Price
   */

  MO* getPRC_10(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, PRC_10);
  }

  MO* getMaximumPrice(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, PRC_10);
  }

  bool isPRC_10(size_t index = 0) {
    try {
      return this->getObject(index, PRC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMaximumPrice(size_t index = 0) {
    try {
      return this->getObject(index, PRC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Start Date
   */

  DTM* getPRC_11(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PRC_11);
  }

  DTM* getEffectiveStartDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PRC_11);
  }

  bool isPRC_11(size_t index = 0) {
    try {
      return this->getObject(index, PRC_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveStartDate(size_t index = 0) {
    try {
      return this->getObject(index, PRC_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective End Date
   */

  DTM* getPRC_12(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PRC_12);
  }

  DTM* getEffectiveEndDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PRC_12);
  }

  bool isPRC_12(size_t index = 0) {
    try {
      return this->getObject(index, PRC_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveEndDate(size_t index = 0) {
    try {
      return this->getObject(index, PRC_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Price Override Flag
   */

  CWE* getPRC_13(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRC_13);
  }

  CWE* getPriceOverrideFlag(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRC_13);
  }

  bool isPRC_13(size_t index = 0) {
    try {
      return this->getObject(index, PRC_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPriceOverrideFlag(size_t index = 0) {
    try {
      return this->getObject(index, PRC_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Billing Category
   */

  CWE* getPRC_14(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRC_14);
  }

  CWE* getBillingCategory(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRC_14);
  }

  bool isPRC_14(size_t index = 0) {
    try {
      return this->getObject(index, PRC_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBillingCategory(size_t index = 0) {
    try {
      return this->getObject(index, PRC_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Chargeable Flag
   */

  ID* getPRC_15(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PRC_15);
  }

  ID* getChargeableFlag(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PRC_15);
  }

  bool isPRC_15(size_t index = 0) {
    try {
      return this->getObject(index, PRC_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChargeableFlag(size_t index = 0) {
    try {
      return this->getObject(index, PRC_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Active/Inactive Flag
   */

  ID* getPRC_16(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PRC_16);
  }

  ID* getActiveInactiveFlag(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PRC_16);
  }

  bool isPRC_16(size_t index = 0) {
    try {
      return this->getObject(index, PRC_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActiveInactiveFlag(size_t index = 0) {
    try {
      return this->getObject(index, PRC_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Cost
   */

  MO* getPRC_17(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, PRC_17);
  }

  MO* getCost(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, PRC_17);
  }

  bool isPRC_17(size_t index = 0) {
    try {
      return this->getObject(index, PRC_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCost(size_t index = 0) {
    try {
      return this->getObject(index, PRC_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Charge on Indicator
   */

  CWE* getPRC_18(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRC_18);
  }

  CWE* getChargeonIndicator(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRC_18);
  }

  bool isPRC_18(size_t index = 0) {
    try {
      return this->getObject(index, PRC_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChargeonIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PRC_18) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PRC */

} /* End of namespace HL7_29 */
#endif /* __PRC_v29_H__ */
