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


#ifndef __ORP_O10__24_H__
#define __ORP_O10__24_H__

#include "../../common/Util.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/RXC.h"
#include "../segment/RXO.h"
#include "../segment/RXR.h"

namespace HL7_24 {

/* Internal structures/groups */
struct ORP_O10_PATIENT;      /* PATIENT */
struct ORP_O10_ORDER_DETAIL; /* ORDER_DETAIL */
struct ORP_O10_ORDER;	/* ORDER */
struct ORP_O10_RESPONSE;     /* RESPONSE */

/* PATIENT */
struct ORP_O10_PATIENT : public HL7Group {
  ORP_O10_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ORP_O10_PID_13, ORP_O10_NTE_16, FIELD_ID_MAX };

  const char* className() const { return "ORP_O10_PATIENT"; }
  ORP_O10_PATIENT* create() const { return new ORP_O10_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORP_O10.PATIENT");
    addObject<PID>(ORP_O10_PID_13, "PID.13", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(ORP_O10_NTE_16, "NTE.16", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PID* getPID_13(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORP_O10_PID_13);
  }
  NTE* getNTE_16(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORP_O10_NTE_16);
  }

  /* Checker list */
  bool isPID_13(size_t index = 0) {
    try {
      return this->getObject(index, ORP_O10_PID_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_16(size_t index = 0) {
    try {
      return this->getObject(index, ORP_O10_NTE_16) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORP_O10_12 */

/* ORDER_DETAIL */
struct ORP_O10_ORDER_DETAIL : public HL7Group {
  ORP_O10_ORDER_DETAIL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORP_O10_RXO_23,
    ORP_O10_NTE_26,
    ORP_O10_RXR_30,
    ORP_O10_RXC_34,
    ORP_O10_NTE_39,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORP_O10_ORDER_DETAIL"; }
  ORP_O10_ORDER_DETAIL* create() const { return new ORP_O10_ORDER_DETAIL(); }

  /* Initialize object */
  void init() {
    setName("ORP_O10.ORDER_DETAIL");
    addObject<RXO>(ORP_O10_RXO_23, "RXO.23", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(ORP_O10_NTE_26, "NTE.26", HL7::optional, HL7::repetition_on);
    addObject<RXR>(ORP_O10_RXR_30, "RXR.30", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXC>(ORP_O10_RXC_34, "RXC.34", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORP_O10_NTE_39, "NTE.39", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  RXO* getRXO_23(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, ORP_O10_RXO_23);
  }
  NTE* getNTE_26(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORP_O10_NTE_26);
  }
  RXR* getRXR_30(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, ORP_O10_RXR_30);
  }
  RXC* getRXC_34(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, ORP_O10_RXC_34);
  }
  NTE* getNTE_39(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORP_O10_NTE_39);
  }

  /* Checker list */
  bool isRXO_23(size_t index = 0) {
    try {
      return this->getObject(index, ORP_O10_RXO_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_26(size_t index = 0) {
    try {
      return this->getObject(index, ORP_O10_NTE_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_30(size_t index = 0) {
    try {
      return this->getObject(index, ORP_O10_RXR_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_34(size_t index = 0) {
    try {
      return this->getObject(index, ORP_O10_RXC_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_39(size_t index = 0) {
    try {
      return this->getObject(index, ORP_O10_NTE_39) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORP_O10_22 */

/* ORDER */
struct ORP_O10_ORDER : public HL7Group {
  ORP_O10_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ORP_O10_ORC_21, ORP_O10_ORDER_DETAIL_22, FIELD_ID_MAX };

  const char* className() const { return "ORP_O10_ORDER"; }
  ORP_O10_ORDER* create() const { return new ORP_O10_ORDER(); }

  /* Initialize object */
  void init() {
    setName("ORP_O10.ORDER");
    addObject<ORC>(ORP_O10_ORC_21, "ORC.21", HL7::initialized,
		   HL7::repetition_off);
    addObject<ORP_O10_ORDER_DETAIL>(ORP_O10_ORDER_DETAIL_22,
				    "ORP_O10.ORDER_DETAIL", HL7::optional,
				    HL7::repetition_off);
  }

  /* Getters list */
  ORC* getORC_21(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORP_O10_ORC_21);
  }
  ORP_O10_ORDER_DETAIL* getORDER_DETAIL(size_t index = 0) {
    return (ORP_O10_ORDER_DETAIL*)this->getObjectSafe(index,
						      ORP_O10_ORDER_DETAIL_22);
  }

  /* Checker list */
  bool isORC_21(size_t index = 0) {
    try {
      return this->getObject(index, ORP_O10_ORC_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_DETAIL(size_t index = 0) {
    try {
      return this->getObject(index, ORP_O10_ORDER_DETAIL_22) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORP_O10_20 */

/* RESPONSE */
struct ORP_O10_RESPONSE : public HL7Group {
  ORP_O10_RESPONSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ORP_O10_PATIENT_12, ORP_O10_ORDER_20, FIELD_ID_MAX };

  const char* className() const { return "ORP_O10_RESPONSE"; }
  ORP_O10_RESPONSE* create() const { return new ORP_O10_RESPONSE(); }

  /* Initialize object */
  void init() {
    setName("ORP_O10.RESPONSE");
    addObject<ORP_O10_PATIENT>(ORP_O10_PATIENT_12, "ORP_O10.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<ORP_O10_ORDER>(ORP_O10_ORDER_20, "ORP_O10.ORDER",
			     HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  ORP_O10_PATIENT* getPATIENT(size_t index = 0) {
    return (ORP_O10_PATIENT*)this->getObjectSafe(index, ORP_O10_PATIENT_12);
  }
  ORP_O10_ORDER* getORDER(size_t index = 0) {
    return (ORP_O10_ORDER*)this->getObjectSafe(index, ORP_O10_ORDER_20);
  }

  /* Checker list */
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, ORP_O10_PATIENT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, ORP_O10_ORDER_20) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORP_O10_11 */

/* ORP_O10 */
struct ORP_O10 : public HL7Message {
  ORP_O10() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORP_O10_MSH_1,
    ORP_O10_MSA_2,
    ORP_O10_ERR_4,
    ORP_O10_NTE_8,
    ORP_O10_RESPONSE_11,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORP_O10"; }
  ORP_O10* create() const { return new ORP_O10(); }

  /* Initialize object */
  void init() {
    setName("ORP_O10");
    addObject<MSH>(ORP_O10_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(ORP_O10_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(ORP_O10_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(ORP_O10_NTE_8, "NTE.8", HL7::optional, HL7::repetition_on);
    addObject<ORP_O10_RESPONSE>(ORP_O10_RESPONSE_11, "ORP_O10.RESPONSE",
				HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORP_O10_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ORP_O10_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ORP_O10_ERR_4);
  }
  NTE* getNTE_8(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORP_O10_NTE_8);
  }
  ORP_O10_RESPONSE* getRESPONSE(size_t index = 0) {
    return (ORP_O10_RESPONSE*)this->getObjectSafe(index, ORP_O10_RESPONSE_11);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORP_O10_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, ORP_O10_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, ORP_O10_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_8(size_t index = 0) {
    try {
      return this->getObject(index, ORP_O10_NTE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRESPONSE(size_t index = 0) {
    try {
      return this->getObject(index, ORP_O10_RESPONSE_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORP_O10_ */
} /* namespace HL7_24 */
#endif /*  __ORP_O10__24_H__ */
