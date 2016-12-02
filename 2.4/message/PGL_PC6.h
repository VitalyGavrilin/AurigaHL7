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


#ifndef __PGL_PC6__24_H__
#define __PGL_PC6__24_H__

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
struct PGL_PC6_PATIENT_VISIT;       /* PATIENT_VISIT */
struct PGL_PC6_GOAL_ROLE;	   /* GOAL_ROLE */
struct PGL_PC6_PATHWAY;		    /* PATHWAY */
struct PGL_PC6_OBSERVATION;	 /* OBSERVATION */
struct PGL_PC6_PROBLEM_ROLE;	/* PROBLEM_ROLE */
struct PGL_PC6_PROBLEM_OBSERVATION; /* PROBLEM_OBSERVATION */
struct PGL_PC6_PROBLEM;		    /* PROBLEM */
struct PGL_PC6_ORDER_OBSERVATION;   /* ORDER_OBSERVATION */
struct PGL_PC6_ORDER_DETAIL;	/* ORDER_DETAIL */
struct PGL_PC6_ORDER;		    /* ORDER */
struct PGL_PC6_GOAL;		    /* GOAL */

/* PATIENT_VISIT */
struct PGL_PC6_PATIENT_VISIT : public HL7Group {
  PGL_PC6_PATIENT_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PGL_PC6_PV1_4, PGL_PC6_PV2_6, FIELD_ID_MAX };

  const char* className() const { return "PGL_PC6_PATIENT_VISIT"; }
  PGL_PC6_PATIENT_VISIT* create() const { return new PGL_PC6_PATIENT_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("PGL_PC6.PATIENT_VISIT");
    addObject<PV1>(PGL_PC6_PV1_4, "PV1.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(PGL_PC6_PV2_6, "PV2.6", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  PV1* getPV1_4(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, PGL_PC6_PV1_4);
  }
  PV2* getPV2_6(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, PGL_PC6_PV2_6);
  }

  /* Checker list */
  bool isPV1_4(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_PV1_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_6(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_PV2_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PGL_PC6_3 */

/* GOAL_ROLE */
struct PGL_PC6_GOAL_ROLE : public HL7Group {
  PGL_PC6_GOAL_ROLE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PGL_PC6_ROL_23, PGL_PC6_VAR_26, FIELD_ID_MAX };

  const char* className() const { return "PGL_PC6_GOAL_ROLE"; }
  PGL_PC6_GOAL_ROLE* create() const { return new PGL_PC6_GOAL_ROLE(); }

  /* Initialize object */
  void init() {
    setName("PGL_PC6.GOAL_ROLE");
    addObject<ROL>(PGL_PC6_ROL_23, "ROL.23", HL7::initialized,
		   HL7::repetition_off);
    addObject<VAR>(PGL_PC6_VAR_26, "VAR.26", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ROL* getROL_23(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PGL_PC6_ROL_23);
  }
  VAR* getVAR_26(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PGL_PC6_VAR_26);
  }

  /* Checker list */
  bool isROL_23(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_ROL_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_26(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_VAR_26) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PGL_PC6_21 */

/* PATHWAY */
struct PGL_PC6_PATHWAY : public HL7Group {
  PGL_PC6_PATHWAY() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PGL_PC6_PTH_33, PGL_PC6_VAR_36, FIELD_ID_MAX };

  const char* className() const { return "PGL_PC6_PATHWAY"; }
  PGL_PC6_PATHWAY* create() const { return new PGL_PC6_PATHWAY(); }

  /* Initialize object */
  void init() {
    setName("PGL_PC6.PATHWAY");
    addObject<PTH>(PGL_PC6_PTH_33, "PTH.33", HL7::initialized,
		   HL7::repetition_off);
    addObject<VAR>(PGL_PC6_VAR_36, "VAR.36", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PTH* getPTH_33(size_t index = 0) {
    return (PTH*)this->getObjectSafe(index, PGL_PC6_PTH_33);
  }
  VAR* getVAR_36(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PGL_PC6_VAR_36);
  }

  /* Checker list */
  bool isPTH_33(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_PTH_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_36(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_VAR_36) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PGL_PC6_31 */

/* OBSERVATION */
struct PGL_PC6_OBSERVATION : public HL7Group {
  PGL_PC6_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PGL_PC6_OBX_43, PGL_PC6_NTE_46, FIELD_ID_MAX };

  const char* className() const { return "PGL_PC6_OBSERVATION"; }
  PGL_PC6_OBSERVATION* create() const { return new PGL_PC6_OBSERVATION(); }

  /* Initialize object */
  void init() {
    setName("PGL_PC6.OBSERVATION");
    addObject<OBX>(PGL_PC6_OBX_43, "OBX.43", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PGL_PC6_NTE_46, "NTE.46", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_43(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PGL_PC6_OBX_43);
  }
  NTE* getNTE_46(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PGL_PC6_NTE_46);
  }

  /* Checker list */
  bool isOBX_43(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_OBX_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_46(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_NTE_46) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PGL_PC6_41 */

/* PROBLEM_ROLE */
struct PGL_PC6_PROBLEM_ROLE : public HL7Group {
  PGL_PC6_PROBLEM_ROLE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PGL_PC6_ROL_66, PGL_PC6_VAR_69, FIELD_ID_MAX };

  const char* className() const { return "PGL_PC6_PROBLEM_ROLE"; }
  PGL_PC6_PROBLEM_ROLE* create() const { return new PGL_PC6_PROBLEM_ROLE(); }

  /* Initialize object */
  void init() {
    setName("PGL_PC6.PROBLEM_ROLE");
    addObject<ROL>(PGL_PC6_ROL_66, "ROL.66", HL7::initialized,
		   HL7::repetition_off);
    addObject<VAR>(PGL_PC6_VAR_69, "VAR.69", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ROL* getROL_66(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PGL_PC6_ROL_66);
  }
  VAR* getVAR_69(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PGL_PC6_VAR_69);
  }

  /* Checker list */
  bool isROL_66(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_ROL_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_69(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_VAR_69) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PGL_PC6_64 */

/* PROBLEM_OBSERVATION */
struct PGL_PC6_PROBLEM_OBSERVATION : public HL7Group {
  PGL_PC6_PROBLEM_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PGL_PC6_OBX_76, PGL_PC6_NTE_79, FIELD_ID_MAX };

  const char* className() const { return "PGL_PC6_PROBLEM_OBSERVATION"; }
  PGL_PC6_PROBLEM_OBSERVATION* create() const {
    return new PGL_PC6_PROBLEM_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("PGL_PC6.PROBLEM_OBSERVATION");
    addObject<OBX>(PGL_PC6_OBX_76, "OBX.76", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PGL_PC6_NTE_79, "NTE.79", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_76(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PGL_PC6_OBX_76);
  }
  NTE* getNTE_79(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PGL_PC6_NTE_79);
  }

  /* Checker list */
  bool isOBX_76(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_OBX_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_79(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_NTE_79) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PGL_PC6_74 */

/* PROBLEM */
struct PGL_PC6_PROBLEM : public HL7Group {
  PGL_PC6_PROBLEM() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PGL_PC6_PRB_53,
    PGL_PC6_NTE_56,
    PGL_PC6_VAR_61,
    PGL_PC6_PROBLEM_ROLE_64,
    PGL_PC6_PROBLEM_OBSERVATION_74,
    FIELD_ID_MAX
  };

  const char* className() const { return "PGL_PC6_PROBLEM"; }
  PGL_PC6_PROBLEM* create() const { return new PGL_PC6_PROBLEM(); }

  /* Initialize object */
  void init() {
    setName("PGL_PC6.PROBLEM");
    addObject<PRB>(PGL_PC6_PRB_53, "PRB.53", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PGL_PC6_NTE_56, "NTE.56", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PGL_PC6_VAR_61, "VAR.61", HL7::optional, HL7::repetition_on);
    addObject<PGL_PC6_PROBLEM_ROLE>(PGL_PC6_PROBLEM_ROLE_64,
				    "PGL_PC6.PROBLEM_ROLE", HL7::optional,
				    HL7::repetition_on);
    addObject<PGL_PC6_PROBLEM_OBSERVATION>(PGL_PC6_PROBLEM_OBSERVATION_74,
					   "PGL_PC6.PROBLEM_OBSERVATION",
					   HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PRB* getPRB_53(size_t index = 0) {
    return (PRB*)this->getObjectSafe(index, PGL_PC6_PRB_53);
  }
  NTE* getNTE_56(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PGL_PC6_NTE_56);
  }
  VAR* getVAR_61(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PGL_PC6_VAR_61);
  }
  PGL_PC6_PROBLEM_ROLE* getPROBLEM_ROLE(size_t index = 0) {
    return (PGL_PC6_PROBLEM_ROLE*)this->getObjectSafe(index,
						      PGL_PC6_PROBLEM_ROLE_64);
  }
  PGL_PC6_PROBLEM_OBSERVATION* getPROBLEM_OBSERVATION(size_t index = 0) {
    return (PGL_PC6_PROBLEM_OBSERVATION*)this->getObjectSafe(
	index, PGL_PC6_PROBLEM_OBSERVATION_74);
  }

  /* Checker list */
  bool isPRB_53(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_PRB_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_56(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_NTE_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_61(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_VAR_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROBLEM_ROLE(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_PROBLEM_ROLE_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROBLEM_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_PROBLEM_OBSERVATION_74) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PGL_PC6_51 */

/* ORDER_OBSERVATION */
struct PGL_PC6_ORDER_OBSERVATION : public HL7Group {
  PGL_PC6_ORDER_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PGL_PC6_OBX_105,
    PGL_PC6_NTE_108,
    PGL_PC6_VAR_113,
    FIELD_ID_MAX
  };

  const char* className() const { return "PGL_PC6_ORDER_OBSERVATION"; }
  PGL_PC6_ORDER_OBSERVATION* create() const {
    return new PGL_PC6_ORDER_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("PGL_PC6.ORDER_OBSERVATION");
    addObject<OBX>(PGL_PC6_OBX_105, "OBX.105", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PGL_PC6_NTE_108, "NTE.108", HL7::optional,
		   HL7::repetition_on);
    addObject<VAR>(PGL_PC6_VAR_113, "VAR.113", HL7::optional,
		   HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_105(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PGL_PC6_OBX_105);
  }
  NTE* getNTE_108(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PGL_PC6_NTE_108);
  }
  VAR* getVAR_113(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PGL_PC6_VAR_113);
  }

  /* Checker list */
  bool isOBX_105(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_OBX_105) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_108(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_NTE_108) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_113(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_VAR_113) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PGL_PC6_103 */

/* ORDER_DETAIL */
struct PGL_PC6_ORDER_DETAIL : public HL7Group {
  PGL_PC6_ORDER_DETAIL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PGL_PC6_OBR_91,
    PGL_PC6_RXO_93,
    PGL_PC6_NTE_99,
    PGL_PC6_VAR_100,
    PGL_PC6_ORDER_OBSERVATION_103,
    FIELD_ID_MAX
  };

  const char* className() const { return "PGL_PC6_ORDER_DETAIL"; }
  PGL_PC6_ORDER_DETAIL* create() const { return new PGL_PC6_ORDER_DETAIL(); }

  /* Initialize object */
  void init() {
    setName("PGL_PC6.ORDER_DETAIL");
    addObject<OBR>(PGL_PC6_OBR_91, "OBR.91", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXO>(PGL_PC6_RXO_93, "RXO.93", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PGL_PC6_NTE_99, "NTE.99", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PGL_PC6_VAR_100, "VAR.100", HL7::optional,
		   HL7::repetition_on);
    addObject<PGL_PC6_ORDER_OBSERVATION>(PGL_PC6_ORDER_OBSERVATION_103,
					 "PGL_PC6.ORDER_OBSERVATION",
					 HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBR* getOBR_91(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, PGL_PC6_OBR_91);
  }
  RXO* getRXO_93(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, PGL_PC6_RXO_93);
  }
  NTE* getNTE_99(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PGL_PC6_NTE_99);
  }
  VAR* getVAR_100(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PGL_PC6_VAR_100);
  }
  PGL_PC6_ORDER_OBSERVATION* getORDER_OBSERVATION(size_t index = 0) {
    return (PGL_PC6_ORDER_OBSERVATION*)this->getObjectSafe(
	index, PGL_PC6_ORDER_OBSERVATION_103);
  }

  /* Checker list */
  bool isOBR_91(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_OBR_91) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_93(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_RXO_93) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_99(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_NTE_99) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_100(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_VAR_100) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_ORDER_OBSERVATION_103) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PGL_PC6_89 */

/* ORDER */
struct PGL_PC6_ORDER : public HL7Group {
  PGL_PC6_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PGL_PC6_ORC_88, PGL_PC6_ORDER_DETAIL_89, FIELD_ID_MAX };

  const char* className() const { return "PGL_PC6_ORDER"; }
  PGL_PC6_ORDER* create() const { return new PGL_PC6_ORDER(); }

  /* Initialize object */
  void init() {
    setName("PGL_PC6.ORDER");
    addObject<ORC>(PGL_PC6_ORC_88, "ORC.88", HL7::initialized,
		   HL7::repetition_off);
    addObject<PGL_PC6_ORDER_DETAIL>(PGL_PC6_ORDER_DETAIL_89,
				    "PGL_PC6.ORDER_DETAIL", HL7::optional,
				    HL7::repetition_off);
  }

  /* Getters list */
  ORC* getORC_88(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, PGL_PC6_ORC_88);
  }
  PGL_PC6_ORDER_DETAIL* getORDER_DETAIL(size_t index = 0) {
    return (PGL_PC6_ORDER_DETAIL*)this->getObjectSafe(index,
						      PGL_PC6_ORDER_DETAIL_89);
  }

  /* Checker list */
  bool isORC_88(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_ORC_88) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_DETAIL(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_ORDER_DETAIL_89) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PGL_PC6_86 */

/* GOAL */
struct PGL_PC6_GOAL : public HL7Group {
  PGL_PC6_GOAL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PGL_PC6_GOL_10,
    PGL_PC6_NTE_13,
    PGL_PC6_VAR_18,
    PGL_PC6_GOAL_ROLE_21,
    PGL_PC6_PATHWAY_31,
    PGL_PC6_OBSERVATION_41,
    PGL_PC6_PROBLEM_51,
    PGL_PC6_ORDER_86,
    FIELD_ID_MAX
  };

  const char* className() const { return "PGL_PC6_GOAL"; }
  PGL_PC6_GOAL* create() const { return new PGL_PC6_GOAL(); }

  /* Initialize object */
  void init() {
    setName("PGL_PC6.GOAL");
    addObject<GOL>(PGL_PC6_GOL_10, "GOL.10", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PGL_PC6_NTE_13, "NTE.13", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PGL_PC6_VAR_18, "VAR.18", HL7::optional, HL7::repetition_on);
    addObject<PGL_PC6_GOAL_ROLE>(PGL_PC6_GOAL_ROLE_21, "PGL_PC6.GOAL_ROLE",
				 HL7::optional, HL7::repetition_on);
    addObject<PGL_PC6_PATHWAY>(PGL_PC6_PATHWAY_31, "PGL_PC6.PATHWAY",
			       HL7::optional, HL7::repetition_on);
    addObject<PGL_PC6_OBSERVATION>(PGL_PC6_OBSERVATION_41,
				   "PGL_PC6.OBSERVATION", HL7::optional,
				   HL7::repetition_on);
    addObject<PGL_PC6_PROBLEM>(PGL_PC6_PROBLEM_51, "PGL_PC6.PROBLEM",
			       HL7::optional, HL7::repetition_on);
    addObject<PGL_PC6_ORDER>(PGL_PC6_ORDER_86, "PGL_PC6.ORDER", HL7::optional,
			     HL7::repetition_on);
  }

  /* Getters list */
  GOL* getGOL_10(size_t index = 0) {
    return (GOL*)this->getObjectSafe(index, PGL_PC6_GOL_10);
  }
  NTE* getNTE_13(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PGL_PC6_NTE_13);
  }
  VAR* getVAR_18(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PGL_PC6_VAR_18);
  }
  PGL_PC6_GOAL_ROLE* getGOAL_ROLE(size_t index = 0) {
    return (PGL_PC6_GOAL_ROLE*)this->getObjectSafe(index, PGL_PC6_GOAL_ROLE_21);
  }
  PGL_PC6_PATHWAY* getPATHWAY(size_t index = 0) {
    return (PGL_PC6_PATHWAY*)this->getObjectSafe(index, PGL_PC6_PATHWAY_31);
  }
  PGL_PC6_OBSERVATION* getOBSERVATION(size_t index = 0) {
    return (PGL_PC6_OBSERVATION*)this->getObjectSafe(index,
						     PGL_PC6_OBSERVATION_41);
  }
  PGL_PC6_PROBLEM* getPROBLEM(size_t index = 0) {
    return (PGL_PC6_PROBLEM*)this->getObjectSafe(index, PGL_PC6_PROBLEM_51);
  }
  PGL_PC6_ORDER* getORDER(size_t index = 0) {
    return (PGL_PC6_ORDER*)this->getObjectSafe(index, PGL_PC6_ORDER_86);
  }

  /* Checker list */
  bool isGOL_10(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_GOL_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_13(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_NTE_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_18(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_VAR_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOAL_ROLE(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_GOAL_ROLE_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATHWAY(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_PATHWAY_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_OBSERVATION_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROBLEM(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_PROBLEM_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_ORDER_86) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PGL_PC6_9 */

/* PGL_PC6 */
struct PGL_PC6 : public HL7Message {
  PGL_PC6() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PGL_PC6_MSH_1,
    PGL_PC6_PID_2,
    PGL_PC6_PATIENT_VISIT_3,
    PGL_PC6_GOAL_9,
    FIELD_ID_MAX
  };

  const char* className() const { return "PGL_PC6"; }
  PGL_PC6* create() const { return new PGL_PC6(); }

  /* Initialize object */
  void init() {
    setName("PGL_PC6");
    addObject<MSH>(PGL_PC6_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<PID>(PGL_PC6_PID_2, "PID.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<PGL_PC6_PATIENT_VISIT>(PGL_PC6_PATIENT_VISIT_3,
				     "PGL_PC6.PATIENT_VISIT", HL7::optional,
				     HL7::repetition_off);
    addObject<PGL_PC6_GOAL>(PGL_PC6_GOAL_9, "PGL_PC6.GOAL", HL7::initialized,
			    HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, PGL_PC6_MSH_1);
  }
  PID* getPID_2(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, PGL_PC6_PID_2);
  }
  PGL_PC6_PATIENT_VISIT* getPATIENT_VISIT(size_t index = 0) {
    return (PGL_PC6_PATIENT_VISIT*)this->getObjectSafe(index,
						       PGL_PC6_PATIENT_VISIT_3);
  }
  PGL_PC6_GOAL* getGOAL(size_t index = 0) {
    return (PGL_PC6_GOAL*)this->getObjectSafe(index, PGL_PC6_GOAL_9);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_2(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_PID_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT_VISIT(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_PATIENT_VISIT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOAL(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC6_GOAL_9) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PGL_PC6_ */
} /* namespace HL7_24 */
#endif /*  __PGL_PC6__24_H__ */
