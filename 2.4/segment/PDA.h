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


#ifndef __PDA_v24_H__
#define __PDA_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/DR.h"
#include "../datatype/ID.h"
#include "../datatype/PL.h"
#include "../datatype/TS.h"
#include "../datatype/XCN.h"

namespace HL7_24 {

/* Patient death and autopsy */
class PDA : public HL7Segment {
 public:
  PDA() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PDA_1,
    PDA_2,
    PDA_3,
    PDA_4,
    PDA_5,
    PDA_6,
    PDA_7,
    PDA_8,
    PDA_9,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PDA"; }
  PDA* create() const { return new PDA(); }

 private:
  void init() {
    setName("PDA");
    /* Init members */
    addObject<CE>(PDA_1, "PDA.1", HL7::optional, HL7::repetition_on);
    addObject<PL>(PDA_2, "PDA.2", HL7::optional, HL7::repetition_off);
    addObject<ID>(PDA_3, "PDA.3", HL7::optional, HL7::repetition_off);
    addObject<TS>(PDA_4, "PDA.4", HL7::optional, HL7::repetition_off);
    addObject<XCN>(PDA_5, "PDA.5", HL7::optional, HL7::repetition_off);
    addObject<ID>(PDA_6, "PDA.6", HL7::optional, HL7::repetition_off);
    addObject<DR>(PDA_7, "PDA.7", HL7::optional, HL7::repetition_off);
    addObject<XCN>(PDA_8, "PDA.8", HL7::optional, HL7::repetition_off);
    addObject<ID>(PDA_9, "PDA.9", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Death Cause Code
   */

  CE* getPDA_1(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PDA_1);
  }

  CE* getDeathCauseCode(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PDA_1);
  }

  bool isPDA_1(size_t index = 0) {
    try {
      return this->getObject(index, PDA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeathCauseCode(size_t index = 0) {
    try {
      return this->getObject(index, PDA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Death Location
   */

  PL* getPDA_2(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PDA_2);
  }

  PL* getDeathLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, PDA_2);
  }

  bool isPDA_2(size_t index = 0) {
    try {
      return this->getObject(index, PDA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeathLocation(size_t index = 0) {
    try {
      return this->getObject(index, PDA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Death Certified Indicator
   */

  ID* getPDA_3(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PDA_3);
  }

  ID* getDeathCertifiedIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PDA_3);
  }

  bool isPDA_3(size_t index = 0) {
    try {
      return this->getObject(index, PDA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeathCertifiedIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PDA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Death Certificate Signed Date/Time
   */

  TS* getPDA_4(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PDA_4);
  }

  TS* getDeathCertificateSignedDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PDA_4);
  }

  bool isPDA_4(size_t index = 0) {
    try {
      return this->getObject(index, PDA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeathCertificateSignedDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PDA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Death Certified By
   */

  XCN* getPDA_5(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PDA_5);
  }

  XCN* getDeathCertifiedBy(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PDA_5);
  }

  bool isPDA_5(size_t index = 0) {
    try {
      return this->getObject(index, PDA_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeathCertifiedBy(size_t index = 0) {
    try {
      return this->getObject(index, PDA_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Autopsy Indicator
   */

  ID* getPDA_6(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PDA_6);
  }

  ID* getAutopsyIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PDA_6);
  }

  bool isPDA_6(size_t index = 0) {
    try {
      return this->getObject(index, PDA_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAutopsyIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PDA_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Autopsy Start and End Date/Time
   */

  DR* getPDA_7(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, PDA_7);
  }

  DR* getAutopsyStartAndEndDateTime(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, PDA_7);
  }

  bool isPDA_7(size_t index = 0) {
    try {
      return this->getObject(index, PDA_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAutopsyStartAndEndDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PDA_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Autopsy Performed By
   */

  XCN* getPDA_8(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PDA_8);
  }

  XCN* getAutopsyPerformedBy(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PDA_8);
  }

  bool isPDA_8(size_t index = 0) {
    try {
      return this->getObject(index, PDA_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAutopsyPerformedBy(size_t index = 0) {
    try {
      return this->getObject(index, PDA_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Coroner Indicator
   */

  ID* getPDA_9(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PDA_9);
  }

  ID* getCoronerIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PDA_9);
  }

  bool isPDA_9(size_t index = 0) {
    try {
      return this->getObject(index, PDA_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCoronerIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PDA_9) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PDA */

} /* End of namespace HL7_24 */
#endif /* __PDA_v24_H__ */
