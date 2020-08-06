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


#ifndef __VND_v29_H__
#define __VND_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CWE.h"
#include "../datatype/EI.h"
#include "../datatype/MOP.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/XCN.h"

namespace HL7_29 {

/* VND */
class VND : public HL7Segment {
 public:
  VND() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    VND_1,
    VND_2,
    VND_3,
    VND_4,
    VND_5,
    VND_6,
    VND_7,
    VND_8,
    VND_9,
    VND_10,
    VND_11,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "VND"; }
  VND* create() const { return new VND(); }

 private:
  void init() {
    setName("VND");
    /* Init members */
    addObject<SI>(VND_1, "VND.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(VND_2, "VND.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(VND_3, "VND.3", HL7::initialized, HL7::repetition_off);
    addObject<EI>(VND_4, "VND.4", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(VND_5, "VND.5", HL7::initialized, HL7::repetition_off);
    addObject<EI>(VND_6, "VND.6", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(VND_7, "VND.7", HL7::initialized, HL7::repetition_off);
    addObject<MOP>(VND_8, "VND.8", HL7::initialized, HL7::repetition_off);
    addObject<EI>(VND_9, "VND.9", HL7::initialized, HL7::repetition_off);
    addObject<ST>(VND_10, "VND.10", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(VND_11, "VND.11", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set Id – VND
   */

  SI* getVND_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, VND_1);
  }

  SI* getSetIdVND(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, VND_1);
  }

  bool isVND_1(size_t index = 0) {
    try {
      return this->getObject(index, VND_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIdVND(size_t index = 0) {
    try {
      return this->getObject(index, VND_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Vendor Identifier
   */

  EI* getVND_2(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, VND_2);
  }

  EI* getVendorIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, VND_2);
  }

  bool isVND_2(size_t index = 0) {
    try {
      return this->getObject(index, VND_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVendorIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, VND_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Vendor Name
   */

  ST* getVND_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, VND_3);
  }

  ST* getVendorName(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, VND_3);
  }

  bool isVND_3(size_t index = 0) {
    try {
      return this->getObject(index, VND_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVendorName(size_t index = 0) {
    try {
      return this->getObject(index, VND_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Vendor Catalog Number
   */

  EI* getVND_4(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, VND_4);
  }

  EI* getVendorCatalogNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, VND_4);
  }

  bool isVND_4(size_t index = 0) {
    try {
      return this->getObject(index, VND_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVendorCatalogNumber(size_t index = 0) {
    try {
      return this->getObject(index, VND_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Vendor Indicator
   */

  CNE* getVND_5(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, VND_5);
  }

  CNE* getPrimaryVendorIndicator(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, VND_5);
  }

  bool isVND_5(size_t index = 0) {
    try {
      return this->getObject(index, VND_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryVendorIndicator(size_t index = 0) {
    try {
      return this->getObject(index, VND_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Corporation
   */

  EI* getVND_6(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, VND_6);
  }

  EI* getCorporation(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, VND_6);
  }

  bool isVND_6(size_t index = 0) {
    try {
      return this->getObject(index, VND_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCorporation(size_t index = 0) {
    try {
      return this->getObject(index, VND_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Contact
   */

  XCN* getVND_7(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, VND_7);
  }

  XCN* getPrimaryContact(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, VND_7);
  }

  bool isVND_7(size_t index = 0) {
    try {
      return this->getObject(index, VND_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryContact(size_t index = 0) {
    try {
      return this->getObject(index, VND_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contract Adjustment
   */

  MOP* getVND_8(size_t index = 0) {
    return (MOP*)this->getObjectSafe(index, VND_8);
  }

  MOP* getContractAdjustment(size_t index = 0) {
    return (MOP*)this->getObjectSafe(index, VND_8);
  }

  bool isVND_8(size_t index = 0) {
    try {
      return this->getObject(index, VND_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContractAdjustment(size_t index = 0) {
    try {
      return this->getObject(index, VND_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Associated Contract ID
   */

  EI* getVND_9(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, VND_9);
  }

  EI* getAssociatedContractID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, VND_9);
  }

  bool isVND_9(size_t index = 0) {
    try {
      return this->getObject(index, VND_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssociatedContractID(size_t index = 0) {
    try {
      return this->getObject(index, VND_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Class of Trade
   */

  ST* getVND_10(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, VND_10);
  }

  ST* getClassofTrade(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, VND_10);
  }

  bool isVND_10(size_t index = 0) {
    try {
      return this->getObject(index, VND_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isClassofTrade(size_t index = 0) {
    try {
      return this->getObject(index, VND_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pricing Tier Level
   */

  CWE* getVND_11(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, VND_11);
  }

  CWE* getPricingTierLevel(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, VND_11);
  }

  bool isVND_11(size_t index = 0) {
    try {
      return this->getObject(index, VND_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPricingTierLevel(size_t index = 0) {
    try {
      return this->getObject(index, VND_11) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of VND */

} /* End of namespace HL7_29 */
#endif /* __VND_v29_H__ */
