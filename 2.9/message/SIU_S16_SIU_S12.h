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


#ifndef __SIU_S16_SIU_S12__29_H__
#define __SIU_S16_SIU_S12__29_H__

#include "../../common/Util.h"
#include "../segment/AIG.h"
#include "../segment/AIL.h"
#include "../segment/AIP.h"
#include "../segment/AIS.h"
#include "../segment/DG1.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBX.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/RGS.h"
#include "../segment/SCH.h"
#include "../segment/TQ1.h"

namespace HL7_29 {

/* Internal structures/groups */
struct SIU_S16_SIU_S12_PATIENT; /* PATIENT */
struct SIU_S16_SIU_S12_RESOURCES; /* RESOURCES */
struct SIU_S16_SIU_S12_SERVICE; /* SERVICE */
struct SIU_S16_SIU_S12_GENERAL_RESOURCE; /* GENERAL_RESOURCE */
struct SIU_S16_SIU_S12_LOCATION_RESOURCE; /* LOCATION_RESOURCE */
struct SIU_S16_SIU_S12_PERSONNEL_RESOURCE; /* PERSONNEL_RESOURCE */

/*  */
struct SIU_S16_SIU_S12 : public HL7Message {
  SIU_S16_SIU_S12() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SIU_S16_SIU_S12_MSH_1,
    SIU_S16_SIU_S12_SCH_2,
    SIU_S16_SIU_S12_TQ1_3,
    SIU_S16_SIU_S12_NTE_4,
    SIU_S16_SIU_S12_DG1_7,
    SIU_S16_SIU_S12_OBX_8,
    SIU_S16_SIU_S12_PD1_9,
    SIU_S16_SIU_S12_PID_10,
    SIU_S16_SIU_S12_PRT_11,
    SIU_S16_SIU_S12_PV1_12,
    SIU_S16_SIU_S12_PV2_13,
    SIU_S16_SIU_S12_RGS_18,
    SIU_S16_SIU_S12_AIS_19,
    SIU_S16_SIU_S12_NTE_20,
    SIU_S16_SIU_S12_AIS_21,
    SIU_S16_SIU_S12_NTE_22,
    SIU_S16_SIU_S12_AIG_23,
    SIU_S16_SIU_S12_NTE_24,
    SIU_S16_SIU_S12_AIS_25,
    SIU_S16_SIU_S12_NTE_26,
    SIU_S16_SIU_S12_AIG_27,
    SIU_S16_SIU_S12_NTE_28,
    SIU_S16_SIU_S12_AIL_29,
    SIU_S16_SIU_S12_NTE_30,
    SIU_S16_SIU_S12_AIS_31,
    SIU_S16_SIU_S12_NTE_32,
    SIU_S16_SIU_S12_AIG_33,
    SIU_S16_SIU_S12_NTE_34,
    SIU_S16_SIU_S12_AIL_35,
    SIU_S16_SIU_S12_NTE_36,
    SIU_S16_SIU_S12_AIP_37,
    SIU_S16_SIU_S12_NTE_38,
    FIELD_ID_MAX
  };

  const char* className() const { return "SIU_S16_SIU_S12"; }
  SIU_S16_SIU_S12* create() const { return new SIU_S16_SIU_S12(); }

