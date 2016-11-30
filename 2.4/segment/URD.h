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


#ifndef __URD_v24_H__
#define __URD_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0048.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"
#include "../datatype/XCN.h"

namespace HL7_24 {

/* Results/update Definition */
class URD : public HL7Segment {
 public:
  URD() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    URD_1,
    URD_2,
    URD_3,
    URD_4,
    URD_5,
    URD_6,
    URD_7,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "URD"; }
  URD* create() const { return new URD(); }

 private:
  void init() {
    setName("URD");
    /* Init members */
    addObject<TS>(URD_1, "URD.1", HL7::optional, HL7::repetition_off);
    addObject<ID>(URD_2, "URD.2", HL7::optional, HL7::repetition_off);
    addObject<XCN>(URD_3, "URD.3", HL7::initialized, HL7::repetition_on);
    addObject<CE_0048>(URD_4, "URD.4", HL7::optional, HL7::repetition_on);
    addObject<CE>(URD_5, "URD.5", HL7::optional, HL7::repetition_on);
    addObject<ST>(URD_6, "URD.6", HL7::optional, HL7::repetition_on);
    addObject<ID>(URD_7, "URD.7", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * R/U Date/Time
   */

  TS* getURD_1(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, URD_1);
  }

  TS* getRUDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, URD_1);
  }

  bool isURD_1(size_t index = 0) {
    try {
      return this->getObject(index, URD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRUDateTime(size_t index = 0) {
    try {
      return this->getObject(index, URD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Report Priority
   */

  ID* getURD_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, URD_2);
  }

  ID* getReportPriority(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, URD_2);
  }

  bool isURD_2(size_t index = 0) {
    try {
      return this->getObject(index, URD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReportPriority(size_t index = 0) {
    try {
      return this->getObject(index, URD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * R/U Who Subject Definition
   */

  XCN* getURD_3(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, URD_3);
  }

  XCN* getRUWhoSubjectDefinition(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, URD_3);
  }

  bool isURD_3(size_t index = 0) {
    try {
      return this->getObject(index, URD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRUWhoSubjectDefinition(size_t index = 0) {
    try {
      return this->getObject(index, URD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * R/U What Subject Definition
   */

  CE_0048* getURD_4(size_t index = 0) {
    return (CE_0048*)this->getObjectSafe(index, URD_4);
  }

  CE_0048* getRUWhatSubjectDefinition(size_t index = 0) {
    return (CE_0048*)this->getObjectSafe(index, URD_4);
  }

  bool isURD_4(size_t index = 0) {
    try {
      return this->getObject(index, URD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRUWhatSubjectDefinition(size_t index = 0) {
    try {
      return this->getObject(index, URD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * R/U What Department Code
   */

  CE* getURD_5(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, URD_5);
  }

  CE* getRUWhatDepartmentCode(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, URD_5);
  }

  bool isURD_5(size_t index = 0) {
    try {
      return this->getObject(index, URD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRUWhatDepartmentCode(size_t index = 0) {
    try {
      return this->getObject(index, URD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * R/U Display/Print Locations
   */

  ST* getURD_6(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, URD_6);
  }

  ST* getRUDisplayPrintLocations(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, URD_6);
  }

  bool isURD_6(size_t index = 0) {
    try {
      return this->getObject(index, URD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRUDisplayPrintLocations(size_t index = 0) {
    try {
      return this->getObject(index, URD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * R/U Results Level
   */

  ID* getURD_7(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, URD_7);
  }

  ID* getRUResultsLevel(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, URD_7);
  }

  bool isURD_7(size_t index = 0) {
    try {
      return this->getObject(index, URD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRUResultsLevel(size_t index = 0) {
    try {
      return this->getObject(index, URD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of URD */

} /* End of namespace HL7_24 */
#endif /* __URD_v24_H__ */
