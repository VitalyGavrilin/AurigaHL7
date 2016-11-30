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


#ifndef __ORS_O06__24_H__
#define __ORS_O06__24_H__

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
struct ORS_O06_PATIENT; /* PATIENT */
struct ORS_O06_ORDER;   /* ORDER */
struct ORS_O06_RSPONSE; /* RSPONSE */

/* PATIENT */
struct ORS_O06_PATIENT : public HL7Group {
  ORS_O06_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ORS_O06_PID_13, ORS_O06_NTE_16, FIELD_ID_MAX };

  const char* className() const { return "ORS_O06_PATIENT"; }
  ORS_O06_PATIENT* create() const { return new ORS_O06_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORS_O06.PATIENT");
    addObject<PID>(ORS_O06_PID_13, "PID.13", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(ORS_O06_NTE_16, "NTE.16", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PID* getPID_13(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORS_O06_PID_13);
  }
  NTE* getNTE_16(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORS_O06_NTE_16);
  }

  /* Checker list */
  bool isPID_13(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_PID_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_16(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_NTE_16) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORS_O06_12 */

/* ORDER */
struct ORS_O06_ORDER : public HL7Group {
  ORS_O06_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORS_O06_ORC_21,
    ORS_O06_RQD_22,
    ORS_O06_RQ1_24,
    ORS_O06_NTE_28,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORS_O06_ORDER"; }
  ORS_O06_ORDER* create() const { return new ORS_O06_ORDER(); }

  /* Initialize object */
  void init() {
    setName("ORS_O06.ORDER");
    addObject<ORC>(ORS_O06_ORC_21, "ORC.21", HL7::initialized,
		   HL7::repetition_off);
    addObject<RQD>(ORS_O06_RQD_22, "RQD.22", HL7::initialized,
		   HL7::repetition_off);
    addObject<RQ1>(ORS_O06_RQ1_24, "RQ1.24", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(ORS_O06_NTE_28, "NTE.28", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_21(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORS_O06_ORC_21);
  }
  RQD* getRQD_22(size_t index = 0) {
    return (RQD*)this->getObjectSafe(index, ORS_O06_RQD_22);
  }
  RQ1* getRQ1_24(size_t index = 0) {
    return (RQ1*)this->getObjectSafe(index, ORS_O06_RQ1_24);
  }
  NTE* getNTE_28(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORS_O06_NTE_28);
  }

  /* Checker list */
  bool isORC_21(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_ORC_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRQD_22(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_RQD_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRQ1_24(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_RQ1_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_28(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_NTE_28) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORS_O06_20 */

/* RSPONSE */
struct ORS_O06_RSPONSE : public HL7Group {
  ORS_O06_RSPONSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ORS_O06_PATIENT_12, ORS_O06_ORDER_20, FIELD_ID_MAX };

  const char* className() const { return "ORS_O06_RSPONSE"; }
  ORS_O06_RSPONSE* create() const { return new ORS_O06_RSPONSE(); }

  /* Initialize object */
  void init() {
    setName("ORS_O06.RSPONSE");
    addObject<ORS_O06_PATIENT>(ORS_O06_PATIENT_12, "ORS_O06.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<ORS_O06_ORDER>(ORS_O06_ORDER_20, "ORS_O06.ORDER",
			     HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  ORS_O06_PATIENT* getPATIENT(size_t index = 0) {
    return (ORS_O06_PATIENT*)this->getObjectSafe(index, ORS_O06_PATIENT_12);
  }
  ORS_O06_ORDER* getORDER(size_t index = 0) {
    return (ORS_O06_ORDER*)this->getObjectSafe(index, ORS_O06_ORDER_20);
  }

  /* Checker list */
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_PATIENT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_ORDER_20) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORS_O06_11 */

/* ORS_O06 */
struct ORS_O06 : public HL7Message {
  ORS_O06() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORS_O06_MSH_1,
    ORS_O06_MSA_2,
    ORS_O06_ERR_4,
    ORS_O06_NTE_8,
    ORS_O06_RSPONSE_11,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORS_O06"; }
  ORS_O06* create() const { return new ORS_O06(); }

  /* Initialize object */
  void init() {
    setName("ORS_O06");
    addObject<MSH>(ORS_O06_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(ORS_O06_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(ORS_O06_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(ORS_O06_NTE_8, "NTE.8", HL7::optional, HL7::repetition_on);
    addObject<ORS_O06_RSPONSE>(ORS_O06_RSPONSE_11, "ORS_O06.RSPONSE",
			       HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORS_O06_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ORS_O06_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ORS_O06_ERR_4);
  }
  NTE* getNTE_8(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORS_O06_NTE_8);
  }
  ORS_O06_RSPONSE* getRSPONSE(size_t index = 0) {
    return (ORS_O06_RSPONSE*)this->getObjectSafe(index, ORS_O06_RSPONSE_11);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_8(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_NTE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRSPONSE(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_RSPONSE_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORS_O06_ */
} /* namespace HL7_24 */
#endif /*  __ORS_O06__24_H__ */
