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


#ifndef __ORU_R01__24_H__
#define __ORU_R01__24_H__

#include "../../common/Util.h"
#include "../segment/CTD.h"
#include "../segment/CTI.h"
#include "../segment/DSC.h"
#include "../segment/FT1.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"

namespace HL7_24 {

/* Internal structures/groups */
struct ORU_R01_VISIT;		  /* VISIT */
struct ORU_R01_PATIENT;		  /* PATIENT */
struct ORU_R01_OBSERVATION;       /* OBSERVATION */
struct ORU_R01_ORDER_OBSERVATION; /* ORDER_OBSERVATION */
struct ORU_R01_PATIENT_RESULT;    /* PATIENT_RESULT */

/* VISIT */
struct ORU_R01_VISIT : public HL7Group {
  ORU_R01_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ORU_R01_PV1_19, ORU_R01_PV2_21, FIELD_ID_MAX };

  const char* className() const { return "ORU_R01_VISIT"; }
  ORU_R01_VISIT* create() const { return new ORU_R01_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORU_R01.VISIT");
    addObject<PV1>(ORU_R01_PV1_19, "PV1.19", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(ORU_R01_PV2_21, "PV2.21", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  PV1* getPV1_19(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ORU_R01_PV1_19);
  }
  PV2* getPV2_21(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ORU_R01_PV2_21);
  }

  /* Checker list */
  bool isPV1_19(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R01_PV1_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_21(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R01_PV2_21) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORU_R01_18 */

/* PATIENT */
struct ORU_R01_PATIENT : public HL7Group {
  ORU_R01_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORU_R01_PID_4,
    ORU_R01_PD1_6,
    ORU_R01_NK1_10,
    ORU_R01_NTE_15,
    ORU_R01_VISIT_18,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORU_R01_PATIENT"; }
  ORU_R01_PATIENT* create() const { return new ORU_R01_PATIENT(); }

  /* Initialize object */
  void init() {
    setName("ORU_R01.PATIENT");
    addObject<PID>(ORU_R01_PID_4, "PID.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(ORU_R01_PD1_6, "PD1.6", HL7::optional, HL7::repetition_off);
    addObject<NK1>(ORU_R01_NK1_10, "NK1.10", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORU_R01_NTE_15, "NTE.15", HL7::optional, HL7::repetition_on);
    addObject<ORU_R01_VISIT>(ORU_R01_VISIT_18, "ORU_R01.VISIT", HL7::optional,
			     HL7::repetition_off);
  }

  /* Getters list */
  PID* getPID_4(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORU_R01_PID_4);
  }
  PD1* getPD1_6(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ORU_R01_PD1_6);
  }
  NK1* getNK1_10(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ORU_R01_NK1_10);
  }
  NTE* getNTE_15(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORU_R01_NTE_15);
  }
  ORU_R01_VISIT* getVISIT(size_t index = 0) {
    return (ORU_R01_VISIT*)this->getObjectSafe(index, ORU_R01_VISIT_18);
  }

