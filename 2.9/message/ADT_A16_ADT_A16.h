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


#ifndef __ADT_A16_ADT_A16__29_H__
#define __ADT_A16_ADT_A16__29_H__

#include "../../common/Util.h"
#include "../segment/ACC.h"
#include "../segment/AL1.h"
#include "../segment/ARV.h"
#include "../segment/AUT.h"
#include "../segment/DB1.h"
#include "../segment/DG1.h"
#include "../segment/DRG.h"
#include "../segment/EVN.h"
#include "../segment/GT1.h"
#include "../segment/IAM.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IN3.h"
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
#include "../segment/RF1.h"
#include "../segment/ROL.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct ADT_A16_ADT_A16_NEXT_OF_KIN; /* NEXT_OF_KIN */
struct ADT_A16_ADT_A16_OBSERVATION; /* OBSERVATION */
struct ADT_A16_ADT_A16_PROCEDURE; /* PROCEDURE */
struct ADT_A16_ADT_A16_INSURANCE; /* INSURANCE */
struct ADT_A16_ADT_A16_AUTHORIZATION; /* AUTHORIZATION */
struct ADT_A16_ADT_A16_REFERRAL; /* REFERRAL */

/*  */
struct ADT_A16_ADT_A16 : public HL7Message {
  ADT_A16_ADT_A16() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADT_A16_ADT_A16_MSH_1,
    ADT_A16_ADT_A16_ARV_2,
    ADT_A16_ADT_A16_SFT_3,
    ADT_A16_ADT_A16_UAC_4,
    ADT_A16_ADT_A16_EVN_5,
    ADT_A16_ADT_A16_PID_6,
    ADT_A16_ADT_A16_PD1_7,
    ADT_A16_ADT_A16_OH1_8,
    ADT_A16_ADT_A16_OH2_9,
    ADT_A16_ADT_A16_OH3_10,
    ADT_A16_ADT_A16_OH4_11,
    ADT_A16_ADT_A16_ARV_12,
    ADT_A16_ADT_A16_ROL_13,
    ADT_A16_ADT_A16_PRT_14,
    ADT_A16_ADT_A16_PV1_16,
    ADT_A16_ADT_A16_PV2_17,
    ADT_A16_ADT_A16_ARV_18,
    ADT_A16_ADT_A16_ROL_19,
    ADT_A16_ADT_A16_PRT_20,
    ADT_A16_ADT_A16_DB1_21,
    ADT_A16_ADT_A16_AL1_23,
    ADT_A16_ADT_A16_IAM_24,
    ADT_A16_ADT_A16_DG1_25,
    ADT_A16_ADT_A16_DRG_26,
    ADT_A16_ADT_A16_GT1_28,
    ADT_A16_ADT_A16_ACC_30,
    ADT_A16_ADT_A16_IN1_33,
    ADT_A16_ADT_A16_IN2_34,
    ADT_A16_ADT_A16_IN3_35,
    ADT_A16_ADT_A16_PRT_36,
    ADT_A16_ADT_A16_ROL_37,
    ADT_A16_ADT_A16_AUT_38,
    ADT_A16_ADT_A16_PRT_39,
    ADT_A16_ADT_A16_AUT_40,
    ADT_A16_ADT_A16_PRT_41,
    ADT_A16_ADT_A16_PRT_42,
    ADT_A16_ADT_A16_RF1_43,
    ADT_A16_ADT_A16_NK1_44,
    ADT_A16_ADT_A16_OH2_45,
    ADT_A16_ADT_A16_OH3_46,
    ADT_A16_ADT_A16_OBX_47,
    ADT_A16_ADT_A16_PRT_48,
    ADT_A16_ADT_A16_PR1_49,
    ADT_A16_ADT_A16_PRT_50,
    ADT_A16_ADT_A16_ROL_51,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADT_A16_ADT_A16"; }
  ADT_A16_ADT_A16* create() const { return new ADT_A16_ADT_A16(); }

