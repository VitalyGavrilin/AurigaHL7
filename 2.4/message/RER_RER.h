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


#ifndef __RER_RER__24_H__
#define __RER_RER__24_H__

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
#include "../segment/RXE.h"
#include "../segment/RXR.h"

namespace HL7_24 {

/* Internal structures/groups */
struct RER_RER_PATIENT;    /* PATIENT */
struct RER_RER_ORDER;      /* ORDER */
struct RER_RER_DEFINITION; /* DEFINITION */

/* PATIENT */
struct RER_RER_PATIENT : public HL7Group {
  RER_RER_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RER_RER_PID_12, RER_RER_NTE_15, FIELD_ID_MAX };

  const char* className() const { return "RER_RER_PATIENT"; }
  RER_RER_PATIENT* create() const { return new RER_RER_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("RER_RER.PATIENT");
    addObject<PID>(RER_RER_PID_12, "PID.12", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(RER_RER_NTE_15, "NTE.15", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PID* getPID_12(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RER_RER_PID_12);
  }
  NTE* getNTE_15(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RER_RER_NTE_15);
  }

  /* Checker list */
  bool isPID_12(size_t index = 0) {
    try {
      return this->getObject(index, RER_RER_PID_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_15(size_t index = 0) {
    try {
      return this->getObject(index, RER_RER_NTE_15) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RER_RER_11 */

/* ORDER */
struct RER_RER_ORDER : public HL7Group {
  RER_RER_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RER_RER_ORC_20,
    RER_RER_RXE_21,
    RER_RER_RXR_23,
    RER_RER_RXC_27,
    FIELD_ID_MAX
  };

  const char* className() const { return "RER_RER_ORDER"; }
  RER_RER_ORDER* create() const { return new RER_RER_ORDER(); }

  /* Initialize object */
  void init() {
    setName("RER_RER.ORDER");
    addObject<ORC>(RER_RER_ORC_20, "ORC.20", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXE>(RER_RER_RXE_21, "RXE.21", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXR>(RER_RER_RXR_23, "RXR.23", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXC>(RER_RER_RXC_27, "RXC.27", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_20(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, RER_RER_ORC_20);
  }
  RXE* getRXE_21(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, RER_RER_RXE_21);
  }
  RXR* getRXR_23(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RER_RER_RXR_23);
  }
  RXC* getRXC_27(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RER_RER_RXC_27);
  }

  /* Checker list */
  bool isORC_20(size_t index = 0) {
    try {
      return this->getObject(index, RER_RER_ORC_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXE_21(size_t index = 0) {
    try {
      return this->getObject(index, RER_RER_RXE_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_23(size_t index = 0) {
    try {
      return this->getObject(index, RER_RER_RXR_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_27(size_t index = 0) {
    try {
      return this->getObject(index, RER_RER_RXC_27) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RER_RER_19 */

/* DEFINITION */
struct RER_RER_DEFINITION : public HL7Group {
  RER_RER_DEFINITION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RER_RER_QRD_7,
    RER_RER_QRF_9,
    RER_RER_PATIENT_11,
    RER_RER_ORDER_19,
    FIELD_ID_MAX
  };

  const char* className() const { return "RER_RER_DEFINITION"; }
  RER_RER_DEFINITION* create() const { return new RER_RER_DEFINITION(); }

  /* Initialize object */
  void init() {
    setName("RER_RER.DEFINITION");
    addObject<QRD>(RER_RER_QRD_7, "QRD.7", HL7::initialized,
		   HL7::repetition_off);
    addObject<QRF>(RER_RER_QRF_9, "QRF.9", HL7::optional, HL7::repetition_off);
    addObject<RER_RER_PATIENT>(RER_RER_PATIENT_11, "RER_RER.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<RER_RER_ORDER>(RER_RER_ORDER_19, "RER_RER.ORDER",
			     HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  QRD* getQRD_7(size_t index = 0) {
    return (QRD*)this->getObjectSafe(index, RER_RER_QRD_7);
  }
  QRF* getQRF_9(size_t index = 0) {
    return (QRF*)this->getObjectSafe(index, RER_RER_QRF_9);
  }
  RER_RER_PATIENT* getPATIENT(size_t index = 0) {
    return (RER_RER_PATIENT*)this->getObjectSafe(index, RER_RER_PATIENT_11);
  }
  RER_RER_ORDER* getORDER(size_t index = 0) {
    return (RER_RER_ORDER*)this->getObjectSafe(index, RER_RER_ORDER_19);
  }

  /* Checker list */
  bool isQRD_7(size_t index = 0) {
    try {
      return this->getObject(index, RER_RER_QRD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRF_9(size_t index = 0) {
    try {
      return this->getObject(index, RER_RER_QRF_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, RER_RER_PATIENT_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, RER_RER_ORDER_19) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RER_RER_6 */

/* RER_RER */
struct RER_RER : public HL7Message {
  RER_RER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RER_RER_MSH_1,
    RER_RER_MSA_2,
    RER_RER_ERR_4,
    RER_RER_DEFINITION_6,
    RER_RER_DSC_33,
    FIELD_ID_MAX
  };

  const char* className() const { return "RER_RER"; }
  RER_RER* create() const { return new RER_RER(); }

  /* Initialize object */
  void init() {
    setName("RER_RER");
    addObject<MSH>(RER_RER_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(RER_RER_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(RER_RER_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<RER_RER_DEFINITION>(RER_RER_DEFINITION_6, "RER_RER.DEFINITION",
				  HL7::initialized, HL7::repetition_on);
    addObject<DSC>(RER_RER_DSC_33, "DSC.33", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RER_RER_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RER_RER_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RER_RER_ERR_4);
  }
  RER_RER_DEFINITION* getDEFINITION(size_t index = 0) {
    return (RER_RER_DEFINITION*)this->getObjectSafe(index,
						    RER_RER_DEFINITION_6);
  }
  DSC* getDSC_33(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RER_RER_DSC_33);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RER_RER_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, RER_RER_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, RER_RER_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEFINITION(size_t index = 0) {
    try {
      return this->getObject(index, RER_RER_DEFINITION_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_33(size_t index = 0) {
    try {
      return this->getObject(index, RER_RER_DSC_33) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RER_RER_ */
} /* namespace HL7_24 */
#endif /*  __RER_RER__24_H__ */
