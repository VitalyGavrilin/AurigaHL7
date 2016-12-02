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


#ifndef __ORM_O01__24_H__
#define __ORM_O01__24_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/BLG.h"
#include "../segment/CTD.h"
#include "../segment/CTI.h"
#include "../segment/DG1.h"
#include "../segment/FT1.h"
#include "../segment/GT1.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IN3.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/ODS.h"
#include "../segment/ODT.h"
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/RQ1.h"
#include "../segment/RQD.h"
#include "../segment/RXO.h"

namespace HL7_24 {

/* Internal structures/groups */
struct ORM_O01_PATIENT_VISIT; /* PATIENT_VISIT */
struct ORM_O01_INSURANCE;     /* INSURANCE */
struct ORM_O01_PATIENT;       /* PATIENT */
struct ORM_O01_CHOICE;	/* CHOICE */
struct ORM_O01_OBSERVATION;   /* OBSERVATION */
struct ORM_O01_ORDER_DETAIL;  /* ORDER_DETAIL */
struct ORM_O01_ORDER;	 /* ORDER */

/* PATIENT_VISIT */
struct ORM_O01_PATIENT_VISIT : public HL7Group {
  ORM_O01_PATIENT_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ORM_O01_PV1_18, ORM_O01_PV2_20, FIELD_ID_MAX };

