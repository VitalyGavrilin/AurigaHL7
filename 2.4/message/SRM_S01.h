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


#ifndef __SRM_S01__24_H__
#define __SRM_S01__24_H__

#include "../../common/Util.h"
#include "../segment/AIG.h"
#include "../segment/AIL.h"
#include "../segment/AIP.h"
#include "../segment/AIS.h"
#include "../segment/APR.h"
#include "../segment/ARQ.h"
#include "../segment/DG1.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBX.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/RGS.h"

namespace HL7_24 {

/* Internal structures/groups */
struct SRM_S01_PATIENT;		   /* PATIENT */
struct SRM_S01_SERVICE;		   /* SERVICE */
struct SRM_S01_GENERAL_RESOURCE;   /* GENERAL_RESOURCE */
struct SRM_S01_LOCATION_RESOURCE;  /* LOCATION_RESOURCE */
struct SRM_S01_PERSONNEL_RESOURCE; /* PERSONNEL_RESOURCE */
struct SRM_S01_RESOURCES;	  /* RESOURCES */

/* PATIENT */
struct SRM_S01_PATIENT : public HL7Group {
  SRM_S01_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SRM_S01_PID_13,
    SRM_S01_PV1_15,
    SRM_S01_PV2_18,
    SRM_S01_OBX_22,
    SRM_S01_DG1_27,
    FIELD_ID_MAX
  };

