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


#ifndef __XTN_v29_H__
#define __XTN_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/SNM.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* extended telecommunication number */
class XTN : public HL7Data {
 public:
  XTN() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    XTN_1, /* Telecommunication Use Code */
    XTN_2, /* Telecommunication Equipment Type */
    XTN_3, /* Communication Address */
    XTN_4, /* Country Code */
    XTN_5, /* Area/City Code */
    XTN_6, /* Local Number */
    XTN_7, /* Extension */
    XTN_8, /* Any Text */
    XTN_9, /* Extension Prefix */
    XTN_10, /* Speed Dial Code */
    XTN_11, /* Unformatted Telephone Number */
    XTN_12, /* Effective Start Date */
    XTN_13, /* Expiration Date */
    XTN_14, /* Expiration Reason */
    XTN_15, /* Protection Code */
    XTN_16, /* Shared Telecommunication Identifier */
    XTN_17, /* Preference Order */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "XTN"; }
  XTN *create() const { return new XTN(); }

 private:
  void init() {
    setName("XTN");
    /* Init members */
    addObject<ID>(XTN_1, "XTN.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XTN_2, "XTN.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XTN_3, "XTN.3", HL7::initialized, HL7::repetition_off);
    addObject<SNM>(XTN_4, "XTN.4", HL7::initialized, HL7::repetition_off);
    addObject<SNM>(XTN_5, "XTN.5", HL7::initialized, HL7::repetition_off);
    addObject<SNM>(XTN_6, "XTN.6", HL7::initialized, HL7::repetition_off);
    addObject<SNM>(XTN_7, "XTN.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XTN_8, "XTN.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XTN_9, "XTN.9", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XTN_10, "XTN.10", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XTN_11, "XTN.11", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(XTN_12, "XTN.12", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(XTN_13, "XTN.13", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(XTN_14, "XTN.14", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(XTN_15, "XTN.15", HL7::initialized, HL7::repetition_off);
    addObject<EI>(XTN_16, "XTN.16", HL7::initialized, HL7::repetition_off);
    addObject<NM>(XTN_17, "XTN.17", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Telecommunication Use Code
   */
  ID *getXTN_1(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XTN_1);
  }

  ID *getTelecommunicationUseCode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XTN_1);
  }

  bool isXTN_1(size_t index = 0) {
    try {
      return this->getObject(index, XTN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTelecommunicationUseCode(size_t index = 0) {
    try {
      return this->getObject(index, XTN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Telecommunication Equipment Type
   */
  ID *getXTN_2(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XTN_2);
  }

  ID *getTelecommunicationEquipmentType(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XTN_2);
  }

  bool isXTN_2(size_t index = 0) {
    try {
      return this->getObject(index, XTN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTelecommunicationEquipmentType(size_t index = 0) {
    try {
      return this->getObject(index, XTN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Communication Address
   */
  ST *getXTN_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XTN_3);
  }

  ST *getCommunicationAddress(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XTN_3);
  }

  bool isXTN_3(size_t index = 0) {
    try {
      return this->getObject(index, XTN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCommunicationAddress(size_t index = 0) {
    try {
      return this->getObject(index, XTN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Country Code
   */
  SNM *getXTN_4(size_t index = 0) {
    return (SNM *)this->getObjectSafe(index, XTN_4);
  }

  SNM *getCountryCode(size_t index = 0) {
    return (SNM *)this->getObjectSafe(index, XTN_4);
  }

  bool isXTN_4(size_t index = 0) {
    try {
      return this->getObject(index, XTN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCountryCode(size_t index = 0) {
    try {
      return this->getObject(index, XTN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Area/City Code
   */
  SNM *getXTN_5(size_t index = 0) {
    return (SNM *)this->getObjectSafe(index, XTN_5);
  }

  SNM *getAreaCityCode(size_t index = 0) {
    return (SNM *)this->getObjectSafe(index, XTN_5);
  }

  bool isXTN_5(size_t index = 0) {
    try {
      return this->getObject(index, XTN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAreaCityCode(size_t index = 0) {
    try {
      return this->getObject(index, XTN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Local Number
   */
  SNM *getXTN_6(size_t index = 0) {
    return (SNM *)this->getObjectSafe(index, XTN_6);
  }

  SNM *getLocalNumber(size_t index = 0) {
    return (SNM *)this->getObjectSafe(index, XTN_6);
  }

  bool isXTN_6(size_t index = 0) {
    try {
      return this->getObject(index, XTN_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocalNumber(size_t index = 0) {
    try {
      return this->getObject(index, XTN_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Extension
   */
  SNM *getXTN_7(size_t index = 0) {
    return (SNM *)this->getObjectSafe(index, XTN_7);
  }

  SNM *getExtension(size_t index = 0) {
    return (SNM *)this->getObjectSafe(index, XTN_7);
  }

  bool isXTN_7(size_t index = 0) {
    try {
      return this->getObject(index, XTN_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExtension(size_t index = 0) {
    try {
      return this->getObject(index, XTN_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Any Text
   */
  ST *getXTN_8(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XTN_8);
  }

  ST *getAnyText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XTN_8);
  }

  bool isXTN_8(size_t index = 0) {
    try {
      return this->getObject(index, XTN_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAnyText(size_t index = 0) {
    try {
      return this->getObject(index, XTN_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Extension Prefix
   */
  ST *getXTN_9(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XTN_9);
  }

  ST *getExtensionPrefix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XTN_9);
  }

  bool isXTN_9(size_t index = 0) {
    try {
      return this->getObject(index, XTN_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExtensionPrefix(size_t index = 0) {
    try {
      return this->getObject(index, XTN_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Speed Dial Code
   */
  ST *getXTN_10(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XTN_10);
  }

  ST *getSpeedDialCode(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XTN_10);
  }

  bool isXTN_10(size_t index = 0) {
    try {
      return this->getObject(index, XTN_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpeedDialCode(size_t index = 0) {
    try {
      return this->getObject(index, XTN_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Unformatted Telephone Number
   */
  ST *getXTN_11(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XTN_11);
  }

  ST *getUnformattedTelephoneNumber(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XTN_11);
  }

  bool isXTN_11(size_t index = 0) {
    try {
      return this->getObject(index, XTN_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUnformattedTelephoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, XTN_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Start Date
   */
  DTM *getXTN_12(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, XTN_12);
  }

  DTM *getEffectiveStartDate(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, XTN_12);
  }

  bool isXTN_12(size_t index = 0) {
    try {
      return this->getObject(index, XTN_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveStartDate(size_t index = 0) {
    try {
      return this->getObject(index, XTN_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expiration Date
   */
  DTM *getXTN_13(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, XTN_13);
  }

  DTM *getExpirationDate(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, XTN_13);
  }

  bool isXTN_13(size_t index = 0) {
    try {
      return this->getObject(index, XTN_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, XTN_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expiration Reason
   */
  CWE *getXTN_14(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, XTN_14);
  }

  CWE *getExpirationReason(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, XTN_14);
  }

  bool isXTN_14(size_t index = 0) {
    try {
      return this->getObject(index, XTN_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpirationReason(size_t index = 0) {
    try {
      return this->getObject(index, XTN_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Protection Code
   */
  CWE *getXTN_15(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, XTN_15);
  }

  CWE *getProtectionCode(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, XTN_15);
  }

  bool isXTN_15(size_t index = 0) {
    try {
      return this->getObject(index, XTN_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProtectionCode(size_t index = 0) {
    try {
      return this->getObject(index, XTN_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Shared Telecommunication Identifier
   */
  EI *getXTN_16(size_t index = 0) {
    return (EI *)this->getObjectSafe(index, XTN_16);
  }

  EI *getSharedTelecommunicationIdentifier(size_t index = 0) {
    return (EI *)this->getObjectSafe(index, XTN_16);
  }

  bool isXTN_16(size_t index = 0) {
    try {
      return this->getObject(index, XTN_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSharedTelecommunicationIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, XTN_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Preference Order
   */
  NM *getXTN_17(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, XTN_17);
  }

  NM *getPreferenceOrder(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, XTN_17);
  }

  bool isXTN_17(size_t index = 0) {
    try {
      return this->getObject(index, XTN_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreferenceOrder(size_t index = 0) {
    try {
      return this->getObject(index, XTN_17) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End XTN */

} /* End HL7_29 */

#endif /* __XTN_v29_H__ */
