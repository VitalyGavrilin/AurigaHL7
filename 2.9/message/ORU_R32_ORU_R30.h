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


#ifndef __ORU_R32_ORU_R30__29_H__
#define __ORU_R32_ORU_R30__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/DEV.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/OH1.h"
#include "../segment/OH2.h"
#include "../segment/OH3.h"
#include "../segment/OH4.h"
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
struct ORU_R32_ORU_R30_PATIENT_OBSERVATION; /* PATIENT_OBSERVATION */
struct ORU_R32_ORU_R30_VISIT; /* VISIT */
struct ORU_R32_ORU_R30_TIMING_QTY; /* TIMING_QTY */
struct ORU_R32_ORU_R30_OBSERVATION; /* OBSERVATION */
struct ORU_R32_ORU_R30_DEVICE; /* DEVICE */

/*  */
struct ORU_R32_ORU_R30 : public HL7Message {
  ORU_R32_ORU_R30() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORU_R32_ORU_R30_MSH_1,
    ORU_R32_ORU_R30_ARV_2,
    ORU_R32_ORU_R30_SFT_3,
    ORU_R32_ORU_R30_UAC_4,
    ORU_R32_ORU_R30_PID_5,
    ORU_R32_ORU_R30_PD1_6,
    ORU_R32_ORU_R30_PRT_7,
    ORU_R32_ORU_R30_OH1_8,
    ORU_R32_ORU_R30_OH2_9,
    ORU_R32_ORU_R30_OH3_10,
    ORU_R32_ORU_R30_OH4_11,
    ORU_R32_ORU_R30_ARV_12,
    ORU_R32_ORU_R30_ORC_15,
    ORU_R32_ORU_R30_PRT_16,
    ORU_R32_ORU_R30_OBR_17,
    ORU_R32_ORU_R30_NTE_18,
    ORU_R32_ORU_R30_PRT_19,
    ORU_R32_ORU_R30_DEV_24,
    ORU_R32_ORU_R30_OBX_25,
    ORU_R32_ORU_R30_NTE_26,
    ORU_R32_ORU_R30_OBX_27,
    ORU_R32_ORU_R30_PRT_28,
    ORU_R32_ORU_R30_OBX_29,
    ORU_R32_ORU_R30_PRT_30,
    ORU_R32_ORU_R30_TQ1_31,
    ORU_R32_ORU_R30_TQ2_32,
    ORU_R32_ORU_R30_PRT_33,
    ORU_R32_ORU_R30_PV1_34,
    ORU_R32_ORU_R30_PV2_35,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORU_R32_ORU_R30"; }
  ORU_R32_ORU_R30* create() const { return new ORU_R32_ORU_R30(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORU_R32_ORU_R30");
    addObject<MSH>(ORU_R32_ORU_R30_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ORU_R32_ORU_R30_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ORU_R32_ORU_R30_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ORU_R32_ORU_R30_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<PID>(ORU_R32_ORU_R30_PID_5, "PID.5", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(ORU_R32_ORU_R30_PD1_6, "PD1.6", HL7::optional, HL7::repetition_off);
    addObject<PRT>(ORU_R32_ORU_R30_PRT_7, "PRT.7", HL7::optional, HL7::repetition_on);
    addObject<OH1>(ORU_R32_ORU_R30_OH1_8, "OH1.8", HL7::optional, HL7::repetition_on);
    addObject<OH2>(ORU_R32_ORU_R30_OH2_9, "OH2.9", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ORU_R32_ORU_R30_OH3_10, "OH3.10", HL7::optional, HL7::repetition_off);
    addObject<OH4>(ORU_R32_ORU_R30_OH4_11, "OH4.11", HL7::optional, HL7::repetition_on);
    addObject<ARV>(ORU_R32_ORU_R30_ARV_12, "ARV.12", HL7::optional, HL7::repetition_on);
    addObject<ORC>(ORU_R32_ORU_R30_ORC_15, "ORC.15", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R32_ORU_R30_PRT_16, "PRT.16", HL7::optional, HL7::repetition_on);
    addObject<OBR>(ORU_R32_ORU_R30_OBR_17, "OBR.17", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(ORU_R32_ORU_R30_NTE_18, "NTE.18", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORU_R32_ORU_R30_PRT_19, "PRT.19", HL7::optional, HL7::repetition_on);
    addObject<DEV>(ORU_R32_ORU_R30_DEV_24, "DEV.24", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(ORU_R32_ORU_R30_OBX_25, "OBX.25", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORU_R32_ORU_R30_NTE_26, "NTE.26", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R32_ORU_R30_OBX_27, "OBX.27", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R32_ORU_R30_PRT_28, "PRT.28", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R32_ORU_R30_OBX_29, "OBX.29", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R32_ORU_R30_PRT_30, "PRT.30", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(ORU_R32_ORU_R30_TQ1_31, "TQ1.31", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORU_R32_ORU_R30_TQ2_32, "TQ2.32", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORU_R32_ORU_R30_PRT_33, "PRT.33", HL7::optional, HL7::repetition_on);
    addObject<PV1>(ORU_R32_ORU_R30_PV1_34, "PV1.34", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ORU_R32_ORU_R30_PV2_35, "PV2.35", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORU_R32_ORU_R30_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORU_R32_ORU_R30_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ORU_R32_ORU_R30_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ORU_R32_ORU_R30_UAC_4);
  }
  PID* getPID_5(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORU_R32_ORU_R30_PID_5);
  }
  PD1* getPD1_6(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ORU_R32_ORU_R30_PD1_6);
  }
  PRT* getPRT_7(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R32_ORU_R30_PRT_7);
  }
  OH1* getOH1_8(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, ORU_R32_ORU_R30_OH1_8);
  }
  OH2* getOH2_9(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ORU_R32_ORU_R30_OH2_9);
  }
  OH3* getOH3_10(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ORU_R32_ORU_R30_OH3_10);
  }
  OH4* getOH4_11(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, ORU_R32_ORU_R30_OH4_11);
  }
  ARV* getARV_12(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORU_R32_ORU_R30_ARV_12);
  }
  ORC* getORC_15(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORU_R32_ORU_R30_ORC_15);
  }
  PRT* getPRT_16(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R32_ORU_R30_PRT_16);
  }
  OBR* getOBR_17(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, ORU_R32_ORU_R30_OBR_17);
  }
  NTE* getNTE_18(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORU_R32_ORU_R30_NTE_18);
  }
  PRT* getPRT_19(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R32_ORU_R30_PRT_19);
  }
  DEV* getDEV_24(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, ORU_R32_ORU_R30_DEV_24);
  }
  OBX* getOBX_25(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R32_ORU_R30_OBX_25);
  }
  NTE* getNTE_26(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORU_R32_ORU_R30_NTE_26);
  }
  OBX* getOBX_27(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R32_ORU_R30_OBX_27);
  }
  PRT* getPRT_28(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R32_ORU_R30_PRT_28);
  }
  OBX* getOBX_29(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R32_ORU_R30_OBX_29);
  }
  PRT* getPRT_30(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R32_ORU_R30_PRT_30);
  }
  TQ1* getTQ1_31(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORU_R32_ORU_R30_TQ1_31);
  }
  TQ2* getTQ2_32(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORU_R32_ORU_R30_TQ2_32);
  }
  PRT* getPRT_33(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R32_ORU_R30_PRT_33);
  }
  PV1* getPV1_34(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ORU_R32_ORU_R30_PV1_34);
  }
  PV2* getPV2_35(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ORU_R32_ORU_R30_PV2_35);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_5(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_PID_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_6(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_PD1_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_7(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_PRT_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_8(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_OH1_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_9(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_OH2_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_10(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_OH3_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_11(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_OH4_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_12(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_ARV_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_15(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_ORC_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_16(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_PRT_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_17(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_OBR_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_18(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_NTE_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_19(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_PRT_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_24(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_DEV_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_25(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_OBX_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_26(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_NTE_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_27(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_OBX_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_28(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_PRT_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_29(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_OBX_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_30(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_PRT_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_31(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_TQ1_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_32(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_TQ2_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_33(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_PRT_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_34(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_PV1_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_35(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R32_ORU_R30_PV2_35) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORU_R32_ORU_R30_ */
} /* namespace HL7_29 */
#endif /*  __ORU_R32_ORU_R30__29_H__ */
