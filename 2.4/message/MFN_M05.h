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


#ifndef __MFN_M05__24_H__
#define __MFN_M05__24_H__

#include "../../common/Util.h"
#include "../segment/LCC.h"
#include "../segment/LCH.h"
#include "../segment/LDP.h"
#include "../segment/LOC.h"
#include "../segment/LRL.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"

namespace HL7_24 {

/* Internal structures/groups */
struct MFN_M05_MF_LOC_DEPT; /* MF_LOC_DEPT */
struct MFN_M05_MF_LOCATION; /* MF_LOCATION */

/* MF_LOC_DEPT */
struct MFN_M05_MF_LOC_DEPT : public HL7Group {
  MFN_M05_MF_LOC_DEPT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M05_LDP_17,
    MFN_M05_LCH_20,
    MFN_M05_LCC_25,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M05_MF_LOC_DEPT"; }
  MFN_M05_MF_LOC_DEPT* create() const { return new MFN_M05_MF_LOC_DEPT(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M05.MF_LOC_DEPT");
    addObject<LDP>(MFN_M05_LDP_17, "LDP.17", HL7::initialized,
		   HL7::repetition_off);
    addObject<LCH>(MFN_M05_LCH_20, "LCH.20", HL7::optional, HL7::repetition_on);
    addObject<LCC>(MFN_M05_LCC_25, "LCC.25", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  LDP* getLDP_17(size_t index = 0) {
    return (LDP*)this->getObjectSafe(index, MFN_M05_LDP_17);
  }
  LCH* getLCH_20(size_t index = 0) {
    return (LCH*)this->getObjectSafe(index, MFN_M05_LCH_20);
  }
  LCC* getLCC_25(size_t index = 0) {
    return (LCC*)this->getObjectSafe(index, MFN_M05_LCC_25);
  }

  /* Checker list */
  bool isLDP_17(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M05_LDP_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isLCH_20(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M05_LCH_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isLCC_25(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M05_LCC_25) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M05_16 */

/* MF_LOCATION */
struct MFN_M05_MF_LOCATION : public HL7Group {
  MFN_M05_MF_LOCATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M05_MFE_4,
    MFN_M05_LOC_5,
    MFN_M05_LCH_8,
    MFN_M05_LRL_13,
    MFN_M05_MF_LOC_DEPT_16,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M05_MF_LOCATION"; }
  MFN_M05_MF_LOCATION* create() const { return new MFN_M05_MF_LOCATION(); }

  /* Initialize object */
  void init() {
    setName("MFN_M05.MF_LOCATION");
    addObject<MFE>(MFN_M05_MFE_4, "MFE.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<LOC>(MFN_M05_LOC_5, "LOC.5", HL7::initialized,
		   HL7::repetition_off);
    addObject<LCH>(MFN_M05_LCH_8, "LCH.8", HL7::optional, HL7::repetition_on);
    addObject<LRL>(MFN_M05_LRL_13, "LRL.13", HL7::optional, HL7::repetition_on);
    addObject<MFN_M05_MF_LOC_DEPT>(MFN_M05_MF_LOC_DEPT_16,
				   "MFN_M05.MF_LOC_DEPT", HL7::initialized,
				   HL7::repetition_on);
  }

  /* Getters list */
  MFE* getMFE_4(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M05_MFE_4);
  }
  LOC* getLOC_5(size_t index = 0) {
    return (LOC*)this->getObjectSafe(index, MFN_M05_LOC_5);
  }
  LCH* getLCH_8(size_t index = 0) {
    return (LCH*)this->getObjectSafe(index, MFN_M05_LCH_8);
  }
  LRL* getLRL_13(size_t index = 0) {
    return (LRL*)this->getObjectSafe(index, MFN_M05_LRL_13);
  }
  MFN_M05_MF_LOC_DEPT* getMF_LOC_DEPT(size_t index = 0) {
    return (MFN_M05_MF_LOC_DEPT*)this->getObjectSafe(index,
						     MFN_M05_MF_LOC_DEPT_16);
  }

  /* Checker list */
  bool isMFE_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M05_MFE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isLOC_5(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M05_LOC_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isLCH_8(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M05_LCH_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isLRL_13(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M05_LRL_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMF_LOC_DEPT(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M05_MF_LOC_DEPT_16) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M05_3 */

/* MFN_M05 */
struct MFN_M05 : public HL7Message {
  MFN_M05() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M05_MSH_1,
    MFN_M05_MFI_2,
    MFN_M05_MF_LOCATION_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M05"; }
  MFN_M05* create() const { return new MFN_M05(); }

  /* Initialize object */
  void init() {
    setName("MFN_M05");
    addObject<MSH>(MFN_M05_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFI>(MFN_M05_MFI_2, "MFI.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFN_M05_MF_LOCATION>(MFN_M05_MF_LOCATION_3, "MFN_M05.MF_LOCATION",
				   HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M05_MSH_1);
  }
  MFI* getMFI_2(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M05_MFI_2);
  }
  MFN_M05_MF_LOCATION* getMF_LOCATION(size_t index = 0) {
    return (MFN_M05_MF_LOCATION*)this->getObjectSafe(index,
						     MFN_M05_MF_LOCATION_3);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M05_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M05_MFI_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMF_LOCATION(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M05_MF_LOCATION_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M05_ */
} /* namespace HL7_24 */
#endif /*  __MFN_M05__24_H__ */
