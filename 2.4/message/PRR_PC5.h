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


#ifndef __PRR_PC5__24_H__
#define __PRR_PC5__24_H__

#include "../../common/Util.h"
#include "../segment/ERR.h"
#include "../segment/GOL.h"
#include "../segment/MSA.h"
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
#include "../segment/QAK.h"
#include "../segment/QRD.h"
#include "../segment/ROL.h"
#include "../segment/RXO.h"
#include "../segment/VAR.h"

namespace HL7_24 {

/* Internal structures/groups */
struct PRR_PC5_PATIENT_VISIT;       /* PATIENT_VISIT */
struct PRR_PC5_PROBLEM_ROLE;	/* PROBLEM_ROLE */
struct PRR_PC5_PROBLEM_PATHWAY;     /* PROBLEM_PATHWAY */
struct PRR_PC5_PROBLEM_OBSERVATION; /* PROBLEM_OBSERVATION */
struct PRR_PC5_GOAL_ROLE;	   /* GOAL_ROLE */
struct PRR_PC5_GOAL_OBSERVATION;    /* GOAL_OBSERVATION */
struct PRR_PC5_GOAL;		    /* GOAL */
struct PRR_PC5_CHOICE;		    /* CHOICE */
struct PRR_PC5_ORDER_OBSERVATION;   /* ORDER_OBSERVATION */
struct PRR_PC5_ORDER_DETAIL;	/* ORDER_DETAIL */
struct PRR_PC5_ORDER;		    /* ORDER */
struct PRR_PC5_PROBLEM;		    /* PROBLEM */
struct PRR_PC5_PATIENT;		    /* PATIENT */

/* PATIENT_VISIT */
struct PRR_PC5_PATIENT_VISIT : public HL7Group {
  PRR_PC5_PATIENT_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PRR_PC5_PV1_13, PRR_PC5_PV2_15, FIELD_ID_MAX };

