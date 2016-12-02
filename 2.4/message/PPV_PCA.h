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


#ifndef __PPV_PCA__24_H__
#define __PPV_PCA__24_H__

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
struct PPV_PCA_PATIENT_VISIT;       /* PATIENT_VISIT */
struct PPV_PCA_GOAL_ROLE;	   /* GOAL_ROLE */
struct PPV_PCA_GOAL_PATHWAY;	/* GOAL_PATHWAY */
struct PPV_PCA_GOAL_OBSERVATION;    /* GOAL_OBSERVATION */
struct PPV_PCA_PROBLEM_ROLE;	/* PROBLEM_ROLE */
struct PPV_PCA_PROBLEM_OBSERVATION; /* PROBLEM_OBSERVATION */
struct PPV_PCA_PROBLEM;		    /* PROBLEM */
struct PPV_PCA_CHOICE;		    /* CHOICE */
struct PPV_PCA_ORDER_OBSERVATION;   /* ORDER_OBSERVATION */
struct PPV_PCA_ORDER_DETAIL;	/* ORDER_DETAIL */
struct PPV_PCA_ORDER;		    /* ORDER */
struct PPV_PCA_GOAL;		    /* GOAL */
struct PPV_PCA_PATIENT;		    /* PATIENT */

/* PATIENT_VISIT */
struct PPV_PCA_PATIENT_VISIT : public HL7Group {
  PPV_PCA_PATIENT_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPV_PCA_PV1_13, PPV_PCA_PV2_15, FIELD_ID_MAX };

  const char* className() const { return "PPV_PCA_PATIENT_VISIT"; }
  PPV_PCA_PATIENT_VISIT* create() const { return new PPV_PCA_PATIENT_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("PPV_PCA.PATIENT_VISIT");
    addObject<PV1>(PPV_PCA_PV1_13, "PV1.13", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(PPV_PCA_PV2_15, "PV2.15", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  PV1* getPV1_13(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, PPV_PCA_PV1_13);
  }
  PV2* getPV2_15(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, PPV_PCA_PV2_15);
  }

  /* Checker list */
  bool isPV1_13(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_PV1_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_15(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_PV2_15) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPV_PCA_12 */

/* GOAL_ROLE */
struct PPV_PCA_GOAL_ROLE : public HL7Group {
  PPV_PCA_GOAL_ROLE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPV_PCA_ROL_32, PPV_PCA_VAR_35, FIELD_ID_MAX };

  const char* className() const { return "PPV_PCA_GOAL_ROLE"; }
  PPV_PCA_GOAL_ROLE* create() const { return new PPV_PCA_GOAL_ROLE(); }

  /* Initialize object */
  void init() {
    setName("PPV_PCA.GOAL_ROLE");
    addObject<ROL>(PPV_PCA_ROL_32, "ROL.32", HL7::initialized,
		   HL7::repetition_off);
    addObject<VAR>(PPV_PCA_VAR_35, "VAR.35", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ROL* getROL_32(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPV_PCA_ROL_32);
  }
  VAR* getVAR_35(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPV_PCA_VAR_35);
  }

  /* Checker list */
  bool isROL_32(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_ROL_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_35(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_VAR_35) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPV_PCA_30 */

/* GOAL_PATHWAY */
struct PPV_PCA_GOAL_PATHWAY : public HL7Group {
  PPV_PCA_GOAL_PATHWAY() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPV_PCA_PTH_42, PPV_PCA_VAR_45, FIELD_ID_MAX };

  const char* className() const { return "PPV_PCA_GOAL_PATHWAY"; }
  PPV_PCA_GOAL_PATHWAY* create() const { return new PPV_PCA_GOAL_PATHWAY(); }

  /* Initialize object */
  void init() {
    setName("PPV_PCA.GOAL_PATHWAY");
    addObject<PTH>(PPV_PCA_PTH_42, "PTH.42", HL7::initialized,
		   HL7::repetition_off);
    addObject<VAR>(PPV_PCA_VAR_45, "VAR.45", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PTH* getPTH_42(size_t index = 0) {
    return (PTH*)this->getObjectSafe(index, PPV_PCA_PTH_42);
  }
  VAR* getVAR_45(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPV_PCA_VAR_45);
  }

  /* Checker list */
  bool isPTH_42(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_PTH_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_45(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_VAR_45) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPV_PCA_40 */

/* GOAL_OBSERVATION */
struct PPV_PCA_GOAL_OBSERVATION : public HL7Group {
  PPV_PCA_GOAL_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPV_PCA_OBX_52, PPV_PCA_NTE_55, FIELD_ID_MAX };

  const char* className() const { return "PPV_PCA_GOAL_OBSERVATION"; }
  PPV_PCA_GOAL_OBSERVATION* create() const {
    return new PPV_PCA_GOAL_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("PPV_PCA.GOAL_OBSERVATION");
    addObject<OBX>(PPV_PCA_OBX_52, "OBX.52", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPV_PCA_NTE_55, "NTE.55", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_52(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPV_PCA_OBX_52);
  }
  NTE* getNTE_55(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPV_PCA_NTE_55);
  }

  /* Checker list */
  bool isOBX_52(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_OBX_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_55(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_NTE_55) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPV_PCA_50 */

/* PROBLEM_ROLE */
struct PPV_PCA_PROBLEM_ROLE : public HL7Group {
  PPV_PCA_PROBLEM_ROLE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPV_PCA_ROL_75, PPV_PCA_VAR_78, FIELD_ID_MAX };

  const char* className() const { return "PPV_PCA_PROBLEM_ROLE"; }
  PPV_PCA_PROBLEM_ROLE* create() const { return new PPV_PCA_PROBLEM_ROLE(); }

  /* Initialize object */
  void init() {
    setName("PPV_PCA.PROBLEM_ROLE");
    addObject<ROL>(PPV_PCA_ROL_75, "ROL.75", HL7::initialized,
		   HL7::repetition_off);
    addObject<VAR>(PPV_PCA_VAR_78, "VAR.78", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ROL* getROL_75(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPV_PCA_ROL_75);
  }
  VAR* getVAR_78(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPV_PCA_VAR_78);
  }

  /* Checker list */
  bool isROL_75(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_ROL_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_78(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_VAR_78) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPV_PCA_73 */

/* PROBLEM_OBSERVATION */
struct PPV_PCA_PROBLEM_OBSERVATION : public HL7Group {
  PPV_PCA_PROBLEM_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPV_PCA_OBX_85, PPV_PCA_NTE_88, FIELD_ID_MAX };

  const char* className() const { return "PPV_PCA_PROBLEM_OBSERVATION"; }
  PPV_PCA_PROBLEM_OBSERVATION* create() const {
    return new PPV_PCA_PROBLEM_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("PPV_PCA.PROBLEM_OBSERVATION");
    addObject<OBX>(PPV_PCA_OBX_85, "OBX.85", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPV_PCA_NTE_88, "NTE.88", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_85(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPV_PCA_OBX_85);
  }
  NTE* getNTE_88(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPV_PCA_NTE_88);
  }

  /* Checker list */
  bool isOBX_85(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_OBX_85) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_88(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_NTE_88) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPV_PCA_83 */

/* PROBLEM */
struct PPV_PCA_PROBLEM : public HL7Group {
  PPV_PCA_PROBLEM() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPV_PCA_PRB_62,
    PPV_PCA_NTE_65,
    PPV_PCA_VAR_70,
    PPV_PCA_PROBLEM_ROLE_73,
    PPV_PCA_PROBLEM_OBSERVATION_83,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPV_PCA_PROBLEM"; }
  PPV_PCA_PROBLEM* create() const { return new PPV_PCA_PROBLEM(); }

  /* Initialize object */
  void init() {
    setName("PPV_PCA.PROBLEM");
    addObject<PRB>(PPV_PCA_PRB_62, "PRB.62", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPV_PCA_NTE_65, "NTE.65", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PPV_PCA_VAR_70, "VAR.70", HL7::optional, HL7::repetition_on);
    addObject<PPV_PCA_PROBLEM_ROLE>(PPV_PCA_PROBLEM_ROLE_73,
				    "PPV_PCA.PROBLEM_ROLE", HL7::optional,
				    HL7::repetition_on);
    addObject<PPV_PCA_PROBLEM_OBSERVATION>(PPV_PCA_PROBLEM_OBSERVATION_83,
					   "PPV_PCA.PROBLEM_OBSERVATION",
					   HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PRB* getPRB_62(size_t index = 0) {
    return (PRB*)this->getObjectSafe(index, PPV_PCA_PRB_62);
  }
  NTE* getNTE_65(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPV_PCA_NTE_65);
  }
  VAR* getVAR_70(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPV_PCA_VAR_70);
  }
  PPV_PCA_PROBLEM_ROLE* getPROBLEM_ROLE(size_t index = 0) {
    return (PPV_PCA_PROBLEM_ROLE*)this->getObjectSafe(index,
						      PPV_PCA_PROBLEM_ROLE_73);
  }
  PPV_PCA_PROBLEM_OBSERVATION* getPROBLEM_OBSERVATION(size_t index = 0) {
    return (PPV_PCA_PROBLEM_OBSERVATION*)this->getObjectSafe(
	index, PPV_PCA_PROBLEM_OBSERVATION_83);
  }

  /* Checker list */
  bool isPRB_62(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_PRB_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_65(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_NTE_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_70(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_VAR_70) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROBLEM_ROLE(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_PROBLEM_ROLE_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROBLEM_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_PROBLEM_OBSERVATION_83) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPV_PCA_60 */

/* CHOICE */
struct PPV_PCA_CHOICE : public HL7Group {
  PPV_PCA_CHOICE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPV_PCA_OBR_100, PPV_PCA_RXO_102, FIELD_ID_MAX };

  const char* className() const { return "PPV_PCA_CHOICE"; }
  PPV_PCA_CHOICE* create() const { return new PPV_PCA_CHOICE(); }

  /* Initialize object */
  void init() {
    setName("PPV_PCA.CHOICE");
    addObject<OBR>(PPV_PCA_OBR_100, "OBR.100", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXO>(PPV_PCA_RXO_102, "RXO.102", HL7::initialized,
		   HL7::repetition_off);
  }

  /* Getters list */
  OBR* getOBR_100(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, PPV_PCA_OBR_100);
  }
  RXO* getRXO_102(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, PPV_PCA_RXO_102);
  }

  /* Checker list */
  bool isOBR_100(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_OBR_100) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_102(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_RXO_102) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPV_PCA_99 */

/* ORDER_OBSERVATION */
struct PPV_PCA_ORDER_OBSERVATION : public HL7Group {
  PPV_PCA_ORDER_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPV_PCA_OBX_113,
    PPV_PCA_NTE_116,
    PPV_PCA_VAR_121,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPV_PCA_ORDER_OBSERVATION"; }
  PPV_PCA_ORDER_OBSERVATION* create() const {
    return new PPV_PCA_ORDER_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("PPV_PCA.ORDER_OBSERVATION");
    addObject<OBX>(PPV_PCA_OBX_113, "OBX.113", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPV_PCA_NTE_116, "NTE.116", HL7::optional,
		   HL7::repetition_on);
    addObject<VAR>(PPV_PCA_VAR_121, "VAR.121", HL7::optional,
		   HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_113(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPV_PCA_OBX_113);
  }
  NTE* getNTE_116(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPV_PCA_NTE_116);
  }
  VAR* getVAR_121(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPV_PCA_VAR_121);
  }

  /* Checker list */
  bool isOBX_113(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_OBX_113) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_116(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_NTE_116) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_121(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_VAR_121) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPV_PCA_111 */

/* ORDER_DETAIL */
struct PPV_PCA_ORDER_DETAIL : public HL7Group {
  PPV_PCA_ORDER_DETAIL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPV_PCA_CHOICE_99,
    PPV_PCA_NTE_107,
    PPV_PCA_VAR_108,
    PPV_PCA_ORDER_OBSERVATION_111,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPV_PCA_ORDER_DETAIL"; }
  PPV_PCA_ORDER_DETAIL* create() const { return new PPV_PCA_ORDER_DETAIL(); }

  /* Initialize object */
  void init() {
    setName("PPV_PCA.ORDER_DETAIL");
    addObject<PPV_PCA_CHOICE>(PPV_PCA_CHOICE_99, "PPV_PCA.CHOICE",
			      HL7::initialized, HL7::repetition_off);
    addObject<NTE>(PPV_PCA_NTE_107, "NTE.107", HL7::optional,
		   HL7::repetition_on);
    addObject<VAR>(PPV_PCA_VAR_108, "VAR.108", HL7::optional,
		   HL7::repetition_on);
    addObject<PPV_PCA_ORDER_OBSERVATION>(PPV_PCA_ORDER_OBSERVATION_111,
					 "PPV_PCA.ORDER_OBSERVATION",
					 HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PPV_PCA_CHOICE* getCHOICE(size_t index = 0) {
    return (PPV_PCA_CHOICE*)this->getObjectSafe(index, PPV_PCA_CHOICE_99);
  }
  NTE* getNTE_107(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPV_PCA_NTE_107);
  }
  VAR* getVAR_108(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPV_PCA_VAR_108);
  }
  PPV_PCA_ORDER_OBSERVATION* getORDER_OBSERVATION(size_t index = 0) {
    return (PPV_PCA_ORDER_OBSERVATION*)this->getObjectSafe(
	index, PPV_PCA_ORDER_OBSERVATION_111);
  }

  /* Checker list */
  bool isCHOICE(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_CHOICE_99) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_107(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_NTE_107) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_108(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_VAR_108) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_ORDER_OBSERVATION_111) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPV_PCA_98 */

/* ORDER */
struct PPV_PCA_ORDER : public HL7Group {
  PPV_PCA_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PPV_PCA_ORC_97, PPV_PCA_ORDER_DETAIL_98, FIELD_ID_MAX };

  const char* className() const { return "PPV_PCA_ORDER"; }
  PPV_PCA_ORDER* create() const { return new PPV_PCA_ORDER(); }

  /* Initialize object */
  void init() {
    setName("PPV_PCA.ORDER");
    addObject<ORC>(PPV_PCA_ORC_97, "ORC.97", HL7::initialized,
		   HL7::repetition_off);
    addObject<PPV_PCA_ORDER_DETAIL>(PPV_PCA_ORDER_DETAIL_98,
				    "PPV_PCA.ORDER_DETAIL", HL7::optional,
				    HL7::repetition_off);
  }

  /* Getters list */
  ORC* getORC_97(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, PPV_PCA_ORC_97);
  }
  PPV_PCA_ORDER_DETAIL* getORDER_DETAIL(size_t index = 0) {
    return (PPV_PCA_ORDER_DETAIL*)this->getObjectSafe(index,
						      PPV_PCA_ORDER_DETAIL_98);
  }

  /* Checker list */
  bool isORC_97(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_ORC_97) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_DETAIL(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_ORDER_DETAIL_98) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPV_PCA_95 */

/* GOAL */
struct PPV_PCA_GOAL : public HL7Group {
  PPV_PCA_GOAL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPV_PCA_GOL_19,
    PPV_PCA_NTE_22,
    PPV_PCA_VAR_27,
    PPV_PCA_GOAL_ROLE_30,
    PPV_PCA_GOAL_PATHWAY_40,
    PPV_PCA_GOAL_OBSERVATION_50,
    PPV_PCA_PROBLEM_60,
    PPV_PCA_ORDER_95,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPV_PCA_GOAL"; }
  PPV_PCA_GOAL* create() const { return new PPV_PCA_GOAL(); }

  /* Initialize object */
  void init() {
    setName("PPV_PCA.GOAL");
    addObject<GOL>(PPV_PCA_GOL_19, "GOL.19", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(PPV_PCA_NTE_22, "NTE.22", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PPV_PCA_VAR_27, "VAR.27", HL7::optional, HL7::repetition_on);
    addObject<PPV_PCA_GOAL_ROLE>(PPV_PCA_GOAL_ROLE_30, "PPV_PCA.GOAL_ROLE",
				 HL7::optional, HL7::repetition_on);
    addObject<PPV_PCA_GOAL_PATHWAY>(PPV_PCA_GOAL_PATHWAY_40,
				    "PPV_PCA.GOAL_PATHWAY", HL7::optional,
				    HL7::repetition_on);
    addObject<PPV_PCA_GOAL_OBSERVATION>(PPV_PCA_GOAL_OBSERVATION_50,
					"PPV_PCA.GOAL_OBSERVATION",
					HL7::optional, HL7::repetition_on);
    addObject<PPV_PCA_PROBLEM>(PPV_PCA_PROBLEM_60, "PPV_PCA.PROBLEM",
			       HL7::optional, HL7::repetition_on);
    addObject<PPV_PCA_ORDER>(PPV_PCA_ORDER_95, "PPV_PCA.ORDER", HL7::optional,
			     HL7::repetition_on);
  }

  /* Getters list */
  GOL* getGOL_19(size_t index = 0) {
    return (GOL*)this->getObjectSafe(index, PPV_PCA_GOL_19);
  }
  NTE* getNTE_22(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPV_PCA_NTE_22);
  }
  VAR* getVAR_27(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPV_PCA_VAR_27);
  }
  PPV_PCA_GOAL_ROLE* getGOAL_ROLE(size_t index = 0) {
    return (PPV_PCA_GOAL_ROLE*)this->getObjectSafe(index, PPV_PCA_GOAL_ROLE_30);
  }
  PPV_PCA_GOAL_PATHWAY* getGOAL_PATHWAY(size_t index = 0) {
    return (PPV_PCA_GOAL_PATHWAY*)this->getObjectSafe(index,
						      PPV_PCA_GOAL_PATHWAY_40);
  }
  PPV_PCA_GOAL_OBSERVATION* getGOAL_OBSERVATION(size_t index = 0) {
    return (PPV_PCA_GOAL_OBSERVATION*)this->getObjectSafe(
	index, PPV_PCA_GOAL_OBSERVATION_50);
  }
  PPV_PCA_PROBLEM* getPROBLEM(size_t index = 0) {
    return (PPV_PCA_PROBLEM*)this->getObjectSafe(index, PPV_PCA_PROBLEM_60);
  }
  PPV_PCA_ORDER* getORDER(size_t index = 0) {
    return (PPV_PCA_ORDER*)this->getObjectSafe(index, PPV_PCA_ORDER_95);
  }

  /* Checker list */
  bool isGOL_19(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_GOL_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_22(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_NTE_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_27(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_VAR_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOAL_ROLE(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_GOAL_ROLE_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOAL_PATHWAY(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_GOAL_PATHWAY_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOAL_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_GOAL_OBSERVATION_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROBLEM(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_PROBLEM_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_ORDER_95) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPV_PCA_18 */

/* PATIENT */
struct PPV_PCA_PATIENT : public HL7Group {
  PPV_PCA_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPV_PCA_PID_11,
    PPV_PCA_PATIENT_VISIT_12,
    PPV_PCA_GOAL_18,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPV_PCA_PATIENT"; }
  PPV_PCA_PATIENT* create() const { return new PPV_PCA_PATIENT(); }

  /* Initialize object */
  void init() {
    setName("PPV_PCA.PATIENT");
    addObject<PID>(PPV_PCA_PID_11, "PID.11", HL7::initialized,
		   HL7::repetition_off);
    addObject<PPV_PCA_PATIENT_VISIT>(PPV_PCA_PATIENT_VISIT_12,
				     "PPV_PCA.PATIENT_VISIT", HL7::optional,
				     HL7::repetition_off);
    addObject<PPV_PCA_GOAL>(PPV_PCA_GOAL_18, "PPV_PCA.GOAL", HL7::initialized,
			    HL7::repetition_on);
  }

  /* Getters list */
  PID* getPID_11(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, PPV_PCA_PID_11);
  }
  PPV_PCA_PATIENT_VISIT* getPATIENT_VISIT(size_t index = 0) {
    return (PPV_PCA_PATIENT_VISIT*)this->getObjectSafe(
	index, PPV_PCA_PATIENT_VISIT_12);
  }
  PPV_PCA_GOAL* getGOAL(size_t index = 0) {
    return (PPV_PCA_GOAL*)this->getObjectSafe(index, PPV_PCA_GOAL_18);
  }

  /* Checker list */
  bool isPID_11(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_PID_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT_VISIT(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_PATIENT_VISIT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOAL(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_GOAL_18) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPV_PCA_10 */

/* PPV_PCA */
struct PPV_PCA : public HL7Message {
  PPV_PCA() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPV_PCA_MSH_1,
    PPV_PCA_MSA_2,
    PPV_PCA_ERR_4,
    PPV_PCA_QAK_7,
    PPV_PCA_QRD_9,
    PPV_PCA_PATIENT_10,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPV_PCA"; }
  PPV_PCA* create() const { return new PPV_PCA(); }

  /* Initialize object */
  void init() {
    setName("PPV_PCA");
    addObject<MSH>(PPV_PCA_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(PPV_PCA_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(PPV_PCA_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<QAK>(PPV_PCA_QAK_7, "QAK.7", HL7::optional, HL7::repetition_off);
    addObject<QRD>(PPV_PCA_QRD_9, "QRD.9", HL7::initialized,
		   HL7::repetition_off);
    addObject<PPV_PCA_PATIENT>(PPV_PCA_PATIENT_10, "PPV_PCA.PATIENT",
			       HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, PPV_PCA_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, PPV_PCA_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, PPV_PCA_ERR_4);
  }
  QAK* getQAK_7(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, PPV_PCA_QAK_7);
  }
  QRD* getQRD_9(size_t index = 0) {
    return (QRD*)this->getObjectSafe(index, PPV_PCA_QRD_9);
  }
  PPV_PCA_PATIENT* getPATIENT(size_t index = 0) {
    return (PPV_PCA_PATIENT*)this->getObjectSafe(index, PPV_PCA_PATIENT_10);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_7(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_QAK_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRD_9(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_QRD_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, PPV_PCA_PATIENT_10) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPV_PCA_ */
} /* namespace HL7_24 */
#endif /*  __PPV_PCA__24_H__ */
