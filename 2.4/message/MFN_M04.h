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


#ifndef __MFN_M04__24_H__
#define __MFN_M04__24_H__

#include "../../common/Util.h"
#include "../segment/CDM.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"
#include "../segment/PRC.h"

namespace HL7_24 {

/* Internal structures/groups */
struct MFN_M04_MF_CDM; /* MF_CDM */

/* MF_CDM */
struct MFN_M04_MF_CDM : public HL7Group {
  MFN_M04_MF_CDM() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { MFN_M04_MFE_4, MFN_M04_CDM_5, MFN_M04_PRC_8, FIELD_ID_MAX };

  const char* className() const { return "MFN_M04_MF_CDM"; }
  MFN_M04_MF_CDM* create() const { return new MFN_M04_MF_CDM(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M04.MF_CDM");
    addObject<MFE>(MFN_M04_MFE_4, "MFE.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<CDM>(MFN_M04_CDM_5, "CDM.5", HL7::initialized,
		   HL7::repetition_off);
    addObject<PRC>(MFN_M04_PRC_8, "PRC.8", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MFE* getMFE_4(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M04_MFE_4);
  }
  CDM* getCDM_5(size_t index = 0) {
    return (CDM*)this->getObjectSafe(index, MFN_M04_CDM_5);
  }
  PRC* getPRC_8(size_t index = 0) {
    return (PRC*)this->getObjectSafe(index, MFN_M04_PRC_8);
  }

  /* Checker list */
  bool isMFE_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_MFE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCDM_5(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_CDM_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRC_8(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_PRC_8) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M04_3 */

/* MFN_M04 */
struct MFN_M04 : public HL7Message {
  MFN_M04() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M04_MSH_1,
    MFN_M04_MFI_2,
    MFN_M04_MF_CDM_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M04"; }
  MFN_M04* create() const { return new MFN_M04(); }

  /* Initialize object */
  void init() {
    setName("MFN_M04");
    addObject<MSH>(MFN_M04_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFI>(MFN_M04_MFI_2, "MFI.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFN_M04_MF_CDM>(MFN_M04_MF_CDM_3, "MFN_M04.MF_CDM",
			      HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M04_MSH_1);
  }
  MFI* getMFI_2(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M04_MFI_2);
  }
  MFN_M04_MF_CDM* getMF_CDM(size_t index = 0) {
    return (MFN_M04_MF_CDM*)this->getObjectSafe(index, MFN_M04_MF_CDM_3);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_MFI_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMF_CDM(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_MF_CDM_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M04_ */
} /* namespace HL7_24 */
#endif /*  __MFN_M04__24_H__ */
