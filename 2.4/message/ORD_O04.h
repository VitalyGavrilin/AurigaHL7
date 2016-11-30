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


#ifndef __ORD_O04__24_H__
#define __ORD_O04__24_H__

#include "../../common/Util.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/ODS.h"
#include "../segment/ODT.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"

namespace HL7_24 {

/* Internal structures/groups */
struct ORD_O04_PATIENT;    /* PATIENT */
struct ORD_O04_ORDER_DIET; /* ORDER_DIET */
struct ORD_O04_ORDER_TRAY; /* ORDER_TRAY */
struct ORD_O04_RESPONSE;   /* RESPONSE */

/* PATIENT */
struct ORD_O04_PATIENT : public HL7Group {
  ORD_O04_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ORD_O04_PID_13, ORD_O04_NTE_16, FIELD_ID_MAX };

  const char* className() const { return "ORD_O04_PATIENT"; }
  ORD_O04_PATIENT* create() const { return new ORD_O04_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORD_O04.PATIENT");
    addObject<PID>(ORD_O04_PID_13, "PID.13", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(ORD_O04_NTE_16, "NTE.16", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PID* getPID_13(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORD_O04_PID_13);
  }
  NTE* getNTE_16(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORD_O04_NTE_16);
  }

  /* Checker list */
  bool isPID_13(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_PID_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_16(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_NTE_16) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORD_O04_12 */

/* ORDER_DIET */
struct ORD_O04_ORDER_DIET : public HL7Group {
  ORD_O04_ORDER_DIET() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORD_O04_ORC_21,
    ORD_O04_ODS_24,
    ORD_O04_NTE_29,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORD_O04_ORDER_DIET"; }
  ORD_O04_ORDER_DIET* create() const { return new ORD_O04_ORDER_DIET(); }

  /* Initialize object */
  void init() {
    setName("ORD_O04.ORDER_DIET");
    addObject<ORC>(ORD_O04_ORC_21, "ORC.21", HL7::initialized,
		   HL7::repetition_off);
    addObject<ODS>(ORD_O04_ODS_24, "ODS.24", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORD_O04_NTE_29, "NTE.29", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_21(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORD_O04_ORC_21);
  }
  ODS* getODS_24(size_t index = 0) {
    return (ODS*)this->getObjectSafe(index, ORD_O04_ODS_24);
  }
  NTE* getNTE_29(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORD_O04_NTE_29);
  }

  /* Checker list */
  bool isORC_21(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORC_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODS_24(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ODS_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_29(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_NTE_29) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORD_O04_20 */

/* ORDER_TRAY */
struct ORD_O04_ORDER_TRAY : public HL7Group {
  ORD_O04_ORDER_TRAY() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORD_O04_ORC_35,
    ORD_O04_ODT_38,
    ORD_O04_NTE_43,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORD_O04_ORDER_TRAY"; }
  ORD_O04_ORDER_TRAY* create() const { return new ORD_O04_ORDER_TRAY(); }

  /* Initialize object */
  void init() {
    setName("ORD_O04.ORDER_TRAY");
    addObject<ORC>(ORD_O04_ORC_35, "ORC.35", HL7::initialized,
		   HL7::repetition_off);
    addObject<ODT>(ORD_O04_ODT_38, "ODT.38", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORD_O04_NTE_43, "NTE.43", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_35(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORD_O04_ORC_35);
  }
  ODT* getODT_38(size_t index = 0) {
    return (ODT*)this->getObjectSafe(index, ORD_O04_ODT_38);
  }
  NTE* getNTE_43(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORD_O04_NTE_43);
  }

  /* Checker list */
  bool isORC_35(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORC_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODT_38(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ODT_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_43(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_NTE_43) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORD_O04_33 */

/* RESPONSE */
struct ORD_O04_RESPONSE : public HL7Group {
  ORD_O04_RESPONSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORD_O04_PATIENT_12,
    ORD_O04_ORDER_DIET_20,
    ORD_O04_ORDER_TRAY_33,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORD_O04_RESPONSE"; }
  ORD_O04_RESPONSE* create() const { return new ORD_O04_RESPONSE(); }

  /* Initialize object */
  void init() {
    setName("ORD_O04.RESPONSE");
    addObject<ORD_O04_PATIENT>(ORD_O04_PATIENT_12, "ORD_O04.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<ORD_O04_ORDER_DIET>(ORD_O04_ORDER_DIET_20, "ORD_O04.ORDER_DIET",
				  HL7::initialized, HL7::repetition_on);
    addObject<ORD_O04_ORDER_TRAY>(ORD_O04_ORDER_TRAY_33, "ORD_O04.ORDER_TRAY",
				  HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ORD_O04_PATIENT* getPATIENT(size_t index = 0) {
    return (ORD_O04_PATIENT*)this->getObjectSafe(index, ORD_O04_PATIENT_12);
  }
  ORD_O04_ORDER_DIET* getORDER_DIET(size_t index = 0) {
    return (ORD_O04_ORDER_DIET*)this->getObjectSafe(index,
						    ORD_O04_ORDER_DIET_20);
  }
  ORD_O04_ORDER_TRAY* getORDER_TRAY(size_t index = 0) {
    return (ORD_O04_ORDER_TRAY*)this->getObjectSafe(index,
						    ORD_O04_ORDER_TRAY_33);
  }

  /* Checker list */
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_PATIENT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_DIET(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORDER_DIET_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER_TRAY(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORDER_TRAY_33) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORD_O04_11 */

/* ORD_O04 */
struct ORD_O04 : public HL7Message {
  ORD_O04() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORD_O04_MSH_1,
    ORD_O04_MSA_2,
    ORD_O04_ERR_4,
    ORD_O04_NTE_8,
    ORD_O04_RESPONSE_11,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORD_O04"; }
  ORD_O04* create() const { return new ORD_O04(); }

  /* Initialize object */
  void init() {
    setName("ORD_O04");
    addObject<MSH>(ORD_O04_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(ORD_O04_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(ORD_O04_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(ORD_O04_NTE_8, "NTE.8", HL7::optional, HL7::repetition_on);
    addObject<ORD_O04_RESPONSE>(ORD_O04_RESPONSE_11, "ORD_O04.RESPONSE",
				HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORD_O04_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ORD_O04_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ORD_O04_ERR_4);
  }
  NTE* getNTE_8(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORD_O04_NTE_8);
  }
  ORD_O04_RESPONSE* getRESPONSE(size_t index = 0) {
    return (ORD_O04_RESPONSE*)this->getObjectSafe(index, ORD_O04_RESPONSE_11);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_8(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_NTE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRESPONSE(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_RESPONSE_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORD_O04_ */
} /* namespace HL7_24 */
#endif /*  __ORD_O04__24_H__ */
