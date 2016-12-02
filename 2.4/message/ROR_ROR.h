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


#ifndef __ROR_ROR__24_H__
#define __ROR_ROR__24_H__

#include "../../common/Util.h"
#include "../segment/DSC.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/QRD.h"
#include "../segment/QRF.h"
#include "../segment/RXC.h"
#include "../segment/RXO.h"
#include "../segment/RXR.h"

namespace HL7_24 {

/* Internal structures/groups */
struct ROR_ROR_PATIENT;    /* PATIENT */
struct ROR_ROR_ORDER;      /* ORDER */
struct ROR_ROR_DEFINITION; /* DEFINITION */

/* PATIENT */
struct ROR_ROR_PATIENT : public HL7Group {
  ROR_ROR_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ROR_ROR_PID_12, ROR_ROR_NTE_15, FIELD_ID_MAX };

  const char* className() const { return "ROR_ROR_PATIENT"; }
  ROR_ROR_PATIENT* create() const { return new ROR_ROR_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("ROR_ROR.PATIENT");
    addObject<PID>(ROR_ROR_PID_12, "PID.12", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(ROR_ROR_NTE_15, "NTE.15", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PID* getPID_12(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ROR_ROR_PID_12);
  }
  NTE* getNTE_15(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ROR_ROR_NTE_15);
  }

  /* Checker list */
  bool isPID_12(size_t index = 0) {
    try {
      return this->getObject(index, ROR_ROR_PID_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_15(size_t index = 0) {
    try {
      return this->getObject(index, ROR_ROR_NTE_15) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ROR_ROR_11 */

/* ORDER */
struct ROR_ROR_ORDER : public HL7Group {
  ROR_ROR_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ROR_ROR_ORC_20,
    ROR_ROR_RXO_21,
    ROR_ROR_RXR_23,
    ROR_ROR_RXC_27,
    FIELD_ID_MAX
  };

  const char* className() const { return "ROR_ROR_ORDER"; }
  ROR_ROR_ORDER* create() const { return new ROR_ROR_ORDER(); }

  /* Initialize object */
  void init() {
    setName("ROR_ROR.ORDER");
    addObject<ORC>(ROR_ROR_ORC_20, "ORC.20", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXO>(ROR_ROR_RXO_21, "RXO.21", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXR>(ROR_ROR_RXR_23, "RXR.23", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXC>(ROR_ROR_RXC_27, "RXC.27", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_20(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ROR_ROR_ORC_20);
  }
  RXO* getRXO_21(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, ROR_ROR_RXO_21);
  }
  RXR* getRXR_23(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, ROR_ROR_RXR_23);
  }
  RXC* getRXC_27(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, ROR_ROR_RXC_27);
  }

  /* Checker list */
  bool isORC_20(size_t index = 0) {
    try {
      return this->getObject(index, ROR_ROR_ORC_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_21(size_t index = 0) {
    try {
      return this->getObject(index, ROR_ROR_RXO_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_23(size_t index = 0) {
    try {
      return this->getObject(index, ROR_ROR_RXR_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_27(size_t index = 0) {
    try {
      return this->getObject(index, ROR_ROR_RXC_27) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ROR_ROR_19 */

/* DEFINITION */
struct ROR_ROR_DEFINITION : public HL7Group {
  ROR_ROR_DEFINITION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ROR_ROR_QRD_7,
    ROR_ROR_QRF_9,
    ROR_ROR_PATIENT_11,
    ROR_ROR_ORDER_19,
    FIELD_ID_MAX
  };

  const char* className() const { return "ROR_ROR_DEFINITION"; }
  ROR_ROR_DEFINITION* create() const { return new ROR_ROR_DEFINITION(); }

  /* Initialize object */
  void init() {
    setName("ROR_ROR.DEFINITION");
    addObject<QRD>(ROR_ROR_QRD_7, "QRD.7", HL7::initialized,
		   HL7::repetition_off);
    addObject<QRF>(ROR_ROR_QRF_9, "QRF.9", HL7::optional, HL7::repetition_off);
    addObject<ROR_ROR_PATIENT>(ROR_ROR_PATIENT_11, "ROR_ROR.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<ROR_ROR_ORDER>(ROR_ROR_ORDER_19, "ROR_ROR.ORDER",
			     HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  QRD* getQRD_7(size_t index = 0) {
    return (QRD*)this->getObjectSafe(index, ROR_ROR_QRD_7);
  }
  QRF* getQRF_9(size_t index = 0) {
    return (QRF*)this->getObjectSafe(index, ROR_ROR_QRF_9);
  }
  ROR_ROR_PATIENT* getPATIENT(size_t index = 0) {
    return (ROR_ROR_PATIENT*)this->getObjectSafe(index, ROR_ROR_PATIENT_11);
  }
  ROR_ROR_ORDER* getORDER(size_t index = 0) {
    return (ROR_ROR_ORDER*)this->getObjectSafe(index, ROR_ROR_ORDER_19);
  }

  /* Checker list */
  bool isQRD_7(size_t index = 0) {
    try {
      return this->getObject(index, ROR_ROR_QRD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRF_9(size_t index = 0) {
    try {
      return this->getObject(index, ROR_ROR_QRF_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, ROR_ROR_PATIENT_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, ROR_ROR_ORDER_19) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ROR_ROR_6 */

/* ROR_ROR */
struct ROR_ROR : public HL7Message {
  ROR_ROR() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ROR_ROR_MSH_1,
    ROR_ROR_MSA_2,
    ROR_ROR_ERR_4,
    ROR_ROR_DEFINITION_6,
    ROR_ROR_DSC_33,
    FIELD_ID_MAX
  };

  const char* className() const { return "ROR_ROR"; }
  ROR_ROR* create() const { return new ROR_ROR(); }

  /* Initialize object */
  void init() {
    setName("ROR_ROR");
    addObject<MSH>(ROR_ROR_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(ROR_ROR_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(ROR_ROR_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<ROR_ROR_DEFINITION>(ROR_ROR_DEFINITION_6, "ROR_ROR.DEFINITION",
				  HL7::initialized, HL7::repetition_on);
    addObject<DSC>(ROR_ROR_DSC_33, "DSC.33", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ROR_ROR_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ROR_ROR_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ROR_ROR_ERR_4);
  }
  ROR_ROR_DEFINITION* getDEFINITION(size_t index = 0) {
    return (ROR_ROR_DEFINITION*)this->getObjectSafe(index,
						    ROR_ROR_DEFINITION_6);
  }
  DSC* getDSC_33(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, ROR_ROR_DSC_33);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ROR_ROR_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, ROR_ROR_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, ROR_ROR_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEFINITION(size_t index = 0) {
    try {
      return this->getObject(index, ROR_ROR_DEFINITION_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_33(size_t index = 0) {
    try {
      return this->getObject(index, ROR_ROR_DSC_33) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ROR_ROR_ */
} /* namespace HL7_24 */
#endif /*  __ROR_ROR__24_H__ */
