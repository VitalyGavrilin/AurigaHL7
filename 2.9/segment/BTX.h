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


#ifndef __BTX_v29_H__
#define __BTX_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/SI.h"
#include "../datatype/XCN.h"
#include "../datatype/XON.h"

namespace HL7_29 {

/* BTX */
class BTX : public HL7Segment {
 public:
  BTX() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    BTX_1,
    BTX_2,
    BTX_3,
    BTX_4,
    BTX_5,
    BTX_6,
    BTX_7,
    BTX_8,
    BTX_9,
    BTX_10,
    BTX_11,
    BTX_12,
    BTX_13,
    BTX_14,
    BTX_15,
    BTX_16,
    BTX_17,
    BTX_18,
    BTX_19,
    BTX_20,
    BTX_21,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "BTX"; }
  BTX* create() const { return new BTX(); }

 private:
  void init() {
    setName("BTX");
    /* Init members */
    addObject<SI>(BTX_1, "BTX.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(BTX_2, "BTX.2", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(BTX_3, "BTX.3", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(BTX_4, "BTX.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(BTX_5, "BTX.5", HL7::initialized, HL7::repetition_off);
    addObject<XON>(BTX_6, "BTX.6", HL7::initialized, HL7::repetition_off);
    addObject<EI>(BTX_7, "BTX.7", HL7::initialized, HL7::repetition_off);
    addObject<NM>(BTX_8, "BTX.8", HL7::initialized, HL7::repetition_off);
    addObject<NM>(BTX_9, "BTX.9", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(BTX_10, "BTX.10", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(BTX_11, "BTX.11", HL7::initialized, HL7::repetition_off);
    addObject<ID>(BTX_12, "BTX.12", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(BTX_13, "BTX.13", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(BTX_14, "BTX.14", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(BTX_15, "BTX.15", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(BTX_16, "BTX.16", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(BTX_17, "BTX.17", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(BTX_18, "BTX.18", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(BTX_19, "BTX.19", HL7::initialized, HL7::repetition_off);
    addObject<EI>(BTX_20, "BTX.20", HL7::initialized, HL7::repetition_off);
    addObject<ID>(BTX_21, "BTX.21", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID – BTX
   */

  SI* getBTX_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, BTX_1);
  }

  SI* getSetIDBTX(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, BTX_1);
  }

  bool isBTX_1(size_t index = 0) {
    try {
      return this->getObject(index, BTX_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDBTX(size_t index = 0) {
    try {
      return this->getObject(index, BTX_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BC Donation ID
   */

  EI* getBTX_2(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, BTX_2);
  }

  EI* getBCDonationID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, BTX_2);
  }

  bool isBTX_2(size_t index = 0) {
    try {
      return this->getObject(index, BTX_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBCDonationID(size_t index = 0) {
    try {
      return this->getObject(index, BTX_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BC Component
   */

  CNE* getBTX_3(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, BTX_3);
  }

  CNE* getBCComponent(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, BTX_3);
  }

  bool isBTX_3(size_t index = 0) {
    try {
      return this->getObject(index, BTX_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBCComponent(size_t index = 0) {
    try {
      return this->getObject(index, BTX_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BC Blood Group
   */

  CNE* getBTX_4(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, BTX_4);
  }

  CNE* getBCBloodGroup(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, BTX_4);
  }

  bool isBTX_4(size_t index = 0) {
    try {
      return this->getObject(index, BTX_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBCBloodGroup(size_t index = 0) {
    try {
      return this->getObject(index, BTX_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * CP Commercial Product
   */

  CWE* getBTX_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BTX_5);
  }

  CWE* getCPCommercialProduct(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BTX_5);
  }

  bool isBTX_5(size_t index = 0) {
    try {
      return this->getObject(index, BTX_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCPCommercialProduct(size_t index = 0) {
    try {
      return this->getObject(index, BTX_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * CP Manufacturer
   */

  XON* getBTX_6(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, BTX_6);
  }

  XON* getCPManufacturer(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, BTX_6);
  }

  bool isBTX_6(size_t index = 0) {
    try {
      return this->getObject(index, BTX_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCPManufacturer(size_t index = 0) {
    try {
      return this->getObject(index, BTX_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * CP Lot Number
   */

  EI* getBTX_7(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, BTX_7);
  }

  EI* getCPLotNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, BTX_7);
  }

  bool isBTX_7(size_t index = 0) {
    try {
      return this->getObject(index, BTX_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCPLotNumber(size_t index = 0) {
    try {
      return this->getObject(index, BTX_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Quantity
   */

  NM* getBTX_8(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, BTX_8);
  }

  NM* getBPQuantity(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, BTX_8);
  }

  bool isBTX_8(size_t index = 0) {
    try {
      return this->getObject(index, BTX_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPQuantity(size_t index = 0) {
    try {
      return this->getObject(index, BTX_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Amount
   */

  NM* getBTX_9(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, BTX_9);
  }

  NM* getBPAmount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, BTX_9);
  }

  bool isBTX_9(size_t index = 0) {
    try {
      return this->getObject(index, BTX_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPAmount(size_t index = 0) {
    try {
      return this->getObject(index, BTX_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Units
   */

  CWE* getBTX_10(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BTX_10);
  }

  CWE* getBPUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BTX_10);
  }

  bool isBTX_10(size_t index = 0) {
    try {
      return this->getObject(index, BTX_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPUnits(size_t index = 0) {
    try {
      return this->getObject(index, BTX_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Transfusion/Disposition Status
   */

  CWE* getBTX_11(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BTX_11);
  }

  CWE* getBPTransfusionDispositionStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BTX_11);
  }

  bool isBTX_11(size_t index = 0) {
    try {
      return this->getObject(index, BTX_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPTransfusionDispositionStatus(size_t index = 0) {
    try {
      return this->getObject(index, BTX_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Message Status
   */

  ID* getBTX_12(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, BTX_12);
  }

  ID* getBPMessageStatus(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, BTX_12);
  }

  bool isBTX_12(size_t index = 0) {
    try {
      return this->getObject(index, BTX_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPMessageStatus(size_t index = 0) {
    try {
      return this->getObject(index, BTX_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Date/Time of Status
   */

  DTM* getBTX_13(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, BTX_13);
  }

  DTM* getBPDateTimeofStatus(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, BTX_13);
  }

  bool isBTX_13(size_t index = 0) {
    try {
      return this->getObject(index, BTX_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPDateTimeofStatus(size_t index = 0) {
    try {
      return this->getObject(index, BTX_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Transfusion Administrator
   */

  XCN* getBTX_14(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, BTX_14);
  }

  XCN* getBPTransfusionAdministrator(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, BTX_14);
  }

  bool isBTX_14(size_t index = 0) {
    try {
      return this->getObject(index, BTX_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPTransfusionAdministrator(size_t index = 0) {
    try {
      return this->getObject(index, BTX_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Transfusion Verifier
   */

  XCN* getBTX_15(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, BTX_15);
  }

  XCN* getBPTransfusionVerifier(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, BTX_15);
  }

  bool isBTX_15(size_t index = 0) {
    try {
      return this->getObject(index, BTX_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPTransfusionVerifier(size_t index = 0) {
    try {
      return this->getObject(index, BTX_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Transfusion Start Date/Time of Status
   */

  DTM* getBTX_16(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, BTX_16);
  }

  DTM* getBPTransfusionStartDateTimeofStatus(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, BTX_16);
  }

  bool isBTX_16(size_t index = 0) {
    try {
      return this->getObject(index, BTX_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPTransfusionStartDateTimeofStatus(size_t index = 0) {
    try {
      return this->getObject(index, BTX_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Transfusion End Date/Time of Status
   */

  DTM* getBTX_17(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, BTX_17);
  }

  DTM* getBPTransfusionEndDateTimeofStatus(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, BTX_17);
  }

  bool isBTX_17(size_t index = 0) {
    try {
      return this->getObject(index, BTX_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPTransfusionEndDateTimeofStatus(size_t index = 0) {
    try {
      return this->getObject(index, BTX_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Adverse Reaction Type
   */

  CWE* getBTX_18(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BTX_18);
  }

  CWE* getBPAdverseReactionType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BTX_18);
  }

  bool isBTX_18(size_t index = 0) {
    try {
      return this->getObject(index, BTX_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPAdverseReactionType(size_t index = 0) {
    try {
      return this->getObject(index, BTX_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Transfusion Interrupted Reason
   */

  CWE* getBTX_19(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BTX_19);
  }

  CWE* getBPTransfusionInterruptedReason(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BTX_19);
  }

  bool isBTX_19(size_t index = 0) {
    try {
      return this->getObject(index, BTX_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPTransfusionInterruptedReason(size_t index = 0) {
    try {
      return this->getObject(index, BTX_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * BP Unique ID
   */

  EI* getBTX_20(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, BTX_20);
  }

  EI* getBPUniqueID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, BTX_20);
  }

  bool isBTX_20(size_t index = 0) {
    try {
      return this->getObject(index, BTX_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBPUniqueID(size_t index = 0) {
    try {
      return this->getObject(index, BTX_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code
   */

  ID* getBTX_21(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, BTX_21);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, BTX_21);
  }

  bool isBTX_21(size_t index = 0) {
    try {
      return this->getObject(index, BTX_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, BTX_21) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of BTX */

} /* End of namespace HL7_29 */
#endif /* __BTX_v29_H__ */
