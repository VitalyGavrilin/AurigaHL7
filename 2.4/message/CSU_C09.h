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


#ifndef __CSU_C09__24_H__
#define __CSU_C09__24_H__

#include "../../common/Util.h"
#include "../segment/CSP.h"
#include "../segment/CSR.h"
#include "../segment/CSS.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/RXA.h"
#include "../segment/RXR.h"

namespace HL7_24 {

/* Internal structures/groups */
struct CSU_C09_VISIT;		  /* VISIT */
struct CSU_C09_STUDY_OBSERVATION; /* STUDY_OBSERVATION */
struct CSU_C09_RX_ADMIN;	  /* RX_ADMIN */
struct CSU_C09_STUDY_PHARM;       /* STUDY_PHARM */
struct CSU_C09_STUDY_SCHEDULE;    /* STUDY_SCHEDULE */
struct CSU_C09_STUDY_PHASE;       /* STUDY_PHASE */
struct CSU_C09_PATIENT;		  /* PATIENT */

/* VISIT */
struct CSU_C09_VISIT : public HL7Group {
  CSU_C09_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { CSU_C09_PV1_13, CSU_C09_PV2_15, FIELD_ID_MAX };

  const char* className() const { return "CSU_C09_VISIT"; }
  CSU_C09_VISIT* create() const { return new CSU_C09_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("CSU_C09.VISIT");
    addObject<PV1>(CSU_C09_PV1_13, "PV1.13", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(CSU_C09_PV2_15, "PV2.15", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  PV1* getPV1_13(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, CSU_C09_PV1_13);
  }
  PV2* getPV2_15(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, CSU_C09_PV2_15);
  }

  /* Checker list */
  bool isPV1_13(size_t index = 0) {
    try {
      return this->getObject(index, CSU_C09_PV1_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_15(size_t index = 0) {
    try {
      return this->getObject(index, CSU_C09_PV2_15) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* CSU_C09_12 */

/* STUDY_OBSERVATION */
struct CSU_C09_STUDY_OBSERVATION : public HL7Group {
  CSU_C09_STUDY_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    CSU_C09_ORC_29,
    CSU_C09_OBR_31,
    CSU_C09_OBX_33,
    FIELD_ID_MAX
  };

  const char* className() const { return "CSU_C09_STUDY_OBSERVATION"; }
  CSU_C09_STUDY_OBSERVATION* create() const {
    return new CSU_C09_STUDY_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("CSU_C09.STUDY_OBSERVATION");
    addObject<ORC>(CSU_C09_ORC_29, "ORC.29", HL7::optional,
		   HL7::repetition_off);
    addObject<OBR>(CSU_C09_OBR_31, "OBR.31", HL7::initialized,
		   HL7::repetition_off);
    addObject<OBX>(CSU_C09_OBX_33, "OBX.33", HL7::initialized,
		   HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_29(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, CSU_C09_ORC_29);
  }
  OBR* getOBR_31(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, CSU_C09_OBR_31);
  }
  OBX* getOBX_33(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CSU_C09_OBX_33);
  }

  /* Checker list */
  bool isORC_29(size_t index = 0) {
    try {
      return this->getObject(index, CSU_C09_ORC_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_31(size_t index = 0) {
    try {
      return this->getObject(index, CSU_C09_OBR_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_33(size_t index = 0) {
    try {
      return this->getObject(index, CSU_C09_OBX_33) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* CSU_C09_27 */

/* RX_ADMIN */
struct CSU_C09_RX_ADMIN : public HL7Group {
  CSU_C09_RX_ADMIN() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { CSU_C09_RXA_41, CSU_C09_RXR_42, FIELD_ID_MAX };

  const char* className() const { return "CSU_C09_RX_ADMIN"; }
  CSU_C09_RX_ADMIN* create() const { return new CSU_C09_RX_ADMIN(); }

  /* Initialize object */
  void init() {
    setName("CSU_C09.RX_ADMIN");
    addObject<RXA>(CSU_C09_RXA_41, "RXA.41", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXR>(CSU_C09_RXR_42, "RXR.42", HL7::initialized,
		   HL7::repetition_off);
  }

  /* Getters list */
  RXA* getRXA_41(size_t index = 0) {
    return (RXA*)this->getObjectSafe(index, CSU_C09_RXA_41);
  }
  RXR* getRXR_42(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, CSU_C09_RXR_42);
  }

  /* Checker list */
  bool isRXA_41(size_t index = 0) {
    try {
      return this->getObject(index, CSU_C09_RXA_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_42(size_t index = 0) {
    try {
      return this->getObject(index, CSU_C09_RXR_42) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* CSU_C09_40 */

/* STUDY_PHARM */
struct CSU_C09_STUDY_PHARM : public HL7Group {
  CSU_C09_STUDY_PHARM() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { CSU_C09_ORC_38, CSU_C09_RX_ADMIN_40, FIELD_ID_MAX };

  const char* className() const { return "CSU_C09_STUDY_PHARM"; }
  CSU_C09_STUDY_PHARM* create() const { return new CSU_C09_STUDY_PHARM(); }

  /* Initialize object */
  void init() {
    setName("CSU_C09.STUDY_PHARM");
    addObject<ORC>(CSU_C09_ORC_38, "ORC.38", HL7::optional,
		   HL7::repetition_off);
    addObject<CSU_C09_RX_ADMIN>(CSU_C09_RX_ADMIN_40, "CSU_C09.RX_ADMIN",
				HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_38(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, CSU_C09_ORC_38);
  }
  CSU_C09_RX_ADMIN* getRX_ADMIN(size_t index = 0) {
    return (CSU_C09_RX_ADMIN*)this->getObjectSafe(index, CSU_C09_RX_ADMIN_40);
  }

  /* Checker list */
  bool isORC_38(size_t index = 0) {
    try {
      return this->getObject(index, CSU_C09_ORC_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRX_ADMIN(size_t index = 0) {
    try {
      return this->getObject(index, CSU_C09_RX_ADMIN_40) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* CSU_C09_36 */

/* STUDY_SCHEDULE */
struct CSU_C09_STUDY_SCHEDULE : public HL7Group {
  CSU_C09_STUDY_SCHEDULE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    CSU_C09_CSS_25,
    CSU_C09_STUDY_OBSERVATION_27,
    CSU_C09_STUDY_PHARM_36,
    FIELD_ID_MAX
  };

  const char* className() const { return "CSU_C09_STUDY_SCHEDULE"; }
  CSU_C09_STUDY_SCHEDULE* create() const {
    return new CSU_C09_STUDY_SCHEDULE();
  }

  /* Initialize object */
  void init() {
    setName("CSU_C09.STUDY_SCHEDULE");
    addObject<CSS>(CSU_C09_CSS_25, "CSS.25", HL7::optional,
		   HL7::repetition_off);
    addObject<CSU_C09_STUDY_OBSERVATION>(CSU_C09_STUDY_OBSERVATION_27,
					 "CSU_C09.STUDY_OBSERVATION",
					 HL7::initialized, HL7::repetition_on);
    addObject<CSU_C09_STUDY_PHARM>(CSU_C09_STUDY_PHARM_36,
				   "CSU_C09.STUDY_PHARM", HL7::initialized,
				   HL7::repetition_on);
  }

  /* Getters list */
  CSS* getCSS_25(size_t index = 0) {
    return (CSS*)this->getObjectSafe(index, CSU_C09_CSS_25);
  }
  CSU_C09_STUDY_OBSERVATION* getSTUDY_OBSERVATION(size_t index = 0) {
    return (CSU_C09_STUDY_OBSERVATION*)this->getObjectSafe(
	index, CSU_C09_STUDY_OBSERVATION_27);
  }
  CSU_C09_STUDY_PHARM* getSTUDY_PHARM(size_t index = 0) {
    return (CSU_C09_STUDY_PHARM*)this->getObjectSafe(index,
						     CSU_C09_STUDY_PHARM_36);
  }

  /* Checker list */
  bool isCSS_25(size_t index = 0) {
    try {
      return this->getObject(index, CSU_C09_CSS_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSTUDY_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, CSU_C09_STUDY_OBSERVATION_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSTUDY_PHARM(size_t index = 0) {
    try {
      return this->getObject(index, CSU_C09_STUDY_PHARM_36) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* CSU_C09_23 */

/* STUDY_PHASE */
struct CSU_C09_STUDY_PHASE : public HL7Group {
  CSU_C09_STUDY_PHASE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { CSU_C09_CSP_21, CSU_C09_STUDY_SCHEDULE_23, FIELD_ID_MAX };

  const char* className() const { return "CSU_C09_STUDY_PHASE"; }
  CSU_C09_STUDY_PHASE* create() const { return new CSU_C09_STUDY_PHASE(); }

  /* Initialize object */
  void init() {
    setName("CSU_C09.STUDY_PHASE");
    addObject<CSP>(CSU_C09_CSP_21, "CSP.21", HL7::optional, HL7::repetition_on);
    addObject<CSU_C09_STUDY_SCHEDULE>(CSU_C09_STUDY_SCHEDULE_23,
				      "CSU_C09.STUDY_SCHEDULE",
				      HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  CSP* getCSP_21(size_t index = 0) {
    return (CSP*)this->getObjectSafe(index, CSU_C09_CSP_21);
  }
  CSU_C09_STUDY_SCHEDULE* getSTUDY_SCHEDULE(size_t index = 0) {
    return (CSU_C09_STUDY_SCHEDULE*)this->getObjectSafe(
	index, CSU_C09_STUDY_SCHEDULE_23);
  }

  /* Checker list */
  bool isCSP_21(size_t index = 0) {
    try {
      return this->getObject(index, CSU_C09_CSP_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSTUDY_SCHEDULE(size_t index = 0) {
    try {
      return this->getObject(index, CSU_C09_STUDY_SCHEDULE_23) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* CSU_C09_19 */

/* PATIENT */
struct CSU_C09_PATIENT : public HL7Group {
  CSU_C09_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    CSU_C09_PID_3,
    CSU_C09_PD1_5,
    CSU_C09_NTE_9,
    CSU_C09_VISIT_12,
    CSU_C09_CSR_18,
    CSU_C09_STUDY_PHASE_19,
    FIELD_ID_MAX
  };

  const char* className() const { return "CSU_C09_PATIENT"; }
  CSU_C09_PATIENT* create() const { return new CSU_C09_PATIENT(); }

  /* Initialize object */
  void init() {
    setName("CSU_C09.PATIENT");
    addObject<PID>(CSU_C09_PID_3, "PID.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(CSU_C09_PD1_5, "PD1.5", HL7::optional, HL7::repetition_off);
    addObject<NTE>(CSU_C09_NTE_9, "NTE.9", HL7::optional, HL7::repetition_on);
    addObject<CSU_C09_VISIT>(CSU_C09_VISIT_12, "CSU_C09.VISIT", HL7::optional,
			     HL7::repetition_off);
    addObject<CSR>(CSU_C09_CSR_18, "CSR.18", HL7::initialized,
		   HL7::repetition_off);
    addObject<CSU_C09_STUDY_PHASE>(CSU_C09_STUDY_PHASE_19,
				   "CSU_C09.STUDY_PHASE", HL7::initialized,
				   HL7::repetition_on);
  }

  /* Getters list */
  PID* getPID_3(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, CSU_C09_PID_3);
  }
  PD1* getPD1_5(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, CSU_C09_PD1_5);
  }
  NTE* getNTE_9(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, CSU_C09_NTE_9);
  }
  CSU_C09_VISIT* getVISIT(size_t index = 0) {
    return (CSU_C09_VISIT*)this->getObjectSafe(index, CSU_C09_VISIT_12);
  }
  CSR* getCSR_18(size_t index = 0) {
    return (CSR*)this->getObjectSafe(index, CSU_C09_CSR_18);
  }
  CSU_C09_STUDY_PHASE* getSTUDY_PHASE(size_t index = 0) {
    return (CSU_C09_STUDY_PHASE*)this->getObjectSafe(index,
						     CSU_C09_STUDY_PHASE_19);
  }

  /* Checker list */
  bool isPID_3(size_t index = 0) {
    try {
      return this->getObject(index, CSU_C09_PID_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_5(size_t index = 0) {
    try {
      return this->getObject(index, CSU_C09_PD1_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_9(size_t index = 0) {
    try {
      return this->getObject(index, CSU_C09_NTE_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVISIT(size_t index = 0) {
    try {
      return this->getObject(index, CSU_C09_VISIT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCSR_18(size_t index = 0) {
    try {
      return this->getObject(index, CSU_C09_CSR_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSTUDY_PHASE(size_t index = 0) {
    try {
      return this->getObject(index, CSU_C09_STUDY_PHASE_19) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* CSU_C09_2 */

/* CSU_C09 */
struct CSU_C09 : public HL7Message {
  CSU_C09() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { CSU_C09_MSH_1, CSU_C09_PATIENT_2, FIELD_ID_MAX };

  const char* className() const { return "CSU_C09"; }
  CSU_C09* create() const { return new CSU_C09(); }

  /* Initialize object */
  void init() {
    setName("CSU_C09");
    addObject<MSH>(CSU_C09_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<CSU_C09_PATIENT>(CSU_C09_PATIENT_2, "CSU_C09.PATIENT",
			       HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, CSU_C09_MSH_1);
  }
  CSU_C09_PATIENT* getPATIENT(size_t index = 0) {
    return (CSU_C09_PATIENT*)this->getObjectSafe(index, CSU_C09_PATIENT_2);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, CSU_C09_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, CSU_C09_PATIENT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* CSU_C09_ */
} /* namespace HL7_24 */
#endif /*  __CSU_C09__24_H__ */
