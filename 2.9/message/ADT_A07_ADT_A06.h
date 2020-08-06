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


#ifndef __ADT_A07_ADT_A06__29_H__
#define __ADT_A07_ADT_A06__29_H__

#include "../../common/Util.h"
#include "../segment/ACC.h"
#include "../segment/AL1.h"
#include "../segment/ARV.h"
#include "../segment/DB1.h"
#include "../segment/DG1.h"
#include "../segment/DRG.h"
#include "../segment/EVN.h"
#include "../segment/GT1.h"
#include "../segment/IAM.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IN3.h"
#include "../segment/MRG.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
#include "../segment/OBX.h"
#include "../segment/OH1.h"
#include "../segment/OH2.h"
#include "../segment/OH3.h"
#include "../segment/OH4.h"
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
struct ADT_A07_ADT_A06_NEXT_OF_KIN; /* NEXT_OF_KIN */
struct ADT_A07_ADT_A06_OBSERVATION; /* OBSERVATION */
struct ADT_A07_ADT_A06_PROCEDURE; /* PROCEDURE */
struct ADT_A07_ADT_A06_INSURANCE; /* INSURANCE */

/*  */
struct ADT_A07_ADT_A06 : public HL7Message {
  ADT_A07_ADT_A06() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADT_A07_ADT_A06_MSH_1,
    ADT_A07_ADT_A06_ARV_2,
    ADT_A07_ADT_A06_SFT_3,
    ADT_A07_ADT_A06_UAC_4,
    ADT_A07_ADT_A06_EVN_5,
    ADT_A07_ADT_A06_PID_6,
    ADT_A07_ADT_A06_PD1_7,
    ADT_A07_ADT_A06_OH1_8,
    ADT_A07_ADT_A06_OH2_9,
    ADT_A07_ADT_A06_OH3_10,
    ADT_A07_ADT_A06_OH4_11,
    ADT_A07_ADT_A06_ARV_12,
    ADT_A07_ADT_A06_ROL_13,
    ADT_A07_ADT_A06_PRT_14,
    ADT_A07_ADT_A06_MRG_15,
    ADT_A07_ADT_A06_PV1_17,
    ADT_A07_ADT_A06_PV2_18,
    ADT_A07_ADT_A06_ARV_19,
    ADT_A07_ADT_A06_ROL_20,
    ADT_A07_ADT_A06_PRT_21,
    ADT_A07_ADT_A06_DB1_22,
    ADT_A07_ADT_A06_AL1_24,
    ADT_A07_ADT_A06_IAM_25,
    ADT_A07_ADT_A06_DG1_26,
    ADT_A07_ADT_A06_DRG_27,
    ADT_A07_ADT_A06_GT1_29,
    ADT_A07_ADT_A06_ACC_31,
    ADT_A07_ADT_A06_UB1_32,
    ADT_A07_ADT_A06_UB2_33,
    ADT_A07_ADT_A06_IN1_34,
    ADT_A07_ADT_A06_IN2_35,
    ADT_A07_ADT_A06_IN3_36,
    ADT_A07_ADT_A06_PRT_37,
    ADT_A07_ADT_A06_ROL_38,
    ADT_A07_ADT_A06_NK1_39,
    ADT_A07_ADT_A06_OH2_40,
    ADT_A07_ADT_A06_OH3_41,
    ADT_A07_ADT_A06_OBX_42,
    ADT_A07_ADT_A06_PRT_43,
    ADT_A07_ADT_A06_PR1_44,
    ADT_A07_ADT_A06_PRT_45,
    ADT_A07_ADT_A06_ROL_46,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADT_A07_ADT_A06"; }
  ADT_A07_ADT_A06* create() const { return new ADT_A07_ADT_A06(); }

