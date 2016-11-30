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


#ifndef __CP_v24_H__
#define __CP_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/ID.h"
#include "../datatype/MO.h"
#include "../datatype/NM.h"

namespace HL7_24 {

/* composite price */
class CP : public HL7Data {
 public:
  CP() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CP_1, /* price */
    CP_2, /* price type */
    CP_3, /* from value */
    CP_4, /* to value */
    CP_5, /* range units */
    CP_6, /* range type */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CP"; }
  CP *create() const { return new CP(); }

 private:
  void init() {
    // setName("CP");
    /* Init members */
    addObject<MO>(CP_1, "CP.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CP_2, "CP.2", HL7::initialized, HL7::repetition_off);
    addParams(CP_2, "AP"); /* administrative price or handling fee */
    addParams(CP_2, "DC"); /* direct unit cost */
    addParams(CP_2, "IC"); /* indirect unit cost */
    addParams(CP_2, "PF"); /* professional fee for performing provider */
    addParams(CP_2, "TF"); /* technology fee for use of equipment */
    addParams(CP_2, "TP"); /* total price */
    addParams(
	CP_2,
	"UP"); /* unit price, may be based on length of procedure or service */
    addObject<NM>(CP_3, "CP.3", HL7::initialized, HL7::repetition_off);
    addObject<NM>(CP_4, "CP.4", HL7::initialized, HL7::repetition_off);
    addObject<CE>(CP_5, "CP.5", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CP_6, "CP.6", HL7::initialized, HL7::repetition_off);
    addParams(CP_6, "F"); /* Flat-rate.  Apply the entire price to this
			     interval, do not pro-rate the price if the full
			     interval has not occurred/been consumed */
    addParams(CP_6, "P"); /* Pro-rate.  Apply this price to this interval,
			     pro-rated by whatever portion of the interval has
			     occurred/been consumed */
  }

 public:
  /* Getters */
  /****************************************
   * price
   */
  MO *getCP_1(size_t index = 0) {
    return (MO *)this->getObjectSafe(index, CP_1);
  }

  MO *getPrice(size_t index = 0) {
    return (MO *)this->getObjectSafe(index, CP_1);
  }

  bool isCP_1(size_t index = 0) {
    try {
      return this->getObject(index, CP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrice(size_t index = 0) {
    try {
      return this->getObject(index, CP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * price type
   */
  ID *getCP_2(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CP_2);
  }

  ID *getPriceType(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CP_2);
  }

  bool isCP_2(size_t index = 0) {
    try {
      return this->getObject(index, CP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPriceType(size_t index = 0) {
    try {
      return this->getObject(index, CP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * from value
   */
  NM *getCP_3(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CP_3);
  }

  NM *getFromValue(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CP_3);
  }

  bool isCP_3(size_t index = 0) {
    try {
      return this->getObject(index, CP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFromValue(size_t index = 0) {
    try {
      return this->getObject(index, CP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * to value
   */
  NM *getCP_4(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CP_4);
  }

  NM *getToValue(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CP_4);
  }

  bool isCP_4(size_t index = 0) {
    try {
      return this->getObject(index, CP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isToValue(size_t index = 0) {
    try {
      return this->getObject(index, CP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * range units
   */
  CE *getCP_5(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, CP_5);
  }

  CE *getRangeUnits(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, CP_5);
  }

  bool isCP_5(size_t index = 0) {
    try {
      return this->getObject(index, CP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRangeUnits(size_t index = 0) {
    try {
      return this->getObject(index, CP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * range type
   */
  ID *getCP_6(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CP_6);
  }

  ID *getRangeType(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CP_6);
  }

  bool isCP_6(size_t index = 0) {
    try {
      return this->getObject(index, CP_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRangeType(size_t index = 0) {
    try {
      return this->getObject(index, CP_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CP */

} /* End HL7_24 */

#endif /*__CP_v24_H__ */