  /* Checker list */
  bool isPID_4(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R01_PID_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_6(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R01_PD1_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_10(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R01_NK1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_15(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R01_NTE_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVISIT(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R01_VISIT_18) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORU_R01_3 */

/* OBSERVATION */
struct ORU_R01_OBSERVATION : public HL7Group {
  ORU_R01_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ORU_R01_OBX_40, ORU_R01_NTE_44, FIELD_ID_MAX };

  const char* className() const { return "ORU_R01_OBSERVATION"; }
  ORU_R01_OBSERVATION* create() const { return new ORU_R01_OBSERVATION(); }

  /* Initialize object */
  void init() {
    setName("ORU_R01.OBSERVATION");
    addObject<OBX>(ORU_R01_OBX_40, "OBX.40", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(ORU_R01_NTE_44, "NTE.44", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_40(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R01_OBX_40);
  }
  NTE* getNTE_44(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORU_R01_NTE_44);
  }

  /* Checker list */
  bool isOBX_40(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R01_OBX_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_44(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R01_NTE_44) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORU_R01_38 */

/* ORDER_OBSERVATION */
struct ORU_R01_ORDER_OBSERVATION : public HL7Group {
  ORU_R01_ORDER_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORU_R01_ORC_27,
    ORU_R01_OBR_29,
    ORU_R01_NTE_32,
    ORU_R01_CTD_36,
    ORU_R01_OBSERVATION_38,
    ORU_R01_FT1_50,
    ORU_R01_CTI_55,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORU_R01_ORDER_OBSERVATION"; }
  ORU_R01_ORDER_OBSERVATION* create() const {
    return new ORU_R01_ORDER_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("ORU_R01.ORDER_OBSERVATION");
    addObject<ORC>(ORU_R01_ORC_27, "ORC.27", HL7::optional,
		   HL7::repetition_off);
    addObject<OBR>(ORU_R01_OBR_29, "OBR.29", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(ORU_R01_NTE_32, "NTE.32", HL7::optional, HL7::repetition_on);
    addObject<CTD>(ORU_R01_CTD_36, "CTD.36", HL7::optional,
		   HL7::repetition_off);
    addObject<ORU_R01_OBSERVATION>(ORU_R01_OBSERVATION_38,
				   "ORU_R01.OBSERVATION", HL7::initialized,
				   HL7::repetition_on);
    addObject<FT1>(ORU_R01_FT1_50, "FT1.50", HL7::optional, HL7::repetition_on);
    addObject<CTI>(ORU_R01_CTI_55, "CTI.55", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_27(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORU_R01_ORC_27);
  }
  OBR* getOBR_29(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, ORU_R01_OBR_29);
  }
  NTE* getNTE_32(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORU_R01_NTE_32);
  }
  CTD* getCTD_36(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, ORU_R01_CTD_36);
  }
  ORU_R01_OBSERVATION* getOBSERVATION(size_t index = 0) {
    return (ORU_R01_OBSERVATION*)this->getObjectSafe(index,
						     ORU_R01_OBSERVATION_38);
  }
  FT1* getFT1_50(size_t index = 0) {
    return (FT1*)this->getObjectSafe(index, ORU_R01_FT1_50);
  }
  CTI* getCTI_55(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, ORU_R01_CTI_55);
  }

  /* Checker list */
  bool isORC_27(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R01_ORC_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_29(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R01_OBR_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_32(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R01_NTE_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_36(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R01_CTD_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R01_OBSERVATION_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFT1_50(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R01_FT1_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_55(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R01_CTI_55) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORU_R01_25 */

/* PATIENT_RESULT */
struct ORU_R01_PATIENT_RESULT : public HL7Group {
  ORU_R01_PATIENT_RESULT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORU_R01_PATIENT_3,
    ORU_R01_ORDER_OBSERVATION_25,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORU_R01_PATIENT_RESULT"; }
  ORU_R01_PATIENT_RESULT* create() const {
    return new ORU_R01_PATIENT_RESULT();
  }

  /* Initialize object */
  void init() {
    setName("ORU_R01.PATIENT_RESULT");
    addObject<ORU_R01_PATIENT>(ORU_R01_PATIENT_3, "ORU_R01.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<ORU_R01_ORDER_OBSERVATION>(ORU_R01_ORDER_OBSERVATION_25,
					 "ORU_R01.ORDER_OBSERVATION",
					 HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  ORU_R01_PATIENT* getPATIENT(size_t index = 0) {
    return (ORU_R01_PATIENT*)this->getObjectSafe(index, ORU_R01_PATIENT_3);
  }
  ORU_R01_ORDER_OBSERVATION* getORDER_OBSERVATION(size_t index = 0) {
    return (ORU_R01_ORDER_OBSERVATION*)this->getObjectSafe(
	index, ORU_R01_ORDER_OBSERVATION_25);
  }

  /* Checker list */
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R01_PATIENT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R01_ORDER_OBSERVATION_25) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORU_R01_2 */

/* ORU_R01 */
struct ORU_R01 : public HL7Message {
  ORU_R01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORU_R01_MSH_1,
    ORU_R01_PATIENT_RESULT_2,
    ORU_R01_DSC_61,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORU_R01"; }
  ORU_R01* create() const { return new ORU_R01(); }

  /* Initialize object */
  void init() {
    setName("ORU_R01");
    addObject<MSH>(ORU_R01_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<ORU_R01_PATIENT_RESULT>(ORU_R01_PATIENT_RESULT_2,
				      "ORU_R01.PATIENT_RESULT",
				      HL7::initialized, HL7::repetition_on);
    addObject<DSC>(ORU_R01_DSC_61, "DSC.61", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORU_R01_MSH_1);
  }
  ORU_R01_PATIENT_RESULT* getPATIENT_RESULT(size_t index = 0) {
    return (ORU_R01_PATIENT_RESULT*)this->getObjectSafe(
	index, ORU_R01_PATIENT_RESULT_2);
  }
  DSC* getDSC_61(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, ORU_R01_DSC_61);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT_RESULT(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R01_PATIENT_RESULT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_61(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R01_DSC_61) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORU_R01_ */
} /* namespace HL7_24 */
#endif /*  __ORU_R01__24_H__ */
