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


#ifndef __ADT_A13_ADT_A01__29_H__
#define __ADT_A13_ADT_A01__29_H__

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
#include "../segment/PDA.h"
#include "../segment/PID.h"
#include "../segment/PR1.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/RF1.h"
#include "../segment/ROL.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"
#include "../segment/UB1.h"
#include "../segment/UB2.h"

namespace HL7_29 {

/* Internal structures/groups */
struct ADT_A13_ADT_A01_NEXT_OF_KIN; /* NEXT_OF_KIN */
struct ADT_A13_ADT_A01_OBSERVATION; /* OBSERVATION */
struct ADT_A13_ADT_A01_PROCEDURE; /* PROCEDURE */
struct ADT_A13_ADT_A01_INSURANCE; /* INSURANCE */
struct ADT_A13_ADT_A01_AUTHORIZATION; /* AUTHORIZATION */
struct ADT_A13_ADT_A01_REFERRAL; /* REFERRAL */

/*  */
struct ADT_A13_ADT_A01 : public HL7Message {
  ADT_A13_ADT_A01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADT_A13_ADT_A01_MSH_1,
    ADT_A13_ADT_A01_ARV_2,
    ADT_A13_ADT_A01_SFT_3,
    ADT_A13_ADT_A01_UAC_4,
    ADT_A13_ADT_A01_EVN_5,
    ADT_A13_ADT_A01_PID_6,
    ADT_A13_ADT_A01_PD1_7,
    ADT_A13_ADT_A01_OH1_8,
    ADT_A13_ADT_A01_OH2_9,
    ADT_A13_ADT_A01_OH3_10,
    ADT_A13_ADT_A01_OH4_11,
    ADT_A13_ADT_A01_ARV_12,
    ADT_A13_ADT_A01_ROL_13,
    ADT_A13_ADT_A01_PRT_14,
    ADT_A13_ADT_A01_PV1_16,
    ADT_A13_ADT_A01_PV2_17,
    ADT_A13_ADT_A01_ARV_18,
    ADT_A13_ADT_A01_ROL_19,
    ADT_A13_ADT_A01_PRT_20,
    ADT_A13_ADT_A01_DB1_21,
    ADT_A13_ADT_A01_AL1_23,
    ADT_A13_ADT_A01_IAM_24,
    ADT_A13_ADT_A01_DG1_25,
    ADT_A13_ADT_A01_DRG_26,
    ADT_A13_ADT_A01_GT1_28,
    ADT_A13_ADT_A01_ACC_30,
    ADT_A13_ADT_A01_UB1_31,
    ADT_A13_ADT_A01_UB2_32,
    ADT_A13_ADT_A01_PDA_33,
    ADT_A13_ADT_A01_IN1_36,
    ADT_A13_ADT_A01_IN2_37,
    ADT_A13_ADT_A01_IN3_38,
    ADT_A13_ADT_A01_PRT_39,
    ADT_A13_ADT_A01_ROL_40,
    ADT_A13_ADT_A01_AUT_41,
    ADT_A13_ADT_A01_PRT_42,
    ADT_A13_ADT_A01_AUT_43,
    ADT_A13_ADT_A01_PRT_44,
    ADT_A13_ADT_A01_PRT_45,
    ADT_A13_ADT_A01_RF1_46,
    ADT_A13_ADT_A01_NK1_47,
    ADT_A13_ADT_A01_OH2_48,
    ADT_A13_ADT_A01_OH3_49,
    ADT_A13_ADT_A01_OBX_50,
    ADT_A13_ADT_A01_PRT_51,
    ADT_A13_ADT_A01_PR1_52,
    ADT_A13_ADT_A01_PRT_53,
    ADT_A13_ADT_A01_ROL_54,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADT_A13_ADT_A01"; }
  ADT_A13_ADT_A01* create() const { return new ADT_A13_ADT_A01(); }

