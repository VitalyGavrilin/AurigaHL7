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


#ifndef __SRR_S01__24_H__
#define __SRR_S01__24_H__

#include "../../common/Util.h"
#include "../segment/AIG.h"
#include "../segment/AIL.h"
#include "../segment/AIP.h"
#include "../segment/AIS.h"
#include "../segment/DG1.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/RGS.h"
#include "../segment/SCH.h"

namespace HL7_24 {

/* Internal structures/groups */
struct SRR_S01_PATIENT;		   /* PATIENT */
struct SRR_S01_SERVICE;		   /* SERVICE */
struct SRR_S01_GENERAL_RESOURCE;   /* GENERAL_RESOURCE */
struct SRR_S01_LOCATION_RESOURCE;  /* LOCATION_RESOURCE */
struct SRR_S01_PERSONNEL_RESOURCE; /* PERSONNEL_RESOURCE */
struct SRR_S01_RESOURCES;	  /* RESOURCES */
struct SRR_S01_SCHEDULE;	   /* SCHEDULE */

/* PATIENT */
struct SRR_S01_PATIENT : public HL7Group {
  SRR_S01_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SRR_S01_PID_15,
    SRR_S01_PV1_17,
    SRR_S01_PV2_20,
    SRR_S01_DG1_24,
    FIELD_ID_MAX
  };

