/*
 * This file is part of Auriga HL7 library.
 *
 * Auriga HL7 library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Auriga HL7 library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Auriga HL7 library.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __OM4_v24_H__
#define __OM4_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0371.h"
#include "../datatype/CQ.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/TX.h"

namespace HL7_24 {

/* Observations that Require Specimens */
class OM4 : public HL7Segment {
 public:
  OM4() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    OM4_1,
    OM4_2,
    OM4_3,
    OM4_4,
    OM4_5,
    OM4_6,
    OM4_7,
    OM4_8,
    OM4_9,
    OM4_10,
    OM4_11,
    OM4_12,
    OM4_13,
    OM4_14,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "OM4"; }
  OM4* create() const { return new OM4(); }

 private:
  void init() {
    setName("OM4");
    /* Init members */
    addObject<NM>(OM4_1, "OM4.1", HL7::optional, HL7::repetition_off);
    addObject<ID>(OM4_2, "OM4.2", HL7::optional, HL7::repetition_off);
    addObject<TX>(OM4_3, "OM4.3", HL7::optional, HL7::repetition_off);
    addObject<NM>(OM4_4, "OM4.4", HL7::optional, HL7::repetition_off);
    addObject<CE>(OM4_5, "OM4.5", HL7::optional, HL7::repetition_off);
    addObject<CE>(OM4_6, "OM4.6", HL7::optional, HL7::repetition_off);
    addObject<CE_0371>(OM4_7, "OM4.7", HL7::optional, HL7::repetition_off);
    addObject<TX>(OM4_8, "OM4.8", HL7::optional, HL7::repetition_off);
    addObject<TX>(OM4_9, "OM4.9", HL7::optional, HL7::repetition_off);
    addObject<CQ>(OM4_10, "OM4.10", HL7::optional, HL7::repetition_off);
    addObject<CQ>(OM4_11, "OM4.11", HL7::optional, HL7::repetition_off);
    addObject<TX>(OM4_12, "OM4.12", HL7::optional, HL7::repetition_off);
    addObject<ID>(OM4_13, "OM4.13", HL7::optional, HL7::repetition_on);
    addObject<CQ>(OM4_14, "OM4.14", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Sequence Number - Test/ Observation Master File
   */

  NM* getOM4_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM4_1);
  }

  NM* getSequenceNumberTestObservationMasterFile(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM4_1);
  }

  bool isOM4_1(size_t index = 0) {
    try {
      return this->getObject(index, OM4_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSequenceNumberTestObservationMasterFile(size_t index = 0) {
    try {
      return this->getObject(index, OM4_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Derived Specimen
   */

  ID* getOM4_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM4_2);
  }

  ID* getDerivedSpecimen(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM4_2);
  }

  bool isOM4_2(size_t index = 0) {
    try {
      return this->getObject(index, OM4_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDerivedSpecimen(size_t index = 0) {
    try {
      return this->getObject(index, OM4_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Container Description
   */

  TX* getOM4_3(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM4_3);
  }

  TX* getContainerDescription(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM4_3);
  }

  bool isOM4_3(size_t index = 0) {
    try {
      return this->getObject(index, OM4_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContainerDescription(size_t index = 0) {
    try {
      return this->getObject(index, OM4_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Container Volume
   */

  NM* getOM4_4(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM4_4);
  }

  NM* getContainerVolume(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM4_4);
  }

  bool isOM4_4(size_t index = 0) {
    try {
      return this->getObject(index, OM4_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContainerVolume(size_t index = 0) {
    try {
      return this->getObject(index, OM4_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Container Units
   */

  CE* getOM4_5(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM4_5);
  }

  CE* getContainerUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM4_5);
  }

  bool isOM4_5(size_t index = 0) {
    try {
      return this->getObject(index, OM4_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContainerUnits(size_t index = 0) {
    try {
      return this->getObject(index, OM4_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen
   */

  CE* getOM4_6(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM4_6);
  }

  CE* getSpecimen(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM4_6);
  }

  bool isOM4_6(size_t index = 0) {
    try {
      return this->getObject(index, OM4_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimen(size_t index = 0) {
    try {
      return this->getObject(index, OM4_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Additive
   */

  CE_0371* getOM4_7(size_t index = 0) {
    return (CE_0371*)this->getObjectSafe(index, OM4_7);
  }

  CE_0371* getAdditive(size_t index = 0) {
    return (CE_0371*)this->getObjectSafe(index, OM4_7);
  }

  bool isOM4_7(size_t index = 0) {
    try {
      return this->getObject(index, OM4_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdditive(size_t index = 0) {
    try {
      return this->getObject(index, OM4_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Preparation
   */

  TX* getOM4_8(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM4_8);
  }

  TX* getPreparation(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM4_8);
  }

  bool isOM4_8(size_t index = 0) {
    try {
      return this->getObject(index, OM4_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreparation(size_t index = 0) {
    try {
      return this->getObject(index, OM4_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Special Handling Requirements
   */

  TX* getOM4_9(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM4_9);
  }

  TX* getSpecialHandlingRequirements(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM4_9);
  }

  bool isOM4_9(size_t index = 0) {
    try {
      return this->getObject(index, OM4_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialHandlingRequirements(size_t index = 0) {
    try {
      return this->getObject(index, OM4_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Normal Collection Volume
   */

  CQ* getOM4_10(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, OM4_10);
  }

  CQ* getNormalCollectionVolume(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, OM4_10);
  }

  bool isOM4_10(size_t index = 0) {
    try {
      return this->getObject(index, OM4_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNormalCollectionVolume(size_t index = 0) {
    try {
      return this->getObject(index, OM4_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Minimum Collection Volume
   */

  CQ* getOM4_11(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, OM4_11);
  }

  CQ* getMinimumCollectionVolume(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, OM4_11);
  }

  bool isOM4_11(size_t index = 0) {
    try {
      return this->getObject(index, OM4_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMinimumCollectionVolume(size_t index = 0) {
    try {
      return this->getObject(index, OM4_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Requirements
   */

  TX* getOM4_12(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM4_12);
  }

  TX* getSpecimenRequirements(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM4_12);
  }

  bool isOM4_12(size_t index = 0) {
    try {
      return this->getObject(index, OM4_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenRequirements(size_t index = 0) {
    try {
      return this->getObject(index, OM4_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Priorities
   */

  ID* getOM4_13(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM4_13);
  }

  ID* getSpecimenPriorities(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OM4_13);
  }

  bool isOM4_13(size_t index = 0) {
    try {
      return this->getObject(index, OM4_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenPriorities(size_t index = 0) {
    try {
      return this->getObject(index, OM4_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Retention Time
   */

  CQ* getOM4_14(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, OM4_14);
  }

  CQ* getSpecimenRetentionTime(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, OM4_14);
  }

  bool isOM4_14(size_t index = 0) {
    try {
      return this->getObject(index, OM4_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenRetentionTime(size_t index = 0) {
    try {
      return this->getObject(index, OM4_14) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of OM4 */

} /* End of namespace HL7_24 */
#endif /* __OM4_v24_H__ */
