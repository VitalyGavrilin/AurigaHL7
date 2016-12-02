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


#ifndef __RDR_RDR__24_H__
#define __RDR_RDR__24_H__

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
#include "../segment/RXD.h"
#include "../segment/RXE.h"
#include "../segment/RXR.h"

namespace HL7_24 {

/* Internal structures/groups */
struct RDR_RDR_PATIENT;    /* PATIENT */
struct RDR_RDR_ENCODING;   /* ENCODING */
struct RDR_RDR_DISPENSE;   /* DISPENSE */
struct RDR_RDR_ORDER;      /* ORDER */
struct RDR_RDR_DEFINITION; /* DEFINITION */

/* PATIENT */
struct RDR_RDR_PATIENT : public HL7Group {
  RDR_RDR_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RDR_RDR_PID_12, RDR_RDR_NTE_15, FIELD_ID_MAX };

  const char* className() const { return "RDR_RDR_PATIENT"; }
  RDR_RDR_PATIENT* create() const { return new RDR_RDR_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("RDR_RDR.PATIENT");
    addObject<PID>(RDR_RDR_PID_12, "PID.12", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(RDR_RDR_NTE_15, "NTE.15", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PID* getPID_12(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RDR_RDR_PID_12);
  }
  NTE* getNTE_15(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RDR_RDR_NTE_15);
  }

  /* Checker list */
  bool isPID_12(size_t index = 0) {
    try {
      return this->getObject(index, RDR_RDR_PID_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_15(size_t index = 0) {
    try {
      return this->getObject(index, RDR_RDR_NTE_15) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RDR_RDR_11 */

/* ENCODING */
struct RDR_RDR_ENCODING : public HL7Group {
  RDR_RDR_ENCODING() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RDR_RDR_RXE_22,
    RDR_RDR_RXR_24,
    RDR_RDR_RXC_28,
    FIELD_ID_MAX
  };

  const char* className() const { return "RDR_RDR_ENCODING"; }
  RDR_RDR_ENCODING* create() const { return new RDR_RDR_ENCODING(); }

  /* Initialize object */
  void init() {
    setName("RDR_RDR.ENCODING");
    addObject<RXE>(RDR_RDR_RXE_22, "RXE.22", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXR>(RDR_RDR_RXR_24, "RXR.24", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXC>(RDR_RDR_RXC_28, "RXC.28", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  RXE* getRXE_22(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, RDR_RDR_RXE_22);
  }
  RXR* getRXR_24(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RDR_RDR_RXR_24);
  }
  RXC* getRXC_28(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RDR_RDR_RXC_28);
  }

  /* Checker list */
  bool isRXE_22(size_t index = 0) {
    try {
      return this->getObject(index, RDR_RDR_RXE_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_24(size_t index = 0) {
    try {
      return this->getObject(index, RDR_RDR_RXR_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_28(size_t index = 0) {
    try {
      return this->getObject(index, RDR_RDR_RXC_28) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RDR_RDR_21 */

/* DISPENSE */
struct RDR_RDR_DISPENSE : public HL7Group {
  RDR_RDR_DISPENSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RDR_RDR_RXD_33,
    RDR_RDR_RXR_35,
    RDR_RDR_RXC_39,
    FIELD_ID_MAX
  };

  const char* className() const { return "RDR_RDR_DISPENSE"; }
  RDR_RDR_DISPENSE* create() const { return new RDR_RDR_DISPENSE(); }

  /* Initialize object */
  void init() {
    setName("RDR_RDR.DISPENSE");
    addObject<RXD>(RDR_RDR_RXD_33, "RXD.33", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXR>(RDR_RDR_RXR_35, "RXR.35", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXC>(RDR_RDR_RXC_39, "RXC.39", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  RXD* getRXD_33(size_t index = 0) {
    return (RXD*)this->getObjectSafe(index, RDR_RDR_RXD_33);
  }
  RXR* getRXR_35(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RDR_RDR_RXR_35);
  }
  RXC* getRXC_39(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RDR_RDR_RXC_39);
  }

  /* Checker list */
  bool isRXD_33(size_t index = 0) {
    try {
      return this->getObject(index, RDR_RDR_RXD_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_35(size_t index = 0) {
    try {
      return this->getObject(index, RDR_RDR_RXR_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_39(size_t index = 0) {
    try {
      return this->getObject(index, RDR_RDR_RXC_39) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RDR_RDR_32 */

/* ORDER */
struct RDR_RDR_ORDER : public HL7Group {
  RDR_RDR_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RDR_RDR_ORC_20,
    RDR_RDR_ENCODING_21,
    RDR_RDR_DISPENSE_32,
    FIELD_ID_MAX
  };

  const char* className() const { return "RDR_RDR_ORDER"; }
  RDR_RDR_ORDER* create() const { return new RDR_RDR_ORDER(); }

  /* Initialize object */
  void init() {
    setName("RDR_RDR.ORDER");
    addObject<ORC>(RDR_RDR_ORC_20, "ORC.20", HL7::initialized,
		   HL7::repetition_off);
    addObject<RDR_RDR_ENCODING>(RDR_RDR_ENCODING_21, "RDR_RDR.ENCODING",
				HL7::optional, HL7::repetition_off);
    addObject<RDR_RDR_DISPENSE>(RDR_RDR_DISPENSE_32, "RDR_RDR.DISPENSE",
				HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_20(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, RDR_RDR_ORC_20);
  }
  RDR_RDR_ENCODING* getENCODING(size_t index = 0) {
    return (RDR_RDR_ENCODING*)this->getObjectSafe(index, RDR_RDR_ENCODING_21);
  }
  RDR_RDR_DISPENSE* getDISPENSE(size_t index = 0) {
    return (RDR_RDR_DISPENSE*)this->getObjectSafe(index, RDR_RDR_DISPENSE_32);
  }

  /* Checker list */
  bool isORC_20(size_t index = 0) {
    try {
      return this->getObject(index, RDR_RDR_ORC_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isENCODING(size_t index = 0) {
    try {
      return this->getObject(index, RDR_RDR_ENCODING_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDISPENSE(size_t index = 0) {
    try {
      return this->getObject(index, RDR_RDR_DISPENSE_32) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RDR_RDR_19 */

/* DEFINITION */
struct RDR_RDR_DEFINITION : public HL7Group {
  RDR_RDR_DEFINITION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RDR_RDR_QRD_7,
    RDR_RDR_QRF_9,
    RDR_RDR_PATIENT_11,
    RDR_RDR_ORDER_19,
    FIELD_ID_MAX
  };

  const char* className() const { return "RDR_RDR_DEFINITION"; }
  RDR_RDR_DEFINITION* create() const { return new RDR_RDR_DEFINITION(); }

  /* Initialize object */
  void init() {
    setName("RDR_RDR.DEFINITION");
    addObject<QRD>(RDR_RDR_QRD_7, "QRD.7", HL7::initialized,
		   HL7::repetition_off);
    addObject<QRF>(RDR_RDR_QRF_9, "QRF.9", HL7::optional, HL7::repetition_off);
    addObject<RDR_RDR_PATIENT>(RDR_RDR_PATIENT_11, "RDR_RDR.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<RDR_RDR_ORDER>(RDR_RDR_ORDER_19, "RDR_RDR.ORDER",
			     HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  QRD* getQRD_7(size_t index = 0) {
    return (QRD*)this->getObjectSafe(index, RDR_RDR_QRD_7);
  }
  QRF* getQRF_9(size_t index = 0) {
    return (QRF*)this->getObjectSafe(index, RDR_RDR_QRF_9);
  }
  RDR_RDR_PATIENT* getPATIENT(size_t index = 0) {
    return (RDR_RDR_PATIENT*)this->getObjectSafe(index, RDR_RDR_PATIENT_11);
  }
  RDR_RDR_ORDER* getORDER(size_t index = 0) {
    return (RDR_RDR_ORDER*)this->getObjectSafe(index, RDR_RDR_ORDER_19);
  }

  /* Checker list */
  bool isQRD_7(size_t index = 0) {
    try {
      return this->getObject(index, RDR_RDR_QRD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRF_9(size_t index = 0) {
    try {
      return this->getObject(index, RDR_RDR_QRF_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, RDR_RDR_PATIENT_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, RDR_RDR_ORDER_19) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RDR_RDR_6 */

/* RDR_RDR */
struct RDR_RDR : public HL7Message {
  RDR_RDR() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RDR_RDR_MSH_1,
    RDR_RDR_MSA_2,
    RDR_RDR_ERR_4,
    RDR_RDR_DEFINITION_6,
    RDR_RDR_DSC_46,
    FIELD_ID_MAX
  };

  const char* className() const { return "RDR_RDR"; }
  RDR_RDR* create() const { return new RDR_RDR(); }

  /* Initialize object */
  void init() {
    setName("RDR_RDR");
    addObject<MSH>(RDR_RDR_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(RDR_RDR_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(RDR_RDR_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<RDR_RDR_DEFINITION>(RDR_RDR_DEFINITION_6, "RDR_RDR.DEFINITION",
				  HL7::initialized, HL7::repetition_on);
    addObject<DSC>(RDR_RDR_DSC_46, "DSC.46", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RDR_RDR_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RDR_RDR_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RDR_RDR_ERR_4);
  }
  RDR_RDR_DEFINITION* getDEFINITION(size_t index = 0) {
    return (RDR_RDR_DEFINITION*)this->getObjectSafe(index,
						    RDR_RDR_DEFINITION_6);
  }
  DSC* getDSC_46(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RDR_RDR_DSC_46);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RDR_RDR_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, RDR_RDR_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, RDR_RDR_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEFINITION(size_t index = 0) {
    try {
      return this->getObject(index, RDR_RDR_DEFINITION_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_46(size_t index = 0) {
    try {
      return this->getObject(index, RDR_RDR_DSC_46) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RDR_RDR_ */
} /* namespace HL7_24 */
#endif /*  __RDR_RDR__24_H__ */
