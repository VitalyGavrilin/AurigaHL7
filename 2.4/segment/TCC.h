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


#ifndef __TCC_v24_H__
#define __TCC_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0388.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/SN.h"
#include "../datatype/SPS.h"

namespace HL7_24 {

/* Test Code Configuration */
class TCC : public HL7Segment {
 public:
  TCC() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    TCC_1,
    TCC_2,
    TCC_3,
    TCC_4,
    TCC_5,
    TCC_6,
    TCC_7,
    TCC_8,
    TCC_9,
    TCC_10,
    TCC_11,
    TCC_12,
    TCC_13,
    TCC_14,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "TCC"; }
  TCC* create() const { return new TCC(); }

 private:
  void init() {
    setName("TCC");
    /* Init members */
    addObject<CE>(TCC_1, "TCC.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(TCC_2, "TCC.2", HL7::initialized, HL7::repetition_off);
    addObject<SPS>(TCC_3, "TCC.3", HL7::optional, HL7::repetition_off);
    addObject<SN>(TCC_4, "TCC.4", HL7::optional, HL7::repetition_off);
    addObject<SN>(TCC_5, "TCC.5", HL7::optional, HL7::repetition_off);
    addObject<SN>(TCC_6, "TCC.6", HL7::optional, HL7::repetition_off);
    addObject<SN>(TCC_7, "TCC.7", HL7::optional, HL7::repetition_off);
    addObject<NM>(TCC_8, "TCC.8", HL7::optional, HL7::repetition_off);
    addObject<ID>(TCC_9, "TCC.9", HL7::optional, HL7::repetition_off);
    addObject<ID>(TCC_10, "TCC.10", HL7::optional, HL7::repetition_off);
    addObject<ID>(TCC_11, "TCC.11", HL7::optional, HL7::repetition_off);
    addObject<SN>(TCC_12, "TCC.12", HL7::optional, HL7::repetition_off);
    addObject<CE>(TCC_13, "TCC.13", HL7::optional, HL7::repetition_off);
    addObject<CE_0388>(TCC_14, "TCC.14", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Universal Service Identifier
   */

  CE* getTCC_1(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, TCC_1);
  }

  CE* getUniversalServiceIdentifier(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, TCC_1);
  }

  bool isTCC_1(size_t index = 0) {
    try {
      return this->getObject(index, TCC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniversalServiceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, TCC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Test Application Identifier
   */

  EI* getTCC_2(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, TCC_2);
  }

  EI* getTestApplicationIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, TCC_2);
  }

  bool isTCC_2(size_t index = 0) {
    try {
      return this->getObject(index, TCC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTestApplicationIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, TCC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Source
   */

  SPS* getTCC_3(size_t index = 0) {
    return (SPS*)this->getObjectSafe(index, TCC_3);
  }

  SPS* getSpecimenSource(size_t index = 0) {
    return (SPS*)this->getObjectSafe(index, TCC_3);
  }

  bool isTCC_3(size_t index = 0) {
    try {
      return this->getObject(index, TCC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenSource(size_t index = 0) {
    try {
      return this->getObject(index, TCC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Auto-Dilution Factor Default
   */

  SN* getTCC_4(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, TCC_4);
  }

  SN* getAutoDilutionFactorDefault(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, TCC_4);
  }

  bool isTCC_4(size_t index = 0) {
    try {
      return this->getObject(index, TCC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAutoDilutionFactorDefault(size_t index = 0) {
    try {
      return this->getObject(index, TCC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Rerun Dilution Factor Default
   */

  SN* getTCC_5(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, TCC_5);
  }

  SN* getRerunDilutionFactorDefault(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, TCC_5);
  }

  bool isTCC_5(size_t index = 0) {
    try {
      return this->getObject(index, TCC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRerunDilutionFactorDefault(size_t index = 0) {
    try {
      return this->getObject(index, TCC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pre-Dilution Factor Default
   */

  SN* getTCC_6(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, TCC_6);
  }

  SN* getPreDilutionFactorDefault(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, TCC_6);
  }

  bool isTCC_6(size_t index = 0) {
    try {
      return this->getObject(index, TCC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreDilutionFactorDefault(size_t index = 0) {
    try {
      return this->getObject(index, TCC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Endogenous Content of Pre-Dilution Diluent
   */

  SN* getTCC_7(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, TCC_7);
  }

  SN* getEndogenousContentOfPreDilutionDiluent(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, TCC_7);
  }

  bool isTCC_7(size_t index = 0) {
    try {
      return this->getObject(index, TCC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEndogenousContentOfPreDilutionDiluent(size_t index = 0) {
    try {
      return this->getObject(index, TCC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inventory Limits Warning Level
   */

  NM* getTCC_8(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, TCC_8);
  }

  NM* getInventoryLimitsWarningLevel(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, TCC_8);
  }

  bool isTCC_8(size_t index = 0) {
    try {
      return this->getObject(index, TCC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInventoryLimitsWarningLevel(size_t index = 0) {
    try {
      return this->getObject(index, TCC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Automatic Rerun Allowed
   */

  ID* getTCC_9(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TCC_9);
  }

  ID* getAutomaticRerunAllowed(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TCC_9);
  }

  bool isTCC_9(size_t index = 0) {
    try {
      return this->getObject(index, TCC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAutomaticRerunAllowed(size_t index = 0) {
    try {
      return this->getObject(index, TCC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Automatic Repeat Allowed
   */

  ID* getTCC_10(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TCC_10);
  }

  ID* getAutomaticRepeatAllowed(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TCC_10);
  }

  bool isTCC_10(size_t index = 0) {
    try {
      return this->getObject(index, TCC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAutomaticRepeatAllowed(size_t index = 0) {
    try {
      return this->getObject(index, TCC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Automatic Reflex Allowed
   */

  ID* getTCC_11(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TCC_11);
  }

  ID* getAutomaticReflexAllowed(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TCC_11);
  }

  bool isTCC_11(size_t index = 0) {
    try {
      return this->getObject(index, TCC_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAutomaticReflexAllowed(size_t index = 0) {
    try {
      return this->getObject(index, TCC_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Equipment Dynamic Range
   */

  SN* getTCC_12(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, TCC_12);
  }

  SN* getEquipmentDynamicRange(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, TCC_12);
  }

  bool isTCC_12(size_t index = 0) {
    try {
      return this->getObject(index, TCC_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEquipmentDynamicRange(size_t index = 0) {
    try {
      return this->getObject(index, TCC_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Units
   */

  CE* getTCC_13(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, TCC_13);
  }

  CE* getUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, TCC_13);
  }

  bool isTCC_13(size_t index = 0) {
    try {
      return this->getObject(index, TCC_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUnits(size_t index = 0) {
    try {
      return this->getObject(index, TCC_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Processing Type
   */

  CE_0388* getTCC_14(size_t index = 0) {
    return (CE_0388*)this->getObjectSafe(index, TCC_14);
  }

  CE_0388* getProcessingType(size_t index = 0) {
    return (CE_0388*)this->getObjectSafe(index, TCC_14);
  }

  bool isTCC_14(size_t index = 0) {
    try {
      return this->getObject(index, TCC_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcessingType(size_t index = 0) {
    try {
      return this->getObject(index, TCC_14) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of TCC */

} /* End of namespace HL7_24 */
#endif /* __TCC_v24_H__ */
