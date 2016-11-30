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


#ifndef __MFN_M09__24_H__
#define __MFN_M09__24_H__

#include "../../common/Util.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"
#include "../segment/OM1.h"
#include "../segment/OM3.h"
#include "../segment/OM4.h"

namespace HL7_24 {

/* Internal structures/groups */
struct MFN_M09_MF_TEST_CAT_DETAIL;  /* MF_TEST_CAT_DETAIL */
struct MFN_M09_MF_TEST_CATEGORICAL; /* MF_TEST_CATEGORICAL */

/* MF_TEST_CAT_DETAIL */
struct MFN_M09_MF_TEST_CAT_DETAIL : public HL7Group {
  MFN_M09_MF_TEST_CAT_DETAIL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { MFN_M09_OM3_7, MFN_M09_OM4_10, FIELD_ID_MAX };

  const char* className() const { return "MFN_M09_MF_TEST_CAT_DETAIL"; }
  MFN_M09_MF_TEST_CAT_DETAIL* create() const {
    return new MFN_M09_MF_TEST_CAT_DETAIL();
  }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M09.MF_TEST_CAT_DETAIL");
    addObject<OM3>(MFN_M09_OM3_7, "OM3.7", HL7::initialized,
		   HL7::repetition_off);
    addObject<OM4>(MFN_M09_OM4_10, "OM4.10", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  OM3* getOM3_7(size_t index = 0) {
    return (OM3*)this->getObjectSafe(index, MFN_M09_OM3_7);
  }
  OM4* getOM4_10(size_t index = 0) {
    return (OM4*)this->getObjectSafe(index, MFN_M09_OM4_10);
  }

  /* Checker list */
  bool isOM3_7(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M09_OM3_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM4_10(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M09_OM4_10) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M09_6 */

/* MF_TEST_CATEGORICAL */
struct MFN_M09_MF_TEST_CATEGORICAL : public HL7Group {
  MFN_M09_MF_TEST_CATEGORICAL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M09_MFE_4,
    MFN_M09_OM1_5,
    MFN_M09_MF_TEST_CAT_DETAIL_6,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M09_MF_TEST_CATEGORICAL"; }
  MFN_M09_MF_TEST_CATEGORICAL* create() const {
    return new MFN_M09_MF_TEST_CATEGORICAL();
  }

  /* Initialize object */
  void init() {
    setName("MFN_M09.MF_TEST_CATEGORICAL");
    addObject<MFE>(MFN_M09_MFE_4, "MFE.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<OM1>(MFN_M09_OM1_5, "OM1.5", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFN_M09_MF_TEST_CAT_DETAIL>(MFN_M09_MF_TEST_CAT_DETAIL_6,
					  "MFN_M09.MF_TEST_CAT_DETAIL",
					  HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  MFE* getMFE_4(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M09_MFE_4);
  }
  OM1* getOM1_5(size_t index = 0) {
    return (OM1*)this->getObjectSafe(index, MFN_M09_OM1_5);
  }
  MFN_M09_MF_TEST_CAT_DETAIL* getMF_TEST_CAT_DETAIL(size_t index = 0) {
    return (MFN_M09_MF_TEST_CAT_DETAIL*)this->getObjectSafe(
	index, MFN_M09_MF_TEST_CAT_DETAIL_6);
  }

  /* Checker list */
  bool isMFE_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M09_MFE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM1_5(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M09_OM1_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMF_TEST_CAT_DETAIL(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M09_MF_TEST_CAT_DETAIL_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M09_3 */

/* MFN_M09 */
struct MFN_M09 : public HL7Message {
  MFN_M09() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M09_MSH_1,
    MFN_M09_MFI_2,
    MFN_M09_MF_TEST_CATEGORICAL_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M09"; }
  MFN_M09* create() const { return new MFN_M09(); }

  /* Initialize object */
  void init() {
    setName("MFN_M09");
    addObject<MSH>(MFN_M09_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFI>(MFN_M09_MFI_2, "MFI.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFN_M09_MF_TEST_CATEGORICAL>(
	MFN_M09_MF_TEST_CATEGORICAL_3, "MFN_M09.MF_TEST_CATEGORICAL",
	HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M09_MSH_1);
  }
  MFI* getMFI_2(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M09_MFI_2);
  }
  MFN_M09_MF_TEST_CATEGORICAL* getMF_TEST_CATEGORICAL(size_t index = 0) {
    return (MFN_M09_MF_TEST_CATEGORICAL*)this->getObjectSafe(
	index, MFN_M09_MF_TEST_CATEGORICAL_3);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M09_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M09_MFI_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMF_TEST_CATEGORICAL(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M09_MF_TEST_CATEGORICAL_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M09_ */
} /* namespace HL7_24 */
#endif /*  __MFN_M09__24_H__ */
