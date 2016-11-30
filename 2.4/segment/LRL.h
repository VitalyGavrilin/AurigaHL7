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


#ifndef __LRL_v24_H__
#define __LRL_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0325.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/PL.h"
#include "../datatype/XON.h"

namespace HL7_24 {

/* Location Relationship */
class LRL : public HL7Segment {
 public:
  LRL() { this->init(); }

 private:
  /* */
  enum FIELD_ID { LRL_1, LRL_2, LRL_3, LRL_4, LRL_5, LRL_6, FIELD_ID_MAX };

 public:
  const char* className() const { return "LRL"; }
  LRL* create() const { return new LRL(); }

 private:
  void init() {
    setName("LRL");
    /* Init members */
    addObject<PL>(LRL_1, "LRL.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(LRL_2, "LRL.2", HL7::optional, HL7::repetition_off);
    addObject<EI>(LRL_3, "LRL.3", HL7::optional, HL7::repetition_off);
    addObject<CE_0325>(LRL_4, "LRL.4", HL7::initialized, HL7::repetition_off);
    addObject<XON>(LRL_5, "LRL.5", HL7::conditional, HL7::repetition_on);
    addObject<PL>(LRL_6, "LRL.6", HL7::conditional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Primary Key Value - LRL
   */

  PL* getLRL_1(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, LRL_1);
  }

  PL* getPrimaryKeyValueLRL(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, LRL_1);
  }

  bool isLRL_1(size_t index = 0) {
    try {
      return this->getObject(index, LRL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryKeyValueLRL(size_t index = 0) {
    try {
      return this->getObject(index, LRL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Segment Action Code
   */

  ID* getLRL_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, LRL_2);
  }

  ID* getSegmentActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, LRL_2);
  }

  bool isLRL_2(size_t index = 0) {
    try {
      return this->getObject(index, LRL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentActionCode(size_t index = 0) {
    try {
      return this->getObject(index, LRL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Segment Unique Key
   */

  EI* getLRL_3(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, LRL_3);
  }

  EI* getSegmentUniqueKey(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, LRL_3);
  }

  bool isLRL_3(size_t index = 0) {
    try {
      return this->getObject(index, LRL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentUniqueKey(size_t index = 0) {
    try {
      return this->getObject(index, LRL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Relationship ID
   */

  CE_0325* getLRL_4(size_t index = 0) {
    return (CE_0325*)this->getObjectSafe(index, LRL_4);
  }

  CE_0325* getLocationRelationshipID(size_t index = 0) {
    return (CE_0325*)this->getObjectSafe(index, LRL_4);
  }

  bool isLRL_4(size_t index = 0) {
    try {
      return this->getObject(index, LRL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationRelationshipID(size_t index = 0) {
    try {
      return this->getObject(index, LRL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Organizational Location Relationship Value
   */

  XON* getLRL_5(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, LRL_5);
  }

  XON* getOrganizationalLocationRelationshipValue(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, LRL_5);
  }

  bool isLRL_5(size_t index = 0) {
    try {
      return this->getObject(index, LRL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrganizationalLocationRelationshipValue(size_t index = 0) {
    try {
      return this->getObject(index, LRL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Location Relationship Value
   */

  PL* getLRL_6(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, LRL_6);
  }

  PL* getPatientLocationRelationshipValue(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, LRL_6);
  }

  bool isLRL_6(size_t index = 0) {
    try {
      return this->getObject(index, LRL_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientLocationRelationshipValue(size_t index = 0) {
    try {
      return this->getObject(index, LRL_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of LRL */

} /* End of namespace HL7_24 */
#endif /* __LRL_v24_H__ */
