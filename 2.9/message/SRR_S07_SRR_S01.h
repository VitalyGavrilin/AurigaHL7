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


#ifndef __SRR_S07_SRR_S01__29_H__
#define __SRR_S07_SRR_S01__29_H__

#include "../../common/Util.h"
#include "../segment/AIG.h"
#include "../segment/AIL.h"
#include "../segment/AIP.h"
#include "../segment/AIS.h"
#include "../segment/DG1.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/RGS.h"
#include "../segment/SCH.h"
#include "../segment/TQ1.h"

namespace HL7_29 {

/* Internal structures/groups */
struct SRR_S07_SRR_S01_SCHEDULE; /* SCHEDULE */
struct SRR_S07_SRR_S01_PATIENT; /* PATIENT */
struct SRR_S07_SRR_S01_RESOURCES; /* RESOURCES */
struct SRR_S07_SRR_S01_SERVICE; /* SERVICE */
struct SRR_S07_SRR_S01_GENERAL_RESOURCE; /* GENERAL_RESOURCE */
struct SRR_S07_SRR_S01_LOCATION_RESOURCE; /* LOCATION_RESOURCE */
struct SRR_S07_SRR_S01_PERSONNEL_RESOURCE; /* PERSONNEL_RESOURCE */

/*  */
struct SRR_S07_SRR_S01 : public HL7Message {
  SRR_S07_SRR_S01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SRR_S07_SRR_S01_MSH_1,
    SRR_S07_SRR_S01_MSA_2,
    SRR_S07_SRR_S01_ERR_3,
    SRR_S07_SRR_S01_NTE_7,
    SRR_S07_SRR_S01_SCH_8,
    SRR_S07_SRR_S01_TQ1_9,
    SRR_S07_SRR_S01_DG1_10,
    SRR_S07_SRR_S01_PID_11,
    SRR_S07_SRR_S01_PRT_12,
    SRR_S07_SRR_S01_PV1_13,
    SRR_S07_SRR_S01_PV2_14,
    SRR_S07_SRR_S01_DG1_15,
    SRR_S07_SRR_S01_PID_16,
    SRR_S07_SRR_S01_PRT_17,
    SRR_S07_SRR_S01_PV1_18,
    SRR_S07_SRR_S01_PV2_19,
    SRR_S07_SRR_S01_RGS_24,
    SRR_S07_SRR_S01_AIS_25,
    SRR_S07_SRR_S01_NTE_26,
    SRR_S07_SRR_S01_AIS_27,
    SRR_S07_SRR_S01_NTE_28,
    SRR_S07_SRR_S01_AIG_29,
    SRR_S07_SRR_S01_NTE_30,
    SRR_S07_SRR_S01_AIS_31,
    SRR_S07_SRR_S01_NTE_32,
    SRR_S07_SRR_S01_AIG_33,
    SRR_S07_SRR_S01_NTE_34,
    SRR_S07_SRR_S01_AIL_35,
    SRR_S07_SRR_S01_NTE_36,
    SRR_S07_SRR_S01_AIS_37,
    SRR_S07_SRR_S01_NTE_38,
    SRR_S07_SRR_S01_AIG_39,
    SRR_S07_SRR_S01_NTE_40,
    SRR_S07_SRR_S01_AIL_41,
    SRR_S07_SRR_S01_NTE_42,
    SRR_S07_SRR_S01_AIP_43,
    SRR_S07_SRR_S01_NTE_44,
    FIELD_ID_MAX
  };

  const char* className() const { return "SRR_S07_SRR_S01"; }
  SRR_S07_SRR_S01* create() const { return new SRR_S07_SRR_S01(); }

