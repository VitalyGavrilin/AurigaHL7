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


#ifndef __ORL_O54_ORL_O54__29_H__
#define __ORL_O54_ORL_O54__29_H__

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
struct ORL_O54_ORL_O54_RESPONSE; /* RESPONSE */
struct ORL_O54_ORL_O54_PATIENT; /* PATIENT */
struct ORL_O54_ORL_O54_SPECIMEN; /* SPECIMEN */
struct ORL_O54_ORL_O54_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct ORL_O54_ORL_O54_ORDER; /* ORDER */
struct ORL_O54_ORL_O54_TIMING; /* TIMING */
struct ORL_O54_ORL_O54_OBSERVATION_REQUEST; /* OBSERVATION_REQUEST */

/*  */
struct ORL_O54_ORL_O54 : public HL7Message {
  ORL_O54_ORL_O54() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORL_O54_ORL_O54_MSH_1,
    ORL_O54_ORL_O54_MSA_2,
    ORL_O54_ORL_O54_ARV_3,
    ORL_O54_ORL_O54_ERR_4,
    ORL_O54_ORL_O54_SFT_5,
    ORL_O54_ORL_O54_UAC_6,
    ORL_O54_ORL_O54_NTE_7,
    ORL_O54_ORL_O54_PID_11,
    ORL_O54_ORL_O54_PRT_12,
    ORL_O54_ORL_O54_PID_13,
    ORL_O54_ORL_O54_PRT_14,
    ORL_O54_ORL_O54_SAC_17,
    ORL_O54_ORL_O54_SPM_18,
    ORL_O54_ORL_O54_OBX_19,
    ORL_O54_ORL_O54_PRT_20,
    ORL_O54_ORL_O54_OBX_21,
    ORL_O54_ORL_O54_PRT_22,
    ORL_O54_ORL_O54_ORC_25,
    ORL_O54_ORL_O54_PRT_26,
    ORL_O54_ORL_O54_TQ1_27,
    ORL_O54_ORL_O54_TQ2_28,
    ORL_O54_ORL_O54_TQ1_29,
    ORL_O54_ORL_O54_TQ2_30,
    ORL_O54_ORL_O54_OBR_31,
    ORL_O54_ORL_O54_PRT_32,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORL_O54_ORL_O54"; }
  ORL_O54_ORL_O54* create() const { return new ORL_O54_ORL_O54(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORL_O54_ORL_O54");
    addObject<MSH>(ORL_O54_ORL_O54_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<MSA>(ORL_O54_ORL_O54_MSA_2, "MSA.2", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ORL_O54_ORL_O54_ARV_3, "ARV.3", HL7::optional, HL7::repetition_on);
    addObject<ERR>(ORL_O54_ORL_O54_ERR_4, "ERR.4", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ORL_O54_ORL_O54_SFT_5, "SFT.5", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ORL_O54_ORL_O54_UAC_6, "UAC.6", HL7::optional, HL7::repetition_off);
    addObject<NTE>(ORL_O54_ORL_O54_NTE_7, "NTE.7", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORL_O54_ORL_O54_PID_11, "PID.11", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O54_ORL_O54_PRT_12, "PRT.12", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORL_O54_ORL_O54_PID_13, "PID.13", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O54_ORL_O54_PRT_14, "PRT.14", HL7::optional, HL7::repetition_on);
    addObject<SAC>(ORL_O54_ORL_O54_SAC_17, "SAC.17", HL7::optional, HL7::repetition_on);
    addObject<SPM>(ORL_O54_ORL_O54_SPM_18, "SPM.18", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(ORL_O54_ORL_O54_OBX_19, "OBX.19", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O54_ORL_O54_PRT_20, "PRT.20", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORL_O54_ORL_O54_OBX_21, "OBX.21", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O54_ORL_O54_PRT_22, "PRT.22", HL7::optional, HL7::repetition_on);
    addObject<ORC>(ORL_O54_ORL_O54_ORC_25, "ORC.25", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O54_ORL_O54_PRT_26, "PRT.26", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(ORL_O54_ORL_O54_TQ1_27, "TQ1.27", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORL_O54_ORL_O54_TQ2_28, "TQ2.28", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(ORL_O54_ORL_O54_TQ1_29, "TQ1.29", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORL_O54_ORL_O54_TQ2_30, "TQ2.30", HL7::optional, HL7::repetition_on);
    addObject<OBR>(ORL_O54_ORL_O54_OBR_31, "OBR.31", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O54_ORL_O54_PRT_32, "PRT.32", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORL_O54_ORL_O54_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ORL_O54_ORL_O54_MSA_2);
  }
  ARV* getARV_3(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORL_O54_ORL_O54_ARV_3);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ORL_O54_ORL_O54_ERR_4);
  }
  SFT* getSFT_5(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ORL_O54_ORL_O54_SFT_5);
  }
  UAC* getUAC_6(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ORL_O54_ORL_O54_UAC_6);
  }
  NTE* getNTE_7(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORL_O54_ORL_O54_NTE_7);
  }
  PID* getPID_11(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORL_O54_ORL_O54_PID_11);
  }
  PRT* getPRT_12(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O54_ORL_O54_PRT_12);
  }
  PID* getPID_13(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORL_O54_ORL_O54_PID_13);
  }
  PRT* getPRT_14(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O54_ORL_O54_PRT_14);
  }
  SAC* getSAC_17(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, ORL_O54_ORL_O54_SAC_17);
  }
  SPM* getSPM_18(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, ORL_O54_ORL_O54_SPM_18);
  }
  OBX* getOBX_19(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORL_O54_ORL_O54_OBX_19);
  }
  PRT* getPRT_20(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O54_ORL_O54_PRT_20);
  }
  OBX* getOBX_21(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORL_O54_ORL_O54_OBX_21);
  }
  PRT* getPRT_22(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O54_ORL_O54_PRT_22);
  }
  ORC* getORC_25(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORL_O54_ORL_O54_ORC_25);
  }
  PRT* getPRT_26(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O54_ORL_O54_PRT_26);
  }
  TQ1* getTQ1_27(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORL_O54_ORL_O54_TQ1_27);
  }
  TQ2* getTQ2_28(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORL_O54_ORL_O54_TQ2_28);
  }
  TQ1* getTQ1_29(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORL_O54_ORL_O54_TQ1_29);
  }
  TQ2* getTQ2_30(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORL_O54_ORL_O54_TQ2_30);
  }
  OBR* getOBR_31(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, ORL_O54_ORL_O54_OBR_31);
  }
  PRT* getPRT_32(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O54_ORL_O54_PRT_32);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O54_ORL_O54_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O54_ORL_O54_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_3(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O54_ORL_O54_ARV_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O54_ORL_O54_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_5(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O54_ORL_O54_SFT_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_6(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O54_ORL_O54_UAC_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_7(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O54_ORL_O54_NTE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_11(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O54_ORL_O54_PID_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_12(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O54_ORL_O54_PRT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_13(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O54_ORL_O54_PID_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_14(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O54_ORL_O54_PRT_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_17(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O54_ORL_O54_SAC_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_18(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O54_ORL_O54_SPM_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_19(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O54_ORL_O54_OBX_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_20(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O54_ORL_O54_PRT_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_21(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O54_ORL_O54_OBX_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_22(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O54_ORL_O54_PRT_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_25(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O54_ORL_O54_ORC_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_26(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O54_ORL_O54_PRT_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_27(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O54_ORL_O54_TQ1_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_28(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O54_ORL_O54_TQ2_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_29(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O54_ORL_O54_TQ1_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_30(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O54_ORL_O54_TQ2_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_31(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O54_ORL_O54_OBR_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_32(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O54_ORL_O54_PRT_32) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORL_O54_ORL_O54_ */
} /* namespace HL7_29 */
#endif /*  __ORL_O54_ORL_O54__29_H__ */
