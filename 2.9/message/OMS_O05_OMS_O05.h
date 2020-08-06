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


#ifndef __OMS_O05_OMS_O05__29_H__
#define __OMS_O05_OMS_O05__29_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/ARV.h"
#include "../segment/BLG.h"
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
#include "../segment/RQ1.h"
#include "../segment/RQD.h"
#include "../segment/SFT.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct OMS_O05_OMS_O05_PATIENT; /* PATIENT */
struct OMS_O05_OMS_O05_ORDER; /* ORDER */
struct OMS_O05_OMS_O05_TIMING; /* TIMING */
struct OMS_O05_OMS_O05_OBSERVATION; /* OBSERVATION */
struct OMS_O05_OMS_O05_PATIENT_VISIT; /* PATIENT_VISIT */
struct OMS_O05_OMS_O05_INSURANCE; /* INSURANCE */

/*  */
struct OMS_O05_OMS_O05 : public HL7Message {
  OMS_O05_OMS_O05() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMS_O05_OMS_O05_MSH_1,
    OMS_O05_OMS_O05_ARV_2,
    OMS_O05_OMS_O05_SFT_3,
    OMS_O05_OMS_O05_UAC_4,
    OMS_O05_OMS_O05_NTE_5,
    OMS_O05_OMS_O05_BLG_10,
    OMS_O05_OMS_O05_NTE_11,
    OMS_O05_OMS_O05_ORC_12,
    OMS_O05_OMS_O05_RQ1_14,
    OMS_O05_OMS_O05_RQD_15,
    OMS_O05_OMS_O05_TQ1_16,
    OMS_O05_OMS_O05_TQ2_17,
    OMS_O05_OMS_O05_TQ1_18,
    OMS_O05_OMS_O05_TQ2_19,
    OMS_O05_OMS_O05_NTE_20,
    OMS_O05_OMS_O05_OBX_21,
    OMS_O05_OMS_O05_AL1_25,
    OMS_O05_OMS_O05_ARV_26,
    OMS_O05_OMS_O05_GT1_27,
    OMS_O05_OMS_O05_NTE_28,
    OMS_O05_OMS_O05_PD1_29,
    OMS_O05_OMS_O05_PID_30,
    OMS_O05_OMS_O05_PRT_31,
    OMS_O05_OMS_O05_PRT_32,
    OMS_O05_OMS_O05_PV1_33,
    OMS_O05_OMS_O05_PV2_34,
    OMS_O05_OMS_O05_PRT_35,
    OMS_O05_OMS_O05_PV1_36,
    OMS_O05_OMS_O05_PV2_37,
    OMS_O05_OMS_O05_IN1_38,
    OMS_O05_OMS_O05_IN2_39,
    OMS_O05_OMS_O05_IN3_40,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMS_O05_OMS_O05"; }
  OMS_O05_OMS_O05* create() const { return new OMS_O05_OMS_O05(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMS_O05_OMS_O05");
    addObject<MSH>(OMS_O05_OMS_O05_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OMS_O05_OMS_O05_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(OMS_O05_OMS_O05_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(OMS_O05_OMS_O05_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OMS_O05_OMS_O05_NTE_5, "NTE.5", HL7::optional, HL7::repetition_on);
    addObject<BLG>(OMS_O05_OMS_O05_BLG_10, "BLG.10", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OMS_O05_OMS_O05_NTE_11, "NTE.11", HL7::optional, HL7::repetition_on);
    addObject<ORC>(OMS_O05_OMS_O05_ORC_12, "ORC.12", HL7::initialized, HL7::repetition_off);
    addObject<RQ1>(OMS_O05_OMS_O05_RQ1_14, "RQ1.14", HL7::optional, HL7::repetition_off);
    addObject<RQD>(OMS_O05_OMS_O05_RQD_15, "RQD.15", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(OMS_O05_OMS_O05_TQ1_16, "TQ1.16", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OMS_O05_OMS_O05_TQ2_17, "TQ2.17", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OMS_O05_OMS_O05_TQ1_18, "TQ1.18", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OMS_O05_OMS_O05_TQ2_19, "TQ2.19", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMS_O05_OMS_O05_NTE_20, "NTE.20", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMS_O05_OMS_O05_OBX_21, "OBX.21", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(OMS_O05_OMS_O05_AL1_25, "AL1.25", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OMS_O05_OMS_O05_ARV_26, "ARV.26", HL7::optional, HL7::repetition_on);
    addObject<GT1>(OMS_O05_OMS_O05_GT1_27, "GT1.27", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OMS_O05_OMS_O05_NTE_28, "NTE.28", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OMS_O05_OMS_O05_PD1_29, "PD1.29", HL7::optional, HL7::repetition_off);
    addObject<PID>(OMS_O05_OMS_O05_PID_30, "PID.30", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMS_O05_OMS_O05_PRT_31, "PRT.31", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMS_O05_OMS_O05_PRT_32, "PRT.32", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OMS_O05_OMS_O05_PV1_33, "PV1.33", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OMS_O05_OMS_O05_PV2_34, "PV2.34", HL7::optional, HL7::repetition_off);
    addObject<PRT>(OMS_O05_OMS_O05_PRT_35, "PRT.35", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OMS_O05_OMS_O05_PV1_36, "PV1.36", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OMS_O05_OMS_O05_PV2_37, "PV2.37", HL7::optional, HL7::repetition_off);
    addObject<IN1>(OMS_O05_OMS_O05_IN1_38, "IN1.38", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OMS_O05_OMS_O05_IN2_39, "IN2.39", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OMS_O05_OMS_O05_IN3_40, "IN3.40", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OMS_O05_OMS_O05_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMS_O05_OMS_O05_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, OMS_O05_OMS_O05_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, OMS_O05_OMS_O05_UAC_4);
  }
  NTE* getNTE_5(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMS_O05_OMS_O05_NTE_5);
  }
  BLG* getBLG_10(size_t index = 0) {
    return (BLG*)this->getObjectSafe(index, OMS_O05_OMS_O05_BLG_10);
  }
  NTE* getNTE_11(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMS_O05_OMS_O05_NTE_11);
  }
  ORC* getORC_12(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OMS_O05_OMS_O05_ORC_12);
  }
  RQ1* getRQ1_14(size_t index = 0) {
    return (RQ1*)this->getObjectSafe(index, OMS_O05_OMS_O05_RQ1_14);
  }
  RQD* getRQD_15(size_t index = 0) {
    return (RQD*)this->getObjectSafe(index, OMS_O05_OMS_O05_RQD_15);
  }
  TQ1* getTQ1_16(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMS_O05_OMS_O05_TQ1_16);
  }
  TQ2* getTQ2_17(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMS_O05_OMS_O05_TQ2_17);
  }
  TQ1* getTQ1_18(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMS_O05_OMS_O05_TQ1_18);
  }
  TQ2* getTQ2_19(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMS_O05_OMS_O05_TQ2_19);
  }
  NTE* getNTE_20(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMS_O05_OMS_O05_NTE_20);
  }
  OBX* getOBX_21(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMS_O05_OMS_O05_OBX_21);
  }
  AL1* getAL1_25(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OMS_O05_OMS_O05_AL1_25);
  }
  ARV* getARV_26(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMS_O05_OMS_O05_ARV_26);
  }
  GT1* getGT1_27(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, OMS_O05_OMS_O05_GT1_27);
  }
  NTE* getNTE_28(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMS_O05_OMS_O05_NTE_28);
  }
  PD1* getPD1_29(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMS_O05_OMS_O05_PD1_29);
  }
  PID* getPID_30(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMS_O05_OMS_O05_PID_30);
  }
  PRT* getPRT_31(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMS_O05_OMS_O05_PRT_31);
  }
  PRT* getPRT_32(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMS_O05_OMS_O05_PRT_32);
  }
  PV1* getPV1_33(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMS_O05_OMS_O05_PV1_33);
  }
  PV2* getPV2_34(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMS_O05_OMS_O05_PV2_34);
  }
  PRT* getPRT_35(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMS_O05_OMS_O05_PRT_35);
  }
  PV1* getPV1_36(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMS_O05_OMS_O05_PV1_36);
  }
  PV2* getPV2_37(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMS_O05_OMS_O05_PV2_37);
  }
  IN1* getIN1_38(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OMS_O05_OMS_O05_IN1_38);
  }
  IN2* getIN2_39(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OMS_O05_OMS_O05_IN2_39);
  }
  IN3* getIN3_40(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OMS_O05_OMS_O05_IN3_40);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_5(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_NTE_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBLG_10(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_BLG_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_11(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_NTE_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_12(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_ORC_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRQ1_14(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_RQ1_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRQD_15(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_RQD_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_16(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_TQ1_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_17(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_TQ2_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_18(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_TQ1_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_19(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_TQ2_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_20(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_NTE_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_21(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_OBX_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_25(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_AL1_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_26(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_ARV_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_27(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_GT1_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_28(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_NTE_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_29(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_PD1_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_30(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_PID_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_31(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_PRT_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_32(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_PRT_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_33(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_PV1_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_34(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_PV2_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_35(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_PRT_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_36(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_PV1_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_37(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_PV2_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_38(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_IN1_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_39(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_IN2_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_40(size_t index = 0) {
    try {
      return this->getObject(index, OMS_O05_OMS_O05_IN3_40) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMS_O05_OMS_O05_ */
} /* namespace HL7_29 */
#endif /*  __OMS_O05_OMS_O05__29_H__ */
