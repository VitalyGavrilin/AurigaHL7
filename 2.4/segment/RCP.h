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


#ifndef __RCP_v24_H__
#define __RCP_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0394.h"
#include "../datatype/CQ.h"
#include "../datatype/ID.h"
#include "../datatype/SRT.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Response Control Parameter */
class RCP : public HL7Segment {
 public:
  RCP() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    RCP_1,
    RCP_2,
    RCP_3,
    RCP_4,
    RCP_5,
    RCP_6,
    RCP_7,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "RCP"; }
  RCP* create() const { return new RCP(); }

 private:
  void init() {
    setName("RCP");
    /* Init members */
    addObject<ID>(RCP_1, "RCP.1", HL7::optional, HL7::repetition_off);
    addObject<CQ>(RCP_2, "RCP.2", HL7::optional, HL7::repetition_off);
    addObject<CE_0394>(RCP_3, "RCP.3", HL7::optional, HL7::repetition_off);
    addObject<TS>(RCP_4, "RCP.4", HL7::conditional, HL7::repetition_off);
    addObject<ID>(RCP_5, "RCP.5", HL7::optional, HL7::repetition_off);
    addObject<SRT>(RCP_6, "RCP.6", HL7::optional, HL7::repetition_on);
    addObject<ID>(RCP_7, "RCP.7", HL7::initialized, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Query Priority
   */

  ID* getRCP_1(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RCP_1);
  }

  ID* getQueryPriority(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RCP_1);
  }

  bool isRCP_1(size_t index = 0) {
    try {
      return this->getObject(index, RCP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQueryPriority(size_t index = 0) {
    try {
      return this->getObject(index, RCP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Quantity Limited Request
   */

  CQ* getRCP_2(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, RCP_2);
  }

  CQ* getQuantityLimitedRequest(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, RCP_2);
  }

  bool isRCP_2(size_t index = 0) {
    try {
      return this->getObject(index, RCP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQuantityLimitedRequest(size_t index = 0) {
    try {
      return this->getObject(index, RCP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Response Modality
   */

  CE_0394* getRCP_3(size_t index = 0) {
    return (CE_0394*)this->getObjectSafe(index, RCP_3);
  }

  CE_0394* getResponseModality(size_t index = 0) {
    return (CE_0394*)this->getObjectSafe(index, RCP_3);
  }

  bool isRCP_3(size_t index = 0) {
    try {
      return this->getObject(index, RCP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResponseModality(size_t index = 0) {
    try {
      return this->getObject(index, RCP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Execution and Delivery Time
   */

  TS* getRCP_4(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, RCP_4);
  }

  TS* getExecutionAndDeliveryTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, RCP_4);
  }

  bool isRCP_4(size_t index = 0) {
    try {
      return this->getObject(index, RCP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExecutionAndDeliveryTime(size_t index = 0) {
    try {
      return this->getObject(index, RCP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Modify Indicator
   */

  ID* getRCP_5(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RCP_5);
  }

  ID* getModifyIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RCP_5);
  }

  bool isRCP_5(size_t index = 0) {
    try {
      return this->getObject(index, RCP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isModifyIndicator(size_t index = 0) {
    try {
      return this->getObject(index, RCP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sort-by Field
   */

  SRT* getRCP_6(size_t index = 0) {
    return (SRT*)this->getObjectSafe(index, RCP_6);
  }

  SRT* getSortByField(size_t index = 0) {
    return (SRT*)this->getObjectSafe(index, RCP_6);
  }

  bool isRCP_6(size_t index = 0) {
    try {
      return this->getObject(index, RCP_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSortByField(size_t index = 0) {
    try {
      return this->getObject(index, RCP_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Segment group inclusion
   */

  ID* getRCP_7(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RCP_7);
  }

  ID* getSegmentGroupInclusion(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RCP_7);
  }

  bool isRCP_7(size_t index = 0) {
    try {
      return this->getObject(index, RCP_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentGroupInclusion(size_t index = 0) {
    try {
      return this->getObject(index, RCP_7) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RCP */

} /* End of namespace HL7_24 */
#endif /* __RCP_v24_H__ */
