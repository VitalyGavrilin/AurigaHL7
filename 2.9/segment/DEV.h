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


#ifndef __DEV_v29_H__
#define __DEV_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"
#include "../datatype/XON.h"

namespace HL7_29 {

/* DEV */
class DEV : public HL7Segment {
 public:
  DEV() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    DEV_1,
    DEV_2,
    DEV_3,
    DEV_4,
    DEV_5,
    DEV_6,
    DEV_7,
    DEV_8,
    DEV_9,
    DEV_10,
    DEV_11,
    DEV_12,
    DEV_13,
    DEV_14,
    DEV_15,
    DEV_16,
    DEV_17,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "DEV"; }
  DEV* create() const { return new DEV(); }

 private:
  void init() {
    setName("DEV");
    /* Init members */
    addObject<ID>(DEV_1, "DEV.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(DEV_2, "DEV.2", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(DEV_3, "DEV.3", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(DEV_4, "DEV.4", HL7::initialized, HL7::repetition_off);
    addObject<XON>(DEV_5, "DEV.5", HL7::initialized, HL7::repetition_off);
    addObject<ST>(DEV_6, "DEV.6", HL7::initialized, HL7::repetition_off);
    addObject<ST>(DEV_7, "DEV.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(DEV_8, "DEV.8", HL7::initialized, HL7::repetition_off);
    addObject<EI>(DEV_9, "DEV.9", HL7::initialized, HL7::repetition_off);
    addObject<ST>(DEV_10, "DEV.10", HL7::initialized, HL7::repetition_off);
    addObject<ST>(DEV_11, "DEV.11", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(DEV_12, "DEV.12", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(DEV_13, "DEV.13", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DEV_14, "DEV.14", HL7::initialized, HL7::repetition_off);
    addObject<EI>(DEV_15, "DEV.15", HL7::initialized, HL7::repetition_off);
    addObject<ST>(DEV_16, "DEV.16", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(DEV_17, "DEV.17", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Action Code
   */

  ID* getDEV_1(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DEV_1);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DEV_1);
  }

  bool isDEV_1(size_t index = 0) {
    try {
      return this->getObject(index, DEV_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, DEV_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Unique Device Identifier
   */

  EI* getDEV_2(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, DEV_2);
  }

  EI* getUniqueDeviceIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, DEV_2);
  }

  bool isDEV_2(size_t index = 0) {
    try {
      return this->getObject(index, DEV_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniqueDeviceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, DEV_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Device Type
   */

  CNE* getDEV_3(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DEV_3);
  }

  CNE* getDeviceType(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DEV_3);
  }

  bool isDEV_3(size_t index = 0) {
    try {
      return this->getObject(index, DEV_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeviceType(size_t index = 0) {
    try {
      return this->getObject(index, DEV_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Device Status
   */

  CNE* getDEV_4(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DEV_4);
  }

  CNE* getDeviceStatus(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DEV_4);
  }

  bool isDEV_4(size_t index = 0) {
    try {
      return this->getObject(index, DEV_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeviceStatus(size_t index = 0) {
    try {
      return this->getObject(index, DEV_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Manufacturer/Distributor
   */

  XON* getDEV_5(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, DEV_5);
  }

  XON* getManufacturerDistributor(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, DEV_5);
  }

  bool isDEV_5(size_t index = 0) {
    try {
      return this->getObject(index, DEV_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isManufacturerDistributor(size_t index = 0) {
    try {
      return this->getObject(index, DEV_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Brand Name
   */

  ST* getDEV_6(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DEV_6);
  }

  ST* getBrandName(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DEV_6);
  }

  bool isDEV_6(size_t index = 0) {
    try {
      return this->getObject(index, DEV_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBrandName(size_t index = 0) {
    try {
      return this->getObject(index, DEV_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Model Identifier
   */

  ST* getDEV_7(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DEV_7);
  }

  ST* getModelIdentifier(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DEV_7);
  }

  bool isDEV_7(size_t index = 0) {
    try {
      return this->getObject(index, DEV_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isModelIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, DEV_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Catalogue Identifier
   */

  ST* getDEV_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DEV_8);
  }

  ST* getCatalogueIdentifier(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DEV_8);
  }

  bool isDEV_8(size_t index = 0) {
    try {
      return this->getObject(index, DEV_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCatalogueIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, DEV_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * UDI Device Identifier
   */

  EI* getDEV_9(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, DEV_9);
  }

  EI* getUDIDeviceIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, DEV_9);
  }

  bool isDEV_9(size_t index = 0) {
    try {
      return this->getObject(index, DEV_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUDIDeviceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, DEV_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Device Lot Number
   */

  ST* getDEV_10(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DEV_10);
  }

  ST* getDeviceLotNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DEV_10);
  }

  bool isDEV_10(size_t index = 0) {
    try {
      return this->getObject(index, DEV_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeviceLotNumber(size_t index = 0) {
    try {
      return this->getObject(index, DEV_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Device Serial Number
   */

  ST* getDEV_11(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DEV_11);
  }

  ST* getDeviceSerialNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DEV_11);
  }

  bool isDEV_11(size_t index = 0) {
    try {
      return this->getObject(index, DEV_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeviceSerialNumber(size_t index = 0) {
    try {
      return this->getObject(index, DEV_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Device Manufacture Date
   */

  DTM* getDEV_12(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, DEV_12);
  }

  DTM* getDeviceManufactureDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, DEV_12);
  }

  bool isDEV_12(size_t index = 0) {
    try {
      return this->getObject(index, DEV_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeviceManufactureDate(size_t index = 0) {
    try {
      return this->getObject(index, DEV_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Device Expiry Date
   */

  DTM* getDEV_13(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, DEV_13);
  }

  DTM* getDeviceExpiryDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, DEV_13);
  }

  bool isDEV_13(size_t index = 0) {
    try {
      return this->getObject(index, DEV_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeviceExpiryDate(size_t index = 0) {
    try {
      return this->getObject(index, DEV_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Safety Characteristics
   */

  CWE* getDEV_14(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DEV_14);
  }

  CWE* getSafetyCharacteristics(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DEV_14);
  }

  bool isDEV_14(size_t index = 0) {
    try {
      return this->getObject(index, DEV_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSafetyCharacteristics(size_t index = 0) {
    try {
      return this->getObject(index, DEV_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Device Donation Identification
   */

  EI* getDEV_15(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, DEV_15);
  }

  EI* getDeviceDonationIdentification(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, DEV_15);
  }

  bool isDEV_15(size_t index = 0) {
    try {
      return this->getObject(index, DEV_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeviceDonationIdentification(size_t index = 0) {
    try {
      return this->getObject(index, DEV_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Software Version Number
   */

  ST* getDEV_16(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DEV_16);
  }

  ST* getSoftwareVersionNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DEV_16);
  }

  bool isDEV_16(size_t index = 0) {
    try {
      return this->getObject(index, DEV_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSoftwareVersionNumber(size_t index = 0) {
    try {
      return this->getObject(index, DEV_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Implantation Status
   */

  CNE* getDEV_17(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DEV_17);
  }

  CNE* getImplantationStatus(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DEV_17);
  }

  bool isDEV_17(size_t index = 0) {
    try {
      return this->getObject(index, DEV_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isImplantationStatus(size_t index = 0) {
    try {
      return this->getObject(index, DEV_17) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of DEV */

} /* End of namespace HL7_29 */
#endif /* __DEV_v29_H__ */
