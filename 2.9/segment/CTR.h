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


#ifndef __CTR_v29_H__
#define __CTR_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/MOP.h"
#include "../datatype/ST.h"
#include "../datatype/XON.h"
#include "../datatype/XPN.h"

namespace HL7_29 {

/* CTR */
class CTR : public HL7Segment {
 public:
  CTR() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    CTR_1,
    CTR_2,
    CTR_3,
    CTR_4,
    CTR_5,
    CTR_6,
    CTR_7,
    CTR_8,
    CTR_9,
    CTR_10,
    CTR_11,
    CTR_12,
    CTR_13,
    CTR_14,
    CTR_15,
    CTR_16,
    CTR_17,
    CTR_18,
    CTR_19,
    CTR_20,
    CTR_21,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "CTR"; }
  CTR* create() const { return new CTR(); }

 private:
  void init() {
    setName("CTR");
    /* Init members */
    addObject<EI>(CTR_1, "CTR.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CTR_2, "CTR.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CTR_3, "CTR.3", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CTR_4, "CTR.4", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CTR_5, "CTR.5", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(CTR_6, "CTR.6", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(CTR_7, "CTR.7", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CTR_8, "CTR.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CTR_9, "CTR.9", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(CTR_10, "CTR.10", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(CTR_11, "CTR.11", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(CTR_12, "CTR.12", HL7::initialized, HL7::repetition_off);
    addObject<XON>(CTR_13, "CTR.13", HL7::initialized, HL7::repetition_off);
    addObject<MOP>(CTR_14, "CTR.14", HL7::initialized, HL7::repetition_off);
    addObject<MOP>(CTR_15, "CTR.15", HL7::initialized, HL7::repetition_off);
    addObject<XON>(CTR_16, "CTR.16", HL7::initialized, HL7::repetition_off);
    addObject<XON>(CTR_17, "CTR.17", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CTR_18, "CTR.18", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CTR_19, "CTR.19", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CTR_20, "CTR.20", HL7::initialized, HL7::repetition_off);
    addObject<EI>(CTR_21, "CTR.21", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Contract Identifier
   */

  EI* getCTR_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, CTR_1);
  }

  EI* getContractIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, CTR_1);
  }

  bool isCTR_1(size_t index = 0) {
    try {
      return this->getObject(index, CTR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContractIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CTR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contract Description
   */

  ST* getCTR_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, CTR_2);
  }

  ST* getContractDescription(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, CTR_2);
  }

  bool isCTR_2(size_t index = 0) {
    try {
      return this->getObject(index, CTR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContractDescription(size_t index = 0) {
    try {
      return this->getObject(index, CTR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contract Status
   */

  CWE* getCTR_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CTR_3);
  }

  CWE* getContractStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CTR_3);
  }

  bool isCTR_3(size_t index = 0) {
    try {
      return this->getObject(index, CTR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContractStatus(size_t index = 0) {
    try {
      return this->getObject(index, CTR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Date
   */

  DTM* getCTR_4(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CTR_4);
  }

  DTM* getEffectiveDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CTR_4);
  }

  bool isCTR_4(size_t index = 0) {
    try {
      return this->getObject(index, CTR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, CTR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expiration Date
   */

  DTM* getCTR_5(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CTR_5);
  }

  DTM* getExpirationDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CTR_5);
  }

  bool isCTR_5(size_t index = 0) {
    try {
      return this->getObject(index, CTR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, CTR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contract Owner Name
   */

  XPN* getCTR_6(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, CTR_6);
  }

  XPN* getContractOwnerName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, CTR_6);
  }

  bool isCTR_6(size_t index = 0) {
    try {
      return this->getObject(index, CTR_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContractOwnerName(size_t index = 0) {
    try {
      return this->getObject(index, CTR_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contract Originator Name
   */

  XPN* getCTR_7(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, CTR_7);
  }

  XPN* getContractOriginatorName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, CTR_7);
  }

  bool isCTR_7(size_t index = 0) {
    try {
      return this->getObject(index, CTR_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContractOriginatorName(size_t index = 0) {
    try {
      return this->getObject(index, CTR_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Supplier Type
   */

  CWE* getCTR_8(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CTR_8);
  }

  CWE* getSupplierType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CTR_8);
  }

  bool isCTR_8(size_t index = 0) {
    try {
      return this->getObject(index, CTR_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSupplierType(size_t index = 0) {
    try {
      return this->getObject(index, CTR_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contract Type
   */

  CWE* getCTR_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CTR_9);
  }

  CWE* getContractType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CTR_9);
  }

  bool isCTR_9(size_t index = 0) {
    try {
      return this->getObject(index, CTR_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContractType(size_t index = 0) {
    try {
      return this->getObject(index, CTR_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Free On Board Freight Terms
   */

  CNE* getCTR_10(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, CTR_10);
  }

  CNE* getFreeOnBoardFreightTerms(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, CTR_10);
  }

  bool isCTR_10(size_t index = 0) {
    try {
      return this->getObject(index, CTR_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFreeOnBoardFreightTerms(size_t index = 0) {
    try {
      return this->getObject(index, CTR_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Price Protection Date
   */

  DTM* getCTR_11(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CTR_11);
  }

  DTM* getPriceProtectionDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, CTR_11);
  }

  bool isCTR_11(size_t index = 0) {
    try {
      return this->getObject(index, CTR_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPriceProtectionDate(size_t index = 0) {
    try {
      return this->getObject(index, CTR_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Fixed Price Contract Indicator
   */

  CNE* getCTR_12(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, CTR_12);
  }

  CNE* getFixedPriceContractIndicator(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, CTR_12);
  }

  bool isCTR_12(size_t index = 0) {
    try {
      return this->getObject(index, CTR_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFixedPriceContractIndicator(size_t index = 0) {
    try {
      return this->getObject(index, CTR_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Group Purchasing Organization
   */

  XON* getCTR_13(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, CTR_13);
  }

  XON* getGroupPurchasingOrganization(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, CTR_13);
  }

  bool isCTR_13(size_t index = 0) {
    try {
      return this->getObject(index, CTR_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGroupPurchasingOrganization(size_t index = 0) {
    try {
      return this->getObject(index, CTR_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Maximum Markup
   */

  MOP* getCTR_14(size_t index = 0) {
    return (MOP*)this->getObjectSafe(index, CTR_14);
  }

  MOP* getMaximumMarkup(size_t index = 0) {
    return (MOP*)this->getObjectSafe(index, CTR_14);
  }

  bool isCTR_14(size_t index = 0) {
    try {
      return this->getObject(index, CTR_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMaximumMarkup(size_t index = 0) {
    try {
      return this->getObject(index, CTR_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Actual Markup
   */

  MOP* getCTR_15(size_t index = 0) {
    return (MOP*)this->getObjectSafe(index, CTR_15);
  }

  MOP* getActualMarkup(size_t index = 0) {
    return (MOP*)this->getObjectSafe(index, CTR_15);
  }

  bool isCTR_15(size_t index = 0) {
    try {
      return this->getObject(index, CTR_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActualMarkup(size_t index = 0) {
    try {
      return this->getObject(index, CTR_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Corporation
   */

  XON* getCTR_16(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, CTR_16);
  }

  XON* getCorporation(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, CTR_16);
  }

  bool isCTR_16(size_t index = 0) {
    try {
      return this->getObject(index, CTR_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCorporation(size_t index = 0) {
    try {
      return this->getObject(index, CTR_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Parent of Corporation
   */

  XON* getCTR_17(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, CTR_17);
  }

  XON* getParentofCorporation(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, CTR_17);
  }

  bool isCTR_17(size_t index = 0) {
    try {
      return this->getObject(index, CTR_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParentofCorporation(size_t index = 0) {
    try {
      return this->getObject(index, CTR_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pricing Tier Level
   */

  CWE* getCTR_18(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CTR_18);
  }

  CWE* getPricingTierLevel(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CTR_18);
  }

  bool isCTR_18(size_t index = 0) {
    try {
      return this->getObject(index, CTR_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPricingTierLevel(size_t index = 0) {
    try {
      return this->getObject(index, CTR_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contract Priority
   */

  ST* getCTR_19(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, CTR_19);
  }

  ST* getContractPriority(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, CTR_19);
  }

  bool isCTR_19(size_t index = 0) {
    try {
      return this->getObject(index, CTR_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContractPriority(size_t index = 0) {
    try {
      return this->getObject(index, CTR_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Class of Trade
   */

  CWE* getCTR_20(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CTR_20);
  }

  CWE* getClassofTrade(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CTR_20);
  }

  bool isCTR_20(size_t index = 0) {
    try {
      return this->getObject(index, CTR_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isClassofTrade(size_t index = 0) {
    try {
      return this->getObject(index, CTR_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Associated Contract ID
   */

  EI* getCTR_21(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, CTR_21);
  }

  EI* getAssociatedContractID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, CTR_21);
  }

  bool isCTR_21(size_t index = 0) {
    try {
      return this->getObject(index, CTR_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssociatedContractID(size_t index = 0) {
    try {
      return this->getObject(index, CTR_21) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of CTR */

} /* End of namespace HL7_29 */
#endif /* __CTR_v29_H__ */
