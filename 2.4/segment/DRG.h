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


#ifndef __DRG_v24_H__
#define __DRG_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0055.h"
#include "../datatype/CE_0083.h"
#include "../datatype/CP.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/NM.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Diagnosis Related Group */
class DRG : public HL7Segment {
 public:
  DRG() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    DRG_1,
    DRG_2,
    DRG_3,
    DRG_4,
    DRG_5,
    DRG_6,
    DRG_7,
    DRG_8,
    DRG_9,
    DRG_10,
    DRG_11,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "DRG"; }
  DRG* create() const { return new DRG(); }

 private:
  void init() {
    setName("DRG");
    /* Init members */
    addObject<CE_0055>(DRG_1, "DRG.1", HL7::optional, HL7::repetition_off);
    addObject<TS>(DRG_2, "DRG.2", HL7::optional, HL7::repetition_off);
    addObject<ID>(DRG_3, "DRG.3", HL7::optional, HL7::repetition_off);
    addObject<IS>(DRG_4, "DRG.4", HL7::optional, HL7::repetition_off);
    addObject<CE_0083>(DRG_5, "DRG.5", HL7::optional, HL7::repetition_off);
    addObject<NM>(DRG_6, "DRG.6", HL7::optional, HL7::repetition_off);
    addObject<CP>(DRG_7, "DRG.7", HL7::optional, HL7::repetition_off);
    addObject<IS>(DRG_8, "DRG.8", HL7::optional, HL7::repetition_off);
    addObject<CP>(DRG_9, "DRG.9", HL7::optional, HL7::repetition_off);
    addObject<ID>(DRG_10, "DRG.10", HL7::optional, HL7::repetition_off);
    addObject<IS>(DRG_11, "DRG.11", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Diagnostic Related Group
   */

  CE_0055* getDRG_1(size_t index = 0) {
    return (CE_0055*)this->getObjectSafe(index, DRG_1);
  }

  CE_0055* getDiagnosticRelatedGroup(size_t index = 0) {
    return (CE_0055*)this->getObjectSafe(index, DRG_1);
  }

  bool isDRG_1(size_t index = 0) {
    try {
      return this->getObject(index, DRG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosticRelatedGroup(size_t index = 0) {
    try {
      return this->getObject(index, DRG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DRG Assigned Date/Time
   */

  TS* getDRG_2(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, DRG_2);
  }

  TS* getDRGAssignedDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, DRG_2);
  }

  bool isDRG_2(size_t index = 0) {
    try {
      return this->getObject(index, DRG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDRGAssignedDateTime(size_t index = 0) {
    try {
      return this->getObject(index, DRG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DRG Approval Indicator
   */

  ID* getDRG_3(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DRG_3);
  }

  ID* getDRGApprovalIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DRG_3);
  }

  bool isDRG_3(size_t index = 0) {
    try {
      return this->getObject(index, DRG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDRGApprovalIndicator(size_t index = 0) {
    try {
      return this->getObject(index, DRG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DRG Grouper Review Code
   */

  IS* getDRG_4(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, DRG_4);
  }

  IS* getDRGGrouperReviewCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, DRG_4);
  }

  bool isDRG_4(size_t index = 0) {
    try {
      return this->getObject(index, DRG_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDRGGrouperReviewCode(size_t index = 0) {
    try {
      return this->getObject(index, DRG_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Outlier Type
   */

  CE_0083* getDRG_5(size_t index = 0) {
    return (CE_0083*)this->getObjectSafe(index, DRG_5);
  }

  CE_0083* getOutlierType(size_t index = 0) {
    return (CE_0083*)this->getObjectSafe(index, DRG_5);
  }

  bool isDRG_5(size_t index = 0) {
    try {
      return this->getObject(index, DRG_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOutlierType(size_t index = 0) {
    try {
      return this->getObject(index, DRG_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Outlier Days
   */

  NM* getDRG_6(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, DRG_6);
  }

  NM* getOutlierDays(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, DRG_6);
  }

  bool isDRG_6(size_t index = 0) {
    try {
      return this->getObject(index, DRG_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOutlierDays(size_t index = 0) {
    try {
      return this->getObject(index, DRG_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Outlier Cost
   */

  CP* getDRG_7(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, DRG_7);
  }

  CP* getOutlierCost(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, DRG_7);
  }

  bool isDRG_7(size_t index = 0) {
    try {
      return this->getObject(index, DRG_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOutlierCost(size_t index = 0) {
    try {
      return this->getObject(index, DRG_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DRG Payor
   */

  IS* getDRG_8(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, DRG_8);
  }

  IS* getDRGPayor(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, DRG_8);
  }

  bool isDRG_8(size_t index = 0) {
    try {
      return this->getObject(index, DRG_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDRGPayor(size_t index = 0) {
    try {
      return this->getObject(index, DRG_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Outlier Reimbursement
   */

  CP* getDRG_9(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, DRG_9);
  }

  CP* getOutlierReimbursement(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, DRG_9);
  }

  bool isDRG_9(size_t index = 0) {
    try {
      return this->getObject(index, DRG_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOutlierReimbursement(size_t index = 0) {
    try {
      return this->getObject(index, DRG_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Confidential Indicator
   */

  ID* getDRG_10(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DRG_10);
  }

  ID* getConfidentialIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DRG_10);
  }

  bool isDRG_10(size_t index = 0) {
    try {
      return this->getObject(index, DRG_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConfidentialIndicator(size_t index = 0) {
    try {
      return this->getObject(index, DRG_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DRG Transfer Type
   */

  IS* getDRG_11(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, DRG_11);
  }

  IS* getDRGTransferType(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, DRG_11);
  }

  bool isDRG_11(size_t index = 0) {
    try {
      return this->getObject(index, DRG_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDRGTransferType(size_t index = 0) {
    try {
      return this->getObject(index, DRG_11) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of DRG */

} /* End of namespace HL7_24 */
#endif /* __DRG_v24_H__ */