 private:
  /* Initialize object */
  void init() {
    setName("ADT_A07_ADT_A06");
    addObject<MSH>(ADT_A07_ADT_A06_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ADT_A07_ADT_A06_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ADT_A07_ADT_A06_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ADT_A07_ADT_A06_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<EVN>(ADT_A07_ADT_A06_EVN_5, "EVN.5", HL7::initialized, HL7::repetition_off);
    addObject<PID>(ADT_A07_ADT_A06_PID_6, "PID.6", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(ADT_A07_ADT_A06_PD1_7, "PD1.7", HL7::optional, HL7::repetition_off);
    addObject<OH1>(ADT_A07_ADT_A06_OH1_8, "OH1.8", HL7::optional, HL7::repetition_on);
    addObject<OH2>(ADT_A07_ADT_A06_OH2_9, "OH2.9", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ADT_A07_ADT_A06_OH3_10, "OH3.10", HL7::optional, HL7::repetition_off);
    addObject<OH4>(ADT_A07_ADT_A06_OH4_11, "OH4.11", HL7::optional, HL7::repetition_on);
    addObject<ARV>(ADT_A07_ADT_A06_ARV_12, "ARV.12", HL7::optional, HL7::repetition_on);
    addObject<ROL>(ADT_A07_ADT_A06_ROL_13, "ROL.13", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ADT_A07_ADT_A06_PRT_14, "PRT.14", HL7::optional, HL7::repetition_on);
    addObject<MRG>(ADT_A07_ADT_A06_MRG_15, "MRG.15", HL7::optional, HL7::repetition_off);
    addObject<PV1>(ADT_A07_ADT_A06_PV1_17, "PV1.17", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ADT_A07_ADT_A06_PV2_18, "PV2.18", HL7::optional, HL7::repetition_off);
    addObject<ARV>(ADT_A07_ADT_A06_ARV_19, "ARV.19", HL7::optional, HL7::repetition_on);
    addObject<ROL>(ADT_A07_ADT_A06_ROL_20, "ROL.20", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ADT_A07_ADT_A06_PRT_21, "PRT.21", HL7::optional, HL7::repetition_on);
    addObject<DB1>(ADT_A07_ADT_A06_DB1_22, "DB1.22", HL7::optional, HL7::repetition_on);
    addObject<AL1>(ADT_A07_ADT_A06_AL1_24, "AL1.24", HL7::optional, HL7::repetition_on);
    addObject<IAM>(ADT_A07_ADT_A06_IAM_25, "IAM.25", HL7::optional, HL7::repetition_on);
    addObject<DG1>(ADT_A07_ADT_A06_DG1_26, "DG1.26", HL7::optional, HL7::repetition_on);
    addObject<DRG>(ADT_A07_ADT_A06_DRG_27, "DRG.27", HL7::optional, HL7::repetition_off);
    addObject<GT1>(ADT_A07_ADT_A06_GT1_29, "GT1.29", HL7::optional, HL7::repetition_on);
    addObject<ACC>(ADT_A07_ADT_A06_ACC_31, "ACC.31", HL7::optional, HL7::repetition_off);
    addObject<UB1>(ADT_A07_ADT_A06_UB1_32, "UB1.32", HL7::optional, HL7::repetition_off);
    addObject<UB2>(ADT_A07_ADT_A06_UB2_33, "UB2.33", HL7::optional, HL7::repetition_off);
    addObject<IN1>(ADT_A07_ADT_A06_IN1_34, "IN1.34", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(ADT_A07_ADT_A06_IN2_35, "IN2.35", HL7::optional, HL7::repetition_off);
    addObject<IN3>(ADT_A07_ADT_A06_IN3_36, "IN3.36", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ADT_A07_ADT_A06_PRT_37, "PRT.37", HL7::optional, HL7::repetition_on);
    addObject<ROL>(ADT_A07_ADT_A06_ROL_38, "ROL.38", HL7::optional, HL7::repetition_on);
    addObject<NK1>(ADT_A07_ADT_A06_NK1_39, "NK1.39", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(ADT_A07_ADT_A06_OH2_40, "OH2.40", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ADT_A07_ADT_A06_OH3_41, "OH3.41", HL7::optional, HL7::repetition_off);
    addObject<OBX>(ADT_A07_ADT_A06_OBX_42, "OBX.42", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ADT_A07_ADT_A06_PRT_43, "PRT.43", HL7::optional, HL7::repetition_on);
    addObject<PR1>(ADT_A07_ADT_A06_PR1_44, "PR1.44", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ADT_A07_ADT_A06_PRT_45, "PRT.45", HL7::optional, HL7::repetition_on);
    addObject<ROL>(ADT_A07_ADT_A06_ROL_46, "ROL.46", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ADT_A07_ADT_A06_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ADT_A07_ADT_A06_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ADT_A07_ADT_A06_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ADT_A07_ADT_A06_UAC_4);
  }
  EVN* getEVN_5(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, ADT_A07_ADT_A06_EVN_5);
  }
  PID* getPID_6(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ADT_A07_ADT_A06_PID_6);
  }
  PD1* getPD1_7(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ADT_A07_ADT_A06_PD1_7);
  }
  OH1* getOH1_8(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, ADT_A07_ADT_A06_OH1_8);
  }
  OH2* getOH2_9(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ADT_A07_ADT_A06_OH2_9);
  }
  OH3* getOH3_10(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ADT_A07_ADT_A06_OH3_10);
  }
  OH4* getOH4_11(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, ADT_A07_ADT_A06_OH4_11);
  }
  ARV* getARV_12(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ADT_A07_ADT_A06_ARV_12);
  }
  ROL* getROL_13(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADT_A07_ADT_A06_ROL_13);
  }
  PRT* getPRT_14(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A07_ADT_A06_PRT_14);
  }
  MRG* getMRG_15(size_t index = 0) {
    return (MRG*)this->getObjectSafe(index, ADT_A07_ADT_A06_MRG_15);
  }
  PV1* getPV1_17(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ADT_A07_ADT_A06_PV1_17);
  }
  PV2* getPV2_18(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ADT_A07_ADT_A06_PV2_18);
  }
  ARV* getARV_19(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ADT_A07_ADT_A06_ARV_19);
  }
  ROL* getROL_20(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADT_A07_ADT_A06_ROL_20);
  }
  PRT* getPRT_21(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A07_ADT_A06_PRT_21);
  }
  DB1* getDB1_22(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, ADT_A07_ADT_A06_DB1_22);
  }
  AL1* getAL1_24(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, ADT_A07_ADT_A06_AL1_24);
  }
  IAM* getIAM_25(size_t index = 0) {
    return (IAM*)this->getObjectSafe(index, ADT_A07_ADT_A06_IAM_25);
  }
  DG1* getDG1_26(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, ADT_A07_ADT_A06_DG1_26);
  }
  DRG* getDRG_27(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, ADT_A07_ADT_A06_DRG_27);
  }
  GT1* getGT1_29(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, ADT_A07_ADT_A06_GT1_29);
  }
  ACC* getACC_31(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, ADT_A07_ADT_A06_ACC_31);
  }
  UB1* getUB1_32(size_t index = 0) {
    return (UB1*)this->getObjectSafe(index, ADT_A07_ADT_A06_UB1_32);
  }
  UB2* getUB2_33(size_t index = 0) {
    return (UB2*)this->getObjectSafe(index, ADT_A07_ADT_A06_UB2_33);
  }
  IN1* getIN1_34(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, ADT_A07_ADT_A06_IN1_34);
  }
  IN2* getIN2_35(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, ADT_A07_ADT_A06_IN2_35);
  }
  IN3* getIN3_36(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, ADT_A07_ADT_A06_IN3_36);
  }
  PRT* getPRT_37(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A07_ADT_A06_PRT_37);
  }
  ROL* getROL_38(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADT_A07_ADT_A06_ROL_38);
  }
  NK1* getNK1_39(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ADT_A07_ADT_A06_NK1_39);
  }
  OH2* getOH2_40(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ADT_A07_ADT_A06_OH2_40);
  }
  OH3* getOH3_41(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ADT_A07_ADT_A06_OH3_41);
  }
  OBX* getOBX_42(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ADT_A07_ADT_A06_OBX_42);
  }
  PRT* getPRT_43(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A07_ADT_A06_PRT_43);
  }
  PR1* getPR1_44(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, ADT_A07_ADT_A06_PR1_44);
  }
  PRT* getPRT_45(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A07_ADT_A06_PRT_45);
  }
  ROL* getROL_46(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADT_A07_ADT_A06_ROL_46);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_5(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_EVN_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_6(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_PID_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_7(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_PD1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_8(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_OH1_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_9(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_OH2_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_10(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_OH3_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_11(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_OH4_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_12(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_ARV_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_13(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_ROL_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_14(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_PRT_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMRG_15(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_MRG_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_17(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_PV1_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_18(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_PV2_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_19(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_ARV_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_20(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_ROL_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_21(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_PRT_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_22(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_DB1_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_24(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_AL1_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIAM_25(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_IAM_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_26(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_DG1_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_27(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_DRG_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_29(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_GT1_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_31(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_ACC_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUB1_32(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_UB1_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUB2_33(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_UB2_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_34(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_IN1_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_35(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_IN2_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_36(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_IN3_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_37(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_PRT_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_38(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_ROL_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_39(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_NK1_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_40(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_OH2_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_41(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_OH3_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_42(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_OBX_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_43(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_PRT_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_44(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_PR1_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_45(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_PRT_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_46(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A07_ADT_A06_ROL_46) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A07_ADT_A06_ */
} /* namespace HL7_29 */
#endif /*  __ADT_A07_ADT_A06__29_H__ */
