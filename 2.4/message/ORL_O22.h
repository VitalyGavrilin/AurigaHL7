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


#ifndef __ORL_O22__24_H__
#define __ORL_O22__24_H__

#include "../../common/Util.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/SAC.h"

namespace HL7_24 {

/* Internal structures/groups */
struct ORL_O22_CONTAINER;	   /* CONTAINER */
struct ORL_O22_OBSERVATION_REQUEST; /* OBSERVATION_REQUEST */
struct ORL_O22_ORDER;		    /* ORDER */
struct ORL_O22_GENERAL_ORDER;       /* GENERAL_ORDER */
struct ORL_O22_PATIENT;		    /* PATIENT */
struct ORL_O22_RESPONSE;	    /* RESPONSE */

/* CONTAINER */
struct ORL_O22_CONTAINER : public HL7Group {
  ORL_O22_CONTAINER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ORL_O22_SAC_16, ORL_O22_OBX_19, FIELD_ID_MAX };

  const char* className() const { return "ORL_O22_CONTAINER"; }
  ORL_O22_CONTAINER* create() const { return new ORL_O22_CONTAINER(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORL_O22.CONTAINER");
    addObject<SAC>(ORL_O22_SAC_16, "SAC.16", HL7::initialized,
		   HL7::repetition_off);
    addObject<OBX>(ORL_O22_OBX_19, "OBX.19", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  SAC* getSAC_16(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, ORL_O22_SAC_16);
  }
  OBX* getOBX_19(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORL_O22_OBX_19);
  }

  /* Checker list */
  bool isSAC_16(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_SAC_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_19(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_OBX_19) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORL_O22_15 */

/* OBSERVATION_REQUEST */
struct ORL_O22_OBSERVATION_REQUEST : public HL7Group {
  ORL_O22_OBSERVATION_REQUEST() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ORL_O22_OBR_27, ORL_O22_SAC_30, FIELD_ID_MAX };

  const char* className() const { return "ORL_O22_OBSERVATION_REQUEST"; }
  ORL_O22_OBSERVATION_REQUEST* create() const {
    return new ORL_O22_OBSERVATION_REQUEST();
  }

  /* Initialize object */
  void init() {
    setName("ORL_O22.OBSERVATION_REQUEST");
    addObject<OBR>(ORL_O22_OBR_27, "OBR.27", HL7::initialized,
		   HL7::repetition_off);
    addObject<SAC>(ORL_O22_SAC_30, "SAC.30", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBR* getOBR_27(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, ORL_O22_OBR_27);
  }
  SAC* getSAC_30(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, ORL_O22_SAC_30);
  }

  /* Checker list */
  bool isOBR_27(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_OBR_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_30(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_SAC_30) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORL_O22_26 */

/* ORDER */
struct ORL_O22_ORDER : public HL7Group {
  ORL_O22_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORL_O22_ORC_25,
    ORL_O22_OBSERVATION_REQUEST_26,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORL_O22_ORDER"; }
  ORL_O22_ORDER* create() const { return new ORL_O22_ORDER(); }

  /* Initialize object */
  void init() {
    setName("ORL_O22.ORDER");
    addObject<ORC>(ORL_O22_ORC_25, "ORC.25", HL7::initialized,
		   HL7::repetition_off);
    addObject<ORL_O22_OBSERVATION_REQUEST>(ORL_O22_OBSERVATION_REQUEST_26,
					   "ORL_O22.OBSERVATION_REQUEST",
					   HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  ORC* getORC_25(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORL_O22_ORC_25);
  }
  ORL_O22_OBSERVATION_REQUEST* getOBSERVATION_REQUEST(size_t index = 0) {
    return (ORL_O22_OBSERVATION_REQUEST*)this->getObjectSafe(
	index, ORL_O22_OBSERVATION_REQUEST_26);
  }

  /* Checker list */
  bool isORC_25(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_ORC_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION_REQUEST(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_OBSERVATION_REQUEST_26) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORL_O22_23 */

/* GENERAL_ORDER */
struct ORL_O22_GENERAL_ORDER : public HL7Group {
  ORL_O22_GENERAL_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ORL_O22_CONTAINER_15, ORL_O22_ORDER_23, FIELD_ID_MAX };

  const char* className() const { return "ORL_O22_GENERAL_ORDER"; }
  ORL_O22_GENERAL_ORDER* create() const { return new ORL_O22_GENERAL_ORDER(); }

  /* Initialize object */
  void init() {
    setName("ORL_O22.GENERAL_ORDER");
    addObject<ORL_O22_CONTAINER>(ORL_O22_CONTAINER_15, "ORL_O22.CONTAINER",
				 HL7::optional, HL7::repetition_off);
    addObject<ORL_O22_ORDER>(ORL_O22_ORDER_23, "ORL_O22.ORDER", HL7::optional,
			     HL7::repetition_on);
  }

  /* Getters list */
  ORL_O22_CONTAINER* getCONTAINER(size_t index = 0) {
    return (ORL_O22_CONTAINER*)this->getObjectSafe(index, ORL_O22_CONTAINER_15);
  }
  ORL_O22_ORDER* getORDER(size_t index = 0) {
    return (ORL_O22_ORDER*)this->getObjectSafe(index, ORL_O22_ORDER_23);
  }

  /* Checker list */
  bool isCONTAINER(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_CONTAINER_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_ORDER_23) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORL_O22_14 */

/* PATIENT */
struct ORL_O22_PATIENT : public HL7Group {
  ORL_O22_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ORL_O22_PID_13, ORL_O22_GENERAL_ORDER_14, FIELD_ID_MAX };

  const char* className() const { return "ORL_O22_PATIENT"; }
  ORL_O22_PATIENT* create() const { return new ORL_O22_PATIENT(); }

  /* Initialize object */
  void init() {
    setName("ORL_O22.PATIENT");
    addObject<PID>(ORL_O22_PID_13, "PID.13", HL7::initialized,
		   HL7::repetition_off);
    addObject<ORL_O22_GENERAL_ORDER>(ORL_O22_GENERAL_ORDER_14,
				     "ORL_O22.GENERAL_ORDER", HL7::initialized,
				     HL7::repetition_on);
  }

  /* Getters list */
  PID* getPID_13(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORL_O22_PID_13);
  }
  ORL_O22_GENERAL_ORDER* getGENERAL_ORDER(size_t index = 0) {
    return (ORL_O22_GENERAL_ORDER*)this->getObjectSafe(
	index, ORL_O22_GENERAL_ORDER_14);
  }

  /* Checker list */
  bool isPID_13(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_PID_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGENERAL_ORDER(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_GENERAL_ORDER_14) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORL_O22_12 */

/* RESPONSE */
struct ORL_O22_RESPONSE : public HL7Group {
  ORL_O22_RESPONSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ORL_O22_PATIENT_12, FIELD_ID_MAX };

  const char* className() const { return "ORL_O22_RESPONSE"; }
  ORL_O22_RESPONSE* create() const { return new ORL_O22_RESPONSE(); }

  /* Initialize object */
  void init() {
    setName("ORL_O22.RESPONSE");
    addObject<ORL_O22_PATIENT>(ORL_O22_PATIENT_12, "ORL_O22.PATIENT",
			       HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  ORL_O22_PATIENT* getPATIENT(size_t index = 0) {
    return (ORL_O22_PATIENT*)this->getObjectSafe(index, ORL_O22_PATIENT_12);
  }

  /* Checker list */
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_PATIENT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORL_O22_11 */

/* ORL_O22 */
struct ORL_O22 : public HL7Message {
  ORL_O22() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORL_O22_MSH_1,
    ORL_O22_MSA_2,
    ORL_O22_ERR_4,
    ORL_O22_NTE_8,
    ORL_O22_RESPONSE_11,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORL_O22"; }
  ORL_O22* create() const { return new ORL_O22(); }

  /* Initialize object */
  void init() {
    setName("ORL_O22");
    addObject<MSH>(ORL_O22_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(ORL_O22_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(ORL_O22_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(ORL_O22_NTE_8, "NTE.8", HL7::optional, HL7::repetition_on);
    addObject<ORL_O22_RESPONSE>(ORL_O22_RESPONSE_11, "ORL_O22.RESPONSE",
				HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORL_O22_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ORL_O22_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ORL_O22_ERR_4);
  }
  NTE* getNTE_8(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORL_O22_NTE_8);
  }
  ORL_O22_RESPONSE* getRESPONSE(size_t index = 0) {
    return (ORL_O22_RESPONSE*)this->getObjectSafe(index, ORL_O22_RESPONSE_11);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_8(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_NTE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRESPONSE(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_RESPONSE_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORL_O22_ */
} /* namespace HL7_24 */
#endif /*  __ORL_O22__24_H__ */
