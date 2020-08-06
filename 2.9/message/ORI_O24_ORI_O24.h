/*
 * hacca - C Toolkit and Applications for the HL7 2.x Protocols
 *           http://github.com/rcarbone/hacca
 *           http://hub.docker.com/repository/docker/roccocarbone/hacca
 *
 * Warning: This file was automatically generated, please do not edit.
 *
 * R. Carbone (rocco@tecsiel.it)
 * Jul 2020
 *
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 */


#ifndef __ORI_O24_ORI_O24__29_H__
#define __ORI_O24_ORI_O24__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/SFT.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct ORI_O24_ORI_O24_RESPONSE; /* RESPONSE */
struct ORI_O24_ORI_O24_PATIENT; /* PATIENT */
struct ORI_O24_ORI_O24_ORDER; /* ORDER */
struct ORI_O24_ORI_O24_TIMING; /* TIMING */

/*  */
struct ORI_O24_ORI_O24 : public HL7Message {
  ORI_O24_ORI_O24() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORI_O24_ORI_O24_MSH_1,
    ORI_O24_ORI_O24_MSA_2,
    ORI_O24_ORI_O24_ARV_3,
    ORI_O24_ORI_O24_ERR_4,
    ORI_O24_ORI_O24_SFT_5,
    ORI_O24_ORI_O24_UAC_6,
    ORI_O24_ORI_O24_NTE_7,
    ORI_O24_ORI_O24_ARV_11,
    ORI_O24_ORI_O24_NTE_12,
    ORI_O24_ORI_O24_PID_13,
    ORI_O24_ORI_O24_PRT_14,
    ORI_O24_ORI_O24_ARV_15,
    ORI_O24_ORI_O24_NTE_16,
    ORI_O24_ORI_O24_PID_17,
    ORI_O24_ORI_O24_PRT_18,
    ORI_O24_ORI_O24_NTE_21,
    ORI_O24_ORI_O24_OBR_22,
    ORI_O24_ORI_O24_ORC_23,
    ORI_O24_ORI_O24_PRT_24,
    ORI_O24_ORI_O24_PRT_25,
    ORI_O24_ORI_O24_TQ1_26,
    ORI_O24_ORI_O24_TQ2_27,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORI_O24_ORI_O24"; }
  ORI_O24_ORI_O24* create() const { return new ORI_O24_ORI_O24(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORI_O24_ORI_O24");
    addObject<MSH>(ORI_O24_ORI_O24_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<MSA>(ORI_O24_ORI_O24_MSA_2, "MSA.2", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ORI_O24_ORI_O24_ARV_3, "ARV.3", HL7::optional, HL7::repetition_on);
    addObject<ERR>(ORI_O24_ORI_O24_ERR_4, "ERR.4", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ORI_O24_ORI_O24_SFT_5, "SFT.5", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ORI_O24_ORI_O24_UAC_6, "UAC.6", HL7::optional, HL7::repetition_off);
    addObject<NTE>(ORI_O24_ORI_O24_NTE_7, "NTE.7", HL7::optional, HL7::repetition_on);
    addObject<ARV>(ORI_O24_ORI_O24_ARV_11, "ARV.11", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORI_O24_ORI_O24_NTE_12, "NTE.12", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORI_O24_ORI_O24_PID_13, "PID.13", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORI_O24_ORI_O24_PRT_14, "PRT.14", HL7::optional, HL7::repetition_on);
    addObject<ARV>(ORI_O24_ORI_O24_ARV_15, "ARV.15", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORI_O24_ORI_O24_NTE_16, "NTE.16", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORI_O24_ORI_O24_PID_17, "PID.17", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORI_O24_ORI_O24_PRT_18, "PRT.18", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORI_O24_ORI_O24_NTE_21, "NTE.21", HL7::optional, HL7::repetition_on);
    addObject<OBR>(ORI_O24_ORI_O24_OBR_22, "OBR.22", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(ORI_O24_ORI_O24_ORC_23, "ORC.23", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORI_O24_ORI_O24_PRT_24, "PRT.24", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORI_O24_ORI_O24_PRT_25, "PRT.25", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(ORI_O24_ORI_O24_TQ1_26, "TQ1.26", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORI_O24_ORI_O24_TQ2_27, "TQ2.27", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORI_O24_ORI_O24_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ORI_O24_ORI_O24_MSA_2);
  }
  ARV* getARV_3(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORI_O24_ORI_O24_ARV_3);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ORI_O24_ORI_O24_ERR_4);
  }
  SFT* getSFT_5(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ORI_O24_ORI_O24_SFT_5);
  }
  UAC* getUAC_6(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ORI_O24_ORI_O24_UAC_6);
  }
  NTE* getNTE_7(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORI_O24_ORI_O24_NTE_7);
  }
  ARV* getARV_11(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORI_O24_ORI_O24_ARV_11);
  }
  NTE* getNTE_12(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORI_O24_ORI_O24_NTE_12);
  }
  PID* getPID_13(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORI_O24_ORI_O24_PID_13);
  }
  PRT* getPRT_14(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORI_O24_ORI_O24_PRT_14);
  }
  ARV* getARV_15(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORI_O24_ORI_O24_ARV_15);
  }
  NTE* getNTE_16(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORI_O24_ORI_O24_NTE_16);
  }
  PID* getPID_17(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORI_O24_ORI_O24_PID_17);
  }
  PRT* getPRT_18(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORI_O24_ORI_O24_PRT_18);
  }
  NTE* getNTE_21(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORI_O24_ORI_O24_NTE_21);
  }
  OBR* getOBR_22(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, ORI_O24_ORI_O24_OBR_22);
  }
  ORC* getORC_23(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORI_O24_ORI_O24_ORC_23);
  }
  PRT* getPRT_24(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORI_O24_ORI_O24_PRT_24);
  }
  PRT* getPRT_25(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORI_O24_ORI_O24_PRT_25);
  }
  TQ1* getTQ1_26(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORI_O24_ORI_O24_TQ1_26);
  }
  TQ2* getTQ2_27(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORI_O24_ORI_O24_TQ2_27);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORI_O24_ORI_O24_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, ORI_O24_ORI_O24_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_3(size_t index = 0) {
    try {
      return this->getObject(index, ORI_O24_ORI_O24_ARV_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, ORI_O24_ORI_O24_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_5(size_t index = 0) {
    try {
      return this->getObject(index, ORI_O24_ORI_O24_SFT_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_6(size_t index = 0) {
    try {
      return this->getObject(index, ORI_O24_ORI_O24_UAC_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_7(size_t index = 0) {
    try {
      return this->getObject(index, ORI_O24_ORI_O24_NTE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_11(size_t index = 0) {
    try {
      return this->getObject(index, ORI_O24_ORI_O24_ARV_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_12(size_t index = 0) {
    try {
      return this->getObject(index, ORI_O24_ORI_O24_NTE_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_13(size_t index = 0) {
    try {
      return this->getObject(index, ORI_O24_ORI_O24_PID_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_14(size_t index = 0) {
    try {
      return this->getObject(index, ORI_O24_ORI_O24_PRT_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_15(size_t index = 0) {
    try {
      return this->getObject(index, ORI_O24_ORI_O24_ARV_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_16(size_t index = 0) {
    try {
      return this->getObject(index, ORI_O24_ORI_O24_NTE_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_17(size_t index = 0) {
    try {
      return this->getObject(index, ORI_O24_ORI_O24_PID_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_18(size_t index = 0) {
    try {
      return this->getObject(index, ORI_O24_ORI_O24_PRT_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_21(size_t index = 0) {
    try {
      return this->getObject(index, ORI_O24_ORI_O24_NTE_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_22(size_t index = 0) {
    try {
      return this->getObject(index, ORI_O24_ORI_O24_OBR_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_23(size_t index = 0) {
    try {
      return this->getObject(index, ORI_O24_ORI_O24_ORC_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_24(size_t index = 0) {
    try {
      return this->getObject(index, ORI_O24_ORI_O24_PRT_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_25(size_t index = 0) {
    try {
      return this->getObject(index, ORI_O24_ORI_O24_PRT_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_26(size_t index = 0) {
    try {
      return this->getObject(index, ORI_O24_ORI_O24_TQ1_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_27(size_t index = 0) {
    try {
      return this->getObject(index, ORI_O24_ORI_O24_TQ2_27) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORI_O24_ORI_O24_ */
} /* namespace HL7_29 */
#endif /*  __ORI_O24_ORI_O24__29_H__ */
