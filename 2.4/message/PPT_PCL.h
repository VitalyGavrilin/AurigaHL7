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


#ifndef __PPT_PCL__24_H__
#define __PPT_PCL__24_H__

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
struct PPT_PCL_PATIENT_VISIT;       /* PATIENT_VISIT */
struct PPT_PCL_PATHWAY_ROLE;	/* PATHWAY_ROLE */
struct PPT_PCL_GOAL_ROLE;	   /* GOAL_ROLE */
struct PPT_PCL_GOAL_OBSERVATION;    /* GOAL_OBSERVATION */
struct PPT_PCL_PROBLEM_ROLE;	/* PROBLEM_ROLE */
struct PPT_PCL_PROBLEM_OBSERVATION; /* PROBLEM_OBSERVATION */
struct PPT_PCL_PROBLEM;		    /* PROBLEM */
struct PPT_PCL_CHOICE;		    /* CHOICE */
struct PPT_PCL_ORDER_OBSERVATION;   /* ORDER_OBSERVATION */
struct PPT_PCL_ORDER_DETAIL;	/* ORDER_DETAIL */
struct PPT_PCL_ORDER;		    /* ORDER */
struct PPT_PCL_GOAL;		    /* GOAL */
struct PPT_PCL_PATHWAY;		    /* PATHWAY */
struct PPT_PCL_PATIENT;		    /* PATIENT */

