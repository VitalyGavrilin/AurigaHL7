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


#ifndef __MFE_v24_H__
#define __MFE_v24_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"
#include "../datatype/varies.h"

namespace HL7_24 {

/* Master File Entry */
class MFE : public HL7Segment {
 public:
  MFE() { this->init(); }

 private:
  /* */
  enum FIELD_ID { MFE_1, MFE_2, MFE_3, MFE_4, MFE_5, FIELD_ID_MAX };

 public:
  const char* className() const { return "MFE"; }
  MFE* create() const { return new MFE(); }

 private:
  void init() {
    setName("MFE");
    /* Init members */
    addObject<ID>(MFE_1, "MFE.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(MFE_2, "MFE.2", HL7::conditional, HL7::repetition_off);
    addObject<TS>(MFE_3, "MFE.3", HL7::optional, HL7::repetition_off);
    addObject<varies>(MFE_4, "MFE.4", HL7::initialized, HL7::repetition_on);
    addObject<ID>(MFE_5, "MFE.5", HL7::initialized, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Record-Level Event Code
   */

  ID* getMFE_1(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MFE_1);
  }

  ID* getRecordLevelEventCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MFE_1);
  }

  bool isMFE_1(size_t index = 0) {
    try {
      return this->getObject(index, MFE_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRecordLevelEventCode(size_t index = 0) {
    try {
      return this->getObject(index, MFE_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * MFN Control ID
   */

  ST* getMFE_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MFE_2);
  }

  ST* getMFNControlID(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MFE_2);
  }

  bool isMFE_2(size_t index = 0) {
    try {
      return this->getObject(index, MFE_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMFNControlID(size_t index = 0) {
    try {
      return this->getObject(index, MFE_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Date/Time
   */

  TS* getMFE_3(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, MFE_3);
  }

  TS* getEffectiveDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, MFE_3);
  }

  bool isMFE_3(size_t index = 0) {
    try {
      return this->getObject(index, MFE_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveDateTime(size_t index = 0) {
    try {
      return this->getObject(index, MFE_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Key Value - MFE
   */

  HL7Object* getMFE_4(size_t index = 0) {
    return (this->getObjectSafe(index, MFE_4));
  }

  HL7Object* getPrimaryKeyValueMFE(size_t index = 0) {
    return (this->getObjectSafe(index, MFE_4));
  }

  bool isMFE_4(size_t index = 0) {
    try {
      return (this->getObject(index, MFE_4) != NULL);
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryKeyValueMFE(size_t index = 0) {
    try {
      return (this->getObject(index, MFE_4) != NULL);
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Key Value Type
   */

  ID* getMFE_5(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MFE_5);
  }

  ID* getPrimaryKeyValueType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MFE_5);
  }

  bool isMFE_5(size_t index = 0) {
    try {
      return this->getObject(index, MFE_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryKeyValueType(size_t index = 0) {
    try {
      return this->getObject(index, MFE_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of MFE */

} /* End of namespace HL7_24 */
#endif /* __MFE_v24_H__ */
