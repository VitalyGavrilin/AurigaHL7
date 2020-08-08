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


#ifndef __ORL_O34_ORL_O34__29_H__
#define __ORL_O34_ORL_O34__29_H__

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
struct ORL_O34_ORL_O34_RESPONSE; /* RESPONSE */
struct ORL_O34_ORL_O34_SPECIMEN; /* SPECIMEN */
struct ORL_O34_ORL_O34_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct ORL_O34_ORL_O34_ORDER; /* ORDER */
struct ORL_O34_ORL_O34_TIMING; /* TIMING */
struct ORL_O34_ORL_O34_OBSERVATION_REQUEST; /* OBSERVATION_REQUEST */

/*  */
struct ORL_O34_ORL_O34 : public HL7Message {
  ORL_O34_ORL_O34() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORL_O34_ORL_O34_MSH_1,
    ORL_O34_ORL_O34_MSA_2,
    ORL_O34_ORL_O34_ARV_3,
    ORL_O34_ORL_O34_ERR_4,
    ORL_O34_ORL_O34_SFT_5,
    ORL_O34_ORL_O34_UAC_6,
    ORL_O34_ORL_O34_NTE_7,
    ORL_O34_ORL_O34_ARV_10,
    ORL_O34_ORL_O34_PID_11,
    ORL_O34_ORL_O34_PRT_12,
    ORL_O34_ORL_O34_SAC_15,
    ORL_O34_ORL_O34_SPM_16,
    ORL_O34_ORL_O34_OBX_17,
    ORL_O34_ORL_O34_PRT_18,
    ORL_O34_ORL_O34_OBX_19,
    ORL_O34_ORL_O34_PRT_20,
    ORL_O34_ORL_O34_ORC_23,
    ORL_O34_ORL_O34_PRT_24,
    ORL_O34_ORL_O34_TQ1_25,
    ORL_O34_ORL_O34_TQ2_26,
    ORL_O34_ORL_O34_TQ1_27,
    ORL_O34_ORL_O34_TQ2_28,
    ORL_O34_ORL_O34_OBR_29,
    ORL_O34_ORL_O34_PRT_30,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORL_O34_ORL_O34"; }
  ORL_O34_ORL_O34* create() const { return new ORL_O34_ORL_O34(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORL_O34_ORL_O34");
    addObject<MSH>(ORL_O34_ORL_O34_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<MSA>(ORL_O34_ORL_O34_MSA_2, "MSA.2", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ORL_O34_ORL_O34_ARV_3, "ARV.3", HL7::optional, HL7::repetition_on);
    addObject<ERR>(ORL_O34_ORL_O34_ERR_4, "ERR.4", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ORL_O34_ORL_O34_SFT_5, "SFT.5", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ORL_O34_ORL_O34_UAC_6, "UAC.6", HL7::optional, HL7::repetition_off);
    addObject<NTE>(ORL_O34_ORL_O34_NTE_7, "NTE.7", HL7::optional, HL7::repetition_on);
    addObject<ARV>(ORL_O34_ORL_O34_ARV_10, "ARV.10", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORL_O34_ORL_O34_PID_11, "PID.11", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O34_ORL_O34_PRT_12, "PRT.12", HL7::optional, HL7::repetition_on);
    addObject<SAC>(ORL_O34_ORL_O34_SAC_15, "SAC.15", HL7::optional, HL7::repetition_on);
    addObject<SPM>(ORL_O34_ORL_O34_SPM_16, "SPM.16", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(ORL_O34_ORL_O34_OBX_17, "OBX.17", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O34_ORL_O34_PRT_18, "PRT.18", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORL_O34_ORL_O34_OBX_19, "OBX.19", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O34_ORL_O34_PRT_20, "PRT.20", HL7::optional, HL7::repetition_on);
    addObject<ORC>(ORL_O34_ORL_O34_ORC_23, "ORC.23", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O34_ORL_O34_PRT_24, "PRT.24", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(ORL_O34_ORL_O34_TQ1_25, "TQ1.25", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORL_O34_ORL_O34_TQ2_26, "TQ2.26", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(ORL_O34_ORL_O34_TQ1_27, "TQ1.27", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORL_O34_ORL_O34_TQ2_28, "TQ2.28", HL7::optional, HL7::repetition_on);
    addObject<OBR>(ORL_O34_ORL_O34_OBR_29, "OBR.29", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O34_ORL_O34_PRT_30, "PRT.30", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORL_O34_ORL_O34_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ORL_O34_ORL_O34_MSA_2);
  }
  ARV* getARV_3(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORL_O34_ORL_O34_ARV_3);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ORL_O34_ORL_O34_ERR_4);
  }
  SFT* getSFT_5(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ORL_O34_ORL_O34_SFT_5);
  }
  UAC* getUAC_6(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ORL_O34_ORL_O34_UAC_6);
  }
  NTE* getNTE_7(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORL_O34_ORL_O34_NTE_7);
  }
  ARV* getARV_10(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORL_O34_ORL_O34_ARV_10);
  }
  PID* getPID_11(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORL_O34_ORL_O34_PID_11);
  }
  PRT* getPRT_12(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O34_ORL_O34_PRT_12);
  }
  SAC* getSAC_15(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, ORL_O34_ORL_O34_SAC_15);
  }
  SPM* getSPM_16(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, ORL_O34_ORL_O34_SPM_16);
  }
  OBX* getOBX_17(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORL_O34_ORL_O34_OBX_17);
  }
  PRT* getPRT_18(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O34_ORL_O34_PRT_18);
  }
  OBX* getOBX_19(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORL_O34_ORL_O34_OBX_19);
  }
  PRT* getPRT_20(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O34_ORL_O34_PRT_20);
  }
  ORC* getORC_23(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORL_O34_ORL_O34_ORC_23);
  }
  PRT* getPRT_24(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O34_ORL_O34_PRT_24);
  }
  TQ1* getTQ1_25(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORL_O34_ORL_O34_TQ1_25);
  }
  TQ2* getTQ2_26(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORL_O34_ORL_O34_TQ2_26);
  }
  TQ1* getTQ1_27(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORL_O34_ORL_O34_TQ1_27);
  }
  TQ2* getTQ2_28(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORL_O34_ORL_O34_TQ2_28);
  }
  OBR* getOBR_29(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, ORL_O34_ORL_O34_OBR_29);
  }
  PRT* getPRT_30(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O34_ORL_O34_PRT_30);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O34_ORL_O34_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O34_ORL_O34_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_3(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O34_ORL_O34_ARV_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O34_ORL_O34_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_5(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O34_ORL_O34_SFT_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_6(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O34_ORL_O34_UAC_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_7(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O34_ORL_O34_NTE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_10(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O34_ORL_O34_ARV_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_11(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O34_ORL_O34_PID_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_12(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O34_ORL_O34_PRT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_15(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O34_ORL_O34_SAC_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_16(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O34_ORL_O34_SPM_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_17(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O34_ORL_O34_OBX_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_18(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O34_ORL_O34_PRT_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_19(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O34_ORL_O34_OBX_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_20(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O34_ORL_O34_PRT_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_23(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O34_ORL_O34_ORC_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_24(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O34_ORL_O34_PRT_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_25(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O34_ORL_O34_TQ1_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_26(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O34_ORL_O34_TQ2_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_27(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O34_ORL_O34_TQ1_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_28(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O34_ORL_O34_TQ2_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_29(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O34_ORL_O34_OBR_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_30(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O34_ORL_O34_PRT_30) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORL_O34_ORL_O34_ */
} /* namespace HL7_29 */
#endif /*  __ORL_O34_ORL_O34__29_H__ */
