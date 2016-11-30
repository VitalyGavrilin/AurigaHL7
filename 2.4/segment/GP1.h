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


#ifndef __GP1_v24_H__
#define __GP1_v24_H__

#include "../../common/Util.h"
#include "../datatype/CP.h"
#include "../datatype/IS.h"

namespace HL7_24 {

/* Grouping/Reimbursement - Visit */
class GP1 : public HL7Segment {
 public:
  GP1() { this->init(); }

 private:
  /* */
  enum FIELD_ID { GP1_1, GP1_2, GP1_3, GP1_4, GP1_5, FIELD_ID_MAX };

 public:
  const char* className() const { return "GP1"; }
  GP1* create() const { return new GP1(); }

 private:
  void init() {
    setName("GP1");
    /* Init members */
    addObject<IS>(GP1_1, "GP1.1", HL7::initialized, HL7::repetition_off);
    addObject<IS>(GP1_2, "GP1.2", HL7::optional, HL7::repetition_on);
    addObject<IS>(GP1_3, "GP1.3", HL7::optional, HL7::repetition_off);
    addObject<IS>(GP1_4, "GP1.4", HL7::optional, HL7::repetition_on);
    addObject<CP>(GP1_5, "GP1.5", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Type of Bill Code
   */

  IS* getGP1_1(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GP1_1);
  }

  IS* getTypeOfBillCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GP1_1);
  }

  bool isGP1_1(size_t index = 0) {
    try {
      return this->getObject(index, GP1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTypeOfBillCode(size_t index = 0) {
    try {
      return this->getObject(index, GP1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Revenue Code
   */

  IS* getGP1_2(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GP1_2);
  }

  IS* getRevenueCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GP1_2);
  }

  bool isGP1_2(size_t index = 0) {
    try {
      return this->getObject(index, GP1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRevenueCode(size_t index = 0) {
    try {
      return this->getObject(index, GP1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Overall Claim Disposition Code
   */

  IS* getGP1_3(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GP1_3);
  }

  IS* getOverallClaimDispositionCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GP1_3);
  }

  bool isGP1_3(size_t index = 0) {
    try {
      return this->getObject(index, GP1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOverallClaimDispositionCode(size_t index = 0) {
    try {
      return this->getObject(index, GP1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * OCE Edits per Visit Code
   */

  IS* getGP1_4(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GP1_4);
  }

  IS* getOCEEditsPerVisitCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, GP1_4);
  }

  bool isGP1_4(size_t index = 0) {
    try {
      return this->getObject(index, GP1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOCEEditsPerVisitCode(size_t index = 0) {
    try {
      return this->getObject(index, GP1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Outlier Cost
   */

  CP* getGP1_5(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, GP1_5);
  }

  CP* getOutlierCost(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, GP1_5);
  }

  bool isGP1_5(size_t index = 0) {
    try {
      return this->getObject(index, GP1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOutlierCost(size_t index = 0) {
    try {
      return this->getObject(index, GP1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of GP1 */

} /* End of namespace HL7_24 */
#endif /* __GP1_v24_H__ */
