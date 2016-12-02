/*
 * This file is part of AurigaHL7.
 *
 * AurigaHL7 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * AurigaHL7 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with AurigaHL7.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __RQD_v24_H__
#define __RQD_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/DT.h"
#include "../datatype/IS.h"
#include "../datatype/NM.h"
#include "../datatype/SI.h"

namespace HL7_24 {

/* Requisition Detail */
class RQD : public HL7Segment {
 public:
  RQD() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    RQD_1,
    RQD_2,
    RQD_3,
    RQD_4,
    RQD_5,
    RQD_6,
    RQD_7,
    RQD_8,
    RQD_9,
    RQD_10,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "RQD"; }
  RQD* create() const { return new RQD(); }

 private:
  void init() {
    setName("RQD");
    /* Init members */
    addObject<SI>(RQD_1, "RQD.1", HL7::optional, HL7::repetition_off);
    addObject<CE>(RQD_2, "RQD.2", HL7::conditional, HL7::repetition_off);
    addObject<CE>(RQD_3, "RQD.3", HL7::conditional, HL7::repetition_off);
    addObject<CE>(RQD_4, "RQD.4", HL7::conditional, HL7::repetition_off);
    addObject<NM>(RQD_5, "RQD.5", HL7::optional, HL7::repetition_off);
    addObject<CE>(RQD_6, "RQD.6", HL7::optional, HL7::repetition_off);
    addObject<IS>(RQD_7, "RQD.7", HL7::optional, HL7::repetition_off);
    addObject<IS>(RQD_8, "RQD.8", HL7::optional, HL7::repetition_off);
    addObject<CE>(RQD_9, "RQD.9", HL7::optional, HL7::repetition_off);
    addObject<DT>(RQD_10, "RQD.10", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Requisition Line Number
   */

  SI* getRQD_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, RQD_1);
  }

  SI* getRequisitionLineNumber(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, RQD_1);
  }

  bool isRQD_1(size_t index = 0) {
    try {
      return this->getObject(index, RQD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequisitionLineNumber(size_t index = 0) {
    try {
      return this->getObject(index, RQD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Item Code - Internal
   */

  CE* getRQD_2(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RQD_2);
  }

  CE* getItemCodeInternal(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RQD_2);
  }

  bool isRQD_2(size_t index = 0) {
    try {
      return this->getObject(index, RQD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isItemCodeInternal(size_t index = 0) {
    try {
      return this->getObject(index, RQD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Item Code - External
   */

  CE* getRQD_3(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RQD_3);
  }

  CE* getItemCodeExternal(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RQD_3);
  }

  bool isRQD_3(size_t index = 0) {
    try {
      return this->getObject(index, RQD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isItemCodeExternal(size_t index = 0) {
    try {
      return this->getObject(index, RQD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Hospital Item Code
   */

  CE* getRQD_4(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RQD_4);
  }

  CE* getHospitalItemCode(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RQD_4);
  }

  bool isRQD_4(size_t index = 0) {
    try {
      return this->getObject(index, RQD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHospitalItemCode(size_t index = 0) {
    try {
      return this->getObject(index, RQD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requisition Quantity
   */

  NM* getRQD_5(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RQD_5);
  }

  NM* getRequisitionQuantity(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RQD_5);
  }

  bool isRQD_5(size_t index = 0) {
    try {
      return this->getObject(index, RQD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequisitionQuantity(size_t index = 0) {
    try {
      return this->getObject(index, RQD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requisition Unit of Measure
   */

  CE* getRQD_6(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RQD_6);
  }

  CE* getRequisitionUnitOfMeasure(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RQD_6);
  }

  bool isRQD_6(size_t index = 0) {
    try {
      return this->getObject(index, RQD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequisitionUnitOfMeasure(size_t index = 0) {
    try {
      return this->getObject(index, RQD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dept. Cost Center
   */

  IS* getRQD_7(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, RQD_7);
  }

  IS* getDeptCostCenter(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, RQD_7);
  }

  bool isRQD_7(size_t index = 0) {
    try {
      return this->getObject(index, RQD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeptCostCenter(size_t index = 0) {
    try {
      return this->getObject(index, RQD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Item Natural Account Code
   */

  IS* getRQD_8(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, RQD_8);
  }

  IS* getItemNaturalAccountCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, RQD_8);
  }

  bool isRQD_8(size_t index = 0) {
    try {
      return this->getObject(index, RQD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isItemNaturalAccountCode(size_t index = 0) {
    try {
      return this->getObject(index, RQD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Deliver To ID
   */

  CE* getRQD_9(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RQD_9);
  }

  CE* getDeliverToID(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RQD_9);
  }

  bool isRQD_9(size_t index = 0) {
    try {
      return this->getObject(index, RQD_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeliverToID(size_t index = 0) {
    try {
      return this->getObject(index, RQD_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date Needed
   */

  DT* getRQD_10(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, RQD_10);
  }

  DT* getDateNeeded(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, RQD_10);
  }

  bool isRQD_10(size_t index = 0) {
    try {
      return this->getObject(index, RQD_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateNeeded(size_t index = 0) {
    try {
      return this->getObject(index, RQD_10) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RQD */

} /* End of namespace HL7_24 */
#endif /* __RQD_v24_H__ */
