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


#ifndef __OUL_R21__24_H__
#define __OUL_R21__24_H__

#include "../../common/Util.h"
#include "../segment/CTI.h"
#include "../segment/DSC.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/SAC.h"
#include "../segment/SID.h"
#include "../segment/TCD.h"

namespace HL7_24 {

/* Internal structures/groups */
struct OUL_R21_PATIENT;		  /* PATIENT */
struct OUL_R21_VISIT;		  /* VISIT */
struct OUL_R21_CONTAINER;	 /* CONTAINER */
struct OUL_R21_OBSERVATION;       /* OBSERVATION */
struct OUL_R21_ORDER_OBSERVATION; /* ORDER_OBSERVATION */

/* PATIENT */
struct OUL_R21_PATIENT : public HL7Group {
  OUL_R21_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { OUL_R21_PID_6, OUL_R21_PD1_8, OUL_R21_NTE_12, FIELD_ID_MAX };

  const char* className() const { return "OUL_R21_PATIENT"; }
  OUL_R21_PATIENT* create() const { return new OUL_R21_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("OUL_R21.PATIENT");
    addObject<PID>(OUL_R21_PID_6, "PID.6", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(OUL_R21_PD1_8, "PD1.8", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OUL_R21_NTE_12, "NTE.12", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PID* getPID_6(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OUL_R21_PID_6);
  }
  PD1* getPD1_8(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OUL_R21_PD1_8);
  }
  NTE* getNTE_12(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OUL_R21_NTE_12);
  }

