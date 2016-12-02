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


#ifndef __RQA_I08__24_H__
#define __RQA_I08__24_H__

#include "../../common/Util.h"
#include "../segment/ACC.h"
#include "../segment/AL1.h"
#include "../segment/AUT.h"
#include "../segment/CTD.h"
#include "../segment/DG1.h"
#include "../segment/DRG.h"
#include "../segment/GT1.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IN3.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/PID.h"
#include "../segment/PR1.h"
#include "../segment/PRD.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/RF1.h"

namespace HL7_24 {

/* Internal structures/groups */
struct RQA_I08_AUTHORIZATION;       /* AUTHORIZATION */
struct RQA_I08_PROVIDER;	    /* PROVIDER */
struct RQA_I08_INSURANCE;	   /* INSURANCE */
struct RQA_I08_GUARANTOR_INSURANCE; /* GUARANTOR_INSURANCE */
struct RQA_I08_PROCEDURE;	   /* PROCEDURE */
struct RQA_I08_RESULTS;		    /* RESULTS */
struct RQA_I08_OBSERVATION;	 /* OBSERVATION */
struct RQA_I08_VISIT;		    /* VISIT */

/* AUTHORIZATION */
struct RQA_I08_AUTHORIZATION : public HL7Group {
  RQA_I08_AUTHORIZATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RQA_I08_AUT_6, RQA_I08_CTD_8, FIELD_ID_MAX };

  const char* className() const { return "RQA_I08_AUTHORIZATION"; }
  RQA_I08_AUTHORIZATION* create() const { return new RQA_I08_AUTHORIZATION(); }

