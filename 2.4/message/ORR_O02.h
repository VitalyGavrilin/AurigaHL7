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


#ifndef __ORR_O02__24_H__
#define __ORR_O02__24_H__

#include "../../common/Util.h"
#include "../segment/CTI.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/ODS.h"
#include "../segment/ODT.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/RQ1.h"
#include "../segment/RQD.h"
#include "../segment/RXO.h"

namespace HL7_24 {

/* Internal structures/groups */
struct ORR_O02_PATIENT;      /* PATIENT */
struct ORR_O02_ORDER_DETAIL; /* ORDER_DETAIL */
struct ORR_O02_ORDER;	/* ORDER */
struct ORR_O02_RESPONSE;     /* RESPONSE */

/* PATIENT */
struct ORR_O02_PATIENT : public HL7Group {
  ORR_O02_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ORR_O02_PID_13, ORR_O02_NTE_16, FIELD_ID_MAX };

  const char* className() const { return "ORR_O02_PATIENT"; }
  ORR_O02_PATIENT* create() const { return new ORR_O02_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORR_O02.PATIENT");
    addObject<PID>(ORR_O02_PID_13, "PID.13", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(ORR_O02_NTE_16, "NTE.16", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PID* getPID_13(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORR_O02_PID_13);
  }
  NTE* getNTE_16(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORR_O02_NTE_16);
  }

  /* Checker list */
  bool isPID_13(size_t index = 0) {
    try {
      return this->getObject(index, ORR_O02_PID_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_16(size_t index = 0) {
    try {
      return this->getObject(index, ORR_O02_NTE_16) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORR_O02_12 */

/* ORDER_DETAIL */
struct ORR_O02_ORDER_DETAIL : public HL7Group {
  ORR_O02_ORDER_DETAIL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORR_O02_OBR_23,
    ORR_O02_RQD_25,
    ORR_O02_RQ1_27,
    ORR_O02_RXO_29,
    ORR_O02_ODS_31,
    ORR_O02_ODT_33,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORR_O02_ORDER_DETAIL"; }
  ORR_O02_ORDER_DETAIL* create() const { return new ORR_O02_ORDER_DETAIL(); }

  /* Initialize object */
  void init() {
    setName("ORR_O02.ORDER_DETAIL");
    addObject<OBR>(ORR_O02_OBR_23, "OBR.23", HL7::initialized,
		   HL7::repetition_off);
    addObject<RQD>(ORR_O02_RQD_25, "RQD.25", HL7::initialized,
		   HL7::repetition_off);
    addObject<RQ1>(ORR_O02_RQ1_27, "RQ1.27", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXO>(ORR_O02_RXO_29, "RXO.29", HL7::initialized,
		   HL7::repetition_off);
    addObject<ODS>(ORR_O02_ODS_31, "ODS.31", HL7::initialized,
		   HL7::repetition_off);
    addObject<ODT>(ORR_O02_ODT_33, "ODT.33", HL7::initialized,
		   HL7::repetition_off);
  }

  /* Getters list */
  OBR* getOBR_23(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, ORR_O02_OBR_23);
  }
  RQD* getRQD_25(size_t index = 0) {
    return (RQD*)this->getObjectSafe(index, ORR_O02_RQD_25);
  }
  RQ1* getRQ1_27(size_t index = 0) {
    return (RQ1*)this->getObjectSafe(index, ORR_O02_RQ1_27);
  }
  RXO* getRXO_29(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, ORR_O02_RXO_29);
  }
  ODS* getODS_31(size_t index = 0) {
    return (ODS*)this->getObjectSafe(index, ORR_O02_ODS_31);
  }
  ODT* getODT_33(size_t index = 0) {
    return (ODT*)this->getObjectSafe(index, ORR_O02_ODT_33);
  }

  /* Checker list */
  bool isOBR_23(size_t index = 0) {
    try {
      return this->getObject(index, ORR_O02_OBR_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRQD_25(size_t index = 0) {
    try {
      return this->getObject(index, ORR_O02_RQD_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRQ1_27(size_t index = 0) {
    try {
      return this->getObject(index, ORR_O02_RQ1_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_29(size_t index = 0) {
    try {
      return this->getObject(index, ORR_O02_RXO_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODS_31(size_t index = 0) {
    try {
      return this->getObject(index, ORR_O02_ODS_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODT_33(size_t index = 0) {
    try {
      return this->getObject(index, ORR_O02_ODT_33) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORR_O02_22 */

/* ORDER */
struct ORR_O02_ORDER : public HL7Group {
  ORR_O02_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORR_O02_ORC_21,
    ORR_O02_ORDER_DETAIL_22,
    ORR_O02_NTE_36,
    ORR_O02_CTI_37,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORR_O02_ORDER"; }
  ORR_O02_ORDER* create() const { return new ORR_O02_ORDER(); }

  /* Initialize object */
  void init() {
    setName("ORR_O02.ORDER");
    addObject<ORC>(ORR_O02_ORC_21, "ORC.21", HL7::initialized,
		   HL7::repetition_off);
    addObject<ORR_O02_ORDER_DETAIL>(ORR_O02_ORDER_DETAIL_22,
				    "ORR_O02.ORDER_DETAIL", HL7::initialized,
				    HL7::repetition_off);
    addObject<NTE>(ORR_O02_NTE_36, "NTE.36", HL7::optional, HL7::repetition_on);
    addObject<CTI>(ORR_O02_CTI_37, "CTI.37", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_21(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORR_O02_ORC_21);
  }
  ORR_O02_ORDER_DETAIL* getORDER_DETAIL(size_t index = 0) {
    return (ORR_O02_ORDER_DETAIL*)this->getObjectSafe(index,
						      ORR_O02_ORDER_DETAIL_22);
  }
  NTE* getNTE_36(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORR_O02_NTE_36);
  }
  CTI* getCTI_37(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, ORR_O02_CTI_37);
  }

  /* Checker list */
  bool isORC_21(size_t index = 0) {
    try {
      return this->getObject(index, ORR_O02_ORC_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_DETAIL(size_t index = 0) {
    try {
      return this->getObject(index, ORR_O02_ORDER_DETAIL_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_36(size_t index = 0) {
    try {
      return this->getObject(index, ORR_O02_NTE_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_37(size_t index = 0) {
    try {
      return this->getObject(index, ORR_O02_CTI_37) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORR_O02_20 */

/* RESPONSE */
struct ORR_O02_RESPONSE : public HL7Group {
  ORR_O02_RESPONSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ORR_O02_PATIENT_12, ORR_O02_ORDER_20, FIELD_ID_MAX };

  const char* className() const { return "ORR_O02_RESPONSE"; }
  ORR_O02_RESPONSE* create() const { return new ORR_O02_RESPONSE(); }

  /* Initialize object */
  void init() {
    setName("ORR_O02.RESPONSE");
    addObject<ORR_O02_PATIENT>(ORR_O02_PATIENT_12, "ORR_O02.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<ORR_O02_ORDER>(ORR_O02_ORDER_20, "ORR_O02.ORDER",
			     HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  ORR_O02_PATIENT* getPATIENT(size_t index = 0) {
    return (ORR_O02_PATIENT*)this->getObjectSafe(index, ORR_O02_PATIENT_12);
  }
  ORR_O02_ORDER* getORDER(size_t index = 0) {
    return (ORR_O02_ORDER*)this->getObjectSafe(index, ORR_O02_ORDER_20);
  }

  /* Checker list */
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, ORR_O02_PATIENT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, ORR_O02_ORDER_20) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORR_O02_11 */

/* ORR_O02 */
struct ORR_O02 : public HL7Message {
  ORR_O02() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORR_O02_MSH_1,
    ORR_O02_MSA_2,
    ORR_O02_ERR_4,
    ORR_O02_NTE_8,
    ORR_O02_RESPONSE_11,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORR_O02"; }
  ORR_O02* create() const { return new ORR_O02(); }

  /* Initialize object */
  void init() {
    setName("ORR_O02");
    addObject<MSH>(ORR_O02_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(ORR_O02_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(ORR_O02_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(ORR_O02_NTE_8, "NTE.8", HL7::optional, HL7::repetition_on);
    addObject<ORR_O02_RESPONSE>(ORR_O02_RESPONSE_11, "ORR_O02.RESPONSE",
				HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORR_O02_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ORR_O02_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ORR_O02_ERR_4);
  }
  NTE* getNTE_8(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORR_O02_NTE_8);
  }
  ORR_O02_RESPONSE* getRESPONSE(size_t index = 0) {
    return (ORR_O02_RESPONSE*)this->getObjectSafe(index, ORR_O02_RESPONSE_11);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORR_O02_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, ORR_O02_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, ORR_O02_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_8(size_t index = 0) {
    try {
      return this->getObject(index, ORR_O02_NTE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRESPONSE(size_t index = 0) {
    try {
      return this->getObject(index, ORR_O02_RESPONSE_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORR_O02_ */
} /* namespace HL7_24 */
#endif /*  __ORR_O02__24_H__ */
