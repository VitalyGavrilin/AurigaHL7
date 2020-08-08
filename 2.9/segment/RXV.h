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


#ifndef __RXV_v29_H__
#define __RXV_v29_H__

#include "../../common/Util.h"
#include "../datatype/CQ.h"
#include "../datatype/CWE.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/SI.h"

namespace HL7_29 {

/* RXV */
class RXV : public HL7Segment {
 public:
  RXV() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    RXV_1,
    RXV_2,
    RXV_3,
    RXV_4,
    RXV_5,
    RXV_6,
    RXV_7,
    RXV_8,
    RXV_9,
    RXV_10,
    RXV_11,
    RXV_12,
    RXV_13,
    RXV_14,
    RXV_15,
    RXV_16,
    RXV_17,
    RXV_18,
    RXV_19,
    RXV_20,
    RXV_21,
    RXV_22,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "RXV"; }
  RXV* create() const { return new RXV(); }

 private:
  void init() {
    setName("RXV");
    /* Init members */
    addObject<SI>(RXV_1, "RXV.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RXV_2, "RXV.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXV_3, "RXV.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXV_4, "RXV.4", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXV_5, "RXV.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXV_6, "RXV.6", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RXV_7, "RXV.7", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXV_8, "RXV.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXV_9, "RXV.9", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXV_10, "RXV.10", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXV_11, "RXV.11", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXV_12, "RXV.12", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXV_13, "RXV.13", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXV_14, "RXV.14", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXV_15, "RXV.15", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(RXV_16, "RXV.16", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(RXV_17, "RXV.17", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXV_18, "RXV.18", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXV_19, "RXV.19", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXV_20, "RXV.20", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RXV_21, "RXV.21", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RXV_22, "RXV.22", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - RXV
   */

  SI* getRXV_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, RXV_1);
  }

