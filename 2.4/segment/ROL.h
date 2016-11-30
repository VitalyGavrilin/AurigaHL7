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


#ifndef __ROL_v24_H__
#define __ROL_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0406.h"
#include "../datatype/CE_0443.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/TS.h"
#include "../datatype/XAD.h"
#include "../datatype/XCN.h"
#include "../datatype/XTN.h"

namespace HL7_24 {

/* Role */
class ROL : public HL7Segment {
 public:
  ROL() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    ROL_1,
    ROL_2,
    ROL_3,
    ROL_4,
    ROL_5,
    ROL_6,
    ROL_7,
    ROL_8,
    ROL_9,
    ROL_10,
    ROL_11,
    ROL_12,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "ROL"; }
  ROL* create() const { return new ROL(); }

 private:
  void init() {
    setName("ROL");
    /* Init members */
    addObject<EI>(ROL_1, "ROL.1", HL7::conditional, HL7::repetition_off);
    addObject<ID>(ROL_2, "ROL.2", HL7::initialized, HL7::repetition_off);
    addObject<CE_0443>(ROL_3, "ROL.3", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(ROL_4, "ROL.4", HL7::initialized, HL7::repetition_on);
    addObject<TS>(ROL_5, "ROL.5", HL7::optional, HL7::repetition_off);
    addObject<TS>(ROL_6, "ROL.6", HL7::optional, HL7::repetition_off);
    addObject<CE>(ROL_7, "ROL.7", HL7::optional, HL7::repetition_off);
    addObject<CE>(ROL_8, "ROL.8", HL7::optional, HL7::repetition_off);
    addObject<CE>(ROL_9, "ROL.9", HL7::optional, HL7::repetition_on);
    addObject<CE_0406>(ROL_10, "ROL.10", HL7::optional, HL7::repetition_off);
    addObject<XAD>(ROL_11, "ROL.11", HL7::optional, HL7::repetition_on);
    addObject<XTN>(ROL_12, "ROL.12", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Role Instance ID
   */

  EI* getROL_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ROL_1);
  }

  EI* getRoleInstanceID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ROL_1);
  }

  bool isROL_1(size_t index = 0) {
    try {
      return this->getObject(index, ROL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoleInstanceID(size_t index = 0) {
    try {
      return this->getObject(index, ROL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code
   */

  ID* getROL_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ROL_2);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ROL_2);
  }

  bool isROL_2(size_t index = 0) {
    try {
      return this->getObject(index, ROL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, ROL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Role-ROL
   */

  CE_0443* getROL_3(size_t index = 0) {
    return (CE_0443*)this->getObjectSafe(index, ROL_3);
  }

  CE_0443* getRoleROL(size_t index = 0) {
    return (CE_0443*)this->getObjectSafe(index, ROL_3);
  }

  bool isROL_3(size_t index = 0) {
    try {
      return this->getObject(index, ROL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoleROL(size_t index = 0) {
    try {
      return this->getObject(index, ROL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Role Person
   */

  XCN* getROL_4(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ROL_4);
  }

  XCN* getRolePerson(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ROL_4);
  }

  bool isROL_4(size_t index = 0) {
    try {
      return this->getObject(index, ROL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRolePerson(size_t index = 0) {
    try {
      return this->getObject(index, ROL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Role Begin Date/Time
   */

  TS* getROL_5(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, ROL_5);
  }

  TS* getRoleBeginDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, ROL_5);
  }

  bool isROL_5(size_t index = 0) {
    try {
      return this->getObject(index, ROL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoleBeginDateTime(size_t index = 0) {
    try {
      return this->getObject(index, ROL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Role End Date/Time
   */

  TS* getROL_6(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, ROL_6);
  }

  TS* getRoleEndDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, ROL_6);
  }

  bool isROL_6(size_t index = 0) {
    try {
      return this->getObject(index, ROL_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoleEndDateTime(size_t index = 0) {
    try {
      return this->getObject(index, ROL_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Role Duration
   */

  CE* getROL_7(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, ROL_7);
  }

  CE* getRoleDuration(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, ROL_7);
  }

  bool isROL_7(size_t index = 0) {
    try {
      return this->getObject(index, ROL_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoleDuration(size_t index = 0) {
    try {
      return this->getObject(index, ROL_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Role Action Reason
   */

  CE* getROL_8(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, ROL_8);
  }

  CE* getRoleActionReason(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, ROL_8);
  }

  bool isROL_8(size_t index = 0) {
    try {
      return this->getObject(index, ROL_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoleActionReason(size_t index = 0) {
    try {
      return this->getObject(index, ROL_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider Type
   */

  CE* getROL_9(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, ROL_9);
  }

  CE* getProviderType(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, ROL_9);
  }

  bool isROL_9(size_t index = 0) {
    try {
      return this->getObject(index, ROL_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderType(size_t index = 0) {
    try {
      return this->getObject(index, ROL_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Organization Unit Type - ROL
   */

  CE_0406* getROL_10(size_t index = 0) {
    return (CE_0406*)this->getObjectSafe(index, ROL_10);
  }

  CE_0406* getOrganizationUnitTypeROL(size_t index = 0) {
    return (CE_0406*)this->getObjectSafe(index, ROL_10);
  }

  bool isROL_10(size_t index = 0) {
    try {
      return this->getObject(index, ROL_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrganizationUnitTypeROL(size_t index = 0) {
    try {
      return this->getObject(index, ROL_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Office/Home Address
   */

  XAD* getROL_11(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, ROL_11);
  }

  XAD* getOfficeHomeAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, ROL_11);
  }

  bool isROL_11(size_t index = 0) {
    try {
      return this->getObject(index, ROL_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOfficeHomeAddress(size_t index = 0) {
    try {
      return this->getObject(index, ROL_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Phone
   */

  XTN* getROL_12(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, ROL_12);
  }

  XTN* getPhone(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, ROL_12);
  }

  bool isROL_12(size_t index = 0) {
    try {
      return this->getObject(index, ROL_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPhone(size_t index = 0) {
    try {
      return this->getObject(index, ROL_12) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ROL */

} /* End of namespace HL7_24 */
#endif /* __ROL_v24_H__ */
