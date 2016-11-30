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


#ifndef __SIU_S12__24_H__
#define __SIU_S12__24_H__

#include "../../common/Util.h"
#include "../segment/AIG.h"
#include "../segment/AIL.h"
#include "../segment/AIP.h"
#include "../segment/AIS.h"
#include "../segment/DG1.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBX.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/RGS.h"
#include "../segment/SCH.h"

namespace HL7_24 {

/* Internal structures/groups */
struct SIU_S12_PATIENT;		   /* PATIENT */
struct SIU_S12_SERVICE;		   /* SERVICE */
struct SIU_S12_GENERAL_RESOURCE;   /* GENERAL_RESOURCE */
struct SIU_S12_LOCATION_RESOURCE;  /* LOCATION_RESOURCE */
struct SIU_S12_PERSONNEL_RESOURCE; /* PERSONNEL_RESOURCE */
struct SIU_S12_RESOURCES;	  /* RESOURCES */

/* PATIENT */
struct SIU_S12_PATIENT : public HL7Group {
  SIU_S12_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SIU_S12_PID_10,
    SIU_S12_PD1_12,
    SIU_S12_PV1_15,
    SIU_S12_PV2_18,
    SIU_S12_OBX_22,
    SIU_S12_DG1_27,
    FIELD_ID_MAX
  };

