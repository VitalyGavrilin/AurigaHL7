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


#ifndef __DFT_P03__24_H__
#define __DFT_P03__24_H__

#include "../../common/Util.h"
#include "../segment/ACC.h"
#include "../segment/DB1.h"
#include "../segment/DG1.h"
#include "../segment/DRG.h"
#include "../segment/EVN.h"
#include "../segment/FT1.h"
#include "../segment/GT1.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IN3.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PR1.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/ROL.h"

namespace HL7_24 {

/* Internal structures/groups */
struct DFT_P03_ORDER;		       /* ORDER */
struct DFT_P03_OBSERVATION;	    /* OBSERVATION */
struct DFT_P03_COMMON_ORDER;	   /* COMMON_ORDER */
struct DFT_P03_FINANCIAL_PROCEDURE;    /* FINANCIAL_PROCEDURE */
struct DFT_P03_FINANCIAL_ORDER;	/* FINANCIAL_ORDER */
struct DFT_P03_FINANCIAL_OBSERVATION;  /* FINANCIAL_OBSERVATION */
struct DFT_P03_FINANCIAL_COMMON_ORDER; /* FINANCIAL_COMMON_ORDER */
struct DFT_P03_FINANCIAL;	      /* FINANCIAL */
struct DFT_P03_INSURANCE;	      /* INSURANCE */

/* ORDER */
struct DFT_P03_ORDER : public HL7Group {
  DFT_P03_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { DFT_P03_OBR_34, DFT_P03_NTE_37, FIELD_ID_MAX };

  const char* className() const { return "DFT_P03_ORDER"; }
  DFT_P03_ORDER* create() const { return new DFT_P03_ORDER(); }

