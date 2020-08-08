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


#ifndef __BAR_P05_BAR_P05__29_H__
#define __BAR_P05_BAR_P05__29_H__

#include "../../common/Util.h"
#include "../segment/ABS.h"
#include "../segment/ACC.h"
#include "../segment/AL1.h"
#include "../segment/BLC.h"
#include "../segment/DB1.h"
#include "../segment/DG1.h"
#include "../segment/DRG.h"
#include "../segment/EVN.h"
#include "../segment/GT1.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IN3.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
#include "../segment/OBX.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PR1.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/RMI.h"
#include "../segment/ROL.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"
#include "../segment/UB1.h"
#include "../segment/UB2.h"

namespace HL7_29 {

/* Internal structures/groups */
struct BAR_P05_BAR_P05_VISIT; /* VISIT */
struct BAR_P05_BAR_P05_DIAGNOSIS; /* DIAGNOSIS */
struct BAR_P05_BAR_P05_PROCEDURE; /* PROCEDURE */
struct BAR_P05_BAR_P05_INSURANCE; /* INSURANCE */

/*  */
struct BAR_P05_BAR_P05 : public HL7Message {
  BAR_P05_BAR_P05() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    BAR_P05_BAR_P05_MSH_1,
    BAR_P05_BAR_P05_SFT_2,
    BAR_P05_BAR_P05_UAC_3,
    BAR_P05_BAR_P05_EVN_4,
    BAR_P05_BAR_P05_PID_5,
    BAR_P05_BAR_P05_PD1_6,
    BAR_P05_BAR_P05_PRT_7,
    BAR_P05_BAR_P05_ROL_8,
    BAR_P05_BAR_P05_ABS_13,
    BAR_P05_BAR_P05_ACC_14,
    BAR_P05_BAR_P05_AL1_15,
    BAR_P05_BAR_P05_BLC_16,
    BAR_P05_BAR_P05_DB1_17,
    BAR_P05_BAR_P05_DRG_18,
    BAR_P05_BAR_P05_GT1_19,
    BAR_P05_BAR_P05_NK1_20,
    BAR_P05_BAR_P05_OBX_21,
    BAR_P05_BAR_P05_PRT_22,
    BAR_P05_BAR_P05_PV1_23,
    BAR_P05_BAR_P05_PV2_24,
    BAR_P05_BAR_P05_RMI_25,
    BAR_P05_BAR_P05_ROL_26,
    BAR_P05_BAR_P05_UB1_27,
    BAR_P05_BAR_P05_UB2_28,
    BAR_P05_BAR_P05_DG1_29,
    BAR_P05_BAR_P05_DG1_30,
    BAR_P05_BAR_P05_PR1_31,
    BAR_P05_BAR_P05_PRT_32,
    BAR_P05_BAR_P05_ROL_33,
    BAR_P05_BAR_P05_DG1_34,
    BAR_P05_BAR_P05_PR1_35,
    BAR_P05_BAR_P05_PRT_36,
    BAR_P05_BAR_P05_ROL_37,
    BAR_P05_BAR_P05_IN1_38,
    BAR_P05_BAR_P05_IN2_39,
    BAR_P05_BAR_P05_IN3_40,
    BAR_P05_BAR_P05_PRT_41,
    BAR_P05_BAR_P05_ROL_42,
    FIELD_ID_MAX
  };

  const char* className() const { return "BAR_P05_BAR_P05"; }
  BAR_P05_BAR_P05* create() const { return new BAR_P05_BAR_P05(); }

