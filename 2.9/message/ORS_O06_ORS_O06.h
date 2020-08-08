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


#ifndef __ORS_O06_ORS_O06__29_H__
#define __ORS_O06_ORS_O06__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/RQ1.h"
#include "../segment/RQD.h"
#include "../segment/SFT.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct ORS_O06_ORS_O06_RESPONSE; /* RESPONSE */
struct ORS_O06_ORS_O06_PATIENT; /* PATIENT */
struct ORS_O06_ORS_O06_ORDER; /* ORDER */
struct ORS_O06_ORS_O06_TIMING; /* TIMING */

/*  */
struct ORS_O06_ORS_O06 : public HL7Message {
  ORS_O06_ORS_O06() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORS_O06_ORS_O06_MSH_1,
    ORS_O06_ORS_O06_MSA_2,
    ORS_O06_ORS_O06_ARV_3,
    ORS_O06_ORS_O06_ERR_4,
    ORS_O06_ORS_O06_SFT_5,
    ORS_O06_ORS_O06_UAC_6,
    ORS_O06_ORS_O06_NTE_7,
    ORS_O06_ORS_O06_ARV_11,
    ORS_O06_ORS_O06_NTE_12,
    ORS_O06_ORS_O06_PID_14,
    ORS_O06_ORS_O06_ARV_15,
    ORS_O06_ORS_O06_NTE_16,
    ORS_O06_ORS_O06_PID_18,
    ORS_O06_ORS_O06_NTE_20,
    ORS_O06_ORS_O06_ORC_21,
    ORS_O06_ORS_O06_PRT_22,
    ORS_O06_ORS_O06_RQ1_23,
    ORS_O06_ORS_O06_RQD_24,
    ORS_O06_ORS_O06_TQ1_25,
    ORS_O06_ORS_O06_TQ2_26,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORS_O06_ORS_O06"; }
  ORS_O06_ORS_O06* create() const { return new ORS_O06_ORS_O06(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORS_O06_ORS_O06");
    addObject<MSH>(ORS_O06_ORS_O06_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<MSA>(ORS_O06_ORS_O06_MSA_2, "MSA.2", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ORS_O06_ORS_O06_ARV_3, "ARV.3", HL7::optional, HL7::repetition_on);
    addObject<ERR>(ORS_O06_ORS_O06_ERR_4, "ERR.4", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ORS_O06_ORS_O06_SFT_5, "SFT.5", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ORS_O06_ORS_O06_UAC_6, "UAC.6", HL7::optional, HL7::repetition_off);
    addObject<NTE>(ORS_O06_ORS_O06_NTE_7, "NTE.7", HL7::optional, HL7::repetition_on);
    addObject<ARV>(ORS_O06_ORS_O06_ARV_11, "ARV.11", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORS_O06_ORS_O06_NTE_12, "NTE.12", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORS_O06_ORS_O06_PID_14, "PID.14", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ORS_O06_ORS_O06_ARV_15, "ARV.15", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORS_O06_ORS_O06_NTE_16, "NTE.16", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORS_O06_ORS_O06_PID_18, "PID.18", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(ORS_O06_ORS_O06_NTE_20, "NTE.20", HL7::optional, HL7::repetition_on);
    addObject<ORC>(ORS_O06_ORS_O06_ORC_21, "ORC.21", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORS_O06_ORS_O06_PRT_22, "PRT.22", HL7::optional, HL7::repetition_on);
    addObject<RQ1>(ORS_O06_ORS_O06_RQ1_23, "RQ1.23", HL7::optional, HL7::repetition_off);
    addObject<RQD>(ORS_O06_ORS_O06_RQD_24, "RQD.24", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(ORS_O06_ORS_O06_TQ1_25, "TQ1.25", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORS_O06_ORS_O06_TQ2_26, "TQ2.26", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORS_O06_ORS_O06_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ORS_O06_ORS_O06_MSA_2);
  }
  ARV* getARV_3(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORS_O06_ORS_O06_ARV_3);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ORS_O06_ORS_O06_ERR_4);
  }
  SFT* getSFT_5(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ORS_O06_ORS_O06_SFT_5);
  }
  UAC* getUAC_6(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ORS_O06_ORS_O06_UAC_6);
  }
  NTE* getNTE_7(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORS_O06_ORS_O06_NTE_7);
  }
  ARV* getARV_11(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORS_O06_ORS_O06_ARV_11);
  }
  NTE* getNTE_12(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORS_O06_ORS_O06_NTE_12);
  }
  PID* getPID_14(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORS_O06_ORS_O06_PID_14);
  }
  ARV* getARV_15(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORS_O06_ORS_O06_ARV_15);
  }
  NTE* getNTE_16(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORS_O06_ORS_O06_NTE_16);
  }
  PID* getPID_18(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORS_O06_ORS_O06_PID_18);
  }
  NTE* getNTE_20(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORS_O06_ORS_O06_NTE_20);
  }
  ORC* getORC_21(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORS_O06_ORS_O06_ORC_21);
  }
  PRT* getPRT_22(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORS_O06_ORS_O06_PRT_22);
  }
  RQ1* getRQ1_23(size_t index = 0) {
    return (RQ1*)this->getObjectSafe(index, ORS_O06_ORS_O06_RQ1_23);
  }
  RQD* getRQD_24(size_t index = 0) {
    return (RQD*)this->getObjectSafe(index, ORS_O06_ORS_O06_RQD_24);
  }
  TQ1* getTQ1_25(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORS_O06_ORS_O06_TQ1_25);
  }
  TQ2* getTQ2_26(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORS_O06_ORS_O06_TQ2_26);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_ORS_O06_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_ORS_O06_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_3(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_ORS_O06_ARV_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_ORS_O06_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_5(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_ORS_O06_SFT_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_6(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_ORS_O06_UAC_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_7(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_ORS_O06_NTE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_11(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_ORS_O06_ARV_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_12(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_ORS_O06_NTE_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_14(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_ORS_O06_PID_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_15(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_ORS_O06_ARV_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_16(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_ORS_O06_NTE_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_18(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_ORS_O06_PID_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_20(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_ORS_O06_NTE_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_21(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_ORS_O06_ORC_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_22(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_ORS_O06_PRT_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRQ1_23(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_ORS_O06_RQ1_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRQD_24(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_ORS_O06_RQD_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_25(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_ORS_O06_TQ1_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_26(size_t index = 0) {
    try {
      return this->getObject(index, ORS_O06_ORS_O06_TQ2_26) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORS_O06_ORS_O06_ */
} /* namespace HL7_29 */
#endif /*  __ORS_O06_ORS_O06__29_H__ */
