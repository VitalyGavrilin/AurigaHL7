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


#ifndef __PPG_PCG__24_H__
#define __PPG_PCG__24_H__

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
struct PPG_PCG_PATIENT_VISIT;       /* PATIENT_VISIT */
struct PPG_PCG_PATHWAY_ROLE;	/* PATHWAY_ROLE */
struct PPG_PCG_GOAL_ROLE;	   /* GOAL_ROLE */
struct PPG_PCG_GOAL_OBSERVATION;    /* GOAL_OBSERVATION */
struct PPG_PCG_PROBLEM_ROLE;	/* PROBLEM_ROLE */
struct PPG_PCG_PROBLEM_OBSERVATION; /* PROBLEM_OBSERVATION */
struct PPG_PCG_PROBLEM;		    /* PROBLEM */
struct PPG_PCG_ORDER_OBSERVATION;   /* ORDER_OBSERVATION */
struct PPG_PCG_ORDER_DETAIL;	/* ORDER_DETAIL */
struct PPG_PCG_ORDER;		    /* ORDER */
struct PPG_PCG_GOAL;		    /* GOAL */
struct PPG_PCG_PATHWAY;		    /* PATHWAY */

/* PATIENT_VISIT */
struct PPG_PCG_PATIENT_VISIT : public HL7Group {
  PPG_PCG_PATIENT_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPG_PCG_PV1_4, PPG_PCG_PV2_6, FIELD_ID_MAX };

  const char* className() const { return "PPG_PCG_PATIENT_VISIT"; }
  PPG_PCG_PATIENT_VISIT* create() const { return new PPG_PCG_PATIENT_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("PPG_PCG.PATIENT_VISIT");
    addObject<PV1>(PPG_PCG_PV1_4, "PV1.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(PPG_PCG_PV2_6, "PV2.6", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  PV1* getPV1_4(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, PPG_PCG_PV1_4);
  }
  PV2* getPV2_6(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, PPG_PCG_PV2_6);
  }

  /* Checker list */
  bool isPV1_4(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_PV1_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_6(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_PV2_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPG_PCG_3 */

/* PATHWAY_ROLE */
struct PPG_PCG_PATHWAY_ROLE : public HL7Group {
  PPG_PCG_PATHWAY_ROLE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPG_PCG_ROL_23, PPG_PCG_VAR_26, FIELD_ID_MAX };

  const char* className() const { return "PPG_PCG_PATHWAY_ROLE"; }
  PPG_PCG_PATHWAY_ROLE* create() const { return new PPG_PCG_PATHWAY_ROLE(); }

  /* Initialize object */
  void init() {
    setName("PPG_PCG.PATHWAY_ROLE");
    addObject<ROL>(PPG_PCG_ROL_23, "ROL.23", HL7::initialized,
		   HL7::repetition_off);
    addObject<VAR>(PPG_PCG_VAR_26, "VAR.26", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ROL* getROL_23(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPG_PCG_ROL_23);
  }
  VAR* getVAR_26(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPG_PCG_VAR_26);
  }

  /* Checker list */
  bool isROL_23(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_ROL_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_26(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_VAR_26) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPG_PCG_21 */

/* GOAL_ROLE */
struct PPG_PCG_GOAL_ROLE : public HL7Group {
  PPG_PCG_GOAL_ROLE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPG_PCG_ROL_46, PPG_PCG_VAR_49, FIELD_ID_MAX };

  const char* className() const { return "PPG_PCG_GOAL_ROLE"; }
  PPG_PCG_GOAL_ROLE* create() const { return new PPG_PCG_GOAL_ROLE(); }

  /* Initialize object */
  void init() {
    setName("PPG_PCG.GOAL_ROLE");
    addObject<ROL>(PPG_PCG_ROL_46, "ROL.46", HL7::initialized,
		   HL7::repetition_off);
    addObject<VAR>(PPG_PCG_VAR_49, "VAR.49", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ROL* getROL_46(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPG_PCG_ROL_46);
  }
  VAR* getVAR_49(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPG_PCG_VAR_49);
  }

  /* Checker list */
  bool isROL_46(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_ROL_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_49(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_VAR_49) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPG_PCG_44 */

/* GOAL_OBSERVATION */
struct PPG_PCG_GOAL_OBSERVATION : public HL7Group {
  PPG_PCG_GOAL_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPG_PCG_OBX_56, PPG_PCG_NTE_59, FIELD_ID_MAX };

  const char* className() const { return "PPG_PCG_GOAL_OBSERVATION"; }
  PPG_PCG_GOAL_OBSERVATION* create() const {
    return new PPG_PCG_GOAL_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("PPG_PCG.GOAL_OBSERVATION");
    addObject<OBX>(PPG_PCG_OBX_56, "OBX.56", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPG_PCG_NTE_59, "NTE.59", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_56(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPG_PCG_OBX_56);
  }
  NTE* getNTE_59(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPG_PCG_NTE_59);
  }

  /* Checker list */
  bool isOBX_56(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_OBX_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_59(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_NTE_59) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPG_PCG_54 */

/* PROBLEM_ROLE */
struct PPG_PCG_PROBLEM_ROLE : public HL7Group {
  PPG_PCG_PROBLEM_ROLE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPG_PCG_ROL_79, PPG_PCG_VAR_82, FIELD_ID_MAX };

  const char* className() const { return "PPG_PCG_PROBLEM_ROLE"; }
  PPG_PCG_PROBLEM_ROLE* create() const { return new PPG_PCG_PROBLEM_ROLE(); }

  /* Initialize object */
  void init() {
    setName("PPG_PCG.PROBLEM_ROLE");
    addObject<ROL>(PPG_PCG_ROL_79, "ROL.79", HL7::initialized,
		   HL7::repetition_off);
    addObject<VAR>(PPG_PCG_VAR_82, "VAR.82", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ROL* getROL_79(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPG_PCG_ROL_79);
  }
  VAR* getVAR_82(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPG_PCG_VAR_82);
  }

  /* Checker list */
  bool isROL_79(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_ROL_79) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_82(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_VAR_82) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPG_PCG_77 */

/* PROBLEM_OBSERVATION */
struct PPG_PCG_PROBLEM_OBSERVATION : public HL7Group {
  PPG_PCG_PROBLEM_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPG_PCG_OBX_89, PPG_PCG_NTE_92, FIELD_ID_MAX };

  const char* className() const { return "PPG_PCG_PROBLEM_OBSERVATION"; }
  PPG_PCG_PROBLEM_OBSERVATION* create() const {
    return new PPG_PCG_PROBLEM_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("PPG_PCG.PROBLEM_OBSERVATION");
    addObject<OBX>(PPG_PCG_OBX_89, "OBX.89", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPG_PCG_NTE_92, "NTE.92", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_89(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPG_PCG_OBX_89);
  }
  NTE* getNTE_92(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPG_PCG_NTE_92);
  }

  /* Checker list */
  bool isOBX_89(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_OBX_89) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_92(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_NTE_92) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPG_PCG_87 */

/* PROBLEM */
struct PPG_PCG_PROBLEM : public HL7Group {
  PPG_PCG_PROBLEM() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPG_PCG_PRB_66,
    PPG_PCG_NTE_69,
    PPG_PCG_VAR_74,
    PPG_PCG_PROBLEM_ROLE_77,
    PPG_PCG_PROBLEM_OBSERVATION_87,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPG_PCG_PROBLEM"; }
  PPG_PCG_PROBLEM* create() const { return new PPG_PCG_PROBLEM(); }

  /* Initialize object */
  void init() {
    setName("PPG_PCG.PROBLEM");
    addObject<PRB>(PPG_PCG_PRB_66, "PRB.66", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPG_PCG_NTE_69, "NTE.69", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PPG_PCG_VAR_74, "VAR.74", HL7::optional, HL7::repetition_on);
    addObject<PPG_PCG_PROBLEM_ROLE>(PPG_PCG_PROBLEM_ROLE_77,
				    "PPG_PCG.PROBLEM_ROLE", HL7::optional,
				    HL7::repetition_on);
    addObject<PPG_PCG_PROBLEM_OBSERVATION>(PPG_PCG_PROBLEM_OBSERVATION_87,
					   "PPG_PCG.PROBLEM_OBSERVATION",
					   HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PRB* getPRB_66(size_t index = 0) {
    return (PRB*)this->getObjectSafe(index, PPG_PCG_PRB_66);
  }
  NTE* getNTE_69(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPG_PCG_NTE_69);
  }
  VAR* getVAR_74(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPG_PCG_VAR_74);
  }
  PPG_PCG_PROBLEM_ROLE* getPROBLEM_ROLE(size_t index = 0) {
    return (PPG_PCG_PROBLEM_ROLE*)this->getObjectSafe(index,
						      PPG_PCG_PROBLEM_ROLE_77);
  }
  PPG_PCG_PROBLEM_OBSERVATION* getPROBLEM_OBSERVATION(size_t index = 0) {
    return (PPG_PCG_PROBLEM_OBSERVATION*)this->getObjectSafe(
	index, PPG_PCG_PROBLEM_OBSERVATION_87);
  }

  /* Checker list */
  bool isPRB_66(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_PRB_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_69(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_NTE_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_74(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_VAR_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROBLEM_ROLE(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_PROBLEM_ROLE_77) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROBLEM_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_PROBLEM_OBSERVATION_87) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPG_PCG_64 */

/* ORDER_OBSERVATION */
struct PPG_PCG_ORDER_OBSERVATION : public HL7Group {
  PPG_PCG_ORDER_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPG_PCG_OBX_118,
    PPG_PCG_NTE_121,
    PPG_PCG_VAR_126,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPG_PCG_ORDER_OBSERVATION"; }
  PPG_PCG_ORDER_OBSERVATION* create() const {
    return new PPG_PCG_ORDER_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("PPG_PCG.ORDER_OBSERVATION");
    addObject<OBX>(PPG_PCG_OBX_118, "OBX.118", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPG_PCG_NTE_121, "NTE.121", HL7::optional,
		   HL7::repetition_on);
    addObject<VAR>(PPG_PCG_VAR_126, "VAR.126", HL7::optional,
		   HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_118(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPG_PCG_OBX_118);
  }
  NTE* getNTE_121(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPG_PCG_NTE_121);
  }
  VAR* getVAR_126(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPG_PCG_VAR_126);
  }

  /* Checker list */
  bool isOBX_118(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_OBX_118) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_121(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_NTE_121) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_126(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_VAR_126) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPG_PCG_116 */

/* ORDER_DETAIL */
struct PPG_PCG_ORDER_DETAIL : public HL7Group {
  PPG_PCG_ORDER_DETAIL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPG_PCG_OBR_104,
    PPG_PCG_RXO_106,
    PPG_PCG_NTE_112,
    PPG_PCG_VAR_113,
    PPG_PCG_ORDER_OBSERVATION_116,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPG_PCG_ORDER_DETAIL"; }
  PPG_PCG_ORDER_DETAIL* create() const { return new PPG_PCG_ORDER_DETAIL(); }

  /* Initialize object */
  void init() {
    setName("PPG_PCG.ORDER_DETAIL");
    addObject<OBR>(PPG_PCG_OBR_104, "OBR.104", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXO>(PPG_PCG_RXO_106, "RXO.106", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPG_PCG_NTE_112, "NTE.112", HL7::optional,
		   HL7::repetition_on);
    addObject<VAR>(PPG_PCG_VAR_113, "VAR.113", HL7::optional,
		   HL7::repetition_on);
    addObject<PPG_PCG_ORDER_OBSERVATION>(PPG_PCG_ORDER_OBSERVATION_116,
					 "PPG_PCG.ORDER_OBSERVATION",
					 HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBR* getOBR_104(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, PPG_PCG_OBR_104);
  }
  RXO* getRXO_106(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, PPG_PCG_RXO_106);
  }
  NTE* getNTE_112(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPG_PCG_NTE_112);
  }
  VAR* getVAR_113(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPG_PCG_VAR_113);
  }
  PPG_PCG_ORDER_OBSERVATION* getORDER_OBSERVATION(size_t index = 0) {
    return (PPG_PCG_ORDER_OBSERVATION*)this->getObjectSafe(
	index, PPG_PCG_ORDER_OBSERVATION_116);
  }

  /* Checker list */
  bool isOBR_104(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_OBR_104) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_106(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_RXO_106) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_112(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_NTE_112) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_113(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_VAR_113) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_ORDER_OBSERVATION_116) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPG_PCG_102 */

/* ORDER */
struct PPG_PCG_ORDER : public HL7Group {
  PPG_PCG_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPG_PCG_ORC_101, PPG_PCG_ORDER_DETAIL_102, FIELD_ID_MAX };

  const char* className() const { return "PPG_PCG_ORDER"; }
  PPG_PCG_ORDER* create() const { return new PPG_PCG_ORDER(); }

  /* Initialize object */
  void init() {
    setName("PPG_PCG.ORDER");
    addObject<ORC>(PPG_PCG_ORC_101, "ORC.101", HL7::initialized,
		   HL7::repetition_off);
    addObject<PPG_PCG_ORDER_DETAIL>(PPG_PCG_ORDER_DETAIL_102,
				    "PPG_PCG.ORDER_DETAIL", HL7::optional,
				    HL7::repetition_off);
  }

  /* Getters list */
  ORC* getORC_101(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, PPG_PCG_ORC_101);
  }
  PPG_PCG_ORDER_DETAIL* getORDER_DETAIL(size_t index = 0) {
    return (PPG_PCG_ORDER_DETAIL*)this->getObjectSafe(index,
						      PPG_PCG_ORDER_DETAIL_102);
  }

  /* Checker list */
  bool isORC_101(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_ORC_101) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_DETAIL(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_ORDER_DETAIL_102) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPG_PCG_99 */

/* GOAL */
struct PPG_PCG_GOAL : public HL7Group {
  PPG_PCG_GOAL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPG_PCG_GOL_33,
    PPG_PCG_NTE_36,
    PPG_PCG_VAR_41,
    PPG_PCG_GOAL_ROLE_44,
    PPG_PCG_GOAL_OBSERVATION_54,
    PPG_PCG_PROBLEM_64,
    PPG_PCG_ORDER_99,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPG_PCG_GOAL"; }
  PPG_PCG_GOAL* create() const { return new PPG_PCG_GOAL(); }

  /* Initialize object */
  void init() {
    setName("PPG_PCG.GOAL");
    addObject<GOL>(PPG_PCG_GOL_33, "GOL.33", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPG_PCG_NTE_36, "NTE.36", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PPG_PCG_VAR_41, "VAR.41", HL7::optional, HL7::repetition_on);
    addObject<PPG_PCG_GOAL_ROLE>(PPG_PCG_GOAL_ROLE_44, "PPG_PCG.GOAL_ROLE",
				 HL7::optional, HL7::repetition_on);
    addObject<PPG_PCG_GOAL_OBSERVATION>(PPG_PCG_GOAL_OBSERVATION_54,
					"PPG_PCG.GOAL_OBSERVATION",
					HL7::optional, HL7::repetition_on);
    addObject<PPG_PCG_PROBLEM>(PPG_PCG_PROBLEM_64, "PPG_PCG.PROBLEM",
			       HL7::optional, HL7::repetition_on);
    addObject<PPG_PCG_ORDER>(PPG_PCG_ORDER_99, "PPG_PCG.ORDER", HL7::optional,
			     HL7::repetition_on);
  }

  /* Getters list */
  GOL* getGOL_33(size_t index = 0) {
    return (GOL*)this->getObjectSafe(index, PPG_PCG_GOL_33);
  }
  NTE* getNTE_36(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPG_PCG_NTE_36);
  }
  VAR* getVAR_41(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPG_PCG_VAR_41);
  }
  PPG_PCG_GOAL_ROLE* getGOAL_ROLE(size_t index = 0) {
    return (PPG_PCG_GOAL_ROLE*)this->getObjectSafe(index, PPG_PCG_GOAL_ROLE_44);
  }
  PPG_PCG_GOAL_OBSERVATION* getGOAL_OBSERVATION(size_t index = 0) {
    return (PPG_PCG_GOAL_OBSERVATION*)this->getObjectSafe(
	index, PPG_PCG_GOAL_OBSERVATION_54);
  }
  PPG_PCG_PROBLEM* getPROBLEM(size_t index = 0) {
    return (PPG_PCG_PROBLEM*)this->getObjectSafe(index, PPG_PCG_PROBLEM_64);
  }
  PPG_PCG_ORDER* getORDER(size_t index = 0) {
    return (PPG_PCG_ORDER*)this->getObjectSafe(index, PPG_PCG_ORDER_99);
  }

  /* Checker list */
  bool isGOL_33(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_GOL_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_36(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_NTE_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_41(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_VAR_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOAL_ROLE(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_GOAL_ROLE_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOAL_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_GOAL_OBSERVATION_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROBLEM(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_PROBLEM_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_ORDER_99) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPG_PCG_31 */

/* PATHWAY */
struct PPG_PCG_PATHWAY : public HL7Group {
  PPG_PCG_PATHWAY() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPG_PCG_PTH_10,
    PPG_PCG_NTE_13,
    PPG_PCG_VAR_18,
    PPG_PCG_PATHWAY_ROLE_21,
    PPG_PCG_GOAL_31,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPG_PCG_PATHWAY"; }
  PPG_PCG_PATHWAY* create() const { return new PPG_PCG_PATHWAY(); }

  /* Initialize object */
  void init() {
    setName("PPG_PCG.PATHWAY");
    addObject<PTH>(PPG_PCG_PTH_10, "PTH.10", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPG_PCG_NTE_13, "NTE.13", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PPG_PCG_VAR_18, "VAR.18", HL7::optional, HL7::repetition_on);
    addObject<PPG_PCG_PATHWAY_ROLE>(PPG_PCG_PATHWAY_ROLE_21,
				    "PPG_PCG.PATHWAY_ROLE", HL7::optional,
				    HL7::repetition_on);
    addObject<PPG_PCG_GOAL>(PPG_PCG_GOAL_31, "PPG_PCG.GOAL", HL7::optional,
			    HL7::repetition_on);
  }

  /* Getters list */
  PTH* getPTH_10(size_t index = 0) {
    return (PTH*)this->getObjectSafe(index, PPG_PCG_PTH_10);
  }
  NTE* getNTE_13(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPG_PCG_NTE_13);
  }
  VAR* getVAR_18(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPG_PCG_VAR_18);
  }
  PPG_PCG_PATHWAY_ROLE* getPATHWAY_ROLE(size_t index = 0) {
    return (PPG_PCG_PATHWAY_ROLE*)this->getObjectSafe(index,
						      PPG_PCG_PATHWAY_ROLE_21);
  }
  PPG_PCG_GOAL* getGOAL(size_t index = 0) {
    return (PPG_PCG_GOAL*)this->getObjectSafe(index, PPG_PCG_GOAL_31);
  }

  /* Checker list */
  bool isPTH_10(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_PTH_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_13(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_NTE_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_18(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_VAR_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATHWAY_ROLE(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_PATHWAY_ROLE_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOAL(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_GOAL_31) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPG_PCG_9 */

/* PPG_PCG */
struct PPG_PCG : public HL7Message {
  PPG_PCG() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPG_PCG_MSH_1,
    PPG_PCG_PID_2,
    PPG_PCG_PATIENT_VISIT_3,
    PPG_PCG_PATHWAY_9,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPG_PCG"; }
  PPG_PCG* create() const { return new PPG_PCG(); }

  /* Initialize object */
  void init() {
    setName("PPG_PCG");
    addObject<MSH>(PPG_PCG_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<PID>(PPG_PCG_PID_2, "PID.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<PPG_PCG_PATIENT_VISIT>(PPG_PCG_PATIENT_VISIT_3,
				     "PPG_PCG.PATIENT_VISIT", HL7::optional,
				     HL7::repetition_off);
    addObject<PPG_PCG_PATHWAY>(PPG_PCG_PATHWAY_9, "PPG_PCG.PATHWAY",
			       HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, PPG_PCG_MSH_1);
  }
  PID* getPID_2(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, PPG_PCG_PID_2);
  }
  PPG_PCG_PATIENT_VISIT* getPATIENT_VISIT(size_t index = 0) {
    return (PPG_PCG_PATIENT_VISIT*)this->getObjectSafe(index,
						       PPG_PCG_PATIENT_VISIT_3);
  }
  PPG_PCG_PATHWAY* getPATHWAY(size_t index = 0) {
    return (PPG_PCG_PATHWAY*)this->getObjectSafe(index, PPG_PCG_PATHWAY_9);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_2(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_PID_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT_VISIT(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_PATIENT_VISIT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATHWAY(size_t index = 0) {
    try {
      return this->getObject(index, PPG_PCG_PATHWAY_9) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPG_PCG_ */
} /* namespace HL7_24 */
#endif /*  __PPG_PCG__24_H__ */
