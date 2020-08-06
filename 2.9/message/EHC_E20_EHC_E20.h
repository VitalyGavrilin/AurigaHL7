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


#ifndef __EHC_E20_EHC_E20__29_H__
#define __EHC_E20_EHC_E20__29_H__

#include "../../common/Util.h"
#include "../segment/ACC.h"
#include "../segment/ADJ.h"
#include "../segment/DG1.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IVC.h"
#include "../segment/LOC.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBX.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/PSL.h"
#include "../segment/ROL.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct EHC_E20_EHC_E20_AUTHORIZATION_REQUEST; /* AUTHORIZATION_REQUEST */
struct EHC_E20_EHC_E20_PAT_INFO; /* PAT_INFO */
struct EHC_E20_EHC_E20_PSL_ITEM_INFO; /* PSL_ITEM_INFO */
struct EHC_E20_EHC_E20_INSURANCE; /* INSURANCE */
struct EHC_E20_EHC_E20_DIAGNOSIS; /* DIAGNOSIS */
struct EHC_E20_EHC_E20_INSURANCE; /* INSURANCE */
struct EHC_E20_EHC_E20_DIAGNOSIS; /* DIAGNOSIS */

/*  */
struct EHC_E20_EHC_E20 : public HL7Message {
  EHC_E20_EHC_E20() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EHC_E20_EHC_E20_MSH_1,
    EHC_E20_EHC_E20_SFT_2,
    EHC_E20_EHC_E20_UAC_3,
    EHC_E20_EHC_E20_IVC_8,
    EHC_E20_EHC_E20_LOC_9,
    EHC_E20_EHC_E20_ROL_10,
    EHC_E20_EHC_E20_ACC_13,
    EHC_E20_EHC_E20_OBX_14,
    EHC_E20_EHC_E20_PID_15,
    EHC_E20_EHC_E20_PRT_16,
    EHC_E20_EHC_E20_IN1_17,
    EHC_E20_EHC_E20_IN2_18,
    EHC_E20_EHC_E20_IN1_19,
    EHC_E20_EHC_E20_IN2_20,
    EHC_E20_EHC_E20_DG1_22,
    EHC_E20_EHC_E20_NTE_23,
    EHC_E20_EHC_E20_ACC_26,
    EHC_E20_EHC_E20_OBX_27,
    EHC_E20_EHC_E20_PID_28,
    EHC_E20_EHC_E20_PRT_29,
    EHC_E20_EHC_E20_ADJ_30,
    EHC_E20_EHC_E20_LOC_31,
    EHC_E20_EHC_E20_NTE_32,
    EHC_E20_EHC_E20_PRT_33,
    EHC_E20_EHC_E20_PSL_34,
    EHC_E20_EHC_E20_ROL_35,
    EHC_E20_EHC_E20_IN1_36,
    EHC_E20_EHC_E20_IN2_37,
    EHC_E20_EHC_E20_IN1_38,
    EHC_E20_EHC_E20_IN2_39,
    EHC_E20_EHC_E20_DG1_41,
    EHC_E20_EHC_E20_NTE_42,
    FIELD_ID_MAX
  };

  const char* className() const { return "EHC_E20_EHC_E20"; }
  EHC_E20_EHC_E20* create() const { return new EHC_E20_EHC_E20(); }

 private:
  /* Initialize object */
  void init() {
    setName("EHC_E20_EHC_E20");
    addObject<MSH>(EHC_E20_EHC_E20_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(EHC_E20_EHC_E20_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(EHC_E20_EHC_E20_UAC_3, "UAC.3", HL7::optional, HL7::repetition_on);
    addObject<IVC>(EHC_E20_EHC_E20_IVC_8, "IVC.8", HL7::initialized, HL7::repetition_off);
    addObject<LOC>(EHC_E20_EHC_E20_LOC_9, "LOC.9", HL7::optional, HL7::repetition_on);
    addObject<ROL>(EHC_E20_EHC_E20_ROL_10, "ROL.10", HL7::optional, HL7::repetition_on);
    addObject<ACC>(EHC_E20_EHC_E20_ACC_13, "ACC.13", HL7::optional, HL7::repetition_on);
    addObject<OBX>(EHC_E20_EHC_E20_OBX_14, "OBX.14", HL7::optional, HL7::repetition_on);
    addObject<PID>(EHC_E20_EHC_E20_PID_15, "PID.15", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(EHC_E20_EHC_E20_PRT_16, "PRT.16", HL7::optional, HL7::repetition_on);
    addObject<IN1>(EHC_E20_EHC_E20_IN1_17, "IN1.17", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(EHC_E20_EHC_E20_IN2_18, "IN2.18", HL7::optional, HL7::repetition_off);
    addObject<IN1>(EHC_E20_EHC_E20_IN1_19, "IN1.19", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(EHC_E20_EHC_E20_IN2_20, "IN2.20", HL7::optional, HL7::repetition_off);
    addObject<DG1>(EHC_E20_EHC_E20_DG1_22, "DG1.22", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(EHC_E20_EHC_E20_NTE_23, "NTE.23", HL7::optional, HL7::repetition_on);
    addObject<ACC>(EHC_E20_EHC_E20_ACC_26, "ACC.26", HL7::optional, HL7::repetition_on);
    addObject<OBX>(EHC_E20_EHC_E20_OBX_27, "OBX.27", HL7::optional, HL7::repetition_on);
    addObject<PID>(EHC_E20_EHC_E20_PID_28, "PID.28", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(EHC_E20_EHC_E20_PRT_29, "PRT.29", HL7::optional, HL7::repetition_on);
    addObject<ADJ>(EHC_E20_EHC_E20_ADJ_30, "ADJ.30", HL7::optional, HL7::repetition_on);
    addObject<LOC>(EHC_E20_EHC_E20_LOC_31, "LOC.31", HL7::optional, HL7::repetition_on);
    addObject<NTE>(EHC_E20_EHC_E20_NTE_32, "NTE.32", HL7::optional, HL7::repetition_on);
    addObject<PRT>(EHC_E20_EHC_E20_PRT_33, "PRT.33", HL7::optional, HL7::repetition_on);
    addObject<PSL>(EHC_E20_EHC_E20_PSL_34, "PSL.34", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(EHC_E20_EHC_E20_ROL_35, "ROL.35", HL7::optional, HL7::repetition_on);
    addObject<IN1>(EHC_E20_EHC_E20_IN1_36, "IN1.36", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(EHC_E20_EHC_E20_IN2_37, "IN2.37", HL7::optional, HL7::repetition_off);
    addObject<IN1>(EHC_E20_EHC_E20_IN1_38, "IN1.38", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(EHC_E20_EHC_E20_IN2_39, "IN2.39", HL7::optional, HL7::repetition_off);
    addObject<DG1>(EHC_E20_EHC_E20_DG1_41, "DG1.41", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(EHC_E20_EHC_E20_NTE_42, "NTE.42", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, EHC_E20_EHC_E20_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, EHC_E20_EHC_E20_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, EHC_E20_EHC_E20_UAC_3);
  }
  IVC* getIVC_8(size_t index = 0) {
    return (IVC*)this->getObjectSafe(index, EHC_E20_EHC_E20_IVC_8);
  }
  LOC* getLOC_9(size_t index = 0) {
    return (LOC*)this->getObjectSafe(index, EHC_E20_EHC_E20_LOC_9);
  }
  ROL* getROL_10(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, EHC_E20_EHC_E20_ROL_10);
  }
  ACC* getACC_13(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, EHC_E20_EHC_E20_ACC_13);
  }
  OBX* getOBX_14(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, EHC_E20_EHC_E20_OBX_14);
  }
  PID* getPID_15(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, EHC_E20_EHC_E20_PID_15);
  }
  PRT* getPRT_16(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, EHC_E20_EHC_E20_PRT_16);
  }
  IN1* getIN1_17(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, EHC_E20_EHC_E20_IN1_17);
  }
  IN2* getIN2_18(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, EHC_E20_EHC_E20_IN2_18);
  }
  IN1* getIN1_19(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, EHC_E20_EHC_E20_IN1_19);
  }
  IN2* getIN2_20(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, EHC_E20_EHC_E20_IN2_20);
  }
  DG1* getDG1_22(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, EHC_E20_EHC_E20_DG1_22);
  }
  NTE* getNTE_23(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, EHC_E20_EHC_E20_NTE_23);
  }
  ACC* getACC_26(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, EHC_E20_EHC_E20_ACC_26);
  }
  OBX* getOBX_27(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, EHC_E20_EHC_E20_OBX_27);
  }
  PID* getPID_28(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, EHC_E20_EHC_E20_PID_28);
  }
  PRT* getPRT_29(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, EHC_E20_EHC_E20_PRT_29);
  }
  ADJ* getADJ_30(size_t index = 0) {
    return (ADJ*)this->getObjectSafe(index, EHC_E20_EHC_E20_ADJ_30);
  }
  LOC* getLOC_31(size_t index = 0) {
    return (LOC*)this->getObjectSafe(index, EHC_E20_EHC_E20_LOC_31);
  }
  NTE* getNTE_32(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, EHC_E20_EHC_E20_NTE_32);
  }
  PRT* getPRT_33(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, EHC_E20_EHC_E20_PRT_33);
  }
  PSL* getPSL_34(size_t index = 0) {
    return (PSL*)this->getObjectSafe(index, EHC_E20_EHC_E20_PSL_34);
  }
  ROL* getROL_35(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, EHC_E20_EHC_E20_ROL_35);
  }
  IN1* getIN1_36(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, EHC_E20_EHC_E20_IN1_36);
  }
  IN2* getIN2_37(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, EHC_E20_EHC_E20_IN2_37);
  }
  IN1* getIN1_38(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, EHC_E20_EHC_E20_IN1_38);
  }
  IN2* getIN2_39(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, EHC_E20_EHC_E20_IN2_39);
  }
  DG1* getDG1_41(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, EHC_E20_EHC_E20_DG1_41);
  }
  NTE* getNTE_42(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, EHC_E20_EHC_E20_NTE_42);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIVC_8(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_IVC_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isLOC_9(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_LOC_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_10(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_ROL_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_13(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_ACC_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_14(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_OBX_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_15(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_PID_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_16(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_PRT_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_17(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_IN1_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_18(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_IN2_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_19(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_IN1_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_20(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_IN2_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_22(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_DG1_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_23(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_NTE_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_26(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_ACC_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_27(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_OBX_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_28(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_PID_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_29(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_PRT_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isADJ_30(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_ADJ_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isLOC_31(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_LOC_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_32(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_NTE_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_33(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_PRT_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSL_34(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_PSL_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_35(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_ROL_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_36(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_IN1_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_37(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_IN2_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_38(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_IN1_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_39(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_IN2_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_41(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_DG1_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_42(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E20_EHC_E20_NTE_42) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EHC_E20_EHC_E20_ */
} /* namespace HL7_29 */
#endif /*  __EHC_E20_EHC_E20__29_H__ */
