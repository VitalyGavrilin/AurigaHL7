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


#ifndef __PEX_P07__24_H__
#define __PEX_P07__24_H__

#include "../../common/Util.h"
#include "../segment/CSP.h"
#include "../segment/CSR.h"
#include "../segment/EVN.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
#include "../segment/NTE.h"
#include "../segment/OBX.h"
#include "../segment/PCR.h"
#include "../segment/PD1.h"
#include "../segment/PEO.h"
#include "../segment/PES.h"
#include "../segment/PID.h"
#include "../segment/PRB.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/RXA.h"
#include "../segment/RXE.h"
#include "../segment/RXR.h"

namespace HL7_24 {

/* Internal structures/groups */
struct PEX_P07_VISIT;		    /* VISIT */
struct PEX_P07_RX_ORDER;	    /* RX_ORDER */
struct PEX_P07_RX_ADMINISTRATION;   /* RX_ADMINISTRATION */
struct PEX_P07_ASSOCIATED_RX_ORDER; /* ASSOCIATED_RX_ORDER */
struct PEX_P07_ASSOCIATED_RX_ADMIN; /* ASSOCIATED_RX_ADMIN */
struct PEX_P07_ASSOCIATED_PERSON;   /* ASSOCIATED_PERSON */
struct PEX_P07_STUDY;		    /* STUDY */
struct PEX_P07_PEX_CAUSE;	   /* PEX_CAUSE */
struct PEX_P07_PEX_OBSERVATION;     /* PEX_OBSERVATION */
struct PEX_P07_EXPERIENCE;	  /* EXPERIENCE */

/* VISIT */
struct PEX_P07_VISIT : public HL7Group {
  PEX_P07_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PEX_P07_PV1_13, PEX_P07_PV2_15, FIELD_ID_MAX };

