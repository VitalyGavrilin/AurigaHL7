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


#ifndef __REF_I12__24_H__
#define __REF_I12__24_H__

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
struct REF_I12_AUTHORIZATION_CONTACT; /* AUTHORIZATION_CONTACT */
struct REF_I12_PROVIDER_CONTACT;      /* PROVIDER_CONTACT */
struct REF_I12_INSURANCE;	     /* INSURANCE */
struct REF_I12_PROCEDURE;	     /* PROCEDURE */
struct REF_I12_RESULTS_NOTES;	 /* RESULTS_NOTES */
struct REF_I12_OBSERVATION;	   /* OBSERVATION */
struct REF_I12_PATIENT_VISIT;	 /* PATIENT_VISIT */

/* AUTHORIZATION_CONTACT */
struct REF_I12_AUTHORIZATION_CONTACT : public HL7Group {
  REF_I12_AUTHORIZATION_CONTACT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { REF_I12_AUT_6, REF_I12_CTD_8, FIELD_ID_MAX };

  const char* className() const { return "REF_I12_AUTHORIZATION_CONTACT"; }
  REF_I12_AUTHORIZATION_CONTACT* create() const {
    return new REF_I12_AUTHORIZATION_CONTACT();
  }

 private:
  /* Initialize object */
  void init() {
    setName("REF_I12.AUTHORIZATION_CONTACT");
    addObject<AUT>(REF_I12_AUT_6, "AUT.6", HL7::initialized,
		   HL7::repetition_off);
    addObject<CTD>(REF_I12_CTD_8, "CTD.8", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  AUT* getAUT_6(size_t index = 0) {
    return (AUT*)this->getObjectSafe(index, REF_I12_AUT_6);
  }
  CTD* getCTD_8(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, REF_I12_CTD_8);
  }

  /* Checker list */
  bool isAUT_6(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_AUT_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_8(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_CTD_8) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* REF_I12_5 */

/* PROVIDER_CONTACT */
struct REF_I12_PROVIDER_CONTACT : public HL7Group {
  REF_I12_PROVIDER_CONTACT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { REF_I12_PRD_12, REF_I12_CTD_15, FIELD_ID_MAX };

  const char* className() const { return "REF_I12_PROVIDER_CONTACT"; }
  REF_I12_PROVIDER_CONTACT* create() const {
    return new REF_I12_PROVIDER_CONTACT();
  }

  /* Initialize object */
  void init() {
    setName("REF_I12.PROVIDER_CONTACT");
    addObject<PRD>(REF_I12_PRD_12, "PRD.12", HL7::initialized,
		   HL7::repetition_off);
    addObject<CTD>(REF_I12_CTD_15, "CTD.15", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PRD* getPRD_12(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, REF_I12_PRD_12);
  }
  CTD* getCTD_15(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, REF_I12_CTD_15);
  }

  /* Checker list */
  bool isPRD_12(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_PRD_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_15(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_CTD_15) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* REF_I12_11 */

/* INSURANCE */
struct REF_I12_INSURANCE : public HL7Group {
  REF_I12_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    REF_I12_IN1_32,
    REF_I12_IN2_34,
    REF_I12_IN3_37,
    FIELD_ID_MAX
  };

  const char* className() const { return "REF_I12_INSURANCE"; }
  REF_I12_INSURANCE* create() const { return new REF_I12_INSURANCE(); }

  /* Initialize object */
  void init() {
    setName("REF_I12.INSURANCE");
    addObject<IN1>(REF_I12_IN1_32, "IN1.32", HL7::initialized,
		   HL7::repetition_off);
    addObject<IN2>(REF_I12_IN2_34, "IN2.34", HL7::optional,
		   HL7::repetition_off);
    addObject<IN3>(REF_I12_IN3_37, "IN3.37", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  IN1* getIN1_32(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, REF_I12_IN1_32);
  }
  IN2* getIN2_34(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, REF_I12_IN2_34);
  }
  IN3* getIN3_37(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, REF_I12_IN3_37);
  }

  /* Checker list */
  bool isIN1_32(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_IN1_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_34(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_IN2_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_37(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_IN3_37) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* REF_I12_30 */

/* AUTHORIZATION_CONTACT */

/* PROCEDURE */
struct REF_I12_PROCEDURE : public HL7Group {
  REF_I12_PROCEDURE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    REF_I12_PR1_61,
    REF_I12_AUTHORIZATION_CONTACT_62,
    FIELD_ID_MAX
  };

  const char* className() const { return "REF_I12_PROCEDURE"; }
  REF_I12_PROCEDURE* create() const { return new REF_I12_PROCEDURE(); }

  /* Initialize object */
  void init() {
    setName("REF_I12.PROCEDURE");
    addObject<PR1>(REF_I12_PR1_61, "PR1.61", HL7::initialized,
		   HL7::repetition_off);
    addObject<REF_I12_AUTHORIZATION_CONTACT>(
	REF_I12_AUTHORIZATION_CONTACT_62, "REF_I12.AUTHORIZATION_CONTACT",
	HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  PR1* getPR1_61(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, REF_I12_PR1_61);
  }
  REF_I12_AUTHORIZATION_CONTACT* getAUTHORIZATION_CONTACT(size_t index = 0) {
    return (REF_I12_AUTHORIZATION_CONTACT*)this->getObjectSafe(
	index, REF_I12_AUTHORIZATION_CONTACT_62);
  }

  /* Checker list */
  bool isPR1_61(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_PR1_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAUTHORIZATION_CONTACT(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_AUTHORIZATION_CONTACT_62) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* REF_I12_59 */

/* RESULTS_NOTES */
struct REF_I12_RESULTS_NOTES : public HL7Group {
  REF_I12_RESULTS_NOTES() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { REF_I12_OBX_79, REF_I12_NTE_82, FIELD_ID_MAX };

  const char* className() const { return "REF_I12_RESULTS_NOTES"; }
  REF_I12_RESULTS_NOTES* create() const { return new REF_I12_RESULTS_NOTES(); }

  /* Initialize object */
  void init() {
    setName("REF_I12.RESULTS_NOTES");
    addObject<OBX>(REF_I12_OBX_79, "OBX.79", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(REF_I12_NTE_82, "NTE.82", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_79(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, REF_I12_OBX_79);
  }
  NTE* getNTE_82(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, REF_I12_NTE_82);
  }

  /* Checker list */
  bool isOBX_79(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_OBX_79) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_82(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_NTE_82) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* REF_I12_77 */

/* OBSERVATION */
struct REF_I12_OBSERVATION : public HL7Group {
  REF_I12_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    REF_I12_OBR_71,
    REF_I12_NTE_74,
    REF_I12_RESULTS_NOTES_77,
    FIELD_ID_MAX
  };

  const char* className() const { return "REF_I12_OBSERVATION"; }
  REF_I12_OBSERVATION* create() const { return new REF_I12_OBSERVATION(); }

  /* Initialize object */
  void init() {
    setName("REF_I12.OBSERVATION");
    addObject<OBR>(REF_I12_OBR_71, "OBR.71", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(REF_I12_NTE_74, "NTE.74", HL7::optional, HL7::repetition_on);
    addObject<REF_I12_RESULTS_NOTES>(REF_I12_RESULTS_NOTES_77,
				     "REF_I12.RESULTS_NOTES", HL7::optional,
				     HL7::repetition_on);
  }

  /* Getters list */
  OBR* getOBR_71(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, REF_I12_OBR_71);
  }
  NTE* getNTE_74(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, REF_I12_NTE_74);
  }
  REF_I12_RESULTS_NOTES* getRESULTS_NOTES(size_t index = 0) {
    return (REF_I12_RESULTS_NOTES*)this->getObjectSafe(
	index, REF_I12_RESULTS_NOTES_77);
  }

  /* Checker list */
  bool isOBR_71(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_OBR_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_74(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_NTE_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRESULTS_NOTES(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_RESULTS_NOTES_77) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* REF_I12_69 */

/* PATIENT_VISIT */
struct REF_I12_PATIENT_VISIT : public HL7Group {
  REF_I12_PATIENT_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { REF_I12_PV1_90, REF_I12_PV2_92, FIELD_ID_MAX };

  const char* className() const { return "REF_I12_PATIENT_VISIT"; }
  REF_I12_PATIENT_VISIT* create() const { return new REF_I12_PATIENT_VISIT(); }

  /* Initialize object */
  void init() {
    setName("REF_I12.PATIENT_VISIT");
    addObject<PV1>(REF_I12_PV1_90, "PV1.90", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(REF_I12_PV2_92, "PV2.92", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  PV1* getPV1_90(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, REF_I12_PV1_90);
  }
  PV2* getPV2_92(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, REF_I12_PV2_92);
  }

  /* Checker list */
  bool isPV1_90(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_PV1_90) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_92(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_PV2_92) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* REF_I12_89 */

/* REF_I12 */
struct REF_I12 : public HL7Message {
  REF_I12() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    REF_I12_MSH_1,
    REF_I12_RF1_3,
    REF_I12_AUTHORIZATION_CONTACT_5,
    REF_I12_PROVIDER_CONTACT_11,
    REF_I12_PID_19,
    REF_I12_NK1_22,
    REF_I12_GT1_27,
    REF_I12_INSURANCE_30,
    REF_I12_ACC_42,
    REF_I12_DG1_46,
    REF_I12_DRG_51,
    REF_I12_AL1_56,
    REF_I12_PROCEDURE_59,
    REF_I12_OBSERVATION_69,
    REF_I12_PATIENT_VISIT_89,
    REF_I12_NTE_103,
    FIELD_ID_MAX
  };

  const char* className() const { return "REF_I12"; }
  REF_I12* create() const { return new REF_I12(); }

  /* Initialize object */
  void init() {
    setName("REF_I12");
    addObject<MSH>(REF_I12_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<RF1>(REF_I12_RF1_3, "RF1.3", HL7::optional, HL7::repetition_off);
    addObject<REF_I12_AUTHORIZATION_CONTACT>(
	REF_I12_AUTHORIZATION_CONTACT_5, "REF_I12.AUTHORIZATION_CONTACT",
	HL7::optional, HL7::repetition_off);
    addObject<REF_I12_PROVIDER_CONTACT>(REF_I12_PROVIDER_CONTACT_11,
					"REF_I12.PROVIDER_CONTACT",
					HL7::initialized, HL7::repetition_on);
    addObject<PID>(REF_I12_PID_19, "PID.19", HL7::initialized,
		   HL7::repetition_off);
    addObject<NK1>(REF_I12_NK1_22, "NK1.22", HL7::optional, HL7::repetition_on);
    addObject<GT1>(REF_I12_GT1_27, "GT1.27", HL7::optional, HL7::repetition_on);
    addObject<REF_I12_INSURANCE>(REF_I12_INSURANCE_30, "REF_I12.INSURANCE",
				 HL7::optional, HL7::repetition_on);
    addObject<ACC>(REF_I12_ACC_42, "ACC.42", HL7::optional,
		   HL7::repetition_off);
    addObject<DG1>(REF_I12_DG1_46, "DG1.46", HL7::optional, HL7::repetition_on);
    addObject<DRG>(REF_I12_DRG_51, "DRG.51", HL7::optional, HL7::repetition_on);
    addObject<AL1>(REF_I12_AL1_56, "AL1.56", HL7::optional, HL7::repetition_on);
    addObject<REF_I12_PROCEDURE>(REF_I12_PROCEDURE_59, "REF_I12.PROCEDURE",
				 HL7::optional, HL7::repetition_on);
    addObject<REF_I12_OBSERVATION>(REF_I12_OBSERVATION_69,
				   "REF_I12.OBSERVATION", HL7::optional,
				   HL7::repetition_on);
    addObject<REF_I12_PATIENT_VISIT>(REF_I12_PATIENT_VISIT_89,
				     "REF_I12.PATIENT_VISIT", HL7::optional,
				     HL7::repetition_off);
    addObject<NTE>(REF_I12_NTE_103, "NTE.103", HL7::optional,
		   HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, REF_I12_MSH_1);
  }
  RF1* getRF1_3(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, REF_I12_RF1_3);
  }
  REF_I12_AUTHORIZATION_CONTACT* getAUTHORIZATION_CONTACT(size_t index = 0) {
    return (REF_I12_AUTHORIZATION_CONTACT*)this->getObjectSafe(
	index, REF_I12_AUTHORIZATION_CONTACT_5);
  }
  REF_I12_PROVIDER_CONTACT* getPROVIDER_CONTACT(size_t index = 0) {
    return (REF_I12_PROVIDER_CONTACT*)this->getObjectSafe(
	index, REF_I12_PROVIDER_CONTACT_11);
  }
  PID* getPID_19(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, REF_I12_PID_19);
  }
  NK1* getNK1_22(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, REF_I12_NK1_22);
  }
  GT1* getGT1_27(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, REF_I12_GT1_27);
  }
  REF_I12_INSURANCE* getINSURANCE(size_t index = 0) {
    return (REF_I12_INSURANCE*)this->getObjectSafe(index, REF_I12_INSURANCE_30);
  }
  ACC* getACC_42(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, REF_I12_ACC_42);
  }
  DG1* getDG1_46(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, REF_I12_DG1_46);
  }
  DRG* getDRG_51(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, REF_I12_DRG_51);
  }
  AL1* getAL1_56(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, REF_I12_AL1_56);
  }
  REF_I12_PROCEDURE* getPROCEDURE(size_t index = 0) {
    return (REF_I12_PROCEDURE*)this->getObjectSafe(index, REF_I12_PROCEDURE_59);
  }
  REF_I12_OBSERVATION* getOBSERVATION(size_t index = 0) {
    return (REF_I12_OBSERVATION*)this->getObjectSafe(index,
						     REF_I12_OBSERVATION_69);
  }
  REF_I12_PATIENT_VISIT* getPATIENT_VISIT(size_t index = 0) {
    return (REF_I12_PATIENT_VISIT*)this->getObjectSafe(
	index, REF_I12_PATIENT_VISIT_89);
  }
  NTE* getNTE_103(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, REF_I12_NTE_103);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_3(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_RF1_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAUTHORIZATION_CONTACT(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_AUTHORIZATION_CONTACT_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROVIDER_CONTACT(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_PROVIDER_CONTACT_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_19(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_PID_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_22(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_NK1_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_27(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_GT1_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINSURANCE(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_INSURANCE_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_42(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_ACC_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_46(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_DG1_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_51(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_DRG_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_56(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_AL1_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROCEDURE(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_PROCEDURE_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_OBSERVATION_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT_VISIT(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_PATIENT_VISIT_89) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_103(size_t index = 0) {
    try {
      return this->getObject(index, REF_I12_NTE_103) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* REF_I12_ */
} /* namespace HL7_24 */
#endif /*  __REF_I12__24_H__ */
