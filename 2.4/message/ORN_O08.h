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


#ifndef __ORN_O08__24_H__
#define __ORN_O08__24_H__

#include "../../common/Util.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/RQ1.h"
#include "../segment/RQD.h"

namespace HL7_24 {

/* Internal structures/groups */
struct ORN_O08_PATIENT;  /* PATIENT */
struct ORN_O08_ORDER;    /* ORDER */
struct ORN_O08_RESPONSE; /* RESPONSE */

/* PATIENT */
struct ORN_O08_PATIENT : public HL7Group {
  ORN_O08_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ORN_O08_PID_13, ORN_O08_NTE_16, FIELD_ID_MAX };

  const char* className() const { return "ORN_O08_PATIENT"; }
  ORN_O08_PATIENT* create() const { return new ORN_O08_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORN_O08.PATIENT");
    addObject<PID>(ORN_O08_PID_13, "PID.13", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(ORN_O08_NTE_16, "NTE.16", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PID* getPID_13(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORN_O08_PID_13);
  }
  NTE* getNTE_16(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORN_O08_NTE_16);
  }

  /* Checker list */
  bool isPID_13(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_PID_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_16(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_NTE_16) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORN_O08_12 */

/* ORDER */
struct ORN_O08_ORDER : public HL7Group {
  ORN_O08_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORN_O08_ORC_21,
    ORN_O08_RQD_22,
    ORN_O08_RQ1_24,
    ORN_O08_NTE_28,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORN_O08_ORDER"; }
  ORN_O08_ORDER* create() const { return new ORN_O08_ORDER(); }

  /* Initialize object */
  void init() {
    setName("ORN_O08.ORDER");
    addObject<ORC>(ORN_O08_ORC_21, "ORC.21", HL7::initialized,
		   HL7::repetition_off);
    addObject<RQD>(ORN_O08_RQD_22, "RQD.22", HL7::initialized,
		   HL7::repetition_off);
    addObject<RQ1>(ORN_O08_RQ1_24, "RQ1.24", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(ORN_O08_NTE_28, "NTE.28", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_21(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORN_O08_ORC_21);
  }
  RQD* getRQD_22(size_t index = 0) {
    return (RQD*)this->getObjectSafe(index, ORN_O08_RQD_22);
  }
  RQ1* getRQ1_24(size_t index = 0) {
    return (RQ1*)this->getObjectSafe(index, ORN_O08_RQ1_24);
  }
  NTE* getNTE_28(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORN_O08_NTE_28);
  }

  /* Checker list */
  bool isORC_21(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORC_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRQD_22(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_RQD_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRQ1_24(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_RQ1_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_28(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_NTE_28) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORN_O08_20 */

/* RESPONSE */
struct ORN_O08_RESPONSE : public HL7Group {
  ORN_O08_RESPONSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ORN_O08_PATIENT_12, ORN_O08_ORDER_20, FIELD_ID_MAX };

  const char* className() const { return "ORN_O08_RESPONSE"; }
  ORN_O08_RESPONSE* create() const { return new ORN_O08_RESPONSE(); }

  /* Initialize object */
  void init() {
    setName("ORN_O08.RESPONSE");
    addObject<ORN_O08_PATIENT>(ORN_O08_PATIENT_12, "ORN_O08.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<ORN_O08_ORDER>(ORN_O08_ORDER_20, "ORN_O08.ORDER",
			     HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  ORN_O08_PATIENT* getPATIENT(size_t index = 0) {
    return (ORN_O08_PATIENT*)this->getObjectSafe(index, ORN_O08_PATIENT_12);
  }
  ORN_O08_ORDER* getORDER(size_t index = 0) {
    return (ORN_O08_ORDER*)this->getObjectSafe(index, ORN_O08_ORDER_20);
  }

  /* Checker list */
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_PATIENT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORDER_20) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORN_O08_11 */

/* ORN_O08 */
struct ORN_O08 : public HL7Message {
  ORN_O08() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORN_O08_MSH_1,
    ORN_O08_MSA_2,
    ORN_O08_ERR_4,
    ORN_O08_NTE_8,
    ORN_O08_RESPONSE_11,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORN_O08"; }
  ORN_O08* create() const { return new ORN_O08(); }

  /* Initialize object */
  void init() {
    setName("ORN_O08");
    addObject<MSH>(ORN_O08_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(ORN_O08_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(ORN_O08_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(ORN_O08_NTE_8, "NTE.8", HL7::optional, HL7::repetition_on);
    addObject<ORN_O08_RESPONSE>(ORN_O08_RESPONSE_11, "ORN_O08.RESPONSE",
				HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORN_O08_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ORN_O08_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ORN_O08_ERR_4);
  }
  NTE* getNTE_8(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORN_O08_NTE_8);
  }
  ORN_O08_RESPONSE* getRESPONSE(size_t index = 0) {
    return (ORN_O08_RESPONSE*)this->getObjectSafe(index, ORN_O08_RESPONSE_11);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_8(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_NTE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRESPONSE(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_RESPONSE_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORN_O08_ */
} /* namespace HL7_24 */
#endif /*  __ORN_O08__24_H__ */
