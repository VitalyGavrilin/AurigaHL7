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


#ifndef __PTH_v24_H__
#define __PTH_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Pathway */
class PTH : public HL7Segment {
 public:
  PTH() { this->init(); }

 private:
  /* */
  enum FIELD_ID { PTH_1, PTH_2, PTH_3, PTH_4, PTH_5, PTH_6, FIELD_ID_MAX };

 public:
  const char* className() const { return "PTH"; }
  PTH* create() const { return new PTH(); }

 private:
  void init() {
    setName("PTH");
    /* Init members */
    addObject<ID>(PTH_1, "PTH.1", HL7::initialized, HL7::repetition_off);
    addObject<CE>(PTH_2, "PTH.2", HL7::initialized, HL7::repetition_off);
    addObject<EI>(PTH_3, "PTH.3", HL7::initialized, HL7::repetition_off);
    addObject<TS>(PTH_4, "PTH.4", HL7::initialized, HL7::repetition_off);
    addObject<CE>(PTH_5, "PTH.5", HL7::optional, HL7::repetition_off);
    addObject<TS>(PTH_6, "PTH.6", HL7::conditional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Action Code
   */

  ID* getPTH_1(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PTH_1);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PTH_1);
  }

  bool isPTH_1(size_t index = 0) {
    try {
      return this->getObject(index, PTH_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, PTH_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pathway ID
   */

  CE* getPTH_2(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PTH_2);
  }

  CE* getPathwayID(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PTH_2);
  }

  bool isPTH_2(size_t index = 0) {
    try {
      return this->getObject(index, PTH_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPathwayID(size_t index = 0) {
    try {
      return this->getObject(index, PTH_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pathway Instance ID
   */

  EI* getPTH_3(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PTH_3);
  }

  EI* getPathwayInstanceID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PTH_3);
  }

  bool isPTH_3(size_t index = 0) {
    try {
      return this->getObject(index, PTH_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPathwayInstanceID(size_t index = 0) {
    try {
      return this->getObject(index, PTH_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pathway Established Date/Time
   */

  TS* getPTH_4(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PTH_4);
  }

  TS* getPathwayEstablishedDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PTH_4);
  }

  bool isPTH_4(size_t index = 0) {
    try {
      return this->getObject(index, PTH_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPathwayEstablishedDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PTH_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pathway Life Cycle Status
   */

  CE* getPTH_5(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PTH_5);
  }

  CE* getPathwayLifeCycleStatus(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PTH_5);
  }

  bool isPTH_5(size_t index = 0) {
    try {
      return this->getObject(index, PTH_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPathwayLifeCycleStatus(size_t index = 0) {
    try {
      return this->getObject(index, PTH_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Change Pathway Life Cycle Status Date/Time
   */

  TS* getPTH_6(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PTH_6);
  }

  TS* getChangePathwayLifeCycleStatusDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PTH_6);
  }

  bool isPTH_6(size_t index = 0) {
    try {
      return this->getObject(index, PTH_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChangePathwayLifeCycleStatusDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PTH_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PTH */

} /* End of namespace HL7_24 */
#endif /* __PTH_v24_H__ */
