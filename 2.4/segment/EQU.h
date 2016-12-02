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


#ifndef __EQU_v24_H__
#define __EQU_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0365.h"
#include "../datatype/CE_0366.h"
#include "../datatype/CE_0367.h"
#include "../datatype/EI.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Equipment Detail */
class EQU : public HL7Segment {
 public:
  EQU() { this->init(); }

 private:
  /* */
  enum FIELD_ID { EQU_1, EQU_2, EQU_3, EQU_4, EQU_5, FIELD_ID_MAX };

 public:
  const char* className() const { return "EQU"; }
  EQU* create() const { return new EQU(); }

 private:
  void init() {
    setName("EQU");
    /* Init members */
    addObject<EI>(EQU_1, "EQU.1", HL7::initialized, HL7::repetition_off);
    addObject<TS>(EQU_2, "EQU.2", HL7::initialized, HL7::repetition_off);
    addObject<CE_0365>(EQU_3, "EQU.3", HL7::conditional, HL7::repetition_off);
    addObject<CE_0366>(EQU_4, "EQU.4", HL7::optional, HL7::repetition_off);
    addObject<CE_0367>(EQU_5, "EQU.5", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Equipment Instance Identifier
   */

  EI* getEQU_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, EQU_1);
  }

  EI* getEquipmentInstanceIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, EQU_1);
  }

  bool isEQU_1(size_t index = 0) {
    try {
      return this->getObject(index, EQU_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEquipmentInstanceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, EQU_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Date/Time
   */

  TS* getEQU_2(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, EQU_2);
  }

  TS* getEventDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, EQU_2);
  }

  bool isEQU_2(size_t index = 0) {
    try {
      return this->getObject(index, EQU_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventDateTime(size_t index = 0) {
    try {
      return this->getObject(index, EQU_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Equipment State
   */

  CE_0365* getEQU_3(size_t index = 0) {
    return (CE_0365*)this->getObjectSafe(index, EQU_3);
  }

  CE_0365* getEquipmentState(size_t index = 0) {
    return (CE_0365*)this->getObjectSafe(index, EQU_3);
  }

  bool isEQU_3(size_t index = 0) {
    try {
      return this->getObject(index, EQU_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEquipmentState(size_t index = 0) {
    try {
      return this->getObject(index, EQU_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Local/Remote Control State
   */

  CE_0366* getEQU_4(size_t index = 0) {
    return (CE_0366*)this->getObjectSafe(index, EQU_4);
  }

  CE_0366* getLocalRemoteControlState(size_t index = 0) {
    return (CE_0366*)this->getObjectSafe(index, EQU_4);
  }

  bool isEQU_4(size_t index = 0) {
    try {
      return this->getObject(index, EQU_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocalRemoteControlState(size_t index = 0) {
    try {
      return this->getObject(index, EQU_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alert Level
   */

  CE_0367* getEQU_5(size_t index = 0) {
    return (CE_0367*)this->getObjectSafe(index, EQU_5);
  }

  CE_0367* getAlertLevel(size_t index = 0) {
    return (CE_0367*)this->getObjectSafe(index, EQU_5);
  }

  bool isEQU_5(size_t index = 0) {
    try {
      return this->getObject(index, EQU_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlertLevel(size_t index = 0) {
    try {
      return this->getObject(index, EQU_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of EQU */

} /* End of namespace HL7_24 */
#endif /* __EQU_v24_H__ */
