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


#ifndef __RPA_I08__24_H__
#define __RPA_I08__24_H__

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
#include "../segment/MSA.h"
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
struct RPA_I08_AUTHORIZATION; /* AUTHORIZATION */
struct RPA_I08_PROVIDER;      /* PROVIDER */
struct RPA_I08_INSURANCE;     /* INSURANCE */
struct RPA_I08_PROCEDURE;     /* PROCEDURE */
struct RPA_I08_RESULTS;       /* RESULTS */
struct RPA_I08_OBSERVATION;   /* OBSERVATION */
struct RPA_I08_VISIT;	 /* VISIT */

/* AUTHORIZATION */
struct RPA_I08_AUTHORIZATION : public HL7Group {
  RPA_I08_AUTHORIZATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RPA_I08_AUT_7, RPA_I08_CTD_9, FIELD_ID_MAX };

  const char* className() const { return "RPA_I08_AUTHORIZATION"; }
  RPA_I08_AUTHORIZATION* create() const { return new RPA_I08_AUTHORIZATION(); }

 private:
  /* Initialize object */
  void init() {
    setName("RPA_I08.AUTHORIZATION");
    addObject<AUT>(RPA_I08_AUT_7, "AUT.7", HL7::initialized,
		   HL7::repetition_off);
    addObject<CTD>(RPA_I08_CTD_9, "CTD.9", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  AUT* getAUT_7(size_t index = 0) {
    return (AUT*)this->getObjectSafe(index, RPA_I08_AUT_7);
  }
  CTD* getCTD_9(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RPA_I08_CTD_9);
  }

  /* Checker list */
  bool isAUT_7(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_AUT_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_9(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_CTD_9) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RPA_I08_6 */

/* PROVIDER */
struct RPA_I08_PROVIDER : public HL7Group {
  RPA_I08_PROVIDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RPA_I08_PRD_13, RPA_I08_CTD_16, FIELD_ID_MAX };

  const char* className() const { return "RPA_I08_PROVIDER"; }
  RPA_I08_PROVIDER* create() const { return new RPA_I08_PROVIDER(); }

  /* Initialize object */
  void init() {
    setName("RPA_I08.PROVIDER");
    addObject<PRD>(RPA_I08_PRD_13, "PRD.13", HL7::initialized,
		   HL7::repetition_off);
    addObject<CTD>(RPA_I08_CTD_16, "CTD.16", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PRD* getPRD_13(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, RPA_I08_PRD_13);
  }
  CTD* getCTD_16(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RPA_I08_CTD_16);
  }

  /* Checker list */
  bool isPRD_13(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_PRD_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_16(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_CTD_16) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RPA_I08_12 */

/* INSURANCE */
struct RPA_I08_INSURANCE : public HL7Group {
  RPA_I08_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RPA_I08_IN1_33,
    RPA_I08_IN2_35,
    RPA_I08_IN3_38,
    FIELD_ID_MAX
  };

  const char* className() const { return "RPA_I08_INSURANCE"; }
  RPA_I08_INSURANCE* create() const { return new RPA_I08_INSURANCE(); }

  /* Initialize object */
  void init() {
    setName("RPA_I08.INSURANCE");
    addObject<IN1>(RPA_I08_IN1_33, "IN1.33", HL7::initialized,
		   HL7::repetition_off);
    addObject<IN2>(RPA_I08_IN2_35, "IN2.35", HL7::optional,
		   HL7::repetition_off);
    addObject<IN3>(RPA_I08_IN3_38, "IN3.38", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  IN1* getIN1_33(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, RPA_I08_IN1_33);
  }
  IN2* getIN2_35(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, RPA_I08_IN2_35);
  }
  IN3* getIN3_38(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, RPA_I08_IN3_38);
  }

  /* Checker list */
  bool isIN1_33(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_IN1_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_35(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_IN2_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_38(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_IN3_38) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RPA_I08_31 */

/* AUTHORIZATION */

/* PROCEDURE */
struct RPA_I08_PROCEDURE : public HL7Group {
  RPA_I08_PROCEDURE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RPA_I08_PR1_61, RPA_I08_AUTHORIZATION_62, FIELD_ID_MAX };

  const char* className() const { return "RPA_I08_PROCEDURE"; }
  RPA_I08_PROCEDURE* create() const { return new RPA_I08_PROCEDURE(); }

  /* Initialize object */
  void init() {
    setName("RPA_I08.PROCEDURE");
    addObject<PR1>(RPA_I08_PR1_61, "PR1.61", HL7::initialized,
		   HL7::repetition_off);
    addObject<RPA_I08_AUTHORIZATION>(RPA_I08_AUTHORIZATION_62,
				     "RPA_I08.AUTHORIZATION", HL7::optional,
				     HL7::repetition_off);
  }

  /* Getters list */
  PR1* getPR1_61(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, RPA_I08_PR1_61);
  }
  RPA_I08_AUTHORIZATION* getAUTHORIZATION(size_t index = 0) {
    return (RPA_I08_AUTHORIZATION*)this->getObjectSafe(
	index, RPA_I08_AUTHORIZATION_62);
  }

  /* Checker list */
  bool isPR1_61(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_PR1_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAUTHORIZATION(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_AUTHORIZATION_62) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RPA_I08_60 */

/* RESULTS */
struct RPA_I08_RESULTS : public HL7Group {
  RPA_I08_RESULTS() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RPA_I08_OBX_79, RPA_I08_NTE_82, FIELD_ID_MAX };

  const char* className() const { return "RPA_I08_RESULTS"; }
  RPA_I08_RESULTS* create() const { return new RPA_I08_RESULTS(); }

  /* Initialize object */
  void init() {
    setName("RPA_I08.RESULTS");
    addObject<OBX>(RPA_I08_OBX_79, "OBX.79", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(RPA_I08_NTE_82, "NTE.82", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_79(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RPA_I08_OBX_79);
  }
  NTE* getNTE_82(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RPA_I08_NTE_82);
  }

  /* Checker list */
  bool isOBX_79(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_OBX_79) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_82(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_NTE_82) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RPA_I08_77 */

/* OBSERVATION */
struct RPA_I08_OBSERVATION : public HL7Group {
  RPA_I08_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RPA_I08_OBR_71,
    RPA_I08_NTE_74,
    RPA_I08_RESULTS_77,
    FIELD_ID_MAX
  };

  const char* className() const { return "RPA_I08_OBSERVATION"; }
  RPA_I08_OBSERVATION* create() const { return new RPA_I08_OBSERVATION(); }

  /* Initialize object */
  void init() {
    setName("RPA_I08.OBSERVATION");
    addObject<OBR>(RPA_I08_OBR_71, "OBR.71", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(RPA_I08_NTE_74, "NTE.74", HL7::optional, HL7::repetition_on);
    addObject<RPA_I08_RESULTS>(RPA_I08_RESULTS_77, "RPA_I08.RESULTS",
			       HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBR* getOBR_71(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, RPA_I08_OBR_71);
  }
  NTE* getNTE_74(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RPA_I08_NTE_74);
  }
  RPA_I08_RESULTS* getRESULTS(size_t index = 0) {
    return (RPA_I08_RESULTS*)this->getObjectSafe(index, RPA_I08_RESULTS_77);
  }

  /* Checker list */
  bool isOBR_71(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_OBR_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_74(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_NTE_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRESULTS(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_RESULTS_77) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RPA_I08_69 */

/* VISIT */
struct RPA_I08_VISIT : public HL7Group {
  RPA_I08_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RPA_I08_PV1_90, RPA_I08_PV2_92, FIELD_ID_MAX };

  const char* className() const { return "RPA_I08_VISIT"; }
  RPA_I08_VISIT* create() const { return new RPA_I08_VISIT(); }

  /* Initialize object */
  void init() {
    setName("RPA_I08.VISIT");
    addObject<PV1>(RPA_I08_PV1_90, "PV1.90", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(RPA_I08_PV2_92, "PV2.92", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  PV1* getPV1_90(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RPA_I08_PV1_90);
  }
  PV2* getPV2_92(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RPA_I08_PV2_92);
  }

  /* Checker list */
  bool isPV1_90(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_PV1_90) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_92(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_PV2_92) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RPA_I08_89 */

/* RPA_I08 */
struct RPA_I08 : public HL7Message {
  RPA_I08() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RPA_I08_MSH_1,
    RPA_I08_MSA_2,
    RPA_I08_RF1_4,
    RPA_I08_AUTHORIZATION_6,
    RPA_I08_PROVIDER_12,
    RPA_I08_PID_20,
    RPA_I08_NK1_23,
    RPA_I08_GT1_28,
    RPA_I08_INSURANCE_31,
    RPA_I08_ACC_43,
    RPA_I08_DG1_47,
    RPA_I08_DRG_52,
    RPA_I08_AL1_57,
    RPA_I08_PROCEDURE_60,
    RPA_I08_OBSERVATION_69,
    RPA_I08_VISIT_89,
    RPA_I08_NTE_97,
    FIELD_ID_MAX
  };

  const char* className() const { return "RPA_I08"; }
  RPA_I08* create() const { return new RPA_I08(); }

  /* Initialize object */
  void init() {
    setName("RPA_I08");
    addObject<MSH>(RPA_I08_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(RPA_I08_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<RF1>(RPA_I08_RF1_4, "RF1.4", HL7::optional, HL7::repetition_off);
    addObject<RPA_I08_AUTHORIZATION>(RPA_I08_AUTHORIZATION_6,
				     "RPA_I08.AUTHORIZATION", HL7::optional,
				     HL7::repetition_off);
    addObject<RPA_I08_PROVIDER>(RPA_I08_PROVIDER_12, "RPA_I08.PROVIDER",
				HL7::initialized, HL7::repetition_on);
    addObject<PID>(RPA_I08_PID_20, "PID.20", HL7::initialized,
		   HL7::repetition_off);
    addObject<NK1>(RPA_I08_NK1_23, "NK1.23", HL7::optional, HL7::repetition_on);
    addObject<GT1>(RPA_I08_GT1_28, "GT1.28", HL7::optional, HL7::repetition_on);
    addObject<RPA_I08_INSURANCE>(RPA_I08_INSURANCE_31, "RPA_I08.INSURANCE",
				 HL7::optional, HL7::repetition_on);
    addObject<ACC>(RPA_I08_ACC_43, "ACC.43", HL7::optional,
		   HL7::repetition_off);
    addObject<DG1>(RPA_I08_DG1_47, "DG1.47", HL7::optional, HL7::repetition_on);
    addObject<DRG>(RPA_I08_DRG_52, "DRG.52", HL7::optional, HL7::repetition_on);
    addObject<AL1>(RPA_I08_AL1_57, "AL1.57", HL7::optional, HL7::repetition_on);
    addObject<RPA_I08_PROCEDURE>(RPA_I08_PROCEDURE_60, "RPA_I08.PROCEDURE",
				 HL7::initialized, HL7::repetition_on);
    addObject<RPA_I08_OBSERVATION>(RPA_I08_OBSERVATION_69,
				   "RPA_I08.OBSERVATION", HL7::optional,
				   HL7::repetition_on);
    addObject<RPA_I08_VISIT>(RPA_I08_VISIT_89, "RPA_I08.VISIT", HL7::optional,
			     HL7::repetition_off);
    addObject<NTE>(RPA_I08_NTE_97, "NTE.97", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RPA_I08_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RPA_I08_MSA_2);
  }
  RF1* getRF1_4(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, RPA_I08_RF1_4);
  }
  RPA_I08_AUTHORIZATION* getAUTHORIZATION(size_t index = 0) {
    return (RPA_I08_AUTHORIZATION*)this->getObjectSafe(index,
						       RPA_I08_AUTHORIZATION_6);
  }
  RPA_I08_PROVIDER* getPROVIDER(size_t index = 0) {
    return (RPA_I08_PROVIDER*)this->getObjectSafe(index, RPA_I08_PROVIDER_12);
  }
  PID* getPID_20(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RPA_I08_PID_20);
  }
  NK1* getNK1_23(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, RPA_I08_NK1_23);
  }
  GT1* getGT1_28(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, RPA_I08_GT1_28);
  }
  RPA_I08_INSURANCE* getINSURANCE(size_t index = 0) {
    return (RPA_I08_INSURANCE*)this->getObjectSafe(index, RPA_I08_INSURANCE_31);
  }
  ACC* getACC_43(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, RPA_I08_ACC_43);
  }
  DG1* getDG1_47(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, RPA_I08_DG1_47);
  }
  DRG* getDRG_52(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, RPA_I08_DRG_52);
  }
  AL1* getAL1_57(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, RPA_I08_AL1_57);
  }
  RPA_I08_PROCEDURE* getPROCEDURE(size_t index = 0) {
    return (RPA_I08_PROCEDURE*)this->getObjectSafe(index, RPA_I08_PROCEDURE_60);
  }
  RPA_I08_OBSERVATION* getOBSERVATION(size_t index = 0) {
    return (RPA_I08_OBSERVATION*)this->getObjectSafe(index,
						     RPA_I08_OBSERVATION_69);
  }
  RPA_I08_VISIT* getVISIT(size_t index = 0) {
    return (RPA_I08_VISIT*)this->getObjectSafe(index, RPA_I08_VISIT_89);
  }
  NTE* getNTE_97(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RPA_I08_NTE_97);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_4(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_RF1_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAUTHORIZATION(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_AUTHORIZATION_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROVIDER(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_PROVIDER_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_20(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_PID_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_23(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_NK1_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_28(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_GT1_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINSURANCE(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_INSURANCE_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_43(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_ACC_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_47(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_DG1_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_52(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_DRG_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_57(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_AL1_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROCEDURE(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_PROCEDURE_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_OBSERVATION_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVISIT(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_VISIT_89) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_97(size_t index = 0) {
    try {
      return this->getObject(index, RPA_I08_NTE_97) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RPA_I08_ */
} /* namespace HL7_24 */
#endif /*  __RPA_I08__24_H__ */
