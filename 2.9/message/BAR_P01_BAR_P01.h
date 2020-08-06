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


#ifndef __BAR_P01_BAR_P01__29_H__
#define __BAR_P01_BAR_P01__29_H__

#include "../../common/Util.h"
#include "../segment/ACC.h"
#include "../segment/AL1.h"
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
#include "../segment/ROL.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"
#include "../segment/UB1.h"
#include "../segment/UB2.h"

namespace HL7_29 {

/* Internal structures/groups */
struct BAR_P01_BAR_P01_VISIT; /* VISIT */
struct BAR_P01_BAR_P01_DIAGNOSIS; /* DIAGNOSIS */
struct BAR_P01_BAR_P01_PROCEDURE; /* PROCEDURE */
struct BAR_P01_BAR_P01_INSURANCE; /* INSURANCE */

/*  */
struct BAR_P01_BAR_P01 : public HL7Message {
  BAR_P01_BAR_P01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    BAR_P01_BAR_P01_MSH_1,
    BAR_P01_BAR_P01_SFT_2,
    BAR_P01_BAR_P01_UAC_3,
    BAR_P01_BAR_P01_EVN_4,
    BAR_P01_BAR_P01_PID_5,
    BAR_P01_BAR_P01_PD1_6,
    BAR_P01_BAR_P01_PRT_7,
    BAR_P01_BAR_P01_ROL_8,
    BAR_P01_BAR_P01_ACC_13,
    BAR_P01_BAR_P01_AL1_14,
    BAR_P01_BAR_P01_DB1_15,
    BAR_P01_BAR_P01_DRG_16,
    BAR_P01_BAR_P01_GT1_17,
    BAR_P01_BAR_P01_NK1_18,
    BAR_P01_BAR_P01_OBX_19,
    BAR_P01_BAR_P01_PRT_20,
    BAR_P01_BAR_P01_PV1_21,
    BAR_P01_BAR_P01_PV2_22,
    BAR_P01_BAR_P01_ROL_23,
    BAR_P01_BAR_P01_UB1_24,
    BAR_P01_BAR_P01_UB2_25,
    BAR_P01_BAR_P01_DG1_26,
    BAR_P01_BAR_P01_DG1_27,
    BAR_P01_BAR_P01_PR1_28,
    BAR_P01_BAR_P01_PRT_29,
    BAR_P01_BAR_P01_ROL_30,
    BAR_P01_BAR_P01_DG1_31,
    BAR_P01_BAR_P01_PR1_32,
    BAR_P01_BAR_P01_PRT_33,
    BAR_P01_BAR_P01_ROL_34,
    BAR_P01_BAR_P01_IN1_35,
    BAR_P01_BAR_P01_IN2_36,
    BAR_P01_BAR_P01_IN3_37,
    BAR_P01_BAR_P01_PRT_38,
    BAR_P01_BAR_P01_ROL_39,
    FIELD_ID_MAX
  };

  const char* className() const { return "BAR_P01_BAR_P01"; }
  BAR_P01_BAR_P01* create() const { return new BAR_P01_BAR_P01(); }

