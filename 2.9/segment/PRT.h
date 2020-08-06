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


#ifndef __PRT_v29_H__
#define __PRT_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/PL.h"
#include "../datatype/PLN.h"
#include "../datatype/ST.h"
#include "../datatype/XAD.h"
#include "../datatype/XCN.h"
#include "../datatype/XON.h"
#include "../datatype/XTN.h"

namespace HL7_29 {

/* PRT */
class PRT : public HL7Segment {
 public:
  PRT() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PRT_1,
    PRT_2,
    PRT_3,
    PRT_4,
    PRT_5,
    PRT_6,
    PRT_7,
    PRT_8,
    PRT_9,
    PRT_10,
    PRT_11,
    PRT_12,
    PRT_13,
    PRT_14,
    PRT_15,
    PRT_16,
    PRT_17,
    PRT_18,
    PRT_19,
    PRT_20,
    PRT_21,
    PRT_22,
    PRT_23,
    PRT_24,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PRT"; }
  PRT* create() const { return new PRT(); }

 private:
  void init() {
    setName("PRT");
    /* Init members */
    addObject<EI>(PRT_1, "PRT.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PRT_2, "PRT.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PRT_3, "PRT.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PRT_4, "PRT.4", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(PRT_5, "PRT.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PRT_6, "PRT.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PRT_7, "PRT.7", HL7::initialized, HL7::repetition_off);
    addObject<XON>(PRT_8, "PRT.8", HL7::initialized, HL7::repetition_off);
    addObject<PL>(PRT_9, "PRT.9", HL7::initialized, HL7::repetition_off);
    addObject<EI>(PRT_10, "PRT.10", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PRT_11, "PRT.11", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PRT_12, "PRT.12", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PRT_13, "PRT.13", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(PRT_14, "PRT.14", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(PRT_15, "PRT.15", HL7::initialized, HL7::repetition_off);
    addObject<EI>(PRT_16, "PRT.16", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PRT_17, "PRT.17", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PRT_18, "PRT.18", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PRT_19, "PRT.19", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PRT_20, "PRT.20", HL7::initialized, HL7::repetition_off);
    addObject<EI>(PRT_21, "PRT.21", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(PRT_22, "PRT.22", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PRT_23, "PRT.23", HL7::initialized, HL7::repetition_off);
    addObject<PLN>(PRT_24, "PRT.24", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Participation Instance ID
   */

  EI* getPRT_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PRT_1);
  }

  EI* getParticipationInstanceID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PRT_1);
  }

  bool isPRT_1(size_t index = 0) {
    try {
      return this->getObject(index, PRT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParticipationInstanceID(size_t index = 0) {
    try {
      return this->getObject(index, PRT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code
   */

  ID* getPRT_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PRT_2);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PRT_2);
  }

  bool isPRT_2(size_t index = 0) {
    try {
      return this->getObject(index, PRT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, PRT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Reason
   */

  CWE* getPRT_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRT_3);
  }

  CWE* getActionReason(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRT_3);
  }

  bool isPRT_3(size_t index = 0) {
    try {
      return this->getObject(index, PRT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionReason(size_t index = 0) {
    try {
      return this->getObject(index, PRT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Role of Participation
   */

  CWE* getPRT_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRT_4);
  }

  CWE* getRoleofParticipation(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRT_4);
  }

  bool isPRT_4(size_t index = 0) {
    try {
      return this->getObject(index, PRT_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoleofParticipation(size_t index = 0) {
    try {
      return this->getObject(index, PRT_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Person
   */

  XCN* getPRT_5(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PRT_5);
  }

  XCN* getPerson(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PRT_5);
  }

  bool isPRT_5(size_t index = 0) {
    try {
      return this->getObject(index, PRT_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPerson(size_t index = 0) {
    try {
      return this->getObject(index, PRT_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Person Provider Type
   */

  CWE* getPRT_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRT_6);
  }

  CWE* getPersonProviderType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRT_6);
  }

  bool isPRT_6(size_t index = 0) {
    try {
      return this->getObject(index, PRT_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPersonProviderType(size_t index = 0) {
    try {
      return this->getObject(index, PRT_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Organization Unit Type
   */

  CWE* getPRT_7(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRT_7);
  }

  CWE* getOrganizationUnitType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRT_7);
  }

  bool isPRT_7(size_t index = 0) {
    try {
      return this->getObject(index, PRT_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrganizationUnitType(size_t index = 0) {
    try {
      return this->getObject(index, PRT_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Organization
   */

  XON* getPRT_8(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PRT_8);
  }

  XON* getOrganization(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PRT_8);
  }

  bool isPRT_8(size_t index = 0) {
    try {
      return this->getObject(index, PRT_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrganization(size_t index = 0) {
    try {
      return this->getObject(index, PRT_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location
   */

  PL* getPRT_9(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PRT_9);
  }

  PL* getLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PRT_9);
  }

  bool isPRT_9(size_t index = 0) {
    try {
      return this->getObject(index, PRT_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocation(size_t index = 0) {
    try {
      return this->getObject(index, PRT_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Device
   */

  EI* getPRT_10(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PRT_10);
  }

  EI* getDevice(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PRT_10);
  }

  bool isPRT_10(size_t index = 0) {
    try {
      return this->getObject(index, PRT_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDevice(size_t index = 0) {
    try {
      return this->getObject(index, PRT_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Begin Date/Time
   */

  DTM* getPRT_11(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PRT_11);
  }

  DTM* getBeginDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PRT_11);
  }

  bool isPRT_11(size_t index = 0) {
    try {
      return this->getObject(index, PRT_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBeginDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PRT_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * End Date/Time
   */

  DTM* getPRT_12(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PRT_12);
  }

  DTM* getEndDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PRT_12);
  }

  bool isPRT_12(size_t index = 0) {
    try {
      return this->getObject(index, PRT_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEndDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PRT_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Qualitative Duration
   */

  CWE* getPRT_13(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRT_13);
  }

  CWE* getQualitativeDuration(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRT_13);
  }

  bool isPRT_13(size_t index = 0) {
    try {
      return this->getObject(index, PRT_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQualitativeDuration(size_t index = 0) {
    try {
      return this->getObject(index, PRT_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Address
   */

  XAD* getPRT_14(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, PRT_14);
  }

  XAD* getAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, PRT_14);
  }

  bool isPRT_14(size_t index = 0) {
    try {
      return this->getObject(index, PRT_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAddress(size_t index = 0) {
    try {
      return this->getObject(index, PRT_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Telecommunication Address
   */

  XTN* getPRT_15(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, PRT_15);
  }

  XTN* getTelecommunicationAddress(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, PRT_15);
  }

  bool isPRT_15(size_t index = 0) {
    try {
      return this->getObject(index, PRT_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTelecommunicationAddress(size_t index = 0) {
    try {
      return this->getObject(index, PRT_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * UDI Device Identifier
   */

  EI* getPRT_16(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PRT_16);
  }

  EI* getUDIDeviceIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PRT_16);
  }

  bool isPRT_16(size_t index = 0) {
    try {
      return this->getObject(index, PRT_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUDIDeviceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, PRT_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Device Manufacture Date
   */

  DTM* getPRT_17(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PRT_17);
  }

  DTM* getDeviceManufactureDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PRT_17);
  }

  bool isPRT_17(size_t index = 0) {
    try {
      return this->getObject(index, PRT_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeviceManufactureDate(size_t index = 0) {
    try {
      return this->getObject(index, PRT_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Device Expiry Date
   */

  DTM* getPRT_18(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PRT_18);
  }

  DTM* getDeviceExpiryDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PRT_18);
  }

  bool isPRT_18(size_t index = 0) {
    try {
      return this->getObject(index, PRT_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeviceExpiryDate(size_t index = 0) {
    try {
      return this->getObject(index, PRT_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Device Lot Number
   */

  ST* getPRT_19(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PRT_19);
  }

  ST* getDeviceLotNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PRT_19);
  }

  bool isPRT_19(size_t index = 0) {
    try {
      return this->getObject(index, PRT_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeviceLotNumber(size_t index = 0) {
    try {
      return this->getObject(index, PRT_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Device Serial Number
   */

  ST* getPRT_20(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PRT_20);
  }

  ST* getDeviceSerialNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PRT_20);
  }

  bool isPRT_20(size_t index = 0) {
    try {
      return this->getObject(index, PRT_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeviceSerialNumber(size_t index = 0) {
    try {
      return this->getObject(index, PRT_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Device Donation Identification
   */

  EI* getPRT_21(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PRT_21);
  }

  EI* getDeviceDonationIdentification(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PRT_21);
  }

  bool isPRT_21(size_t index = 0) {
    try {
      return this->getObject(index, PRT_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeviceDonationIdentification(size_t index = 0) {
    try {
      return this->getObject(index, PRT_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Device Type
   */

  CNE* getPRT_22(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, PRT_22);
  }

  CNE* getDeviceType(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, PRT_22);
  }

  bool isPRT_22(size_t index = 0) {
    try {
      return this->getObject(index, PRT_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeviceType(size_t index = 0) {
    try {
      return this->getObject(index, PRT_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Preferred Method of Contact
   */

  CWE* getPRT_23(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRT_23);
  }

  CWE* getPreferredMethodofContact(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PRT_23);
  }

  bool isPRT_23(size_t index = 0) {
    try {
      return this->getObject(index, PRT_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreferredMethodofContact(size_t index = 0) {
    try {
      return this->getObject(index, PRT_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact Identifiers
   */

  PLN* getPRT_24(size_t index = 0) {
    return (PLN*)this->getObjectSafe(index, PRT_24);
  }

  PLN* getContactIdentifiers(size_t index = 0) {
    return (PLN*)this->getObjectSafe(index, PRT_24);
  }

  bool isPRT_24(size_t index = 0) {
    try {
      return this->getObject(index, PRT_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactIdentifiers(size_t index = 0) {
    try {
      return this->getObject(index, PRT_24) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PRT */

} /* End of namespace HL7_29 */
#endif /* __PRT_v29_H__ */
