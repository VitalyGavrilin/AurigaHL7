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


#ifndef __DFT_P11__24_H__
#define __DFT_P11__24_H__

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
struct DFT_P11_ORDER;		       /* ORDER */
struct DFT_P11_OBSERVATION;	    /* OBSERVATION */
struct DFT_P11_COMMON_ORDER;	   /* COMMON_ORDER */
struct DFT_P11_INSURANCE;	      /* INSURANCE */
struct DFT_P11_FINANCIAL_PROCEDURE;    /* FINANCIAL_PROCEDURE */
struct DFT_P11_FINANCIAL_ORDER;	/* FINANCIAL_ORDER */
struct DFT_P11_FINANCIAL_OBSERVATION;  /* FINANCIAL_OBSERVATION */
struct DFT_P11_FINANCIAL_COMMON_ORDER; /* FINANCIAL_COMMON_ORDER */
struct DFT_P11_FINANCIAL_INSURANCE;    /* FINANCIAL_INSURANCE */
struct DFT_P11_FINANCIAL;	      /* FINANCIAL */

/* ORDER */
struct DFT_P11_ORDER : public HL7Group {
  DFT_P11_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { DFT_P11_OBR_34, DFT_P11_NTE_37, FIELD_ID_MAX };

  const char* className() const { return "DFT_P11_ORDER"; }
  DFT_P11_ORDER* create() const { return new DFT_P11_ORDER(); }

