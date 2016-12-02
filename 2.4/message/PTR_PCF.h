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


#ifndef __PTR_PCF__24_H__
#define __PTR_PCF__24_H__

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
struct PTR_PCF_PATIENT_VISIT;       /* PATIENT_VISIT */
struct PTR_PCF_PATHWAY_ROLE;	/* PATHWAY_ROLE */
struct PTR_PCF_PROBLEM_ROLE;	/* PROBLEM_ROLE */
struct PTR_PCF_PROBLEM_OBSERVATION; /* PROBLEM_OBSERVATION */
struct PTR_PCF_GOAL_ROLE;	   /* GOAL_ROLE */
struct PTR_PCF_GOAL_OBSERVATION;    /* GOAL_OBSERVATION */
struct PTR_PCF_GOAL;		    /* GOAL */
struct PTR_PCF_CHOICE;		    /* CHOICE */
struct PTR_PCF_ORDER_OBSERVATION;   /* ORDER_OBSERVATION */
struct PTR_PCF_ORDER_DETAIL;	/* ORDER_DETAIL */
struct PTR_PCF_ORDER;		    /* ORDER */
struct PTR_PCF_PROBLEM;		    /* PROBLEM */
struct PTR_PCF_PATHWAY;		    /* PATHWAY */
struct PTR_PCF_PATIENT;		    /* PATIENT */