 private:
  /* Initialize object */
  void init() {
    setName("ADT_A16_ADT_A16");
    addObject<MSH>(ADT_A16_ADT_A16_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ADT_A16_ADT_A16_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ADT_A16_ADT_A16_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ADT_A16_ADT_A16_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<EVN>(ADT_A16_ADT_A16_EVN_5, "EVN.5", HL7::initialized, HL7::repetition_off);
    addObject<PID>(ADT_A16_ADT_A16_PID_6, "PID.6", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(ADT_A16_ADT_A16_PD1_7, "PD1.7", HL7::optional, HL7::repetition_off);
    addObject<OH1>(ADT_A16_ADT_A16_OH1_8, "OH1.8", HL7::optional, HL7::repetition_on);
    addObject<OH2>(ADT_A16_ADT_A16_OH2_9, "OH2.9", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ADT_A16_ADT_A16_OH3_10, "OH3.10", HL7::optional, HL7::repetition_off);
    addObject<OH4>(ADT_A16_ADT_A16_OH4_11, "OH4.11", HL7::optional, HL7::repetition_on);
    addObject<ARV>(ADT_A16_ADT_A16_ARV_12, "ARV.12", HL7::optional, HL7::repetition_on);
    addObject<ROL>(ADT_A16_ADT_A16_ROL_13, "ROL.13", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ADT_A16_ADT_A16_PRT_14, "PRT.14", HL7::optional, HL7::repetition_on);
    addObject<PV1>(ADT_A16_ADT_A16_PV1_16, "PV1.16", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ADT_A16_ADT_A16_PV2_17, "PV2.17", HL7::optional, HL7::repetition_off);
    addObject<ARV>(ADT_A16_ADT_A16_ARV_18, "ARV.18", HL7::optional, HL7::repetition_on);
    addObject<ROL>(ADT_A16_ADT_A16_ROL_19, "ROL.19", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ADT_A16_ADT_A16_PRT_20, "PRT.20", HL7::optional, HL7::repetition_on);
    addObject<DB1>(ADT_A16_ADT_A16_DB1_21, "DB1.21", HL7::optional, HL7::repetition_on);
    addObject<AL1>(ADT_A16_ADT_A16_AL1_23, "AL1.23", HL7::optional, HL7::repetition_on);
    addObject<IAM>(ADT_A16_ADT_A16_IAM_24, "IAM.24", HL7::optional, HL7::repetition_on);
    addObject<DG1>(ADT_A16_ADT_A16_DG1_25, "DG1.25", HL7::optional, HL7::repetition_on);
    addObject<DRG>(ADT_A16_ADT_A16_DRG_26, "DRG.26", HL7::optional, HL7::repetition_off);
    addObject<GT1>(ADT_A16_ADT_A16_GT1_28, "GT1.28", HL7::optional, HL7::repetition_on);
    addObject<ACC>(ADT_A16_ADT_A16_ACC_30, "ACC.30", HL7::optional, HL7::repetition_off);
    addObject<IN1>(ADT_A16_ADT_A16_IN1_33, "IN1.33", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(ADT_A16_ADT_A16_IN2_34, "IN2.34", HL7::optional, HL7::repetition_off);
    addObject<IN3>(ADT_A16_ADT_A16_IN3_35, "IN3.35", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ADT_A16_ADT_A16_PRT_36, "PRT.36", HL7::optional, HL7::repetition_on);
    addObject<ROL>(ADT_A16_ADT_A16_ROL_37, "ROL.37", HL7::optional, HL7::repetition_on);
    addObject<AUT>(ADT_A16_ADT_A16_AUT_38, "AUT.38", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ADT_A16_ADT_A16_PRT_39, "PRT.39", HL7::optional, HL7::repetition_on);
    addObject<AUT>(ADT_A16_ADT_A16_AUT_40, "AUT.40", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ADT_A16_ADT_A16_PRT_41, "PRT.41", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ADT_A16_ADT_A16_PRT_42, "PRT.42", HL7::optional, HL7::repetition_on);
    addObject<RF1>(ADT_A16_ADT_A16_RF1_43, "RF1.43", HL7::initialized, HL7::repetition_off);
    addObject<NK1>(ADT_A16_ADT_A16_NK1_44, "NK1.44", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(ADT_A16_ADT_A16_OH2_45, "OH2.45", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ADT_A16_ADT_A16_OH3_46, "OH3.46", HL7::optional, HL7::repetition_off);
    addObject<OBX>(ADT_A16_ADT_A16_OBX_47, "OBX.47", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ADT_A16_ADT_A16_PRT_48, "PRT.48", HL7::optional, HL7::repetition_on);
    addObject<PR1>(ADT_A16_ADT_A16_PR1_49, "PR1.49", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ADT_A16_ADT_A16_PRT_50, "PRT.50", HL7::optional, HL7::repetition_on);
    addObject<ROL>(ADT_A16_ADT_A16_ROL_51, "ROL.51", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ADT_A16_ADT_A16_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ADT_A16_ADT_A16_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ADT_A16_ADT_A16_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ADT_A16_ADT_A16_UAC_4);
  }
  EVN* getEVN_5(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, ADT_A16_ADT_A16_EVN_5);
  }
  PID* getPID_6(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ADT_A16_ADT_A16_PID_6);
  }
  PD1* getPD1_7(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ADT_A16_ADT_A16_PD1_7);
  }
  OH1* getOH1_8(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, ADT_A16_ADT_A16_OH1_8);
  }
  OH2* getOH2_9(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ADT_A16_ADT_A16_OH2_9);
  }
  OH3* getOH3_10(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ADT_A16_ADT_A16_OH3_10);
  }
  OH4* getOH4_11(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, ADT_A16_ADT_A16_OH4_11);
  }
  ARV* getARV_12(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ADT_A16_ADT_A16_ARV_12);
  }
  ROL* getROL_13(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADT_A16_ADT_A16_ROL_13);
  }
  PRT* getPRT_14(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A16_ADT_A16_PRT_14);
  }
  PV1* getPV1_16(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ADT_A16_ADT_A16_PV1_16);
  }
  PV2* getPV2_17(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ADT_A16_ADT_A16_PV2_17);
  }
  ARV* getARV_18(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ADT_A16_ADT_A16_ARV_18);
  }
  ROL* getROL_19(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADT_A16_ADT_A16_ROL_19);
  }
  PRT* getPRT_20(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A16_ADT_A16_PRT_20);
  }
  DB1* getDB1_21(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, ADT_A16_ADT_A16_DB1_21);
  }
  AL1* getAL1_23(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, ADT_A16_ADT_A16_AL1_23);
  }
  IAM* getIAM_24(size_t index = 0) {
    return (IAM*)this->getObjectSafe(index, ADT_A16_ADT_A16_IAM_24);
  }
  DG1* getDG1_25(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, ADT_A16_ADT_A16_DG1_25);
  }
  DRG* getDRG_26(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, ADT_A16_ADT_A16_DRG_26);
  }
  GT1* getGT1_28(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, ADT_A16_ADT_A16_GT1_28);
  }
  ACC* getACC_30(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, ADT_A16_ADT_A16_ACC_30);
  }
  IN1* getIN1_33(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, ADT_A16_ADT_A16_IN1_33);
  }
  IN2* getIN2_34(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, ADT_A16_ADT_A16_IN2_34);
  }
  IN3* getIN3_35(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, ADT_A16_ADT_A16_IN3_35);
  }
  PRT* getPRT_36(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A16_ADT_A16_PRT_36);
  }
  ROL* getROL_37(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADT_A16_ADT_A16_ROL_37);
  }
  AUT* getAUT_38(size_t index = 0) {
    return (AUT*)this->getObjectSafe(index, ADT_A16_ADT_A16_AUT_38);
  }
  PRT* getPRT_39(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A16_ADT_A16_PRT_39);
  }
  AUT* getAUT_40(size_t index = 0) {
    return (AUT*)this->getObjectSafe(index, ADT_A16_ADT_A16_AUT_40);
  }
  PRT* getPRT_41(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A16_ADT_A16_PRT_41);
  }
  PRT* getPRT_42(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A16_ADT_A16_PRT_42);
  }
  RF1* getRF1_43(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, ADT_A16_ADT_A16_RF1_43);
  }
  NK1* getNK1_44(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ADT_A16_ADT_A16_NK1_44);
  }
  OH2* getOH2_45(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ADT_A16_ADT_A16_OH2_45);
  }
  OH3* getOH3_46(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ADT_A16_ADT_A16_OH3_46);
  }
  OBX* getOBX_47(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ADT_A16_ADT_A16_OBX_47);
  }
  PRT* getPRT_48(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A16_ADT_A16_PRT_48);
  }
  PR1* getPR1_49(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, ADT_A16_ADT_A16_PR1_49);
  }
  PRT* getPRT_50(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A16_ADT_A16_PRT_50);
  }
  ROL* getROL_51(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADT_A16_ADT_A16_ROL_51);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_5(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_EVN_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_6(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_PID_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_7(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_PD1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_8(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_OH1_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_9(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_OH2_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_10(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_OH3_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_11(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_OH4_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_12(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_ARV_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_13(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_ROL_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_14(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_PRT_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_16(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_PV1_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_17(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_PV2_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_18(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_ARV_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_19(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_ROL_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_20(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_PRT_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_21(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_DB1_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_23(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_AL1_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIAM_24(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_IAM_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_25(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_DG1_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_26(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_DRG_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_28(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_GT1_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_30(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_ACC_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_33(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_IN1_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_34(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_IN2_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_35(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_IN3_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_36(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_PRT_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_37(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_ROL_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAUT_38(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_AUT_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_39(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_PRT_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAUT_40(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_AUT_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_41(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_PRT_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_42(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_PRT_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_43(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_RF1_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_44(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_NK1_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_45(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_OH2_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_46(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_OH3_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_47(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_OBX_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_48(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_PRT_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_49(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_PR1_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_50(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_PRT_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_51(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A16_ADT_A16_ROL_51) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A16_ADT_A16_ */
} /* namespace HL7_29 */
#endif /*  __ADT_A16_ADT_A16__29_H__ */
