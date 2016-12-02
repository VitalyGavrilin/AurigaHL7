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


#ifndef __RRI_I12__24_H__
#define __RRI_I12__24_H__

#include "../../common/Util.h"
#include "../segment/ACC.h"
#include "../segment/AL1.h"
#include "../segment/AUT.h"
#include "../segment/CTD.h"
#include "../segment/DG1.h"
#include "../segment/DRG.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
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
struct RRI_I12_AUTHORIZATION_CONTACT; /* AUTHORIZATION_CONTACT */
struct RRI_I12_PROVIDER_CONTACT;      /* PROVIDER_CONTACT */
struct RRI_I12_PROCEDURE;	     /* PROCEDURE */
struct RRI_I12_RESULTS_NOTES;	 /* RESULTS_NOTES */
struct RRI_I12_OBSERVATION;	   /* OBSERVATION */
struct RRI_I12_PATIENT_VISIT;	 /* PATIENT_VISIT */

/* AUTHORIZATION_CONTACT */
struct RRI_I12_AUTHORIZATION_CONTACT : public HL7Group {
  RRI_I12_AUTHORIZATION_CONTACT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RRI_I12_AUT_9, RRI_I12_CTD_11, FIELD_ID_MAX };

  const char* className() const { return "RRI_I12_AUTHORIZATION_CONTACT"; }
  RRI_I12_AUTHORIZATION_CONTACT* create() const {
    return new RRI_I12_AUTHORIZATION_CONTACT();
  }

 private:
  /* Initialize object */
  void init() {
    setName("RRI_I12.AUTHORIZATION_CONTACT");
    addObject<AUT>(RRI_I12_AUT_9, "AUT.9", HL7::initialized,
		   HL7::repetition_off);
    addObject<CTD>(RRI_I12_CTD_11, "CTD.11", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  AUT* getAUT_9(size_t index = 0) {
    return (AUT*)this->getObjectSafe(index, RRI_I12_AUT_9);
  }
  CTD* getCTD_11(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RRI_I12_CTD_11);
  }

  /* Checker list */
  bool isAUT_9(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_AUT_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_11(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_CTD_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRI_I12_8 */

/* PROVIDER_CONTACT */
struct RRI_I12_PROVIDER_CONTACT : public HL7Group {
  RRI_I12_PROVIDER_CONTACT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RRI_I12_PRD_15, RRI_I12_CTD_18, FIELD_ID_MAX };

  const char* className() const { return "RRI_I12_PROVIDER_CONTACT"; }
  RRI_I12_PROVIDER_CONTACT* create() const {
    return new RRI_I12_PROVIDER_CONTACT();
  }

  /* Initialize object */
  void init() {
    setName("RRI_I12.PROVIDER_CONTACT");
    addObject<PRD>(RRI_I12_PRD_15, "PRD.15", HL7::initialized,
		   HL7::repetition_off);
    addObject<CTD>(RRI_I12_CTD_18, "CTD.18", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  PRD* getPRD_15(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, RRI_I12_PRD_15);
  }
  CTD* getCTD_18(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RRI_I12_CTD_18);
  }

  /* Checker list */
  bool isPRD_15(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_PRD_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_18(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_CTD_18) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRI_I12_14 */

/* AUTHORIZATION_CONTACT */

/* PROCEDURE */
struct RRI_I12_PROCEDURE : public HL7Group {
  RRI_I12_PROCEDURE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RRI_I12_PR1_43,
    RRI_I12_AUTHORIZATION_CONTACT_44,
    FIELD_ID_MAX
  };

  const char* className() const { return "RRI_I12_PROCEDURE"; }
  RRI_I12_PROCEDURE* create() const { return new RRI_I12_PROCEDURE(); }

  /* Initialize object */
  void init() {
    setName("RRI_I12.PROCEDURE");
    addObject<PR1>(RRI_I12_PR1_43, "PR1.43", HL7::initialized,
		   HL7::repetition_off);
    addObject<RRI_I12_AUTHORIZATION_CONTACT>(
	RRI_I12_AUTHORIZATION_CONTACT_44, "RRI_I12.AUTHORIZATION_CONTACT",
	HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  PR1* getPR1_43(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, RRI_I12_PR1_43);
  }
  RRI_I12_AUTHORIZATION_CONTACT* getAUTHORIZATION_CONTACT(size_t index = 0) {
    return (RRI_I12_AUTHORIZATION_CONTACT*)this->getObjectSafe(
	index, RRI_I12_AUTHORIZATION_CONTACT_44);
  }

  /* Checker list */
  bool isPR1_43(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_PR1_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAUTHORIZATION_CONTACT(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_AUTHORIZATION_CONTACT_44) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRI_I12_41 */

/* RESULTS_NOTES */
struct RRI_I12_RESULTS_NOTES : public HL7Group {
  RRI_I12_RESULTS_NOTES() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RRI_I12_OBX_61, RRI_I12_NTE_64, FIELD_ID_MAX };

  const char* className() const { return "RRI_I12_RESULTS_NOTES"; }
  RRI_I12_RESULTS_NOTES* create() const { return new RRI_I12_RESULTS_NOTES(); }

  /* Initialize object */
  void init() {
    setName("RRI_I12.RESULTS_NOTES");
    addObject<OBX>(RRI_I12_OBX_61, "OBX.61", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(RRI_I12_NTE_64, "NTE.64", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_61(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RRI_I12_OBX_61);
  }
  NTE* getNTE_64(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RRI_I12_NTE_64);
  }

  /* Checker list */
  bool isOBX_61(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_OBX_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_64(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_NTE_64) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRI_I12_59 */

/* OBSERVATION */
struct RRI_I12_OBSERVATION : public HL7Group {
  RRI_I12_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RRI_I12_OBR_53,
    RRI_I12_NTE_56,
    RRI_I12_RESULTS_NOTES_59,
    FIELD_ID_MAX
  };

  const char* className() const { return "RRI_I12_OBSERVATION"; }
  RRI_I12_OBSERVATION* create() const { return new RRI_I12_OBSERVATION(); }

  /* Initialize object */
  void init() {
    setName("RRI_I12.OBSERVATION");
    addObject<OBR>(RRI_I12_OBR_53, "OBR.53", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(RRI_I12_NTE_56, "NTE.56", HL7::optional, HL7::repetition_on);
    addObject<RRI_I12_RESULTS_NOTES>(RRI_I12_RESULTS_NOTES_59,
				     "RRI_I12.RESULTS_NOTES", HL7::optional,
				     HL7::repetition_on);
  }

  /* Getters list */
  OBR* getOBR_53(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, RRI_I12_OBR_53);
  }
  NTE* getNTE_56(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RRI_I12_NTE_56);
  }
  RRI_I12_RESULTS_NOTES* getRESULTS_NOTES(size_t index = 0) {
    return (RRI_I12_RESULTS_NOTES*)this->getObjectSafe(
	index, RRI_I12_RESULTS_NOTES_59);
  }

  /* Checker list */
  bool isOBR_53(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_OBR_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_56(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_NTE_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRESULTS_NOTES(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_RESULTS_NOTES_59) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRI_I12_51 */

/* PATIENT_VISIT */
struct RRI_I12_PATIENT_VISIT : public HL7Group {
  RRI_I12_PATIENT_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RRI_I12_PV1_72, RRI_I12_PV2_74, FIELD_ID_MAX };

  const char* className() const { return "RRI_I12_PATIENT_VISIT"; }
  RRI_I12_PATIENT_VISIT* create() const { return new RRI_I12_PATIENT_VISIT(); }

  /* Initialize object */
  void init() {
    setName("RRI_I12.PATIENT_VISIT");
    addObject<PV1>(RRI_I12_PV1_72, "PV1.72", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(RRI_I12_PV2_74, "PV2.74", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  PV1* getPV1_72(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RRI_I12_PV1_72);
  }
  PV2* getPV2_74(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RRI_I12_PV2_74);
  }

  /* Checker list */
  bool isPV1_72(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_PV1_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_74(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_PV2_74) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRI_I12_71 */

/* RRI_I12 */
struct RRI_I12 : public HL7Message {
  RRI_I12() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RRI_I12_MSH_1,
    RRI_I12_MSA_3,
    RRI_I12_RF1_6,
    RRI_I12_AUTHORIZATION_CONTACT_8,
    RRI_I12_PROVIDER_CONTACT_14,
    RRI_I12_PID_22,
    RRI_I12_ACC_24,
    RRI_I12_DG1_28,
    RRI_I12_DRG_33,
    RRI_I12_AL1_38,
    RRI_I12_PROCEDURE_41,
    RRI_I12_OBSERVATION_51,
    RRI_I12_PATIENT_VISIT_71,
    RRI_I12_NTE_79,
    FIELD_ID_MAX
  };

  const char* className() const { return "RRI_I12"; }
  RRI_I12* create() const { return new RRI_I12(); }

  /* Initialize object */
  void init() {
    setName("RRI_I12");
    addObject<MSH>(RRI_I12_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(RRI_I12_MSA_3, "MSA.3", HL7::optional, HL7::repetition_off);
    addObject<RF1>(RRI_I12_RF1_6, "RF1.6", HL7::optional, HL7::repetition_off);
    addObject<RRI_I12_AUTHORIZATION_CONTACT>(
	RRI_I12_AUTHORIZATION_CONTACT_8, "RRI_I12.AUTHORIZATION_CONTACT",
	HL7::optional, HL7::repetition_off);
    addObject<RRI_I12_PROVIDER_CONTACT>(RRI_I12_PROVIDER_CONTACT_14,
					"RRI_I12.PROVIDER_CONTACT",
					HL7::initialized, HL7::repetition_on);
    addObject<PID>(RRI_I12_PID_22, "PID.22", HL7::initialized,
		   HL7::repetition_off);
    addObject<ACC>(RRI_I12_ACC_24, "ACC.24", HL7::optional,
		   HL7::repetition_off);
    addObject<DG1>(RRI_I12_DG1_28, "DG1.28", HL7::optional, HL7::repetition_on);
    addObject<DRG>(RRI_I12_DRG_33, "DRG.33", HL7::optional, HL7::repetition_on);
    addObject<AL1>(RRI_I12_AL1_38, "AL1.38", HL7::optional, HL7::repetition_on);
    addObject<RRI_I12_PROCEDURE>(RRI_I12_PROCEDURE_41, "RRI_I12.PROCEDURE",
				 HL7::optional, HL7::repetition_on);
    addObject<RRI_I12_OBSERVATION>(RRI_I12_OBSERVATION_51,
				   "RRI_I12.OBSERVATION", HL7::optional,
				   HL7::repetition_on);
    addObject<RRI_I12_PATIENT_VISIT>(RRI_I12_PATIENT_VISIT_71,
				     "RRI_I12.PATIENT_VISIT", HL7::optional,
				     HL7::repetition_off);
    addObject<NTE>(RRI_I12_NTE_79, "NTE.79", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RRI_I12_MSH_1);
  }
  MSA* getMSA_3(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RRI_I12_MSA_3);
  }
  RF1* getRF1_6(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, RRI_I12_RF1_6);
  }
  RRI_I12_AUTHORIZATION_CONTACT* getAUTHORIZATION_CONTACT(size_t index = 0) {
    return (RRI_I12_AUTHORIZATION_CONTACT*)this->getObjectSafe(
	index, RRI_I12_AUTHORIZATION_CONTACT_8);
  }
  RRI_I12_PROVIDER_CONTACT* getPROVIDER_CONTACT(size_t index = 0) {
    return (RRI_I12_PROVIDER_CONTACT*)this->getObjectSafe(
	index, RRI_I12_PROVIDER_CONTACT_14);
  }
  PID* getPID_22(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RRI_I12_PID_22);
  }
  ACC* getACC_24(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, RRI_I12_ACC_24);
  }
  DG1* getDG1_28(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, RRI_I12_DG1_28);
  }
  DRG* getDRG_33(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, RRI_I12_DRG_33);
  }
  AL1* getAL1_38(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, RRI_I12_AL1_38);
  }
  RRI_I12_PROCEDURE* getPROCEDURE(size_t index = 0) {
    return (RRI_I12_PROCEDURE*)this->getObjectSafe(index, RRI_I12_PROCEDURE_41);
  }
  RRI_I12_OBSERVATION* getOBSERVATION(size_t index = 0) {
    return (RRI_I12_OBSERVATION*)this->getObjectSafe(index,
						     RRI_I12_OBSERVATION_51);
  }
  RRI_I12_PATIENT_VISIT* getPATIENT_VISIT(size_t index = 0) {
    return (RRI_I12_PATIENT_VISIT*)this->getObjectSafe(
	index, RRI_I12_PATIENT_VISIT_71);
  }
  NTE* getNTE_79(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RRI_I12_NTE_79);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_3(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_MSA_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_6(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_RF1_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAUTHORIZATION_CONTACT(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_AUTHORIZATION_CONTACT_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROVIDER_CONTACT(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_PROVIDER_CONTACT_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_22(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_PID_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_24(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_ACC_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_28(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_DG1_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_33(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_DRG_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_38(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_AL1_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROCEDURE(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_PROCEDURE_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_OBSERVATION_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT_VISIT(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_PATIENT_VISIT_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_79(size_t index = 0) {
    try {
      return this->getObject(index, RRI_I12_NTE_79) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRI_I12_ */
} /* namespace HL7_24 */
#endif /*  __RRI_I12__24_H__ */