 private:
  /* Initialize object */
  void init() {
    setName("DFT_P11.ORDER");
    addObject<OBR>(DFT_P11_OBR_34, "OBR.34", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(DFT_P11_NTE_37, "NTE.37", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  OBR* getOBR_34(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, DFT_P11_OBR_34);
  }
  NTE* getNTE_37(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DFT_P11_NTE_37);
  }

  /* Checker list */
  bool isOBR_34(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_OBR_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_37(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_NTE_37) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DFT_P11_33 */

/* OBSERVATION */
struct DFT_P11_OBSERVATION : public HL7Group {
  DFT_P11_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { DFT_P11_OBX_43, DFT_P11_NTE_46, FIELD_ID_MAX };

  const char* className() const { return "DFT_P11_OBSERVATION"; }
  DFT_P11_OBSERVATION* create() const { return new DFT_P11_OBSERVATION(); }

  /* Initialize object */
  void init() {
    setName("DFT_P11.OBSERVATION");
    addObject<OBX>(DFT_P11_OBX_43, "OBX.43", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(DFT_P11_NTE_46, "NTE.46", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_43(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DFT_P11_OBX_43);
  }
  NTE* getNTE_46(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DFT_P11_NTE_46);
  }

  /* Checker list */
  bool isOBX_43(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_OBX_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_46(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_NTE_46) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DFT_P11_41 */

/* COMMON_ORDER */
struct DFT_P11_COMMON_ORDER : public HL7Group {
  DFT_P11_COMMON_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DFT_P11_ORC_31,
    DFT_P11_ORDER_33,
    DFT_P11_OBSERVATION_41,
    FIELD_ID_MAX
  };

  const char* className() const { return "DFT_P11_COMMON_ORDER"; }
  DFT_P11_COMMON_ORDER* create() const { return new DFT_P11_COMMON_ORDER(); }

  /* Initialize object */
  void init() {
    setName("DFT_P11.COMMON_ORDER");
    addObject<ORC>(DFT_P11_ORC_31, "ORC.31", HL7::optional,
		   HL7::repetition_off);
    addObject<DFT_P11_ORDER>(DFT_P11_ORDER_33, "DFT_P11.ORDER", HL7::optional,
			     HL7::repetition_off);
    addObject<DFT_P11_OBSERVATION>(DFT_P11_OBSERVATION_41,
				   "DFT_P11.OBSERVATION", HL7::optional,
				   HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_31(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, DFT_P11_ORC_31);
  }
  DFT_P11_ORDER* getORDER(size_t index = 0) {
    return (DFT_P11_ORDER*)this->getObjectSafe(index, DFT_P11_ORDER_33);
  }
  DFT_P11_OBSERVATION* getOBSERVATION(size_t index = 0) {
    return (DFT_P11_OBSERVATION*)this->getObjectSafe(index,
						     DFT_P11_OBSERVATION_41);
  }

  /* Checker list */
  bool isORC_31(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_ORC_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_ORDER_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_OBSERVATION_41) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DFT_P11_28 */

/* INSURANCE */
struct DFT_P11_INSURANCE : public HL7Group {
  DFT_P11_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DFT_P11_IN1_137,
    DFT_P11_IN2_139,
    DFT_P11_IN3_143,
    DFT_P11_ROL_148,
    FIELD_ID_MAX
  };

  const char* className() const { return "DFT_P11_INSURANCE"; }
  DFT_P11_INSURANCE* create() const { return new DFT_P11_INSURANCE(); }

  /* Initialize object */
  void init() {
    setName("DFT_P11.INSURANCE");
    addObject<IN1>(DFT_P11_IN1_137, "IN1.137", HL7::initialized,
		   HL7::repetition_off);
    addObject<IN2>(DFT_P11_IN2_139, "IN2.139", HL7::optional,
		   HL7::repetition_off);
    addObject<IN3>(DFT_P11_IN3_143, "IN3.143", HL7::optional,
		   HL7::repetition_on);
    addObject<ROL>(DFT_P11_ROL_148, "ROL.148", HL7::optional,
		   HL7::repetition_on);
  }

  /* Getters list */
  IN1* getIN1_137(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, DFT_P11_IN1_137);
  }
  IN2* getIN2_139(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, DFT_P11_IN2_139);
  }
  IN3* getIN3_143(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, DFT_P11_IN3_143);
  }
  ROL* getROL_148(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, DFT_P11_ROL_148);
  }

  /* Checker list */
  bool isIN1_137(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_IN1_137) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_139(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_IN2_139) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_143(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_IN3_143) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_148(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_ROL_148) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DFT_P11_135 */

/* FINANCIAL_PROCEDURE */
struct DFT_P11_FINANCIAL_PROCEDURE : public HL7Group {
  DFT_P11_FINANCIAL_PROCEDURE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { DFT_P11_PR1_204, DFT_P11_ROL_205, FIELD_ID_MAX };

  const char* className() const { return "DFT_P11_FINANCIAL_PROCEDURE"; }
  DFT_P11_FINANCIAL_PROCEDURE* create() const {
    return new DFT_P11_FINANCIAL_PROCEDURE();
  }

  /* Initialize object */
  void init() {
    setName("DFT_P11.FINANCIAL_PROCEDURE");
    addObject<PR1>(DFT_P11_PR1_204, "PR1.204", HL7::initialized,
		   HL7::repetition_off);
    addObject<ROL>(DFT_P11_ROL_205, "ROL.205", HL7::optional,
		   HL7::repetition_on);
  }

  /* Getters list */
  PR1* getPR1_204(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, DFT_P11_PR1_204);
  }
  ROL* getROL_205(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, DFT_P11_ROL_205);
  }

  /* Checker list */
  bool isPR1_204(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_PR1_204) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_205(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_ROL_205) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DFT_P11_202 */

/* FINANCIAL_ORDER */
struct DFT_P11_FINANCIAL_ORDER : public HL7Group {
  DFT_P11_FINANCIAL_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { DFT_P11_OBR_213, DFT_P11_NTE_214, FIELD_ID_MAX };

  const char* className() const { return "DFT_P11_FINANCIAL_ORDER"; }
  DFT_P11_FINANCIAL_ORDER* create() const {
    return new DFT_P11_FINANCIAL_ORDER();
  }

  /* Initialize object */
  void init() {
    setName("DFT_P11.FINANCIAL_ORDER");
    addObject<OBR>(DFT_P11_OBR_213, "OBR.213", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(DFT_P11_NTE_214, "NTE.214", HL7::optional,
		   HL7::repetition_on);
  }

  /* Getters list */
  OBR* getOBR_213(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, DFT_P11_OBR_213);
  }
  NTE* getNTE_214(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DFT_P11_NTE_214);
  }

  /* Checker list */
  bool isOBR_213(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_OBR_213) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_214(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_NTE_214) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DFT_P11_212 */

/* FINANCIAL_OBSERVATION */
struct DFT_P11_FINANCIAL_OBSERVATION : public HL7Group {
  DFT_P11_FINANCIAL_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { DFT_P11_OBX_218, DFT_P11_NTE_219, FIELD_ID_MAX };

  const char* className() const { return "DFT_P11_FINANCIAL_OBSERVATION"; }
  DFT_P11_FINANCIAL_OBSERVATION* create() const {
    return new DFT_P11_FINANCIAL_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("DFT_P11.FINANCIAL_OBSERVATION");
    addObject<OBX>(DFT_P11_OBX_218, "OBX.218", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(DFT_P11_NTE_219, "NTE.219", HL7::optional,
		   HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_218(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DFT_P11_OBX_218);
  }
  NTE* getNTE_219(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DFT_P11_NTE_219);
  }

  /* Checker list */
  bool isOBX_218(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_OBX_218) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_219(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_NTE_219) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DFT_P11_216 */

/* FINANCIAL_COMMON_ORDER */
struct DFT_P11_FINANCIAL_COMMON_ORDER : public HL7Group {
  DFT_P11_FINANCIAL_COMMON_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DFT_P11_ORC_211,
    DFT_P11_FINANCIAL_ORDER_212,
    DFT_P11_FINANCIAL_OBSERVATION_216,
    FIELD_ID_MAX
  };

  const char* className() const { return "DFT_P11_FINANCIAL_COMMON_ORDER"; }
  DFT_P11_FINANCIAL_COMMON_ORDER* create() const {
    return new DFT_P11_FINANCIAL_COMMON_ORDER();
  }

  /* Initialize object */
  void init() {
    setName("DFT_P11.FINANCIAL_COMMON_ORDER");
    addObject<ORC>(DFT_P11_ORC_211, "ORC.211", HL7::optional,
		   HL7::repetition_off);
    addObject<DFT_P11_FINANCIAL_ORDER>(DFT_P11_FINANCIAL_ORDER_212,
				       "DFT_P11.FINANCIAL_ORDER", HL7::optional,
				       HL7::repetition_off);
    addObject<DFT_P11_FINANCIAL_OBSERVATION>(DFT_P11_FINANCIAL_OBSERVATION_216,
					     "DFT_P11.FINANCIAL_OBSERVATION",
					     HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_211(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, DFT_P11_ORC_211);
  }
  DFT_P11_FINANCIAL_ORDER* getFINANCIAL_ORDER(size_t index = 0) {
    return (DFT_P11_FINANCIAL_ORDER*)this->getObjectSafe(
	index, DFT_P11_FINANCIAL_ORDER_212);
  }
  DFT_P11_FINANCIAL_OBSERVATION* getFINANCIAL_OBSERVATION(size_t index = 0) {
    return (DFT_P11_FINANCIAL_OBSERVATION*)this->getObjectSafe(
	index, DFT_P11_FINANCIAL_OBSERVATION_216);
  }

  /* Checker list */
  bool isORC_211(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_ORC_211) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFINANCIAL_ORDER(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_FINANCIAL_ORDER_212) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFINANCIAL_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_FINANCIAL_OBSERVATION_216) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DFT_P11_209 */

/* FINANCIAL_INSURANCE */
struct DFT_P11_FINANCIAL_INSURANCE : public HL7Group {
  DFT_P11_FINANCIAL_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DFT_P11_IN1_229,
    DFT_P11_IN2_230,
    DFT_P11_IN3_231,
    DFT_P11_ROL_232,
    FIELD_ID_MAX
  };

  const char* className() const { return "DFT_P11_FINANCIAL_INSURANCE"; }
  DFT_P11_FINANCIAL_INSURANCE* create() const {
    return new DFT_P11_FINANCIAL_INSURANCE();
  }

  /* Initialize object */
  void init() {
    setName("DFT_P11.FINANCIAL_INSURANCE");
    addObject<IN1>(DFT_P11_IN1_229, "IN1.229", HL7::initialized,
		   HL7::repetition_off);
    addObject<IN2>(DFT_P11_IN2_230, "IN2.230", HL7::optional,
		   HL7::repetition_off);
    addObject<IN3>(DFT_P11_IN3_231, "IN3.231", HL7::optional,
		   HL7::repetition_on);
    addObject<ROL>(DFT_P11_ROL_232, "ROL.232", HL7::optional,
		   HL7::repetition_on);
  }

  /* Getters list */
  IN1* getIN1_229(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, DFT_P11_IN1_229);
  }
  IN2* getIN2_230(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, DFT_P11_IN2_230);
  }
  IN3* getIN3_231(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, DFT_P11_IN3_231);
  }
  ROL* getROL_232(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, DFT_P11_ROL_232);
  }

  /* Checker list */
  bool isIN1_229(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_IN1_229) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_230(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_IN2_230) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_231(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_IN3_231) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_232(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_ROL_232) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DFT_P11_227 */

