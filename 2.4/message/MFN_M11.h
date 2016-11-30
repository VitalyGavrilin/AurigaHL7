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


#ifndef __MFN_M11__24_H__
#define __MFN_M11__24_H__

#include "../../common/Util.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"
#include "../segment/OM1.h"
#include "../segment/OM2.h"
#include "../segment/OM6.h"

namespace HL7_24 {

/* Internal structures/groups */
struct MFN_M11_MF_TEST_CALC_DETAIL; /* MF_TEST_CALC_DETAIL */
struct MFN_M11_MF_TEST_CALCULATED;  /* MF_TEST_CALCULATED */

/* MF_TEST_CALC_DETAIL */
struct MFN_M11_MF_TEST_CALC_DETAIL : public HL7Group {
  MFN_M11_MF_TEST_CALC_DETAIL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { MFN_M11_OM6_7, MFN_M11_OM2_8, FIELD_ID_MAX };

  const char* className() const { return "MFN_M11_MF_TEST_CALC_DETAIL"; }
  MFN_M11_MF_TEST_CALC_DETAIL* create() const {
    return new MFN_M11_MF_TEST_CALC_DETAIL();
  }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M11.MF_TEST_CALC_DETAIL");
    addObject<OM6>(MFN_M11_OM6_7, "OM6.7", HL7::initialized,
		   HL7::repetition_off);
    addObject<OM2>(MFN_M11_OM2_8, "OM2.8", HL7::initialized,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  OM6* getOM6_7(size_t index = 0) {
    return (OM6*)this->getObjectSafe(index, MFN_M11_OM6_7);
  }
  OM2* getOM2_8(size_t index = 0) {
    return (OM2*)this->getObjectSafe(index, MFN_M11_OM2_8);
  }

  /* Checker list */
  bool isOM6_7(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_OM6_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM2_8(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_OM2_8) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M11_6 */

/* MF_TEST_CALCULATED */
struct MFN_M11_MF_TEST_CALCULATED : public HL7Group {
  MFN_M11_MF_TEST_CALCULATED() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M11_MFE_4,
    MFN_M11_OM1_5,
    MFN_M11_MF_TEST_CALC_DETAIL_6,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M11_MF_TEST_CALCULATED"; }
  MFN_M11_MF_TEST_CALCULATED* create() const {
    return new MFN_M11_MF_TEST_CALCULATED();
  }

  /* Initialize object */
  void init() {
    setName("MFN_M11.MF_TEST_CALCULATED");
    addObject<MFE>(MFN_M11_MFE_4, "MFE.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<OM1>(MFN_M11_OM1_5, "OM1.5", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFN_M11_MF_TEST_CALC_DETAIL>(MFN_M11_MF_TEST_CALC_DETAIL_6,
					   "MFN_M11.MF_TEST_CALC_DETAIL",
					   HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  MFE* getMFE_4(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M11_MFE_4);
  }
  OM1* getOM1_5(size_t index = 0) {
    return (OM1*)this->getObjectSafe(index, MFN_M11_OM1_5);
  }
  MFN_M11_MF_TEST_CALC_DETAIL* getMF_TEST_CALC_DETAIL(size_t index = 0) {
    return (MFN_M11_MF_TEST_CALC_DETAIL*)this->getObjectSafe(
	index, MFN_M11_MF_TEST_CALC_DETAIL_6);
  }

  /* Checker list */
  bool isMFE_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_MFE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM1_5(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_OM1_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMF_TEST_CALC_DETAIL(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_MF_TEST_CALC_DETAIL_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M11_3 */

/* MFN_M11 */
struct MFN_M11 : public HL7Message {
  MFN_M11() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M11_MSH_1,
    MFN_M11_MFI_2,
    MFN_M11_MF_TEST_CALCULATED_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M11"; }
  MFN_M11* create() const { return new MFN_M11(); }

  /* Initialize object */
  void init() {
    setName("MFN_M11");
    addObject<MSH>(MFN_M11_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFI>(MFN_M11_MFI_2, "MFI.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFN_M11_MF_TEST_CALCULATED>(MFN_M11_MF_TEST_CALCULATED_3,
					  "MFN_M11.MF_TEST_CALCULATED",
					  HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M11_MSH_1);
  }
  MFI* getMFI_2(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M11_MFI_2);
  }
  MFN_M11_MF_TEST_CALCULATED* getMF_TEST_CALCULATED(size_t index = 0) {
    return (MFN_M11_MF_TEST_CALCULATED*)this->getObjectSafe(
	index, MFN_M11_MF_TEST_CALCULATED_3);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_MFI_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMF_TEST_CALCULATED(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M11_MF_TEST_CALCULATED_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M11_ */
} /* namespace HL7_24 */
#endif /*  __MFN_M11__24_H__ */
