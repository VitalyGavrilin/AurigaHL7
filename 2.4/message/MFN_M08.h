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


#ifndef __MFN_M08__24_H__
#define __MFN_M08__24_H__

#include "../../common/Util.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"
#include "../segment/OM1.h"
#include "../segment/OM2.h"
#include "../segment/OM3.h"
#include "../segment/OM4.h"

namespace HL7_24 {

/* Internal structures/groups */
struct MFN_M08_MF_TEST_NUMERIC; /* MF_TEST_NUMERIC */

/* MF_TEST_NUMERIC */
struct MFN_M08_MF_TEST_NUMERIC : public HL7Group {
  MFN_M08_MF_TEST_NUMERIC() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M08_MFE_4,
    MFN_M08_OM1_5,
    MFN_M08_OM2_7,
    MFN_M08_OM3_10,
    MFN_M08_OM4_13,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M08_MF_TEST_NUMERIC"; }
  MFN_M08_MF_TEST_NUMERIC* create() const {
    return new MFN_M08_MF_TEST_NUMERIC();
  }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M08.MF_TEST_NUMERIC");
    addObject<MFE>(MFN_M08_MFE_4, "MFE.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<OM1>(MFN_M08_OM1_5, "OM1.5", HL7::initialized,
		   HL7::repetition_off);
    addObject<OM2>(MFN_M08_OM2_7, "OM2.7", HL7::optional, HL7::repetition_off);
    addObject<OM3>(MFN_M08_OM3_10, "OM3.10", HL7::optional,
		   HL7::repetition_off);
    addObject<OM4>(MFN_M08_OM4_13, "OM4.13", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  MFE* getMFE_4(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M08_MFE_4);
  }
  OM1* getOM1_5(size_t index = 0) {
    return (OM1*)this->getObjectSafe(index, MFN_M08_OM1_5);
  }
  OM2* getOM2_7(size_t index = 0) {
    return (OM2*)this->getObjectSafe(index, MFN_M08_OM2_7);
  }
  OM3* getOM3_10(size_t index = 0) {
    return (OM3*)this->getObjectSafe(index, MFN_M08_OM3_10);
  }
  OM4* getOM4_13(size_t index = 0) {
    return (OM4*)this->getObjectSafe(index, MFN_M08_OM4_13);
  }

  /* Checker list */
  bool isMFE_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M08_MFE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM1_5(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M08_OM1_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM2_7(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M08_OM2_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM3_10(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M08_OM3_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM4_13(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M08_OM4_13) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M08_3 */

/* MFN_M08 */
struct MFN_M08 : public HL7Message {
  MFN_M08() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M08_MSH_1,
    MFN_M08_MFI_2,
    MFN_M08_MF_TEST_NUMERIC_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M08"; }
  MFN_M08* create() const { return new MFN_M08(); }

  /* Initialize object */
  void init() {
    setName("MFN_M08");
    addObject<MSH>(MFN_M08_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFI>(MFN_M08_MFI_2, "MFI.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFN_M08_MF_TEST_NUMERIC>(MFN_M08_MF_TEST_NUMERIC_3,
				       "MFN_M08.MF_TEST_NUMERIC",
				       HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M08_MSH_1);
  }
  MFI* getMFI_2(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M08_MFI_2);
  }
  MFN_M08_MF_TEST_NUMERIC* getMF_TEST_NUMERIC(size_t index = 0) {
    return (MFN_M08_MF_TEST_NUMERIC*)this->getObjectSafe(
	index, MFN_M08_MF_TEST_NUMERIC_3);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M08_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M08_MFI_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMF_TEST_NUMERIC(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M08_MF_TEST_NUMERIC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M08_ */
} /* namespace HL7_24 */
#endif /*  __MFN_M08__24_H__ */
