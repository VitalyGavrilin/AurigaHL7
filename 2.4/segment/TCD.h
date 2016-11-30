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


#ifndef __TCD_v24_H__
#define __TCD_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0389.h"
#include "../datatype/ID.h"
#include "../datatype/SN.h"

namespace HL7_24 {

/* Test Code Detail */
class TCD : public HL7Segment {
 public:
  TCD() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    TCD_1,
    TCD_2,
    TCD_3,
    TCD_4,
    TCD_5,
    TCD_6,
    TCD_7,
    TCD_8,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "TCD"; }
  TCD* create() const { return new TCD(); }

 private:
  void init() {
    setName("TCD");
    /* Init members */
    addObject<CE>(TCD_1, "TCD.1", HL7::initialized, HL7::repetition_off);
    addObject<SN>(TCD_2, "TCD.2", HL7::optional, HL7::repetition_off);
    addObject<SN>(TCD_3, "TCD.3", HL7::optional, HL7::repetition_off);
    addObject<SN>(TCD_4, "TCD.4", HL7::optional, HL7::repetition_off);
    addObject<SN>(TCD_5, "TCD.5", HL7::optional, HL7::repetition_off);
    addObject<ID>(TCD_6, "TCD.6", HL7::optional, HL7::repetition_off);
    addObject<ID>(TCD_7, "TCD.7", HL7::optional, HL7::repetition_off);
    addObject<CE_0389>(TCD_8, "TCD.8", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Universal Service Identifier
   */

  CE* getTCD_1(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, TCD_1);
  }

  CE* getUniversalServiceIdentifier(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, TCD_1);
  }

  bool isTCD_1(size_t index = 0) {
    try {
      return this->getObject(index, TCD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniversalServiceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, TCD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Auto-Dilution Factor
   */

  SN* getTCD_2(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, TCD_2);
  }

  SN* getAutoDilutionFactor(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, TCD_2);
  }

  bool isTCD_2(size_t index = 0) {
    try {
      return this->getObject(index, TCD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAutoDilutionFactor(size_t index = 0) {
    try {
      return this->getObject(index, TCD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Rerun Dilution Factor
   */

  SN* getTCD_3(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, TCD_3);
  }

  SN* getRerunDilutionFactor(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, TCD_3);
  }

  bool isTCD_3(size_t index = 0) {
    try {
      return this->getObject(index, TCD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRerunDilutionFactor(size_t index = 0) {
    try {
      return this->getObject(index, TCD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pre-Dilution Factor
   */

  SN* getTCD_4(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, TCD_4);
  }

  SN* getPreDilutionFactor(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, TCD_4);
  }

  bool isTCD_4(size_t index = 0) {
    try {
      return this->getObject(index, TCD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreDilutionFactor(size_t index = 0) {
    try {
      return this->getObject(index, TCD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Endogenous Content of Pre-Dilution Diluent
   */

  SN* getTCD_5(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, TCD_5);
  }

  SN* getEndogenousContentOfPreDilutionDiluent(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, TCD_5);
  }

  bool isTCD_5(size_t index = 0) {
    try {
      return this->getObject(index, TCD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEndogenousContentOfPreDilutionDiluent(size_t index = 0) {
    try {
      return this->getObject(index, TCD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Automatic Repeat Allowed
   */

  ID* getTCD_6(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TCD_6);
  }

  ID* getAutomaticRepeatAllowed(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TCD_6);
  }

  bool isTCD_6(size_t index = 0) {
    try {
      return this->getObject(index, TCD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAutomaticRepeatAllowed(size_t index = 0) {
    try {
      return this->getObject(index, TCD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reflex Allowed
   */

  ID* getTCD_7(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TCD_7);
  }

  ID* getReflexAllowed(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TCD_7);
  }

  bool isTCD_7(size_t index = 0) {
    try {
      return this->getObject(index, TCD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReflexAllowed(size_t index = 0) {
    try {
      return this->getObject(index, TCD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Analyte Repeat Status
   */

  CE_0389* getTCD_8(size_t index = 0) {
    return (CE_0389*)this->getObjectSafe(index, TCD_8);
  }

  CE_0389* getAnalyteRepeatStatus(size_t index = 0) {
    return (CE_0389*)this->getObjectSafe(index, TCD_8);
  }

  bool isTCD_8(size_t index = 0) {
    try {
      return this->getObject(index, TCD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAnalyteRepeatStatus(size_t index = 0) {
    try {
      return this->getObject(index, TCD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of TCD */

} /* End of namespace HL7_24 */
#endif /* __TCD_v24_H__ */