 private:
  /* Initialize object */
  void init() {
    setName("SRR_S07_SRR_S01");
    addObject<MSH>(SRR_S07_SRR_S01_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<MSA>(SRR_S07_SRR_S01_MSA_2, "MSA.2", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(SRR_S07_SRR_S01_ERR_3, "ERR.3", HL7::optional, HL7::repetition_on);
    addObject<NTE>(SRR_S07_SRR_S01_NTE_7, "NTE.7", HL7::optional, HL7::repetition_on);
    addObject<SCH>(SRR_S07_SRR_S01_SCH_8, "SCH.8", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(SRR_S07_SRR_S01_TQ1_9, "TQ1.9", HL7::optional, HL7::repetition_on);
    addObject<DG1>(SRR_S07_SRR_S01_DG1_10, "DG1.10", HL7::optional, HL7::repetition_on);
    addObject<PID>(SRR_S07_SRR_S01_PID_11, "PID.11", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(SRR_S07_SRR_S01_PRT_12, "PRT.12", HL7::optional, HL7::repetition_on);
    addObject<PV1>(SRR_S07_SRR_S01_PV1_13, "PV1.13", HL7::optional, HL7::repetition_off);
    addObject<PV2>(SRR_S07_SRR_S01_PV2_14, "PV2.14", HL7::optional, HL7::repetition_off);
    addObject<DG1>(SRR_S07_SRR_S01_DG1_15, "DG1.15", HL7::optional, HL7::repetition_on);
    addObject<PID>(SRR_S07_SRR_S01_PID_16, "PID.16", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(SRR_S07_SRR_S01_PRT_17, "PRT.17", HL7::optional, HL7::repetition_on);
    addObject<PV1>(SRR_S07_SRR_S01_PV1_18, "PV1.18", HL7::optional, HL7::repetition_off);
    addObject<PV2>(SRR_S07_SRR_S01_PV2_19, "PV2.19", HL7::optional, HL7::repetition_off);
    addObject<RGS>(SRR_S07_SRR_S01_RGS_24, "RGS.24", HL7::initialized, HL7::repetition_off);
    addObject<AIS>(SRR_S07_SRR_S01_AIS_25, "AIS.25", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SRR_S07_SRR_S01_NTE_26, "NTE.26", HL7::optional, HL7::repetition_on);
    addObject<AIS>(SRR_S07_SRR_S01_AIS_27, "AIS.27", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SRR_S07_SRR_S01_NTE_28, "NTE.28", HL7::optional, HL7::repetition_on);
    addObject<AIG>(SRR_S07_SRR_S01_AIG_29, "AIG.29", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SRR_S07_SRR_S01_NTE_30, "NTE.30", HL7::optional, HL7::repetition_on);
    addObject<AIS>(SRR_S07_SRR_S01_AIS_31, "AIS.31", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SRR_S07_SRR_S01_NTE_32, "NTE.32", HL7::optional, HL7::repetition_on);
    addObject<AIG>(SRR_S07_SRR_S01_AIG_33, "AIG.33", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SRR_S07_SRR_S01_NTE_34, "NTE.34", HL7::optional, HL7::repetition_on);
    addObject<AIL>(SRR_S07_SRR_S01_AIL_35, "AIL.35", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SRR_S07_SRR_S01_NTE_36, "NTE.36", HL7::optional, HL7::repetition_on);
    addObject<AIS>(SRR_S07_SRR_S01_AIS_37, "AIS.37", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SRR_S07_SRR_S01_NTE_38, "NTE.38", HL7::optional, HL7::repetition_on);
    addObject<AIG>(SRR_S07_SRR_S01_AIG_39, "AIG.39", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SRR_S07_SRR_S01_NTE_40, "NTE.40", HL7::optional, HL7::repetition_on);
    addObject<AIL>(SRR_S07_SRR_S01_AIL_41, "AIL.41", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SRR_S07_SRR_S01_NTE_42, "NTE.42", HL7::optional, HL7::repetition_on);
    addObject<AIP>(SRR_S07_SRR_S01_AIP_43, "AIP.43", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(SRR_S07_SRR_S01_NTE_44, "NTE.44", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, SRR_S07_SRR_S01_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, SRR_S07_SRR_S01_MSA_2);
  }
  ERR* getERR_3(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, SRR_S07_SRR_S01_ERR_3);
  }
  NTE* getNTE_7(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRR_S07_SRR_S01_NTE_7);
  }
  SCH* getSCH_8(size_t index = 0) {
    return (SCH*)this->getObjectSafe(index, SRR_S07_SRR_S01_SCH_8);
  }
  TQ1* getTQ1_9(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, SRR_S07_SRR_S01_TQ1_9);
  }
  DG1* getDG1_10(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, SRR_S07_SRR_S01_DG1_10);
  }
  PID* getPID_11(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, SRR_S07_SRR_S01_PID_11);
  }
  PRT* getPRT_12(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, SRR_S07_SRR_S01_PRT_12);
  }
  PV1* getPV1_13(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, SRR_S07_SRR_S01_PV1_13);
  }
  PV2* getPV2_14(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, SRR_S07_SRR_S01_PV2_14);
  }
  DG1* getDG1_15(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, SRR_S07_SRR_S01_DG1_15);
  }
  PID* getPID_16(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, SRR_S07_SRR_S01_PID_16);
  }
  PRT* getPRT_17(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, SRR_S07_SRR_S01_PRT_17);
  }
  PV1* getPV1_18(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, SRR_S07_SRR_S01_PV1_18);
  }
  PV2* getPV2_19(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, SRR_S07_SRR_S01_PV2_19);
  }
  RGS* getRGS_24(size_t index = 0) {
    return (RGS*)this->getObjectSafe(index, SRR_S07_SRR_S01_RGS_24);
  }
  AIS* getAIS_25(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, SRR_S07_SRR_S01_AIS_25);
  }
  NTE* getNTE_26(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRR_S07_SRR_S01_NTE_26);
  }
  AIS* getAIS_27(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, SRR_S07_SRR_S01_AIS_27);
  }
  NTE* getNTE_28(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRR_S07_SRR_S01_NTE_28);
  }
  AIG* getAIG_29(size_t index = 0) {
    return (AIG*)this->getObjectSafe(index, SRR_S07_SRR_S01_AIG_29);
  }
  NTE* getNTE_30(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRR_S07_SRR_S01_NTE_30);
  }
  AIS* getAIS_31(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, SRR_S07_SRR_S01_AIS_31);
  }
  NTE* getNTE_32(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRR_S07_SRR_S01_NTE_32);
  }
  AIG* getAIG_33(size_t index = 0) {
    return (AIG*)this->getObjectSafe(index, SRR_S07_SRR_S01_AIG_33);
  }
  NTE* getNTE_34(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRR_S07_SRR_S01_NTE_34);
  }
  AIL* getAIL_35(size_t index = 0) {
    return (AIL*)this->getObjectSafe(index, SRR_S07_SRR_S01_AIL_35);
  }
  NTE* getNTE_36(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRR_S07_SRR_S01_NTE_36);
  }
  AIS* getAIS_37(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, SRR_S07_SRR_S01_AIS_37);
  }
  NTE* getNTE_38(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRR_S07_SRR_S01_NTE_38);
  }
  AIG* getAIG_39(size_t index = 0) {
    return (AIG*)this->getObjectSafe(index, SRR_S07_SRR_S01_AIG_39);
  }
  NTE* getNTE_40(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRR_S07_SRR_S01_NTE_40);
  }
  AIL* getAIL_41(size_t index = 0) {
    return (AIL*)this->getObjectSafe(index, SRR_S07_SRR_S01_AIL_41);
  }
  NTE* getNTE_42(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRR_S07_SRR_S01_NTE_42);
  }
  AIP* getAIP_43(size_t index = 0) {
    return (AIP*)this->getObjectSafe(index, SRR_S07_SRR_S01_AIP_43);
  }
  NTE* getNTE_44(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRR_S07_SRR_S01_NTE_44);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_3(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_ERR_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_7(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_NTE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSCH_8(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_SCH_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_9(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_TQ1_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_10(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_DG1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_11(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_PID_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_12(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_PRT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_13(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_PV1_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_14(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_PV2_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_15(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_DG1_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_16(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_PID_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_17(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_PRT_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_18(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_PV1_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_19(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_PV2_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRGS_24(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_RGS_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIS_25(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_AIS_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_26(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_NTE_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIS_27(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_AIS_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_28(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_NTE_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIG_29(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_AIG_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_30(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_NTE_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIS_31(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_AIS_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_32(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_NTE_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIG_33(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_AIG_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_34(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_NTE_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIL_35(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_AIL_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_36(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_NTE_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIS_37(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_AIS_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_38(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_NTE_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIG_39(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_AIG_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_40(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_NTE_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIL_41(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_AIL_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_42(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_NTE_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIP_43(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_AIP_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_44(size_t index = 0) {
    try {
      return this->getObject(index, SRR_S07_SRR_S01_NTE_44) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SRR_S07_SRR_S01_ */
} /* namespace HL7_29 */
#endif /*  __SRR_S07_SRR_S01__29_H__ */