/* FINANCIAL */
struct DFT_P11_FINANCIAL : public HL7Group {
  DFT_P11_FINANCIAL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DFT_P11_FT1_201,
    DFT_P11_FINANCIAL_PROCEDURE_202,
    DFT_P11_FINANCIAL_COMMON_ORDER_209,
    DFT_P11_DG1_224,
    DFT_P11_DRG_225,
    DFT_P11_GT1_226,
    DFT_P11_FINANCIAL_INSURANCE_227,
    FIELD_ID_MAX
  };

  const char* className() const { return "DFT_P11_FINANCIAL"; }
  DFT_P11_FINANCIAL* create() const { return new DFT_P11_FINANCIAL(); }

  /* Initialize object */
  void init() {
    setName("DFT_P11.FINANCIAL");
    addObject<FT1>(DFT_P11_FT1_201, "FT1.201", HL7::initialized,
		   HL7::repetition_off);
    addObject<DFT_P11_FINANCIAL_PROCEDURE>(DFT_P11_FINANCIAL_PROCEDURE_202,
					   "DFT_P11.FINANCIAL_PROCEDURE",
					   HL7::optional, HL7::repetition_on);
    addObject<DFT_P11_FINANCIAL_COMMON_ORDER>(
	DFT_P11_FINANCIAL_COMMON_ORDER_209, "DFT_P11.FINANCIAL_COMMON_ORDER",
	HL7::optional, HL7::repetition_on);
    addObject<DG1>(DFT_P11_DG1_224, "DG1.224", HL7::optional,
		   HL7::repetition_on);
    addObject<DRG>(DFT_P11_DRG_225, "DRG.225", HL7::optional,
		   HL7::repetition_off);
    addObject<GT1>(DFT_P11_GT1_226, "GT1.226", HL7::optional,
		   HL7::repetition_on);
    addObject<DFT_P11_FINANCIAL_INSURANCE>(DFT_P11_FINANCIAL_INSURANCE_227,
					   "DFT_P11.FINANCIAL_INSURANCE",
					   HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  FT1* getFT1_201(size_t index = 0) {
    return (FT1*)this->getObjectSafe(index, DFT_P11_FT1_201);
  }
  DFT_P11_FINANCIAL_PROCEDURE* getFINANCIAL_PROCEDURE(size_t index = 0) {
    return (DFT_P11_FINANCIAL_PROCEDURE*)this->getObjectSafe(
	index, DFT_P11_FINANCIAL_PROCEDURE_202);
  }
  DFT_P11_FINANCIAL_COMMON_ORDER* getFINANCIAL_COMMON_ORDER(size_t index = 0) {
    return (DFT_P11_FINANCIAL_COMMON_ORDER*)this->getObjectSafe(
	index, DFT_P11_FINANCIAL_COMMON_ORDER_209);
  }
  DG1* getDG1_224(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, DFT_P11_DG1_224);
  }
  DRG* getDRG_225(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, DFT_P11_DRG_225);
  }
  GT1* getGT1_226(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, DFT_P11_GT1_226);
  }
  DFT_P11_FINANCIAL_INSURANCE* getFINANCIAL_INSURANCE(size_t index = 0) {
    return (DFT_P11_FINANCIAL_INSURANCE*)this->getObjectSafe(
	index, DFT_P11_FINANCIAL_INSURANCE_227);
  }

  /* Checker list */
  bool isFT1_201(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_FT1_201) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFINANCIAL_PROCEDURE(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_FINANCIAL_PROCEDURE_202) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFINANCIAL_COMMON_ORDER(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_FINANCIAL_COMMON_ORDER_209) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_224(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DG1_224) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_225(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DRG_225) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_226(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_GT1_226) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFINANCIAL_INSURANCE(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_FINANCIAL_INSURANCE_227) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DFT_P11_200 */