 private:
  /* Initialize object */
  void init() {
    setName("RQA_I08.AUTHORIZATION");
    addObject<AUT>(RQA_I08_AUT_6, "AUT.6", HL7::initialized,
		   HL7::repetition_off);
    addObject<CTD>(RQA_I08_CTD_8, "CTD.8", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  AUT* getAUT_6(size_t index = 0) {
    return (AUT*)this->getObjectSafe(index, RQA_I08_AUT_6);
  }
  CTD* getCTD_8(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RQA_I08_CTD_8);
  }

  /* Checker list */
  bool isAUT_6(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_AUT_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_8(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_CTD_8) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQA_I08_5 */

/* PROVIDER */
struct RQA_I08_PROVIDER : public HL7Group {
  RQA_I08_PROVIDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RQA_I08_PRD_12, RQA_I08_CTD_15, FIELD_ID_MAX };

  const char* className() const { return "RQA_I08_PROVIDER"; }
  RQA_I08_PROVIDER* create() const { return new RQA_I08_PROVIDER(); }

  /* Initialize object */
  void init() {
    setName("RQA_I08.PROVIDER");
    addObject<PRD>(RQA_I08_PRD_12, "PRD.12", HL7::initialized,
		   HL7::repetition_off);
    addObject<CTD>(RQA_I08_CTD_15, "CTD.15", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PRD* getPRD_12(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, RQA_I08_PRD_12);
  }
  CTD* getCTD_15(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RQA_I08_CTD_15);
  }

  /* Checker list */
  bool isPRD_12(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_PRD_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_15(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_CTD_15) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQA_I08_11 */

/* INSURANCE */
struct RQA_I08_INSURANCE : public HL7Group {
  RQA_I08_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RQA_I08_IN1_32,
    RQA_I08_IN2_34,
    RQA_I08_IN3_37,
    FIELD_ID_MAX
  };

  const char* className() const { return "RQA_I08_INSURANCE"; }
  RQA_I08_INSURANCE* create() const { return new RQA_I08_INSURANCE(); }

  /* Initialize object */
  void init() {
    setName("RQA_I08.INSURANCE");
    addObject<IN1>(RQA_I08_IN1_32, "IN1.32", HL7::initialized,
		   HL7::repetition_off);
    addObject<IN2>(RQA_I08_IN2_34, "IN2.34", HL7::optional,
		   HL7::repetition_off);
    addObject<IN3>(RQA_I08_IN3_37, "IN3.37", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  IN1* getIN1_32(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, RQA_I08_IN1_32);
  }
  IN2* getIN2_34(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, RQA_I08_IN2_34);
  }
  IN3* getIN3_37(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, RQA_I08_IN3_37);
  }

  /* Checker list */
  bool isIN1_32(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_IN1_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_34(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_IN2_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_37(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_IN3_37) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQA_I08_31 */

/* GUARANTOR_INSURANCE */
struct RQA_I08_GUARANTOR_INSURANCE : public HL7Group {
  RQA_I08_GUARANTOR_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RQA_I08_GT1_28, RQA_I08_INSURANCE_31, FIELD_ID_MAX };

  const char* className() const { return "RQA_I08_GUARANTOR_INSURANCE"; }
  RQA_I08_GUARANTOR_INSURANCE* create() const {
    return new RQA_I08_GUARANTOR_INSURANCE();
  }

  /* Initialize object */
  void init() {
    setName("RQA_I08.GUARANTOR_INSURANCE");
    addObject<GT1>(RQA_I08_GT1_28, "GT1.28", HL7::optional, HL7::repetition_on);
    addObject<RQA_I08_INSURANCE>(RQA_I08_INSURANCE_31, "RQA_I08.INSURANCE",
				 HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  GT1* getGT1_28(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, RQA_I08_GT1_28);
  }
  RQA_I08_INSURANCE* getINSURANCE(size_t index = 0) {
    return (RQA_I08_INSURANCE*)this->getObjectSafe(index, RQA_I08_INSURANCE_31);
  }

  /* Checker list */
  bool isGT1_28(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_GT1_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINSURANCE(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_INSURANCE_31) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQA_I08_25 */

/* AUTHORIZATION */

/* PROCEDURE */
struct RQA_I08_PROCEDURE : public HL7Group {
  RQA_I08_PROCEDURE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RQA_I08_PR1_61, RQA_I08_AUTHORIZATION_62, FIELD_ID_MAX };

  const char* className() const { return "RQA_I08_PROCEDURE"; }
  RQA_I08_PROCEDURE* create() const { return new RQA_I08_PROCEDURE(); }

  /* Initialize object */
  void init() {
    setName("RQA_I08.PROCEDURE");
    addObject<PR1>(RQA_I08_PR1_61, "PR1.61", HL7::initialized,
		   HL7::repetition_off);
    addObject<RQA_I08_AUTHORIZATION>(RQA_I08_AUTHORIZATION_62,
				     "RQA_I08.AUTHORIZATION", HL7::optional,
				     HL7::repetition_off);
  }

  /* Getters list */
  PR1* getPR1_61(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, RQA_I08_PR1_61);
  }
  RQA_I08_AUTHORIZATION* getAUTHORIZATION(size_t index = 0) {
    return (RQA_I08_AUTHORIZATION*)this->getObjectSafe(
	index, RQA_I08_AUTHORIZATION_62);
  }

  /* Checker list */
  bool isPR1_61(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_PR1_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAUTHORIZATION(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_AUTHORIZATION_62) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQA_I08_59 */

/* RESULTS */
struct RQA_I08_RESULTS : public HL7Group {
  RQA_I08_RESULTS() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RQA_I08_OBX_79, RQA_I08_NTE_82, FIELD_ID_MAX };

  const char* className() const { return "RQA_I08_RESULTS"; }
  RQA_I08_RESULTS* create() const { return new RQA_I08_RESULTS(); }

  /* Initialize object */
  void init() {
    setName("RQA_I08.RESULTS");
    addObject<OBX>(RQA_I08_OBX_79, "OBX.79", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(RQA_I08_NTE_82, "NTE.82", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_79(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RQA_I08_OBX_79);
  }
  NTE* getNTE_82(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RQA_I08_NTE_82);
  }

  /* Checker list */
  bool isOBX_79(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_OBX_79) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_82(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_NTE_82) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQA_I08_77 */

/* OBSERVATION */
struct RQA_I08_OBSERVATION : public HL7Group {
  RQA_I08_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RQA_I08_OBR_71,
    RQA_I08_NTE_74,
    RQA_I08_RESULTS_77,
    FIELD_ID_MAX
  };

  const char* className() const { return "RQA_I08_OBSERVATION"; }
  RQA_I08_OBSERVATION* create() const { return new RQA_I08_OBSERVATION(); }

  /* Initialize object */
  void init() {
    setName("RQA_I08.OBSERVATION");
    addObject<OBR>(RQA_I08_OBR_71, "OBR.71", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(RQA_I08_NTE_74, "NTE.74", HL7::optional, HL7::repetition_on);
    addObject<RQA_I08_RESULTS>(RQA_I08_RESULTS_77, "RQA_I08.RESULTS",
			       HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBR* getOBR_71(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, RQA_I08_OBR_71);
  }
  NTE* getNTE_74(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RQA_I08_NTE_74);
  }
  RQA_I08_RESULTS* getRESULTS(size_t index = 0) {
    return (RQA_I08_RESULTS*)this->getObjectSafe(index, RQA_I08_RESULTS_77);
  }

  /* Checker list */
  bool isOBR_71(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_OBR_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_74(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_NTE_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRESULTS(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_RESULTS_77) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQA_I08_69 */

/* VISIT */
struct RQA_I08_VISIT : public HL7Group {
  RQA_I08_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RQA_I08_PV1_90, RQA_I08_PV2_92, FIELD_ID_MAX };

  const char* className() const { return "RQA_I08_VISIT"; }
  RQA_I08_VISIT* create() const { return new RQA_I08_VISIT(); }

  /* Initialize object */
  void init() {
    setName("RQA_I08.VISIT");
    addObject<PV1>(RQA_I08_PV1_90, "PV1.90", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(RQA_I08_PV2_92, "PV2.92", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  PV1* getPV1_90(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RQA_I08_PV1_90);
  }
  PV2* getPV2_92(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RQA_I08_PV2_92);
  }

  /* Checker list */
  bool isPV1_90(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_PV1_90) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_92(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_PV2_92) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQA_I08_89 */

/* RQA_I08 */
struct RQA_I08 : public HL7Message {
  RQA_I08() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RQA_I08_MSH_1,
    RQA_I08_RF1_3,
    RQA_I08_AUTHORIZATION_5,
    RQA_I08_PROVIDER_11,
    RQA_I08_PID_19,
    RQA_I08_NK1_22,
    RQA_I08_GUARANTOR_INSURANCE_25,
    RQA_I08_ACC_42,
    RQA_I08_DG1_46,
    RQA_I08_DRG_51,
    RQA_I08_AL1_56,
    RQA_I08_PROCEDURE_59,
    RQA_I08_OBSERVATION_69,
    RQA_I08_VISIT_89,
    RQA_I08_NTE_97,
    FIELD_ID_MAX
  };

  const char* className() const { return "RQA_I08"; }
  RQA_I08* create() const { return new RQA_I08(); }

  /* Initialize object */
  void init() {
    setName("RQA_I08");
    addObject<MSH>(RQA_I08_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<RF1>(RQA_I08_RF1_3, "RF1.3", HL7::optional, HL7::repetition_off);
    addObject<RQA_I08_AUTHORIZATION>(RQA_I08_AUTHORIZATION_5,
				     "RQA_I08.AUTHORIZATION", HL7::optional,
				     HL7::repetition_off);
    addObject<RQA_I08_PROVIDER>(RQA_I08_PROVIDER_11, "RQA_I08.PROVIDER",
				HL7::initialized, HL7::repetition_on);
    addObject<PID>(RQA_I08_PID_19, "PID.19", HL7::initialized,
		   HL7::repetition_off);
    addObject<NK1>(RQA_I08_NK1_22, "NK1.22", HL7::optional, HL7::repetition_on);
    addObject<RQA_I08_GUARANTOR_INSURANCE>(RQA_I08_GUARANTOR_INSURANCE_25,
					   "RQA_I08.GUARANTOR_INSURANCE",
					   HL7::optional, HL7::repetition_off);
    addObject<ACC>(RQA_I08_ACC_42, "ACC.42", HL7::optional,
		   HL7::repetition_off);
    addObject<DG1>(RQA_I08_DG1_46, "DG1.46", HL7::optional, HL7::repetition_on);
    addObject<DRG>(RQA_I08_DRG_51, "DRG.51", HL7::optional, HL7::repetition_on);
    addObject<AL1>(RQA_I08_AL1_56, "AL1.56", HL7::optional, HL7::repetition_on);
    addObject<RQA_I08_PROCEDURE>(RQA_I08_PROCEDURE_59, "RQA_I08.PROCEDURE",
				 HL7::optional, HL7::repetition_on);
    addObject<RQA_I08_OBSERVATION>(RQA_I08_OBSERVATION_69,
				   "RQA_I08.OBSERVATION", HL7::optional,
				   HL7::repetition_on);
    addObject<RQA_I08_VISIT>(RQA_I08_VISIT_89, "RQA_I08.VISIT", HL7::optional,
			     HL7::repetition_off);
    addObject<NTE>(RQA_I08_NTE_97, "NTE.97", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RQA_I08_MSH_1);
  }
  RF1* getRF1_3(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, RQA_I08_RF1_3);
  }
  RQA_I08_AUTHORIZATION* getAUTHORIZATION(size_t index = 0) {
    return (RQA_I08_AUTHORIZATION*)this->getObjectSafe(index,
						       RQA_I08_AUTHORIZATION_5);
  }
  RQA_I08_PROVIDER* getPROVIDER(size_t index = 0) {
    return (RQA_I08_PROVIDER*)this->getObjectSafe(index, RQA_I08_PROVIDER_11);
  }
  PID* getPID_19(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RQA_I08_PID_19);
  }
  NK1* getNK1_22(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, RQA_I08_NK1_22);
  }
  RQA_I08_GUARANTOR_INSURANCE* getGUARANTOR_INSURANCE(size_t index = 0) {
    return (RQA_I08_GUARANTOR_INSURANCE*)this->getObjectSafe(
	index, RQA_I08_GUARANTOR_INSURANCE_25);
  }
  ACC* getACC_42(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, RQA_I08_ACC_42);
  }
  DG1* getDG1_46(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, RQA_I08_DG1_46);
  }
  DRG* getDRG_51(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, RQA_I08_DRG_51);
  }
  AL1* getAL1_56(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, RQA_I08_AL1_56);
  }
  RQA_I08_PROCEDURE* getPROCEDURE(size_t index = 0) {
    return (RQA_I08_PROCEDURE*)this->getObjectSafe(index, RQA_I08_PROCEDURE_59);
  }
  RQA_I08_OBSERVATION* getOBSERVATION(size_t index = 0) {
    return (RQA_I08_OBSERVATION*)this->getObjectSafe(index,
						     RQA_I08_OBSERVATION_69);
  }
  RQA_I08_VISIT* getVISIT(size_t index = 0) {
    return (RQA_I08_VISIT*)this->getObjectSafe(index, RQA_I08_VISIT_89);
  }
  NTE* getNTE_97(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RQA_I08_NTE_97);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_3(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_RF1_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAUTHORIZATION(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_AUTHORIZATION_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROVIDER(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_PROVIDER_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_19(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_PID_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_22(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_NK1_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGUARANTOR_INSURANCE(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_GUARANTOR_INSURANCE_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_42(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_ACC_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_46(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_DG1_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_51(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_DRG_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_56(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_AL1_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROCEDURE(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_PROCEDURE_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_OBSERVATION_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVISIT(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_VISIT_89) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_97(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_NTE_97) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQA_I08_ */
} /* namespace HL7_24 */
#endif /*  __RQA_I08__24_H__ */
