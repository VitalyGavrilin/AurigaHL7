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


#ifndef __GP2_v24_H__
#define __GP2_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0466.h"
#include "../datatype/CP.h"
#include "../datatype/IS.h"
#include "../datatype/NM.h"

namespace HL7_24 {

/* Grouping/Reimbursement - Procedure Line Item */
class GP2 : public HL7Segment {
 public:
  GP2() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    GP2_1,
    GP2_2,
    GP2_3,
    GP2_4,
    GP2_5,
    GP2_6,
    GP2_7,
    GP2_8,
    GP2_9,
    GP2_10,
    GP2_11,
    GP2_12,
    GP2_13,
    GP2_14,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "GP2"; }
  GP2* create() const { return new GP2(); }

 private:
  void init() {
    setName("GP2");
    /* Init members */
    addObject<IS>(GP2_1, "GP2.1", HL7::optional, HL7::repetition_off);
    addObject<NM>(GP2_2, "GP2.2", HL7::optional, HL7::repetition_off);
    addObject<CP>(GP2_3, "GP2.3", HL7::optional, HL7::repetition_off);
    addObject<IS>(GP2_4, "GP2.4", HL7::optional, HL7::repetition_off);
    addObject<IS>(GP2_5, "GP2.5", HL7::optional, HL7::repetition_off);
    addObject<IS>(GP2_6, "GP2.6", HL7::optional, HL7::repetition_on);
    addObject<CE_0466>(GP2_7, "GP2.7", HL7::optional, HL7::repetition_off);
    addObject<IS>(GP2_8, "GP2.8", HL7::optional, HL7::repetition_on);
    addObject<IS>(GP2_9, "GP2.9", HL7::optional, HL7::repetition_off);
    addObject<IS>(GP2_10, "GP2.10", HL7::optional, HL7::repetition_off);
    addObject<CP>(GP2_11, "GP2.11", HL7::optional, HL7::repetition_off);
    addObject<IS>(GP2_12, "GP2.12", HL7::optional, HL7::repetition_off);
    addObject<CP>(GP2_13, "GP2.13", HL7::optional, HL7::repetition_off);
    addObject<NM>(GP2_14, "GP2.14", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Revenue Code
   */

  IS* getGP2_1(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GP2_1);
  }

  IS* getRevenueCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GP2_1);
  }

  bool isGP2_1(size_t index = 0) {
    try {
      return this->getObject(index, GP2_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRevenueCode(size_t index = 0) {
    try {
      return this->getObject(index, GP2_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of Service Units
   */

  NM* getGP2_2(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, GP2_2);
  }

  NM* getNumberOfServiceUnits(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, GP2_2);
  }

  bool isGP2_2(size_t index = 0) {
    try {
      return this->getObject(index, GP2_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberOfServiceUnits(size_t index = 0) {
    try {
      return this->getObject(index, GP2_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Charge
   */

  CP* getGP2_3(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, GP2_3);
  }

  CP* getCharge(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, GP2_3);
  }

  bool isGP2_3(size_t index = 0) {
    try {
      return this->getObject(index, GP2_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCharge(size_t index = 0) {
    try {
      return this->getObject(index, GP2_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reimbursement Action Code
   */

  IS* getGP2_4(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GP2_4);
  }

  IS* getReimbursementActionCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GP2_4);
  }

  bool isGP2_4(size_t index = 0) {
    try {
      return this->getObject(index, GP2_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReimbursementActionCode(size_t index = 0) {
    try {
      return this->getObject(index, GP2_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Denial or Rejection Code
   */

  IS* getGP2_5(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GP2_5);
  }

  IS* getDenialOrRejectionCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GP2_5);
  }

  bool isGP2_5(size_t index = 0) {
    try {
      return this->getObject(index, GP2_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDenialOrRejectionCode(size_t index = 0) {
    try {
      return this->getObject(index, GP2_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * OCE Edit Code
   */

  IS* getGP2_6(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GP2_6);
  }

  IS* getOCEEditCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GP2_6);
  }

  bool isGP2_6(size_t index = 0) {
    try {
      return this->getObject(index, GP2_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOCEEditCode(size_t index = 0) {
    try {
      return this->getObject(index, GP2_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ambulatory Payment Classification Code
   */

  CE_0466* getGP2_7(size_t index = 0) {
    return (CE_0466*)this->getObjectSafe(index, GP2_7);
  }

  CE_0466* getAmbulatoryPaymentClassificationCode(size_t index = 0) {
    return (CE_0466*)this->getObjectSafe(index, GP2_7);
  }

  bool isGP2_7(size_t index = 0) {
    try {
      return this->getObject(index, GP2_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAmbulatoryPaymentClassificationCode(size_t index = 0) {
    try {
      return this->getObject(index, GP2_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Modifier Edit Code
   */

  IS* getGP2_8(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GP2_8);
  }

  IS* getModifierEditCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GP2_8);
  }

  bool isGP2_8(size_t index = 0) {
    try {
      return this->getObject(index, GP2_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isModifierEditCode(size_t index = 0) {
    try {
      return this->getObject(index, GP2_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payment Adjustment Code
   */

  IS* getGP2_9(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GP2_9);
  }

  IS* getPaymentAdjustmentCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GP2_9);
  }

  bool isGP2_9(size_t index = 0) {
    try {
      return this->getObject(index, GP2_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPaymentAdjustmentCode(size_t index = 0) {
    try {
      return this->getObject(index, GP2_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Packaging Status Code
   */

  IS* getGP2_10(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GP2_10);
  }

  IS* getPackagingStatusCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GP2_10);
  }

  bool isGP2_10(size_t index = 0) {
    try {
      return this->getObject(index, GP2_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPackagingStatusCode(size_t index = 0) {
    try {
      return this->getObject(index, GP2_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expected HCFA Payment Amount
   */

  CP* getGP2_11(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, GP2_11);
  }

  CP* getExpectedHCFAPaymentAmount(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, GP2_11);
  }

  bool isGP2_11(size_t index = 0) {
    try {
      return this->getObject(index, GP2_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpectedHCFAPaymentAmount(size_t index = 0) {
    try {
      return this->getObject(index, GP2_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reimbursement Type Code
   */

  IS* getGP2_12(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GP2_12);
  }

  IS* getReimbursementTypeCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GP2_12);
  }

  bool isGP2_12(size_t index = 0) {
    try {
      return this->getObject(index, GP2_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReimbursementTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, GP2_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Co-Pay Amount
   */

  CP* getGP2_13(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, GP2_13);
  }

  CP* getCoPayAmount(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, GP2_13);
  }

  bool isGP2_13(size_t index = 0) {
    try {
      return this->getObject(index, GP2_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCoPayAmount(size_t index = 0) {
    try {
      return this->getObject(index, GP2_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pay Rate per Unit
   */

  NM* getGP2_14(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, GP2_14);
  }

  NM* getPayRatePerUnit(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, GP2_14);
  }

  bool isGP2_14(size_t index = 0) {
    try {
      return this->getObject(index, GP2_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPayRatePerUnit(size_t index = 0) {
    try {
      return this->getObject(index, GP2_14) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of GP2 */

} /* End of namespace HL7_24 */
#endif /* __GP2_v24_H__ */