  /* Checker list */
  bool isPID_6(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R21_PID_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_8(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R21_PD1_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_12(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R21_NTE_12) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OUL_R21_5 */

/* VISIT */
struct OUL_R21_VISIT : public HL7Group {
  OUL_R21_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { OUL_R21_PV1_17, OUL_R21_PV2_19, FIELD_ID_MAX };

  const char* className() const { return "OUL_R21_VISIT"; }
  OUL_R21_VISIT* create() const { return new OUL_R21_VISIT(); }

  /* Initialize object */
  void init() {
    setName("OUL_R21.VISIT");
    addObject<PV1>(OUL_R21_PV1_17, "PV1.17", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(OUL_R21_PV2_19, "PV2.19", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  PV1* getPV1_17(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OUL_R21_PV1_17);
  }
  PV2* getPV2_19(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OUL_R21_PV2_19);
  }

  /* Checker list */
  bool isPV1_17(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R21_PV1_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_19(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R21_PV2_19) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OUL_R21_16 */

/* CONTAINER */
struct OUL_R21_CONTAINER : public HL7Group {
  OUL_R21_CONTAINER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OUL_R21_SAC_25,
    OUL_R21_SID_27,
    OUL_R21_OBX_31,
    FIELD_ID_MAX
  };

  const char* className() const { return "OUL_R21_CONTAINER"; }
  OUL_R21_CONTAINER* create() const { return new OUL_R21_CONTAINER(); }

  /* Initialize object */
  void init() {
    setName("OUL_R21.CONTAINER");
    addObject<SAC>(OUL_R21_SAC_25, "SAC.25", HL7::initialized,
		   HL7::repetition_off);
    addObject<SID>(OUL_R21_SID_27, "SID.27", HL7::optional,
		   HL7::repetition_off);
    addObject<OBX>(OUL_R21_OBX_31, "OBX.31", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  SAC* getSAC_25(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OUL_R21_SAC_25);
  }
  SID* getSID_27(size_t index = 0) {
    return (SID*)this->getObjectSafe(index, OUL_R21_SID_27);
  }
  OBX* getOBX_31(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R21_OBX_31);
  }

  /* Checker list */
  bool isSAC_25(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R21_SAC_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSID_27(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R21_SID_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_31(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R21_OBX_31) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OUL_R21_24 */

/* OBSERVATION */
struct OUL_R21_OBSERVATION : public HL7Group {
  OUL_R21_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OUL_R21_OBX_46,
    OUL_R21_TCD_49,
    OUL_R21_SID_53,
    OUL_R21_NTE_58,
    FIELD_ID_MAX
  };

  const char* className() const { return "OUL_R21_OBSERVATION"; }
  OUL_R21_OBSERVATION* create() const { return new OUL_R21_OBSERVATION(); }

  /* Initialize object */
  void init() {
    setName("OUL_R21.OBSERVATION");
    addObject<OBX>(OUL_R21_OBX_46, "OBX.46", HL7::optional,
		   HL7::repetition_off);
    addObject<TCD>(OUL_R21_TCD_49, "TCD.49", HL7::optional,
		   HL7::repetition_off);
    addObject<SID>(OUL_R21_SID_53, "SID.53", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OUL_R21_NTE_58, "NTE.58", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_46(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R21_OBX_46);
  }
  TCD* getTCD_49(size_t index = 0) {
    return (TCD*)this->getObjectSafe(index, OUL_R21_TCD_49);
  }
  SID* getSID_53(size_t index = 0) {
    return (SID*)this->getObjectSafe(index, OUL_R21_SID_53);
  }
  NTE* getNTE_58(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OUL_R21_NTE_58);
  }

  /* Checker list */
  bool isOBX_46(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R21_OBX_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTCD_49(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R21_TCD_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSID_53(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R21_SID_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_58(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R21_NTE_58) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OUL_R21_44 */

/* ORDER_OBSERVATION */
struct OUL_R21_ORDER_OBSERVATION : public HL7Group {
  OUL_R21_ORDER_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OUL_R21_CONTAINER_24,
    OUL_R21_ORC_36,
    OUL_R21_OBR_38,
    OUL_R21_NTE_41,
    OUL_R21_OBSERVATION_44,
    OUL_R21_CTI_64,
    FIELD_ID_MAX
  };

  const char* className() const { return "OUL_R21_ORDER_OBSERVATION"; }
  OUL_R21_ORDER_OBSERVATION* create() const {
    return new OUL_R21_ORDER_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("OUL_R21.ORDER_OBSERVATION");
    addObject<OUL_R21_CONTAINER>(OUL_R21_CONTAINER_24, "OUL_R21.CONTAINER",
				 HL7::optional, HL7::repetition_off);
    addObject<ORC>(OUL_R21_ORC_36, "ORC.36", HL7::optional,
		   HL7::repetition_off);
    addObject<OBR>(OUL_R21_OBR_38, "OBR.38", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(OUL_R21_NTE_41, "NTE.41", HL7::optional, HL7::repetition_on);
    addObject<OUL_R21_OBSERVATION>(OUL_R21_OBSERVATION_44,
				   "OUL_R21.OBSERVATION", HL7::initialized,
				   HL7::repetition_on);
    addObject<CTI>(OUL_R21_CTI_64, "CTI.64", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OUL_R21_CONTAINER* getCONTAINER(size_t index = 0) {
    return (OUL_R21_CONTAINER*)this->getObjectSafe(index, OUL_R21_CONTAINER_24);
  }
  ORC* getORC_36(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OUL_R21_ORC_36);
  }
  OBR* getOBR_38(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OUL_R21_OBR_38);
  }
  NTE* getNTE_41(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OUL_R21_NTE_41);
  }
  OUL_R21_OBSERVATION* getOBSERVATION(size_t index = 0) {
    return (OUL_R21_OBSERVATION*)this->getObjectSafe(index,
						     OUL_R21_OBSERVATION_44);
  }
  CTI* getCTI_64(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, OUL_R21_CTI_64);
  }

  /* Checker list */
  bool isCONTAINER(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R21_CONTAINER_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_36(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R21_ORC_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_38(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R21_OBR_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_41(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R21_NTE_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R21_OBSERVATION_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_64(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R21_CTI_64) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OUL_R21_23 */

/* OUL_R21 */
struct OUL_R21 : public HL7Message {
  OUL_R21() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OUL_R21_MSH_1,
    OUL_R21_NTE_3,
    OUL_R21_PATIENT_5,
    OUL_R21_VISIT_16,
    OUL_R21_ORDER_OBSERVATION_23,
    OUL_R21_DSC_69,
    FIELD_ID_MAX
  };

  const char* className() const { return "OUL_R21"; }
  OUL_R21* create() const { return new OUL_R21(); }

  /* Initialize object */
  void init() {
    setName("OUL_R21");
    addObject<MSH>(OUL_R21_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(OUL_R21_NTE_3, "NTE.3", HL7::optional, HL7::repetition_off);
    addObject<OUL_R21_PATIENT>(OUL_R21_PATIENT_5, "OUL_R21.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<OUL_R21_VISIT>(OUL_R21_VISIT_16, "OUL_R21.VISIT", HL7::optional,
			     HL7::repetition_off);
    addObject<OUL_R21_ORDER_OBSERVATION>(OUL_R21_ORDER_OBSERVATION_23,
					 "OUL_R21.ORDER_OBSERVATION",
					 HL7::initialized, HL7::repetition_on);
    addObject<DSC>(OUL_R21_DSC_69, "DSC.69", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OUL_R21_MSH_1);
  }
  NTE* getNTE_3(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OUL_R21_NTE_3);
  }
  OUL_R21_PATIENT* getPATIENT(size_t index = 0) {
    return (OUL_R21_PATIENT*)this->getObjectSafe(index, OUL_R21_PATIENT_5);
  }
  OUL_R21_VISIT* getVISIT(size_t index = 0) {
    return (OUL_R21_VISIT*)this->getObjectSafe(index, OUL_R21_VISIT_16);
  }
  OUL_R21_ORDER_OBSERVATION* getORDER_OBSERVATION(size_t index = 0) {
    return (OUL_R21_ORDER_OBSERVATION*)this->getObjectSafe(
	index, OUL_R21_ORDER_OBSERVATION_23);
  }
  DSC* getDSC_69(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, OUL_R21_DSC_69);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R21_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_3(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R21_NTE_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R21_PATIENT_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVISIT(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R21_VISIT_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R21_ORDER_OBSERVATION_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_69(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R21_DSC_69) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OUL_R21_ */
} /* namespace HL7_24 */
#endif /*  __OUL_R21__24_H__ */
