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


#ifndef __PPP_PCB__24_H__
#define __PPP_PCB__24_H__

#include "../../common/Util.h"
#include "../segment/GOL.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/PRB.h"
#include "../segment/PTH.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/ROL.h"
#include "../segment/RXO.h"
#include "../segment/VAR.h"

namespace HL7_24 {

/* Internal structures/groups */
struct PPP_PCB_PATIENT_VISIT;       /* PATIENT_VISIT */
struct PPP_PCB_PATHWAY_ROLE;	/* PATHWAY_ROLE */
struct PPP_PCB_PROBLEM_ROLE;	/* PROBLEM_ROLE */
struct PPP_PCB_PROBLEM_OBSERVATION; /* PROBLEM_OBSERVATION */
struct PPP_PCB_GOAL_ROLE;	   /* GOAL_ROLE */
struct PPP_PCB_GOAL_OBSERVATION;    /* GOAL_OBSERVATION */
struct PPP_PCB_GOAL;		    /* GOAL */
struct PPP_PCB_CHOICE;		    /* CHOICE */
struct PPP_PCB_ORDER_OBSERVATION;   /* ORDER_OBSERVATION */
struct PPP_PCB_ORDER_DETAIL;	/* ORDER_DETAIL */
struct PPP_PCB_ORDER;		    /* ORDER */
struct PPP_PCB_PROBLEM;		    /* PROBLEM */
struct PPP_PCB_PATHWAY;		    /* PATHWAY */

/* PATIENT_VISIT */
struct PPP_PCB_PATIENT_VISIT : public HL7Group {
  PPP_PCB_PATIENT_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPP_PCB_PV1_4, PPP_PCB_PV2_6, FIELD_ID_MAX };

  const char* className() const { return "PPP_PCB_PATIENT_VISIT"; }
  PPP_PCB_PATIENT_VISIT* create() const { return new PPP_PCB_PATIENT_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("PPP_PCB.PATIENT_VISIT");
    addObject<PV1>(PPP_PCB_PV1_4, "PV1.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(PPP_PCB_PV2_6, "PV2.6", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  PV1* getPV1_4(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, PPP_PCB_PV1_4);
  }
  PV2* getPV2_6(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, PPP_PCB_PV2_6);
  }