/* PATIENT_VISIT */
struct PPT_PCL_PATIENT_VISIT : public HL7Group {
  PPT_PCL_PATIENT_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPT_PCL_PV1_13, PPT_PCL_PV2_15, FIELD_ID_MAX };

  const char* className() const { return "PPT_PCL_PATIENT_VISIT"; }
  PPT_PCL_PATIENT_VISIT* create() const { return new PPT_PCL_PATIENT_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("PPT_PCL.PATIENT_VISIT");
    addObject<PV1>(PPT_PCL_PV1_13, "PV1.13", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(PPT_PCL_PV2_15, "PV2.15", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  PV1* getPV1_13(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, PPT_PCL_PV1_13);
  }
  PV2* getPV2_15(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, PPT_PCL_PV2_15);
  }

  /* Checker list */
  bool isPV1_13(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_PV1_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_15(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_PV2_15) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPT_PCL_12 */

/* PATHWAY_ROLE */
struct PPT_PCL_PATHWAY_ROLE : public HL7Group {
  PPT_PCL_PATHWAY_ROLE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPT_PCL_ROL_32, PPT_PCL_VAR_35, FIELD_ID_MAX };

  const char* className() const { return "PPT_PCL_PATHWAY_ROLE"; }
  PPT_PCL_PATHWAY_ROLE* create() const { return new PPT_PCL_PATHWAY_ROLE(); }

  /* Initialize object */
  void init() {
    setName("PPT_PCL.PATHWAY_ROLE");
    addObject<ROL>(PPT_PCL_ROL_32, "ROL.32", HL7::initialized,
		   HL7::repetition_off);
    addObject<VAR>(PPT_PCL_VAR_35, "VAR.35", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ROL* getROL_32(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPT_PCL_ROL_32);
  }
  VAR* getVAR_35(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPT_PCL_VAR_35);
  }

  /* Checker list */
  bool isROL_32(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_ROL_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_35(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_VAR_35) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPT_PCL_30 */

/* GOAL_ROLE */
struct PPT_PCL_GOAL_ROLE : public HL7Group {
  PPT_PCL_GOAL_ROLE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPT_PCL_ROL_55, PPT_PCL_VAR_58, FIELD_ID_MAX };

  const char* className() const { return "PPT_PCL_GOAL_ROLE"; }
  PPT_PCL_GOAL_ROLE* create() const { return new PPT_PCL_GOAL_ROLE(); }

  /* Initialize object */
  void init() {
    setName("PPT_PCL.GOAL_ROLE");
    addObject<ROL>(PPT_PCL_ROL_55, "ROL.55", HL7::initialized,
		   HL7::repetition_off);
    addObject<VAR>(PPT_PCL_VAR_58, "VAR.58", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ROL* getROL_55(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPT_PCL_ROL_55);
  }
  VAR* getVAR_58(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPT_PCL_VAR_58);
  }

  /* Checker list */
  bool isROL_55(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_ROL_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_58(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_VAR_58) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPT_PCL_53 */

/* GOAL_OBSERVATION */
struct PPT_PCL_GOAL_OBSERVATION : public HL7Group {
  PPT_PCL_GOAL_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPT_PCL_OBX_65, PPT_PCL_NTE_68, FIELD_ID_MAX };

  const char* className() const { return "PPT_PCL_GOAL_OBSERVATION"; }
  PPT_PCL_GOAL_OBSERVATION* create() const {
    return new PPT_PCL_GOAL_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("PPT_PCL.GOAL_OBSERVATION");
    addObject<OBX>(PPT_PCL_OBX_65, "OBX.65", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPT_PCL_NTE_68, "NTE.68", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_65(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPT_PCL_OBX_65);
  }
  NTE* getNTE_68(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPT_PCL_NTE_68);
  }

  /* Checker list */
  bool isOBX_65(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_OBX_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_68(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_NTE_68) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPT_PCL_63 */

/* PROBLEM_ROLE */
struct PPT_PCL_PROBLEM_ROLE : public HL7Group {
  PPT_PCL_PROBLEM_ROLE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPT_PCL_ROL_88, PPT_PCL_VAR_91, FIELD_ID_MAX };

  const char* className() const { return "PPT_PCL_PROBLEM_ROLE"; }
  PPT_PCL_PROBLEM_ROLE* create() const { return new PPT_PCL_PROBLEM_ROLE(); }

  /* Initialize object */
  void init() {
    setName("PPT_PCL.PROBLEM_ROLE");
    addObject<ROL>(PPT_PCL_ROL_88, "ROL.88", HL7::initialized,
		   HL7::repetition_off);
    addObject<VAR>(PPT_PCL_VAR_91, "VAR.91", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ROL* getROL_88(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPT_PCL_ROL_88);
  }
  VAR* getVAR_91(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPT_PCL_VAR_91);
  }

  /* Checker list */
  bool isROL_88(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_ROL_88) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_91(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_VAR_91) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPT_PCL_86 */

/* PROBLEM_OBSERVATION */
struct PPT_PCL_PROBLEM_OBSERVATION : public HL7Group {
  PPT_PCL_PROBLEM_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPT_PCL_OBX_98, PPT_PCL_NTE_101, FIELD_ID_MAX };

  const char* className() const { return "PPT_PCL_PROBLEM_OBSERVATION"; }
  PPT_PCL_PROBLEM_OBSERVATION* create() const {
    return new PPT_PCL_PROBLEM_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("PPT_PCL.PROBLEM_OBSERVATION");
    addObject<OBX>(PPT_PCL_OBX_98, "OBX.98", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPT_PCL_NTE_101, "NTE.101", HL7::optional,
		   HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_98(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPT_PCL_OBX_98);
  }
  NTE* getNTE_101(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPT_PCL_NTE_101);
  }

  /* Checker list */
  bool isOBX_98(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_OBX_98) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_101(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_NTE_101) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPT_PCL_96 */

/* PROBLEM */
struct PPT_PCL_PROBLEM : public HL7Group {
  PPT_PCL_PROBLEM() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPT_PCL_PRB_75,
    PPT_PCL_NTE_78,
    PPT_PCL_VAR_83,
    PPT_PCL_PROBLEM_ROLE_86,
    PPT_PCL_PROBLEM_OBSERVATION_96,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPT_PCL_PROBLEM"; }
  PPT_PCL_PROBLEM* create() const { return new PPT_PCL_PROBLEM(); }

  /* Initialize object */
  void init() {
    setName("PPT_PCL.PROBLEM");
    addObject<PRB>(PPT_PCL_PRB_75, "PRB.75", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPT_PCL_NTE_78, "NTE.78", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PPT_PCL_VAR_83, "VAR.83", HL7::optional, HL7::repetition_on);
    addObject<PPT_PCL_PROBLEM_ROLE>(PPT_PCL_PROBLEM_ROLE_86,
				    "PPT_PCL.PROBLEM_ROLE", HL7::optional,
				    HL7::repetition_on);
    addObject<PPT_PCL_PROBLEM_OBSERVATION>(PPT_PCL_PROBLEM_OBSERVATION_96,
					   "PPT_PCL.PROBLEM_OBSERVATION",
					   HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PRB* getPRB_75(size_t index = 0) {
    return (PRB*)this->getObjectSafe(index, PPT_PCL_PRB_75);
  }
  NTE* getNTE_78(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPT_PCL_NTE_78);
  }
  VAR* getVAR_83(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPT_PCL_VAR_83);
  }
  PPT_PCL_PROBLEM_ROLE* getPROBLEM_ROLE(size_t index = 0) {
    return (PPT_PCL_PROBLEM_ROLE*)this->getObjectSafe(index,
						      PPT_PCL_PROBLEM_ROLE_86);
  }
  PPT_PCL_PROBLEM_OBSERVATION* getPROBLEM_OBSERVATION(size_t index = 0) {
    return (PPT_PCL_PROBLEM_OBSERVATION*)this->getObjectSafe(
	index, PPT_PCL_PROBLEM_OBSERVATION_96);
  }

  /* Checker list */
  bool isPRB_75(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_PRB_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_78(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_NTE_78) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_83(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_VAR_83) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROBLEM_ROLE(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_PROBLEM_ROLE_86) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROBLEM_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_PROBLEM_OBSERVATION_96) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPT_PCL_73 */

/* CHOICE */
struct PPT_PCL_CHOICE : public HL7Group {
  PPT_PCL_CHOICE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPT_PCL_OBR_113, PPT_PCL_RXO_115, FIELD_ID_MAX };

  const char* className() const { return "PPT_PCL_CHOICE"; }
  PPT_PCL_CHOICE* create() const { return new PPT_PCL_CHOICE(); }

  /* Initialize object */
  void init() {
    setName("PPT_PCL.CHOICE");
    addObject<OBR>(PPT_PCL_OBR_113, "OBR.113", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXO>(PPT_PCL_RXO_115, "RXO.115", HL7::initialized,
		   HL7::repetition_off);
  }

  /* Getters list */
  OBR* getOBR_113(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, PPT_PCL_OBR_113);
  }
  RXO* getRXO_115(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, PPT_PCL_RXO_115);
  }

  /* Checker list */
  bool isOBR_113(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_OBR_113) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_115(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_RXO_115) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPT_PCL_112 */

/* ORDER_OBSERVATION */
struct PPT_PCL_ORDER_OBSERVATION : public HL7Group {
  PPT_PCL_ORDER_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPT_PCL_OBX_126,
    PPT_PCL_NTE_129,
    PPT_PCL_VAR_134,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPT_PCL_ORDER_OBSERVATION"; }
  PPT_PCL_ORDER_OBSERVATION* create() const {
    return new PPT_PCL_ORDER_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("PPT_PCL.ORDER_OBSERVATION");
    addObject<OBX>(PPT_PCL_OBX_126, "OBX.126", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPT_PCL_NTE_129, "NTE.129", HL7::optional,
		   HL7::repetition_on);
    addObject<VAR>(PPT_PCL_VAR_134, "VAR.134", HL7::optional,
		   HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_126(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPT_PCL_OBX_126);
  }
  NTE* getNTE_129(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPT_PCL_NTE_129);
  }
  VAR* getVAR_134(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPT_PCL_VAR_134);
  }

  /* Checker list */
  bool isOBX_126(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_OBX_126) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_129(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_NTE_129) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_134(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_VAR_134) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPT_PCL_124 */

/* ORDER_DETAIL */
struct PPT_PCL_ORDER_DETAIL : public HL7Group {
  PPT_PCL_ORDER_DETAIL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPT_PCL_CHOICE_112,
    PPT_PCL_NTE_120,
    PPT_PCL_VAR_121,
    PPT_PCL_ORDER_OBSERVATION_124,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPT_PCL_ORDER_DETAIL"; }
  PPT_PCL_ORDER_DETAIL* create() const { return new PPT_PCL_ORDER_DETAIL(); }

  /* Initialize object */
  void init() {
    setName("PPT_PCL.ORDER_DETAIL");
    addObject<PPT_PCL_CHOICE>(PPT_PCL_CHOICE_112, "PPT_PCL.CHOICE",
			      HL7::initialized, HL7::repetition_off);
    addObject<NTE>(PPT_PCL_NTE_120, "NTE.120", HL7::optional,
		   HL7::repetition_on);
    addObject<VAR>(PPT_PCL_VAR_121, "VAR.121", HL7::optional,
		   HL7::repetition_on);
    addObject<PPT_PCL_ORDER_OBSERVATION>(PPT_PCL_ORDER_OBSERVATION_124,
					 "PPT_PCL.ORDER_OBSERVATION",
					 HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PPT_PCL_CHOICE* getCHOICE(size_t index = 0) {
    return (PPT_PCL_CHOICE*)this->getObjectSafe(index, PPT_PCL_CHOICE_112);
  }
  NTE* getNTE_120(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPT_PCL_NTE_120);
  }
  VAR* getVAR_121(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPT_PCL_VAR_121);
  }
  PPT_PCL_ORDER_OBSERVATION* getORDER_OBSERVATION(size_t index = 0) {
    return (PPT_PCL_ORDER_OBSERVATION*)this->getObjectSafe(
	index, PPT_PCL_ORDER_OBSERVATION_124);
  }

  /* Checker list */
  bool isCHOICE(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_CHOICE_112) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_120(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_NTE_120) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_121(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_VAR_121) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_ORDER_OBSERVATION_124) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPT_PCL_111 */

/* ORDER */
struct PPT_PCL_ORDER : public HL7Group {
  PPT_PCL_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPT_PCL_ORC_110, PPT_PCL_ORDER_DETAIL_111, FIELD_ID_MAX };

  const char* className() const { return "PPT_PCL_ORDER"; }
  PPT_PCL_ORDER* create() const { return new PPT_PCL_ORDER(); }

  /* Initialize object */
  void init() {
    setName("PPT_PCL.ORDER");
    addObject<ORC>(PPT_PCL_ORC_110, "ORC.110", HL7::initialized,
		   HL7::repetition_off);
    addObject<PPT_PCL_ORDER_DETAIL>(PPT_PCL_ORDER_DETAIL_111,
				    "PPT_PCL.ORDER_DETAIL", HL7::optional,
				    HL7::repetition_off);
  }

  /* Getters list */
  ORC* getORC_110(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, PPT_PCL_ORC_110);
  }
  PPT_PCL_ORDER_DETAIL* getORDER_DETAIL(size_t index = 0) {
    return (PPT_PCL_ORDER_DETAIL*)this->getObjectSafe(index,
						      PPT_PCL_ORDER_DETAIL_111);
  }

  /* Checker list */
  bool isORC_110(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_ORC_110) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_DETAIL(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_ORDER_DETAIL_111) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPT_PCL_108 */

/* GOAL */
struct PPT_PCL_GOAL : public HL7Group {
  PPT_PCL_GOAL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPT_PCL_GOL_42,
    PPT_PCL_NTE_45,
    PPT_PCL_VAR_50,
    PPT_PCL_GOAL_ROLE_53,
    PPT_PCL_GOAL_OBSERVATION_63,
    PPT_PCL_PROBLEM_73,
    PPT_PCL_ORDER_108,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPT_PCL_GOAL"; }
  PPT_PCL_GOAL* create() const { return new PPT_PCL_GOAL(); }

  /* Initialize object */
  void init() {
    setName("PPT_PCL.GOAL");
    addObject<GOL>(PPT_PCL_GOL_42, "GOL.42", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPT_PCL_NTE_45, "NTE.45", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PPT_PCL_VAR_50, "VAR.50", HL7::optional, HL7::repetition_on);
    addObject<PPT_PCL_GOAL_ROLE>(PPT_PCL_GOAL_ROLE_53, "PPT_PCL.GOAL_ROLE",
				 HL7::optional, HL7::repetition_on);
    addObject<PPT_PCL_GOAL_OBSERVATION>(PPT_PCL_GOAL_OBSERVATION_63,
					"PPT_PCL.GOAL_OBSERVATION",
					HL7::optional, HL7::repetition_on);
    addObject<PPT_PCL_PROBLEM>(PPT_PCL_PROBLEM_73, "PPT_PCL.PROBLEM",
			       HL7::optional, HL7::repetition_on);
    addObject<PPT_PCL_ORDER>(PPT_PCL_ORDER_108, "PPT_PCL.ORDER", HL7::optional,
			     HL7::repetition_on);
  }

  /* Getters list */
  GOL* getGOL_42(size_t index = 0) {
    return (GOL*)this->getObjectSafe(index, PPT_PCL_GOL_42);
  }
  NTE* getNTE_45(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPT_PCL_NTE_45);
  }
  VAR* getVAR_50(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPT_PCL_VAR_50);
  }
  PPT_PCL_GOAL_ROLE* getGOAL_ROLE(size_t index = 0) {
    return (PPT_PCL_GOAL_ROLE*)this->getObjectSafe(index, PPT_PCL_GOAL_ROLE_53);
  }
  PPT_PCL_GOAL_OBSERVATION* getGOAL_OBSERVATION(size_t index = 0) {
    return (PPT_PCL_GOAL_OBSERVATION*)this->getObjectSafe(
	index, PPT_PCL_GOAL_OBSERVATION_63);
  }
  PPT_PCL_PROBLEM* getPROBLEM(size_t index = 0) {
    return (PPT_PCL_PROBLEM*)this->getObjectSafe(index, PPT_PCL_PROBLEM_73);
  }
  PPT_PCL_ORDER* getORDER(size_t index = 0) {
    return (PPT_PCL_ORDER*)this->getObjectSafe(index, PPT_PCL_ORDER_108);
  }

  /* Checker list */
  bool isGOL_42(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_GOL_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_45(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_NTE_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_50(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_VAR_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOAL_ROLE(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_GOAL_ROLE_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOAL_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_GOAL_OBSERVATION_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROBLEM(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_PROBLEM_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_ORDER_108) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPT_PCL_40 */

/* PATHWAY */
struct PPT_PCL_PATHWAY : public HL7Group {
  PPT_PCL_PATHWAY() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPT_PCL_PTH_19,
    PPT_PCL_NTE_22,
    PPT_PCL_VAR_27,
    PPT_PCL_PATHWAY_ROLE_30,
    PPT_PCL_GOAL_40,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPT_PCL_PATHWAY"; }
  PPT_PCL_PATHWAY* create() const { return new PPT_PCL_PATHWAY(); }

  /* Initialize object */
  void init() {
    setName("PPT_PCL.PATHWAY");
    addObject<PTH>(PPT_PCL_PTH_19, "PTH.19", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPT_PCL_NTE_22, "NTE.22", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PPT_PCL_VAR_27, "VAR.27", HL7::optional, HL7::repetition_on);
    addObject<PPT_PCL_PATHWAY_ROLE>(PPT_PCL_PATHWAY_ROLE_30,
				    "PPT_PCL.PATHWAY_ROLE", HL7::optional,
				    HL7::repetition_on);
    addObject<PPT_PCL_GOAL>(PPT_PCL_GOAL_40, "PPT_PCL.GOAL", HL7::optional,
			    HL7::repetition_on);
  }

  /* Getters list */
  PTH* getPTH_19(size_t index = 0) {
    return (PTH*)this->getObjectSafe(index, PPT_PCL_PTH_19);
  }
  NTE* getNTE_22(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPT_PCL_NTE_22);
  }
  VAR* getVAR_27(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPT_PCL_VAR_27);
  }
  PPT_PCL_PATHWAY_ROLE* getPATHWAY_ROLE(size_t index = 0) {
    return (PPT_PCL_PATHWAY_ROLE*)this->getObjectSafe(index,
						      PPT_PCL_PATHWAY_ROLE_30);
  }
  PPT_PCL_GOAL* getGOAL(size_t index = 0) {
    return (PPT_PCL_GOAL*)this->getObjectSafe(index, PPT_PCL_GOAL_40);
  }

  /* Checker list */
  bool isPTH_19(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_PTH_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_22(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_NTE_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_27(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_VAR_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATHWAY_ROLE(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_PATHWAY_ROLE_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOAL(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_GOAL_40) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPT_PCL_18 */

/* PATIENT */
struct PPT_PCL_PATIENT : public HL7Group {
  PPT_PCL_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPT_PCL_PID_11,
    PPT_PCL_PATIENT_VISIT_12,
    PPT_PCL_PATHWAY_18,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPT_PCL_PATIENT"; }
  PPT_PCL_PATIENT* create() const { return new PPT_PCL_PATIENT(); }

  /* Initialize object */
  void init() {
    setName("PPT_PCL.PATIENT");
    addObject<PID>(PPT_PCL_PID_11, "PID.11", HL7::initialized,
		   HL7::repetition_off);
    addObject<PPT_PCL_PATIENT_VISIT>(PPT_PCL_PATIENT_VISIT_12,
				     "PPT_PCL.PATIENT_VISIT", HL7::optional,
				     HL7::repetition_off);
    addObject<PPT_PCL_PATHWAY>(PPT_PCL_PATHWAY_18, "PPT_PCL.PATHWAY",
			       HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  PID* getPID_11(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, PPT_PCL_PID_11);
  }
  PPT_PCL_PATIENT_VISIT* getPATIENT_VISIT(size_t index = 0) {
    return (PPT_PCL_PATIENT_VISIT*)this->getObjectSafe(
	index, PPT_PCL_PATIENT_VISIT_12);
  }
  PPT_PCL_PATHWAY* getPATHWAY(size_t index = 0) {
    return (PPT_PCL_PATHWAY*)this->getObjectSafe(index, PPT_PCL_PATHWAY_18);
  }

  /* Checker list */
  bool isPID_11(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_PID_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT_VISIT(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_PATIENT_VISIT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATHWAY(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_PATHWAY_18) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPT_PCL_10 */

/* PPT_PCL */
struct PPT_PCL : public HL7Message {
  PPT_PCL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPT_PCL_MSH_1,
    PPT_PCL_MSA_2,
    PPT_PCL_ERR_4,
    PPT_PCL_QAK_7,
    PPT_PCL_QRD_9,
    PPT_PCL_PATIENT_10,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPT_PCL"; }
  PPT_PCL* create() const { return new PPT_PCL(); }

  /* Initialize object */
  void init() {
    setName("PPT_PCL");
    addObject<MSH>(PPT_PCL_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(PPT_PCL_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(PPT_PCL_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<QAK>(PPT_PCL_QAK_7, "QAK.7", HL7::optional, HL7::repetition_off);
    addObject<QRD>(PPT_PCL_QRD_9, "QRD.9", HL7::initialized,
		   HL7::repetition_off);
    addObject<PPT_PCL_PATIENT>(PPT_PCL_PATIENT_10, "PPT_PCL.PATIENT",
			       HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, PPT_PCL_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, PPT_PCL_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, PPT_PCL_ERR_4);
  }
  QAK* getQAK_7(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, PPT_PCL_QAK_7);
  }
  QRD* getQRD_9(size_t index = 0) {
    return (QRD*)this->getObjectSafe(index, PPT_PCL_QRD_9);
  }
  PPT_PCL_PATIENT* getPATIENT(size_t index = 0) {
    return (PPT_PCL_PATIENT*)this->getObjectSafe(index, PPT_PCL_PATIENT_10);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_7(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_QAK_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRD_9(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_QRD_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, PPT_PCL_PATIENT_10) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPT_PCL_ */
} /* namespace HL7_24 */
#endif /*  __PPT_PCL__24_H__ */