 private:
  /* Initialize object */
  void init() {
    setName("ADT_A13_ADT_A01");
    addObject<MSH>(ADT_A13_ADT_A01_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ADT_A13_ADT_A01_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ADT_A13_ADT_A01_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ADT_A13_ADT_A01_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<EVN>(ADT_A13_ADT_A01_EVN_5, "EVN.5", HL7::initialized, HL7::repetition_off);
    addObject<PID>(ADT_A13_ADT_A01_PID_6, "PID.6", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(ADT_A13_ADT_A01_PD1_7, "PD1.7", HL7::optional, HL7::repetition_off);
    addObject<OH1>(ADT_A13_ADT_A01_OH1_8, "OH1.8", HL7::optional, HL7::repetition_on);
    addObject<OH2>(ADT_A13_ADT_A01_OH2_9, "OH2.9", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ADT_A13_ADT_A01_OH3_10, "OH3.10", HL7::optional, HL7::repetition_on);
    addObject<OH4>(ADT_A13_ADT_A01_OH4_11, "OH4.11", HL7::optional, HL7::repetition_on);
    addObject<ARV>(ADT_A13_ADT_A01_ARV_12, "ARV.12", HL7::optional, HL7::repetition_on);
    addObject<ROL>(ADT_A13_ADT_A01_ROL_13, "ROL.13", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ADT_A13_ADT_A01_PRT_14, "PRT.14", HL7::optional, HL7::repetition_on);
    addObject<PV1>(ADT_A13_ADT_A01_PV1_16, "PV1.16", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ADT_A13_ADT_A01_PV2_17, "PV2.17", HL7::optional, HL7::repetition_off);
    addObject<ARV>(ADT_A13_ADT_A01_ARV_18, "ARV.18", HL7::optional, HL7::repetition_on);
    addObject<ROL>(ADT_A13_ADT_A01_ROL_19, "ROL.19", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ADT_A13_ADT_A01_PRT_20, "PRT.20", HL7::optional, HL7::repetition_on);
    addObject<DB1>(ADT_A13_ADT_A01_DB1_21, "DB1.21", HL7::optional, HL7::repetition_on);
    addObject<AL1>(ADT_A13_ADT_A01_AL1_23, "AL1.23", HL7::optional, HL7::repetition_on);
    addObject<IAM>(ADT_A13_ADT_A01_IAM_24, "IAM.24", HL7::optional, HL7::repetition_on);
    addObject<DG1>(ADT_A13_ADT_A01_DG1_25, "DG1.25", HL7::optional, HL7::repetition_on);
    addObject<DRG>(ADT_A13_ADT_A01_DRG_26, "DRG.26", HL7::optional, HL7::repetition_off);
    addObject<GT1>(ADT_A13_ADT_A01_GT1_28, "GT1.28", HL7::optional, HL7::repetition_on);
    addObject<ACC>(ADT_A13_ADT_A01_ACC_30, "ACC.30", HL7::optional, HL7::repetition_off);
    addObject<UB1>(ADT_A13_ADT_A01_UB1_31, "UB1.31", HL7::optional, HL7::repetition_off);
    addObject<UB2>(ADT_A13_ADT_A01_UB2_32, "UB2.32", HL7::optional, HL7::repetition_off);
    addObject<PDA>(ADT_A13_ADT_A01_PDA_33, "PDA.33", HL7::optional, HL7::repetition_off);
    addObject<IN1>(ADT_A13_ADT_A01_IN1_36, "IN1.36", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(ADT_A13_ADT_A01_IN2_37, "IN2.37", HL7::optional, HL7::repetition_off);
    addObject<IN3>(ADT_A13_ADT_A01_IN3_38, "IN3.38", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ADT_A13_ADT_A01_PRT_39, "PRT.39", HL7::optional, HL7::repetition_on);
    addObject<ROL>(ADT_A13_ADT_A01_ROL_40, "ROL.40", HL7::optional, HL7::repetition_on);
    addObject<AUT>(ADT_A13_ADT_A01_AUT_41, "AUT.41", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ADT_A13_ADT_A01_PRT_42, "PRT.42", HL7::optional, HL7::repetition_on);
    addObject<AUT>(ADT_A13_ADT_A01_AUT_43, "AUT.43", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ADT_A13_ADT_A01_PRT_44, "PRT.44", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ADT_A13_ADT_A01_PRT_45, "PRT.45", HL7::optional, HL7::repetition_on);
    addObject<RF1>(ADT_A13_ADT_A01_RF1_46, "RF1.46", HL7::initialized, HL7::repetition_off);
    addObject<NK1>(ADT_A13_ADT_A01_NK1_47, "NK1.47", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(ADT_A13_ADT_A01_OH2_48, "OH2.48", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ADT_A13_ADT_A01_OH3_49, "OH3.49", HL7::optional, HL7::repetition_off);
    addObject<OBX>(ADT_A13_ADT_A01_OBX_50, "OBX.50", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ADT_A13_ADT_A01_PRT_51, "PRT.51", HL7::optional, HL7::repetition_on);
    addObject<PR1>(ADT_A13_ADT_A01_PR1_52, "PR1.52", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ADT_A13_ADT_A01_PRT_53, "PRT.53", HL7::optional, HL7::repetition_on);
    addObject<ROL>(ADT_A13_ADT_A01_ROL_54, "ROL.54", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ADT_A13_ADT_A01_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ADT_A13_ADT_A01_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ADT_A13_ADT_A01_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ADT_A13_ADT_A01_UAC_4);
  }
  EVN* getEVN_5(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, ADT_A13_ADT_A01_EVN_5);
  }
  PID* getPID_6(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ADT_A13_ADT_A01_PID_6);
  }
  PD1* getPD1_7(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ADT_A13_ADT_A01_PD1_7);
  }
  OH1* getOH1_8(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, ADT_A13_ADT_A01_OH1_8);
  }
  OH2* getOH2_9(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ADT_A13_ADT_A01_OH2_9);
  }
  OH3* getOH3_10(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ADT_A13_ADT_A01_OH3_10);
  }
  OH4* getOH4_11(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, ADT_A13_ADT_A01_OH4_11);
  }
  ARV* getARV_12(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ADT_A13_ADT_A01_ARV_12);
  }
  ROL* getROL_13(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADT_A13_ADT_A01_ROL_13);
  }
  PRT* getPRT_14(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A13_ADT_A01_PRT_14);
  }
  PV1* getPV1_16(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ADT_A13_ADT_A01_PV1_16);
  }
  PV2* getPV2_17(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ADT_A13_ADT_A01_PV2_17);
  }
  ARV* getARV_18(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ADT_A13_ADT_A01_ARV_18);
  }
  ROL* getROL_19(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADT_A13_ADT_A01_ROL_19);
  }
  PRT* getPRT_20(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A13_ADT_A01_PRT_20);
  }
  DB1* getDB1_21(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, ADT_A13_ADT_A01_DB1_21);
  }
  AL1* getAL1_23(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, ADT_A13_ADT_A01_AL1_23);
  }
  IAM* getIAM_24(size_t index = 0) {
    return (IAM*)this->getObjectSafe(index, ADT_A13_ADT_A01_IAM_24);
  }
  DG1* getDG1_25(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, ADT_A13_ADT_A01_DG1_25);
  }
  DRG* getDRG_26(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, ADT_A13_ADT_A01_DRG_26);
  }
  GT1* getGT1_28(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, ADT_A13_ADT_A01_GT1_28);
  }
  ACC* getACC_30(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, ADT_A13_ADT_A01_ACC_30);
  }
  UB1* getUB1_31(size_t index = 0) {
    return (UB1*)this->getObjectSafe(index, ADT_A13_ADT_A01_UB1_31);
  }
  UB2* getUB2_32(size_t index = 0) {
    return (UB2*)this->getObjectSafe(index, ADT_A13_ADT_A01_UB2_32);
  }
  PDA* getPDA_33(size_t index = 0) {
    return (PDA*)this->getObjectSafe(index, ADT_A13_ADT_A01_PDA_33);
  }
  IN1* getIN1_36(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, ADT_A13_ADT_A01_IN1_36);
  }
  IN2* getIN2_37(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, ADT_A13_ADT_A01_IN2_37);
  }
  IN3* getIN3_38(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, ADT_A13_ADT_A01_IN3_38);
  }
  PRT* getPRT_39(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A13_ADT_A01_PRT_39);
  }
  ROL* getROL_40(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADT_A13_ADT_A01_ROL_40);
  }
  AUT* getAUT_41(size_t index = 0) {
    return (AUT*)this->getObjectSafe(index, ADT_A13_ADT_A01_AUT_41);
  }
  PRT* getPRT_42(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A13_ADT_A01_PRT_42);
  }
  AUT* getAUT_43(size_t index = 0) {
    return (AUT*)this->getObjectSafe(index, ADT_A13_ADT_A01_AUT_43);
  }
  PRT* getPRT_44(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A13_ADT_A01_PRT_44);
  }
  PRT* getPRT_45(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A13_ADT_A01_PRT_45);
  }
  RF1* getRF1_46(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, ADT_A13_ADT_A01_RF1_46);
  }
  NK1* getNK1_47(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ADT_A13_ADT_A01_NK1_47);
  }
  OH2* getOH2_48(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ADT_A13_ADT_A01_OH2_48);
  }
  OH3* getOH3_49(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ADT_A13_ADT_A01_OH3_49);
  }
  OBX* getOBX_50(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ADT_A13_ADT_A01_OBX_50);
  }
  PRT* getPRT_51(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A13_ADT_A01_PRT_51);
  }
  PR1* getPR1_52(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, ADT_A13_ADT_A01_PR1_52);
  }
  PRT* getPRT_53(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A13_ADT_A01_PRT_53);
  }
  ROL* getROL_54(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADT_A13_ADT_A01_ROL_54);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_5(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_EVN_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_6(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_PID_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_7(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_PD1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_8(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_OH1_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_9(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_OH2_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_10(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_OH3_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_11(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_OH4_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_12(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_ARV_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_13(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_ROL_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_14(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_PRT_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_16(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_PV1_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_17(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_PV2_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_18(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_ARV_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_19(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_ROL_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_20(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_PRT_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_21(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_DB1_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_23(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_AL1_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIAM_24(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_IAM_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_25(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_DG1_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_26(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_DRG_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_28(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_GT1_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_30(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_ACC_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUB1_31(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_UB1_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUB2_32(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_UB2_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPDA_33(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_PDA_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_36(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_IN1_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_37(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_IN2_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_38(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_IN3_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_39(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_PRT_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_40(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_ROL_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAUT_41(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_AUT_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_42(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_PRT_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAUT_43(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_AUT_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_44(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_PRT_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_45(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_PRT_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_46(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_RF1_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_47(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_NK1_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_48(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_OH2_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_49(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_OH3_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_50(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_OBX_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_51(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_PRT_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_52(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_PR1_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_53(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_PRT_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_54(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A13_ADT_A01_ROL_54) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A13_ADT_A01_ */
} /* namespace HL7_29 */
#endif /*  __ADT_A13_ADT_A01__29_H__ */
