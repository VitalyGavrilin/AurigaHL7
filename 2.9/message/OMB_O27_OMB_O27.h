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


#ifndef __OMB_O27_OMB_O27__29_H__
#define __OMB_O27_OMB_O27__29_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/ARV.h"
#include "../segment/BLG.h"
#include "../segment/BPO.h"
#include "../segment/DG1.h"
#include "../segment/FT1.h"
#include "../segment/GT1.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IN3.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/SFT.h"
#include "../segment/SPM.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct OMB_O27_OMB_O27_PATIENT; /* PATIENT */
struct OMB_O27_OMB_O27_ORDER; /* ORDER */
struct OMB_O27_OMB_O27_TIMING; /* TIMING */
struct OMB_O27_OMB_O27_OBSERVATION; /* OBSERVATION */
struct OMB_O27_OMB_O27_PATIENT_VISIT; /* PATIENT_VISIT */
struct OMB_O27_OMB_O27_INSURANCE; /* INSURANCE */

/*  */
struct OMB_O27_OMB_O27 : public HL7Message {
  OMB_O27_OMB_O27() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMB_O27_OMB_O27_MSH_1,
    OMB_O27_OMB_O27_ARV_2,
    OMB_O27_OMB_O27_SFT_3,
    OMB_O27_OMB_O27_UAC_4,
    OMB_O27_OMB_O27_NTE_5,
    OMB_O27_OMB_O27_BLG_10,
    OMB_O27_OMB_O27_BPO_11,
    OMB_O27_OMB_O27_DG1_12,
    OMB_O27_OMB_O27_FT1_13,
    OMB_O27_OMB_O27_NTE_14,
    OMB_O27_OMB_O27_ORC_15,
    OMB_O27_OMB_O27_PRT_16,
    OMB_O27_OMB_O27_SPM_17,
    OMB_O27_OMB_O27_TQ1_18,
    OMB_O27_OMB_O27_TQ2_19,
    OMB_O27_OMB_O27_TQ1_20,
    OMB_O27_OMB_O27_TQ2_21,
    OMB_O27_OMB_O27_NTE_22,
    OMB_O27_OMB_O27_OBX_23,
    OMB_O27_OMB_O27_AL1_27,
    OMB_O27_OMB_O27_ARV_28,
    OMB_O27_OMB_O27_GT1_29,
    OMB_O27_OMB_O27_NTE_30,
    OMB_O27_OMB_O27_PD1_31,
    OMB_O27_OMB_O27_PID_32,
    OMB_O27_OMB_O27_PRT_33,
    OMB_O27_OMB_O27_PRT_34,
    OMB_O27_OMB_O27_PV1_35,
    OMB_O27_OMB_O27_PV2_36,
    OMB_O27_OMB_O27_PRT_37,
    OMB_O27_OMB_O27_PV1_38,
    OMB_O27_OMB_O27_PV2_39,
    OMB_O27_OMB_O27_IN1_40,
    OMB_O27_OMB_O27_IN2_41,
    OMB_O27_OMB_O27_IN3_42,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMB_O27_OMB_O27"; }
  OMB_O27_OMB_O27* create() const { return new OMB_O27_OMB_O27(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMB_O27_OMB_O27");
    addObject<MSH>(OMB_O27_OMB_O27_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OMB_O27_OMB_O27_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(OMB_O27_OMB_O27_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(OMB_O27_OMB_O27_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OMB_O27_OMB_O27_NTE_5, "NTE.5", HL7::optional, HL7::repetition_on);
    addObject<BLG>(OMB_O27_OMB_O27_BLG_10, "BLG.10", HL7::optional, HL7::repetition_off);
    addObject<BPO>(OMB_O27_OMB_O27_BPO_11, "BPO.11", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(OMB_O27_OMB_O27_DG1_12, "DG1.12", HL7::optional, HL7::repetition_on);
    addObject<FT1>(OMB_O27_OMB_O27_FT1_13, "FT1.13", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMB_O27_OMB_O27_NTE_14, "NTE.14", HL7::optional, HL7::repetition_on);
    addObject<ORC>(OMB_O27_OMB_O27_ORC_15, "ORC.15", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMB_O27_OMB_O27_PRT_16, "PRT.16", HL7::optional, HL7::repetition_on);
    addObject<SPM>(OMB_O27_OMB_O27_SPM_17, "SPM.17", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(OMB_O27_OMB_O27_TQ1_18, "TQ1.18", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OMB_O27_OMB_O27_TQ2_19, "TQ2.19", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OMB_O27_OMB_O27_TQ1_20, "TQ1.20", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OMB_O27_OMB_O27_TQ2_21, "TQ2.21", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMB_O27_OMB_O27_NTE_22, "NTE.22", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMB_O27_OMB_O27_OBX_23, "OBX.23", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(OMB_O27_OMB_O27_AL1_27, "AL1.27", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OMB_O27_OMB_O27_ARV_28, "ARV.28", HL7::optional, HL7::repetition_on);
    addObject<GT1>(OMB_O27_OMB_O27_GT1_29, "GT1.29", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OMB_O27_OMB_O27_NTE_30, "NTE.30", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OMB_O27_OMB_O27_PD1_31, "PD1.31", HL7::optional, HL7::repetition_off);
    addObject<PID>(OMB_O27_OMB_O27_PID_32, "PID.32", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMB_O27_OMB_O27_PRT_33, "PRT.33", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMB_O27_OMB_O27_PRT_34, "PRT.34", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OMB_O27_OMB_O27_PV1_35, "PV1.35", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OMB_O27_OMB_O27_PV2_36, "PV2.36", HL7::optional, HL7::repetition_off);
    addObject<PRT>(OMB_O27_OMB_O27_PRT_37, "PRT.37", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OMB_O27_OMB_O27_PV1_38, "PV1.38", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OMB_O27_OMB_O27_PV2_39, "PV2.39", HL7::optional, HL7::repetition_off);
    addObject<IN1>(OMB_O27_OMB_O27_IN1_40, "IN1.40", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OMB_O27_OMB_O27_IN2_41, "IN2.41", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OMB_O27_OMB_O27_IN3_42, "IN3.42", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OMB_O27_OMB_O27_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMB_O27_OMB_O27_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, OMB_O27_OMB_O27_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, OMB_O27_OMB_O27_UAC_4);
  }
  NTE* getNTE_5(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMB_O27_OMB_O27_NTE_5);
  }
  BLG* getBLG_10(size_t index = 0) {
    return (BLG*)this->getObjectSafe(index, OMB_O27_OMB_O27_BLG_10);
  }
  BPO* getBPO_11(size_t index = 0) {
    return (BPO*)this->getObjectSafe(index, OMB_O27_OMB_O27_BPO_11);
  }
  DG1* getDG1_12(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, OMB_O27_OMB_O27_DG1_12);
  }
  FT1* getFT1_13(size_t index = 0) {
    return (FT1*)this->getObjectSafe(index, OMB_O27_OMB_O27_FT1_13);
  }
  NTE* getNTE_14(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMB_O27_OMB_O27_NTE_14);
  }
  ORC* getORC_15(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OMB_O27_OMB_O27_ORC_15);
  }
  PRT* getPRT_16(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMB_O27_OMB_O27_PRT_16);
  }
  SPM* getSPM_17(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, OMB_O27_OMB_O27_SPM_17);
  }
  TQ1* getTQ1_18(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMB_O27_OMB_O27_TQ1_18);
  }
  TQ2* getTQ2_19(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMB_O27_OMB_O27_TQ2_19);
  }
  TQ1* getTQ1_20(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMB_O27_OMB_O27_TQ1_20);
  }
  TQ2* getTQ2_21(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMB_O27_OMB_O27_TQ2_21);
  }
  NTE* getNTE_22(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMB_O27_OMB_O27_NTE_22);
  }
  OBX* getOBX_23(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMB_O27_OMB_O27_OBX_23);
  }
  AL1* getAL1_27(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OMB_O27_OMB_O27_AL1_27);
  }
  ARV* getARV_28(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMB_O27_OMB_O27_ARV_28);
  }
  GT1* getGT1_29(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, OMB_O27_OMB_O27_GT1_29);
  }
  NTE* getNTE_30(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMB_O27_OMB_O27_NTE_30);
  }
  PD1* getPD1_31(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMB_O27_OMB_O27_PD1_31);
  }
  PID* getPID_32(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMB_O27_OMB_O27_PID_32);
  }
  PRT* getPRT_33(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMB_O27_OMB_O27_PRT_33);
  }
  PRT* getPRT_34(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMB_O27_OMB_O27_PRT_34);
  }
  PV1* getPV1_35(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMB_O27_OMB_O27_PV1_35);
  }
  PV2* getPV2_36(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMB_O27_OMB_O27_PV2_36);
  }
  PRT* getPRT_37(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMB_O27_OMB_O27_PRT_37);
  }
  PV1* getPV1_38(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMB_O27_OMB_O27_PV1_38);
  }
  PV2* getPV2_39(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMB_O27_OMB_O27_PV2_39);
  }
  IN1* getIN1_40(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OMB_O27_OMB_O27_IN1_40);
  }
  IN2* getIN2_41(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OMB_O27_OMB_O27_IN2_41);
  }
  IN3* getIN3_42(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OMB_O27_OMB_O27_IN3_42);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_5(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_NTE_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBLG_10(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_BLG_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBPO_11(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_BPO_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_12(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_DG1_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFT1_13(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_FT1_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_14(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_NTE_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_15(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_ORC_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_16(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_PRT_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_17(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_SPM_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_18(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_TQ1_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_19(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_TQ2_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_20(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_TQ1_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_21(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_TQ2_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_22(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_NTE_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_23(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_OBX_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_27(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_AL1_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_28(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_ARV_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_29(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_GT1_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_30(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_NTE_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_31(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_PD1_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_32(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_PID_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_33(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_PRT_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_34(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_PRT_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_35(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_PV1_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_36(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_PV2_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_37(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_PRT_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_38(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_PV1_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_39(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_PV2_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_40(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_IN1_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_41(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_IN2_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_42(size_t index = 0) {
    try {
      return this->getObject(index, OMB_O27_OMB_O27_IN3_42) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMB_O27_OMB_O27_ */
} /* namespace HL7_29 */
#endif /*  __OMB_O27_OMB_O27__29_H__ */
