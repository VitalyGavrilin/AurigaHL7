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


#ifndef __MFN_M03__24_H__
#define __MFN_M03__24_H__

#include "../../common/Util.h"
#include "../segment/Hxx.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"
#include "../segment/OM1.h"

namespace HL7_24 {

/* Internal structures/groups */
struct MFN_M03_MF_TEST; /* MF_TEST */

/* MF_TEST */
struct MFN_M03_MF_TEST : public HL7Group {
  MFN_M03_MF_TEST() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { MFN_M03_MFE_4, MFN_M03_OM1_5, MFN_M03_Hxx_6, FIELD_ID_MAX };

  const char* className() const { return "MFN_M03_MF_TEST"; }
  MFN_M03_MF_TEST* create() const { return new MFN_M03_MF_TEST(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M03.MF_TEST");
    addObject<MFE>(MFN_M03_MFE_4, "MFE.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<OM1>(MFN_M03_OM1_5, "OM1.5", HL7::initialized,
		   HL7::repetition_off);
    addObject<Hxx>(MFN_M03_Hxx_6, "Hxx.6", HL7::initialized,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  MFE* getMFE_4(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M03_MFE_4);
  }
  OM1* getOM1_5(size_t index = 0) {
    return (OM1*)this->getObjectSafe(index, MFN_M03_OM1_5);
  }
  Hxx* getHxx_6(size_t index = 0) {
    return (Hxx*)this->getObjectSafe(index, MFN_M03_Hxx_6);
  }

  /* Checker list */
  bool isMFE_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M03_MFE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM1_5(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M03_OM1_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isHxx_6(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M03_Hxx_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M03_3 */

/* MFN_M03 */
struct MFN_M03 : public HL7Message {
  MFN_M03() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M03_MSH_1,
    MFN_M03_MFI_2,
    MFN_M03_MF_TEST_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M03"; }
  MFN_M03* create() const { return new MFN_M03(); }

  /* Initialize object */
  void init() {
    setName("MFN_M03");
    addObject<MSH>(MFN_M03_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFI>(MFN_M03_MFI_2, "MFI.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFN_M03_MF_TEST>(MFN_M03_MF_TEST_3, "MFN_M03.MF_TEST",
			       HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M03_MSH_1);
  }
  MFI* getMFI_2(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M03_MFI_2);
  }
  MFN_M03_MF_TEST* getMF_TEST(size_t index = 0) {
    return (MFN_M03_MF_TEST*)this->getObjectSafe(index, MFN_M03_MF_TEST_3);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M03_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M03_MFI_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMF_TEST(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M03_MF_TEST_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M03_ */
} /* namespace HL7_24 */
#endif /*  __MFN_M03__24_H__ */
