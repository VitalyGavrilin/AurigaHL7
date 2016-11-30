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


#ifndef __MFN_M07__24_H__
#define __MFN_M07__24_H__

#include "../../common/Util.h"
#include "../segment/CM0.h"
#include "../segment/CM2.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"

namespace HL7_24 {

/* Internal structures/groups */
struct MFN_M07_MF_CLIN_STUDY_SCHED; /* MF_CLIN_STUDY_SCHED */

/* MF_CLIN_STUDY_SCHED */
struct MFN_M07_MF_CLIN_STUDY_SCHED : public HL7Group {
  MFN_M07_MF_CLIN_STUDY_SCHED() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { MFN_M07_MFE_4, MFN_M07_CM0_5, MFN_M07_CM2_8, FIELD_ID_MAX };

  const char* className() const { return "MFN_M07_MF_CLIN_STUDY_SCHED"; }
  MFN_M07_MF_CLIN_STUDY_SCHED* create() const {
    return new MFN_M07_MF_CLIN_STUDY_SCHED();
  }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M07.MF_CLIN_STUDY_SCHED");
    addObject<MFE>(MFN_M07_MFE_4, "MFE.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<CM0>(MFN_M07_CM0_5, "CM0.5", HL7::initialized,
		   HL7::repetition_off);
    addObject<CM2>(MFN_M07_CM2_8, "CM2.8", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MFE* getMFE_4(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M07_MFE_4);
  }
  CM0* getCM0_5(size_t index = 0) {
    return (CM0*)this->getObjectSafe(index, MFN_M07_CM0_5);
  }
  CM2* getCM2_8(size_t index = 0) {
    return (CM2*)this->getObjectSafe(index, MFN_M07_CM2_8);
  }

  /* Checker list */
  bool isMFE_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M07_MFE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCM0_5(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M07_CM0_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCM2_8(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M07_CM2_8) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M07_3 */

/* MFN_M07 */
struct MFN_M07 : public HL7Message {
  MFN_M07() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M07_MSH_1,
    MFN_M07_MFI_2,
    MFN_M07_MF_CLIN_STUDY_SCHED_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M07"; }
  MFN_M07* create() const { return new MFN_M07(); }

  /* Initialize object */
  void init() {
    setName("MFN_M07");
    addObject<MSH>(MFN_M07_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFI>(MFN_M07_MFI_2, "MFI.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFN_M07_MF_CLIN_STUDY_SCHED>(
	MFN_M07_MF_CLIN_STUDY_SCHED_3, "MFN_M07.MF_CLIN_STUDY_SCHED",
	HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M07_MSH_1);
  }
  MFI* getMFI_2(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M07_MFI_2);
  }
  MFN_M07_MF_CLIN_STUDY_SCHED* getMF_CLIN_STUDY_SCHED(size_t index = 0) {
    return (MFN_M07_MF_CLIN_STUDY_SCHED*)this->getObjectSafe(
	index, MFN_M07_MF_CLIN_STUDY_SCHED_3);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M07_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M07_MFI_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMF_CLIN_STUDY_SCHED(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M07_MF_CLIN_STUDY_SCHED_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M07_ */
} /* namespace HL7_24 */
#endif /*  __MFN_M07__24_H__ */