 private:
  /* Initialize object */
  void init() {
    setName("BAR_P01_BAR_P01");
    addObject<MSH>(BAR_P01_BAR_P01_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(BAR_P01_BAR_P01_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(BAR_P01_BAR_P01_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EVN>(BAR_P01_BAR_P01_EVN_4, "EVN.4", HL7::initialized, HL7::repetition_off);
    addObject<PID>(BAR_P01_BAR_P01_PID_5, "PID.5", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(BAR_P01_BAR_P01_PD1_6, "PD1.6", HL7::optional, HL7::repetition_off);
    addObject<PRT>(BAR_P01_BAR_P01_PRT_7, "PRT.7", HL7::optional, HL7::repetition_on);
    addObject<ROL>(BAR_P01_BAR_P01_ROL_8, "ROL.8", HL7::optional, HL7::repetition_on);
    addObject<ACC>(BAR_P01_BAR_P01_ACC_13, "ACC.13", HL7::optional, HL7::repetition_off);
    addObject<AL1>(BAR_P01_BAR_P01_AL1_14, "AL1.14", HL7::optional, HL7::repetition_on);
    addObject<DB1>(BAR_P01_BAR_P01_DB1_15, "DB1.15", HL7::optional, HL7::repetition_on);
    addObject<DRG>(BAR_P01_BAR_P01_DRG_16, "DRG.16", HL7::optional, HL7::repetition_off);
    addObject<GT1>(BAR_P01_BAR_P01_GT1_17, "GT1.17", HL7::optional, HL7::repetition_on);
    addObject<NK1>(BAR_P01_BAR_P01_NK1_18, "NK1.18", HL7::optional, HL7::repetition_on);
    addObject<OBX>(BAR_P01_BAR_P01_OBX_19, "OBX.19", HL7::optional, HL7::repetition_on);
    addObject<PRT>(BAR_P01_BAR_P01_PRT_20, "PRT.20", HL7::optional, HL7::repetition_on);
    addObject<PV1>(BAR_P01_BAR_P01_PV1_21, "PV1.21", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(BAR_P01_BAR_P01_PV2_22, "PV2.22", HL7::optional, HL7::repetition_off);
    addObject<ROL>(BAR_P01_BAR_P01_ROL_23, "ROL.23", HL7::optional, HL7::repetition_on);
    addObject<UB1>(BAR_P01_BAR_P01_UB1_24, "UB1.24", HL7::optional, HL7::repetition_off);
    addObject<UB2>(BAR_P01_BAR_P01_UB2_25, "UB2.25", HL7::optional, HL7::repetition_off);
    addObject<DG1>(BAR_P01_BAR_P01_DG1_26, "DG1.26", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(BAR_P01_BAR_P01_DG1_27, "DG1.27", HL7::initialized, HL7::repetition_off);
    addObject<PR1>(BAR_P01_BAR_P01_PR1_28, "PR1.28", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(BAR_P01_BAR_P01_PRT_29, "PRT.29", HL7::optional, HL7::repetition_on);
    addObject<ROL>(BAR_P01_BAR_P01_ROL_30, "ROL.30", HL7::optional, HL7::repetition_on);
    addObject<DG1>(BAR_P01_BAR_P01_DG1_31, "DG1.31", HL7::initialized, HL7::repetition_off);
    addObject<PR1>(BAR_P01_BAR_P01_PR1_32, "PR1.32", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(BAR_P01_BAR_P01_PRT_33, "PRT.33", HL7::optional, HL7::repetition_on);
    addObject<ROL>(BAR_P01_BAR_P01_ROL_34, "ROL.34", HL7::optional, HL7::repetition_on);
    addObject<IN1>(BAR_P01_BAR_P01_IN1_35, "IN1.35", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(BAR_P01_BAR_P01_IN2_36, "IN2.36", HL7::optional, HL7::repetition_off);
    addObject<IN3>(BAR_P01_BAR_P01_IN3_37, "IN3.37", HL7::optional, HL7::repetition_on);
    addObject<PRT>(BAR_P01_BAR_P01_PRT_38, "PRT.38", HL7::optional, HL7::repetition_on);
    addObject<ROL>(BAR_P01_BAR_P01_ROL_39, "ROL.39", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, BAR_P01_BAR_P01_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, BAR_P01_BAR_P01_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, BAR_P01_BAR_P01_UAC_3);
  }
  EVN* getEVN_4(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, BAR_P01_BAR_P01_EVN_4);
  }
  PID* getPID_5(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, BAR_P01_BAR_P01_PID_5);
  }
  PD1* getPD1_6(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, BAR_P01_BAR_P01_PD1_6);
  }
  PRT* getPRT_7(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, BAR_P01_BAR_P01_PRT_7);
  }
  ROL* getROL_8(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, BAR_P01_BAR_P01_ROL_8);
  }
  ACC* getACC_13(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, BAR_P01_BAR_P01_ACC_13);
  }
  AL1* getAL1_14(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, BAR_P01_BAR_P01_AL1_14);
  }
  DB1* getDB1_15(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, BAR_P01_BAR_P01_DB1_15);
  }
  DRG* getDRG_16(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, BAR_P01_BAR_P01_DRG_16);
  }
  GT1* getGT1_17(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, BAR_P01_BAR_P01_GT1_17);
  }
  NK1* getNK1_18(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, BAR_P01_BAR_P01_NK1_18);
  }
  OBX* getOBX_19(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, BAR_P01_BAR_P01_OBX_19);
  }
  PRT* getPRT_20(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, BAR_P01_BAR_P01_PRT_20);
  }
  PV1* getPV1_21(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, BAR_P01_BAR_P01_PV1_21);
  }
  PV2* getPV2_22(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, BAR_P01_BAR_P01_PV2_22);
  }
  ROL* getROL_23(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, BAR_P01_BAR_P01_ROL_23);
  }
  UB1* getUB1_24(size_t index = 0) {
    return (UB1*)this->getObjectSafe(index, BAR_P01_BAR_P01_UB1_24);
  }
  UB2* getUB2_25(size_t index = 0) {
    return (UB2*)this->getObjectSafe(index, BAR_P01_BAR_P01_UB2_25);
  }
  DG1* getDG1_26(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, BAR_P01_BAR_P01_DG1_26);
  }
  DG1* getDG1_27(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, BAR_P01_BAR_P01_DG1_27);
  }
  PR1* getPR1_28(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, BAR_P01_BAR_P01_PR1_28);
  }
  PRT* getPRT_29(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, BAR_P01_BAR_P01_PRT_29);
  }
  ROL* getROL_30(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, BAR_P01_BAR_P01_ROL_30);
  }
  DG1* getDG1_31(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, BAR_P01_BAR_P01_DG1_31);
  }
  PR1* getPR1_32(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, BAR_P01_BAR_P01_PR1_32);
  }
  PRT* getPRT_33(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, BAR_P01_BAR_P01_PRT_33);
  }
  ROL* getROL_34(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, BAR_P01_BAR_P01_ROL_34);
  }
  IN1* getIN1_35(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, BAR_P01_BAR_P01_IN1_35);
  }
  IN2* getIN2_36(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, BAR_P01_BAR_P01_IN2_36);
  }
  IN3* getIN3_37(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, BAR_P01_BAR_P01_IN3_37);
  }
  PRT* getPRT_38(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, BAR_P01_BAR_P01_PRT_38);
  }
  ROL* getROL_39(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, BAR_P01_BAR_P01_ROL_39);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_4(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_EVN_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_5(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_PID_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_6(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_PD1_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_7(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_PRT_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_8(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_ROL_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_13(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_ACC_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_14(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_AL1_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_15(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_DB1_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_16(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_DRG_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_17(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_GT1_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_18(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_NK1_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_19(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_OBX_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_20(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_PRT_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_21(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_PV1_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_22(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_PV2_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_23(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_ROL_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUB1_24(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_UB1_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUB2_25(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_UB2_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_26(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_DG1_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_27(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_DG1_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_28(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_PR1_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_29(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_PRT_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_30(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_ROL_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_31(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_DG1_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_32(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_PR1_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_33(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_PRT_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_34(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_ROL_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_35(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_IN1_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_36(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_IN2_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_37(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_IN3_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_38(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_PRT_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_39(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P01_BAR_P01_ROL_39) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* BAR_P01_BAR_P01_ */
} /* namespace HL7_29 */
#endif /*  __BAR_P01_BAR_P01__29_H__ */
