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


#ifndef __MFI_v24_H__
#define __MFI_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0175.h"
#include "../datatype/HD.h"
#include "../datatype/ID.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Master File Identification */
class MFI : public HL7Segment {
 public:
  MFI() { this->init(); }

 private:
  /* */
  enum FIELD_ID { MFI_1, MFI_2, MFI_3, MFI_4, MFI_5, MFI_6, FIELD_ID_MAX };

 public:
  const char* className() const { return "MFI"; }
  MFI* create() const { return new MFI(); }

 private:
  void init() {
    setName("MFI");
    /* Init members */
    addObject<CE_0175>(MFI_1, "MFI.1", HL7::initialized, HL7::repetition_off);
    addObject<HD>(MFI_2, "MFI.2", HL7::optional, HL7::repetition_off);
    addObject<ID>(MFI_3, "MFI.3", HL7::initialized, HL7::repetition_off);
    addObject<TS>(MFI_4, "MFI.4", HL7::optional, HL7::repetition_off);
    addObject<TS>(MFI_5, "MFI.5", HL7::optional, HL7::repetition_off);
    addObject<ID>(MFI_6, "MFI.6", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Master File Identifier
   */

  CE_0175* getMFI_1(size_t index = 0) {
    return (CE_0175*)this->getObjectSafe(index, MFI_1);
  }

  CE_0175* getMasterFileIdentifier(size_t index = 0) {
    return (CE_0175*)this->getObjectSafe(index, MFI_1);
  }

  bool isMFI_1(size_t index = 0) {
    try {
      return this->getObject(index, MFI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMasterFileIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, MFI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Master File Application Identifier
   */

  HD* getMFI_2(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, MFI_2);
  }

  HD* getMasterFileApplicationIdentifier(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, MFI_2);
  }

  bool isMFI_2(size_t index = 0) {
    try {
      return this->getObject(index, MFI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMasterFileApplicationIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, MFI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * File-Level Event Code
   */

  ID* getMFI_3(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MFI_3);
  }

  ID* getFileLevelEventCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MFI_3);
  }

  bool isMFI_3(size_t index = 0) {
    try {
      return this->getObject(index, MFI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFileLevelEventCode(size_t index = 0) {
    try {
      return this->getObject(index, MFI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entered Date/Time
   */

  TS* getMFI_4(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, MFI_4);
  }

  TS* getEnteredDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, MFI_4);
  }

  bool isMFI_4(size_t index = 0) {
    try {
      return this->getObject(index, MFI_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteredDateTime(size_t index = 0) {
    try {
      return this->getObject(index, MFI_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Date/Time
   */

  TS* getMFI_5(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, MFI_5);
  }

  TS* getEffectiveDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, MFI_5);
  }

  bool isMFI_5(size_t index = 0) {
    try {
      return this->getObject(index, MFI_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveDateTime(size_t index = 0) {
    try {
      return this->getObject(index, MFI_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Response Level Code
   */

  ID* getMFI_6(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MFI_6);
  }

  ID* getResponseLevelCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MFI_6);
  }

  bool isMFI_6(size_t index = 0) {
    try {
      return this->getObject(index, MFI_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResponseLevelCode(size_t index = 0) {
    try {
      return this->getObject(index, MFI_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of MFI */

} /* End of namespace HL7_24 */
#endif /* __MFI_v24_H__ */