 private:
  /* Initialize object */
  void init() {
    setName("BAR_P05_BAR_P05");
    addObject<MSH>(BAR_P05_BAR_P05_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(BAR_P05_BAR_P05_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(BAR_P05_BAR_P05_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EVN>(BAR_P05_BAR_P05_EVN_4, "EVN.4", HL7::initialized, HL7::repetition_off);
    addObject<PID>(BAR_P05_BAR_P05_PID_5, "PID.5", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(BAR_P05_BAR_P05_PD1_6, "PD1.6", HL7::optional, HL7::repetition_off);
    addObject<PRT>(BAR_P05_BAR_P05_PRT_7, "PRT.7", HL7::optional, HL7::repetition_on);
    addObject<ROL>(BAR_P05_BAR_P05_ROL_8, "ROL.8", HL7::optional, HL7::repetition_on);
    addObject<ABS>(BAR_P05_BAR_P05_ABS_13, "ABS.13", HL7::optional, HL7::repetition_off);
    addObject<ACC>(BAR_P05_BAR_P05_ACC_14, "ACC.14", HL7::optional, HL7::repetition_off);
    addObject<AL1>(BAR_P05_BAR_P05_AL1_15, "AL1.15", HL7::optional, HL7::repetition_on);
    addObject<BLC>(BAR_P05_BAR_P05_BLC_16, "BLC.16", HL7::optional, HL7::repetition_on);
    addObject<DB1>(BAR_P05_BAR_P05_DB1_17, "DB1.17", HL7::optional, HL7::repetition_on);
    addObject<DRG>(BAR_P05_BAR_P05_DRG_18, "DRG.18", HL7::optional, HL7::repetition_off);
    addObject<GT1>(BAR_P05_BAR_P05_GT1_19, "GT1.19", HL7::optional, HL7::repetition_on);
    addObject<NK1>(BAR_P05_BAR_P05_NK1_20, "NK1.20", HL7::optional, HL7::repetition_on);
    addObject<OBX>(BAR_P05_BAR_P05_OBX_21, "OBX.21", HL7::optional, HL7::repetition_on);
    addObject<PRT>(BAR_P05_BAR_P05_PRT_22, "PRT.22", HL7::optional, HL7::repetition_on);
    addObject<PV1>(BAR_P05_BAR_P05_PV1_23, "PV1.23", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(BAR_P05_BAR_P05_PV2_24, "PV2.24", HL7::optional, HL7::repetition_off);
    addObject<RMI>(BAR_P05_BAR_P05_RMI_25, "RMI.25", HL7::optional, HL7::repetition_off);
    addObject<ROL>(BAR_P05_BAR_P05_ROL_26, "ROL.26", HL7::optional, HL7::repetition_on);
    addObject<UB1>(BAR_P05_BAR_P05_UB1_27, "UB1.27", HL7::optional, HL7::repetition_off);
    addObject<UB2>(BAR_P05_BAR_P05_UB2_28, "UB2.28", HL7::optional, HL7::repetition_off);
    addObject<DG1>(BAR_P05_BAR_P05_DG1_29, "DG1.29", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(BAR_P05_BAR_P05_DG1_30, "DG1.30", HL7::initialized, HL7::repetition_off);
    addObject<PR1>(BAR_P05_BAR_P05_PR1_31, "PR1.31", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(BAR_P05_BAR_P05_PRT_32, "PRT.32", HL7::optional, HL7::repetition_on);
    addObject<ROL>(BAR_P05_BAR_P05_ROL_33, "ROL.33", HL7::optional, HL7::repetition_on);
    addObject<DG1>(BAR_P05_BAR_P05_DG1_34, "DG1.34", HL7::initialized, HL7::repetition_off);
    addObject<PR1>(BAR_P05_BAR_P05_PR1_35, "PR1.35", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(BAR_P05_BAR_P05_PRT_36, "PRT.36", HL7::optional, HL7::repetition_on);
    addObject<ROL>(BAR_P05_BAR_P05_ROL_37, "ROL.37", HL7::optional, HL7::repetition_on);
    addObject<IN1>(BAR_P05_BAR_P05_IN1_38, "IN1.38", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(BAR_P05_BAR_P05_IN2_39, "IN2.39", HL7::optional, HL7::repetition_off);
    addObject<IN3>(BAR_P05_BAR_P05_IN3_40, "IN3.40", HL7::optional, HL7::repetition_on);
    addObject<PRT>(BAR_P05_BAR_P05_PRT_41, "PRT.41", HL7::optional, HL7::repetition_on);
    addObject<ROL>(BAR_P05_BAR_P05_ROL_42, "ROL.42", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, BAR_P05_BAR_P05_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, BAR_P05_BAR_P05_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, BAR_P05_BAR_P05_UAC_3);
  }
  EVN* getEVN_4(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, BAR_P05_BAR_P05_EVN_4);
  }
  PID* getPID_5(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, BAR_P05_BAR_P05_PID_5);
  }
  PD1* getPD1_6(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, BAR_P05_BAR_P05_PD1_6);
  }
  PRT* getPRT_7(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, BAR_P05_BAR_P05_PRT_7);
  }
  ROL* getROL_8(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, BAR_P05_BAR_P05_ROL_8);
  }
  ABS* getABS_13(size_t index = 0) {
    return (ABS*)this->getObjectSafe(index, BAR_P05_BAR_P05_ABS_13);
  }
  ACC* getACC_14(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, BAR_P05_BAR_P05_ACC_14);
  }
  AL1* getAL1_15(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, BAR_P05_BAR_P05_AL1_15);
  }
  BLC* getBLC_16(size_t index = 0) {
    return (BLC*)this->getObjectSafe(index, BAR_P05_BAR_P05_BLC_16);
  }
  DB1* getDB1_17(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, BAR_P05_BAR_P05_DB1_17);
  }
  DRG* getDRG_18(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, BAR_P05_BAR_P05_DRG_18);
  }
  GT1* getGT1_19(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, BAR_P05_BAR_P05_GT1_19);
  }
  NK1* getNK1_20(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, BAR_P05_BAR_P05_NK1_20);
  }
  OBX* getOBX_21(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, BAR_P05_BAR_P05_OBX_21);
  }
  PRT* getPRT_22(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, BAR_P05_BAR_P05_PRT_22);
  }
  PV1* getPV1_23(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, BAR_P05_BAR_P05_PV1_23);
  }
  PV2* getPV2_24(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, BAR_P05_BAR_P05_PV2_24);
  }
  RMI* getRMI_25(size_t index = 0) {
    return (RMI*)this->getObjectSafe(index, BAR_P05_BAR_P05_RMI_25);
  }
  ROL* getROL_26(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, BAR_P05_BAR_P05_ROL_26);
  }
  UB1* getUB1_27(size_t index = 0) {
    return (UB1*)this->getObjectSafe(index, BAR_P05_BAR_P05_UB1_27);
  }
  UB2* getUB2_28(size_t index = 0) {
    return (UB2*)this->getObjectSafe(index, BAR_P05_BAR_P05_UB2_28);
  }
  DG1* getDG1_29(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, BAR_P05_BAR_P05_DG1_29);
  }
  DG1* getDG1_30(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, BAR_P05_BAR_P05_DG1_30);
  }
  PR1* getPR1_31(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, BAR_P05_BAR_P05_PR1_31);
  }
  PRT* getPRT_32(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, BAR_P05_BAR_P05_PRT_32);
  }
  ROL* getROL_33(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, BAR_P05_BAR_P05_ROL_33);
  }
  DG1* getDG1_34(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, BAR_P05_BAR_P05_DG1_34);
  }
  PR1* getPR1_35(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, BAR_P05_BAR_P05_PR1_35);
  }
  PRT* getPRT_36(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, BAR_P05_BAR_P05_PRT_36);
  }
  ROL* getROL_37(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, BAR_P05_BAR_P05_ROL_37);
  }
  IN1* getIN1_38(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, BAR_P05_BAR_P05_IN1_38);
  }
  IN2* getIN2_39(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, BAR_P05_BAR_P05_IN2_39);
  }
  IN3* getIN3_40(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, BAR_P05_BAR_P05_IN3_40);
  }
  PRT* getPRT_41(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, BAR_P05_BAR_P05_PRT_41);
  }
  ROL* getROL_42(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, BAR_P05_BAR_P05_ROL_42);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_4(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_EVN_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_5(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_PID_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_6(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_PD1_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_7(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_PRT_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_8(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_ROL_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isABS_13(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_ABS_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_14(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_ACC_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_15(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_AL1_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBLC_16(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_BLC_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_17(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_DB1_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_18(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_DRG_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_19(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_GT1_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_20(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_NK1_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_21(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_OBX_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_22(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_PRT_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_23(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_PV1_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_24(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_PV2_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRMI_25(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_RMI_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_26(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_ROL_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUB1_27(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_UB1_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUB2_28(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_UB2_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_29(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_DG1_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_30(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_DG1_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_31(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_PR1_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_32(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_PRT_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_33(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_ROL_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_34(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_DG1_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_35(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_PR1_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_36(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_PRT_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_37(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_ROL_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_38(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_IN1_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_39(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_IN2_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_40(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_IN3_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_41(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_PRT_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_42(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P05_BAR_P05_ROL_42) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* BAR_P05_BAR_P05_ */
} /* namespace HL7_29 */
#endif /*  __BAR_P05_BAR_P05__29_H__ */
