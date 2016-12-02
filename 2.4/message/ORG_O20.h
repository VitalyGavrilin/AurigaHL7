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


#ifndef __ORG_O20__24_H__
#define __ORG_O20__24_H__

#include "../../common/Util.h"
#include "../segment/CTI.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"

namespace HL7_24 {

/* Internal structures/groups */
struct ORG_O20_PATIENT;  /* PATIENT */
struct ORG_O20_ORDER;    /* ORDER */
struct ORG_O20_RESPONSE; /* RESPONSE */

/* PATIENT */
struct ORG_O20_PATIENT : public HL7Group {
  ORG_O20_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ORG_O20_PID_13, ORG_O20_NTE_16, FIELD_ID_MAX };

  const char* className() const { return "ORG_O20_PATIENT"; }
  ORG_O20_PATIENT* create() const { return new ORG_O20_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORG_O20.PATIENT");
    addObject<PID>(ORG_O20_PID_13, "PID.13", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(ORG_O20_NTE_16, "NTE.16", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PID* getPID_13(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORG_O20_PID_13);
  }
  NTE* getNTE_16(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORG_O20_NTE_16);
  }

  /* Checker list */
  bool isPID_13(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_PID_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_16(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_NTE_16) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORG_O20_12 */

/* ORDER */
struct ORG_O20_ORDER : public HL7Group {
  ORG_O20_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORG_O20_ORC_21,
    ORG_O20_OBR_23,
    ORG_O20_NTE_27,
    ORG_O20_CTI_32,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORG_O20_ORDER"; }
  ORG_O20_ORDER* create() const { return new ORG_O20_ORDER(); }

  /* Initialize object */
  void init() {
    setName("ORG_O20.ORDER");
    addObject<ORC>(ORG_O20_ORC_21, "ORC.21", HL7::initialized,
		   HL7::repetition_off);
    addObject<OBR>(ORG_O20_OBR_23, "OBR.23", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(ORG_O20_NTE_27, "NTE.27", HL7::optional, HL7::repetition_on);
    addObject<CTI>(ORG_O20_CTI_32, "CTI.32", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_21(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORG_O20_ORC_21);
  }
  OBR* getOBR_23(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, ORG_O20_OBR_23);
  }
  NTE* getNTE_27(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORG_O20_NTE_27);
  }
  CTI* getCTI_32(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, ORG_O20_CTI_32);
  }

  /* Checker list */
  bool isORC_21(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORC_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_23(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_OBR_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_27(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_NTE_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_32(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_CTI_32) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORG_O20_20 */

/* RESPONSE */
struct ORG_O20_RESPONSE : public HL7Group {
  ORG_O20_RESPONSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ORG_O20_PATIENT_12, ORG_O20_ORDER_20, FIELD_ID_MAX };

  const char* className() const { return "ORG_O20_RESPONSE"; }
  ORG_O20_RESPONSE* create() const { return new ORG_O20_RESPONSE(); }

  /* Initialize object */
  void init() {
    setName("ORG_O20.RESPONSE");
    addObject<ORG_O20_PATIENT>(ORG_O20_PATIENT_12, "ORG_O20.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<ORG_O20_ORDER>(ORG_O20_ORDER_20, "ORG_O20.ORDER",
			     HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  ORG_O20_PATIENT* getPATIENT(size_t index = 0) {
    return (ORG_O20_PATIENT*)this->getObjectSafe(index, ORG_O20_PATIENT_12);
  }
  ORG_O20_ORDER* getORDER(size_t index = 0) {
    return (ORG_O20_ORDER*)this->getObjectSafe(index, ORG_O20_ORDER_20);
  }

  /* Checker list */
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_PATIENT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORDER_20) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORG_O20_11 */

/* ORG_O20 */
struct ORG_O20 : public HL7Message {
  ORG_O20() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORG_O20_MSH_1,
    ORG_O20_MSA_2,
    ORG_O20_ERR_4,
    ORG_O20_NTE_8,
    ORG_O20_RESPONSE_11,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORG_O20"; }
  ORG_O20* create() const { return new ORG_O20(); }

  /* Initialize object */
  void init() {
    setName("ORG_O20");
    addObject<MSH>(ORG_O20_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(ORG_O20_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(ORG_O20_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(ORG_O20_NTE_8, "NTE.8", HL7::optional, HL7::repetition_on);
    addObject<ORG_O20_RESPONSE>(ORG_O20_RESPONSE_11, "ORG_O20.RESPONSE",
				HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORG_O20_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ORG_O20_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ORG_O20_ERR_4);
  }
  NTE* getNTE_8(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORG_O20_NTE_8);
  }
  ORG_O20_RESPONSE* getRESPONSE(size_t index = 0) {
    return (ORG_O20_RESPONSE*)this->getObjectSafe(index, ORG_O20_RESPONSE_11);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_8(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_NTE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRESPONSE(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_RESPONSE_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORG_O20_ */
} /* namespace HL7_24 */
#endif /*  __ORG_O20__24_H__ */
