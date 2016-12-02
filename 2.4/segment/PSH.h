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


#ifndef __PSH_v24_H__
#define __PSH_v24_H__

#include "../../common/Util.h"
#include "../datatype/CQ.h"
#include "../datatype/FT.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Product Summary Header */
class PSH : public HL7Segment {
 public:
  PSH() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PSH_1,
    PSH_2,
    PSH_3,
    PSH_4,
    PSH_5,
    PSH_6,
    PSH_7,
    PSH_8,
    PSH_9,
    PSH_10,
    PSH_11,
    PSH_12,
    PSH_13,
    PSH_14,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PSH"; }
  PSH* create() const { return new PSH(); }

 private:
  void init() {
    setName("PSH");
    /* Init members */
    addObject<ST>(PSH_1, "PSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PSH_2, "PSH.2", HL7::optional, HL7::repetition_off);
    addObject<TS>(PSH_3, "PSH.3", HL7::initialized, HL7::repetition_off);
    addObject<TS>(PSH_4, "PSH.4", HL7::optional, HL7::repetition_off);
    addObject<TS>(PSH_5, "PSH.5", HL7::optional, HL7::repetition_off);
    addObject<CQ>(PSH_6, "PSH.6", HL7::optional, HL7::repetition_off);
    addObject<CQ>(PSH_7, "PSH.7", HL7::optional, HL7::repetition_off);
    addObject<ID>(PSH_8, "PSH.8", HL7::optional, HL7::repetition_off);
    addObject<FT>(PSH_9, "PSH.9", HL7::optional, HL7::repetition_off);
    addObject<CQ>(PSH_10, "PSH.10", HL7::optional, HL7::repetition_off);
    addObject<ID>(PSH_11, "PSH.11", HL7::optional, HL7::repetition_off);
    addObject<FT>(PSH_12, "PSH.12", HL7::optional, HL7::repetition_off);
    addObject<NM>(PSH_13, "PSH.13", HL7::optional, HL7::repetition_on);
    addObject<NM>(PSH_14, "PSH.14", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Report Type
   */

  ST* getPSH_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PSH_1);
  }

  ST* getReportType(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PSH_1);
  }

  bool isPSH_1(size_t index = 0) {
    try {
      return this->getObject(index, PSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReportType(size_t index = 0) {
    try {
      return this->getObject(index, PSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Report Form Identifier
   */

  ST* getPSH_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PSH_2);
  }

  ST* getReportFormIdentifier(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PSH_2);
  }

  bool isPSH_2(size_t index = 0) {
    try {
      return this->getObject(index, PSH_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReportFormIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, PSH_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Report Date
   */

  TS* getPSH_3(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PSH_3);
  }

  TS* getReportDate(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PSH_3);
  }

  bool isPSH_3(size_t index = 0) {
    try {
      return this->getObject(index, PSH_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReportDate(size_t index = 0) {
    try {
      return this->getObject(index, PSH_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Report Interval Start Date
   */

  TS* getPSH_4(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PSH_4);
  }

  TS* getReportIntervalStartDate(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PSH_4);
  }

  bool isPSH_4(size_t index = 0) {
    try {
      return this->getObject(index, PSH_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReportIntervalStartDate(size_t index = 0) {
    try {
      return this->getObject(index, PSH_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Report Interval End Date
   */

  TS* getPSH_5(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PSH_5);
  }

  TS* getReportIntervalEndDate(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PSH_5);
  }

  bool isPSH_5(size_t index = 0) {
    try {
      return this->getObject(index, PSH_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReportIntervalEndDate(size_t index = 0) {
    try {
      return this->getObject(index, PSH_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Quantity Manufactured
   */

  CQ* getPSH_6(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, PSH_6);
  }

  CQ* getQuantityManufactured(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, PSH_6);
  }

  bool isPSH_6(size_t index = 0) {
    try {
      return this->getObject(index, PSH_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQuantityManufactured(size_t index = 0) {
    try {
      return this->getObject(index, PSH_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Quantity Distributed
   */

  CQ* getPSH_7(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, PSH_7);
  }

  CQ* getQuantityDistributed(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, PSH_7);
  }

  bool isPSH_7(size_t index = 0) {
    try {
      return this->getObject(index, PSH_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQuantityDistributed(size_t index = 0) {
    try {
      return this->getObject(index, PSH_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Quantity Distributed Method
   */

  ID* getPSH_8(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PSH_8);
  }

  ID* getQuantityDistributedMethod(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PSH_8);
  }

  bool isPSH_8(size_t index = 0) {
    try {
      return this->getObject(index, PSH_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQuantityDistributedMethod(size_t index = 0) {
    try {
      return this->getObject(index, PSH_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Quantity Distributed Comment
   */

  FT* getPSH_9(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, PSH_9);
  }

  FT* getQuantityDistributedComment(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, PSH_9);
  }

  bool isPSH_9(size_t index = 0) {
    try {
      return this->getObject(index, PSH_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQuantityDistributedComment(size_t index = 0) {
    try {
      return this->getObject(index, PSH_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Quantity in Use
   */

  CQ* getPSH_10(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, PSH_10);
  }

  CQ* getQuantityInUse(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, PSH_10);
  }

  bool isPSH_10(size_t index = 0) {
    try {
      return this->getObject(index, PSH_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQuantityInUse(size_t index = 0) {
    try {
      return this->getObject(index, PSH_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Quantity in Use Method
   */

  ID* getPSH_11(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PSH_11);
  }

  ID* getQuantityInUseMethod(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PSH_11);
  }

  bool isPSH_11(size_t index = 0) {
    try {
      return this->getObject(index, PSH_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQuantityInUseMethod(size_t index = 0) {
    try {
      return this->getObject(index, PSH_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Quantity in Use Comment
   */

  FT* getPSH_12(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, PSH_12);
  }

  FT* getQuantityInUseComment(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, PSH_12);
  }

  bool isPSH_12(size_t index = 0) {
    try {
      return this->getObject(index, PSH_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQuantityInUseComment(size_t index = 0) {
    try {
      return this->getObject(index, PSH_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of Product Experience Reports Filed by Facility
   */

  NM* getPSH_13(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PSH_13);
  }

  NM* getNumberOfProductExperienceReportsFiledByFacility(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PSH_13);
  }

  bool isPSH_13(size_t index = 0) {
    try {
      return this->getObject(index, PSH_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberOfProductExperienceReportsFiledByFacility(size_t index = 0) {
    try {
      return this->getObject(index, PSH_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of Product Experience Reports Filed by Distributor
   */

  NM* getPSH_14(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PSH_14);
  }

  NM* getNumberOfProductExperienceReportsFiledByDistributor(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PSH_14);
  }

  bool isPSH_14(size_t index = 0) {
    try {
      return this->getObject(index, PSH_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberOfProductExperienceReportsFiledByDistributor(size_t index = 0) {
    try {
      return this->getObject(index, PSH_14) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PSH */

} /* End of namespace HL7_24 */
#endif /* __PSH_v24_H__ */