/* PATIENT_VISIT */
struct PTR_PCF_PATIENT_VISIT : public HL7Group {
  PTR_PCF_PATIENT_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PTR_PCF_PV1_13, PTR_PCF_PV2_15, FIELD_ID_MAX };

  const char* className() const { return "PTR_PCF_PATIENT_VISIT"; }
  PTR_PCF_PATIENT_VISIT* create() const { return new PTR_PCF_PATIENT_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("PTR_PCF.PATIENT_VISIT");
    addObject<PV1>(PTR_PCF_PV1_13, "PV1.13", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(PTR_PCF_PV2_15, "PV2.15", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  PV1* getPV1_13(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, PTR_PCF_PV1_13);
  }
  PV2* getPV2_15(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, PTR_PCF_PV2_15);
  }

  /* Checker list */
  bool isPV1_13(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_PV1_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_15(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_PV2_15) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PTR_PCF_12 */

/* PATHWAY_ROLE */
struct PTR_PCF_PATHWAY_ROLE : public HL7Group {
  PTR_PCF_PATHWAY_ROLE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PTR_PCF_ROL_32, PTR_PCF_VAR_35, FIELD_ID_MAX };

  const char* className() const { return "PTR_PCF_PATHWAY_ROLE"; }
  PTR_PCF_PATHWAY_ROLE* create() const { return new PTR_PCF_PATHWAY_ROLE(); }

  /* Initialize object */
  void init() {
    setName("PTR_PCF.PATHWAY_ROLE");
    addObject<ROL>(PTR_PCF_ROL_32, "ROL.32", HL7::initialized,
		   HL7::repetition_off);
    addObject<VAR>(PTR_PCF_VAR_35, "VAR.35", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ROL* getROL_32(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PTR_PCF_ROL_32);
  }
  VAR* getVAR_35(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PTR_PCF_VAR_35);
  }

  /* Checker list */
  bool isROL_32(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_ROL_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_35(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_VAR_35) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PTR_PCF_30 */

/* PROBLEM_ROLE */
struct PTR_PCF_PROBLEM_ROLE : public HL7Group {
  PTR_PCF_PROBLEM_ROLE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PTR_PCF_ROL_55, PTR_PCF_VAR_58, FIELD_ID_MAX };

  const char* className() const { return "PTR_PCF_PROBLEM_ROLE"; }
  PTR_PCF_PROBLEM_ROLE* create() const { return new PTR_PCF_PROBLEM_ROLE(); }

  /* Initialize object */
  void init() {
    setName("PTR_PCF.PROBLEM_ROLE");
    addObject<ROL>(PTR_PCF_ROL_55, "ROL.55", HL7::initialized,
		   HL7::repetition_off);
    addObject<VAR>(PTR_PCF_VAR_58, "VAR.58", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ROL* getROL_55(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PTR_PCF_ROL_55);
  }
  VAR* getVAR_58(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PTR_PCF_VAR_58);
  }

  /* Checker list */
  bool isROL_55(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_ROL_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_58(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_VAR_58) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PTR_PCF_53 */

/* PROBLEM_OBSERVATION */
struct PTR_PCF_PROBLEM_OBSERVATION : public HL7Group {
  PTR_PCF_PROBLEM_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PTR_PCF_OBX_65, PTR_PCF_NTE_67, FIELD_ID_MAX };

  const char* className() const { return "PTR_PCF_PROBLEM_OBSERVATION"; }
  PTR_PCF_PROBLEM_OBSERVATION* create() const {
    return new PTR_PCF_PROBLEM_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("PTR_PCF.PROBLEM_OBSERVATION");
    addObject<OBX>(PTR_PCF_OBX_65, "OBX.65", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PTR_PCF_NTE_67, "NTE.67", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_65(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PTR_PCF_OBX_65);
  }
  NTE* getNTE_67(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PTR_PCF_NTE_67);
  }

  /* Checker list */
  bool isOBX_65(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_OBX_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_67(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_NTE_67) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PTR_PCF_63 */

/* GOAL_ROLE */
struct PTR_PCF_GOAL_ROLE : public HL7Group {
  PTR_PCF_GOAL_ROLE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PTR_PCF_ROL_87, PTR_PCF_VAR_90, FIELD_ID_MAX };

  const char* className() const { return "PTR_PCF_GOAL_ROLE"; }
  PTR_PCF_GOAL_ROLE* create() const { return new PTR_PCF_GOAL_ROLE(); }

  /* Initialize object */
  void init() {
    setName("PTR_PCF.GOAL_ROLE");
    addObject<ROL>(PTR_PCF_ROL_87, "ROL.87", HL7::initialized,
		   HL7::repetition_off);
    addObject<VAR>(PTR_PCF_VAR_90, "VAR.90", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ROL* getROL_87(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PTR_PCF_ROL_87);
  }
  VAR* getVAR_90(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PTR_PCF_VAR_90);
  }

  /* Checker list */
  bool isROL_87(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_ROL_87) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_90(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_VAR_90) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PTR_PCF_85 */

/* GOAL_OBSERVATION */
struct PTR_PCF_GOAL_OBSERVATION : public HL7Group {
  PTR_PCF_GOAL_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PTR_PCF_OBX_97, PTR_PCF_NTE_100, FIELD_ID_MAX };

  const char* className() const { return "PTR_PCF_GOAL_OBSERVATION"; }
  PTR_PCF_GOAL_OBSERVATION* create() const {
    return new PTR_PCF_GOAL_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("PTR_PCF.GOAL_OBSERVATION");
    addObject<OBX>(PTR_PCF_OBX_97, "OBX.97", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PTR_PCF_NTE_100, "NTE.100", HL7::optional,
		   HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_97(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PTR_PCF_OBX_97);
  }
  NTE* getNTE_100(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PTR_PCF_NTE_100);
  }

  /* Checker list */
  bool isOBX_97(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_OBX_97) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_100(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_NTE_100) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PTR_PCF_95 */

/* GOAL */
struct PTR_PCF_GOAL : public HL7Group {
  PTR_PCF_GOAL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PTR_PCF_GOL_74,
    PTR_PCF_NTE_77,
    PTR_PCF_VAR_82,
    PTR_PCF_GOAL_ROLE_85,
    PTR_PCF_GOAL_OBSERVATION_95,
    FIELD_ID_MAX
  };

  const char* className() const { return "PTR_PCF_GOAL"; }
  PTR_PCF_GOAL* create() const { return new PTR_PCF_GOAL(); }

  /* Initialize object */
  void init() {
    setName("PTR_PCF.GOAL");
    addObject<GOL>(PTR_PCF_GOL_74, "GOL.74", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PTR_PCF_NTE_77, "NTE.77", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PTR_PCF_VAR_82, "VAR.82", HL7::optional, HL7::repetition_on);
    addObject<PTR_PCF_GOAL_ROLE>(PTR_PCF_GOAL_ROLE_85, "PTR_PCF.GOAL_ROLE",
				 HL7::optional, HL7::repetition_on);
    addObject<PTR_PCF_GOAL_OBSERVATION>(PTR_PCF_GOAL_OBSERVATION_95,
					"PTR_PCF.GOAL_OBSERVATION",
					HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  GOL* getGOL_74(size_t index = 0) {
    return (GOL*)this->getObjectSafe(index, PTR_PCF_GOL_74);
  }
  NTE* getNTE_77(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PTR_PCF_NTE_77);
  }
  VAR* getVAR_82(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PTR_PCF_VAR_82);
  }
  PTR_PCF_GOAL_ROLE* getGOAL_ROLE(size_t index = 0) {
    return (PTR_PCF_GOAL_ROLE*)this->getObjectSafe(index, PTR_PCF_GOAL_ROLE_85);
  }
  PTR_PCF_GOAL_OBSERVATION* getGOAL_OBSERVATION(size_t index = 0) {
    return (PTR_PCF_GOAL_OBSERVATION*)this->getObjectSafe(
	index, PTR_PCF_GOAL_OBSERVATION_95);
  }

  /* Checker list */
  bool isGOL_74(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_GOL_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_77(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_NTE_77) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_82(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_VAR_82) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOAL_ROLE(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_GOAL_ROLE_85) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOAL_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_GOAL_OBSERVATION_95) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PTR_PCF_72 */

/* CHOICE */
struct PTR_PCF_CHOICE : public HL7Group {
  PTR_PCF_CHOICE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PTR_PCF_OBR_112, PTR_PCF_RXO_114, FIELD_ID_MAX };

  const char* className() const { return "PTR_PCF_CHOICE"; }
  PTR_PCF_CHOICE* create() const { return new PTR_PCF_CHOICE(); }

  /* Initialize object */
  void init() {
    setName("PTR_PCF.CHOICE");
    addObject<OBR>(PTR_PCF_OBR_112, "OBR.112", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXO>(PTR_PCF_RXO_114, "RXO.114", HL7::initialized,
		   HL7::repetition_off);
  }

  /* Getters list */
  OBR* getOBR_112(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, PTR_PCF_OBR_112);
  }
  RXO* getRXO_114(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, PTR_PCF_RXO_114);
  }

  /* Checker list */
  bool isOBR_112(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_OBR_112) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_114(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_RXO_114) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PTR_PCF_111 */

/* ORDER_OBSERVATION */
struct PTR_PCF_ORDER_OBSERVATION : public HL7Group {
  PTR_PCF_ORDER_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PTR_PCF_OBX_125,
    PTR_PCF_NTE_128,
    PTR_PCF_VAR_133,
    FIELD_ID_MAX
  };

  const char* className() const { return "PTR_PCF_ORDER_OBSERVATION"; }
  PTR_PCF_ORDER_OBSERVATION* create() const {
    return new PTR_PCF_ORDER_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("PTR_PCF.ORDER_OBSERVATION");
    addObject<OBX>(PTR_PCF_OBX_125, "OBX.125", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PTR_PCF_NTE_128, "NTE.128", HL7::optional,
		   HL7::repetition_on);
    addObject<VAR>(PTR_PCF_VAR_133, "VAR.133", HL7::optional,
		   HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_125(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PTR_PCF_OBX_125);
  }
  NTE* getNTE_128(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PTR_PCF_NTE_128);
  }
  VAR* getVAR_133(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PTR_PCF_VAR_133);
  }

  /* Checker list */
  bool isOBX_125(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_OBX_125) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_128(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_NTE_128) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_133(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_VAR_133) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PTR_PCF_123 */

/* ORDER_DETAIL */
struct PTR_PCF_ORDER_DETAIL : public HL7Group {
  PTR_PCF_ORDER_DETAIL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PTR_PCF_CHOICE_111,
    PTR_PCF_NTE_119,
    PTR_PCF_VAR_120,
    PTR_PCF_ORDER_OBSERVATION_123,
    FIELD_ID_MAX
  };

  const char* className() const { return "PTR_PCF_ORDER_DETAIL"; }
  PTR_PCF_ORDER_DETAIL* create() const { return new PTR_PCF_ORDER_DETAIL(); }

  /* Initialize object */
  void init() {
    setName("PTR_PCF.ORDER_DETAIL");
    addObject<PTR_PCF_CHOICE>(PTR_PCF_CHOICE_111, "PTR_PCF.CHOICE",
			      HL7::initialized, HL7::repetition_off);
    addObject<NTE>(PTR_PCF_NTE_119, "NTE.119", HL7::optional,
		   HL7::repetition_on);
    addObject<VAR>(PTR_PCF_VAR_120, "VAR.120", HL7::optional,
		   HL7::repetition_on);
    addObject<PTR_PCF_ORDER_OBSERVATION>(PTR_PCF_ORDER_OBSERVATION_123,
					 "PTR_PCF.ORDER_OBSERVATION",
					 HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PTR_PCF_CHOICE* getCHOICE(size_t index = 0) {
    return (PTR_PCF_CHOICE*)this->getObjectSafe(index, PTR_PCF_CHOICE_111);
  }
  NTE* getNTE_119(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PTR_PCF_NTE_119);
  }
  VAR* getVAR_120(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PTR_PCF_VAR_120);
  }
  PTR_PCF_ORDER_OBSERVATION* getORDER_OBSERVATION(size_t index = 0) {
    return (PTR_PCF_ORDER_OBSERVATION*)this->getObjectSafe(
	index, PTR_PCF_ORDER_OBSERVATION_123);
  }

  /* Checker list */
  bool isCHOICE(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_CHOICE_111) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_119(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_NTE_119) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_120(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_VAR_120) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_ORDER_OBSERVATION_123) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PTR_PCF_110 */

/* ORDER */
struct PTR_PCF_ORDER : public HL7Group {
  PTR_PCF_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PTR_PCF_ORC_109, PTR_PCF_ORDER_DETAIL_110, FIELD_ID_MAX };

  const char* className() const { return "PTR_PCF_ORDER"; }
  PTR_PCF_ORDER* create() const { return new PTR_PCF_ORDER(); }

  /* Initialize object */
  void init() {
    setName("PTR_PCF.ORDER");
    addObject<ORC>(PTR_PCF_ORC_109, "ORC.109", HL7::initialized,
		   HL7::repetition_off);
    addObject<PTR_PCF_ORDER_DETAIL>(PTR_PCF_ORDER_DETAIL_110,
				    "PTR_PCF.ORDER_DETAIL", HL7::optional,
				    HL7::repetition_off);
  }

  /* Getters list */
  ORC* getORC_109(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, PTR_PCF_ORC_109);
  }
  PTR_PCF_ORDER_DETAIL* getORDER_DETAIL(size_t index = 0) {
    return (PTR_PCF_ORDER_DETAIL*)this->getObjectSafe(index,
						      PTR_PCF_ORDER_DETAIL_110);
  }

  /* Checker list */
  bool isORC_109(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_ORC_109) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_DETAIL(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_ORDER_DETAIL_110) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PTR_PCF_107 */

/* PROBLEM */
struct PTR_PCF_PROBLEM : public HL7Group {
  PTR_PCF_PROBLEM() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PTR_PCF_PRB_42,
    PTR_PCF_NTE_45,
    PTR_PCF_VAR_50,
    PTR_PCF_PROBLEM_ROLE_53,
    PTR_PCF_PROBLEM_OBSERVATION_63,
    PTR_PCF_GOAL_72,
    PTR_PCF_ORDER_107,
    FIELD_ID_MAX
  };

  const char* className() const { return "PTR_PCF_PROBLEM"; }
  PTR_PCF_PROBLEM* create() const { return new PTR_PCF_PROBLEM(); }

  /* Initialize object */
  void init() {
    setName("PTR_PCF.PROBLEM");
    addObject<PRB>(PTR_PCF_PRB_42, "PRB.42", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PTR_PCF_NTE_45, "NTE.45", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PTR_PCF_VAR_50, "VAR.50", HL7::optional, HL7::repetition_on);
    addObject<PTR_PCF_PROBLEM_ROLE>(PTR_PCF_PROBLEM_ROLE_53,
				    "PTR_PCF.PROBLEM_ROLE", HL7::optional,
				    HL7::repetition_on);
    addObject<PTR_PCF_PROBLEM_OBSERVATION>(PTR_PCF_PROBLEM_OBSERVATION_63,
					   "PTR_PCF.PROBLEM_OBSERVATION",
					   HL7::optional, HL7::repetition_on);
    addObject<PTR_PCF_GOAL>(PTR_PCF_GOAL_72, "PTR_PCF.GOAL", HL7::optional,
			    HL7::repetition_on);
    addObject<PTR_PCF_ORDER>(PTR_PCF_ORDER_107, "PTR_PCF.ORDER", HL7::optional,
			     HL7::repetition_on);
  }

  /* Getters list */
  PRB* getPRB_42(size_t index = 0) {
    return (PRB*)this->getObjectSafe(index, PTR_PCF_PRB_42);
  }
  NTE* getNTE_45(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PTR_PCF_NTE_45);
  }
  VAR* getVAR_50(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PTR_PCF_VAR_50);
  }
  PTR_PCF_PROBLEM_ROLE* getPROBLEM_ROLE(size_t index = 0) {
    return (PTR_PCF_PROBLEM_ROLE*)this->getObjectSafe(index,
						      PTR_PCF_PROBLEM_ROLE_53);
  }
  PTR_PCF_PROBLEM_OBSERVATION* getPROBLEM_OBSERVATION(size_t index = 0) {
    return (PTR_PCF_PROBLEM_OBSERVATION*)this->getObjectSafe(
	index, PTR_PCF_PROBLEM_OBSERVATION_63);
  }
  PTR_PCF_GOAL* getGOAL(size_t index = 0) {
    return (PTR_PCF_GOAL*)this->getObjectSafe(index, PTR_PCF_GOAL_72);
  }
  PTR_PCF_ORDER* getORDER(size_t index = 0) {
    return (PTR_PCF_ORDER*)this->getObjectSafe(index, PTR_PCF_ORDER_107);
  }

  /* Checker list */
  bool isPRB_42(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_PRB_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_45(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_NTE_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_50(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_VAR_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROBLEM_ROLE(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_PROBLEM_ROLE_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROBLEM_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_PROBLEM_OBSERVATION_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOAL(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_GOAL_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_ORDER_107) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PTR_PCF_40 */

/* PATHWAY */
struct PTR_PCF_PATHWAY : public HL7Group {
  PTR_PCF_PATHWAY() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PTR_PCF_PTH_19,
    PTR_PCF_NTE_22,
    PTR_PCF_VAR_27,
    PTR_PCF_PATHWAY_ROLE_30,
    PTR_PCF_PROBLEM_40,
    FIELD_ID_MAX
  };

  const char* className() const { return "PTR_PCF_PATHWAY"; }
  PTR_PCF_PATHWAY* create() const { return new PTR_PCF_PATHWAY(); }

  /* Initialize object */
  void init() {
    setName("PTR_PCF.PATHWAY");
    addObject<PTH>(PTR_PCF_PTH_19, "PTH.19", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PTR_PCF_NTE_22, "NTE.22", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PTR_PCF_VAR_27, "VAR.27", HL7::optional, HL7::repetition_on);
    addObject<PTR_PCF_PATHWAY_ROLE>(PTR_PCF_PATHWAY_ROLE_30,
				    "PTR_PCF.PATHWAY_ROLE", HL7::optional,
				    HL7::repetition_on);
    addObject<PTR_PCF_PROBLEM>(PTR_PCF_PROBLEM_40, "PTR_PCF.PROBLEM",
			       HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PTH* getPTH_19(size_t index = 0) {
    return (PTH*)this->getObjectSafe(index, PTR_PCF_PTH_19);
  }
  NTE* getNTE_22(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PTR_PCF_NTE_22);
  }
  VAR* getVAR_27(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PTR_PCF_VAR_27);
  }
  PTR_PCF_PATHWAY_ROLE* getPATHWAY_ROLE(size_t index = 0) {
    return (PTR_PCF_PATHWAY_ROLE*)this->getObjectSafe(index,
						      PTR_PCF_PATHWAY_ROLE_30);
  }
  PTR_PCF_PROBLEM* getPROBLEM(size_t index = 0) {
    return (PTR_PCF_PROBLEM*)this->getObjectSafe(index, PTR_PCF_PROBLEM_40);
  }

  /* Checker list */
  bool isPTH_19(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_PTH_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_22(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_NTE_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_27(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_VAR_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATHWAY_ROLE(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_PATHWAY_ROLE_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROBLEM(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_PROBLEM_40) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PTR_PCF_18 */

/* PATIENT */
struct PTR_PCF_PATIENT : public HL7Group {
  PTR_PCF_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PTR_PCF_PID_11,
    PTR_PCF_PATIENT_VISIT_12,
    PTR_PCF_PATHWAY_18,
    FIELD_ID_MAX
  };

  const char* className() const { return "PTR_PCF_PATIENT"; }
  PTR_PCF_PATIENT* create() const { return new PTR_PCF_PATIENT(); }

  /* Initialize object */
  void init() {
    setName("PTR_PCF.PATIENT");
    addObject<PID>(PTR_PCF_PID_11, "PID.11", HL7::initialized,
		   HL7::repetition_off);
    addObject<PTR_PCF_PATIENT_VISIT>(PTR_PCF_PATIENT_VISIT_12,
				     "PTR_PCF.PATIENT_VISIT", HL7::optional,
				     HL7::repetition_off);
    addObject<PTR_PCF_PATHWAY>(PTR_PCF_PATHWAY_18, "PTR_PCF.PATHWAY",
			       HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  PID* getPID_11(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, PTR_PCF_PID_11);
  }
  PTR_PCF_PATIENT_VISIT* getPATIENT_VISIT(size_t index = 0) {
    return (PTR_PCF_PATIENT_VISIT*)this->getObjectSafe(
	index, PTR_PCF_PATIENT_VISIT_12);
  }
  PTR_PCF_PATHWAY* getPATHWAY(size_t index = 0) {
    return (PTR_PCF_PATHWAY*)this->getObjectSafe(index, PTR_PCF_PATHWAY_18);
  }

  /* Checker list */
  bool isPID_11(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_PID_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT_VISIT(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_PATIENT_VISIT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATHWAY(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_PATHWAY_18) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PTR_PCF_10 */

/* PTR_PCF */
struct PTR_PCF : public HL7Message {
  PTR_PCF() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PTR_PCF_MSH_1,
    PTR_PCF_MSA_2,
    PTR_PCF_ERR_4,
    PTR_PCF_QAK_7,
    PTR_PCF_QRD_9,
    PTR_PCF_PATIENT_10,
    FIELD_ID_MAX
  };

  const char* className() const { return "PTR_PCF"; }
  PTR_PCF* create() const { return new PTR_PCF(); }

  /* Initialize object */
  void init() {
    setName("PTR_PCF");
    addObject<MSH>(PTR_PCF_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(PTR_PCF_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(PTR_PCF_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<QAK>(PTR_PCF_QAK_7, "QAK.7", HL7::optional, HL7::repetition_off);
    addObject<QRD>(PTR_PCF_QRD_9, "QRD.9", HL7::initialized,
		   HL7::repetition_off);
    addObject<PTR_PCF_PATIENT>(PTR_PCF_PATIENT_10, "PTR_PCF.PATIENT",
			       HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, PTR_PCF_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, PTR_PCF_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, PTR_PCF_ERR_4);
  }
  QAK* getQAK_7(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, PTR_PCF_QAK_7);
  }
  QRD* getQRD_9(size_t index = 0) {
    return (QRD*)this->getObjectSafe(index, PTR_PCF_QRD_9);
  }
  PTR_PCF_PATIENT* getPATIENT(size_t index = 0) {
    return (PTR_PCF_PATIENT*)this->getObjectSafe(index, PTR_PCF_PATIENT_10);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_7(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_QAK_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRD_9(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_QRD_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, PTR_PCF_PATIENT_10) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PTR_PCF_ */
} /* namespace HL7_24 */
#endif /*  __PTR_PCF__24_H__ */
