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


#ifndef __RRE_O12__24_H__
#define __RRE_O12__24_H__

#include "../../common/Util.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/RXC.h"
#include "../segment/RXE.h"
#include "../segment/RXR.h"

namespace HL7_24 {

/* Internal structures/groups */
struct RRE_O12_PATIENT;  /* PATIENT */
struct RRE_O12_ENCODING; /* ENCODING */
struct RRE_O12_ORDER;    /* ORDER */
struct RRE_O12_RESPONSE; /* RESPONSE */

/* PATIENT */
struct RRE_O12_PATIENT : public HL7Group {
  RRE_O12_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RRE_O12_PID_13, RRE_O12_NTE_16, FIELD_ID_MAX };

  const char* className() const { return "RRE_O12_PATIENT"; }
  RRE_O12_PATIENT* create() const { return new RRE_O12_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("RRE_O12.PATIENT");
    addObject<PID>(RRE_O12_PID_13, "PID.13", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(RRE_O12_NTE_16, "NTE.16", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PID* getPID_13(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RRE_O12_PID_13);
  }
  NTE* getNTE_16(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RRE_O12_NTE_16);
  }

  /* Checker list */
  bool isPID_13(size_t index = 0) {
    try {
      return this->getObject(index, RRE_O12_PID_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_16(size_t index = 0) {
    try {
      return this->getObject(index, RRE_O12_NTE_16) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRE_O12_12 */

/* ENCODING */
struct RRE_O12_ENCODING : public HL7Group {
  RRE_O12_ENCODING() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RRE_O12_RXE_23,
    RRE_O12_RXR_25,
    RRE_O12_RXC_29,
    FIELD_ID_MAX
  };

  const char* className() const { return "RRE_O12_ENCODING"; }
  RRE_O12_ENCODING* create() const { return new RRE_O12_ENCODING(); }

  /* Initialize object */
  void init() {
    setName("RRE_O12.ENCODING");
    addObject<RXE>(RRE_O12_RXE_23, "RXE.23", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXR>(RRE_O12_RXR_25, "RXR.25", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXC>(RRE_O12_RXC_29, "RXC.29", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  RXE* getRXE_23(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, RRE_O12_RXE_23);
  }
  RXR* getRXR_25(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RRE_O12_RXR_25);
  }
  RXC* getRXC_29(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RRE_O12_RXC_29);
  }

  /* Checker list */
  bool isRXE_23(size_t index = 0) {
    try {
      return this->getObject(index, RRE_O12_RXE_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_25(size_t index = 0) {
    try {
      return this->getObject(index, RRE_O12_RXR_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_29(size_t index = 0) {
    try {
      return this->getObject(index, RRE_O12_RXC_29) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRE_O12_22 */

/* ORDER */
struct RRE_O12_ORDER : public HL7Group {
  RRE_O12_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RRE_O12_ORC_21, RRE_O12_ENCODING_22, FIELD_ID_MAX };

  const char* className() const { return "RRE_O12_ORDER"; }
  RRE_O12_ORDER* create() const { return new RRE_O12_ORDER(); }

  /* Initialize object */
  void init() {
    setName("RRE_O12.ORDER");
    addObject<ORC>(RRE_O12_ORC_21, "ORC.21", HL7::initialized,
		   HL7::repetition_off);
    addObject<RRE_O12_ENCODING>(RRE_O12_ENCODING_22, "RRE_O12.ENCODING",
				HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  ORC* getORC_21(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, RRE_O12_ORC_21);
  }
  RRE_O12_ENCODING* getENCODING(size_t index = 0) {
    return (RRE_O12_ENCODING*)this->getObjectSafe(index, RRE_O12_ENCODING_22);
  }

  /* Checker list */
  bool isORC_21(size_t index = 0) {
    try {
      return this->getObject(index, RRE_O12_ORC_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isENCODING(size_t index = 0) {
    try {
      return this->getObject(index, RRE_O12_ENCODING_22) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRE_O12_20 */

/* RESPONSE */
struct RRE_O12_RESPONSE : public HL7Group {
  RRE_O12_RESPONSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RRE_O12_PATIENT_12, RRE_O12_ORDER_20, FIELD_ID_MAX };

  const char* className() const { return "RRE_O12_RESPONSE"; }
  RRE_O12_RESPONSE* create() const { return new RRE_O12_RESPONSE(); }

  /* Initialize object */
  void init() {
    setName("RRE_O12.RESPONSE");
    addObject<RRE_O12_PATIENT>(RRE_O12_PATIENT_12, "RRE_O12.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<RRE_O12_ORDER>(RRE_O12_ORDER_20, "RRE_O12.ORDER",
			     HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  RRE_O12_PATIENT* getPATIENT(size_t index = 0) {
    return (RRE_O12_PATIENT*)this->getObjectSafe(index, RRE_O12_PATIENT_12);
  }
  RRE_O12_ORDER* getORDER(size_t index = 0) {
    return (RRE_O12_ORDER*)this->getObjectSafe(index, RRE_O12_ORDER_20);
  }

  /* Checker list */
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, RRE_O12_PATIENT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, RRE_O12_ORDER_20) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRE_O12_11 */

/* RRE_O12 */
struct RRE_O12 : public HL7Message {
  RRE_O12() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RRE_O12_MSH_1,
    RRE_O12_MSA_2,
    RRE_O12_ERR_4,
    RRE_O12_NTE_8,
    RRE_O12_RESPONSE_11,
    FIELD_ID_MAX
  };

  const char* className() const { return "RRE_O12"; }
  RRE_O12* create() const { return new RRE_O12(); }

  /* Initialize object */
  void init() {
    setName("RRE_O12");
    addObject<MSH>(RRE_O12_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(RRE_O12_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(RRE_O12_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(RRE_O12_NTE_8, "NTE.8", HL7::optional, HL7::repetition_on);
    addObject<RRE_O12_RESPONSE>(RRE_O12_RESPONSE_11, "RRE_O12.RESPONSE",
				HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RRE_O12_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RRE_O12_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RRE_O12_ERR_4);
  }
  NTE* getNTE_8(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RRE_O12_NTE_8);
  }
  RRE_O12_RESPONSE* getRESPONSE(size_t index = 0) {
    return (RRE_O12_RESPONSE*)this->getObjectSafe(index, RRE_O12_RESPONSE_11);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RRE_O12_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, RRE_O12_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, RRE_O12_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_8(size_t index = 0) {
    try {
      return this->getObject(index, RRE_O12_NTE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRESPONSE(size_t index = 0) {
    try {
      return this->getObject(index, RRE_O12_RESPONSE_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRE_O12_ */
} /* namespace HL7_24 */
#endif /*  __RRE_O12__24_H__ */
