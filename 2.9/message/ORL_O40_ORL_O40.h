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


#ifndef __ORL_O40_ORL_O40__29_H__
#define __ORL_O40_ORL_O40__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/ORC.h"
#include "../segment/PAC.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/SAC.h"
#include "../segment/SFT.h"
#include "../segment/SHP.h"
#include "../segment/SPM.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct ORL_O40_ORL_O40_RESPONSE; /* RESPONSE */
struct ORL_O40_ORL_O40_PATIENT; /* PATIENT */
struct ORL_O40_ORL_O40_ORDER; /* ORDER */
struct ORL_O40_ORL_O40_TIMING; /* TIMING */
struct ORL_O40_ORL_O40_OBSERVATION_REQUEST; /* OBSERVATION_REQUEST */
struct ORL_O40_ORL_O40_SPECIMEN_SHIPMENT; /* SPECIMEN_SHIPMENT */
struct ORL_O40_ORL_O40_PACKAGE; /* PACKAGE */
struct ORL_O40_ORL_O40_SPECIMEN_IN_PACKAGE; /* SPECIMEN_IN_PACKAGE */
struct ORL_O40_ORL_O40_SPECIMEN_CONTAINER_IN_PACKAGE; /* SPECIMEN_CONTAINER_IN_PACKAGE */

