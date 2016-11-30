/*
 * This file is part of HCPPL.
 *
 * HCPPL is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * HCPPL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with HCPPL.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __ORC_v24_H__
#define __ORC_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0339.h"
#include "../datatype/CWE.h"
#include "../datatype/EI.h"
#include "../datatype/EIP.h"
#include "../datatype/ID.h"
#include "../datatype/PL.h"
#include "../datatype/TQ.h"
#include "../datatype/TS.h"
#include "../datatype/XAD.h"
#include "../datatype/XCN.h"
#include "../datatype/XON.h"
#include "../datatype/XTN.h"

namespace HL7_24 {

/* Common Order */
class ORC : public HL7Segment {
 public:
  ORC() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    ORC_1,
    ORC_2,
    ORC_3,
    ORC_4,
    ORC_5,
    ORC_6,
    ORC_7,
    ORC_8,
    ORC_9,
    ORC_10,
    ORC_11,
    ORC_12,
    ORC_13,
    ORC_14,
    ORC_15,
    ORC_16,
    ORC_17,
    ORC_18,
    ORC_19,
    ORC_20,
    ORC_21,
    ORC_22,
    ORC_23,
    ORC_24,
    ORC_25,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "ORC"; }
  ORC* create() const { return new ORC(); }

 private:
  void init() {
    setName("ORC");
    /* Init members */
    addObject<ID>(ORC_1, "ORC.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(ORC_2, "ORC.2", HL7::conditional, HL7::repetition_off);
    addObject<EI>(ORC_3, "ORC.3", HL7::conditional, HL7::repetition_off);
    addObject<EI>(ORC_4, "ORC.4", HL7::optional, HL7::repetition_off);
    addObject<ID>(ORC_5, "ORC.5", HL7::optional, HL7::repetition_off);
    addObject<ID>(ORC_6, "ORC.6", HL7::optional, HL7::repetition_off);
    addObject<TQ>(ORC_7, "ORC.7", HL7::optional, HL7::repetition_on);
    addObject<EIP>(ORC_8, "ORC.8", HL7::optional, HL7::repetition_off);
    addObject<TS>(ORC_9, "ORC.9", HL7::optional, HL7::repetition_off);
    addObject<XCN>(ORC_10, "ORC.10", HL7::optional, HL7::repetition_on);
    addObject<XCN>(ORC_11, "ORC.11", HL7::optional, HL7::repetition_on);
    addObject<XCN>(ORC_12, "ORC.12", HL7::optional, HL7::repetition_on);
    addObject<PL>(ORC_13, "ORC.13", HL7::optional, HL7::repetition_off);
    addObject<XTN>(ORC_14, "ORC.14", HL7::optional, HL7::repetition_on);
    addObject<TS>(ORC_15, "ORC.15", HL7::optional, HL7::repetition_off);
    addObject<CE>(ORC_16, "ORC.16", HL7::optional, HL7::repetition_off);
    addObject<CE>(ORC_17, "ORC.17", HL7::optional, HL7::repetition_off);
    addObject<CE>(ORC_18, "ORC.18", HL7::optional, HL7::repetition_off);
    addObject<XCN>(ORC_19, "ORC.19", HL7::optional, HL7::repetition_on);
    addObject<CE_0339>(ORC_20, "ORC.20", HL7::optional, HL7::repetition_off);
    addObject<XON>(ORC_21, "ORC.21", HL7::optional, HL7::repetition_on);
    addObject<XAD>(ORC_22, "ORC.22", HL7::optional, HL7::repetition_on);
    addObject<XTN>(ORC_23, "ORC.23", HL7::optional, HL7::repetition_on);
    addObject<XAD>(ORC_24, "ORC.24", HL7::optional, HL7::repetition_on);
    addObject<CWE>(ORC_25, "ORC.25", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Order Control
   */

  ID* getORC_1(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ORC_1);
  }

  ID* getOrderControl(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ORC_1);
  }

  bool isORC_1(size_t index = 0) {
    try {
      return this->getObject(index, ORC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderControl(size_t index = 0) {
    try {
      return this->getObject(index, ORC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Placer Order Number
   */

  EI* getORC_2(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ORC_2);
  }

  EI* getPlacerOrderNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ORC_2);
  }

  bool isORC_2(size_t index = 0) {
    try {
      return this->getObject(index, ORC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerOrderNumber(size_t index = 0) {
    try {
      return this->getObject(index, ORC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Order Number
   */

  EI* getORC_3(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ORC_3);
  }

  EI* getFillerOrderNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ORC_3);
  }

  bool isORC_3(size_t index = 0) {
    try {
      return this->getObject(index, ORC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerOrderNumber(size_t index = 0) {
    try {
      return this->getObject(index, ORC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Placer Group Number
   */

  EI* getORC_4(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ORC_4);
  }

  EI* getPlacerGroupNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ORC_4);
  }

  bool isORC_4(size_t index = 0) {
    try {
      return this->getObject(index, ORC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerGroupNumber(size_t index = 0) {
    try {
      return this->getObject(index, ORC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Order Status
   */

  ID* getORC_5(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ORC_5);
  }

  ID* getOrderStatus(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ORC_5);
  }

  bool isORC_5(size_t index = 0) {
    try {
      return this->getObject(index, ORC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderStatus(size_t index = 0) {
    try {
      return this->getObject(index, ORC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Response Flag
   */

  ID* getORC_6(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ORC_6);
  }

  ID* getResponseFlag(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ORC_6);
  }

  bool isORC_6(size_t index = 0) {
    try {
      return this->getObject(index, ORC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResponseFlag(size_t index = 0) {
    try {
      return this->getObject(index, ORC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Quantity/Timing
   */

  TQ* getORC_7(size_t index = 0) {
    return (TQ*)this->getObjectSafe(index, ORC_7);
  }

  TQ* getQuantityTiming(size_t index = 0) {
    return (TQ*)this->getObjectSafe(index, ORC_7);
  }

  bool isORC_7(size_t index = 0) {
    try {
      return this->getObject(index, ORC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQuantityTiming(size_t index = 0) {
    try {
      return this->getObject(index, ORC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Parent
   */

  EIP* getORC_8(size_t index = 0) {
    return (EIP*)this->getObjectSafe(index, ORC_8);
  }

  EIP* getParent(size_t index = 0) {
    return (EIP*)this->getObjectSafe(index, ORC_8);
  }

  bool isORC_8(size_t index = 0) {
    try {
      return this->getObject(index, ORC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParent(size_t index = 0) {
    try {
      return this->getObject(index, ORC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time of Transaction
   */

  TS* getORC_9(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, ORC_9);
  }

  TS* getDateTimeOfTransaction(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, ORC_9);
  }

  bool isORC_9(size_t index = 0) {
    try {
      return this->getObject(index, ORC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeOfTransaction(size_t index = 0) {
    try {
      return this->getObject(index, ORC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entered By
   */

  XCN* getORC_10(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ORC_10);
  }

  XCN* getEnteredBy(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ORC_10);
  }

  bool isORC_10(size_t index = 0) {
    try {
      return this->getObject(index, ORC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteredBy(size_t index = 0) {
    try {
      return this->getObject(index, ORC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Verified By
   */

  XCN* getORC_11(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ORC_11);
  }

  XCN* getVerifiedBy(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ORC_11);
  }

  bool isORC_11(size_t index = 0) {
    try {
      return this->getObject(index, ORC_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVerifiedBy(size_t index = 0) {
    try {
      return this->getObject(index, ORC_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ordering Provider
   */

  XCN* getORC_12(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ORC_12);
  }

  XCN* getOrderingProvider(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ORC_12);
  }

  bool isORC_12(size_t index = 0) {
    try {
      return this->getObject(index, ORC_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderingProvider(size_t index = 0) {
    try {
      return this->getObject(index, ORC_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Enterer's Location
   */

  PL* getORC_13(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, ORC_13);
  }

  PL* getEntererSLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, ORC_13);
  }

  bool isORC_13(size_t index = 0) {
    try {
      return this->getObject(index, ORC_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEntererSLocation(size_t index = 0) {
    try {
      return this->getObject(index, ORC_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Call Back Phone Number
   */

  XTN* getORC_14(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, ORC_14);
  }

  XTN* getCallBackPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, ORC_14);
  }

  bool isORC_14(size_t index = 0) {
    try {
      return this->getObject(index, ORC_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCallBackPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, ORC_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Order Effective Date/Time
   */

  TS* getORC_15(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, ORC_15);
  }

  TS* getOrderEffectiveDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, ORC_15);
  }

  bool isORC_15(size_t index = 0) {
    try {
      return this->getObject(index, ORC_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderEffectiveDateTime(size_t index = 0) {
    try {
      return this->getObject(index, ORC_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Order Control Code Reason
   */

  CE* getORC_16(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, ORC_16);
  }

  CE* getOrderControlCodeReason(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, ORC_16);
  }

  bool isORC_16(size_t index = 0) {
    try {
      return this->getObject(index, ORC_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderControlCodeReason(size_t index = 0) {
    try {
      return this->getObject(index, ORC_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entering Organization
   */

  CE* getORC_17(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, ORC_17);
  }

  CE* getEnteringOrganization(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, ORC_17);
  }

  bool isORC_17(size_t index = 0) {
    try {
      return this->getObject(index, ORC_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteringOrganization(size_t index = 0) {
    try {
      return this->getObject(index, ORC_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entering Device
   */

  CE* getORC_18(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, ORC_18);
  }

  CE* getEnteringDevice(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, ORC_18);
  }

  bool isORC_18(size_t index = 0) {
    try {
      return this->getObject(index, ORC_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteringDevice(size_t index = 0) {
    try {
      return this->getObject(index, ORC_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action By
   */

  XCN* getORC_19(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ORC_19);
  }

  XCN* getActionBy(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ORC_19);
  }

  bool isORC_19(size_t index = 0) {
    try {
      return this->getObject(index, ORC_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionBy(size_t index = 0) {
    try {
      return this->getObject(index, ORC_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Advanced Beneficiary Notice Code
   */

  CE_0339* getORC_20(size_t index = 0) {
    return (CE_0339*)this->getObjectSafe(index, ORC_20);
  }

  CE_0339* getAdvancedBeneficiaryNoticeCode(size_t index = 0) {
    return (CE_0339*)this->getObjectSafe(index, ORC_20);
  }

  bool isORC_20(size_t index = 0) {
    try {
      return this->getObject(index, ORC_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdvancedBeneficiaryNoticeCode(size_t index = 0) {
    try {
      return this->getObject(index, ORC_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ordering Facility Name
   */

  XON* getORC_21(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, ORC_21);
  }

  XON* getOrderingFacilityName(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, ORC_21);
  }

  bool isORC_21(size_t index = 0) {
    try {
      return this->getObject(index, ORC_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderingFacilityName(size_t index = 0) {
    try {
      return this->getObject(index, ORC_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ordering Facility Address
   */

  XAD* getORC_22(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, ORC_22);
  }

  XAD* getOrderingFacilityAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, ORC_22);
  }

  bool isORC_22(size_t index = 0) {
    try {
      return this->getObject(index, ORC_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderingFacilityAddress(size_t index = 0) {
    try {
      return this->getObject(index, ORC_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ordering Facility Phone Number
   */

  XTN* getORC_23(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, ORC_23);
  }

  XTN* getOrderingFacilityPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, ORC_23);
  }

  bool isORC_23(size_t index = 0) {
    try {
      return this->getObject(index, ORC_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderingFacilityPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, ORC_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ordering Provider Address
   */

  XAD* getORC_24(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, ORC_24);
  }

  XAD* getOrderingProviderAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, ORC_24);
  }

  bool isORC_24(size_t index = 0) {
    try {
      return this->getObject(index, ORC_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderingProviderAddress(size_t index = 0) {
    try {
      return this->getObject(index, ORC_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Order Status Modifier
   */

  CWE* getORC_25(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORC_25);
  }

  CWE* getOrderStatusModifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ORC_25);
  }

  bool isORC_25(size_t index = 0) {
    try {
      return this->getObject(index, ORC_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderStatusModifier(size_t index = 0) {
    try {
      return this->getObject(index, ORC_25) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ORC */

} /* End of namespace HL7_24 */
#endif /* __ORC_v24_H__ */
