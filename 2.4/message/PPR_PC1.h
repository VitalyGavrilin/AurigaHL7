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


#ifndef __PPR_PC1__24_H__
#define __PPR_PC1__24_H__

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
struct PPR_PC1_PATIENT_VISIT;       /* PATIENT_VISIT */
struct PPR_PC1_PROBLEM_ROLE;	/* PROBLEM_ROLE */
struct PPR_PC1_PATHWAY;		    /* PATHWAY */
struct PPR_PC1_PROBLEM_OBSERVATION; /* PROBLEM_OBSERVATION */
struct PPR_PC1_GOAL_ROLE;	   /* GOAL_ROLE */
struct PPR_PC1_GOAL_OBSERVATION;    /* GOAL_OBSERVATION */
struct PPR_PC1_GOAL;		    /* GOAL */
struct PPR_PC1_CHOICE;		    /* CHOICE */
struct PPR_PC1_ORDER_OBSERVATION;   /* ORDER_OBSERVATION */
struct PPR_PC1_ORDER_DETAIL;	/* ORDER_DETAIL */
struct PPR_PC1_ORDER;		    /* ORDER */
struct PPR_PC1_PROBLEM;		    /* PROBLEM */

/* PATIENT_VISIT */
struct PPR_PC1_PATIENT_VISIT : public HL7Group {
  PPR_PC1_PATIENT_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPR_PC1_PV1_4, PPR_PC1_PV2_6, FIELD_ID_MAX };

  const char* className() const { return "PPR_PC1_PATIENT_VISIT"; }
  PPR_PC1_PATIENT_VISIT* create() const { return new PPR_PC1_PATIENT_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("PPR_PC1.PATIENT_VISIT");
    addObject<PV1>(PPR_PC1_PV1_4, "PV1.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(PPR_PC1_PV2_6, "PV2.6", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  PV1* getPV1_4(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, PPR_PC1_PV1_4);
  }
  PV2* getPV2_6(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, PPR_PC1_PV2_6);
  }

  /* Checker list */
  bool isPV1_4(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_PV1_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_6(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_PV2_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPR_PC1_3 */

/* PROBLEM_ROLE */
struct PPR_PC1_PROBLEM_ROLE : public HL7Group {
  PPR_PC1_PROBLEM_ROLE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPR_PC1_ROL_23, PPR_PC1_VAR_26, FIELD_ID_MAX };

  const char* className() const { return "PPR_PC1_PROBLEM_ROLE"; }
  PPR_PC1_PROBLEM_ROLE* create() const { return new PPR_PC1_PROBLEM_ROLE(); }

  /* Initialize object */
  void init() {
    setName("PPR_PC1.PROBLEM_ROLE");
    addObject<ROL>(PPR_PC1_ROL_23, "ROL.23", HL7::initialized,
		   HL7::repetition_off);
    addObject<VAR>(PPR_PC1_VAR_26, "VAR.26", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ROL* getROL_23(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPR_PC1_ROL_23);
  }
  VAR* getVAR_26(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPR_PC1_VAR_26);
  }

  /* Checker list */
  bool isROL_23(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_ROL_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_26(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_VAR_26) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPR_PC1_21 */

/* PATHWAY */
struct PPR_PC1_PATHWAY : public HL7Group {
  PPR_PC1_PATHWAY() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPR_PC1_PTH_33, PPR_PC1_VAR_36, FIELD_ID_MAX };

  const char* className() const { return "PPR_PC1_PATHWAY"; }
  PPR_PC1_PATHWAY* create() const { return new PPR_PC1_PATHWAY(); }

  /* Initialize object */
  void init() {
    setName("PPR_PC1.PATHWAY");
    addObject<PTH>(PPR_PC1_PTH_33, "PTH.33", HL7::initialized,
		   HL7::repetition_off);
    addObject<VAR>(PPR_PC1_VAR_36, "VAR.36", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PTH* getPTH_33(size_t index = 0) {
    return (PTH*)this->getObjectSafe(index, PPR_PC1_PTH_33);
  }
  VAR* getVAR_36(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPR_PC1_VAR_36);
  }

  /* Checker list */
  bool isPTH_33(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_PTH_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_36(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_VAR_36) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPR_PC1_31 */

/* PROBLEM_OBSERVATION */
struct PPR_PC1_PROBLEM_OBSERVATION : public HL7Group {
  PPR_PC1_PROBLEM_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPR_PC1_OBX_43, PPR_PC1_NTE_46, FIELD_ID_MAX };

  const char* className() const { return "PPR_PC1_PROBLEM_OBSERVATION"; }
  PPR_PC1_PROBLEM_OBSERVATION* create() const {
    return new PPR_PC1_PROBLEM_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("PPR_PC1.PROBLEM_OBSERVATION");
    addObject<OBX>(PPR_PC1_OBX_43, "OBX.43", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPR_PC1_NTE_46, "NTE.46", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_43(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPR_PC1_OBX_43);
  }
  NTE* getNTE_46(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPR_PC1_NTE_46);
  }

  /* Checker list */
  bool isOBX_43(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_OBX_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_46(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_NTE_46) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPR_PC1_41 */

/* GOAL_ROLE */
struct PPR_PC1_GOAL_ROLE : public HL7Group {
  PPR_PC1_GOAL_ROLE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPR_PC1_ROL_66, PPR_PC1_VAR_69, FIELD_ID_MAX };

  const char* className() const { return "PPR_PC1_GOAL_ROLE"; }
  PPR_PC1_GOAL_ROLE* create() const { return new PPR_PC1_GOAL_ROLE(); }

  /* Initialize object */
  void init() {
    setName("PPR_PC1.GOAL_ROLE");
    addObject<ROL>(PPR_PC1_ROL_66, "ROL.66", HL7::initialized,
		   HL7::repetition_off);
    addObject<VAR>(PPR_PC1_VAR_69, "VAR.69", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ROL* getROL_66(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPR_PC1_ROL_66);
  }
  VAR* getVAR_69(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPR_PC1_VAR_69);
  }

  /* Checker list */
  bool isROL_66(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_ROL_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_69(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_VAR_69) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPR_PC1_64 */

/* GOAL_OBSERVATION */
struct PPR_PC1_GOAL_OBSERVATION : public HL7Group {
  PPR_PC1_GOAL_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPR_PC1_OBX_76, PPR_PC1_NTE_79, FIELD_ID_MAX };

  const char* className() const { return "PPR_PC1_GOAL_OBSERVATION"; }
  PPR_PC1_GOAL_OBSERVATION* create() const {
    return new PPR_PC1_GOAL_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("PPR_PC1.GOAL_OBSERVATION");
    addObject<OBX>(PPR_PC1_OBX_76, "OBX.76", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPR_PC1_NTE_79, "NTE.79", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_76(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPR_PC1_OBX_76);
  }
  NTE* getNTE_79(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPR_PC1_NTE_79);
  }

  /* Checker list */
  bool isOBX_76(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_OBX_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_79(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_NTE_79) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPR_PC1_74 */

/* GOAL */
struct PPR_PC1_GOAL : public HL7Group {
  PPR_PC1_GOAL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPR_PC1_GOL_53,
    PPR_PC1_NTE_56,
    PPR_PC1_VAR_61,
    PPR_PC1_GOAL_ROLE_64,
    PPR_PC1_GOAL_OBSERVATION_74,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPR_PC1_GOAL"; }
  PPR_PC1_GOAL* create() const { return new PPR_PC1_GOAL(); }

  /* Initialize object */
  void init() {
    setName("PPR_PC1.GOAL");
    addObject<GOL>(PPR_PC1_GOL_53, "GOL.53", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPR_PC1_NTE_56, "NTE.56", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PPR_PC1_VAR_61, "VAR.61", HL7::optional, HL7::repetition_on);
    addObject<PPR_PC1_GOAL_ROLE>(PPR_PC1_GOAL_ROLE_64, "PPR_PC1.GOAL_ROLE",
				 HL7::optional, HL7::repetition_on);
    addObject<PPR_PC1_GOAL_OBSERVATION>(PPR_PC1_GOAL_OBSERVATION_74,
					"PPR_PC1.GOAL_OBSERVATION",
					HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  GOL* getGOL_53(size_t index = 0) {
    return (GOL*)this->getObjectSafe(index, PPR_PC1_GOL_53);
  }
  NTE* getNTE_56(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPR_PC1_NTE_56);
  }
  VAR* getVAR_61(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPR_PC1_VAR_61);
  }
  PPR_PC1_GOAL_ROLE* getGOAL_ROLE(size_t index = 0) {
    return (PPR_PC1_GOAL_ROLE*)this->getObjectSafe(index, PPR_PC1_GOAL_ROLE_64);
  }
  PPR_PC1_GOAL_OBSERVATION* getGOAL_OBSERVATION(size_t index = 0) {
    return (PPR_PC1_GOAL_OBSERVATION*)this->getObjectSafe(
	index, PPR_PC1_GOAL_OBSERVATION_74);
  }

  /* Checker list */
  bool isGOL_53(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_GOL_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_56(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_NTE_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_61(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_VAR_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOAL_ROLE(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_GOAL_ROLE_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOAL_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_GOAL_OBSERVATION_74) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPR_PC1_51 */

/* CHOICE */
struct PPR_PC1_CHOICE : public HL7Group {
  PPR_PC1_CHOICE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPR_PC1_OBR_91, PPR_PC1_RXO_93, FIELD_ID_MAX };

  const char* className() const { return "PPR_PC1_CHOICE"; }
  PPR_PC1_CHOICE* create() const { return new PPR_PC1_CHOICE(); }

  /* Initialize object */
  void init() {
    setName("PPR_PC1.CHOICE");
    addObject<OBR>(PPR_PC1_OBR_91, "OBR.91", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXO>(PPR_PC1_RXO_93, "RXO.93", HL7::initialized,
		   HL7::repetition_off);
  }

  /* Getters list */
  OBR* getOBR_91(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, PPR_PC1_OBR_91);
  }
  RXO* getRXO_93(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, PPR_PC1_RXO_93);
  }

  /* Checker list */
  bool isOBR_91(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_OBR_91) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_93(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_RXO_93) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPR_PC1_90 */

/* ORDER_OBSERVATION */
struct PPR_PC1_ORDER_OBSERVATION : public HL7Group {
  PPR_PC1_ORDER_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPR_PC1_OBX_104,
    PPR_PC1_NTE_107,
    PPR_PC1_VAR_112,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPR_PC1_ORDER_OBSERVATION"; }
  PPR_PC1_ORDER_OBSERVATION* create() const {
    return new PPR_PC1_ORDER_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("PPR_PC1.ORDER_OBSERVATION");
    addObject<OBX>(PPR_PC1_OBX_104, "OBX.104", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPR_PC1_NTE_107, "NTE.107", HL7::optional,
		   HL7::repetition_on);
    addObject<VAR>(PPR_PC1_VAR_112, "VAR.112", HL7::optional,
		   HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_104(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPR_PC1_OBX_104);
  }
  NTE* getNTE_107(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPR_PC1_NTE_107);
  }
  VAR* getVAR_112(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPR_PC1_VAR_112);
  }

  /* Checker list */
  bool isOBX_104(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_OBX_104) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_107(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_NTE_107) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_112(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_VAR_112) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPR_PC1_102 */

/* ORDER_DETAIL */
struct PPR_PC1_ORDER_DETAIL : public HL7Group {
  PPR_PC1_ORDER_DETAIL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPR_PC1_CHOICE_90,
    PPR_PC1_NTE_98,
    PPR_PC1_VAR_99,
    PPR_PC1_ORDER_OBSERVATION_102,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPR_PC1_ORDER_DETAIL"; }
  PPR_PC1_ORDER_DETAIL* create() const { return new PPR_PC1_ORDER_DETAIL(); }

  /* Initialize object */
  void init() {
    setName("PPR_PC1.ORDER_DETAIL");
    addObject<PPR_PC1_CHOICE>(PPR_PC1_CHOICE_90, "PPR_PC1.CHOICE",
			      HL7::initialized, HL7::repetition_off);
    addObject<NTE>(PPR_PC1_NTE_98, "NTE.98", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PPR_PC1_VAR_99, "VAR.99", HL7::optional, HL7::repetition_on);
    addObject<PPR_PC1_ORDER_OBSERVATION>(PPR_PC1_ORDER_OBSERVATION_102,
					 "PPR_PC1.ORDER_OBSERVATION",
					 HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PPR_PC1_CHOICE* getCHOICE(size_t index = 0) {
    return (PPR_PC1_CHOICE*)this->getObjectSafe(index, PPR_PC1_CHOICE_90);
  }
  NTE* getNTE_98(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPR_PC1_NTE_98);
  }
  VAR* getVAR_99(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPR_PC1_VAR_99);
  }
  PPR_PC1_ORDER_OBSERVATION* getORDER_OBSERVATION(size_t index = 0) {
    return (PPR_PC1_ORDER_OBSERVATION*)this->getObjectSafe(
	index, PPR_PC1_ORDER_OBSERVATION_102);
  }

  /* Checker list */
  bool isCHOICE(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_CHOICE_90) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_98(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_NTE_98) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_99(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_VAR_99) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_ORDER_OBSERVATION_102) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPR_PC1_89 */

/* ORDER */
struct PPR_PC1_ORDER : public HL7Group {
  PPR_PC1_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPR_PC1_ORC_88, PPR_PC1_ORDER_DETAIL_89, FIELD_ID_MAX };

  const char* className() const { return "PPR_PC1_ORDER"; }
  PPR_PC1_ORDER* create() const { return new PPR_PC1_ORDER(); }

  /* Initialize object */
  void init() {
    setName("PPR_PC1.ORDER");
    addObject<ORC>(PPR_PC1_ORC_88, "ORC.88", HL7::initialized,
		   HL7::repetition_off);
    addObject<PPR_PC1_ORDER_DETAIL>(PPR_PC1_ORDER_DETAIL_89,
				    "PPR_PC1.ORDER_DETAIL", HL7::optional,
				    HL7::repetition_off);
  }

  /* Getters list */
  ORC* getORC_88(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, PPR_PC1_ORC_88);
  }
  PPR_PC1_ORDER_DETAIL* getORDER_DETAIL(size_t index = 0) {
    return (PPR_PC1_ORDER_DETAIL*)this->getObjectSafe(index,
						      PPR_PC1_ORDER_DETAIL_89);
  }

  /* Checker list */
  bool isORC_88(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_ORC_88) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_DETAIL(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_ORDER_DETAIL_89) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPR_PC1_86 */

/* PROBLEM */
struct PPR_PC1_PROBLEM : public HL7Group {
  PPR_PC1_PROBLEM() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPR_PC1_PRB_10,
    PPR_PC1_NTE_13,
    PPR_PC1_VAR_18,
    PPR_PC1_PROBLEM_ROLE_21,
    PPR_PC1_PATHWAY_31,
    PPR_PC1_PROBLEM_OBSERVATION_41,
    PPR_PC1_GOAL_51,
    PPR_PC1_ORDER_86,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPR_PC1_PROBLEM"; }
  PPR_PC1_PROBLEM* create() const { return new PPR_PC1_PROBLEM(); }

  /* Initialize object */
  void init() {
    setName("PPR_PC1.PROBLEM");
    addObject<PRB>(PPR_PC1_PRB_10, "PRB.10", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPR_PC1_NTE_13, "NTE.13", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PPR_PC1_VAR_18, "VAR.18", HL7::optional, HL7::repetition_on);
    addObject<PPR_PC1_PROBLEM_ROLE>(PPR_PC1_PROBLEM_ROLE_21,
				    "PPR_PC1.PROBLEM_ROLE", HL7::optional,
				    HL7::repetition_on);
    addObject<PPR_PC1_PATHWAY>(PPR_PC1_PATHWAY_31, "PPR_PC1.PATHWAY",
			       HL7::optional, HL7::repetition_on);
    addObject<PPR_PC1_PROBLEM_OBSERVATION>(PPR_PC1_PROBLEM_OBSERVATION_41,
					   "PPR_PC1.PROBLEM_OBSERVATION",
					   HL7::optional, HL7::repetition_on);
    addObject<PPR_PC1_GOAL>(PPR_PC1_GOAL_51, "PPR_PC1.GOAL", HL7::optional,
			    HL7::repetition_on);
    addObject<PPR_PC1_ORDER>(PPR_PC1_ORDER_86, "PPR_PC1.ORDER", HL7::optional,
			     HL7::repetition_on);
  }

  /* Getters list */
  PRB* getPRB_10(size_t index = 0) {
    return (PRB*)this->getObjectSafe(index, PPR_PC1_PRB_10);
  }
  NTE* getNTE_13(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPR_PC1_NTE_13);
  }
  VAR* getVAR_18(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPR_PC1_VAR_18);
  }
  PPR_PC1_PROBLEM_ROLE* getPROBLEM_ROLE(size_t index = 0) {
    return (PPR_PC1_PROBLEM_ROLE*)this->getObjectSafe(index,
						      PPR_PC1_PROBLEM_ROLE_21);
  }
  PPR_PC1_PATHWAY* getPATHWAY(size_t index = 0) {
    return (PPR_PC1_PATHWAY*)this->getObjectSafe(index, PPR_PC1_PATHWAY_31);
  }
  PPR_PC1_PROBLEM_OBSERVATION* getPROBLEM_OBSERVATION(size_t index = 0) {
    return (PPR_PC1_PROBLEM_OBSERVATION*)this->getObjectSafe(
	index, PPR_PC1_PROBLEM_OBSERVATION_41);
  }
  PPR_PC1_GOAL* getGOAL(size_t index = 0) {
    return (PPR_PC1_GOAL*)this->getObjectSafe(index, PPR_PC1_GOAL_51);
  }
  PPR_PC1_ORDER* getORDER(size_t index = 0) {
    return (PPR_PC1_ORDER*)this->getObjectSafe(index, PPR_PC1_ORDER_86);
  }

  /* Checker list */
  bool isPRB_10(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_PRB_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_13(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_NTE_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_18(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_VAR_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROBLEM_ROLE(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_PROBLEM_ROLE_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATHWAY(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_PATHWAY_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROBLEM_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_PROBLEM_OBSERVATION_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOAL(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_GOAL_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_ORDER_86) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPR_PC1_9 */

/* PPR_PC1 */
struct PPR_PC1 : public HL7Message {
  PPR_PC1() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPR_PC1_MSH_1,
    PPR_PC1_PID_2,
    PPR_PC1_PATIENT_VISIT_3,
    PPR_PC1_PROBLEM_9,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPR_PC1"; }
  PPR_PC1* create() const { return new PPR_PC1(); }

  /* Initialize object */
  void init() {
    setName("PPR_PC1");
    addObject<MSH>(PPR_PC1_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<PID>(PPR_PC1_PID_2, "PID.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<PPR_PC1_PATIENT_VISIT>(PPR_PC1_PATIENT_VISIT_3,
				     "PPR_PC1.PATIENT_VISIT", HL7::optional,
				     HL7::repetition_off);
    addObject<PPR_PC1_PROBLEM>(PPR_PC1_PROBLEM_9, "PPR_PC1.PROBLEM",
			       HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, PPR_PC1_MSH_1);
  }
  PID* getPID_2(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, PPR_PC1_PID_2);
  }
  PPR_PC1_PATIENT_VISIT* getPATIENT_VISIT(size_t index = 0) {
    return (PPR_PC1_PATIENT_VISIT*)this->getObjectSafe(index,
						       PPR_PC1_PATIENT_VISIT_3);
  }
  PPR_PC1_PROBLEM* getPROBLEM(size_t index = 0) {
    return (PPR_PC1_PROBLEM*)this->getObjectSafe(index, PPR_PC1_PROBLEM_9);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_2(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_PID_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT_VISIT(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_PATIENT_VISIT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROBLEM(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC1_PROBLEM_9) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPR_PC1_ */
} /* namespace HL7_24 */
#endif /*  __PPR_PC1__24_H__ */
