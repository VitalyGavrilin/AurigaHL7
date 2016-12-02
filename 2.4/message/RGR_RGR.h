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


#ifndef __RGR_RGR__24_H__
#define __RGR_RGR__24_H__

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
#include "../segment/RXG.h"
#include "../segment/RXR.h"

namespace HL7_24 {

/* Internal structures/groups */
struct RGR_RGR_PATIENT;   /* PATIENT */
struct RGR_RGR_ENCODING;  /* ENCODING */
struct RGR_RGR_ORDER;     /* ORDER */
struct RGR_RGR_DEFINTION; /* DEFINTION */

/* PATIENT */
struct RGR_RGR_PATIENT : public HL7Group {
  RGR_RGR_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RGR_RGR_PID_12, RGR_RGR_NTE_15, FIELD_ID_MAX };

  const char* className() const { return "RGR_RGR_PATIENT"; }
  RGR_RGR_PATIENT* create() const { return new RGR_RGR_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("RGR_RGR.PATIENT");
    addObject<PID>(RGR_RGR_PID_12, "PID.12", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(RGR_RGR_NTE_15, "NTE.15", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PID* getPID_12(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RGR_RGR_PID_12);
  }
  NTE* getNTE_15(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RGR_RGR_NTE_15);
  }

  /* Checker list */
  bool isPID_12(size_t index = 0) {
    try {
      return this->getObject(index, RGR_RGR_PID_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_15(size_t index = 0) {
    try {
      return this->getObject(index, RGR_RGR_NTE_15) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RGR_RGR_11 */

/* ENCODING */
struct RGR_RGR_ENCODING : public HL7Group {
  RGR_RGR_ENCODING() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RGR_RGR_RXE_22,
    RGR_RGR_RXR_24,
    RGR_RGR_RXC_28,
    FIELD_ID_MAX
  };

  const char* className() const { return "RGR_RGR_ENCODING"; }
  RGR_RGR_ENCODING* create() const { return new RGR_RGR_ENCODING(); }

  /* Initialize object */
  void init() {
    setName("RGR_RGR.ENCODING");
    addObject<RXE>(RGR_RGR_RXE_22, "RXE.22", HL7::initialized,
		   HL7::repetition_off);
    addObject<RXR>(RGR_RGR_RXR_24, "RXR.24", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXC>(RGR_RGR_RXC_28, "RXC.28", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  RXE* getRXE_22(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, RGR_RGR_RXE_22);
  }
  RXR* getRXR_24(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RGR_RGR_RXR_24);
  }
  RXC* getRXC_28(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RGR_RGR_RXC_28);
  }

  /* Checker list */
  bool isRXE_22(size_t index = 0) {
    try {
      return this->getObject(index, RGR_RGR_RXE_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_24(size_t index = 0) {
    try {
      return this->getObject(index, RGR_RGR_RXR_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_28(size_t index = 0) {
    try {
      return this->getObject(index, RGR_RGR_RXC_28) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RGR_RGR_21 */

/* ORDER */
struct RGR_RGR_ORDER : public HL7Group {
  RGR_RGR_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RGR_RGR_ORC_20,
    RGR_RGR_ENCODING_21,
    RGR_RGR_RXG_33,
    RGR_RGR_RXR_36,
    RGR_RGR_RXC_40,
    FIELD_ID_MAX
  };

  const char* className() const { return "RGR_RGR_ORDER"; }
  RGR_RGR_ORDER* create() const { return new RGR_RGR_ORDER(); }

  /* Initialize object */
  void init() {
    setName("RGR_RGR.ORDER");
    addObject<ORC>(RGR_RGR_ORC_20, "ORC.20", HL7::initialized,
		   HL7::repetition_off);
    addObject<RGR_RGR_ENCODING>(RGR_RGR_ENCODING_21, "RGR_RGR.ENCODING",
				HL7::optional, HL7::repetition_off);
    addObject<RXG>(RGR_RGR_RXG_33, "RXG.33", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXR>(RGR_RGR_RXR_36, "RXR.36", HL7::initialized,
		   HL7::repetition_on);
    addObject<RXC>(RGR_RGR_RXC_40, "RXC.40", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  ORC* getORC_20(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, RGR_RGR_ORC_20);
  }
  RGR_RGR_ENCODING* getENCODING(size_t index = 0) {
    return (RGR_RGR_ENCODING*)this->getObjectSafe(index, RGR_RGR_ENCODING_21);
  }
  RXG* getRXG_33(size_t index = 0) {
    return (RXG*)this->getObjectSafe(index, RGR_RGR_RXG_33);
  }
  RXR* getRXR_36(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, RGR_RGR_RXR_36);
  }
  RXC* getRXC_40(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RGR_RGR_RXC_40);
  }

  /* Checker list */
  bool isORC_20(size_t index = 0) {
    try {
      return this->getObject(index, RGR_RGR_ORC_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isENCODING(size_t index = 0) {
    try {
      return this->getObject(index, RGR_RGR_ENCODING_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXG_33(size_t index = 0) {
    try {
      return this->getObject(index, RGR_RGR_RXG_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_36(size_t index = 0) {
    try {
      return this->getObject(index, RGR_RGR_RXR_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_40(size_t index = 0) {
    try {
      return this->getObject(index, RGR_RGR_RXC_40) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RGR_RGR_19 */

/* DEFINTION */
struct RGR_RGR_DEFINTION : public HL7Group {
  RGR_RGR_DEFINTION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RGR_RGR_QRD_7,
    RGR_RGR_QRF_9,
    RGR_RGR_PATIENT_11,
    RGR_RGR_ORDER_19,
    FIELD_ID_MAX
  };

  const char* className() const { return "RGR_RGR_DEFINTION"; }
  RGR_RGR_DEFINTION* create() const { return new RGR_RGR_DEFINTION(); }

  /* Initialize object */
  void init() {
    setName("RGR_RGR.DEFINTION");
    addObject<QRD>(RGR_RGR_QRD_7, "QRD.7", HL7::initialized,
		   HL7::repetition_off);
    addObject<QRF>(RGR_RGR_QRF_9, "QRF.9", HL7::optional, HL7::repetition_off);
    addObject<RGR_RGR_PATIENT>(RGR_RGR_PATIENT_11, "RGR_RGR.PATIENT",
			       HL7::optional, HL7::repetition_off);
    addObject<RGR_RGR_ORDER>(RGR_RGR_ORDER_19, "RGR_RGR.ORDER",
			     HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  QRD* getQRD_7(size_t index = 0) {
    return (QRD*)this->getObjectSafe(index, RGR_RGR_QRD_7);
  }
  QRF* getQRF_9(size_t index = 0) {
    return (QRF*)this->getObjectSafe(index, RGR_RGR_QRF_9);
  }
  RGR_RGR_PATIENT* getPATIENT(size_t index = 0) {
    return (RGR_RGR_PATIENT*)this->getObjectSafe(index, RGR_RGR_PATIENT_11);
  }
  RGR_RGR_ORDER* getORDER(size_t index = 0) {
    return (RGR_RGR_ORDER*)this->getObjectSafe(index, RGR_RGR_ORDER_19);
  }

  /* Checker list */
  bool isQRD_7(size_t index = 0) {
    try {
      return this->getObject(index, RGR_RGR_QRD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRF_9(size_t index = 0) {
    try {
      return this->getObject(index, RGR_RGR_QRF_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, RGR_RGR_PATIENT_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORDER(size_t index = 0) {
    try {
      return this->getObject(index, RGR_RGR_ORDER_19) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RGR_RGR_6 */

/* RGR_RGR */
struct RGR_RGR : public HL7Message {
  RGR_RGR() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RGR_RGR_MSH_1,
    RGR_RGR_MSA_2,
    RGR_RGR_ERR_4,
    RGR_RGR_DEFINTION_6,
    RGR_RGR_DSC_46,
    FIELD_ID_MAX
  };

  const char* className() const { return "RGR_RGR"; }
  RGR_RGR* create() const { return new RGR_RGR(); }

  /* Initialize object */
  void init() {
    setName("RGR_RGR");
    addObject<MSH>(RGR_RGR_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(RGR_RGR_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(RGR_RGR_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<RGR_RGR_DEFINTION>(RGR_RGR_DEFINTION_6, "RGR_RGR.DEFINTION",
				 HL7::initialized, HL7::repetition_on);
    addObject<DSC>(RGR_RGR_DSC_46, "DSC.46", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RGR_RGR_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RGR_RGR_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RGR_RGR_ERR_4);
  }
  RGR_RGR_DEFINTION* getDEFINTION(size_t index = 0) {
    return (RGR_RGR_DEFINTION*)this->getObjectSafe(index, RGR_RGR_DEFINTION_6);
  }
  DSC* getDSC_46(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RGR_RGR_DSC_46);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RGR_RGR_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, RGR_RGR_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, RGR_RGR_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEFINTION(size_t index = 0) {
    try {
      return this->getObject(index, RGR_RGR_DEFINTION_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_46(size_t index = 0) {
    try {
      return this->getObject(index, RGR_RGR_DSC_46) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RGR_RGR_ */
} /* namespace HL7_24 */
#endif /*  __RGR_RGR__24_H__ */
