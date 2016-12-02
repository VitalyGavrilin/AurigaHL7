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


#ifndef __RRD_O14__24_H__
#define __RRD_O14__24_H__

#include "../../common/Util.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/RXC.h"
#include "../segment/RXD.h"
#include "../segment/RXR.h"

namespace HL7_24 {

/* Internal structures/groups */
struct RRD_O14_PATIENT;  /* PATIENT */
struct RRD_O14_DISPENSE; /* DISPENSE */
struct RRD_O14_ORDER;    /* ORDER */
struct RRD_O14_RESPONSE; /* RESPONSE */

/* PATIENT */
struct RRD_O14_PATIENT : public HL7Group {
  RRD_O14_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RRD_O14_PID_13, RRD_O14_NTE_16, FIELD_ID_MAX };

  const char* className() const { return "RRD_O14_PATIENT"; }
  RRD_O14_PATIENT* create() const { return new RRD_O14_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("RRD_O14.PATIENT");
    addObject<PID>(RRD_O14_PID_13, "PID.13", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(RRD_O14_NTE_16, "NTE.16", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PID* getPID_13(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RRD_O14_PID_13);
  }
  NTE* getNTE_16(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RRD_O14_NTE_16);
  }

  /* Checker list */
  bool isPID_13(size_t index = 0) {
    try {
      return this->getObject(index, RRD_O14_PID_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_16(size_t index = 0) {
    try {
      return this->getObject(index, RRD_O14_NTE_16) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRD_O14_12 */

/* DISPENSE */
struct RRD_O14_DISPENSE : public HL7Group {
  RRD_O14_DISPENSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RRD_O14_RXD_23,
    RRD_O14_RXR_25,
    RRD_O14_RXC_29,
    FIELD_ID_MAX
  };

  const char* className() const { return "RRD_O14_DISPENSE"; }
  RRD_O14_DISPENSE* create() const { return new RRD_O14_DISPENSE(); }

  /* Initialize object */
  void init() {
    setName("RRD_O14.DISPENSE");
    addObject<RXD>(RRD_O14_RXD_23, "RXD.23", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXR>(RRD_O14_RXR_25, "RXR.25", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXC>(RRD_O14_RXC_29, "RXC.29", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  RXD* getRXD_23(size_t index = 0) {
    return (RXD*)this->getObjectSafe(index, RRD_O14_RXD_23);
  }
  RXR* getRXR_25(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RRD_O14_RXR_25);
  }
  RXC* getRXC_29(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RRD_O14_RXC_29);
  }

  /* Checker list */
  bool isRXD_23(size_t index = 0) {
    try {
      return this->getObject(index, RRD_O14_RXD_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_25(size_t index = 0) {
    try {
      return this->getObject(index, RRD_O14_RXR_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_29(size_t index = 0) {
    try {
      return this->getObject(index, RRD_O14_RXC_29) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRD_O14_22 */

/* ORDER */
struct RRD_O14_ORDER : public HL7Group {
  RRD_O14_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RRD_O14_ORC_21, RRD_O14_DISPENSE_22, FIELD_ID_MAX };

  const char* className() const { return "RRD_O14_ORDER"; }
  RRD_O14_ORDER* create() const { return new RRD_O14_ORDER(); }

  /* Initialize object */
  void init() {
    setName("RRD_O14.ORDER");
    addObject<ORC>(RRD_O14_ORC_21, "ORC.21", HL7::initialized,
		   HL7::repetition_off);
    addObject<RRD_O14_DISPENSE>(RRD_O14_DISPENSE_22, "RRD_O14.DISPENSE",
				HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  ORC* getORC_21(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, RRD_O14_ORC_21);
  }
  RRD_O14_DISPENSE* getDISPENSE(size_t index = 0) {
    return (RRD_O14_DISPENSE*)this->getObjectSafe(index, RRD_O14_DISPENSE_22);
  }

  /* Checker list */
  bool isORC_21(size_t index = 0) {
    try {
      return this->getObject(index, RRD_O14_ORC_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDISPENSE(size_t index = 0) {
    try {
      return this->getObject(index, RRD_O14_DISPENSE_22) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRD_O14_20 */

/* RESPONSE */
struct RRD_O14_RESPONSE : public HL7Group {
  RRD_O14_RESPONSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RRD_O14_PATIENT_12, RRD_O14_ORDER_20, FIELD_ID_MAX };

  const char* className() const { return "RRD_O14_RESPONSE"; }
  RRD_O14_RESPONSE* create() const { return new RRD_O14_RESPONSE(); }

  /* Initialize object */
  void init() {
    setName("RRD_O14.RESPONSE");
    addObject<RRD_O14_PATIENT>(RRD_O14_PATIENT_12, "RRD_O14.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<RRD_O14_ORDER>(RRD_O14_ORDER_20, "RRD_O14.ORDER",
			     HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  RRD_O14_PATIENT* getPATIENT(size_t index = 0) {
    return (RRD_O14_PATIENT*)this->getObjectSafe(index, RRD_O14_PATIENT_12);
  }
  RRD_O14_ORDER* getORDER(size_t index = 0) {
    return (RRD_O14_ORDER*)this->getObjectSafe(index, RRD_O14_ORDER_20);
  }

  /* Checker list */
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, RRD_O14_PATIENT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, RRD_O14_ORDER_20) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRD_O14_11 */

/* RRD_O14 */
struct RRD_O14 : public HL7Message {
  RRD_O14() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RRD_O14_MSH_1,
    RRD_O14_MSA_2,
    RRD_O14_ERR_4,
    RRD_O14_NTE_8,
    RRD_O14_RESPONSE_11,
    FIELD_ID_MAX
  };

  const char* className() const { return "RRD_O14"; }
  RRD_O14* create() const { return new RRD_O14(); }

  /* Initialize object */
  void init() {
    setName("RRD_O14");
    addObject<MSH>(RRD_O14_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(RRD_O14_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(RRD_O14_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(RRD_O14_NTE_8, "NTE.8", HL7::optional, HL7::repetition_on);
    addObject<RRD_O14_RESPONSE>(RRD_O14_RESPONSE_11, "RRD_O14.RESPONSE",
				HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RRD_O14_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RRD_O14_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RRD_O14_ERR_4);
  }
  NTE* getNTE_8(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RRD_O14_NTE_8);
  }
  RRD_O14_RESPONSE* getRESPONSE(size_t index = 0) {
    return (RRD_O14_RESPONSE*)this->getObjectSafe(index, RRD_O14_RESPONSE_11);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RRD_O14_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, RRD_O14_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, RRD_O14_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_8(size_t index = 0) {
    try {
      return this->getObject(index, RRD_O14_NTE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRESPONSE(size_t index = 0) {
    try {
      return this->getObject(index, RRD_O14_RESPONSE_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RRD_O14_ */
} /* namespace HL7_24 */
#endif /*  __RRD_O14__24_H__ */
