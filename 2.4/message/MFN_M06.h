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


#ifndef __MFN_M06__24_H__
#define __MFN_M06__24_H__

#include "../../common/Util.h"
#include "../segment/CM0.h"
#include "../segment/CM1.h"
#include "../segment/CM2.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"

namespace HL7_24 {

/* Internal structures/groups */
struct MFN_M06_MF_PHASE_SCHED_DETAIL; /* MF_PHASE_SCHED_DETAIL */
struct MFN_M06_MF_CLIN_STUDY;	 /* MF_CLIN_STUDY */

/* MF_PHASE_SCHED_DETAIL */
struct MFN_M06_MF_PHASE_SCHED_DETAIL : public HL7Group {
  MFN_M06_MF_PHASE_SCHED_DETAIL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { MFN_M06_CM1_8, MFN_M06_CM2_11, FIELD_ID_MAX };

  const char* className() const { return "MFN_M06_MF_PHASE_SCHED_DETAIL"; }
  MFN_M06_MF_PHASE_SCHED_DETAIL* create() const {
    return new MFN_M06_MF_PHASE_SCHED_DETAIL();
  }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M06.MF_PHASE_SCHED_DETAIL");
    addObject<CM1>(MFN_M06_CM1_8, "CM1.8", HL7::initialized,
		   HL7::repetition_off);
    addObject<CM2>(MFN_M06_CM2_11, "CM2.11", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  CM1* getCM1_8(size_t index = 0) {
    return (CM1*)this->getObjectSafe(index, MFN_M06_CM1_8);
  }
  CM2* getCM2_11(size_t index = 0) {
    return (CM2*)this->getObjectSafe(index, MFN_M06_CM2_11);
  }

  /* Checker list */
  bool isCM1_8(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M06_CM1_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCM2_11(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M06_CM2_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M06_6 */

/* MF_CLIN_STUDY */
struct MFN_M06_MF_CLIN_STUDY : public HL7Group {
  MFN_M06_MF_CLIN_STUDY() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M06_MFE_4,
    MFN_M06_CM0_5,
    MFN_M06_MF_PHASE_SCHED_DETAIL_6,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M06_MF_CLIN_STUDY"; }
  MFN_M06_MF_CLIN_STUDY* create() const { return new MFN_M06_MF_CLIN_STUDY(); }

  /* Initialize object */
  void init() {
    setName("MFN_M06.MF_CLIN_STUDY");
    addObject<MFE>(MFN_M06_MFE_4, "MFE.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<CM0>(MFN_M06_CM0_5, "CM0.5", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFN_M06_MF_PHASE_SCHED_DETAIL>(MFN_M06_MF_PHASE_SCHED_DETAIL_6,
					     "MFN_M06.MF_PHASE_SCHED_DETAIL",
					     HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  MFE* getMFE_4(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M06_MFE_4);
  }
  CM0* getCM0_5(size_t index = 0) {
    return (CM0*)this->getObjectSafe(index, MFN_M06_CM0_5);
  }
  MFN_M06_MF_PHASE_SCHED_DETAIL* getMF_PHASE_SCHED_DETAIL(size_t index = 0) {
    return (MFN_M06_MF_PHASE_SCHED_DETAIL*)this->getObjectSafe(
	index, MFN_M06_MF_PHASE_SCHED_DETAIL_6);
  }

  /* Checker list */
  bool isMFE_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M06_MFE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCM0_5(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M06_CM0_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMF_PHASE_SCHED_DETAIL(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M06_MF_PHASE_SCHED_DETAIL_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M06_3 */

/* MFN_M06 */
struct MFN_M06 : public HL7Message {
  MFN_M06() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M06_MSH_1,
    MFN_M06_MFI_2,
    MFN_M06_MF_CLIN_STUDY_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M06"; }
  MFN_M06* create() const { return new MFN_M06(); }

  /* Initialize object */
  void init() {
    setName("MFN_M06");
    addObject<MSH>(MFN_M06_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFI>(MFN_M06_MFI_2, "MFI.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFN_M06_MF_CLIN_STUDY>(MFN_M06_MF_CLIN_STUDY_3,
				     "MFN_M06.MF_CLIN_STUDY", HL7::initialized,
				     HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M06_MSH_1);
  }
  MFI* getMFI_2(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M06_MFI_2);
  }
  MFN_M06_MF_CLIN_STUDY* getMF_CLIN_STUDY(size_t index = 0) {
    return (MFN_M06_MF_CLIN_STUDY*)this->getObjectSafe(index,
						       MFN_M06_MF_CLIN_STUDY_3);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M06_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M06_MFI_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMF_CLIN_STUDY(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M06_MF_CLIN_STUDY_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M06_ */
} /* namespace HL7_24 */
#endif /*  __MFN_M06__24_H__ */
