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


#ifndef __RFR_v24_H__
#define __RFR_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/NR.h"
#include "../datatype/ST.h"
#include "../datatype/TX.h"

namespace HL7_24 {

/* reference range */
class RFR : public HL7Data {
 public:
  RFR() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    RFR_1, /* numeric range */
    RFR_2, /* administrative sex */
    RFR_3, /* age range */
    RFR_4, /* gestational range */
    RFR_5, /* species */
    RFR_6, /* race/subspecies */
    RFR_7, /* conditions */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "RFR"; }
  RFR *create() const { return new RFR(); }

 private:
  void init() {
    // setName("RFR");
    /* Init members */
    addObject<NR>(RFR_1, "RFR.1", HL7::initialized, HL7::repetition_off);
    addObject<IS>(RFR_2, "RFR.2", HL7::initialized, HL7::repetition_off);
    addObject<NR>(RFR_3, "RFR.3", HL7::initialized, HL7::repetition_off);
    addObject<NR>(RFR_4, "RFR.4", HL7::initialized, HL7::repetition_off);
    addObject<TX>(RFR_5, "RFR.5", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RFR_6, "RFR.6", HL7::initialized, HL7::repetition_off);
    addObject<TX>(RFR_7, "RFR.7", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * numeric range
   */
  NR *getRFR_1(size_t index = 0) {
    return (NR *)this->getObjectSafe(index, RFR_1);
  }

  NR *getNumericRange(size_t index = 0) {
    return (NR *)this->getObjectSafe(index, RFR_1);
  }

  bool isRFR_1(size_t index = 0) {
    try {
      return this->getObject(index, RFR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumericRange(size_t index = 0) {
    try {
      return this->getObject(index, RFR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * administrative sex
   */
  IS *getRFR_2(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, RFR_2);
  }

  IS *getAdministrativeSex(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, RFR_2);
  }

  bool isRFR_2(size_t index = 0) {
    try {
      return this->getObject(index, RFR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministrativeSex(size_t index = 0) {
    try {
      return this->getObject(index, RFR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * age range
   */
  NR *getRFR_3(size_t index = 0) {
    return (NR *)this->getObjectSafe(index, RFR_3);
  }

  NR *getAgeRange(size_t index = 0) {
    return (NR *)this->getObjectSafe(index, RFR_3);
  }

  bool isRFR_3(size_t index = 0) {
    try {
      return this->getObject(index, RFR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAgeRange(size_t index = 0) {
    try {
      return this->getObject(index, RFR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * gestational range
   */
  NR *getRFR_4(size_t index = 0) {
    return (NR *)this->getObjectSafe(index, RFR_4);
  }

  NR *getGestationalRange(size_t index = 0) {
    return (NR *)this->getObjectSafe(index, RFR_4);
  }

  bool isRFR_4(size_t index = 0) {
    try {
      return this->getObject(index, RFR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGestationalRange(size_t index = 0) {
    try {
      return this->getObject(index, RFR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * species
   */
  TX *getRFR_5(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, RFR_5);
  }

  TX *getSpecies(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, RFR_5);
  }

  bool isRFR_5(size_t index = 0) {
    try {
      return this->getObject(index, RFR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecies(size_t index = 0) {
    try {
      return this->getObject(index, RFR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * race/subspecies
   */
  ST *getRFR_6(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, RFR_6);
  }

  ST *getRaceSubspecies(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, RFR_6);
  }

  bool isRFR_6(size_t index = 0) {
    try {
      return this->getObject(index, RFR_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRaceSubspecies(size_t index = 0) {
    try {
      return this->getObject(index, RFR_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * conditions
   */
  TX *getRFR_7(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, RFR_7);
  }

  TX *getConditions(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, RFR_7);
  }

  bool isRFR_7(size_t index = 0) {
    try {
      return this->getObject(index, RFR_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConditions(size_t index = 0) {
    try {
      return this->getObject(index, RFR_7) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End RFR */

} /* End HL7_24 */

#endif /*__RFR_v24_H__ */