  const char* className() const { return "PRR_PC5_PATIENT_VISIT"; }
  PRR_PC5_PATIENT_VISIT* create() const { return new PRR_PC5_PATIENT_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("PRR_PC5.PATIENT_VISIT");
    addObject<PV1>(PRR_PC5_PV1_13, "PV1.13", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(PRR_PC5_PV2_15, "PV2.15", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  PV1* getPV1_13(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, PRR_PC5_PV1_13);
  }
  PV2* getPV2_15(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, PRR_PC5_PV2_15);
  }

  /* Checker list */
  bool isPV1_13(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_PV1_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_15(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_PV2_15) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PRR_PC5_12 */

/* PROBLEM_ROLE */
struct PRR_PC5_PROBLEM_ROLE : public HL7Group {
  PRR_PC5_PROBLEM_ROLE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PRR_PC5_ROL_32, PRR_PC5_VAR_35, FIELD_ID_MAX };

  const char* className() const { return "PRR_PC5_PROBLEM_ROLE"; }
  PRR_PC5_PROBLEM_ROLE* create() const { return new PRR_PC5_PROBLEM_ROLE(); }

  /* Initialize object */
  void init() {
    setName("PRR_PC5.PROBLEM_ROLE");
    addObject<ROL>(PRR_PC5_ROL_32, "ROL.32", HL7::initialized,
		   HL7::repetition_off);
    addObject<VAR>(PRR_PC5_VAR_35, "VAR.35", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ROL* getROL_32(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PRR_PC5_ROL_32);
  }
  VAR* getVAR_35(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PRR_PC5_VAR_35);
  }

  /* Checker list */
  bool isROL_32(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_ROL_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_35(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_VAR_35) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PRR_PC5_30 */

/* PROBLEM_PATHWAY */
struct PRR_PC5_PROBLEM_PATHWAY : public HL7Group {
  PRR_PC5_PROBLEM_PATHWAY() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PRR_PC5_PTH_42, PRR_PC5_VAR_45, FIELD_ID_MAX };

  const char* className() const { return "PRR_PC5_PROBLEM_PATHWAY"; }
  PRR_PC5_PROBLEM_PATHWAY* create() const {
    return new PRR_PC5_PROBLEM_PATHWAY();
  }

  /* Initialize object */
  void init() {
    setName("PRR_PC5.PROBLEM_PATHWAY");
    addObject<PTH>(PRR_PC5_PTH_42, "PTH.42", HL7::initialized,
		   HL7::repetition_off);
    addObject<VAR>(PRR_PC5_VAR_45, "VAR.45", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PTH* getPTH_42(size_t index = 0) {
    return (PTH*)this->getObjectSafe(index, PRR_PC5_PTH_42);
  }
  VAR* getVAR_45(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PRR_PC5_VAR_45);
  }

  /* Checker list */
  bool isPTH_42(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_PTH_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_45(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_VAR_45) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PRR_PC5_40 */

/* PROBLEM_OBSERVATION */
struct PRR_PC5_PROBLEM_OBSERVATION : public HL7Group {
  PRR_PC5_PROBLEM_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PRR_PC5_OBX_52, PRR_PC5_NTE_55, FIELD_ID_MAX };

  const char* className() const { return "PRR_PC5_PROBLEM_OBSERVATION"; }
  PRR_PC5_PROBLEM_OBSERVATION* create() const {
    return new PRR_PC5_PROBLEM_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("PRR_PC5.PROBLEM_OBSERVATION");
    addObject<OBX>(PRR_PC5_OBX_52, "OBX.52", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PRR_PC5_NTE_55, "NTE.55", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_52(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PRR_PC5_OBX_52);
  }
  NTE* getNTE_55(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PRR_PC5_NTE_55);
  }

  /* Checker list */
  bool isOBX_52(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_OBX_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_55(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_NTE_55) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PRR_PC5_50 */

/* GOAL_ROLE */
struct PRR_PC5_GOAL_ROLE : public HL7Group {
  PRR_PC5_GOAL_ROLE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PRR_PC5_ROL_75, PRR_PC5_VAR_78, FIELD_ID_MAX };

  const char* className() const { return "PRR_PC5_GOAL_ROLE"; }
  PRR_PC5_GOAL_ROLE* create() const { return new PRR_PC5_GOAL_ROLE(); }

  /* Initialize object */
  void init() {
    setName("PRR_PC5.GOAL_ROLE");
    addObject<ROL>(PRR_PC5_ROL_75, "ROL.75", HL7::initialized,
		   HL7::repetition_off);
    addObject<VAR>(PRR_PC5_VAR_78, "VAR.78", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ROL* getROL_75(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PRR_PC5_ROL_75);
  }
  VAR* getVAR_78(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PRR_PC5_VAR_78);
  }

  /* Checker list */
  bool isROL_75(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_ROL_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_78(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_VAR_78) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PRR_PC5_73 */

/* GOAL_OBSERVATION */
struct PRR_PC5_GOAL_OBSERVATION : public HL7Group {
  PRR_PC5_GOAL_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PRR_PC5_OBX_85, PRR_PC5_NTE_88, FIELD_ID_MAX };

  const char* className() const { return "PRR_PC5_GOAL_OBSERVATION"; }
  PRR_PC5_GOAL_OBSERVATION* create() const {
    return new PRR_PC5_GOAL_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("PRR_PC5.GOAL_OBSERVATION");
    addObject<OBX>(PRR_PC5_OBX_85, "OBX.85", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PRR_PC5_NTE_88, "NTE.88", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_85(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PRR_PC5_OBX_85);
  }
  NTE* getNTE_88(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PRR_PC5_NTE_88);
  }

  /* Checker list */
  bool isOBX_85(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_OBX_85) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_88(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_NTE_88) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PRR_PC5_83 */

/* GOAL */
struct PRR_PC5_GOAL : public HL7Group {
  PRR_PC5_GOAL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PRR_PC5_GOL_62,
    PRR_PC5_NTE_65,
    PRR_PC5_VAR_70,
    PRR_PC5_GOAL_ROLE_73,
    PRR_PC5_GOAL_OBSERVATION_83,
    FIELD_ID_MAX
  };

  const char* className() const { return "PRR_PC5_GOAL"; }
  PRR_PC5_GOAL* create() const { return new PRR_PC5_GOAL(); }

  /* Initialize object */
  void init() {
    setName("PRR_PC5.GOAL");
    addObject<GOL>(PRR_PC5_GOL_62, "GOL.62", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PRR_PC5_NTE_65, "NTE.65", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PRR_PC5_VAR_70, "VAR.70", HL7::optional, HL7::repetition_on);
    addObject<PRR_PC5_GOAL_ROLE>(PRR_PC5_GOAL_ROLE_73, "PRR_PC5.GOAL_ROLE",
				 HL7::optional, HL7::repetition_on);
    addObject<PRR_PC5_GOAL_OBSERVATION>(PRR_PC5_GOAL_OBSERVATION_83,
					"PRR_PC5.GOAL_OBSERVATION",
					HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  GOL* getGOL_62(size_t index = 0) {
    return (GOL*)this->getObjectSafe(index, PRR_PC5_GOL_62);
  }
  NTE* getNTE_65(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PRR_PC5_NTE_65);
  }
  VAR* getVAR_70(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PRR_PC5_VAR_70);
  }
  PRR_PC5_GOAL_ROLE* getGOAL_ROLE(size_t index = 0) {
    return (PRR_PC5_GOAL_ROLE*)this->getObjectSafe(index, PRR_PC5_GOAL_ROLE_73);
  }
  PRR_PC5_GOAL_OBSERVATION* getGOAL_OBSERVATION(size_t index = 0) {
    return (PRR_PC5_GOAL_OBSERVATION*)this->getObjectSafe(
	index, PRR_PC5_GOAL_OBSERVATION_83);
  }

  /* Checker list */
  bool isGOL_62(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_GOL_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_65(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_NTE_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_70(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_VAR_70) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOAL_ROLE(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_GOAL_ROLE_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOAL_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_GOAL_OBSERVATION_83) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PRR_PC5_60 */

/* CHOICE */
struct PRR_PC5_CHOICE : public HL7Group {
  PRR_PC5_CHOICE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PRR_PC5_OBR_100, PRR_PC5_RXO_102, FIELD_ID_MAX };

  const char* className() const { return "PRR_PC5_CHOICE"; }
  PRR_PC5_CHOICE* create() const { return new PRR_PC5_CHOICE(); }

  /* Initialize object */
  void init() {
    setName("PRR_PC5.CHOICE");
    addObject<OBR>(PRR_PC5_OBR_100, "OBR.100", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXO>(PRR_PC5_RXO_102, "RXO.102", HL7::initialized,
		   HL7::repetition_off);
  }

  /* Getters list */
  OBR* getOBR_100(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, PRR_PC5_OBR_100);
  }
  RXO* getRXO_102(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, PRR_PC5_RXO_102);
  }

  /* Checker list */
  bool isOBR_100(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_OBR_100) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_102(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_RXO_102) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PRR_PC5_99 */

/* ORDER_OBSERVATION */
struct PRR_PC5_ORDER_OBSERVATION : public HL7Group {
  PRR_PC5_ORDER_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PRR_PC5_OBX_113,
    PRR_PC5_NTE_120,
    PRR_PC5_VAR_121,
    FIELD_ID_MAX
  };

  const char* className() const { return "PRR_PC5_ORDER_OBSERVATION"; }
  PRR_PC5_ORDER_OBSERVATION* create() const {
    return new PRR_PC5_ORDER_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("PRR_PC5.ORDER_OBSERVATION");
    addObject<OBX>(PRR_PC5_OBX_113, "OBX.113", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PRR_PC5_NTE_120, "NTE.120", HL7::optional,
		   HL7::repetition_on);
    addObject<VAR>(PRR_PC5_VAR_121, "VAR.121", HL7::optional,
		   HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_113(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PRR_PC5_OBX_113);
  }
  NTE* getNTE_120(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PRR_PC5_NTE_120);
  }
  VAR* getVAR_121(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PRR_PC5_VAR_121);
  }

  /* Checker list */
  bool isOBX_113(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_OBX_113) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_120(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_NTE_120) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_121(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_VAR_121) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PRR_PC5_111 */

/* ORDER_DETAIL */
struct PRR_PC5_ORDER_DETAIL : public HL7Group {
  PRR_PC5_ORDER_DETAIL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PRR_PC5_CHOICE_99,
    PRR_PC5_NTE_107,
    PRR_PC5_VAR_108,
    PRR_PC5_ORDER_OBSERVATION_111,
    FIELD_ID_MAX
  };

  const char* className() const { return "PRR_PC5_ORDER_DETAIL"; }
  PRR_PC5_ORDER_DETAIL* create() const { return new PRR_PC5_ORDER_DETAIL(); }

  /* Initialize object */
  void init() {
    setName("PRR_PC5.ORDER_DETAIL");
    addObject<PRR_PC5_CHOICE>(PRR_PC5_CHOICE_99, "PRR_PC5.CHOICE",
			      HL7::initialized, HL7::repetition_off);
    addObject<NTE>(PRR_PC5_NTE_107, "NTE.107", HL7::optional,
		   HL7::repetition_on);
    addObject<VAR>(PRR_PC5_VAR_108, "VAR.108", HL7::optional,
		   HL7::repetition_on);
    addObject<PRR_PC5_ORDER_OBSERVATION>(PRR_PC5_ORDER_OBSERVATION_111,
					 "PRR_PC5.ORDER_OBSERVATION",
					 HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PRR_PC5_CHOICE* getCHOICE(size_t index = 0) {
    return (PRR_PC5_CHOICE*)this->getObjectSafe(index, PRR_PC5_CHOICE_99);
  }
  NTE* getNTE_107(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PRR_PC5_NTE_107);
  }
  VAR* getVAR_108(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PRR_PC5_VAR_108);
  }
  PRR_PC5_ORDER_OBSERVATION* getORDER_OBSERVATION(size_t index = 0) {
    return (PRR_PC5_ORDER_OBSERVATION*)this->getObjectSafe(
	index, PRR_PC5_ORDER_OBSERVATION_111);
  }

  /* Checker list */
  bool isCHOICE(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_CHOICE_99) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_107(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_NTE_107) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_108(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_VAR_108) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_ORDER_OBSERVATION_111) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PRR_PC5_98 */

/* ORDER */
struct PRR_PC5_ORDER : public HL7Group {
  PRR_PC5_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PRR_PC5_ORC_97, PRR_PC5_ORDER_DETAIL_98, FIELD_ID_MAX };

  const char* className() const { return "PRR_PC5_ORDER"; }
  PRR_PC5_ORDER* create() const { return new PRR_PC5_ORDER(); }

  /* Initialize object */
  void init() {
    setName("PRR_PC5.ORDER");
    addObject<ORC>(PRR_PC5_ORC_97, "ORC.97", HL7::initialized,
		   HL7::repetition_off);
    addObject<PRR_PC5_ORDER_DETAIL>(PRR_PC5_ORDER_DETAIL_98,
				    "PRR_PC5.ORDER_DETAIL", HL7::optional,
				    HL7::repetition_off);
  }

  /* Getters list */
  ORC* getORC_97(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, PRR_PC5_ORC_97);
  }
  PRR_PC5_ORDER_DETAIL* getORDER_DETAIL(size_t index = 0) {
    return (PRR_PC5_ORDER_DETAIL*)this->getObjectSafe(index,
						      PRR_PC5_ORDER_DETAIL_98);
  }

  /* Checker list */
  bool isORC_97(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_ORC_97) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_DETAIL(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_ORDER_DETAIL_98) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PRR_PC5_95 */

/* PROBLEM */
struct PRR_PC5_PROBLEM : public HL7Group {
  PRR_PC5_PROBLEM() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PRR_PC5_PRB_19,
    PRR_PC5_NTE_22,
    PRR_PC5_VAR_27,
    PRR_PC5_PROBLEM_ROLE_30,
    PRR_PC5_PROBLEM_PATHWAY_40,
    PRR_PC5_PROBLEM_OBSERVATION_50,
    PRR_PC5_GOAL_60,
    PRR_PC5_ORDER_95,
    FIELD_ID_MAX
  };

  const char* className() const { return "PRR_PC5_PROBLEM"; }
  PRR_PC5_PROBLEM* create() const { return new PRR_PC5_PROBLEM(); }

  /* Initialize object */
  void init() {
    setName("PRR_PC5.PROBLEM");
    addObject<PRB>(PRR_PC5_PRB_19, "PRB.19", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PRR_PC5_NTE_22, "NTE.22", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PRR_PC5_VAR_27, "VAR.27", HL7::optional, HL7::repetition_on);
    addObject<PRR_PC5_PROBLEM_ROLE>(PRR_PC5_PROBLEM_ROLE_30,
				    "PRR_PC5.PROBLEM_ROLE", HL7::optional,
				    HL7::repetition_on);
    addObject<PRR_PC5_PROBLEM_PATHWAY>(PRR_PC5_PROBLEM_PATHWAY_40,
				       "PRR_PC5.PROBLEM_PATHWAY", HL7::optional,
				       HL7::repetition_on);
    addObject<PRR_PC5_PROBLEM_OBSERVATION>(PRR_PC5_PROBLEM_OBSERVATION_50,
					   "PRR_PC5.PROBLEM_OBSERVATION",
					   HL7::optional, HL7::repetition_on);
    addObject<PRR_PC5_GOAL>(PRR_PC5_GOAL_60, "PRR_PC5.GOAL", HL7::optional,
			    HL7::repetition_on);
    addObject<PRR_PC5_ORDER>(PRR_PC5_ORDER_95, "PRR_PC5.ORDER", HL7::optional,
			     HL7::repetition_on);
  }

  /* Getters list */
  PRB* getPRB_19(size_t index = 0) {
    return (PRB*)this->getObjectSafe(index, PRR_PC5_PRB_19);
  }
  NTE* getNTE_22(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PRR_PC5_NTE_22);
  }
  VAR* getVAR_27(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PRR_PC5_VAR_27);
  }
  PRR_PC5_PROBLEM_ROLE* getPROBLEM_ROLE(size_t index = 0) {
    return (PRR_PC5_PROBLEM_ROLE*)this->getObjectSafe(index,
						      PRR_PC5_PROBLEM_ROLE_30);
  }
  PRR_PC5_PROBLEM_PATHWAY* getPROBLEM_PATHWAY(size_t index = 0) {
    return (PRR_PC5_PROBLEM_PATHWAY*)this->getObjectSafe(
	index, PRR_PC5_PROBLEM_PATHWAY_40);
  }
  PRR_PC5_PROBLEM_OBSERVATION* getPROBLEM_OBSERVATION(size_t index = 0) {
    return (PRR_PC5_PROBLEM_OBSERVATION*)this->getObjectSafe(
	index, PRR_PC5_PROBLEM_OBSERVATION_50);
  }
  PRR_PC5_GOAL* getGOAL(size_t index = 0) {
    return (PRR_PC5_GOAL*)this->getObjectSafe(index, PRR_PC5_GOAL_60);
  }
  PRR_PC5_ORDER* getORDER(size_t index = 0) {
    return (PRR_PC5_ORDER*)this->getObjectSafe(index, PRR_PC5_ORDER_95);
  }

  /* Checker list */
  bool isPRB_19(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_PRB_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_22(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_NTE_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_27(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_VAR_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROBLEM_ROLE(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_PROBLEM_ROLE_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROBLEM_PATHWAY(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_PROBLEM_PATHWAY_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROBLEM_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_PROBLEM_OBSERVATION_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOAL(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_GOAL_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_ORDER_95) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PRR_PC5_18 */

/* PATIENT */
struct PRR_PC5_PATIENT : public HL7Group {
  PRR_PC5_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PRR_PC5_PID_11,
    PRR_PC5_PATIENT_VISIT_12,
    PRR_PC5_PROBLEM_18,
    FIELD_ID_MAX
  };

  const char* className() const { return "PRR_PC5_PATIENT"; }
  PRR_PC5_PATIENT* create() const { return new PRR_PC5_PATIENT(); }

  /* Initialize object */
  void init() {
    setName("PRR_PC5.PATIENT");
    addObject<PID>(PRR_PC5_PID_11, "PID.11", HL7::initialized,
		   HL7::repetition_off);
    addObject<PRR_PC5_PATIENT_VISIT>(PRR_PC5_PATIENT_VISIT_12,
				     "PRR_PC5.PATIENT_VISIT", HL7::optional,
				     HL7::repetition_off);
    addObject<PRR_PC5_PROBLEM>(PRR_PC5_PROBLEM_18, "PRR_PC5.PROBLEM",
			       HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  PID* getPID_11(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, PRR_PC5_PID_11);
  }
  PRR_PC5_PATIENT_VISIT* getPATIENT_VISIT(size_t index = 0) {
    return (PRR_PC5_PATIENT_VISIT*)this->getObjectSafe(
	index, PRR_PC5_PATIENT_VISIT_12);
  }
  PRR_PC5_PROBLEM* getPROBLEM(size_t index = 0) {
    return (PRR_PC5_PROBLEM*)this->getObjectSafe(index, PRR_PC5_PROBLEM_18);
  }

  /* Checker list */
  bool isPID_11(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_PID_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT_VISIT(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_PATIENT_VISIT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROBLEM(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_PROBLEM_18) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PRR_PC5_10 */

/* PRR_PC5 */
struct PRR_PC5 : public HL7Message {
  PRR_PC5() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PRR_PC5_MSH_1,
    PRR_PC5_MSA_2,
    PRR_PC5_ERR_4,
    PRR_PC5_QAK_7,
    PRR_PC5_QRD_9,
    PRR_PC5_PATIENT_10,
    FIELD_ID_MAX
  };

  const char* className() const { return "PRR_PC5"; }
  PRR_PC5* create() const { return new PRR_PC5(); }

  /* Initialize object */
  void init() {
    setName("PRR_PC5");
    addObject<MSH>(PRR_PC5_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(PRR_PC5_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(PRR_PC5_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<QAK>(PRR_PC5_QAK_7, "QAK.7", HL7::optional, HL7::repetition_off);
    addObject<QRD>(PRR_PC5_QRD_9, "QRD.9", HL7::initialized,
		   HL7::repetition_off);
    addObject<PRR_PC5_PATIENT>(PRR_PC5_PATIENT_10, "PRR_PC5.PATIENT",
			       HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, PRR_PC5_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, PRR_PC5_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, PRR_PC5_ERR_4);
  }
  QAK* getQAK_7(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, PRR_PC5_QAK_7);
  }
  QRD* getQRD_9(size_t index = 0) {
    return (QRD*)this->getObjectSafe(index, PRR_PC5_QRD_9);
  }
  PRR_PC5_PATIENT* getPATIENT(size_t index = 0) {
    return (PRR_PC5_PATIENT*)this->getObjectSafe(index, PRR_PC5_PATIENT_10);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_7(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_QAK_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRD_9(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_QRD_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, PRR_PC5_PATIENT_10) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PRR_PC5_ */
} /* namespace HL7_24 */
#endif /*  __PRR_PC5__24_H__ */