/* DFT_P11 */
struct DFT_P11 : public HL7Message {
  DFT_P11() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DFT_P11_MSH_1,
    DFT_P11_EVN_2,
    DFT_P11_PID_3,
    DFT_P11_PD1_5,
    DFT_P11_ROL_9,
    DFT_P11_PV1_13,
    DFT_P11_PV2_16,
    DFT_P11_ROL_20,
    DFT_P11_DB1_25,
    DFT_P11_COMMON_ORDER_28,
    DFT_P11_DG1_124,
    DFT_P11_DRG_128,
    DFT_P11_GT1_132,
    DFT_P11_INSURANCE_135,
    DFT_P11_ACC_154,
    DFT_P11_FINANCIAL_200,
    FIELD_ID_MAX
  };

  const char* className() const { return "DFT_P11"; }
  DFT_P11* create() const { return new DFT_P11(); }

  /* Initialize object */
  void init() {
    setName("DFT_P11");
    addObject<MSH>(DFT_P11_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EVN>(DFT_P11_EVN_2, "EVN.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<PID>(DFT_P11_PID_3, "PID.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(DFT_P11_PD1_5, "PD1.5", HL7::optional, HL7::repetition_off);
    addObject<ROL>(DFT_P11_ROL_9, "ROL.9", HL7::optional, HL7::repetition_on);
    addObject<PV1>(DFT_P11_PV1_13, "PV1.13", HL7::optional,
		   HL7::repetition_off);
    addObject<PV2>(DFT_P11_PV2_16, "PV2.16", HL7::optional,
		   HL7::repetition_off);
    addObject<ROL>(DFT_P11_ROL_20, "ROL.20", HL7::optional, HL7::repetition_on);
    addObject<DB1>(DFT_P11_DB1_25, "DB1.25", HL7::optional, HL7::repetition_on);
    addObject<DFT_P11_COMMON_ORDER>(DFT_P11_COMMON_ORDER_28,
				    "DFT_P11.COMMON_ORDER", HL7::optional,
				    HL7::repetition_on);
    addObject<DG1>(DFT_P11_DG1_124, "DG1.124", HL7::optional,
		   HL7::repetition_on);
    addObject<DRG>(DFT_P11_DRG_128, "DRG.128", HL7::optional,
		   HL7::repetition_off);
    addObject<GT1>(DFT_P11_GT1_132, "GT1.132", HL7::optional,
		   HL7::repetition_on);
    addObject<DFT_P11_INSURANCE>(DFT_P11_INSURANCE_135, "DFT_P11.INSURANCE",
				 HL7::optional, HL7::repetition_on);
    addObject<ACC>(DFT_P11_ACC_154, "ACC.154", HL7::optional,
		   HL7::repetition_off);
    addObject<DFT_P11_FINANCIAL>(DFT_P11_FINANCIAL_200, "DFT_P11.FINANCIAL",
				 HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, DFT_P11_MSH_1);
  }
  EVN* getEVN_2(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, DFT_P11_EVN_2);
  }
  PID* getPID_3(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, DFT_P11_PID_3);
  }
  PD1* getPD1_5(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, DFT_P11_PD1_5);
  }
  ROL* getROL_9(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, DFT_P11_ROL_9);
  }
  PV1* getPV1_13(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, DFT_P11_PV1_13);
  }
  PV2* getPV2_16(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, DFT_P11_PV2_16);
  }
  ROL* getROL_20(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, DFT_P11_ROL_20);
  }
  DB1* getDB1_25(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, DFT_P11_DB1_25);
  }
  DFT_P11_COMMON_ORDER* getCOMMON_ORDER(size_t index = 0) {
    return (DFT_P11_COMMON_ORDER*)this->getObjectSafe(index,
						      DFT_P11_COMMON_ORDER_28);
  }
  DG1* getDG1_124(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, DFT_P11_DG1_124);
  }
  DRG* getDRG_128(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, DFT_P11_DRG_128);
  }
  GT1* getGT1_132(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, DFT_P11_GT1_132);
  }
  DFT_P11_INSURANCE* getINSURANCE(size_t index = 0) {
    return (DFT_P11_INSURANCE*)this->getObjectSafe(index,
						   DFT_P11_INSURANCE_135);
  }
  ACC* getACC_154(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, DFT_P11_ACC_154);
  }
  DFT_P11_FINANCIAL* getFINANCIAL(size_t index = 0) {
    return (DFT_P11_FINANCIAL*)this->getObjectSafe(index,
						   DFT_P11_FINANCIAL_200);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_2(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_EVN_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_3(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_PID_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_5(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_PD1_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_9(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_ROL_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_13(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_PV1_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_16(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_PV2_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_20(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_ROL_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_25(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DB1_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCOMMON_ORDER(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_COMMON_ORDER_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_124(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DG1_124) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_128(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DRG_128) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_132(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_GT1_132) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINSURANCE(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_INSURANCE_135) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_154(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_ACC_154) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFINANCIAL(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_FINANCIAL_200) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DFT_P11_ */
} /* namespace HL7_24 */
#endif /*  __DFT_P11__24_H__ */
