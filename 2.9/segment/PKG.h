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


#ifndef __PKG_v29_H__
#define __PKG_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CP.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/MO.h"
#include "../datatype/NM.h"
#include "../datatype/SI.h"

namespace HL7_29 {

/* PKG */
class PKG : public HL7Segment {
 public:
  PKG() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PKG_1,
    PKG_2,
    PKG_3,
    PKG_4,
    PKG_5,
    PKG_6,
    PKG_7,
    PKG_8,
    PKG_9,
    PKG_10,
    PKG_11,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PKG"; }
  PKG* create() const { return new PKG(); }

 private:
  void init() {
    setName("PKG");
    /* Init members */
    addObject<SI>(PKG_1, "PKG.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PKG_2, "PKG.2", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(PKG_3, "PKG.3", HL7::initialized, HL7::repetition_off);
    addObject<NM>(PKG_4, "PKG.4", HL7::initialized, HL7::repetition_off);
    addObject<CP>(PKG_5, "PKG.5", HL7::initialized, HL7::repetition_off);
    addObject<CP>(PKG_6, "PKG.6", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PKG_7, "PKG.7", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PKG_8, "PKG.8", HL7::initialized, HL7::repetition_off);
    addObject<MO>(PKG_9, "PKG.9", HL7::initialized, HL7::repetition_off);
    addObject<NM>(PKG_10, "PKG.10", HL7::initialized, HL7::repetition_off);
    addObject<EI>(PKG_11, "PKG.11", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set Id - PKG
   */

  SI* getPKG_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, PKG_1);
  }

  SI* getSetIdPKG(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, PKG_1);
  }

  bool isPKG_1(size_t index = 0) {
    try {
      return this->getObject(index, PKG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIdPKG(size_t index = 0) {
    try {
      return this->getObject(index, PKG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Packaging Units
   */

  CWE* getPKG_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PKG_2);
  }

  CWE* getPackagingUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PKG_2);
  }

  bool isPKG_2(size_t index = 0) {
    try {
      return this->getObject(index, PKG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPackagingUnits(size_t index = 0) {
    try {
      return this->getObject(index, PKG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Default Order Unit Of Measure Indicator
   */

  CNE* getPKG_3(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, PKG_3);
  }

  CNE* getDefaultOrderUnitOfMeasureIndicator(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, PKG_3);
  }

  bool isPKG_3(size_t index = 0) {
    try {
      return this->getObject(index, PKG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDefaultOrderUnitOfMeasureIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PKG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Package Quantity
   */

  NM* getPKG_4(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PKG_4);
  }

  NM* getPackageQuantity(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PKG_4);
  }

  bool isPKG_4(size_t index = 0) {
    try {
      return this->getObject(index, PKG_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPackageQuantity(size_t index = 0) {
    try {
      return this->getObject(index, PKG_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Price
   */

  CP* getPKG_5(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PKG_5);
  }

  CP* getPrice(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PKG_5);
  }

  bool isPKG_5(size_t index = 0) {
    try {
      return this->getObject(index, PKG_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrice(size_t index = 0) {
    try {
      return this->getObject(index, PKG_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Future Item Price
   */

  CP* getPKG_6(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PKG_6);
  }

  CP* getFutureItemPrice(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PKG_6);
  }

  bool isPKG_6(size_t index = 0) {
    try {
      return this->getObject(index, PKG_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFutureItemPrice(size_t index = 0) {
    try {
      return this->getObject(index, PKG_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Future Item Price Effective Date
   */

  DTM* getPKG_7(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PKG_7);
  }

  DTM* getFutureItemPriceEffectiveDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PKG_7);
  }

  bool isPKG_7(size_t index = 0) {
    try {
      return this->getObject(index, PKG_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFutureItemPriceEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, PKG_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Global Trade Item Number
   */

  CWE* getPKG_8(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PKG_8);
  }

  CWE* getGlobalTradeItemNumber(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PKG_8);
  }

  bool isPKG_8(size_t index = 0) {
    try {
      return this->getObject(index, PKG_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGlobalTradeItemNumber(size_t index = 0) {
    try {
      return this->getObject(index, PKG_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contract Price
   */

  MO* getPKG_9(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, PKG_9);
  }

  MO* getContractPrice(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, PKG_9);
  }

  bool isPKG_9(size_t index = 0) {
    try {
      return this->getObject(index, PKG_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContractPrice(size_t index = 0) {
    try {
      return this->getObject(index, PKG_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Quantity of Each
   */

  NM* getPKG_10(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PKG_10);
  }

  NM* getQuantityofEach(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PKG_10);
  }

  bool isPKG_10(size_t index = 0) {
    try {
      return this->getObject(index, PKG_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQuantityofEach(size_t index = 0) {
    try {
      return this->getObject(index, PKG_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Vendor Catalog Number
   */

  EI* getPKG_11(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PKG_11);
  }

  EI* getVendorCatalogNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PKG_11);
  }

  bool isPKG_11(size_t index = 0) {
    try {
      return this->getObject(index, PKG_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVendorCatalogNumber(size_t index = 0) {
    try {
      return this->getObject(index, PKG_11) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PKG */

} /* End of namespace HL7_29 */
#endif /* __PKG_v29_H__ */
