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


#ifndef __LOC_v24_H__
#define __LOC_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0461.h"
#include "../datatype/IS.h"
#include "../datatype/PL.h"
#include "../datatype/ST.h"
#include "../datatype/XAD.h"
#include "../datatype/XON.h"
#include "../datatype/XTN.h"

namespace HL7_24 {

/* Location Identification */
class LOC : public HL7Segment {
 public:
  LOC() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    LOC_1,
    LOC_2,
    LOC_3,
    LOC_4,
    LOC_5,
    LOC_6,
    LOC_7,
    LOC_8,
    LOC_9,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "LOC"; }
  LOC* create() const { return new LOC(); }

 private:
  void init() {
    setName("LOC");
    /* Init members */
    addObject<PL>(LOC_1, "LOC.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(LOC_2, "LOC.2", HL7::optional, HL7::repetition_off);
    addObject<IS>(LOC_3, "LOC.3", HL7::initialized, HL7::repetition_on);
    addObject<XON>(LOC_4, "LOC.4", HL7::optional, HL7::repetition_on);
    addObject<XAD>(LOC_5, "LOC.5", HL7::optional, HL7::repetition_on);
    addObject<XTN>(LOC_6, "LOC.6", HL7::optional, HL7::repetition_on);
    addObject<CE_0461>(LOC_7, "LOC.7", HL7::optional, HL7::repetition_on);
    addObject<IS>(LOC_8, "LOC.8", HL7::optional, HL7::repetition_on);
    addObject<IS>(LOC_9, "LOC.9", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Primary Key Value - LOC
   */

  PL* getLOC_1(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, LOC_1);
  }

  PL* getPrimaryKeyValueLOC(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, LOC_1);
  }

  bool isLOC_1(size_t index = 0) {
    try {
      return this->getObject(index, LOC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryKeyValueLOC(size_t index = 0) {
    try {
      return this->getObject(index, LOC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Description
   */

  ST* getLOC_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, LOC_2);
  }

  ST* getLocationDescription(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, LOC_2);
  }

  bool isLOC_2(size_t index = 0) {
    try {
      return this->getObject(index, LOC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationDescription(size_t index = 0) {
    try {
      return this->getObject(index, LOC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Type - LOC
   */

  IS* getLOC_3(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, LOC_3);
  }

  IS* getLocationTypeLOC(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, LOC_3);
  }

  bool isLOC_3(size_t index = 0) {
    try {
      return this->getObject(index, LOC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationTypeLOC(size_t index = 0) {
    try {
      return this->getObject(index, LOC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Organization Name - LOC
   */

  XON* getLOC_4(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, LOC_4);
  }

  XON* getOrganizationNameLOC(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, LOC_4);
  }

  bool isLOC_4(size_t index = 0) {
    try {
      return this->getObject(index, LOC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrganizationNameLOC(size_t index = 0) {
    try {
      return this->getObject(index, LOC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Address
   */

  XAD* getLOC_5(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, LOC_5);
  }

  XAD* getLocationAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, LOC_5);
  }

  bool isLOC_5(size_t index = 0) {
    try {
      return this->getObject(index, LOC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationAddress(size_t index = 0) {
    try {
      return this->getObject(index, LOC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Phone
   */

  XTN* getLOC_6(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, LOC_6);
  }

  XTN* getLocationPhone(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, LOC_6);
  }

  bool isLOC_6(size_t index = 0) {
    try {
      return this->getObject(index, LOC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationPhone(size_t index = 0) {
    try {
      return this->getObject(index, LOC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * License Number
   */

  CE_0461* getLOC_7(size_t index = 0) {
    return (CE_0461*)this->getObjectSafe(index, LOC_7);
  }

  CE_0461* getLicenseNumber(size_t index = 0) {
    return (CE_0461*)this->getObjectSafe(index, LOC_7);
  }

  bool isLOC_7(size_t index = 0) {
    try {
      return this->getObject(index, LOC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLicenseNumber(size_t index = 0) {
    try {
      return this->getObject(index, LOC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Equipment
   */

  IS* getLOC_8(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, LOC_8);
  }

  IS* getLocationEquipment(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, LOC_8);
  }

  bool isLOC_8(size_t index = 0) {
    try {
      return this->getObject(index, LOC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationEquipment(size_t index = 0) {
    try {
      return this->getObject(index, LOC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Service Code
   */

  IS* getLOC_9(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, LOC_9);
  }

  IS* getLocationServiceCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, LOC_9);
  }

  bool isLOC_9(size_t index = 0) {
    try {
      return this->getObject(index, LOC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationServiceCode(size_t index = 0) {
    try {
      return this->getObject(index, LOC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of LOC */

} /* End of namespace HL7_24 */
#endif /* __LOC_v24_H__ */
