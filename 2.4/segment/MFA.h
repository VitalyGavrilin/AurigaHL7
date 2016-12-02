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


#ifndef __MFA_v24_H__
#define __MFA_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0181.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Master File Acknowledgment */
class MFA : public HL7Segment {
 public:
  MFA() { this->init(); }

 private:
  /* */
  enum FIELD_ID { MFA_1, MFA_2, MFA_3, MFA_4, MFA_5, MFA_6, FIELD_ID_MAX };

 public:
  const char* className() const { return "MFA"; }
  MFA* create() const { return new MFA(); }

 private:
  void init() {
    setName("MFA");
    /* Init members */
    addObject<ID>(MFA_1, "MFA.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(MFA_2, "MFA.2", HL7::conditional, HL7::repetition_off);
    addObject<TS>(MFA_3, "MFA.3", HL7::optional, HL7::repetition_off);
    addObject<CE_0181>(MFA_4, "MFA.4", HL7::initialized, HL7::repetition_off);
    addObject<CE>(MFA_5, "MFA.5", HL7::initialized, HL7::repetition_on);
    addObject<ID>(MFA_6, "MFA.6", HL7::initialized, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Record-Level Event Code
   */

  ID* getMFA_1(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MFA_1);
  }

  ID* getRecordLevelEventCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MFA_1);
  }

  bool isMFA_1(size_t index = 0) {
    try {
      return this->getObject(index, MFA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRecordLevelEventCode(size_t index = 0) {
    try {
      return this->getObject(index, MFA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * MFN Control ID
   */

  ST* getMFA_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MFA_2);
  }

  ST* getMFNControlID(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MFA_2);
  }

  bool isMFA_2(size_t index = 0) {
    try {
      return this->getObject(index, MFA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMFNControlID(size_t index = 0) {
    try {
      return this->getObject(index, MFA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Completion Date/Time
   */

  TS* getMFA_3(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, MFA_3);
  }

  TS* getEventCompletionDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, MFA_3);
  }

  bool isMFA_3(size_t index = 0) {
    try {
      return this->getObject(index, MFA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventCompletionDateTime(size_t index = 0) {
    try {
      return this->getObject(index, MFA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * MFN Record Level Error Return
   */

  CE_0181* getMFA_4(size_t index = 0) {
    return (CE_0181*)this->getObjectSafe(index, MFA_4);
  }

  CE_0181* getMFNRecordLevelErrorReturn(size_t index = 0) {
    return (CE_0181*)this->getObjectSafe(index, MFA_4);
  }

  bool isMFA_4(size_t index = 0) {
    try {
      return this->getObject(index, MFA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMFNRecordLevelErrorReturn(size_t index = 0) {
    try {
      return this->getObject(index, MFA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Key Value - MFA
   */

  CE* getMFA_5(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, MFA_5);
  }

  CE* getPrimaryKeyValueMFA(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, MFA_5);
  }

  bool isMFA_5(size_t index = 0) {
    try {
      return this->getObject(index, MFA_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryKeyValueMFA(size_t index = 0) {
    try {
      return this->getObject(index, MFA_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Key Value Type - MFA
   */

  ID* getMFA_6(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MFA_6);
  }

  ID* getPrimaryKeyValueTypeMFA(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MFA_6);
  }

  bool isMFA_6(size_t index = 0) {
    try {
      return this->getObject(index, MFA_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryKeyValueTypeMFA(size_t index = 0) {
    try {
      return this->getObject(index, MFA_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of MFA */

} /* End of namespace HL7_24 */
#endif /* __MFA_v24_H__ */