  const char* className() const { return "PEX_P07_VISIT"; }
  PEX_P07_VISIT* create() const { return new PEX_P07_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("PEX_P07.VISIT");
    addObject<PV1>(PEX_P07_PV1_13, "PV1.13", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(PEX_P07_PV2_15, "PV2.15", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  PV1* getPV1_13(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, PEX_P07_PV1_13);
  }
  PV2* getPV2_15(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, PEX_P07_PV2_15);
  }

  /* Checker list */
  bool isPV1_13(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_PV1_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_15(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_PV2_15) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PEX_P07_12 */

/* RX_ORDER */
struct PEX_P07_RX_ORDER : public HL7Group {
  PEX_P07_RX_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PEX_P07_RXE_25, PEX_P07_RXR_28, FIELD_ID_MAX };

  const char* className() const { return "PEX_P07_RX_ORDER"; }
  PEX_P07_RX_ORDER* create() const { return new PEX_P07_RX_ORDER(); }

  /* Initialize object */
  void init() {
    setName("PEX_P07.RX_ORDER");
    addObject<RXE>(PEX_P07_RXE_25, "RXE.25", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXR>(PEX_P07_RXR_28, "RXR.28", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  RXE* getRXE_25(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, PEX_P07_RXE_25);
  }
  RXR* getRXR_28(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, PEX_P07_RXR_28);
  }

  /* Checker list */
  bool isRXE_25(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_RXE_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_28(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_RXR_28) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PEX_P07_24 */

/* RX_ADMINISTRATION */
struct PEX_P07_RX_ADMINISTRATION : public HL7Group {
  PEX_P07_RX_ADMINISTRATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PEX_P07_RXA_34, PEX_P07_RXR_36, FIELD_ID_MAX };

  const char* className() const { return "PEX_P07_RX_ADMINISTRATION"; }
  PEX_P07_RX_ADMINISTRATION* create() const {
    return new PEX_P07_RX_ADMINISTRATION();
  }

  /* Initialize object */
  void init() {
    setName("PEX_P07.RX_ADMINISTRATION");
    addObject<RXA>(PEX_P07_RXA_34, "RXA.34", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXR>(PEX_P07_RXR_36, "RXR.36", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  RXA* getRXA_34(size_t index = 0) {
    return (RXA*)this->getObjectSafe(index, PEX_P07_RXA_34);
  }
  RXR* getRXR_36(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, PEX_P07_RXR_36);
  }

  /* Checker list */
  bool isRXA_34(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_RXA_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_36(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_RXR_36) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PEX_P07_32 */

/* ASSOCIATED_RX_ORDER */
struct PEX_P07_ASSOCIATED_RX_ORDER : public HL7Group {
  PEX_P07_ASSOCIATED_RX_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PEX_P07_RXE_58, PEX_P07_RXR_61, FIELD_ID_MAX };

  const char* className() const { return "PEX_P07_ASSOCIATED_RX_ORDER"; }
  PEX_P07_ASSOCIATED_RX_ORDER* create() const {
    return new PEX_P07_ASSOCIATED_RX_ORDER();
  }

  /* Initialize object */
  void init() {
    setName("PEX_P07.ASSOCIATED_RX_ORDER");
    addObject<RXE>(PEX_P07_RXE_58, "RXE.58", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXR>(PEX_P07_RXR_61, "RXR.61", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  RXE* getRXE_58(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, PEX_P07_RXE_58);
  }
  RXR* getRXR_61(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, PEX_P07_RXR_61);
  }

  /* Checker list */
  bool isRXE_58(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_RXE_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_61(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_RXR_61) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PEX_P07_57 */

/* ASSOCIATED_RX_ADMIN */
struct PEX_P07_ASSOCIATED_RX_ADMIN : public HL7Group {
  PEX_P07_ASSOCIATED_RX_ADMIN() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PEX_P07_RXA_67, PEX_P07_RXR_69, FIELD_ID_MAX };

  const char* className() const { return "PEX_P07_ASSOCIATED_RX_ADMIN"; }
  PEX_P07_ASSOCIATED_RX_ADMIN* create() const {
    return new PEX_P07_ASSOCIATED_RX_ADMIN();
  }

  /* Initialize object */
  void init() {
    setName("PEX_P07.ASSOCIATED_RX_ADMIN");
    addObject<RXA>(PEX_P07_RXA_67, "RXA.67", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXR>(PEX_P07_RXR_69, "RXR.69", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  RXA* getRXA_67(size_t index = 0) {
    return (RXA*)this->getObjectSafe(index, PEX_P07_RXA_67);
  }
  RXR* getRXR_69(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, PEX_P07_RXR_69);
  }

  /* Checker list */
  bool isRXA_67(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_RXA_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_69(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_RXR_69) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PEX_P07_65 */

/* ASSOCIATED_PERSON */
struct PEX_P07_ASSOCIATED_PERSON : public HL7Group {
  PEX_P07_ASSOCIATED_PERSON() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PEX_P07_NK1_56,
    PEX_P07_ASSOCIATED_RX_ORDER_57,
    PEX_P07_ASSOCIATED_RX_ADMIN_65,
    PEX_P07_PRB_75,
    PEX_P07_OBX_80,
    FIELD_ID_MAX
  };

  const char* className() const { return "PEX_P07_ASSOCIATED_PERSON"; }
  PEX_P07_ASSOCIATED_PERSON* create() const {
    return new PEX_P07_ASSOCIATED_PERSON();
  }

  /* Initialize object */
  void init() {
    setName("PEX_P07.ASSOCIATED_PERSON");
    addObject<NK1>(PEX_P07_NK1_56, "NK1.56", HL7::initialized,
		   HL7::repetition_off);
    addObject<PEX_P07_ASSOCIATED_RX_ORDER>(PEX_P07_ASSOCIATED_RX_ORDER_57,
					   "PEX_P07.ASSOCIATED_RX_ORDER",
					   HL7::optional, HL7::repetition_off);
    addObject<PEX_P07_ASSOCIATED_RX_ADMIN>(PEX_P07_ASSOCIATED_RX_ADMIN_65,
					   "PEX_P07.ASSOCIATED_RX_ADMIN",
					   HL7::optional, HL7::repetition_on);
    addObject<PRB>(PEX_P07_PRB_75, "PRB.75", HL7::optional, HL7::repetition_on);
    addObject<OBX>(PEX_P07_OBX_80, "OBX.80", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  NK1* getNK1_56(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, PEX_P07_NK1_56);
  }
  PEX_P07_ASSOCIATED_RX_ORDER* getASSOCIATED_RX_ORDER(size_t index = 0) {
    return (PEX_P07_ASSOCIATED_RX_ORDER*)this->getObjectSafe(
	index, PEX_P07_ASSOCIATED_RX_ORDER_57);
  }
  PEX_P07_ASSOCIATED_RX_ADMIN* getASSOCIATED_RX_ADMIN(size_t index = 0) {
    return (PEX_P07_ASSOCIATED_RX_ADMIN*)this->getObjectSafe(
	index, PEX_P07_ASSOCIATED_RX_ADMIN_65);
  }
  PRB* getPRB_75(size_t index = 0) {
    return (PRB*)this->getObjectSafe(index, PEX_P07_PRB_75);
  }
  OBX* getOBX_80(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PEX_P07_OBX_80);
  }

  /* Checker list */
  bool isNK1_56(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_NK1_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isASSOCIATED_RX_ORDER(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_ASSOCIATED_RX_ORDER_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isASSOCIATED_RX_ADMIN(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_ASSOCIATED_RX_ADMIN_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRB_75(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_PRB_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_80(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_OBX_80) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PEX_P07_55 */

/* STUDY */
struct PEX_P07_STUDY : public HL7Group {
  PEX_P07_STUDY() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PEX_P07_CSR_86, PEX_P07_CSP_89, FIELD_ID_MAX };

  const char* className() const { return "PEX_P07_STUDY"; }
  PEX_P07_STUDY* create() const { return new PEX_P07_STUDY(); }

  /* Initialize object */
  void init() {
    setName("PEX_P07.STUDY");
    addObject<CSR>(PEX_P07_CSR_86, "CSR.86", HL7::initialized,
		   HL7::repetition_off);
    addObject<CSP>(PEX_P07_CSP_89, "CSP.89", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  CSR* getCSR_86(size_t index = 0) {
    return (CSR*)this->getObjectSafe(index, PEX_P07_CSR_86);
  }
  CSP* getCSP_89(size_t index = 0) {
    return (CSP*)this->getObjectSafe(index, PEX_P07_CSP_89);
  }

  /* Checker list */
  bool isCSR_86(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_CSR_86) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCSP_89(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_CSP_89) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PEX_P07_84 */

/* PEX_CAUSE */
struct PEX_P07_PEX_CAUSE : public HL7Group {
  PEX_P07_PEX_CAUSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PEX_P07_PCR_23,
    PEX_P07_RX_ORDER_24,
    PEX_P07_RX_ADMINISTRATION_32,
    PEX_P07_PRB_42,
    PEX_P07_OBX_47,
    PEX_P07_NTE_52,
    PEX_P07_ASSOCIATED_PERSON_55,
    PEX_P07_STUDY_84,
    FIELD_ID_MAX
  };

  const char* className() const { return "PEX_P07_PEX_CAUSE"; }
  PEX_P07_PEX_CAUSE* create() const { return new PEX_P07_PEX_CAUSE(); }

  /* Initialize object */
  void init() {
    setName("PEX_P07.PEX_CAUSE");
    addObject<PCR>(PEX_P07_PCR_23, "PCR.23", HL7::initialized,
		   HL7::repetition_off);
    addObject<PEX_P07_RX_ORDER>(PEX_P07_RX_ORDER_24, "PEX_P07.RX_ORDER",
				HL7::optional, HL7::repetition_off);
    addObject<PEX_P07_RX_ADMINISTRATION>(PEX_P07_RX_ADMINISTRATION_32,
					 "PEX_P07.RX_ADMINISTRATION",
					 HL7::optional, HL7::repetition_on);
    addObject<PRB>(PEX_P07_PRB_42, "PRB.42", HL7::optional, HL7::repetition_on);
    addObject<OBX>(PEX_P07_OBX_47, "OBX.47", HL7::optional, HL7::repetition_on);
    addObject<NTE>(PEX_P07_NTE_52, "NTE.52", HL7::optional, HL7::repetition_on);
    addObject<PEX_P07_ASSOCIATED_PERSON>(PEX_P07_ASSOCIATED_PERSON_55,
					 "PEX_P07.ASSOCIATED_PERSON",
					 HL7::optional, HL7::repetition_off);
    addObject<PEX_P07_STUDY>(PEX_P07_STUDY_84, "PEX_P07.STUDY", HL7::optional,
			     HL7::repetition_on);
  }

  /* Getters list */
  PCR* getPCR_23(size_t index = 0) {
    return (PCR*)this->getObjectSafe(index, PEX_P07_PCR_23);
  }
  PEX_P07_RX_ORDER* getRX_ORDER(size_t index = 0) {
    return (PEX_P07_RX_ORDER*)this->getObjectSafe(index, PEX_P07_RX_ORDER_24);
  }
  PEX_P07_RX_ADMINISTRATION* getRX_ADMINISTRATION(size_t index = 0) {
    return (PEX_P07_RX_ADMINISTRATION*)this->getObjectSafe(
	index, PEX_P07_RX_ADMINISTRATION_32);
  }
  PRB* getPRB_42(size_t index = 0) {
    return (PRB*)this->getObjectSafe(index, PEX_P07_PRB_42);
  }
  OBX* getOBX_47(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PEX_P07_OBX_47);
  }
  NTE* getNTE_52(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PEX_P07_NTE_52);
  }
  PEX_P07_ASSOCIATED_PERSON* getASSOCIATED_PERSON(size_t index = 0) {
    return (PEX_P07_ASSOCIATED_PERSON*)this->getObjectSafe(
	index, PEX_P07_ASSOCIATED_PERSON_55);
  }
  PEX_P07_STUDY* getSTUDY(size_t index = 0) {
    return (PEX_P07_STUDY*)this->getObjectSafe(index, PEX_P07_STUDY_84);
  }

  /* Checker list */
  bool isPCR_23(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_PCR_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRX_ORDER(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_RX_ORDER_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRX_ADMINISTRATION(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_RX_ADMINISTRATION_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRB_42(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_PRB_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_47(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_OBX_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_52(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_NTE_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isASSOCIATED_PERSON(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_ASSOCIATED_PERSON_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSTUDY(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_STUDY_84) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PEX_P07_22 */

/* PEX_OBSERVATION */
struct PEX_P07_PEX_OBSERVATION : public HL7Group {
  PEX_P07_PEX_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PEX_P07_PEO_21, PEX_P07_PEX_CAUSE_22, FIELD_ID_MAX };

  const char* className() const { return "PEX_P07_PEX_OBSERVATION"; }
  PEX_P07_PEX_OBSERVATION* create() const {
    return new PEX_P07_PEX_OBSERVATION();
  }

  /* Initialize object */
  void init() {
    setName("PEX_P07.PEX_OBSERVATION");
    addObject<PEO>(PEX_P07_PEO_21, "PEO.21", HL7::initialized,
		   HL7::repetition_off);
    addObject<PEX_P07_PEX_CAUSE>(PEX_P07_PEX_CAUSE_22, "PEX_P07.PEX_CAUSE",
				 HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  PEO* getPEO_21(size_t index = 0) {
    return (PEO*)this->getObjectSafe(index, PEX_P07_PEO_21);
  }
  PEX_P07_PEX_CAUSE* getPEX_CAUSE(size_t index = 0) {
    return (PEX_P07_PEX_CAUSE*)this->getObjectSafe(index, PEX_P07_PEX_CAUSE_22);
  }

  /* Checker list */
  bool isPEO_21(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_PEO_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPEX_CAUSE(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_PEX_CAUSE_22) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PEX_P07_20 */

/* EXPERIENCE */
struct PEX_P07_EXPERIENCE : public HL7Group {
  PEX_P07_EXPERIENCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PEX_P07_PES_19, PEX_P07_PEX_OBSERVATION_20, FIELD_ID_MAX };

  const char* className() const { return "PEX_P07_EXPERIENCE"; }
  PEX_P07_EXPERIENCE* create() const { return new PEX_P07_EXPERIENCE(); }

  /* Initialize object */
  void init() {
    setName("PEX_P07.EXPERIENCE");
    addObject<PES>(PEX_P07_PES_19, "PES.19", HL7::initialized,
		   HL7::repetition_off);
    addObject<PEX_P07_PEX_OBSERVATION>(PEX_P07_PEX_OBSERVATION_20,
				       "PEX_P07.PEX_OBSERVATION",
				       HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  PES* getPES_19(size_t index = 0) {
    return (PES*)this->getObjectSafe(index, PEX_P07_PES_19);
  }
  PEX_P07_PEX_OBSERVATION* getPEX_OBSERVATION(size_t index = 0) {
    return (PEX_P07_PEX_OBSERVATION*)this->getObjectSafe(
	index, PEX_P07_PEX_OBSERVATION_20);
  }

  /* Checker list */
  bool isPES_19(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_PES_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPEX_OBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_PEX_OBSERVATION_20) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PEX_P07_18 */

/* PEX_P07 */
struct PEX_P07 : public HL7Message {
  PEX_P07() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PEX_P07_MSH_1,
    PEX_P07_EVN_2,
    PEX_P07_PID_3,
    PEX_P07_PD1_5,
    PEX_P07_NTE_9,
    PEX_P07_VISIT_12,
    PEX_P07_EXPERIENCE_18,
    FIELD_ID_MAX
  };

  const char* className() const { return "PEX_P07"; }
  PEX_P07* create() const { return new PEX_P07(); }

  /* Initialize object */
  void init() {
    setName("PEX_P07");
    addObject<MSH>(PEX_P07_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EVN>(PEX_P07_EVN_2, "EVN.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<PID>(PEX_P07_PID_3, "PID.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(PEX_P07_PD1_5, "PD1.5", HL7::optional, HL7::repetition_off);
    addObject<NTE>(PEX_P07_NTE_9, "NTE.9", HL7::optional, HL7::repetition_on);
    addObject<PEX_P07_VISIT>(PEX_P07_VISIT_12, "PEX_P07.VISIT", HL7::optional,
			     HL7::repetition_off);
    addObject<PEX_P07_EXPERIENCE>(PEX_P07_EXPERIENCE_18, "PEX_P07.EXPERIENCE",
				  HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, PEX_P07_MSH_1);
  }
  EVN* getEVN_2(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, PEX_P07_EVN_2);
  }
  PID* getPID_3(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, PEX_P07_PID_3);
  }
  PD1* getPD1_5(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, PEX_P07_PD1_5);
  }
  NTE* getNTE_9(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PEX_P07_NTE_9);
  }
  PEX_P07_VISIT* getVISIT(size_t index = 0) {
    return (PEX_P07_VISIT*)this->getObjectSafe(index, PEX_P07_VISIT_12);
  }
  PEX_P07_EXPERIENCE* getEXPERIENCE(size_t index = 0) {
    return (PEX_P07_EXPERIENCE*)this->getObjectSafe(index,
						    PEX_P07_EXPERIENCE_18);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_2(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_EVN_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_3(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_PID_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_5(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_PD1_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_9(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_NTE_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVISIT(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_VISIT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEXPERIENCE(size_t index = 0) {
    try {
      return this->getObject(index, PEX_P07_EXPERIENCE_18) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PEX_P07_ */
} /* namespace HL7_24 */
#endif /*  __PEX_P07__24_H__ */