 private:
  /* Initialize object */
  void init() {
    setName("SIU_S16_SIU_S12");
    addObject<MSH>(SIU_S16_SIU_S12_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SCH>(SIU_S16_SIU_S12_SCH_2, "SCH.2", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(SIU_S16_SIU_S12_TQ1_3, "TQ1.3", HL7::optional, HL7::repetition_on);
    addObject<NTE>(SIU_S16_SIU_S12_NTE_4, "NTE.4", HL7::optional, HL7::repetition_on);
    addObject<DG1>(SIU_S16_SIU_S12_DG1_7, "DG1.7", HL7::optional, HL7::repetition_on);
    addObject<OBX>(SIU_S16_SIU_S12_OBX_8, "OBX.8", HL7::optional, HL7::repetition_on);
    addObject<PD1>(SIU_S16_SIU_S12_PD1_9, "PD1.9", HL7::optional, HL7::repetition_off);
    addObject<PID>(SIU_S16_SIU_S12_PID_10, "PID.10", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(SIU_S16_SIU_S12_PRT_11, "PRT.11", HL7::optional, HL7::repetition_on);
    addObject<PV1>(SIU_S16_SIU_S12_PV1_12, "PV1.12", HL7::optional, HL7::repetition_off);
    addObject<PV2>(SIU_S16_SIU_S12_PV2_13, "PV2.13", HL7::optional, HL7::repetition_off);
    addObject<RGS>(SIU_S16_SIU_S12_RGS_18, "RGS.18", HL7::initialized, HL7::repetition_off);
    addObject<AIS>(SIU_S16_SIU_S12_AIS_19, "AIS.19", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SIU_S16_SIU_S12_NTE_20, "NTE.20", HL7::optional, HL7::repetition_on);
    addObject<AIS>(SIU_S16_SIU_S12_AIS_21, "AIS.21", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SIU_S16_SIU_S12_NTE_22, "NTE.22", HL7::optional, HL7::repetition_on);
    addObject<AIG>(SIU_S16_SIU_S12_AIG_23, "AIG.23", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SIU_S16_SIU_S12_NTE_24, "NTE.24", HL7::optional, HL7::repetition_on);
    addObject<AIS>(SIU_S16_SIU_S12_AIS_25, "AIS.25", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SIU_S16_SIU_S12_NTE_26, "NTE.26", HL7::optional, HL7::repetition_on);
    addObject<AIG>(SIU_S16_SIU_S12_AIG_27, "AIG.27", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SIU_S16_SIU_S12_NTE_28, "NTE.28", HL7::optional, HL7::repetition_on);
    addObject<AIL>(SIU_S16_SIU_S12_AIL_29, "AIL.29", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SIU_S16_SIU_S12_NTE_30, "NTE.30", HL7::optional, HL7::repetition_on);
    addObject<AIS>(SIU_S16_SIU_S12_AIS_31, "AIS.31", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SIU_S16_SIU_S12_NTE_32, "NTE.32", HL7::optional, HL7::repetition_on);
    addObject<AIG>(SIU_S16_SIU_S12_AIG_33, "AIG.33", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SIU_S16_SIU_S12_NTE_34, "NTE.34", HL7::optional, HL7::repetition_on);
    addObject<AIL>(SIU_S16_SIU_S12_AIL_35, "AIL.35", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SIU_S16_SIU_S12_NTE_36, "NTE.36", HL7::optional, HL7::repetition_on);
    addObject<AIP>(SIU_S16_SIU_S12_AIP_37, "AIP.37", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SIU_S16_SIU_S12_NTE_38, "NTE.38", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, SIU_S16_SIU_S12_MSH_1);
  }
  SCH* getSCH_2(size_t index = 0) {
    return (SCH*)this->getObjectSafe(index, SIU_S16_SIU_S12_SCH_2);
  }
  TQ1* getTQ1_3(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, SIU_S16_SIU_S12_TQ1_3);
  }
  NTE* getNTE_4(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S16_SIU_S12_NTE_4);
  }
  DG1* getDG1_7(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, SIU_S16_SIU_S12_DG1_7);
  }
  OBX* getOBX_8(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, SIU_S16_SIU_S12_OBX_8);
  }
  PD1* getPD1_9(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, SIU_S16_SIU_S12_PD1_9);
  }
  PID* getPID_10(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, SIU_S16_SIU_S12_PID_10);
  }
  PRT* getPRT_11(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, SIU_S16_SIU_S12_PRT_11);
  }
  PV1* getPV1_12(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, SIU_S16_SIU_S12_PV1_12);
  }
  PV2* getPV2_13(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, SIU_S16_SIU_S12_PV2_13);
  }
  RGS* getRGS_18(size_t index = 0) {
    return (RGS*)this->getObjectSafe(index, SIU_S16_SIU_S12_RGS_18);
  }
  AIS* getAIS_19(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, SIU_S16_SIU_S12_AIS_19);
  }
  NTE* getNTE_20(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S16_SIU_S12_NTE_20);
  }
  AIS* getAIS_21(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, SIU_S16_SIU_S12_AIS_21);
  }
  NTE* getNTE_22(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S16_SIU_S12_NTE_22);
  }
  AIG* getAIG_23(size_t index = 0) {
    return (AIG*)this->getObjectSafe(index, SIU_S16_SIU_S12_AIG_23);
  }
  NTE* getNTE_24(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S16_SIU_S12_NTE_24);
  }
  AIS* getAIS_25(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, SIU_S16_SIU_S12_AIS_25);
  }
  NTE* getNTE_26(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S16_SIU_S12_NTE_26);
  }
  AIG* getAIG_27(size_t index = 0) {
    return (AIG*)this->getObjectSafe(index, SIU_S16_SIU_S12_AIG_27);
  }
  NTE* getNTE_28(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S16_SIU_S12_NTE_28);
  }
  AIL* getAIL_29(size_t index = 0) {
    return (AIL*)this->getObjectSafe(index, SIU_S16_SIU_S12_AIL_29);
  }
  NTE* getNTE_30(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S16_SIU_S12_NTE_30);
  }
  AIS* getAIS_31(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, SIU_S16_SIU_S12_AIS_31);
  }
  NTE* getNTE_32(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S16_SIU_S12_NTE_32);
  }
  AIG* getAIG_33(size_t index = 0) {
    return (AIG*)this->getObjectSafe(index, SIU_S16_SIU_S12_AIG_33);
  }
  NTE* getNTE_34(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S16_SIU_S12_NTE_34);
  }
  AIL* getAIL_35(size_t index = 0) {
    return (AIL*)this->getObjectSafe(index, SIU_S16_SIU_S12_AIL_35);
  }
  NTE* getNTE_36(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S16_SIU_S12_NTE_36);
  }
  AIP* getAIP_37(size_t index = 0) {
    return (AIP*)this->getObjectSafe(index, SIU_S16_SIU_S12_AIP_37);
  }
  NTE* getNTE_38(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SIU_S16_SIU_S12_NTE_38);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSCH_2(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_SCH_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_3(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_TQ1_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_4(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_NTE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_7(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_DG1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_8(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_OBX_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_9(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_PD1_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_10(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_PID_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_11(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_PRT_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_12(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_PV1_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_13(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_PV2_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRGS_18(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_RGS_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIS_19(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_AIS_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_20(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_NTE_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIS_21(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_AIS_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_22(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_NTE_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIG_23(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_AIG_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_24(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_NTE_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIS_25(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_AIS_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_26(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_NTE_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIG_27(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_AIG_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_28(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_NTE_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIL_29(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_AIL_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_30(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_NTE_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIS_31(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_AIS_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_32(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_NTE_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIG_33(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_AIG_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_34(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_NTE_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIL_35(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_AIL_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_36(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_NTE_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIP_37(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_AIP_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_38(size_t index = 0) {
    try {
      return this->getObject(index, SIU_S16_SIU_S12_NTE_38) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SIU_S16_SIU_S12_ */
} /* namespace HL7_29 */
#endif /*  __SIU_S16_SIU_S12__29_H__ */
