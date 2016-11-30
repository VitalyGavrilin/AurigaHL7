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


#ifndef __RRG_O16__24_H__
#define __RRG_O16__24_H__

#include "../../common/Util.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/RXC.h"
#include "../segment/RXG.h"
#include "../segment/RXR.h"

namespace HL7_24 {

/* Internal structures/groups */
struct RRG_O16_PATIENT;  /* PATIENT */
struct RRG_O16_GIVE;     /* GIVE */
struct RRG_O16_ORDER;    /* ORDER */
struct RRG_O16_RESPONSE; /* RESPONSE */

/* PATIENT */
struct RRG_O16_PATIENT : public HL7Group {
  RRG_O16_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RRG_O16_PID_13, RRG_O16_NTE_16, FIELD_ID_MAX };

  const char* className() const { return "RRG_O16_PATIENT"; }
  RRG_O16_PATIENT* create() const { return new RRG_O16_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("RRG_O16.PATIENT");
    addObject<PID>(RRG_O16_PID_13, "PID.13", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(RRG_O16_NTE_16, "NTE.16", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PID* getPID_13(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RRG_O16_PID_13);
  }
  NTE* getNTE_16(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RRG_O16_NTE_16);
  }

  /* Checker list */
  bool isPID_13(size_t index = 0) {
    try {
      return this->getObject(index, RRG_O16_PID_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_16(size_t index = 0) {
    try {
      return this->getObject(index, RRG_O16_NTE_16) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRG_O16_12 */

/* GIVE */
struct RRG_O16_GIVE : public HL7Group {
  RRG_O16_GIVE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RRG_O16_RXG_23,
    RRG_O16_RXR_25,
    RRG_O16_RXC_29,
    FIELD_ID_MAX
  };

  const char* className() const { return "RRG_O16_GIVE"; }
  RRG_O16_GIVE* create() const { return new RRG_O16_GIVE(); }

  /* Initialize object */
  void init() {
    setName("RRG_O16.GIVE");
    addObject<RXG>(RRG_O16_RXG_23, "RXG.23", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXR>(RRG_O16_RXR_25, "RXR.25", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXC>(RRG_O16_RXC_29, "RXC.29", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  RXG* getRXG_23(size_t index = 0) {
    return (RXG*)this->getObjectSafe(index, RRG_O16_RXG_23);
  }
  RXR* getRXR_25(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RRG_O16_RXR_25);
  }
  RXC* getRXC_29(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RRG_O16_RXC_29);
  }

  /* Checker list */
  bool isRXG_23(size_t index = 0) {
    try {
      return this->getObject(index, RRG_O16_RXG_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_25(size_t index = 0) {
    try {
      return this->getObject(index, RRG_O16_RXR_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_29(size_t index = 0) {
    try {
      return this->getObject(index, RRG_O16_RXC_29) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRG_O16_22 */

/* ORDER */
struct RRG_O16_ORDER : public HL7Group {
  RRG_O16_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RRG_O16_ORC_21, RRG_O16_GIVE_22, FIELD_ID_MAX };

  const char* className() const { return "RRG_O16_ORDER"; }
  RRG_O16_ORDER* create() const { return new RRG_O16_ORDER(); }

  /* Initialize object */
  void init() {
    setName("RRG_O16.ORDER");
    addObject<ORC>(RRG_O16_ORC_21, "ORC.21", HL7::initialized,
		   HL7::repetition_off);
    addObject<RRG_O16_GIVE>(RRG_O16_GIVE_22, "RRG_O16.GIVE", HL7::optional,
			    HL7::repetition_off);
  }

  /* Getters list */
  ORC* getORC_21(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, RRG_O16_ORC_21);
  }
  RRG_O16_GIVE* getGIVE(size_t index = 0) {
    return (RRG_O16_GIVE*)this->getObjectSafe(index, RRG_O16_GIVE_22);
  }

  /* Checker list */
  bool isORC_21(size_t index = 0) {
    try {
      return this->getObject(index, RRG_O16_ORC_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGIVE(size_t index = 0) {
    try {
      return this->getObject(index, RRG_O16_GIVE_22) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRG_O16_20 */

/* RESPONSE */
struct RRG_O16_RESPONSE : public HL7Group {
  RRG_O16_RESPONSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RRG_O16_PATIENT_12, RRG_O16_ORDER_20, FIELD_ID_MAX };

  const char* className() const { return "RRG_O16_RESPONSE"; }
  RRG_O16_RESPONSE* create() const { return new RRG_O16_RESPONSE(); }

  /* Initialize object */
  void init() {
    setName("RRG_O16.RESPONSE");
    addObject<RRG_O16_PATIENT>(RRG_O16_PATIENT_12, "RRG_O16.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<RRG_O16_ORDER>(RRG_O16_ORDER_20, "RRG_O16.ORDER",
			     HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  RRG_O16_PATIENT* getPATIENT(size_t index = 0) {
    return (RRG_O16_PATIENT*)this->getObjectSafe(index, RRG_O16_PATIENT_12);
  }
  RRG_O16_ORDER* getORDER(size_t index = 0) {
    return (RRG_O16_ORDER*)this->getObjectSafe(index, RRG_O16_ORDER_20);
  }

  /* Checker list */
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, RRG_O16_PATIENT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, RRG_O16_ORDER_20) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRG_O16_11 */

/* RRG_O16 */
struct RRG_O16 : public HL7Message {
  RRG_O16() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RRG_O16_MSH_1,
    RRG_O16_MSA_2,
    RRG_O16_ERR_4,
    RRG_O16_NTE_8,
    RRG_O16_RESPONSE_11,
    FIELD_ID_MAX
  };

  const char* className() const { return "RRG_O16"; }
  RRG_O16* create() const { return new RRG_O16(); }

  /* Initialize object */
  void init() {
    setName("RRG_O16");
    addObject<MSH>(RRG_O16_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(RRG_O16_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(RRG_O16_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(RRG_O16_NTE_8, "NTE.8", HL7::optional, HL7::repetition_on);
    addObject<RRG_O16_RESPONSE>(RRG_O16_RESPONSE_11, "RRG_O16.RESPONSE",
				HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RRG_O16_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RRG_O16_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RRG_O16_ERR_4);
  }
  NTE* getNTE_8(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RRG_O16_NTE_8);
  }
  RRG_O16_RESPONSE* getRESPONSE(size_t index = 0) {
    return (RRG_O16_RESPONSE*)this->getObjectSafe(index, RRG_O16_RESPONSE_11);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RRG_O16_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, RRG_O16_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, RRG_O16_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_8(size_t index = 0) {
    try {
      return this->getObject(index, RRG_O16_NTE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRESPONSE(size_t index = 0) {
    try {
      return this->getObject(index, RRG_O16_RESPONSE_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRG_O16_ */
} /* namespace HL7_24 */
#endif /*  __RRG_O16__24_H__ */