  const char* className() const { return "SRM_S01_PATIENT"; }
  SRM_S01_PATIENT* create() const { return new SRM_S01_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("SRM_S01.PATIENT");
    addObject<PID>(SRM_S01_PID_13, "PID.13", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV1>(SRM_S01_PV1_15, "PV1.15", HL7::optional,
		   HL7::repetition_off);
    addObject<PV2>(SRM_S01_PV2_18, "PV2.18", HL7::optional,
		   HL7::repetition_off);
    addObject<OBX>(SRM_S01_OBX_22, "OBX.22", HL7::optional, HL7::repetition_on);
    addObject<DG1>(SRM_S01_DG1_27, "DG1.27", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PID* getPID_13(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, SRM_S01_PID_13);
  }
  PV1* getPV1_15(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, SRM_S01_PV1_15);
  }
  PV2* getPV2_18(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, SRM_S01_PV2_18);
  }
  OBX* getOBX_22(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, SRM_S01_OBX_22);
  }
  DG1* getDG1_27(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, SRM_S01_DG1_27);
  }

  /* Checker list */
  bool isPID_13(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_PID_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_15(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_PV1_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_18(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_PV2_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_22(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_OBX_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_27(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_DG1_27) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SRM_S01_11 */

/* SERVICE */
struct SRM_S01_SERVICE : public HL7Group {
  SRM_S01_SERVICE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SRM_S01_AIS_36,
    SRM_S01_APR_38,
    SRM_S01_NTE_42,
    FIELD_ID_MAX
  };

  const char* className() const { return "SRM_S01_SERVICE"; }
  SRM_S01_SERVICE* create() const { return new SRM_S01_SERVICE(); }

  /* Initialize object */
  void init() {
    setName("SRM_S01.SERVICE");
    addObject<AIS>(SRM_S01_AIS_36, "AIS.36", HL7::initialized,
		   HL7::repetition_off);
    addObject<APR>(SRM_S01_APR_38, "APR.38", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(SRM_S01_NTE_42, "NTE.42", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  AIS* getAIS_36(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, SRM_S01_AIS_36);
  }
  APR* getAPR_38(size_t index = 0) {
    return (APR*)this->getObjectSafe(index, SRM_S01_APR_38);
  }
  NTE* getNTE_42(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRM_S01_NTE_42);
  }

  /* Checker list */
  bool isAIS_36(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_AIS_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAPR_38(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_APR_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_42(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_NTE_42) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SRM_S01_34 */

/* GENERAL_RESOURCE */
struct SRM_S01_GENERAL_RESOURCE : public HL7Group {
  SRM_S01_GENERAL_RESOURCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SRM_S01_AIG_49,
    SRM_S01_APR_51,
    SRM_S01_NTE_55,
    FIELD_ID_MAX
  };

  const char* className() const { return "SRM_S01_GENERAL_RESOURCE"; }
  SRM_S01_GENERAL_RESOURCE* create() const {
    return new SRM_S01_GENERAL_RESOURCE();
  }

  /* Initialize object */
  void init() {
    setName("SRM_S01.GENERAL_RESOURCE");
    addObject<AIG>(SRM_S01_AIG_49, "AIG.49", HL7::initialized,
		   HL7::repetition_off);
    addObject<APR>(SRM_S01_APR_51, "APR.51", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(SRM_S01_NTE_55, "NTE.55", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  AIG* getAIG_49(size_t index = 0) {
    return (AIG*)this->getObjectSafe(index, SRM_S01_AIG_49);
  }
  APR* getAPR_51(size_t index = 0) {
    return (APR*)this->getObjectSafe(index, SRM_S01_APR_51);
  }
  NTE* getNTE_55(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRM_S01_NTE_55);
  }

  /* Checker list */
  bool isAIG_49(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_AIG_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAPR_51(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_APR_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_55(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_NTE_55) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SRM_S01_47 */

/* LOCATION_RESOURCE */
struct SRM_S01_LOCATION_RESOURCE : public HL7Group {
  SRM_S01_LOCATION_RESOURCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SRM_S01_AIL_62,
    SRM_S01_APR_64,
    SRM_S01_NTE_68,
    FIELD_ID_MAX
  };

  const char* className() const { return "SRM_S01_LOCATION_RESOURCE"; }
  SRM_S01_LOCATION_RESOURCE* create() const {
    return new SRM_S01_LOCATION_RESOURCE();
  }

  /* Initialize object */
  void init() {
    setName("SRM_S01.LOCATION_RESOURCE");
    addObject<AIL>(SRM_S01_AIL_62, "AIL.62", HL7::initialized,
		   HL7::repetition_off);
    addObject<APR>(SRM_S01_APR_64, "APR.64", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(SRM_S01_NTE_68, "NTE.68", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  AIL* getAIL_62(size_t index = 0) {
    return (AIL*)this->getObjectSafe(index, SRM_S01_AIL_62);
  }
  APR* getAPR_64(size_t index = 0) {
    return (APR*)this->getObjectSafe(index, SRM_S01_APR_64);
  }
  NTE* getNTE_68(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRM_S01_NTE_68);
  }

  /* Checker list */
  bool isAIL_62(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_AIL_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAPR_64(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_APR_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_68(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_NTE_68) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SRM_S01_60 */

/* PERSONNEL_RESOURCE */
struct SRM_S01_PERSONNEL_RESOURCE : public HL7Group {
  SRM_S01_PERSONNEL_RESOURCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SRM_S01_AIP_75,
    SRM_S01_APR_77,
    SRM_S01_NTE_81,
    FIELD_ID_MAX
  };

  const char* className() const { return "SRM_S01_PERSONNEL_RESOURCE"; }
  SRM_S01_PERSONNEL_RESOURCE* create() const {
    return new SRM_S01_PERSONNEL_RESOURCE();
  }

  /* Initialize object */
  void init() {
    setName("SRM_S01.PERSONNEL_RESOURCE");
    addObject<AIP>(SRM_S01_AIP_75, "AIP.75", HL7::initialized,
		   HL7::repetition_off);
    addObject<APR>(SRM_S01_APR_77, "APR.77", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(SRM_S01_NTE_81, "NTE.81", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  AIP* getAIP_75(size_t index = 0) {
    return (AIP*)this->getObjectSafe(index, SRM_S01_AIP_75);
  }
  APR* getAPR_77(size_t index = 0) {
    return (APR*)this->getObjectSafe(index, SRM_S01_APR_77);
  }
  NTE* getNTE_81(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRM_S01_NTE_81);
  }

  /* Checker list */
  bool isAIP_75(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_AIP_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAPR_77(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_APR_77) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_81(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_NTE_81) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SRM_S01_73 */

/* RESOURCES */
struct SRM_S01_RESOURCES : public HL7Group {
  SRM_S01_RESOURCES() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SRM_S01_RGS_33,
    SRM_S01_SERVICE_34,
    SRM_S01_GENERAL_RESOURCE_47,
    SRM_S01_LOCATION_RESOURCE_60,
    SRM_S01_PERSONNEL_RESOURCE_73,
    FIELD_ID_MAX
  };

  const char* className() const { return "SRM_S01_RESOURCES"; }
  SRM_S01_RESOURCES* create() const { return new SRM_S01_RESOURCES(); }

  /* Initialize object */
  void init() {
    setName("SRM_S01.RESOURCES");
    addObject<RGS>(SRM_S01_RGS_33, "RGS.33", HL7::initialized,
		   HL7::repetition_off);
    addObject<SRM_S01_SERVICE>(SRM_S01_SERVICE_34, "SRM_S01.SERVICE",
			       HL7::optional, HL7::repetition_on);
    addObject<SRM_S01_GENERAL_RESOURCE>(SRM_S01_GENERAL_RESOURCE_47,
					"SRM_S01.GENERAL_RESOURCE",
					HL7::optional, HL7::repetition_on);
    addObject<SRM_S01_LOCATION_RESOURCE>(SRM_S01_LOCATION_RESOURCE_60,
					 "SRM_S01.LOCATION_RESOURCE",
					 HL7::optional, HL7::repetition_on);
    addObject<SRM_S01_PERSONNEL_RESOURCE>(SRM_S01_PERSONNEL_RESOURCE_73,
					  "SRM_S01.PERSONNEL_RESOURCE",
					  HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  RGS* getRGS_33(size_t index = 0) {
    return (RGS*)this->getObjectSafe(index, SRM_S01_RGS_33);
  }
  SRM_S01_SERVICE* getSERVICE(size_t index = 0) {
    return (SRM_S01_SERVICE*)this->getObjectSafe(index, SRM_S01_SERVICE_34);
  }
  SRM_S01_GENERAL_RESOURCE* getGENERAL_RESOURCE(size_t index = 0) {
    return (SRM_S01_GENERAL_RESOURCE*)this->getObjectSafe(
	index, SRM_S01_GENERAL_RESOURCE_47);
  }
  SRM_S01_LOCATION_RESOURCE* getLOCATION_RESOURCE(size_t index = 0) {
    return (SRM_S01_LOCATION_RESOURCE*)this->getObjectSafe(
	index, SRM_S01_LOCATION_RESOURCE_60);
  }
  SRM_S01_PERSONNEL_RESOURCE* getPERSONNEL_RESOURCE(size_t index = 0) {
    return (SRM_S01_PERSONNEL_RESOURCE*)this->getObjectSafe(
	index, SRM_S01_PERSONNEL_RESOURCE_73);
  }

  /* Checker list */
  bool isRGS_33(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_RGS_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSERVICE(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_SERVICE_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGENERAL_RESOURCE(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_GENERAL_RESOURCE_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isLOCATION_RESOURCE(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_LOCATION_RESOURCE_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPERSONNEL_RESOURCE(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_PERSONNEL_RESOURCE_73) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SRM_S01_32 */

/* SRM_S01 */
struct SRM_S01 : public HL7Message {
  SRM_S01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SRM_S01_MSH_1,
    SRM_S01_ARQ_2,
    SRM_S01_APR_4,
    SRM_S01_NTE_8,
    SRM_S01_PATIENT_11,
    SRM_S01_RESOURCES_32,
    FIELD_ID_MAX
  };

  const char* className() const { return "SRM_S01"; }
  SRM_S01* create() const { return new SRM_S01(); }

  /* Initialize object */
  void init() {
    setName("SRM_S01");
    addObject<MSH>(SRM_S01_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<ARQ>(SRM_S01_ARQ_2, "ARQ.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<APR>(SRM_S01_APR_4, "APR.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(SRM_S01_NTE_8, "NTE.8", HL7::optional, HL7::repetition_on);
    addObject<SRM_S01_PATIENT>(SRM_S01_PATIENT_11, "SRM_S01.PATIENT",
			       HL7::optional, HL7::repetition_on);
    addObject<SRM_S01_RESOURCES>(SRM_S01_RESOURCES_32, "SRM_S01.RESOURCES",
				 HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, SRM_S01_MSH_1);
  }
  ARQ* getARQ_2(size_t index = 0) {
    return (ARQ*)this->getObjectSafe(index, SRM_S01_ARQ_2);
  }
  APR* getAPR_4(size_t index = 0) {
    return (APR*)this->getObjectSafe(index, SRM_S01_APR_4);
  }
  NTE* getNTE_8(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRM_S01_NTE_8);
  }
  SRM_S01_PATIENT* getPATIENT(size_t index = 0) {
    return (SRM_S01_PATIENT*)this->getObjectSafe(index, SRM_S01_PATIENT_11);
  }
  SRM_S01_RESOURCES* getRESOURCES(size_t index = 0) {
    return (SRM_S01_RESOURCES*)this->getObjectSafe(index, SRM_S01_RESOURCES_32);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARQ_2(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_ARQ_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAPR_4(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_APR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_8(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_NTE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_PATIENT_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRESOURCES(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S01_RESOURCES_32) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SRM_S01_ */
} /* namespace HL7_24 */
#endif /*  __SRM_S01__24_H__ */