  SI* getSetIDRXV(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, RXV_1);
  }

  bool isRXV_1(size_t index = 0) {
    try {
      return this->getObject(index, RXV_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDRXV(size_t index = 0) {
    try {
      return this->getObject(index, RXV_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Bolus Type
   */

  ID* getRXV_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXV_2);
  }

  ID* getBolusType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXV_2);
  }

  bool isRXV_2(size_t index = 0) {
    try {
      return this->getObject(index, RXV_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBolusType(size_t index = 0) {
    try {
      return this->getObject(index, RXV_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Bolus Dose Amount
   */

  NM* getRXV_3(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXV_3);
  }

  NM* getBolusDoseAmount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXV_3);
  }

  bool isRXV_3(size_t index = 0) {
    try {
      return this->getObject(index, RXV_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBolusDoseAmount(size_t index = 0) {
    try {
      return this->getObject(index, RXV_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Bolus Dose Amount Units
   */

  CWE* getRXV_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXV_4);
  }

  CWE* getBolusDoseAmountUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXV_4);
  }

  bool isRXV_4(size_t index = 0) {
    try {
      return this->getObject(index, RXV_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBolusDoseAmountUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXV_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Bolus Dose Volume
   */

  NM* getRXV_5(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXV_5);
  }

  NM* getBolusDoseVolume(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXV_5);
  }

  bool isRXV_5(size_t index = 0) {
    try {
      return this->getObject(index, RXV_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBolusDoseVolume(size_t index = 0) {
    try {
      return this->getObject(index, RXV_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Bolus Dose Volume Units
   */

  CWE* getRXV_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXV_6);
  }

  CWE* getBolusDoseVolumeUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXV_6);
  }

  bool isRXV_6(size_t index = 0) {
    try {
      return this->getObject(index, RXV_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBolusDoseVolumeUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXV_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * PCA Type
   */

  ID* getRXV_7(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXV_7);
  }

  ID* getPCAType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXV_7);
  }

  bool isRXV_7(size_t index = 0) {
    try {
      return this->getObject(index, RXV_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPCAType(size_t index = 0) {
    try {
      return this->getObject(index, RXV_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * PCA Dose Amount
   */

  NM* getRXV_8(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXV_8);
  }

  NM* getPCADoseAmount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXV_8);
  }

  bool isRXV_8(size_t index = 0) {
    try {
      return this->getObject(index, RXV_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPCADoseAmount(size_t index = 0) {
    try {
      return this->getObject(index, RXV_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * PCA Dose Amount Units
   */

  CWE* getRXV_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXV_9);
  }

  CWE* getPCADoseAmountUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXV_9);
  }

  bool isRXV_9(size_t index = 0) {
    try {
      return this->getObject(index, RXV_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPCADoseAmountUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXV_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * PCA Dose Amount Volume
   */

  NM* getRXV_10(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXV_10);
  }

  NM* getPCADoseAmountVolume(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXV_10);
  }

  bool isRXV_10(size_t index = 0) {
    try {
      return this->getObject(index, RXV_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPCADoseAmountVolume(size_t index = 0) {
    try {
      return this->getObject(index, RXV_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * PCA Dose Amount Volume Units
   */

  CWE* getRXV_11(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXV_11);
  }

  CWE* getPCADoseAmountVolumeUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXV_11);
  }

  bool isRXV_11(size_t index = 0) {
    try {
      return this->getObject(index, RXV_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPCADoseAmountVolumeUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXV_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Max Dose Amount
   */

  NM* getRXV_12(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXV_12);
  }

  NM* getMaxDoseAmount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXV_12);
  }

  bool isRXV_12(size_t index = 0) {
    try {
      return this->getObject(index, RXV_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMaxDoseAmount(size_t index = 0) {
    try {
      return this->getObject(index, RXV_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Max Dose Amount Units
   */

  CWE* getRXV_13(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXV_13);
  }

  CWE* getMaxDoseAmountUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXV_13);
  }

  bool isRXV_13(size_t index = 0) {
    try {
      return this->getObject(index, RXV_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMaxDoseAmountUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXV_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Max Dose Amount Volume
   */

  NM* getRXV_14(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXV_14);
  }

  NM* getMaxDoseAmountVolume(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXV_14);
  }

  bool isRXV_14(size_t index = 0) {
    try {
      return this->getObject(index, RXV_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMaxDoseAmountVolume(size_t index = 0) {
    try {
      return this->getObject(index, RXV_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Max Dose Amount Volume Units
   */

  CWE* getRXV_15(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXV_15);
  }

  CWE* getMaxDoseAmountVolumeUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXV_15);
  }

  bool isRXV_15(size_t index = 0) {
    try {
      return this->getObject(index, RXV_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMaxDoseAmountVolumeUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXV_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Max Dose per Time
   */

  CQ* getRXV_16(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, RXV_16);
  }

  CQ* getMaxDoseperTime(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, RXV_16);
  }

  bool isRXV_16(size_t index = 0) {
    try {
      return this->getObject(index, RXV_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMaxDoseperTime(size_t index = 0) {
    try {
      return this->getObject(index, RXV_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Lockout Interval
   */

  CQ* getRXV_17(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, RXV_17);
  }

  CQ* getLockoutInterval(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, RXV_17);
  }

  bool isRXV_17(size_t index = 0) {
    try {
      return this->getObject(index, RXV_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLockoutInterval(size_t index = 0) {
    try {
      return this->getObject(index, RXV_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Syringe Manufacturer
   */

  CWE* getRXV_18(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXV_18);
  }

  CWE* getSyringeManufacturer(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXV_18);
  }

  bool isRXV_18(size_t index = 0) {
    try {
      return this->getObject(index, RXV_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSyringeManufacturer(size_t index = 0) {
    try {
      return this->getObject(index, RXV_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Syringe Model Number
   */

  CWE* getRXV_19(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXV_19);
  }

  CWE* getSyringeModelNumber(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXV_19);
  }

  bool isRXV_19(size_t index = 0) {
    try {
      return this->getObject(index, RXV_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSyringeModelNumber(size_t index = 0) {
    try {
      return this->getObject(index, RXV_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Syringe Size
   */

  NM* getRXV_20(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXV_20);
  }

  NM* getSyringeSize(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXV_20);
  }

  bool isRXV_20(size_t index = 0) {
    try {
      return this->getObject(index, RXV_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSyringeSize(size_t index = 0) {
    try {
      return this->getObject(index, RXV_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Syringe Size Units
   */

  CWE* getRXV_21(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXV_21);
  }

  CWE* getSyringeSizeUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RXV_21);
  }

  bool isRXV_21(size_t index = 0) {
    try {
      return this->getObject(index, RXV_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSyringeSizeUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXV_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code
   */

  ID* getRXV_22(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXV_22);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXV_22);
  }

  bool isRXV_22(size_t index = 0) {
    try {
      return this->getObject(index, RXV_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, RXV_22) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RXV */

} /* End of namespace HL7_29 */
#endif /* __RXV_v29_H__ */