  /* Checker list */
  bool isPV1_4(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PV1_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_6(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PV2_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPP_PCB_3 */

/* PATHWAY_ROLE */
struct PPP_PCB_PATHWAY_ROLE : public HL7Group {
  PPP_PCB_PATHWAY_ROLE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPP_PCB_ROL_23, PPP_PCB_VAR_26, FIELD_ID_MAX };

  const char* className() const { return "PPP_PCB_PATHWAY_ROLE"; }
  PPP_PCB_PATHWAY_ROLE* create() const { return new PPP_PCB_PATHWAY_ROLE(); }

  /* Initialize object */
  void init() {
    setName("PPP_PCB.PATHWAY_ROLE");
    addObject<ROL>(PPP_PCB_ROL_23, "ROL.23", HL7::initialized,
		   HL7::repetition_off);
    addObject<VAR>(PPP_PCB_VAR_26, "VAR.26", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ROL* getROL_23(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPP_PCB_ROL_23);
  }
  VAR* getVAR_26(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPP_PCB_VAR_26);
  }

  /* Checker list */
  bool isROL_23(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_ROL_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_26(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_VAR_26) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPP_PCB_21 */

/* PROBLEM_ROLE */
struct PPP_PCB_PROBLEM_ROLE : public HL7Group {
  PPP_PCB_PROBLEM_ROLE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPP_PCB_ROL_46, PPP_PCB_VAR_49, FIELD_ID_MAX };

  const char* className() const { return "PPP_PCB_PROBLEM_ROLE"; }
  PPP_PCB_PROBLEM_ROLE* create() const { return new PPP_PCB_PROBLEM_ROLE(); }

  /* Initialize object */
  void init() {
    setName("PPP_PCB.PROBLEM_ROLE");
    addObject<ROL>(PPP_PCB_ROL_46, "ROL.46", HL7::initialized,
		   HL7::repetition_off);
    addObject<VAR>(PPP_PCB_VAR_49, "VAR.49", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ROL* getROL_46(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPP_PCB_ROL_46);
  }
  VAR* getVAR_49(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPP_PCB_VAR_49);
  }

  /* Checker list */
  bool isROL_46(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_ROL_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_49(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_VAR_49) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPP_PCB_44 */

/* PROBLEM_OBSERVATION */
struct PPP_PCB_PROBLEM_OBSERVATION : public HL7Group {
  PPP_PCB_PROBLEM_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPP_PCB_OBX_56, PPP_PCB_NTE_59, FIELD_ID_MAX };

  const char* className() const { return "PPP_PCB_PROBLEM_OBSERVATION"; }
  PPP_PCB_PROBLEM_OBSERVATION* create() const {
    return new PPP_PCB_PROBLEM_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("PPP_PCB.PROBLEM_OBSERVATION");
    addObject<OBX>(PPP_PCB_OBX_56, "OBX.56", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPP_PCB_NTE_59, "NTE.59", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_56(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPP_PCB_OBX_56);
  }
  NTE* getNTE_59(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPP_PCB_NTE_59);
  }

  /* Checker list */
  bool isOBX_56(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_OBX_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_59(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_NTE_59) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPP_PCB_54 */

/* GOAL_ROLE */
struct PPP_PCB_GOAL_ROLE : public HL7Group {
  PPP_PCB_GOAL_ROLE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPP_PCB_ROL_79, PPP_PCB_VAR_82, FIELD_ID_MAX };

  const char* className() const { return "PPP_PCB_GOAL_ROLE"; }
  PPP_PCB_GOAL_ROLE* create() const { return new PPP_PCB_GOAL_ROLE(); }

  /* Initialize object */
  void init() {
    setName("PPP_PCB.GOAL_ROLE");
    addObject<ROL>(PPP_PCB_ROL_79, "ROL.79", HL7::initialized,
		   HL7::repetition_off);
    addObject<VAR>(PPP_PCB_VAR_82, "VAR.82", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ROL* getROL_79(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPP_PCB_ROL_79);
  }
  VAR* getVAR_82(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPP_PCB_VAR_82);
  }

  /* Checker list */
  bool isROL_79(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_ROL_79) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_82(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_VAR_82) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPP_PCB_77 */

/* GOAL_OBSERVATION */
struct PPP_PCB_GOAL_OBSERVATION : public HL7Group {
  PPP_PCB_GOAL_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPP_PCB_OBX_89, PPP_PCB_NTE_92, FIELD_ID_MAX };

  const char* className() const { return "PPP_PCB_GOAL_OBSERVATION"; }
  PPP_PCB_GOAL_OBSERVATION* create() const {
    return new PPP_PCB_GOAL_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("PPP_PCB.GOAL_OBSERVATION");
    addObject<OBX>(PPP_PCB_OBX_89, "OBX.89", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPP_PCB_NTE_92, "NTE.92", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_89(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPP_PCB_OBX_89);
  }
  NTE* getNTE_92(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPP_PCB_NTE_92);
  }

  /* Checker list */
  bool isOBX_89(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_OBX_89) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_92(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_NTE_92) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPP_PCB_87 */

/* GOAL */
struct PPP_PCB_GOAL : public HL7Group {
  PPP_PCB_GOAL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPP_PCB_GOL_66,
    PPP_PCB_NTE_69,
    PPP_PCB_VAR_74,
    PPP_PCB_GOAL_ROLE_77,
    PPP_PCB_GOAL_OBSERVATION_87,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPP_PCB_GOAL"; }
  PPP_PCB_GOAL* create() const { return new PPP_PCB_GOAL(); }

  /* Initialize object */
  void init() {
    setName("PPP_PCB.GOAL");
    addObject<GOL>(PPP_PCB_GOL_66, "GOL.66", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPP_PCB_NTE_69, "NTE.69", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PPP_PCB_VAR_74, "VAR.74", HL7::optional, HL7::repetition_on);
    addObject<PPP_PCB_GOAL_ROLE>(PPP_PCB_GOAL_ROLE_77, "PPP_PCB.GOAL_ROLE",
				 HL7::optional, HL7::repetition_on);
    addObject<PPP_PCB_GOAL_OBSERVATION>(PPP_PCB_GOAL_OBSERVATION_87,
					"PPP_PCB.GOAL_OBSERVATION",
					HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  GOL* getGOL_66(size_t index = 0) {
    return (GOL*)this->getObjectSafe(index, PPP_PCB_GOL_66);
  }
  NTE* getNTE_69(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPP_PCB_NTE_69);
  }
  VAR* getVAR_74(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPP_PCB_VAR_74);
  }
  PPP_PCB_GOAL_ROLE* getGOAL_ROLE(size_t index = 0) {
    return (PPP_PCB_GOAL_ROLE*)this->getObjectSafe(index, PPP_PCB_GOAL_ROLE_77);
  }
  PPP_PCB_GOAL_OBSERVATION* getGOAL_OBSERVATION(size_t index = 0) {
    return (PPP_PCB_GOAL_OBSERVATION*)this->getObjectSafe(
	index, PPP_PCB_GOAL_OBSERVATION_87);
  }

  /* Checker list */
  bool isGOL_66(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_GOL_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_69(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_NTE_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_74(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_VAR_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOAL_ROLE(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_GOAL_ROLE_77) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOAL_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_GOAL_OBSERVATION_87) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPP_PCB_64 */

/* CHOICE */
struct PPP_PCB_CHOICE : public HL7Group {
  PPP_PCB_CHOICE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPP_PCB_OBR_104, PPP_PCB_RXO_106, FIELD_ID_MAX };

  const char* className() const { return "PPP_PCB_CHOICE"; }
  PPP_PCB_CHOICE* create() const { return new PPP_PCB_CHOICE(); }

  /* Initialize object */
  void init() {
    setName("PPP_PCB.CHOICE");
    addObject<OBR>(PPP_PCB_OBR_104, "OBR.104", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXO>(PPP_PCB_RXO_106, "RXO.106", HL7::initialized,
		   HL7::repetition_off);
  }

  /* Getters list */
  OBR* getOBR_104(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, PPP_PCB_OBR_104);
  }
  RXO* getRXO_106(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, PPP_PCB_RXO_106);
  }

  /* Checker list */
  bool isOBR_104(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_OBR_104) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_106(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_RXO_106) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPP_PCB_103 */

/* ORDER_OBSERVATION */
struct PPP_PCB_ORDER_OBSERVATION : public HL7Group {
  PPP_PCB_ORDER_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPP_PCB_OBX_117,
    PPP_PCB_NTE_120,
    PPP_PCB_VAR_125,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPP_PCB_ORDER_OBSERVATION"; }
  PPP_PCB_ORDER_OBSERVATION* create() const {
    return new PPP_PCB_ORDER_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("PPP_PCB.ORDER_OBSERVATION");
    addObject<OBX>(PPP_PCB_OBX_117, "OBX.117", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPP_PCB_NTE_120, "NTE.120", HL7::optional,
		   HL7::repetition_on);
    addObject<VAR>(PPP_PCB_VAR_125, "VAR.125", HL7::optional,
		   HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_117(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPP_PCB_OBX_117);
  }
  NTE* getNTE_120(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPP_PCB_NTE_120);
  }
  VAR* getVAR_125(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPP_PCB_VAR_125);
  }

  /* Checker list */
  bool isOBX_117(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_OBX_117) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_120(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_NTE_120) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_125(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_VAR_125) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPP_PCB_115 */

/* ORDER_DETAIL */
struct PPP_PCB_ORDER_DETAIL : public HL7Group {
  PPP_PCB_ORDER_DETAIL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPP_PCB_CHOICE_103,
    PPP_PCB_NTE_108,
    PPP_PCB_VAR_112,
    PPP_PCB_ORDER_OBSERVATION_115,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPP_PCB_ORDER_DETAIL"; }
  PPP_PCB_ORDER_DETAIL* create() const { return new PPP_PCB_ORDER_DETAIL(); }

  /* Initialize object */
  void init() {
    setName("PPP_PCB.ORDER_DETAIL");
    addObject<PPP_PCB_CHOICE>(PPP_PCB_CHOICE_103, "PPP_PCB.CHOICE",
			      HL7::initialized, HL7::repetition_off);
    addObject<NTE>(PPP_PCB_NTE_108, "NTE.108", HL7::optional,
		   HL7::repetition_on);
    addObject<VAR>(PPP_PCB_VAR_112, "VAR.112", HL7::optional,
		   HL7::repetition_on);
    addObject<PPP_PCB_ORDER_OBSERVATION>(PPP_PCB_ORDER_OBSERVATION_115,
					 "PPP_PCB.ORDER_OBSERVATION",
					 HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PPP_PCB_CHOICE* getCHOICE(size_t index = 0) {
    return (PPP_PCB_CHOICE*)this->getObjectSafe(index, PPP_PCB_CHOICE_103);
  }
  NTE* getNTE_108(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPP_PCB_NTE_108);
  }
  VAR* getVAR_112(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPP_PCB_VAR_112);
  }
  PPP_PCB_ORDER_OBSERVATION* getORDER_OBSERVATION(size_t index = 0) {
    return (PPP_PCB_ORDER_OBSERVATION*)this->getObjectSafe(
	index, PPP_PCB_ORDER_OBSERVATION_115);
  }

  /* Checker list */
  bool isCHOICE(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_CHOICE_103) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_108(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_NTE_108) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_112(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_VAR_112) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_ORDER_OBSERVATION_115) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPP_PCB_102 */

/* ORDER */
struct PPP_PCB_ORDER : public HL7Group {
  PPP_PCB_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPP_PCB_ORC_101, PPP_PCB_ORDER_DETAIL_102, FIELD_ID_MAX };

  const char* className() const { return "PPP_PCB_ORDER"; }
  PPP_PCB_ORDER* create() const { return new PPP_PCB_ORDER(); }

  /* Initialize object */
  void init() {
    setName("PPP_PCB.ORDER");
    addObject<ORC>(PPP_PCB_ORC_101, "ORC.101", HL7::initialized,
		   HL7::repetition_off);
    addObject<PPP_PCB_ORDER_DETAIL>(PPP_PCB_ORDER_DETAIL_102,
				    "PPP_PCB.ORDER_DETAIL", HL7::optional,
				    HL7::repetition_off);
  }

  /* Getters list */
  ORC* getORC_101(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, PPP_PCB_ORC_101);
  }
  PPP_PCB_ORDER_DETAIL* getORDER_DETAIL(size_t index = 0) {
    return (PPP_PCB_ORDER_DETAIL*)this->getObjectSafe(index,
						      PPP_PCB_ORDER_DETAIL_102);
  }

  /* Checker list */
  bool isORC_101(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_ORC_101) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_DETAIL(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_ORDER_DETAIL_102) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPP_PCB_99 */

/* PROBLEM */
struct PPP_PCB_PROBLEM : public HL7Group {
  PPP_PCB_PROBLEM() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPP_PCB_PRB_33,
    PPP_PCB_NTE_36,
    PPP_PCB_VAR_41,
    PPP_PCB_PROBLEM_ROLE_44,
    PPP_PCB_PROBLEM_OBSERVATION_54,
    PPP_PCB_GOAL_64,
    PPP_PCB_ORDER_99,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPP_PCB_PROBLEM"; }
  PPP_PCB_PROBLEM* create() const { return new PPP_PCB_PROBLEM(); }

  /* Initialize object */
  void init() {
    setName("PPP_PCB.PROBLEM");
    addObject<PRB>(PPP_PCB_PRB_33, "PRB.33", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPP_PCB_NTE_36, "NTE.36", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PPP_PCB_VAR_41, "VAR.41", HL7::optional, HL7::repetition_on);
    addObject<PPP_PCB_PROBLEM_ROLE>(PPP_PCB_PROBLEM_ROLE_44,
				    "PPP_PCB.PROBLEM_ROLE", HL7::optional,
				    HL7::repetition_on);
    addObject<PPP_PCB_PROBLEM_OBSERVATION>(PPP_PCB_PROBLEM_OBSERVATION_54,
					   "PPP_PCB.PROBLEM_OBSERVATION",
					   HL7::optional, HL7::repetition_on);
    addObject<PPP_PCB_GOAL>(PPP_PCB_GOAL_64, "PPP_PCB.GOAL", HL7::optional,
			    HL7::repetition_on);
    addObject<PPP_PCB_ORDER>(PPP_PCB_ORDER_99, "PPP_PCB.ORDER", HL7::optional,
			     HL7::repetition_on);
  }

  /* Getters list */
  PRB* getPRB_33(size_t index = 0) {
    return (PRB*)this->getObjectSafe(index, PPP_PCB_PRB_33);
  }
  NTE* getNTE_36(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPP_PCB_NTE_36);
  }
  VAR* getVAR_41(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPP_PCB_VAR_41);
  }
  PPP_PCB_PROBLEM_ROLE* getPROBLEM_ROLE(size_t index = 0) {
    return (PPP_PCB_PROBLEM_ROLE*)this->getObjectSafe(index,
						      PPP_PCB_PROBLEM_ROLE_44);
  }
  PPP_PCB_PROBLEM_OBSERVATION* getPROBLEM_OBSERVATION(size_t index = 0) {
    return (PPP_PCB_PROBLEM_OBSERVATION*)this->getObjectSafe(
	index, PPP_PCB_PROBLEM_OBSERVATION_54);
  }
  PPP_PCB_GOAL* getGOAL(size_t index = 0) {
    return (PPP_PCB_GOAL*)this->getObjectSafe(index, PPP_PCB_GOAL_64);
  }
  PPP_PCB_ORDER* getORDER(size_t index = 0) {
    return (PPP_PCB_ORDER*)this->getObjectSafe(index, PPP_PCB_ORDER_99);
  }

  /* Checker list */
  bool isPRB_33(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PRB_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_36(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_NTE_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_41(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_VAR_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROBLEM_ROLE(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PROBLEM_ROLE_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROBLEM_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PROBLEM_OBSERVATION_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOAL(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_GOAL_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_ORDER_99) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPP_PCB_31 */

/* PATHWAY */
struct PPP_PCB_PATHWAY : public HL7Group {
  PPP_PCB_PATHWAY() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPP_PCB_PTH_10,
    PPP_PCB_NTE_13,
    PPP_PCB_VAR_18,
    PPP_PCB_PATHWAY_ROLE_21,
    PPP_PCB_PROBLEM_31,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPP_PCB_PATHWAY"; }
  PPP_PCB_PATHWAY* create() const { return new PPP_PCB_PATHWAY(); }

  /* Initialize object */
  void init() {
    setName("PPP_PCB.PATHWAY");
    addObject<PTH>(PPP_PCB_PTH_10, "PTH.10", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPP_PCB_NTE_13, "NTE.13", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PPP_PCB_VAR_18, "VAR.18", HL7::optional, HL7::repetition_on);
    addObject<PPP_PCB_PATHWAY_ROLE>(PPP_PCB_PATHWAY_ROLE_21,
				    "PPP_PCB.PATHWAY_ROLE", HL7::optional,
				    HL7::repetition_on);
    addObject<PPP_PCB_PROBLEM>(PPP_PCB_PROBLEM_31, "PPP_PCB.PROBLEM",
			       HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PTH* getPTH_10(size_t index = 0) {
    return (PTH*)this->getObjectSafe(index, PPP_PCB_PTH_10);
  }
  NTE* getNTE_13(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPP_PCB_NTE_13);
  }
  VAR* getVAR_18(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPP_PCB_VAR_18);
  }
  PPP_PCB_PATHWAY_ROLE* getPATHWAY_ROLE(size_t index = 0) {
    return (PPP_PCB_PATHWAY_ROLE*)this->getObjectSafe(index,
						      PPP_PCB_PATHWAY_ROLE_21);
  }
  PPP_PCB_PROBLEM* getPROBLEM(size_t index = 0) {
    return (PPP_PCB_PROBLEM*)this->getObjectSafe(index, PPP_PCB_PROBLEM_31);
  }

  /* Checker list */
  bool isPTH_10(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PTH_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_13(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_NTE_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_18(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_VAR_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATHWAY_ROLE(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PATHWAY_ROLE_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROBLEM(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PROBLEM_31) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPP_PCB_9 */

/* PPP_PCB */
struct PPP_PCB : public HL7Message {
  PPP_PCB() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPP_PCB_MSH_1,
    PPP_PCB_PID_2,
    PPP_PCB_PATIENT_VISIT_3,
    PPP_PCB_PATHWAY_9,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPP_PCB"; }
  PPP_PCB* create() const { return new PPP_PCB(); }

  /* Initialize object */
  void init() {
    setName("PPP_PCB");
    addObject<MSH>(PPP_PCB_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<PID>(PPP_PCB_PID_2, "PID.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<PPP_PCB_PATIENT_VISIT>(PPP_PCB_PATIENT_VISIT_3,
				     "PPP_PCB.PATIENT_VISIT", HL7::optional,
				     HL7::repetition_off);
    addObject<PPP_PCB_PATHWAY>(PPP_PCB_PATHWAY_9, "PPP_PCB.PATHWAY",
			       HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, PPP_PCB_MSH_1);
  }
  PID* getPID_2(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, PPP_PCB_PID_2);
  }
  PPP_PCB_PATIENT_VISIT* getPATIENT_VISIT(size_t index = 0) {
    return (PPP_PCB_PATIENT_VISIT*)this->getObjectSafe(index,
						       PPP_PCB_PATIENT_VISIT_3);
  }
  PPP_PCB_PATHWAY* getPATHWAY(size_t index = 0) {
    return (PPP_PCB_PATHWAY*)this->getObjectSafe(index, PPP_PCB_PATHWAY_9);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_2(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PID_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT_VISIT(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PATIENT_VISIT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATHWAY(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PATHWAY_9) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPP_PCB_ */
} /* namespace HL7_24 */
#endif /*  __PPP_PCB__24_H__ */