 private:
  /* Initialize object */
  void init() {
    setName("DFT_P03.ORDER");
    addObject<OBR>(DFT_P03_OBR_34, "OBR.34", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(DFT_P03_NTE_37, "NTE.37", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  OBR* getOBR_34(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, DFT_P03_OBR_34);
  }
  NTE* getNTE_37(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DFT_P03_NTE_37);
  }

  /* Checker list */
  bool isOBR_34(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_OBR_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_37(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_NTE_37) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DFT_P03_33 */

/* OBSERVATION */
struct DFT_P03_OBSERVATION : public HL7Group {
  DFT_P03_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { DFT_P03_OBX_43, DFT_P03_NTE_46, FIELD_ID_MAX };

  const char* className() const { return "DFT_P03_OBSERVATION"; }
  DFT_P03_OBSERVATION* create() const { return new DFT_P03_OBSERVATION(); }

  /* Initialize object */
  void init() {
    setName("DFT_P03.OBSERVATION");
    addObject<OBX>(DFT_P03_OBX_43, "OBX.43", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(DFT_P03_NTE_46, "NTE.46", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_43(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DFT_P03_OBX_43);
  }
  NTE* getNTE_46(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DFT_P03_NTE_46);
  }

  /* Checker list */
  bool isOBX_43(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_OBX_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_46(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_NTE_46) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DFT_P03_41 */

/* COMMON_ORDER */
struct DFT_P03_COMMON_ORDER : public HL7Group {
  DFT_P03_COMMON_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DFT_P03_ORC_31,
    DFT_P03_ORDER_33,
    DFT_P03_OBSERVATION_41,
    FIELD_ID_MAX
  };

  const char* className() const { return "DFT_P03_COMMON_ORDER"; }
  DFT_P03_COMMON_ORDER* create() const { return new DFT_P03_COMMON_ORDER(); }

  /* Initialize object */
  void init() {
    setName("DFT_P03.COMMON_ORDER");
    addObject<ORC>(DFT_P03_ORC_31, "ORC.31", HL7::optional,
		   HL7::repetition_off);
    addObject<DFT_P03_ORDER>(DFT_P03_ORDER_33, "DFT_P03.ORDER", HL7::optional,
			     HL7::repetition_off);
    addObject<DFT_P03_OBSERVATION>(DFT_P03_OBSERVATION_41,
				   "DFT_P03.OBSERVATION", HL7::optional,
				   HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_31(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, DFT_P03_ORC_31);
  }
  DFT_P03_ORDER* getORDER(size_t index = 0) {
    return (DFT_P03_ORDER*)this->getObjectSafe(index, DFT_P03_ORDER_33);
  }
  DFT_P03_OBSERVATION* getOBSERVATION(size_t index = 0) {
    return (DFT_P03_OBSERVATION*)this->getObjectSafe(index,
						     DFT_P03_OBSERVATION_41);
  }

  /* Checker list */
  bool isORC_31(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_ORC_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_ORDER_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_OBSERVATION_41) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DFT_P03_28 */

/* FINANCIAL_PROCEDURE */
struct DFT_P03_FINANCIAL_PROCEDURE : public HL7Group {
  DFT_P03_FINANCIAL_PROCEDURE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { DFT_P03_PR1_57, DFT_P03_ROL_60, FIELD_ID_MAX };

  const char* className() const { return "DFT_P03_FINANCIAL_PROCEDURE"; }
  DFT_P03_FINANCIAL_PROCEDURE* create() const {
    return new DFT_P03_FINANCIAL_PROCEDURE();
  }

  /* Initialize object */
  void init() {
    setName("DFT_P03.FINANCIAL_PROCEDURE");
    addObject<PR1>(DFT_P03_PR1_57, "PR1.57", HL7::initialized,
		   HL7::repetition_off);
    addObject<ROL>(DFT_P03_ROL_60, "ROL.60", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PR1* getPR1_57(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, DFT_P03_PR1_57);
  }
  ROL* getROL_60(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, DFT_P03_ROL_60);
  }

  /* Checker list */
  bool isPR1_57(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_PR1_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_60(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_ROL_60) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DFT_P03_55 */

/* FINANCIAL_ORDER */
struct DFT_P03_FINANCIAL_ORDER : public HL7Group {
  DFT_P03_FINANCIAL_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { DFT_P03_OBR_71, DFT_P03_NTE_74, FIELD_ID_MAX };

  const char* className() const { return "DFT_P03_FINANCIAL_ORDER"; }
  DFT_P03_FINANCIAL_ORDER* create() const {
    return new DFT_P03_FINANCIAL_ORDER();
  }

  /* Initialize object */
  void init() {
    setName("DFT_P03.FINANCIAL_ORDER");
    addObject<OBR>(DFT_P03_OBR_71, "OBR.71", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(DFT_P03_NTE_74, "NTE.74", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBR* getOBR_71(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, DFT_P03_OBR_71);
  }
  NTE* getNTE_74(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DFT_P03_NTE_74);
  }

  /* Checker list */
  bool isOBR_71(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_OBR_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_74(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_NTE_74) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DFT_P03_70 */

/* FINANCIAL_OBSERVATION */
struct DFT_P03_FINANCIAL_OBSERVATION : public HL7Group {
  DFT_P03_FINANCIAL_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { DFT_P03_OBX_80, DFT_P03_NTE_83, FIELD_ID_MAX };

  const char* className() const { return "DFT_P03_FINANCIAL_OBSERVATION"; }
  DFT_P03_FINANCIAL_OBSERVATION* create() const {
    return new DFT_P03_FINANCIAL_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("DFT_P03.FINANCIAL_OBSERVATION");
    addObject<OBX>(DFT_P03_OBX_80, "OBX.80", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(DFT_P03_NTE_83, "NTE.83", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_80(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DFT_P03_OBX_80);
  }
  NTE* getNTE_83(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DFT_P03_NTE_83);
  }

  /* Checker list */
  bool isOBX_80(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_OBX_80) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_83(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_NTE_83) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DFT_P03_78 */

/* FINANCIAL_COMMON_ORDER */
struct DFT_P03_FINANCIAL_COMMON_ORDER : public HL7Group {
  DFT_P03_FINANCIAL_COMMON_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DFT_P03_ORC_68,
    DFT_P03_FINANCIAL_ORDER_70,
    DFT_P03_FINANCIAL_OBSERVATION_78,
    FIELD_ID_MAX
  };

  const char* className() const { return "DFT_P03_FINANCIAL_COMMON_ORDER"; }
  DFT_P03_FINANCIAL_COMMON_ORDER* create() const {
    return new DFT_P03_FINANCIAL_COMMON_ORDER();
  }

  /* Initialize object */
  void init() {
    setName("DFT_P03.FINANCIAL_COMMON_ORDER");
    addObject<ORC>(DFT_P03_ORC_68, "ORC.68", HL7::optional,
		   HL7::repetition_off);
    addObject<DFT_P03_FINANCIAL_ORDER>(DFT_P03_FINANCIAL_ORDER_70,
				       "DFT_P03.FINANCIAL_ORDER", HL7::optional,
				       HL7::repetition_off);
    addObject<DFT_P03_FINANCIAL_OBSERVATION>(DFT_P03_FINANCIAL_OBSERVATION_78,
					     "DFT_P03.FINANCIAL_OBSERVATION",
					     HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_68(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, DFT_P03_ORC_68);
  }
  DFT_P03_FINANCIAL_ORDER* getFINANCIAL_ORDER(size_t index = 0) {
    return (DFT_P03_FINANCIAL_ORDER*)this->getObjectSafe(
	index, DFT_P03_FINANCIAL_ORDER_70);
  }
  DFT_P03_FINANCIAL_OBSERVATION* getFINANCIAL_OBSERVATION(size_t index = 0) {
    return (DFT_P03_FINANCIAL_OBSERVATION*)this->getObjectSafe(
	index, DFT_P03_FINANCIAL_OBSERVATION_78);
  }

  /* Checker list */
  bool isORC_68(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_ORC_68) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFINANCIAL_ORDER(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_FINANCIAL_ORDER_70) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFINANCIAL_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_FINANCIAL_OBSERVATION_78) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DFT_P03_65 */

/* FINANCIAL */
struct DFT_P03_FINANCIAL : public HL7Group {
  DFT_P03_FINANCIAL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DFT_P03_FT1_54,
    DFT_P03_FINANCIAL_PROCEDURE_55,
    DFT_P03_FINANCIAL_COMMON_ORDER_65,
    FIELD_ID_MAX
  };

  const char* className() const { return "DFT_P03_FINANCIAL"; }
  DFT_P03_FINANCIAL* create() const { return new DFT_P03_FINANCIAL(); }

  /* Initialize object */
  void init() {
    setName("DFT_P03.FINANCIAL");
    addObject<FT1>(DFT_P03_FT1_54, "FT1.54", HL7::initialized,
		   HL7::repetition_off);
    addObject<DFT_P03_FINANCIAL_PROCEDURE>(DFT_P03_FINANCIAL_PROCEDURE_55,
					   "DFT_P03.FINANCIAL_PROCEDURE",
					   HL7::optional, HL7::repetition_on);
    addObject<DFT_P03_FINANCIAL_COMMON_ORDER>(
	DFT_P03_FINANCIAL_COMMON_ORDER_65, "DFT_P03.FINANCIAL_COMMON_ORDER",
	HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  FT1* getFT1_54(size_t index = 0) {
    return (FT1*)this->getObjectSafe(index, DFT_P03_FT1_54);
  }
  DFT_P03_FINANCIAL_PROCEDURE* getFINANCIAL_PROCEDURE(size_t index = 0) {
    return (DFT_P03_FINANCIAL_PROCEDURE*)this->getObjectSafe(
	index, DFT_P03_FINANCIAL_PROCEDURE_55);
  }
  DFT_P03_FINANCIAL_COMMON_ORDER* getFINANCIAL_COMMON_ORDER(size_t index = 0) {
    return (DFT_P03_FINANCIAL_COMMON_ORDER*)this->getObjectSafe(
	index, DFT_P03_FINANCIAL_COMMON_ORDER_65);
  }

  /* Checker list */
  bool isFT1_54(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_FT1_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFINANCIAL_PROCEDURE(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_FINANCIAL_PROCEDURE_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFINANCIAL_COMMON_ORDER(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_FINANCIAL_COMMON_ORDER_65) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DFT_P03_53 */

/* INSURANCE */
struct DFT_P03_INSURANCE : public HL7Group {
  DFT_P03_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DFT_P03_IN1_105,
    DFT_P03_IN2_107,
    DFT_P03_IN3_111,
    DFT_P03_ROL_116,
    FIELD_ID_MAX
  };

  const char* className() const { return "DFT_P03_INSURANCE"; }
  DFT_P03_INSURANCE* create() const { return new DFT_P03_INSURANCE(); }

  /* Initialize object */
  void init() {
    setName("DFT_P03.INSURANCE");
    addObject<IN1>(DFT_P03_IN1_105, "IN1.105", HL7::initialized,
		   HL7::repetition_off);
    addObject<IN2>(DFT_P03_IN2_107, "IN2.107", HL7::optional,
		   HL7::repetition_off);
    addObject<IN3>(DFT_P03_IN3_111, "IN3.111", HL7::optional,
		   HL7::repetition_on);
    addObject<ROL>(DFT_P03_ROL_116, "ROL.116", HL7::optional,
		   HL7::repetition_on);
  }

  /* Getters list */
  IN1* getIN1_105(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, DFT_P03_IN1_105);
  }
  IN2* getIN2_107(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, DFT_P03_IN2_107);
  }
  IN3* getIN3_111(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, DFT_P03_IN3_111);
  }
  ROL* getROL_116(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, DFT_P03_ROL_116);
  }

  /* Checker list */
  bool isIN1_105(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_IN1_105) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_107(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_IN2_107) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_111(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_IN3_111) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_116(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_ROL_116) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DFT_P03_103 */

/* DFT_P03 */
struct DFT_P03 : public HL7Message {
  DFT_P03() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DFT_P03_MSH_1,
    DFT_P03_EVN_2,
    DFT_P03_PID_3,
    DFT_P03_PD1_5,
    DFT_P03_ROL_9,
    DFT_P03_PV1_13,
    DFT_P03_PV2_16,
    DFT_P03_ROL_20,
    DFT_P03_DB1_25,
    DFT_P03_COMMON_ORDER_28,
    DFT_P03_FINANCIAL_53,
    DFT_P03_DG1_92,
    DFT_P03_DRG_96,
    DFT_P03_GT1_100,
    DFT_P03_INSURANCE_103,
    DFT_P03_ACC_154,
    FIELD_ID_MAX
  };

  const char* className() const { return "DFT_P03"; }
  DFT_P03* create() const { return new DFT_P03(); }

  /* Initialize object */
  void init() {
    setName("DFT_P03");
    addObject<MSH>(DFT_P03_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EVN>(DFT_P03_EVN_2, "EVN.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<PID>(DFT_P03_PID_3, "PID.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(DFT_P03_PD1_5, "PD1.5", HL7::optional, HL7::repetition_off);
    addObject<ROL>(DFT_P03_ROL_9, "ROL.9", HL7::optional, HL7::repetition_on);
    addObject<PV1>(DFT_P03_PV1_13, "PV1.13", HL7::optional,
		   HL7::repetition_off);
    addObject<PV2>(DFT_P03_PV2_16, "PV2.16", HL7::optional,
		   HL7::repetition_off);
    addObject<ROL>(DFT_P03_ROL_20, "ROL.20", HL7::optional, HL7::repetition_on);
    addObject<DB1>(DFT_P03_DB1_25, "DB1.25", HL7::optional, HL7::repetition_on);
    addObject<DFT_P03_COMMON_ORDER>(DFT_P03_COMMON_ORDER_28,
				    "DFT_P03.COMMON_ORDER", HL7::optional,
				    HL7::repetition_on);
    addObject<DFT_P03_FINANCIAL>(DFT_P03_FINANCIAL_53, "DFT_P03.FINANCIAL",
				 HL7::initialized, HL7::repetition_on);
    addObject<DG1>(DFT_P03_DG1_92, "DG1.92", HL7::optional, HL7::repetition_on);
    addObject<DRG>(DFT_P03_DRG_96, "DRG.96", HL7::optional,
		   HL7::repetition_off);
    addObject<GT1>(DFT_P03_GT1_100, "GT1.100", HL7::optional,
		   HL7::repetition_on);
    addObject<DFT_P03_INSURANCE>(DFT_P03_INSURANCE_103, "DFT_P03.INSURANCE",
				 HL7::optional, HL7::repetition_on);
    addObject<ACC>(DFT_P03_ACC_154, "ACC.154", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, DFT_P03_MSH_1);
  }
  EVN* getEVN_2(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, DFT_P03_EVN_2);
  }
  PID* getPID_3(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, DFT_P03_PID_3);
  }
  PD1* getPD1_5(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, DFT_P03_PD1_5);
  }
  ROL* getROL_9(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, DFT_P03_ROL_9);
  }
  PV1* getPV1_13(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, DFT_P03_PV1_13);
  }
  PV2* getPV2_16(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, DFT_P03_PV2_16);
  }
  ROL* getROL_20(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, DFT_P03_ROL_20);
  }
  DB1* getDB1_25(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, DFT_P03_DB1_25);
  }
  DFT_P03_COMMON_ORDER* getCOMMON_ORDER(size_t index = 0) {
    return (DFT_P03_COMMON_ORDER*)this->getObjectSafe(index,
						      DFT_P03_COMMON_ORDER_28);
  }
  DFT_P03_FINANCIAL* getFINANCIAL(size_t index = 0) {
    return (DFT_P03_FINANCIAL*)this->getObjectSafe(index, DFT_P03_FINANCIAL_53);
  }
  DG1* getDG1_92(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, DFT_P03_DG1_92);
  }
  DRG* getDRG_96(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, DFT_P03_DRG_96);
  }
  GT1* getGT1_100(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, DFT_P03_GT1_100);
  }
  DFT_P03_INSURANCE* getINSURANCE(size_t index = 0) {
    return (DFT_P03_INSURANCE*)this->getObjectSafe(index,
						   DFT_P03_INSURANCE_103);
  }
  ACC* getACC_154(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, DFT_P03_ACC_154);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_2(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_EVN_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_3(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_PID_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_5(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_PD1_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_9(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_ROL_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_13(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_PV1_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_16(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_PV2_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_20(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_ROL_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_25(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DB1_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCOMMON_ORDER(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_COMMON_ORDER_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFINANCIAL(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_FINANCIAL_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_92(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DG1_92) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_96(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DRG_96) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_100(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_GT1_100) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINSURANCE(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_INSURANCE_103) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_154(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_ACC_154) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DFT_P03_ */
} /* namespace HL7_24 */
#endif /*  __DFT_P03__24_H__ */
