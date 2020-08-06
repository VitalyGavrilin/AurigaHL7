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


#ifndef __ORL_O55_ORL_O55__29_H__
#define __ORL_O55_ORL_O55__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
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
struct ORL_O55_ORL_O55_RESPONSE; /* RESPONSE */
struct ORL_O55_ORL_O55_PATIENT; /* PATIENT */
struct ORL_O55_ORL_O55_SPECIMEN; /* SPECIMEN */
struct ORL_O55_ORL_O55_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct ORL_O55_ORL_O55_SPECIMEN_CONTAINER; /* SPECIMEN_CONTAINER */
struct ORL_O55_ORL_O55_ORDER; /* ORDER */
struct ORL_O55_ORL_O55_TIMING; /* TIMING */
struct ORL_O55_ORL_O55_OBSERVATION_REQUEST; /* OBSERVATION_REQUEST */

/*  */
struct ORL_O55_ORL_O55 : public HL7Message {
  ORL_O55_ORL_O55() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORL_O55_ORL_O55_MSH_1,
    ORL_O55_ORL_O55_MSA_2,
    ORL_O55_ORL_O55_ARV_3,
    ORL_O55_ORL_O55_ERR_4,
    ORL_O55_ORL_O55_SFT_5,
    ORL_O55_ORL_O55_UAC_6,
    ORL_O55_ORL_O55_NTE_7,
    ORL_O55_ORL_O55_PID_11,
    ORL_O55_ORL_O55_PRT_12,
    ORL_O55_ORL_O55_PID_13,
    ORL_O55_ORL_O55_PRT_14,
    ORL_O55_ORL_O55_NTE_17,
    ORL_O55_ORL_O55_SPM_18,
    ORL_O55_ORL_O55_OBX_19,
    ORL_O55_ORL_O55_PRT_20,
    ORL_O55_ORL_O55_OBX_21,
    ORL_O55_ORL_O55_PRT_22,
    ORL_O55_ORL_O55_SAC_24,
    ORL_O55_ORL_O55_ORC_27,
    ORL_O55_ORL_O55_PRT_28,
    ORL_O55_ORL_O55_TQ1_29,
    ORL_O55_ORL_O55_TQ2_30,
    ORL_O55_ORL_O55_TQ1_31,
    ORL_O55_ORL_O55_TQ2_32,
    ORL_O55_ORL_O55_OBR_33,
    ORL_O55_ORL_O55_PRT_34,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORL_O55_ORL_O55"; }
  ORL_O55_ORL_O55* create() const { return new ORL_O55_ORL_O55(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORL_O55_ORL_O55");
    addObject<MSH>(ORL_O55_ORL_O55_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<MSA>(ORL_O55_ORL_O55_MSA_2, "MSA.2", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ORL_O55_ORL_O55_ARV_3, "ARV.3", HL7::optional, HL7::repetition_on);
    addObject<ERR>(ORL_O55_ORL_O55_ERR_4, "ERR.4", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ORL_O55_ORL_O55_SFT_5, "SFT.5", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ORL_O55_ORL_O55_UAC_6, "UAC.6", HL7::optional, HL7::repetition_off);
    addObject<NTE>(ORL_O55_ORL_O55_NTE_7, "NTE.7", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORL_O55_ORL_O55_PID_11, "PID.11", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O55_ORL_O55_PRT_12, "PRT.12", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORL_O55_ORL_O55_PID_13, "PID.13", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O55_ORL_O55_PRT_14, "PRT.14", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORL_O55_ORL_O55_NTE_17, "NTE.17", HL7::optional, HL7::repetition_on);
    addObject<SPM>(ORL_O55_ORL_O55_SPM_18, "SPM.18", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(ORL_O55_ORL_O55_OBX_19, "OBX.19", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O55_ORL_O55_PRT_20, "PRT.20", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORL_O55_ORL_O55_OBX_21, "OBX.21", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O55_ORL_O55_PRT_22, "PRT.22", HL7::optional, HL7::repetition_on);
    addObject<SAC>(ORL_O55_ORL_O55_SAC_24, "SAC.24", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(ORL_O55_ORL_O55_ORC_27, "ORC.27", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O55_ORL_O55_PRT_28, "PRT.28", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(ORL_O55_ORL_O55_TQ1_29, "TQ1.29", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORL_O55_ORL_O55_TQ2_30, "TQ2.30", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(ORL_O55_ORL_O55_TQ1_31, "TQ1.31", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORL_O55_ORL_O55_TQ2_32, "TQ2.32", HL7::optional, HL7::repetition_on);
    addObject<OBR>(ORL_O55_ORL_O55_OBR_33, "OBR.33", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O55_ORL_O55_PRT_34, "PRT.34", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORL_O55_ORL_O55_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ORL_O55_ORL_O55_MSA_2);
  }
  ARV* getARV_3(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORL_O55_ORL_O55_ARV_3);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ORL_O55_ORL_O55_ERR_4);
  }
  SFT* getSFT_5(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ORL_O55_ORL_O55_SFT_5);
  }
  UAC* getUAC_6(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ORL_O55_ORL_O55_UAC_6);
  }
  NTE* getNTE_7(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORL_O55_ORL_O55_NTE_7);
  }
  PID* getPID_11(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORL_O55_ORL_O55_PID_11);
  }
  PRT* getPRT_12(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O55_ORL_O55_PRT_12);
  }
  PID* getPID_13(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORL_O55_ORL_O55_PID_13);
  }
  PRT* getPRT_14(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O55_ORL_O55_PRT_14);
  }
  NTE* getNTE_17(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORL_O55_ORL_O55_NTE_17);
  }
  SPM* getSPM_18(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, ORL_O55_ORL_O55_SPM_18);
  }
  OBX* getOBX_19(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORL_O55_ORL_O55_OBX_19);
  }
  PRT* getPRT_20(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O55_ORL_O55_PRT_20);
  }
  OBX* getOBX_21(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORL_O55_ORL_O55_OBX_21);
  }
  PRT* getPRT_22(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O55_ORL_O55_PRT_22);
  }
  SAC* getSAC_24(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, ORL_O55_ORL_O55_SAC_24);
  }
  ORC* getORC_27(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORL_O55_ORL_O55_ORC_27);
  }
  PRT* getPRT_28(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O55_ORL_O55_PRT_28);
  }
  TQ1* getTQ1_29(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORL_O55_ORL_O55_TQ1_29);
  }
  TQ2* getTQ2_30(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORL_O55_ORL_O55_TQ2_30);
  }
  TQ1* getTQ1_31(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORL_O55_ORL_O55_TQ1_31);
  }
  TQ2* getTQ2_32(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORL_O55_ORL_O55_TQ2_32);
  }
  OBR* getOBR_33(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, ORL_O55_ORL_O55_OBR_33);
  }
  PRT* getPRT_34(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O55_ORL_O55_PRT_34);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O55_ORL_O55_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O55_ORL_O55_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_3(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O55_ORL_O55_ARV_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O55_ORL_O55_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_5(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O55_ORL_O55_SFT_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_6(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O55_ORL_O55_UAC_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_7(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O55_ORL_O55_NTE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_11(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O55_ORL_O55_PID_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_12(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O55_ORL_O55_PRT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_13(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O55_ORL_O55_PID_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_14(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O55_ORL_O55_PRT_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_17(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O55_ORL_O55_NTE_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_18(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O55_ORL_O55_SPM_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_19(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O55_ORL_O55_OBX_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_20(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O55_ORL_O55_PRT_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_21(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O55_ORL_O55_OBX_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_22(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O55_ORL_O55_PRT_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_24(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O55_ORL_O55_SAC_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_27(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O55_ORL_O55_ORC_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_28(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O55_ORL_O55_PRT_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_29(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O55_ORL_O55_TQ1_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_30(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O55_ORL_O55_TQ2_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_31(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O55_ORL_O55_TQ1_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_32(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O55_ORL_O55_TQ2_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_33(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O55_ORL_O55_OBR_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_34(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O55_ORL_O55_PRT_34) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORL_O55_ORL_O55_ */
} /* namespace HL7_29 */
#endif /*  __ORL_O55_ORL_O55__29_H__ */
