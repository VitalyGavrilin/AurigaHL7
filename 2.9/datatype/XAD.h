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


#ifndef __XAD_v29_H__
#define __XAD_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DR.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/SAD.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* extended address */
class XAD : public HL7Data {
 public:
  XAD() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    XAD_1, /* Street Address */
    XAD_2, /* Other Designation */
    XAD_3, /* City */
    XAD_4, /* State or Province */
    XAD_5, /* Zip or Postal Code */
    XAD_6, /* Country */
    XAD_7, /* Address Type */
    XAD_8, /* Other Geographic Designation */
    XAD_9, /* County/Parish Code */
    XAD_10, /* Census Tract */
    XAD_11, /* Address Representation Code */
    XAD_12, /* Address Validity Range */
    XAD_13, /* Effective Date */
    XAD_14, /* Expiration Date */
    XAD_15, /* Expiration Reason */
    XAD_16, /* Temporary Indicator */
    XAD_17, /* Bad Address Indicator */
    XAD_18, /* Address Usage */
    XAD_19, /* Addressee */
    XAD_20, /* Comment */
    XAD_21, /* Preference Order */
    XAD_22, /* Protection Code */
    XAD_23, /* Address Identifier */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "XAD"; }
  XAD *create() const { return new XAD(); }

 private:
  void init() {
    setName("XAD");
    /* Init members */
    addObject<SAD>(XAD_1, "XAD.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XAD_2, "XAD.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XAD_3, "XAD.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XAD_4, "XAD.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XAD_5, "XAD.5", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XAD_6, "XAD.6", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XAD_7, "XAD.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XAD_8, "XAD.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(XAD_9, "XAD.9", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(XAD_10, "XAD.10", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XAD_11, "XAD.11", HL7::initialized, HL7::repetition_off);
    addObject<DR>(XAD_12, "XAD.12", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(XAD_13, "XAD.13", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(XAD_14, "XAD.14", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(XAD_15, "XAD.15", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XAD_16, "XAD.16", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XAD_17, "XAD.17", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XAD_18, "XAD.18", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XAD_19, "XAD.19", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XAD_20, "XAD.20", HL7::initialized, HL7::repetition_off);
    addObject<NM>(XAD_21, "XAD.21", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(XAD_22, "XAD.22", HL7::initialized, HL7::repetition_off);
    addObject<EI>(XAD_23, "XAD.23", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Street Address
   */
  SAD *getXAD_1(size_t index = 0) {
    return (SAD *)this->getObjectSafe(index, XAD_1);
  }

  SAD *getStreetAddress(size_t index = 0) {
    return (SAD *)this->getObjectSafe(index, XAD_1);
  }

  bool isXAD_1(size_t index = 0) {
    try {
      return this->getObject(index, XAD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStreetAddress(size_t index = 0) {
    try {
      return this->getObject(index, XAD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Other Designation
   */
  ST *getXAD_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XAD_2);
  }

  ST *getOtherDesignation(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XAD_2);
  }

  bool isXAD_2(size_t index = 0) {
    try {
      return this->getObject(index, XAD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOtherDesignation(size_t index = 0) {
    try {
      return this->getObject(index, XAD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * City
   */
  ST *getXAD_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XAD_3);
  }

  ST *getCity(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XAD_3);
  }

  bool isXAD_3(size_t index = 0) {
    try {
      return this->getObject(index, XAD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCity(size_t index = 0) {
    try {
      return this->getObject(index, XAD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * State or Province
   */
  ST *getXAD_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XAD_4);
  }

  ST *getStateorProvince(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XAD_4);
  }

  bool isXAD_4(size_t index = 0) {
    try {
      return this->getObject(index, XAD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStateorProvince(size_t index = 0) {
    try {
      return this->getObject(index, XAD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Zip or Postal Code
   */
  ST *getXAD_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XAD_5);
  }

  ST *getZiporPostalCode(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XAD_5);
  }

  bool isXAD_5(size_t index = 0) {
    try {
      return this->getObject(index, XAD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isZiporPostalCode(size_t index = 0) {
    try {
      return this->getObject(index, XAD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Country
   */
  ID *getXAD_6(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XAD_6);
  }

  ID *getCountry(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XAD_6);
  }

  bool isXAD_6(size_t index = 0) {
    try {
      return this->getObject(index, XAD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCountry(size_t index = 0) {
    try {
      return this->getObject(index, XAD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Address Type
   */
  ID *getXAD_7(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XAD_7);
  }

  ID *getAddressType(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XAD_7);
  }

  bool isXAD_7(size_t index = 0) {
    try {
      return this->getObject(index, XAD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAddressType(size_t index = 0) {
    try {
      return this->getObject(index, XAD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Other Geographic Designation
   */
  ST *getXAD_8(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XAD_8);
  }

  ST *getOtherGeographicDesignation(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XAD_8);
  }

  bool isXAD_8(size_t index = 0) {
    try {
      return this->getObject(index, XAD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOtherGeographicDesignation(size_t index = 0) {
    try {
      return this->getObject(index, XAD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * County/Parish Code
   */
  CWE *getXAD_9(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, XAD_9);
  }

  CWE *getCountyParishCode(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, XAD_9);
  }

  bool isXAD_9(size_t index = 0) {
    try {
      return this->getObject(index, XAD_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCountyParishCode(size_t index = 0) {
    try {
      return this->getObject(index, XAD_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Census Tract
   */
  CWE *getXAD_10(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, XAD_10);
  }

  CWE *getCensusTract(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, XAD_10);
  }

  bool isXAD_10(size_t index = 0) {
    try {
      return this->getObject(index, XAD_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCensusTract(size_t index = 0) {
    try {
      return this->getObject(index, XAD_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Address Representation Code
   */
  ID *getXAD_11(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XAD_11);
  }

  ID *getAddressRepresentationCode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XAD_11);
  }

  bool isXAD_11(size_t index = 0) {
    try {
      return this->getObject(index, XAD_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAddressRepresentationCode(size_t index = 0) {
    try {
      return this->getObject(index, XAD_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Address Validity Range
   */
  DR *getXAD_12(size_t index = 0) {
    return (DR *)this->getObjectSafe(index, XAD_12);
  }

  DR *getAddressValidityRange(size_t index = 0) {
    return (DR *)this->getObjectSafe(index, XAD_12);
  }

  bool isXAD_12(size_t index = 0) {
    try {
      return this->getObject(index, XAD_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAddressValidityRange(size_t index = 0) {
    try {
      return this->getObject(index, XAD_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Date
   */
  DTM *getXAD_13(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, XAD_13);
  }

  DTM *getEffectiveDate(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, XAD_13);
  }

  bool isXAD_13(size_t index = 0) {
    try {
      return this->getObject(index, XAD_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, XAD_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expiration Date
   */
  DTM *getXAD_14(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, XAD_14);
  }

  DTM *getExpirationDate(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, XAD_14);
  }

  bool isXAD_14(size_t index = 0) {
    try {
      return this->getObject(index, XAD_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, XAD_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expiration Reason
   */
  CWE *getXAD_15(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, XAD_15);
  }

  CWE *getExpirationReason(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, XAD_15);
  }

  bool isXAD_15(size_t index = 0) {
    try {
      return this->getObject(index, XAD_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpirationReason(size_t index = 0) {
    try {
      return this->getObject(index, XAD_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Temporary Indicator
   */
  ID *getXAD_16(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XAD_16);
  }

  ID *getTemporaryIndicator(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XAD_16);
  }

  bool isXAD_16(size_t index = 0) {
    try {
      return this->getObject(index, XAD_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTemporaryIndicator(size_t index = 0) {
    try {
      return this->getObject(index, XAD_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Bad Address Indicator
   */
  ID *getXAD_17(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XAD_17);
  }

  ID *getBadAddressIndicator(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XAD_17);
  }

  bool isXAD_17(size_t index = 0) {
    try {
      return this->getObject(index, XAD_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBadAddressIndicator(size_t index = 0) {
    try {
      return this->getObject(index, XAD_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Address Usage
   */
  ID *getXAD_18(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XAD_18);
  }

  ID *getAddressUsage(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XAD_18);
  }

  bool isXAD_18(size_t index = 0) {
    try {
      return this->getObject(index, XAD_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAddressUsage(size_t index = 0) {
    try {
      return this->getObject(index, XAD_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Addressee
   */
  ST *getXAD_19(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XAD_19);
  }

  ST *getAddressee(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XAD_19);
  }

  bool isXAD_19(size_t index = 0) {
    try {
      return this->getObject(index, XAD_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAddressee(size_t index = 0) {
    try {
      return this->getObject(index, XAD_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Comment
   */
  ST *getXAD_20(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XAD_20);
  }

  ST *getComment(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XAD_20);
  }

  bool isXAD_20(size_t index = 0) {
    try {
      return this->getObject(index, XAD_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isComment(size_t index = 0) {
    try {
      return this->getObject(index, XAD_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Preference Order
   */
  NM *getXAD_21(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, XAD_21);
  }

  NM *getPreferenceOrder(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, XAD_21);
  }

  bool isXAD_21(size_t index = 0) {
    try {
      return this->getObject(index, XAD_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreferenceOrder(size_t index = 0) {
    try {
      return this->getObject(index, XAD_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Protection Code
   */
  CWE *getXAD_22(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, XAD_22);
  }

  CWE *getProtectionCode(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, XAD_22);
  }

  bool isXAD_22(size_t index = 0) {
    try {
      return this->getObject(index, XAD_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProtectionCode(size_t index = 0) {
    try {
      return this->getObject(index, XAD_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Address Identifier
   */
  EI *getXAD_23(size_t index = 0) {
    return (EI *)this->getObjectSafe(index, XAD_23);
  }

  EI *getAddressIdentifier(size_t index = 0) {
    return (EI *)this->getObjectSafe(index, XAD_23);
  }

  bool isXAD_23(size_t index = 0) {
    try {
      return this->getObject(index, XAD_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAddressIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, XAD_23) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End XAD */

} /* End HL7_29 */

#endif /* __XAD_v29_H__ */