  const char* className() const { return "SRR_S01_PATIENT"; }
  SRR_S01_PATIENT* create() const { return new SRR_S01_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("SRR_S01.PATIENT");
    addObject<PID>(SRR_S01_PID_15, "PID.15", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV1>(SRR_S01_PV1_17, "PV1.17", HL7::optional,
		   HL7::repetition_off);
    addObject<PV2>(SRR_S01_PV2_20, "PV2.20", HL7::optional,
		   HL7::repetition_off);
    addObject<DG1>(SRR_S01_DG1_24, "DG1.24", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PID* getPID_15(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, SRR_S01_PID_15);
  }
  PV1* getPV1_17(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, SRR_S01_PV1_17);
  }
  PV2* getPV2_20(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, SRR_S01_PV2_20);
  }
  DG1* getDG1_24(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, SRR_S01_DG1_24);
  }

  /* Checker list */
  bool isPID_15(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S01_PID_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_17(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S01_PV1_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_20(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S01_PV2_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_24(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S01_DG1_24) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SRR_S01_13 */

/* SERVICE */
struct SRR_S01_SERVICE : public HL7Group {
  SRR_S01_SERVICE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { SRR_S01_AIS_33, SRR_S01_NTE_36, FIELD_ID_MAX };

  const char* className() const { return "SRR_S01_SERVICE"; }
  SRR_S01_SERVICE* create() const { return new SRR_S01_SERVICE(); }

  /* Initialize object */
  void init() {
    setName("SRR_S01.SERVICE");
    addObject<AIS>(SRR_S01_AIS_33, "AIS.33", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(SRR_S01_NTE_36, "NTE.36", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  AIS* getAIS_33(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, SRR_S01_AIS_33);
  }
  NTE* getNTE_36(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRR_S01_NTE_36);
  }

  /* Checker list */
  bool isAIS_33(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S01_AIS_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_36(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S01_NTE_36) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SRR_S01_31 */

/* GENERAL_RESOURCE */
struct SRR_S01_GENERAL_RESOURCE : public HL7Group {
  SRR_S01_GENERAL_RESOURCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { SRR_S01_AIG_43, SRR_S01_NTE_46, FIELD_ID_MAX };

  const char* className() const { return "SRR_S01_GENERAL_RESOURCE"; }
  SRR_S01_GENERAL_RESOURCE* create() const {
    return new SRR_S01_GENERAL_RESOURCE();
  }

  /* Initialize object */
  void init() {
    setName("SRR_S01.GENERAL_RESOURCE");
    addObject<AIG>(SRR_S01_AIG_43, "AIG.43", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(SRR_S01_NTE_46, "NTE.46", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  AIG* getAIG_43(size_t index = 0) {
    return (AIG*)this->getObjectSafe(index, SRR_S01_AIG_43);
  }
  NTE* getNTE_46(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRR_S01_NTE_46);
  }

  /* Checker list */
  bool isAIG_43(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S01_AIG_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_46(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S01_NTE_46) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SRR_S01_41 */

/* LOCATION_RESOURCE */
struct SRR_S01_LOCATION_RESOURCE : public HL7Group {
  SRR_S01_LOCATION_RESOURCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { SRR_S01_AIL_53, SRR_S01_NTE_56, FIELD_ID_MAX };

  const char* className() const { return "SRR_S01_LOCATION_RESOURCE"; }
  SRR_S01_LOCATION_RESOURCE* create() const {
    return new SRR_S01_LOCATION_RESOURCE();
  }

  /* Initialize object */
  void init() {
    setName("SRR_S01.LOCATION_RESOURCE");
    addObject<AIL>(SRR_S01_AIL_53, "AIL.53", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(SRR_S01_NTE_56, "NTE.56", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  AIL* getAIL_53(size_t index = 0) {
    return (AIL*)this->getObjectSafe(index, SRR_S01_AIL_53);
  }
  NTE* getNTE_56(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRR_S01_NTE_56);
  }

  /* Checker list */
  bool isAIL_53(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S01_AIL_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_56(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S01_NTE_56) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SRR_S01_51 */

/* PERSONNEL_RESOURCE */
struct SRR_S01_PERSONNEL_RESOURCE : public HL7Group {
  SRR_S01_PERSONNEL_RESOURCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { SRR_S01_AIP_63, SRR_S01_NTE_66, FIELD_ID_MAX };

  const char* className() const { return "SRR_S01_PERSONNEL_RESOURCE"; }
  SRR_S01_PERSONNEL_RESOURCE* create() const {
    return new SRR_S01_PERSONNEL_RESOURCE();
  }

  /* Initialize object */
  void init() {
    setName("SRR_S01.PERSONNEL_RESOURCE");
    addObject<AIP>(SRR_S01_AIP_63, "AIP.63", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(SRR_S01_NTE_66, "NTE.66", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  AIP* getAIP_63(size_t index = 0) {
    return (AIP*)this->getObjectSafe(index, SRR_S01_AIP_63);
  }
  NTE* getNTE_66(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRR_S01_NTE_66);
  }

  /* Checker list */
  bool isAIP_63(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S01_AIP_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_66(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S01_NTE_66) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SRR_S01_61 */

/* RESOURCES */
struct SRR_S01_RESOURCES : public HL7Group {
  SRR_S01_RESOURCES() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SRR_S01_RGS_30,
    SRR_S01_SERVICE_31,
    SRR_S01_GENERAL_RESOURCE_41,
    SRR_S01_LOCATION_RESOURCE_51,
    SRR_S01_PERSONNEL_RESOURCE_61,
    FIELD_ID_MAX
  };

  const char* className() const { return "SRR_S01_RESOURCES"; }
  SRR_S01_RESOURCES* create() const { return new SRR_S01_RESOURCES(); }

  /* Initialize object */
  void init() {
    setName("SRR_S01.RESOURCES");
    addObject<RGS>(SRR_S01_RGS_30, "RGS.30", HL7::initialized,
		   HL7::repetition_off);
    addObject<SRR_S01_SERVICE>(SRR_S01_SERVICE_31, "SRR_S01.SERVICE",
			       HL7::optional, HL7::repetition_on);
    addObject<SRR_S01_GENERAL_RESOURCE>(SRR_S01_GENERAL_RESOURCE_41,
					"SRR_S01.GENERAL_RESOURCE",
					HL7::optional, HL7::repetition_on);
    addObject<SRR_S01_LOCATION_RESOURCE>(SRR_S01_LOCATION_RESOURCE_51,
					 "SRR_S01.LOCATION_RESOURCE",
					 HL7::optional, HL7::repetition_on);
    addObject<SRR_S01_PERSONNEL_RESOURCE>(SRR_S01_PERSONNEL_RESOURCE_61,
					  "SRR_S01.PERSONNEL_RESOURCE",
					  HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  RGS* getRGS_30(size_t index = 0) {
    return (RGS*)this->getObjectSafe(index, SRR_S01_RGS_30);
  }
  SRR_S01_SERVICE* getSERVICE(size_t index = 0) {
    return (SRR_S01_SERVICE*)this->getObjectSafe(index, SRR_S01_SERVICE_31);
  }
  SRR_S01_GENERAL_RESOURCE* getGENERAL_RESOURCE(size_t index = 0) {
    return (SRR_S01_GENERAL_RESOURCE*)this->getObjectSafe(
	index, SRR_S01_GENERAL_RESOURCE_41);
  }
  SRR_S01_LOCATION_RESOURCE* getLOCATION_RESOURCE(size_t index = 0) {
    return (SRR_S01_LOCATION_RESOURCE*)this->getObjectSafe(
	index, SRR_S01_LOCATION_RESOURCE_51);
  }
  SRR_S01_PERSONNEL_RESOURCE* getPERSONNEL_RESOURCE(size_t index = 0) {
    return (SRR_S01_PERSONNEL_RESOURCE*)this->getObjectSafe(
	index, SRR_S01_PERSONNEL_RESOURCE_61);
  }

  /* Checker list */
  bool isRGS_30(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S01_RGS_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSERVICE(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S01_SERVICE_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGENERAL_RESOURCE(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S01_GENERAL_RESOURCE_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isLOCATION_RESOURCE(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S01_LOCATION_RESOURCE_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPERSONNEL_RESOURCE(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S01_PERSONNEL_RESOURCE_61) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SRR_S01_29 */

/* SCHEDULE */
struct SRR_S01_SCHEDULE : public HL7Group {
  SRR_S01_SCHEDULE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SRR_S01_SCH_7,
    SRR_S01_NTE_10,
    SRR_S01_PATIENT_13,
    SRR_S01_RESOURCES_29,
    FIELD_ID_MAX
  };

  const char* className() const { return "SRR_S01_SCHEDULE"; }
  SRR_S01_SCHEDULE* create() const { return new SRR_S01_SCHEDULE(); }

  /* Initialize object */
  void init() {
    setName("SRR_S01.SCHEDULE");
    addObject<SCH>(SRR_S01_SCH_7, "SCH.7", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(SRR_S01_NTE_10, "NTE.10", HL7::optional, HL7::repetition_on);
    addObject<SRR_S01_PATIENT>(SRR_S01_PATIENT_13, "SRR_S01.PATIENT",
			       HL7::optional, HL7::repetition_on);
    addObject<SRR_S01_RESOURCES>(SRR_S01_RESOURCES_29, "SRR_S01.RESOURCES",
				 HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  SCH* getSCH_7(size_t index = 0) {
    return (SCH*)this->getObjectSafe(index, SRR_S01_SCH_7);
  }
  NTE* getNTE_10(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRR_S01_NTE_10);
  }
  SRR_S01_PATIENT* getPATIENT(size_t index = 0) {
    return (SRR_S01_PATIENT*)this->getObjectSafe(index, SRR_S01_PATIENT_13);
  }
  SRR_S01_RESOURCES* getRESOURCES(size_t index = 0) {
    return (SRR_S01_RESOURCES*)this->getObjectSafe(index, SRR_S01_RESOURCES_29);
  }

  /* Checker list */
  bool isSCH_7(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S01_SCH_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_10(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S01_NTE_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S01_PATIENT_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRESOURCES(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S01_RESOURCES_29) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SRR_S01_6 */

/* SRR_S01 */
struct SRR_S01 : public HL7Message {
  SRR_S01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SRR_S01_MSH_1,
    SRR_S01_MSA_2,
    SRR_S01_ERR_4,
    SRR_S01_SCHEDULE_6,
    FIELD_ID_MAX
  };

  const char* className() const { return "SRR_S01"; }
  SRR_S01* create() const { return new SRR_S01(); }

  /* Initialize object */
  void init() {
    setName("SRR_S01");
    addObject<MSH>(SRR_S01_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(SRR_S01_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(SRR_S01_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<SRR_S01_SCHEDULE>(SRR_S01_SCHEDULE_6, "SRR_S01.SCHEDULE",
				HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, SRR_S01_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, SRR_S01_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, SRR_S01_ERR_4);
  }
  SRR_S01_SCHEDULE* getSCHEDULE(size_t index = 0) {
    return (SRR_S01_SCHEDULE*)this->getObjectSafe(index, SRR_S01_SCHEDULE_6);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S01_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S01_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSCHEDULE(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S01_SCHEDULE_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SRR_S01_ */
} /* namespace HL7_24 */
#endif /*  __SRR_S01__24_H__ */
