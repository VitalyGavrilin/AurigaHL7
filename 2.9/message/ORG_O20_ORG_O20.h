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


#ifndef __ORG_O20_ORG_O20__29_H__
#define __ORG_O20_ORG_O20__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/CTI.h"
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
struct ORG_O20_ORG_O20_RESPONSE; /* RESPONSE */
struct ORG_O20_ORG_O20_PATIENT; /* PATIENT */
struct ORG_O20_ORG_O20_ORDER; /* ORDER */
struct ORG_O20_ORG_O20_TIMING; /* TIMING */
struct ORG_O20_ORG_O20_OBSERVATION_GROUP; /* OBSERVATION_GROUP */
struct ORG_O20_ORG_O20_SPECIMEN; /* SPECIMEN */

/*  */
struct ORG_O20_ORG_O20 : public HL7Message {
  ORG_O20_ORG_O20() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORG_O20_ORG_O20_MSH_1,
    ORG_O20_ORG_O20_MSA_2,
    ORG_O20_ORG_O20_ARV_3,
    ORG_O20_ORG_O20_ERR_4,
    ORG_O20_ORG_O20_SFT_5,
    ORG_O20_ORG_O20_UAC_6,
    ORG_O20_ORG_O20_NTE_7,
    ORG_O20_ORG_O20_ARV_11,
    ORG_O20_ORG_O20_NTE_12,
    ORG_O20_ORG_O20_PID_13,
    ORG_O20_ORG_O20_PRT_14,
    ORG_O20_ORG_O20_ARV_15,
    ORG_O20_ORG_O20_NTE_16,
    ORG_O20_ORG_O20_PID_17,
    ORG_O20_ORG_O20_PRT_18,
    ORG_O20_ORG_O20_CTI_22,
    ORG_O20_ORG_O20_ORC_23,
    ORG_O20_ORG_O20_PRT_24,
    ORG_O20_ORG_O20_TQ1_25,
    ORG_O20_ORG_O20_TQ2_26,
    ORG_O20_ORG_O20_TQ1_27,
    ORG_O20_ORG_O20_TQ2_28,
    ORG_O20_ORG_O20_NTE_29,
    ORG_O20_ORG_O20_OBR_30,
    ORG_O20_ORG_O20_PRT_31,
    ORG_O20_ORG_O20_TQ1_32,
    ORG_O20_ORG_O20_TQ2_33,
    ORG_O20_ORG_O20_NTE_34,
    ORG_O20_ORG_O20_OBR_35,
    ORG_O20_ORG_O20_PRT_36,
    ORG_O20_ORG_O20_SAC_37,
    ORG_O20_ORG_O20_SPM_38,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORG_O20_ORG_O20"; }
  ORG_O20_ORG_O20* create() const { return new ORG_O20_ORG_O20(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORG_O20_ORG_O20");
    addObject<MSH>(ORG_O20_ORG_O20_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<MSA>(ORG_O20_ORG_O20_MSA_2, "MSA.2", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ORG_O20_ORG_O20_ARV_3, "ARV.3", HL7::optional, HL7::repetition_on);
    addObject<ERR>(ORG_O20_ORG_O20_ERR_4, "ERR.4", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ORG_O20_ORG_O20_SFT_5, "SFT.5", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ORG_O20_ORG_O20_UAC_6, "UAC.6", HL7::optional, HL7::repetition_off);
    addObject<NTE>(ORG_O20_ORG_O20_NTE_7, "NTE.7", HL7::optional, HL7::repetition_on);
    addObject<ARV>(ORG_O20_ORG_O20_ARV_11, "ARV.11", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORG_O20_ORG_O20_NTE_12, "NTE.12", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORG_O20_ORG_O20_PID_13, "PID.13", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORG_O20_ORG_O20_PRT_14, "PRT.14", HL7::optional, HL7::repetition_on);
    addObject<ARV>(ORG_O20_ORG_O20_ARV_15, "ARV.15", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORG_O20_ORG_O20_NTE_16, "NTE.16", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORG_O20_ORG_O20_PID_17, "PID.17", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORG_O20_ORG_O20_PRT_18, "PRT.18", HL7::optional, HL7::repetition_on);
    addObject<CTI>(ORG_O20_ORG_O20_CTI_22, "CTI.22", HL7::optional, HL7::repetition_on);
    addObject<ORC>(ORG_O20_ORG_O20_ORC_23, "ORC.23", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORG_O20_ORG_O20_PRT_24, "PRT.24", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(ORG_O20_ORG_O20_TQ1_25, "TQ1.25", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORG_O20_ORG_O20_TQ2_26, "TQ2.26", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(ORG_O20_ORG_O20_TQ1_27, "TQ1.27", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORG_O20_ORG_O20_TQ2_28, "TQ2.28", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORG_O20_ORG_O20_NTE_29, "NTE.29", HL7::optional, HL7::repetition_on);
    addObject<OBR>(ORG_O20_ORG_O20_OBR_30, "OBR.30", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORG_O20_ORG_O20_PRT_31, "PRT.31", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(ORG_O20_ORG_O20_TQ1_32, "TQ1.32", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORG_O20_ORG_O20_TQ2_33, "TQ2.33", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORG_O20_ORG_O20_NTE_34, "NTE.34", HL7::optional, HL7::repetition_on);
    addObject<OBR>(ORG_O20_ORG_O20_OBR_35, "OBR.35", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORG_O20_ORG_O20_PRT_36, "PRT.36", HL7::optional, HL7::repetition_on);
    addObject<SAC>(ORG_O20_ORG_O20_SAC_37, "SAC.37", HL7::optional, HL7::repetition_on);
    addObject<SPM>(ORG_O20_ORG_O20_SPM_38, "SPM.38", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORG_O20_ORG_O20_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ORG_O20_ORG_O20_MSA_2);
  }
  ARV* getARV_3(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORG_O20_ORG_O20_ARV_3);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ORG_O20_ORG_O20_ERR_4);
  }
  SFT* getSFT_5(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ORG_O20_ORG_O20_SFT_5);
  }
  UAC* getUAC_6(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ORG_O20_ORG_O20_UAC_6);
  }
  NTE* getNTE_7(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORG_O20_ORG_O20_NTE_7);
  }
  ARV* getARV_11(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORG_O20_ORG_O20_ARV_11);
  }
  NTE* getNTE_12(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORG_O20_ORG_O20_NTE_12);
  }
  PID* getPID_13(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORG_O20_ORG_O20_PID_13);
  }
  PRT* getPRT_14(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORG_O20_ORG_O20_PRT_14);
  }
  ARV* getARV_15(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORG_O20_ORG_O20_ARV_15);
  }
  NTE* getNTE_16(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORG_O20_ORG_O20_NTE_16);
  }
  PID* getPID_17(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORG_O20_ORG_O20_PID_17);
  }
  PRT* getPRT_18(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORG_O20_ORG_O20_PRT_18);
  }
  CTI* getCTI_22(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, ORG_O20_ORG_O20_CTI_22);
  }
  ORC* getORC_23(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORG_O20_ORG_O20_ORC_23);
  }
  PRT* getPRT_24(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORG_O20_ORG_O20_PRT_24);
  }
  TQ1* getTQ1_25(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORG_O20_ORG_O20_TQ1_25);
  }
  TQ2* getTQ2_26(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORG_O20_ORG_O20_TQ2_26);
  }
  TQ1* getTQ1_27(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORG_O20_ORG_O20_TQ1_27);
  }
  TQ2* getTQ2_28(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORG_O20_ORG_O20_TQ2_28);
  }
  NTE* getNTE_29(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORG_O20_ORG_O20_NTE_29);
  }
  OBR* getOBR_30(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, ORG_O20_ORG_O20_OBR_30);
  }
  PRT* getPRT_31(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORG_O20_ORG_O20_PRT_31);
  }
  TQ1* getTQ1_32(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORG_O20_ORG_O20_TQ1_32);
  }
  TQ2* getTQ2_33(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORG_O20_ORG_O20_TQ2_33);
  }
  NTE* getNTE_34(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORG_O20_ORG_O20_NTE_34);
  }
  OBR* getOBR_35(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, ORG_O20_ORG_O20_OBR_35);
  }
  PRT* getPRT_36(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORG_O20_ORG_O20_PRT_36);
  }
  SAC* getSAC_37(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, ORG_O20_ORG_O20_SAC_37);
  }
  SPM* getSPM_38(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, ORG_O20_ORG_O20_SPM_38);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_3(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_ARV_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_5(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_SFT_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_6(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_UAC_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_7(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_NTE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_11(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_ARV_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_12(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_NTE_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_13(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_PID_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_14(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_PRT_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_15(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_ARV_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_16(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_NTE_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_17(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_PID_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_18(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_PRT_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_22(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_CTI_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_23(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_ORC_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_24(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_PRT_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_25(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_TQ1_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_26(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_TQ2_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_27(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_TQ1_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_28(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_TQ2_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_29(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_NTE_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_30(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_OBR_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_31(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_PRT_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_32(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_TQ1_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_33(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_TQ2_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_34(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_NTE_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_35(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_OBR_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_36(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_PRT_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_37(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_SAC_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_38(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_SPM_38) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORG_O20_ORG_O20_ */
} /* namespace HL7_29 */
#endif /*  __ORG_O20_ORG_O20__29_H__ */
