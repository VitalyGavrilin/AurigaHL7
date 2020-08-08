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


#ifndef __OMD_O03_OMD_O03__29_H__
#define __OMD_O03_OMD_O03__29_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/ARV.h"
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
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct OMD_O03_OMD_O03_PATIENT; /* PATIENT */
struct OMD_O03_OMD_O03_ORDER_DIET; /* ORDER_DIET */
struct OMD_O03_OMD_O03_ORDER_TRAY; /* ORDER_TRAY */
struct OMD_O03_OMD_O03_TIMING_DIET; /* TIMING_DIET */
struct OMD_O03_OMD_O03_DIET; /* DIET */
struct OMD_O03_OMD_O03_OBSERVATION; /* OBSERVATION */
struct OMD_O03_OMD_O03_TIMING_TRAY; /* TIMING_TRAY */
struct OMD_O03_OMD_O03_PATIENT_VISIT; /* PATIENT_VISIT */
struct OMD_O03_OMD_O03_INSURANCE; /* INSURANCE */

/*  */
struct OMD_O03_OMD_O03 : public HL7Message {
  OMD_O03_OMD_O03() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMD_O03_OMD_O03_MSH_1,
    OMD_O03_OMD_O03_ARV_2,
    OMD_O03_OMD_O03_SFT_3,
    OMD_O03_OMD_O03_UAC_4,
    OMD_O03_OMD_O03_NTE_5,
    OMD_O03_OMD_O03_ORC_11,
    OMD_O03_OMD_O03_PRT_12,
    OMD_O03_OMD_O03_TQ1_13,
    OMD_O03_OMD_O03_TQ2_14,
    OMD_O03_OMD_O03_TQ1_15,
    OMD_O03_OMD_O03_TQ2_16,
    OMD_O03_OMD_O03_NTE_18,
    OMD_O03_OMD_O03_NTE_20,
    OMD_O03_OMD_O03_OBX_21,
    OMD_O03_OMD_O03_NTE_24,
    OMD_O03_OMD_O03_ORC_26,
    OMD_O03_OMD_O03_TQ1_28,
    OMD_O03_OMD_O03_TQ2_29,
    OMD_O03_OMD_O03_AL1_32,
    OMD_O03_OMD_O03_ARV_33,
    OMD_O03_OMD_O03_GT1_34,
    OMD_O03_OMD_O03_NTE_35,
    OMD_O03_OMD_O03_PD1_36,
    OMD_O03_OMD_O03_PID_37,
    OMD_O03_OMD_O03_PRT_38,
    OMD_O03_OMD_O03_PRT_39,
    OMD_O03_OMD_O03_PV1_40,
    OMD_O03_OMD_O03_PV2_41,
    OMD_O03_OMD_O03_PRT_42,
    OMD_O03_OMD_O03_PV1_43,
    OMD_O03_OMD_O03_PV2_44,
    OMD_O03_OMD_O03_IN1_45,
    OMD_O03_OMD_O03_IN2_46,
    OMD_O03_OMD_O03_IN3_47,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMD_O03_OMD_O03"; }
  OMD_O03_OMD_O03* create() const { return new OMD_O03_OMD_O03(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMD_O03_OMD_O03");
    addObject<MSH>(OMD_O03_OMD_O03_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OMD_O03_OMD_O03_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(OMD_O03_OMD_O03_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(OMD_O03_OMD_O03_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OMD_O03_OMD_O03_NTE_5, "NTE.5", HL7::optional, HL7::repetition_on);
    addObject<ORC>(OMD_O03_OMD_O03_ORC_11, "ORC.11", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMD_O03_OMD_O03_PRT_12, "PRT.12", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OMD_O03_OMD_O03_TQ1_13, "TQ1.13", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OMD_O03_OMD_O03_TQ2_14, "TQ2.14", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OMD_O03_OMD_O03_TQ1_15, "TQ1.15", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OMD_O03_OMD_O03_TQ2_16, "TQ2.16", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMD_O03_OMD_O03_NTE_18, "NTE.18", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMD_O03_OMD_O03_NTE_20, "NTE.20", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMD_O03_OMD_O03_OBX_21, "OBX.21", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(OMD_O03_OMD_O03_NTE_24, "NTE.24", HL7::optional, HL7::repetition_on);
    addObject<ORC>(OMD_O03_OMD_O03_ORC_26, "ORC.26", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(OMD_O03_OMD_O03_TQ1_28, "TQ1.28", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OMD_O03_OMD_O03_TQ2_29, "TQ2.29", HL7::optional, HL7::repetition_on);
    addObject<AL1>(OMD_O03_OMD_O03_AL1_32, "AL1.32", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OMD_O03_OMD_O03_ARV_33, "ARV.33", HL7::optional, HL7::repetition_on);
    addObject<GT1>(OMD_O03_OMD_O03_GT1_34, "GT1.34", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OMD_O03_OMD_O03_NTE_35, "NTE.35", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OMD_O03_OMD_O03_PD1_36, "PD1.36", HL7::optional, HL7::repetition_off);
    addObject<PID>(OMD_O03_OMD_O03_PID_37, "PID.37", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMD_O03_OMD_O03_PRT_38, "PRT.38", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMD_O03_OMD_O03_PRT_39, "PRT.39", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OMD_O03_OMD_O03_PV1_40, "PV1.40", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OMD_O03_OMD_O03_PV2_41, "PV2.41", HL7::optional, HL7::repetition_off);
    addObject<PRT>(OMD_O03_OMD_O03_PRT_42, "PRT.42", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OMD_O03_OMD_O03_PV1_43, "PV1.43", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OMD_O03_OMD_O03_PV2_44, "PV2.44", HL7::optional, HL7::repetition_off);
    addObject<IN1>(OMD_O03_OMD_O03_IN1_45, "IN1.45", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OMD_O03_OMD_O03_IN2_46, "IN2.46", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OMD_O03_OMD_O03_IN3_47, "IN3.47", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OMD_O03_OMD_O03_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMD_O03_OMD_O03_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, OMD_O03_OMD_O03_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, OMD_O03_OMD_O03_UAC_4);
  }
  NTE* getNTE_5(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMD_O03_OMD_O03_NTE_5);
  }
  ORC* getORC_11(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OMD_O03_OMD_O03_ORC_11);
  }
  PRT* getPRT_12(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMD_O03_OMD_O03_PRT_12);
  }
  TQ1* getTQ1_13(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMD_O03_OMD_O03_TQ1_13);
  }
  TQ2* getTQ2_14(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMD_O03_OMD_O03_TQ2_14);
  }
  TQ1* getTQ1_15(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMD_O03_OMD_O03_TQ1_15);
  }
  TQ2* getTQ2_16(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMD_O03_OMD_O03_TQ2_16);
  }
  NTE* getNTE_18(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMD_O03_OMD_O03_NTE_18);
  }
  NTE* getNTE_20(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMD_O03_OMD_O03_NTE_20);
  }
  OBX* getOBX_21(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMD_O03_OMD_O03_OBX_21);
  }
  NTE* getNTE_24(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMD_O03_OMD_O03_NTE_24);
  }
  ORC* getORC_26(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OMD_O03_OMD_O03_ORC_26);
  }
  TQ1* getTQ1_28(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMD_O03_OMD_O03_TQ1_28);
  }
  TQ2* getTQ2_29(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMD_O03_OMD_O03_TQ2_29);
  }
  AL1* getAL1_32(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OMD_O03_OMD_O03_AL1_32);
  }
  ARV* getARV_33(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMD_O03_OMD_O03_ARV_33);
  }
  GT1* getGT1_34(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, OMD_O03_OMD_O03_GT1_34);
  }
  NTE* getNTE_35(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMD_O03_OMD_O03_NTE_35);
  }
  PD1* getPD1_36(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMD_O03_OMD_O03_PD1_36);
  }
  PID* getPID_37(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMD_O03_OMD_O03_PID_37);
  }
  PRT* getPRT_38(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMD_O03_OMD_O03_PRT_38);
  }
  PRT* getPRT_39(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMD_O03_OMD_O03_PRT_39);
  }
  PV1* getPV1_40(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMD_O03_OMD_O03_PV1_40);
  }
  PV2* getPV2_41(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMD_O03_OMD_O03_PV2_41);
  }
  PRT* getPRT_42(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMD_O03_OMD_O03_PRT_42);
  }
  PV1* getPV1_43(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMD_O03_OMD_O03_PV1_43);
  }
  PV2* getPV2_44(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMD_O03_OMD_O03_PV2_44);
  }
  IN1* getIN1_45(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OMD_O03_OMD_O03_IN1_45);
  }
  IN2* getIN2_46(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OMD_O03_OMD_O03_IN2_46);
  }
  IN3* getIN3_47(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OMD_O03_OMD_O03_IN3_47);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_5(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_NTE_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_11(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_ORC_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_12(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_PRT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_13(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_TQ1_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_14(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_TQ2_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_15(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_TQ1_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_16(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_TQ2_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_18(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_NTE_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_20(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_NTE_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_21(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_OBX_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_24(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_NTE_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_26(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_ORC_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_28(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_TQ1_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_29(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_TQ2_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_32(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_AL1_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_33(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_ARV_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_34(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_GT1_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_35(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_NTE_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_36(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_PD1_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_37(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_PID_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_38(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_PRT_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_39(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_PRT_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_40(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_PV1_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_41(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_PV2_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_42(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_PRT_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_43(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_PV1_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_44(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_PV2_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_45(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_IN1_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_46(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_IN2_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_47(size_t index = 0) {
    try {
      return this->getObject(index, OMD_O03_OMD_O03_IN3_47) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMD_O03_OMD_O03_ */
} /* namespace HL7_29 */
#endif /*  __OMD_O03_OMD_O03__29_H__ */
