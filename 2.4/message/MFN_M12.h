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


#ifndef __MFN_M12__24_H__
#define __MFN_M12__24_H__

#include "../../common/Util.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"
#include "../segment/OM1.h"
#include "../segment/OM7.h"

namespace HL7_24 {

/* Internal structures/groups */
struct MFN_M12_MF_OBS_ATTRIBUTES; /* MF_OBS_ATTRIBUTES */

/* MF_OBS_ATTRIBUTES */
struct MFN_M12_MF_OBS_ATTRIBUTES : public HL7Group {
  MFN_M12_MF_OBS_ATTRIBUTES() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { MFN_M12_MFE_4, MFN_M12_OM1_5, MFN_M12_OM7_7, FIELD_ID_MAX };

  const char* className() const { return "MFN_M12_MF_OBS_ATTRIBUTES"; }
  MFN_M12_MF_OBS_ATTRIBUTES* create() const {
    return new MFN_M12_MF_OBS_ATTRIBUTES();
  }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M12.MF_OBS_ATTRIBUTES");
    addObject<MFE>(MFN_M12_MFE_4, "MFE.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<OM1>(MFN_M12_OM1_5, "OM1.5", HL7::initialized,
		   HL7::repetition_off);
    addObject<OM7>(MFN_M12_OM7_7, "OM7.7", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MFE* getMFE_4(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M12_MFE_4);
  }
  OM1* getOM1_5(size_t index = 0) {
    return (OM1*)this->getObjectSafe(index, MFN_M12_OM1_5);
  }
  OM7* getOM7_7(size_t index = 0) {
    return (OM7*)this->getObjectSafe(index, MFN_M12_OM7_7);
  }

  /* Checker list */
  bool isMFE_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M12_MFE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM1_5(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M12_OM1_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOM7_7(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M12_OM7_7) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M12_3 */

/* MFN_M12 */
struct MFN_M12 : public HL7Message {
  MFN_M12() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M12_MSH_1,
    MFN_M12_MFI_2,
    MFN_M12_MF_OBS_ATTRIBUTES_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M12"; }
  MFN_M12* create() const { return new MFN_M12(); }

  /* Initialize object */
  void init() {
    setName("MFN_M12");
    addObject<MSH>(MFN_M12_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFI>(MFN_M12_MFI_2, "MFI.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFN_M12_MF_OBS_ATTRIBUTES>(MFN_M12_MF_OBS_ATTRIBUTES_3,
					 "MFN_M12.MF_OBS_ATTRIBUTES",
					 HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M12_MSH_1);
  }
  MFI* getMFI_2(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M12_MFI_2);
  }
  MFN_M12_MF_OBS_ATTRIBUTES* getMF_OBS_ATTRIBUTES(size_t index = 0) {
    return (MFN_M12_MF_OBS_ATTRIBUTES*)this->getObjectSafe(
	index, MFN_M12_MF_OBS_ATTRIBUTES_3);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M12_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M12_MFI_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMF_OBS_ATTRIBUTES(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M12_MF_OBS_ATTRIBUTES_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M12_ */
} /* namespace HL7_24 */
#endif /*  __MFN_M12__24_H__ */