  const char* className() const { return "SIU_S12_PATIENT"; }
  SIU_S12_PATIENT* create() const { return new SIU_S12_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("SIU_S12.PATIENT");
    addObject<PID>(SIU_S12_PID_10, "PID.10", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(SIU_S12_PD1_12, "PD1.12", HL7::optional,
		   HL7::repetition_off);
    addObject<PV1>(SIU_S12_PV1_15, "PV1.15", HL7::optional,
		   HL7::repetition_off);
    addObject<PV2>(SIU_S12_PV2_18, "PV2.18", HL7::optional,
		   HL7::repetition_off);
    addObject<OBX>(SIU_S12_OBX_22, "OBX.22", HL7::optional, HL7::repetition_on);
    addObject<DG1>(SIU_S12_DG1_27, "DG1.27", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PID* getPID_10(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, SIU_S12_PID_10);
  }
  PD1* getPD1_12(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, SIU_S12_PD1_12);
  }
  PV1* getPV1_15(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, SIU_S12_PV1_15);
  }
  PV2* getPV2_18(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, SIU_S12_PV2_18);
  }
  OBX* getOBX_22(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, SIU_S12_OBX_22);
  }
  DG1* getDG1_27(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, SIU_S12_DG1_27);
  }

  /* Checker list */
  bool isPID_10(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_PID_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_12(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_PD1_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_15(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_PV1_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_18(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_PV2_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_22(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_OBX_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_27(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_DG1_27) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SIU_S12_8 */

/* SERVICE */
struct SIU_S12_SERVICE : public HL7Group {
  SIU_S12_SERVICE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { SIU_S12_AIS_36, SIU_S12_NTE_39, FIELD_ID_MAX };

  const char* className() const { return "SIU_S12_SERVICE"; }
  SIU_S12_SERVICE* create() const { return new SIU_S12_SERVICE(); }

  /* Initialize object */
  void init() {
    setName("SIU_S12.SERVICE");
    addObject<AIS>(SIU_S12_AIS_36, "AIS.36", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(SIU_S12_NTE_39, "NTE.39", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  AIS* getAIS_36(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, SIU_S12_AIS_36);
  }
  NTE* getNTE_39(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S12_NTE_39);
  }

  /* Checker list */
  bool isAIS_36(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_AIS_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_39(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_NTE_39) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SIU_S12_34 */

/* GENERAL_RESOURCE */
struct SIU_S12_GENERAL_RESOURCE : public HL7Group {
  SIU_S12_GENERAL_RESOURCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { SIU_S12_AIG_46, SIU_S12_NTE_49, FIELD_ID_MAX };

  const char* className() const { return "SIU_S12_GENERAL_RESOURCE"; }
  SIU_S12_GENERAL_RESOURCE* create() const {
    return new SIU_S12_GENERAL_RESOURCE();
  }

  /* Initialize object */
  void init() {
    setName("SIU_S12.GENERAL_RESOURCE");
    addObject<AIG>(SIU_S12_AIG_46, "AIG.46", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(SIU_S12_NTE_49, "NTE.49", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  AIG* getAIG_46(size_t index = 0) {
    return (AIG*)this->getObjectSafe(index, SIU_S12_AIG_46);
  }
  NTE* getNTE_49(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S12_NTE_49);
  }

  /* Checker list */
  bool isAIG_46(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_AIG_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_49(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_NTE_49) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SIU_S12_44 */

/* LOCATION_RESOURCE */
struct SIU_S12_LOCATION_RESOURCE : public HL7Group {
  SIU_S12_LOCATION_RESOURCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { SIU_S12_AIL_56, SIU_S12_NTE_59, FIELD_ID_MAX };

  const char* className() const { return "SIU_S12_LOCATION_RESOURCE"; }
  SIU_S12_LOCATION_RESOURCE* create() const {
    return new SIU_S12_LOCATION_RESOURCE();
  }

  /* Initialize object */
  void init() {
    setName("SIU_S12.LOCATION_RESOURCE");
    addObject<AIL>(SIU_S12_AIL_56, "AIL.56", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(SIU_S12_NTE_59, "NTE.59", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  AIL* getAIL_56(size_t index = 0) {
    return (AIL*)this->getObjectSafe(index, SIU_S12_AIL_56);
  }
  NTE* getNTE_59(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S12_NTE_59);
  }

  /* Checker list */
  bool isAIL_56(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_AIL_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_59(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_NTE_59) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SIU_S12_54 */

/* PERSONNEL_RESOURCE */
struct SIU_S12_PERSONNEL_RESOURCE : public HL7Group {
  SIU_S12_PERSONNEL_RESOURCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { SIU_S12_AIP_66, SIU_S12_NTE_69, FIELD_ID_MAX };

  const char* className() const { return "SIU_S12_PERSONNEL_RESOURCE"; }
  SIU_S12_PERSONNEL_RESOURCE* create() const {
    return new SIU_S12_PERSONNEL_RESOURCE();
  }

  /* Initialize object */
  void init() {
    setName("SIU_S12.PERSONNEL_RESOURCE");
    addObject<AIP>(SIU_S12_AIP_66, "AIP.66", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(SIU_S12_NTE_69, "NTE.69", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  AIP* getAIP_66(size_t index = 0) {
    return (AIP*)this->getObjectSafe(index, SIU_S12_AIP_66);
  }
  NTE* getNTE_69(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S12_NTE_69);
  }

  /* Checker list */
  bool isAIP_66(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_AIP_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_69(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_NTE_69) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SIU_S12_64 */

/* RESOURCES */
struct SIU_S12_RESOURCES : public HL7Group {
  SIU_S12_RESOURCES() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SIU_S12_RGS_33,
    SIU_S12_SERVICE_34,
    SIU_S12_GENERAL_RESOURCE_44,
    SIU_S12_LOCATION_RESOURCE_54,
    SIU_S12_PERSONNEL_RESOURCE_64,
    FIELD_ID_MAX
  };

  const char* className() const { return "SIU_S12_RESOURCES"; }
  SIU_S12_RESOURCES* create() const { return new SIU_S12_RESOURCES(); }

  /* Initialize object */
  void init() {
    setName("SIU_S12.RESOURCES");
    addObject<RGS>(SIU_S12_RGS_33, "RGS.33", HL7::initialized,
		   HL7::repetition_off);
    addObject<SIU_S12_SERVICE>(SIU_S12_SERVICE_34, "SIU_S12.SERVICE",
			       HL7::optional, HL7::repetition_on);
    addObject<SIU_S12_GENERAL_RESOURCE>(SIU_S12_GENERAL_RESOURCE_44,
					"SIU_S12.GENERAL_RESOURCE",
					HL7::optional, HL7::repetition_on);
    addObject<SIU_S12_LOCATION_RESOURCE>(SIU_S12_LOCATION_RESOURCE_54,
					 "SIU_S12.LOCATION_RESOURCE",
					 HL7::optional, HL7::repetition_on);
    addObject<SIU_S12_PERSONNEL_RESOURCE>(SIU_S12_PERSONNEL_RESOURCE_64,
					  "SIU_S12.PERSONNEL_RESOURCE",
					  HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  RGS* getRGS_33(size_t index = 0) {
    return (RGS*)this->getObjectSafe(index, SIU_S12_RGS_33);
  }
  SIU_S12_SERVICE* getSERVICE(size_t index = 0) {
    return (SIU_S12_SERVICE*)this->getObjectSafe(index, SIU_S12_SERVICE_34);
  }
  SIU_S12_GENERAL_RESOURCE* getGENERAL_RESOURCE(size_t index = 0) {
    return (SIU_S12_GENERAL_RESOURCE*)this->getObjectSafe(
	index, SIU_S12_GENERAL_RESOURCE_44);
  }
  SIU_S12_LOCATION_RESOURCE* getLOCATION_RESOURCE(size_t index = 0) {
    return (SIU_S12_LOCATION_RESOURCE*)this->getObjectSafe(
	index, SIU_S12_LOCATION_RESOURCE_54);
  }
  SIU_S12_PERSONNEL_RESOURCE* getPERSONNEL_RESOURCE(size_t index = 0) {
    return (SIU_S12_PERSONNEL_RESOURCE*)this->getObjectSafe(
	index, SIU_S12_PERSONNEL_RESOURCE_64);
  }

  /* Checker list */
  bool isRGS_33(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_RGS_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSERVICE(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_SERVICE_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGENERAL_RESOURCE(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_GENERAL_RESOURCE_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isLOCATION_RESOURCE(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_LOCATION_RESOURCE_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPERSONNEL_RESOURCE(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_PERSONNEL_RESOURCE_64) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SIU_S12_32 */

/* SIU_S12 */
struct SIU_S12 : public HL7Message {
  SIU_S12() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SIU_S12_MSH_1,
    SIU_S12_SCH_2,
    SIU_S12_NTE_5,
    SIU_S12_PATIENT_8,
    SIU_S12_RESOURCES_32,
    FIELD_ID_MAX
  };

  const char* className() const { return "SIU_S12"; }
  SIU_S12* create() const { return new SIU_S12(); }

  /* Initialize object */
  void init() {
    setName("SIU_S12");
    addObject<MSH>(SIU_S12_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<SCH>(SIU_S12_SCH_2, "SCH.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(SIU_S12_NTE_5, "NTE.5", HL7::optional, HL7::repetition_on);
    addObject<SIU_S12_PATIENT>(SIU_S12_PATIENT_8, "SIU_S12.PATIENT",
			       HL7::optional, HL7::repetition_on);
    addObject<SIU_S12_RESOURCES>(SIU_S12_RESOURCES_32, "SIU_S12.RESOURCES",
				 HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, SIU_S12_MSH_1);
  }
  SCH* getSCH_2(size_t index = 0) {
    return (SCH*)this->getObjectSafe(index, SIU_S12_SCH_2);
  }
  NTE* getNTE_5(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S12_NTE_5);
  }
  SIU_S12_PATIENT* getPATIENT(size_t index = 0) {
    return (SIU_S12_PATIENT*)this->getObjectSafe(index, SIU_S12_PATIENT_8);
  }
  SIU_S12_RESOURCES* getRESOURCES(size_t index = 0) {
    return (SIU_S12_RESOURCES*)this->getObjectSafe(index, SIU_S12_RESOURCES_32);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSCH_2(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_SCH_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_5(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_NTE_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_PATIENT_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRESOURCES(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S12_RESOURCES_32) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SIU_S12_ */
} /* namespace HL7_24 */
#endif /*  __SIU_S12__24_H__ */