  const char* className() const { return "ORM_O01_PATIENT_VISIT"; }
  ORM_O01_PATIENT_VISIT* create() const { return new ORM_O01_PATIENT_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORM_O01.PATIENT_VISIT");
    addObject<PV1>(ORM_O01_PV1_18, "PV1.18", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(ORM_O01_PV2_20, "PV2.20", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  PV1* getPV1_18(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ORM_O01_PV1_18);
  }
  PV2* getPV2_20(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ORM_O01_PV2_20);
  }

  /* Checker list */
  bool isPV1_18(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_PV1_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_20(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_PV2_20) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORM_O01_17 */

/* INSURANCE */
struct ORM_O01_INSURANCE : public HL7Group {
  ORM_O01_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORM_O01_IN1_25,
    ORM_O01_IN2_27,
    ORM_O01_IN3_30,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORM_O01_INSURANCE"; }
  ORM_O01_INSURANCE* create() const { return new ORM_O01_INSURANCE(); }

  /* Initialize object */
  void init() {
    setName("ORM_O01.INSURANCE");
    addObject<IN1>(ORM_O01_IN1_25, "IN1.25", HL7::initialized,
		   HL7::repetition_off);
    addObject<IN2>(ORM_O01_IN2_27, "IN2.27", HL7::optional,
		   HL7::repetition_off);
    addObject<IN3>(ORM_O01_IN3_30, "IN3.30", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  IN1* getIN1_25(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, ORM_O01_IN1_25);
  }
  IN2* getIN2_27(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, ORM_O01_IN2_27);
  }
  IN3* getIN3_30(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, ORM_O01_IN3_30);
  }

  /* Checker list */
  bool isIN1_25(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_IN1_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_27(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_IN2_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_30(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_IN3_30) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORM_O01_23 */

/* PATIENT */
struct ORM_O01_PATIENT : public HL7Group {
  ORM_O01_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORM_O01_PID_8,
    ORM_O01_PD1_10,
    ORM_O01_NTE_14,
    ORM_O01_PATIENT_VISIT_17,
    ORM_O01_INSURANCE_23,
    ORM_O01_GT1_35,
    ORM_O01_AL1_39,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORM_O01_PATIENT"; }
  ORM_O01_PATIENT* create() const { return new ORM_O01_PATIENT(); }

  /* Initialize object */
  void init() {
    setName("ORM_O01.PATIENT");
    addObject<PID>(ORM_O01_PID_8, "PID.8", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(ORM_O01_PD1_10, "PD1.10", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(ORM_O01_NTE_14, "NTE.14", HL7::optional, HL7::repetition_on);
    addObject<ORM_O01_PATIENT_VISIT>(ORM_O01_PATIENT_VISIT_17,
				     "ORM_O01.PATIENT_VISIT", HL7::optional,
				     HL7::repetition_off);
    addObject<ORM_O01_INSURANCE>(ORM_O01_INSURANCE_23, "ORM_O01.INSURANCE",
				 HL7::optional, HL7::repetition_on);
    addObject<GT1>(ORM_O01_GT1_35, "GT1.35", HL7::optional,
		   HL7::repetition_off);
    addObject<AL1>(ORM_O01_AL1_39, "AL1.39", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PID* getPID_8(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORM_O01_PID_8);
  }
  PD1* getPD1_10(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ORM_O01_PD1_10);
  }
  NTE* getNTE_14(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORM_O01_NTE_14);
  }
  ORM_O01_PATIENT_VISIT* getPATIENT_VISIT(size_t index = 0) {
    return (ORM_O01_PATIENT_VISIT*)this->getObjectSafe(
	index, ORM_O01_PATIENT_VISIT_17);
  }
  ORM_O01_INSURANCE* getINSURANCE(size_t index = 0) {
    return (ORM_O01_INSURANCE*)this->getObjectSafe(index, ORM_O01_INSURANCE_23);
  }
  GT1* getGT1_35(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, ORM_O01_GT1_35);
  }
  AL1* getAL1_39(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, ORM_O01_AL1_39);
  }

  /* Checker list */
  bool isPID_8(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_PID_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_10(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_PD1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_14(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_NTE_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT_VISIT(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_PATIENT_VISIT_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINSURANCE(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_INSURANCE_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_35(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_GT1_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_39(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_AL1_39) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORM_O01_7 */

/* CHOICE */
struct ORM_O01_CHOICE : public HL7Group {
  ORM_O01_CHOICE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORM_O01_OBR_47,
    ORM_O01_RQD_49,
    ORM_O01_RQ1_51,
    ORM_O01_RXO_53,
    ORM_O01_ODS_55,
    ORM_O01_ODT_57,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORM_O01_CHOICE"; }
  ORM_O01_CHOICE* create() const { return new ORM_O01_CHOICE(); }

  /* Initialize object */
  void init() {
    setName("ORM_O01.CHOICE");
    addObject<OBR>(ORM_O01_OBR_47, "OBR.47", HL7::initialized,
		   HL7::repetition_off);
    addObject<RQD>(ORM_O01_RQD_49, "RQD.49", HL7::initialized,
		   HL7::repetition_off);
    addObject<RQ1>(ORM_O01_RQ1_51, "RQ1.51", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXO>(ORM_O01_RXO_53, "RXO.53", HL7::initialized,
		   HL7::repetition_off);
    addObject<ODS>(ORM_O01_ODS_55, "ODS.55", HL7::initialized,
		   HL7::repetition_off);
    addObject<ODT>(ORM_O01_ODT_57, "ODT.57", HL7::initialized,
		   HL7::repetition_off);
  }

  /* Getters list */
  OBR* getOBR_47(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, ORM_O01_OBR_47);
  }
  RQD* getRQD_49(size_t index = 0) {
    return (RQD*)this->getObjectSafe(index, ORM_O01_RQD_49);
  }
  RQ1* getRQ1_51(size_t index = 0) {
    return (RQ1*)this->getObjectSafe(index, ORM_O01_RQ1_51);
  }
  RXO* getRXO_53(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, ORM_O01_RXO_53);
  }
  ODS* getODS_55(size_t index = 0) {
    return (ODS*)this->getObjectSafe(index, ORM_O01_ODS_55);
  }
  ODT* getODT_57(size_t index = 0) {
    return (ODT*)this->getObjectSafe(index, ORM_O01_ODT_57);
  }

  /* Checker list */
  bool isOBR_47(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_OBR_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRQD_49(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_RQD_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRQ1_51(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_RQ1_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_53(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_RXO_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODS_55(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_ODS_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODT_57(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_ODT_57) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORM_O01_46 */

/* OBSERVATION */
struct ORM_O01_OBSERVATION : public HL7Group {
  ORM_O01_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ORM_O01_OBX_69, ORM_O01_NTE_72, FIELD_ID_MAX };

  const char* className() const { return "ORM_O01_OBSERVATION"; }
  ORM_O01_OBSERVATION* create() const { return new ORM_O01_OBSERVATION(); }

  /* Initialize object */
  void init() {
    setName("ORM_O01.OBSERVATION");
    addObject<OBX>(ORM_O01_OBX_69, "OBX.69", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(ORM_O01_NTE_72, "NTE.72", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_69(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORM_O01_OBX_69);
  }
  NTE* getNTE_72(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORM_O01_NTE_72);
  }

  /* Checker list */
  bool isOBX_69(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_OBX_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_72(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_NTE_72) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORM_O01_67 */

/* ORDER_DETAIL */
struct ORM_O01_ORDER_DETAIL : public HL7Group {
  ORM_O01_ORDER_DETAIL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORM_O01_CHOICE_46,
    ORM_O01_NTE_62,
    ORM_O01_CTD_63,
    ORM_O01_DG1_64,
    ORM_O01_OBSERVATION_67,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORM_O01_ORDER_DETAIL"; }
  ORM_O01_ORDER_DETAIL* create() const { return new ORM_O01_ORDER_DETAIL(); }

  /* Initialize object */
  void init() {
    setName("ORM_O01.ORDER_DETAIL");
    addObject<ORM_O01_CHOICE>(ORM_O01_CHOICE_46, "ORM_O01.CHOICE",
			      HL7::initialized, HL7::repetition_off);
    addObject<NTE>(ORM_O01_NTE_62, "NTE.62", HL7::optional, HL7::repetition_on);
    addObject<CTD>(ORM_O01_CTD_63, "CTD.63", HL7::optional,
		   HL7::repetition_off);
    addObject<DG1>(ORM_O01_DG1_64, "DG1.64", HL7::optional, HL7::repetition_on);
    addObject<ORM_O01_OBSERVATION>(ORM_O01_OBSERVATION_67,
				   "ORM_O01.OBSERVATION", HL7::optional,
				   HL7::repetition_on);
  }

  /* Getters list */
  ORM_O01_CHOICE* getCHOICE(size_t index = 0) {
    return (ORM_O01_CHOICE*)this->getObjectSafe(index, ORM_O01_CHOICE_46);
  }
  NTE* getNTE_62(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORM_O01_NTE_62);
  }
  CTD* getCTD_63(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, ORM_O01_CTD_63);
  }
  DG1* getDG1_64(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, ORM_O01_DG1_64);
  }
  ORM_O01_OBSERVATION* getOBSERVATION(size_t index = 0) {
    return (ORM_O01_OBSERVATION*)this->getObjectSafe(index,
						     ORM_O01_OBSERVATION_67);
  }

  /* Checker list */
  bool isCHOICE(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_CHOICE_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_62(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_NTE_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_63(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_CTD_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_64(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_DG1_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_OBSERVATION_67) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORM_O01_45 */

/* ORDER */
struct ORM_O01_ORDER : public HL7Group {
  ORM_O01_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORM_O01_ORC_44,
    ORM_O01_ORDER_DETAIL_45,
    ORM_O01_FT1_80,
    ORM_O01_CTI_85,
    ORM_O01_BLG_89,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORM_O01_ORDER"; }
  ORM_O01_ORDER* create() const { return new ORM_O01_ORDER(); }

  /* Initialize object */
  void init() {
    setName("ORM_O01.ORDER");
    addObject<ORC>(ORM_O01_ORC_44, "ORC.44", HL7::initialized,
		   HL7::repetition_off);
    addObject<ORM_O01_ORDER_DETAIL>(ORM_O01_ORDER_DETAIL_45,
				    "ORM_O01.ORDER_DETAIL", HL7::optional,
				    HL7::repetition_off);
    addObject<FT1>(ORM_O01_FT1_80, "FT1.80", HL7::optional, HL7::repetition_on);
    addObject<CTI>(ORM_O01_CTI_85, "CTI.85", HL7::optional, HL7::repetition_on);
    addObject<BLG>(ORM_O01_BLG_89, "BLG.89", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  ORC* getORC_44(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORM_O01_ORC_44);
  }
  ORM_O01_ORDER_DETAIL* getORDER_DETAIL(size_t index = 0) {
    return (ORM_O01_ORDER_DETAIL*)this->getObjectSafe(index,
						      ORM_O01_ORDER_DETAIL_45);
  }
  FT1* getFT1_80(size_t index = 0) {
    return (FT1*)this->getObjectSafe(index, ORM_O01_FT1_80);
  }
  CTI* getCTI_85(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, ORM_O01_CTI_85);
  }
  BLG* getBLG_89(size_t index = 0) {
    return (BLG*)this->getObjectSafe(index, ORM_O01_BLG_89);
  }

  /* Checker list */
  bool isORC_44(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_ORC_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_DETAIL(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_ORDER_DETAIL_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFT1_80(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_FT1_80) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_85(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_CTI_85) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBLG_89(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_BLG_89) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORM_O01_43 */

/* ORM_O01 */
struct ORM_O01 : public HL7Message {
  ORM_O01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORM_O01_MSH_1,
    ORM_O01_NTE_4,
    ORM_O01_PATIENT_7,
    ORM_O01_ORDER_43,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORM_O01"; }
  ORM_O01* create() const { return new ORM_O01(); }

  /* Initialize object */
  void init() {
    setName("ORM_O01");
    addObject<MSH>(ORM_O01_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(ORM_O01_NTE_4, "NTE.4", HL7::optional, HL7::repetition_on);
    addObject<ORM_O01_PATIENT>(ORM_O01_PATIENT_7, "ORM_O01.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<ORM_O01_ORDER>(ORM_O01_ORDER_43, "ORM_O01.ORDER",
			     HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORM_O01_MSH_1);
  }
  NTE* getNTE_4(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORM_O01_NTE_4);
  }
  ORM_O01_PATIENT* getPATIENT(size_t index = 0) {
    return (ORM_O01_PATIENT*)this->getObjectSafe(index, ORM_O01_PATIENT_7);
  }
  ORM_O01_ORDER* getORDER(size_t index = 0) {
    return (ORM_O01_ORDER*)this->getObjectSafe(index, ORM_O01_ORDER_43);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_4(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_NTE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_PATIENT_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, ORM_O01_ORDER_43) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORM_O01_ */
} /* namespace HL7_24 */
#endif /*  __ORM_O01__24_H__ */