/*  */
struct ORL_O40_ORL_O40 : public HL7Message {
  ORL_O40_ORL_O40() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORL_O40_ORL_O40_MSH_1,
    ORL_O40_ORL_O40_MSA_2,
    ORL_O40_ORL_O40_ARV_3,
    ORL_O40_ORL_O40_ERR_4,
    ORL_O40_ORL_O40_SFT_5,
    ORL_O40_ORL_O40_UAC_6,
    ORL_O40_ORL_O40_NTE_7,
    ORL_O40_ORL_O40_ARV_11,
    ORL_O40_ORL_O40_PID_12,
    ORL_O40_ORL_O40_PRT_13,
    ORL_O40_ORL_O40_ORC_16,
    ORL_O40_ORL_O40_PRT_17,
    ORL_O40_ORL_O40_TQ1_18,
    ORL_O40_ORL_O40_TQ2_19,
    ORL_O40_ORL_O40_TQ1_20,
    ORL_O40_ORL_O40_TQ2_21,
    ORL_O40_ORL_O40_OBR_23,
    ORL_O40_ORL_O40_PRT_24,
    ORL_O40_ORL_O40_SHP_26,
    ORL_O40_ORL_O40_PAC_28,
    ORL_O40_ORL_O40_SPM_30,
    ORL_O40_ORL_O40_SAC_31,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORL_O40_ORL_O40"; }
  ORL_O40_ORL_O40* create() const { return new ORL_O40_ORL_O40(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORL_O40_ORL_O40");
    addObject<MSH>(ORL_O40_ORL_O40_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<MSA>(ORL_O40_ORL_O40_MSA_2, "MSA.2", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ORL_O40_ORL_O40_ARV_3, "ARV.3", HL7::optional, HL7::repetition_on);
    addObject<ERR>(ORL_O40_ORL_O40_ERR_4, "ERR.4", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ORL_O40_ORL_O40_SFT_5, "SFT.5", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ORL_O40_ORL_O40_UAC_6, "UAC.6", HL7::optional, HL7::repetition_off);
    addObject<NTE>(ORL_O40_ORL_O40_NTE_7, "NTE.7", HL7::optional, HL7::repetition_on);
    addObject<ARV>(ORL_O40_ORL_O40_ARV_11, "ARV.11", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORL_O40_ORL_O40_PID_12, "PID.12", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O40_ORL_O40_PRT_13, "PRT.13", HL7::optional, HL7::repetition_on);
    addObject<ORC>(ORL_O40_ORL_O40_ORC_16, "ORC.16", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O40_ORL_O40_PRT_17, "PRT.17", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(ORL_O40_ORL_O40_TQ1_18, "TQ1.18", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORL_O40_ORL_O40_TQ2_19, "TQ2.19", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(ORL_O40_ORL_O40_TQ1_20, "TQ1.20", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORL_O40_ORL_O40_TQ2_21, "TQ2.21", HL7::optional, HL7::repetition_on);
    addObject<OBR>(ORL_O40_ORL_O40_OBR_23, "OBR.23", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O40_ORL_O40_PRT_24, "PRT.24", HL7::optional, HL7::repetition_on);
    addObject<SHP>(ORL_O40_ORL_O40_SHP_26, "SHP.26", HL7::initialized, HL7::repetition_off);
    addObject<PAC>(ORL_O40_ORL_O40_PAC_28, "PAC.28", HL7::initialized, HL7::repetition_off);
    addObject<SPM>(ORL_O40_ORL_O40_SPM_30, "SPM.30", HL7::initialized, HL7::repetition_off);
    addObject<SAC>(ORL_O40_ORL_O40_SAC_31, "SAC.31", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORL_O40_ORL_O40_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ORL_O40_ORL_O40_MSA_2);
  }
  ARV* getARV_3(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORL_O40_ORL_O40_ARV_3);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ORL_O40_ORL_O40_ERR_4);
  }
  SFT* getSFT_5(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ORL_O40_ORL_O40_SFT_5);
  }
  UAC* getUAC_6(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ORL_O40_ORL_O40_UAC_6);
  }
  NTE* getNTE_7(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORL_O40_ORL_O40_NTE_7);
  }
  ARV* getARV_11(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORL_O40_ORL_O40_ARV_11);
  }
  PID* getPID_12(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORL_O40_ORL_O40_PID_12);
  }
  PRT* getPRT_13(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O40_ORL_O40_PRT_13);
  }
  ORC* getORC_16(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORL_O40_ORL_O40_ORC_16);
  }
  PRT* getPRT_17(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O40_ORL_O40_PRT_17);
  }
  TQ1* getTQ1_18(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORL_O40_ORL_O40_TQ1_18);
  }
  TQ2* getTQ2_19(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORL_O40_ORL_O40_TQ2_19);
  }
  TQ1* getTQ1_20(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORL_O40_ORL_O40_TQ1_20);
  }
  TQ2* getTQ2_21(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORL_O40_ORL_O40_TQ2_21);
  }
  OBR* getOBR_23(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, ORL_O40_ORL_O40_OBR_23);
  }
  PRT* getPRT_24(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O40_ORL_O40_PRT_24);
  }
  SHP* getSHP_26(size_t index = 0) {
    return (SHP*)this->getObjectSafe(index, ORL_O40_ORL_O40_SHP_26);
  }
  PAC* getPAC_28(size_t index = 0) {
    return (PAC*)this->getObjectSafe(index, ORL_O40_ORL_O40_PAC_28);
  }
  SPM* getSPM_30(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, ORL_O40_ORL_O40_SPM_30);
  }
  SAC* getSAC_31(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, ORL_O40_ORL_O40_SAC_31);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O40_ORL_O40_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O40_ORL_O40_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_3(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O40_ORL_O40_ARV_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O40_ORL_O40_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_5(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O40_ORL_O40_SFT_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_6(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O40_ORL_O40_UAC_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_7(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O40_ORL_O40_NTE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_11(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O40_ORL_O40_ARV_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_12(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O40_ORL_O40_PID_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_13(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O40_ORL_O40_PRT_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_16(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O40_ORL_O40_ORC_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_17(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O40_ORL_O40_PRT_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_18(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O40_ORL_O40_TQ1_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_19(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O40_ORL_O40_TQ2_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_20(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O40_ORL_O40_TQ1_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_21(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O40_ORL_O40_TQ2_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_23(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O40_ORL_O40_OBR_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_24(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O40_ORL_O40_PRT_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSHP_26(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O40_ORL_O40_SHP_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPAC_28(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O40_ORL_O40_PAC_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_30(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O40_ORL_O40_SPM_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_31(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O40_ORL_O40_SAC_31) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORL_O40_ORL_O40_ */
} /* namespace HL7_29 */
#endif /*  __ORL_O40_ORL_O40__29_H__ */
