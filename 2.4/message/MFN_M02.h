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


#ifndef __MFN_M02__24_H__
#define __MFN_M02__24_H__

#include "../../common/Util.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"
#include "../segment/ORG.h"
#include "../segment/PRA.h"
#include "../segment/STF.h"

namespace HL7_24 {

/* Internal structures/groups */
struct MFN_M02_MF_STAFF; /* MF_STAFF */

/* MF_STAFF */
struct MFN_M02_MF_STAFF : public HL7Group {
  MFN_M02_MF_STAFF() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M02_MFE_4,
    MFN_M02_STF_5,
    MFN_M02_PRA_7,
    MFN_M02_ORG_10,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M02_MF_STAFF"; }
  MFN_M02_MF_STAFF* create() const { return new MFN_M02_MF_STAFF(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M02.MF_STAFF");
    addObject<MFE>(MFN_M02_MFE_4, "MFE.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<STF>(MFN_M02_STF_5, "STF.5", HL7::initialized,
		   HL7::repetition_off);
    addObject<PRA>(MFN_M02_PRA_7, "PRA.7", HL7::optional, HL7::repetition_off);
    addObject<ORG>(MFN_M02_ORG_10, "ORG.10", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  MFE* getMFE_4(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M02_MFE_4);
  }
  STF* getSTF_5(size_t index = 0) {
    return (STF*)this->getObjectSafe(index, MFN_M02_STF_5);
  }
  PRA* getPRA_7(size_t index = 0) {
    return (PRA*)this->getObjectSafe(index, MFN_M02_PRA_7);
  }
  ORG* getORG_10(size_t index = 0) {
    return (ORG*)this->getObjectSafe(index, MFN_M02_ORG_10);
  }

  /* Checker list */
  bool isMFE_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M02_MFE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSTF_5(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M02_STF_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRA_7(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M02_PRA_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORG_10(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M02_ORG_10) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M02_3 */

/* MFN_M02 */
struct MFN_M02 : public HL7Message {
  MFN_M02() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M02_MSH_1,
    MFN_M02_MFI_2,
    MFN_M02_MF_STAFF_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M02"; }
  MFN_M02* create() const { return new MFN_M02(); }

  /* Initialize object */
  void init() {
    setName("MFN_M02");
    addObject<MSH>(MFN_M02_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFI>(MFN_M02_MFI_2, "MFI.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFN_M02_MF_STAFF>(MFN_M02_MF_STAFF_3, "MFN_M02.MF_STAFF",
				HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M02_MSH_1);
  }
  MFI* getMFI_2(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M02_MFI_2);
  }
  MFN_M02_MF_STAFF* getMF_STAFF(size_t index = 0) {
    return (MFN_M02_MF_STAFF*)this->getObjectSafe(index, MFN_M02_MF_STAFF_3);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M02_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M02_MFI_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMF_STAFF(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M02_MF_STAFF_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M02_ */
} /* namespace HL7_24 */
#endif /*  __MFN_M02__24_H__ */
