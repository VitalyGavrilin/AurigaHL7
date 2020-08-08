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


#ifndef __ORL_O22_ORL_O22__29_H__
#define __ORL_O22_ORL_O22__29_H__

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
#include "../segment/SAC.h"
#include "../segment/SFT.h"
#include "../segment/SPM.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct ORL_O22_ORL_O22_RESPONSE; /* RESPONSE */
struct ORL_O22_ORL_O22_ORDER; /* ORDER */
struct ORL_O22_ORL_O22_TIMING; /* TIMING */
struct ORL_O22_ORL_O22_OBSERVATION_REQUEST; /* OBSERVATION_REQUEST */
struct ORL_O22_ORL_O22_SPECIMEN; /* SPECIMEN */

/*  */
struct ORL_O22_ORL_O22 : public HL7Message {
  ORL_O22_ORL_O22() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORL_O22_ORL_O22_MSH_1,
    ORL_O22_ORL_O22_MSA_2,
    ORL_O22_ORL_O22_ARV_3,
    ORL_O22_ORL_O22_ERR_4,
    ORL_O22_ORL_O22_SFT_5,
    ORL_O22_ORL_O22_UAC_6,
    ORL_O22_ORL_O22_NTE_7,
    ORL_O22_ORL_O22_ARV_10,
    ORL_O22_ORL_O22_PID_11,
    ORL_O22_ORL_O22_PRT_12,
    ORL_O22_ORL_O22_ORC_15,
    ORL_O22_ORL_O22_PRT_16,
    ORL_O22_ORL_O22_TQ1_17,
    ORL_O22_ORL_O22_TQ2_18,
    ORL_O22_ORL_O22_TQ1_19,
    ORL_O22_ORL_O22_TQ2_20,
    ORL_O22_ORL_O22_OBR_22,
    ORL_O22_ORL_O22_PRT_23,
    ORL_O22_ORL_O22_SAC_24,
    ORL_O22_ORL_O22_SPM_25,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORL_O22_ORL_O22"; }
  ORL_O22_ORL_O22* create() const { return new ORL_O22_ORL_O22(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORL_O22_ORL_O22");
    addObject<MSH>(ORL_O22_ORL_O22_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<MSA>(ORL_O22_ORL_O22_MSA_2, "MSA.2", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ORL_O22_ORL_O22_ARV_3, "ARV.3", HL7::optional, HL7::repetition_on);
    addObject<ERR>(ORL_O22_ORL_O22_ERR_4, "ERR.4", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ORL_O22_ORL_O22_SFT_5, "SFT.5", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ORL_O22_ORL_O22_UAC_6, "UAC.6", HL7::optional, HL7::repetition_off);
    addObject<NTE>(ORL_O22_ORL_O22_NTE_7, "NTE.7", HL7::optional, HL7::repetition_on);
    addObject<ARV>(ORL_O22_ORL_O22_ARV_10, "ARV.10", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORL_O22_ORL_O22_PID_11, "PID.11", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O22_ORL_O22_PRT_12, "PRT.12", HL7::optional, HL7::repetition_on);
    addObject<ORC>(ORL_O22_ORL_O22_ORC_15, "ORC.15", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O22_ORL_O22_PRT_16, "PRT.16", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(ORL_O22_ORL_O22_TQ1_17, "TQ1.17", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORL_O22_ORL_O22_TQ2_18, "TQ2.18", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(ORL_O22_ORL_O22_TQ1_19, "TQ1.19", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORL_O22_ORL_O22_TQ2_20, "TQ2.20", HL7::optional, HL7::repetition_on);
    addObject<OBR>(ORL_O22_ORL_O22_OBR_22, "OBR.22", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O22_ORL_O22_PRT_23, "PRT.23", HL7::optional, HL7::repetition_on);
    addObject<SAC>(ORL_O22_ORL_O22_SAC_24, "SAC.24", HL7::optional, HL7::repetition_on);
    addObject<SPM>(ORL_O22_ORL_O22_SPM_25, "SPM.25", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORL_O22_ORL_O22_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ORL_O22_ORL_O22_MSA_2);
  }
  ARV* getARV_3(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORL_O22_ORL_O22_ARV_3);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ORL_O22_ORL_O22_ERR_4);
  }
  SFT* getSFT_5(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ORL_O22_ORL_O22_SFT_5);
  }
  UAC* getUAC_6(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ORL_O22_ORL_O22_UAC_6);
  }
  NTE* getNTE_7(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORL_O22_ORL_O22_NTE_7);
  }
  ARV* getARV_10(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORL_O22_ORL_O22_ARV_10);
  }
  PID* getPID_11(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORL_O22_ORL_O22_PID_11);
  }
  PRT* getPRT_12(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O22_ORL_O22_PRT_12);
  }
  ORC* getORC_15(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORL_O22_ORL_O22_ORC_15);
  }
  PRT* getPRT_16(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O22_ORL_O22_PRT_16);
  }
  TQ1* getTQ1_17(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORL_O22_ORL_O22_TQ1_17);
  }
  TQ2* getTQ2_18(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORL_O22_ORL_O22_TQ2_18);
  }
  TQ1* getTQ1_19(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORL_O22_ORL_O22_TQ1_19);
  }
  TQ2* getTQ2_20(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORL_O22_ORL_O22_TQ2_20);
  }
  OBR* getOBR_22(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, ORL_O22_ORL_O22_OBR_22);
  }
  PRT* getPRT_23(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O22_ORL_O22_PRT_23);
  }
  SAC* getSAC_24(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, ORL_O22_ORL_O22_SAC_24);
  }
  SPM* getSPM_25(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, ORL_O22_ORL_O22_SPM_25);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_ORL_O22_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_ORL_O22_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_3(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_ORL_O22_ARV_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_ORL_O22_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_5(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_ORL_O22_SFT_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_6(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_ORL_O22_UAC_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_7(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_ORL_O22_NTE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_10(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_ORL_O22_ARV_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_11(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_ORL_O22_PID_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_12(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_ORL_O22_PRT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_15(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_ORL_O22_ORC_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_16(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_ORL_O22_PRT_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_17(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_ORL_O22_TQ1_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_18(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_ORL_O22_TQ2_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_19(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_ORL_O22_TQ1_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_20(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_ORL_O22_TQ2_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_22(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_ORL_O22_OBR_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_23(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_ORL_O22_PRT_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_24(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_ORL_O22_SAC_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_25(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O22_ORL_O22_SPM_25) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORL_O22_ORL_O22_ */
} /* namespace HL7_29 */
#endif /*  __ORL_O22_ORL_O22__29_H__ */
