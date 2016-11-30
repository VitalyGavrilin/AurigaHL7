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


#ifndef __RRA_O18__24_H__
#define __RRA_O18__24_H__

#include "../../common/Util.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/RXA.h"
#include "../segment/RXR.h"

namespace HL7_24 {

/* Internal structures/groups */
struct RRA_O18_PATIENT;	/* PATIENT */
struct RRA_O18_ADMINISTRATION; /* ADMINISTRATION */
struct RRA_O18_ORDER;	  /* ORDER */
struct RRA_O18_RESPONSE;       /* RESPONSE */

/* PATIENT */
struct RRA_O18_PATIENT : public HL7Group {
  RRA_O18_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RRA_O18_PID_13, RRA_O18_NTE_16, FIELD_ID_MAX };

  const char* className() const { return "RRA_O18_PATIENT"; }
  RRA_O18_PATIENT* create() const { return new RRA_O18_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("RRA_O18.PATIENT");
    addObject<PID>(RRA_O18_PID_13, "PID.13", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(RRA_O18_NTE_16, "NTE.16", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PID* getPID_13(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RRA_O18_PID_13);
  }
  NTE* getNTE_16(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RRA_O18_NTE_16);
  }

  /* Checker list */
  bool isPID_13(size_t index = 0) {
    try {
      return this->getObject(index, RRA_O18_PID_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_16(size_t index = 0) {
    try {
      return this->getObject(index, RRA_O18_NTE_16) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRA_O18_12 */

/* ADMINISTRATION */
struct RRA_O18_ADMINISTRATION : public HL7Group {
  RRA_O18_ADMINISTRATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RRA_O18_RXA_24, RRA_O18_RXR_26, FIELD_ID_MAX };

  const char* className() const { return "RRA_O18_ADMINISTRATION"; }
  RRA_O18_ADMINISTRATION* create() const {
    return new RRA_O18_ADMINISTRATION();
  }

  /* Initialize object */
  void init() {
    setName("RRA_O18.ADMINISTRATION");
    addObject<RXA>(RRA_O18_RXA_24, "RXA.24", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXR>(RRA_O18_RXR_26, "RXR.26", HL7::initialized,
		   HL7::repetition_off);
  }

  /* Getters list */
  RXA* getRXA_24(size_t index = 0) {
    return (RXA*)this->getObjectSafe(index, RRA_O18_RXA_24);
  }
  RXR* getRXR_26(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RRA_O18_RXR_26);
  }

  /* Checker list */
  bool isRXA_24(size_t index = 0) {
    try {
      return this->getObject(index, RRA_O18_RXA_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_26(size_t index = 0) {
    try {
      return this->getObject(index, RRA_O18_RXR_26) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRA_O18_22 */

/* ORDER */
struct RRA_O18_ORDER : public HL7Group {
  RRA_O18_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RRA_O18_ORC_21, RRA_O18_ADMINISTRATION_22, FIELD_ID_MAX };

  const char* className() const { return "RRA_O18_ORDER"; }
  RRA_O18_ORDER* create() const { return new RRA_O18_ORDER(); }

  /* Initialize object */
  void init() {
    setName("RRA_O18.ORDER");
    addObject<ORC>(RRA_O18_ORC_21, "ORC.21", HL7::initialized,
		   HL7::repetition_off);
    addObject<RRA_O18_ADMINISTRATION>(RRA_O18_ADMINISTRATION_22,
				      "RRA_O18.ADMINISTRATION", HL7::optional,
				      HL7::repetition_off);
  }

  /* Getters list */
  ORC* getORC_21(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, RRA_O18_ORC_21);
  }
  RRA_O18_ADMINISTRATION* getADMINISTRATION(size_t index = 0) {
    return (RRA_O18_ADMINISTRATION*)this->getObjectSafe(
	index, RRA_O18_ADMINISTRATION_22);
  }

  /* Checker list */
  bool isORC_21(size_t index = 0) {
    try {
      return this->getObject(index, RRA_O18_ORC_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isADMINISTRATION(size_t index = 0) {
    try {
      return this->getObject(index, RRA_O18_ADMINISTRATION_22) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRA_O18_20 */

/* RESPONSE */
struct RRA_O18_RESPONSE : public HL7Group {
  RRA_O18_RESPONSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RRA_O18_PATIENT_12, RRA_O18_ORDER_20, FIELD_ID_MAX };

  const char* className() const { return "RRA_O18_RESPONSE"; }
  RRA_O18_RESPONSE* create() const { return new RRA_O18_RESPONSE(); }

  /* Initialize object */
  void init() {
    setName("RRA_O18.RESPONSE");
    addObject<RRA_O18_PATIENT>(RRA_O18_PATIENT_12, "RRA_O18.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<RRA_O18_ORDER>(RRA_O18_ORDER_20, "RRA_O18.ORDER",
			     HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  RRA_O18_PATIENT* getPATIENT(size_t index = 0) {
    return (RRA_O18_PATIENT*)this->getObjectSafe(index, RRA_O18_PATIENT_12);
  }
  RRA_O18_ORDER* getORDER(size_t index = 0) {
    return (RRA_O18_ORDER*)this->getObjectSafe(index, RRA_O18_ORDER_20);
  }

  /* Checker list */
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, RRA_O18_PATIENT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, RRA_O18_ORDER_20) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRA_O18_11 */

/* RRA_O18 */
struct RRA_O18 : public HL7Message {
  RRA_O18() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RRA_O18_MSH_1,
    RRA_O18_MSA_2,
    RRA_O18_ERR_4,
    RRA_O18_NTE_8,
    RRA_O18_RESPONSE_11,
    FIELD_ID_MAX
  };

  const char* className() const { return "RRA_O18"; }
  RRA_O18* create() const { return new RRA_O18(); }

  /* Initialize object */
  void init() {
    setName("RRA_O18");
    addObject<MSH>(RRA_O18_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(RRA_O18_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(RRA_O18_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(RRA_O18_NTE_8, "NTE.8", HL7::optional, HL7::repetition_on);
    addObject<RRA_O18_RESPONSE>(RRA_O18_RESPONSE_11, "RRA_O18.RESPONSE",
				HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RRA_O18_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RRA_O18_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RRA_O18_ERR_4);
  }
  NTE* getNTE_8(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RRA_O18_NTE_8);
  }
  RRA_O18_RESPONSE* getRESPONSE(size_t index = 0) {
    return (RRA_O18_RESPONSE*)this->getObjectSafe(index, RRA_O18_RESPONSE_11);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RRA_O18_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, RRA_O18_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, RRA_O18_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_8(size_t index = 0) {
    try {
      return this->getObject(index, RRA_O18_NTE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRESPONSE(size_t index = 0) {
    try {
      return this->getObject(index, RRA_O18_RESPONSE_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRA_O18_ */
} /* namespace HL7_24 */
#endif /*  __RRA_O18__24_H__ */
