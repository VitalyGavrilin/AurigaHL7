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


#ifndef __DFT_P03_DFT_P03__29_H__
#define __DFT_P03_DFT_P03__29_H__

#include "../../common/Util.h"
#include "../segment/ACC.h"
#include "../segment/DB1.h"
#include "../segment/DG1.h"
#include "../segment/DRG.h"
#include "../segment/EVN.h"
#include "../segment/FT1.h"
#include "../segment/GT1.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IN3.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PR1.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/ROL.h"
#include "../segment/SFT.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct DFT_P03_DFT_P03_VISIT; /* VISIT */
struct DFT_P03_DFT_P03_COMMON_ORDER; /* COMMON_ORDER */
struct DFT_P03_DFT_P03_FINANCIAL; /* FINANCIAL */
struct DFT_P03_DFT_P03_DIAGNOSIS; /* DIAGNOSIS */
struct DFT_P03_DFT_P03_INSURANCE; /* INSURANCE */
struct DFT_P03_DFT_P03_TIMING_QUANTITY; /* TIMING_QUANTITY */
struct DFT_P03_DFT_P03_ORDER; /* ORDER */
struct DFT_P03_DFT_P03_OBSERVATION; /* OBSERVATION */
struct DFT_P03_DFT_P03_FINANCIAL_PROCEDURE; /* FINANCIAL_PROCEDURE */
struct DFT_P03_DFT_P03_FINANCIAL_COMMON_ORDER; /* FINANCIAL_COMMON_ORDER */
struct DFT_P03_DFT_P03_FINANCIAL_TIMING_QUANTITY; /* FINANCIAL_TIMING_QUANTITY */
struct DFT_P03_DFT_P03_FINANCIAL_ORDER; /* FINANCIAL_ORDER */
struct DFT_P03_DFT_P03_FINANCIAL_OBSERVATION; /* FINANCIAL_OBSERVATION */

/*  */
struct DFT_P03_DFT_P03 : public HL7Message {
  DFT_P03_DFT_P03() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DFT_P03_DFT_P03_MSH_1,
    DFT_P03_DFT_P03_SFT_2,
    DFT_P03_DFT_P03_UAC_3,
    DFT_P03_DFT_P03_EVN_4,
    DFT_P03_DFT_P03_PID_5,
    DFT_P03_DFT_P03_PD1_6,
    DFT_P03_DFT_P03_PRT_7,
    DFT_P03_DFT_P03_ROL_8,
    DFT_P03_DFT_P03_DB1_10,
    DFT_P03_DFT_P03_DRG_14,
    DFT_P03_DFT_P03_GT1_15,
    DFT_P03_DFT_P03_ACC_17,
    DFT_P03_DFT_P03_ORC_21,
    DFT_P03_DFT_P03_PRT_22,
    DFT_P03_DFT_P03_TQ1_23,
    DFT_P03_DFT_P03_TQ2_24,
    DFT_P03_DFT_P03_TQ1_25,
    DFT_P03_DFT_P03_TQ2_26,
    DFT_P03_DFT_P03_NTE_27,
    DFT_P03_DFT_P03_OBR_28,
    DFT_P03_DFT_P03_PRT_29,
    DFT_P03_DFT_P03_TQ1_30,
    DFT_P03_DFT_P03_TQ2_31,
    DFT_P03_DFT_P03_NTE_32,
    DFT_P03_DFT_P03_OBR_33,
    DFT_P03_DFT_P03_PRT_34,
    DFT_P03_DFT_P03_NTE_35,
    DFT_P03_DFT_P03_OBX_36,
    DFT_P03_DFT_P03_PRT_37,
    DFT_P03_DFT_P03_DG1_38,
    DFT_P03_DFT_P03_FT1_41,
    DFT_P03_DFT_P03_PR1_45,
    DFT_P03_DFT_P03_PRT_46,
    DFT_P03_DFT_P03_ROL_47,
    DFT_P03_DFT_P03_PR1_48,
    DFT_P03_DFT_P03_PRT_49,
    DFT_P03_DFT_P03_ROL_50,
    DFT_P03_DFT_P03_ORC_54,
    DFT_P03_DFT_P03_PRT_55,
    DFT_P03_DFT_P03_TQ1_56,
    DFT_P03_DFT_P03_TQ2_57,
    DFT_P03_DFT_P03_TQ1_58,
    DFT_P03_DFT_P03_TQ2_59,
    DFT_P03_DFT_P03_NTE_60,
    DFT_P03_DFT_P03_OBR_61,
    DFT_P03_DFT_P03_PRT_62,
    DFT_P03_DFT_P03_TQ1_63,
    DFT_P03_DFT_P03_TQ2_64,
    DFT_P03_DFT_P03_NTE_65,
    DFT_P03_DFT_P03_OBR_66,
    DFT_P03_DFT_P03_PRT_67,
    DFT_P03_DFT_P03_NTE_68,
    DFT_P03_DFT_P03_OBX_69,
    DFT_P03_DFT_P03_PRT_70,
    DFT_P03_DFT_P03_IN1_71,
    DFT_P03_DFT_P03_IN2_72,
    DFT_P03_DFT_P03_IN3_73,
    DFT_P03_DFT_P03_PRT_74,
    DFT_P03_DFT_P03_ROL_75,
    DFT_P03_DFT_P03_PRT_76,
    DFT_P03_DFT_P03_PV1_77,
    DFT_P03_DFT_P03_PV2_78,
    DFT_P03_DFT_P03_ROL_79,
    FIELD_ID_MAX
  };

  const char* className() const { return "DFT_P03_DFT_P03"; }
  DFT_P03_DFT_P03* create() const { return new DFT_P03_DFT_P03(); }

 private:
  /* Initialize object */
  void init() {
    setName("DFT_P03_DFT_P03");
    addObject<MSH>(DFT_P03_DFT_P03_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(DFT_P03_DFT_P03_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(DFT_P03_DFT_P03_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EVN>(DFT_P03_DFT_P03_EVN_4, "EVN.4", HL7::initialized, HL7::repetition_off);
    addObject<PID>(DFT_P03_DFT_P03_PID_5, "PID.5", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(DFT_P03_DFT_P03_PD1_6, "PD1.6", HL7::optional, HL7::repetition_off);
    addObject<PRT>(DFT_P03_DFT_P03_PRT_7, "PRT.7", HL7::optional, HL7::repetition_on);
    addObject<ROL>(DFT_P03_DFT_P03_ROL_8, "ROL.8", HL7::optional, HL7::repetition_on);
    addObject<DB1>(DFT_P03_DFT_P03_DB1_10, "DB1.10", HL7::optional, HL7::repetition_on);
    addObject<DRG>(DFT_P03_DFT_P03_DRG_14, "DRG.14", HL7::optional, HL7::repetition_off);
    addObject<GT1>(DFT_P03_DFT_P03_GT1_15, "GT1.15", HL7::optional, HL7::repetition_on);
    addObject<ACC>(DFT_P03_DFT_P03_ACC_17, "ACC.17", HL7::optional, HL7::repetition_off);
    addObject<ORC>(DFT_P03_DFT_P03_ORC_21, "ORC.21", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DFT_P03_DFT_P03_PRT_22, "PRT.22", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(DFT_P03_DFT_P03_TQ1_23, "TQ1.23", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(DFT_P03_DFT_P03_TQ2_24, "TQ2.24", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(DFT_P03_DFT_P03_TQ1_25, "TQ1.25", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(DFT_P03_DFT_P03_TQ2_26, "TQ2.26", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DFT_P03_DFT_P03_NTE_27, "NTE.27", HL7::optional, HL7::repetition_on);
    addObject<OBR>(DFT_P03_DFT_P03_OBR_28, "OBR.28", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DFT_P03_DFT_P03_PRT_29, "PRT.29", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(DFT_P03_DFT_P03_TQ1_30, "TQ1.30", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(DFT_P03_DFT_P03_TQ2_31, "TQ2.31", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DFT_P03_DFT_P03_NTE_32, "NTE.32", HL7::optional, HL7::repetition_on);
    addObject<OBR>(DFT_P03_DFT_P03_OBR_33, "OBR.33", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DFT_P03_DFT_P03_PRT_34, "PRT.34", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DFT_P03_DFT_P03_NTE_35, "NTE.35", HL7::optional, HL7::repetition_on);
    addObject<OBX>(DFT_P03_DFT_P03_OBX_36, "OBX.36", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DFT_P03_DFT_P03_PRT_37, "PRT.37", HL7::optional, HL7::repetition_on);
    addObject<DG1>(DFT_P03_DFT_P03_DG1_38, "DG1.38", HL7::initialized, HL7::repetition_off);
    addObject<FT1>(DFT_P03_DFT_P03_FT1_41, "FT1.41", HL7::initialized, HL7::repetition_off);
    addObject<PR1>(DFT_P03_DFT_P03_PR1_45, "PR1.45", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DFT_P03_DFT_P03_PRT_46, "PRT.46", HL7::optional, HL7::repetition_on);
    addObject<ROL>(DFT_P03_DFT_P03_ROL_47, "ROL.47", HL7::optional, HL7::repetition_on);
    addObject<PR1>(DFT_P03_DFT_P03_PR1_48, "PR1.48", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DFT_P03_DFT_P03_PRT_49, "PRT.49", HL7::optional, HL7::repetition_on);
    addObject<ROL>(DFT_P03_DFT_P03_ROL_50, "ROL.50", HL7::optional, HL7::repetition_on);
    addObject<ORC>(DFT_P03_DFT_P03_ORC_54, "ORC.54", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DFT_P03_DFT_P03_PRT_55, "PRT.55", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(DFT_P03_DFT_P03_TQ1_56, "TQ1.56", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(DFT_P03_DFT_P03_TQ2_57, "TQ2.57", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(DFT_P03_DFT_P03_TQ1_58, "TQ1.58", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(DFT_P03_DFT_P03_TQ2_59, "TQ2.59", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DFT_P03_DFT_P03_NTE_60, "NTE.60", HL7::optional, HL7::repetition_on);
    addObject<OBR>(DFT_P03_DFT_P03_OBR_61, "OBR.61", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DFT_P03_DFT_P03_PRT_62, "PRT.62", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(DFT_P03_DFT_P03_TQ1_63, "TQ1.63", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(DFT_P03_DFT_P03_TQ2_64, "TQ2.64", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DFT_P03_DFT_P03_NTE_65, "NTE.65", HL7::optional, HL7::repetition_on);
    addObject<OBR>(DFT_P03_DFT_P03_OBR_66, "OBR.66", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DFT_P03_DFT_P03_PRT_67, "PRT.67", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DFT_P03_DFT_P03_NTE_68, "NTE.68", HL7::optional, HL7::repetition_on);
    addObject<OBX>(DFT_P03_DFT_P03_OBX_69, "OBX.69", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DFT_P03_DFT_P03_PRT_70, "PRT.70", HL7::optional, HL7::repetition_on);
    addObject<IN1>(DFT_P03_DFT_P03_IN1_71, "IN1.71", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(DFT_P03_DFT_P03_IN2_72, "IN2.72", HL7::optional, HL7::repetition_off);
    addObject<IN3>(DFT_P03_DFT_P03_IN3_73, "IN3.73", HL7::optional, HL7::repetition_on);
    addObject<PRT>(DFT_P03_DFT_P03_PRT_74, "PRT.74", HL7::optional, HL7::repetition_on);
    addObject<ROL>(DFT_P03_DFT_P03_ROL_75, "ROL.75", HL7::optional, HL7::repetition_on);
    addObject<PRT>(DFT_P03_DFT_P03_PRT_76, "PRT.76", HL7::optional, HL7::repetition_on);
    addObject<PV1>(DFT_P03_DFT_P03_PV1_77, "PV1.77", HL7::optional, HL7::repetition_off);
    addObject<PV2>(DFT_P03_DFT_P03_PV2_78, "PV2.78", HL7::optional, HL7::repetition_off);
    addObject<ROL>(DFT_P03_DFT_P03_ROL_79, "ROL.79", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, DFT_P03_DFT_P03_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, DFT_P03_DFT_P03_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, DFT_P03_DFT_P03_UAC_3);
  }
  EVN* getEVN_4(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, DFT_P03_DFT_P03_EVN_4);
  }
  PID* getPID_5(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, DFT_P03_DFT_P03_PID_5);
  }
  PD1* getPD1_6(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, DFT_P03_DFT_P03_PD1_6);
  }
  PRT* getPRT_7(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P03_DFT_P03_PRT_7);
  }
  ROL* getROL_8(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, DFT_P03_DFT_P03_ROL_8);
  }
  DB1* getDB1_10(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, DFT_P03_DFT_P03_DB1_10);
  }
  DRG* getDRG_14(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, DFT_P03_DFT_P03_DRG_14);
  }
  GT1* getGT1_15(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, DFT_P03_DFT_P03_GT1_15);
  }
  ACC* getACC_17(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, DFT_P03_DFT_P03_ACC_17);
  }
  ORC* getORC_21(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, DFT_P03_DFT_P03_ORC_21);
  }
  PRT* getPRT_22(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P03_DFT_P03_PRT_22);
  }
  TQ1* getTQ1_23(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, DFT_P03_DFT_P03_TQ1_23);
  }
  TQ2* getTQ2_24(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, DFT_P03_DFT_P03_TQ2_24);
  }
  TQ1* getTQ1_25(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, DFT_P03_DFT_P03_TQ1_25);
  }
  TQ2* getTQ2_26(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, DFT_P03_DFT_P03_TQ2_26);
  }
  NTE* getNTE_27(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DFT_P03_DFT_P03_NTE_27);
  }
  OBR* getOBR_28(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, DFT_P03_DFT_P03_OBR_28);
  }
  PRT* getPRT_29(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P03_DFT_P03_PRT_29);
  }
  TQ1* getTQ1_30(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, DFT_P03_DFT_P03_TQ1_30);
  }
  TQ2* getTQ2_31(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, DFT_P03_DFT_P03_TQ2_31);
  }
  NTE* getNTE_32(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DFT_P03_DFT_P03_NTE_32);
  }
  OBR* getOBR_33(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, DFT_P03_DFT_P03_OBR_33);
  }
  PRT* getPRT_34(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P03_DFT_P03_PRT_34);
  }
  NTE* getNTE_35(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DFT_P03_DFT_P03_NTE_35);
  }
  OBX* getOBX_36(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DFT_P03_DFT_P03_OBX_36);
  }
  PRT* getPRT_37(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P03_DFT_P03_PRT_37);
  }
  DG1* getDG1_38(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, DFT_P03_DFT_P03_DG1_38);
  }
  FT1* getFT1_41(size_t index = 0) {
    return (FT1*)this->getObjectSafe(index, DFT_P03_DFT_P03_FT1_41);
  }
  PR1* getPR1_45(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, DFT_P03_DFT_P03_PR1_45);
  }
  PRT* getPRT_46(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P03_DFT_P03_PRT_46);
  }
  ROL* getROL_47(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, DFT_P03_DFT_P03_ROL_47);
  }
  PR1* getPR1_48(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, DFT_P03_DFT_P03_PR1_48);
  }
  PRT* getPRT_49(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P03_DFT_P03_PRT_49);
  }
  ROL* getROL_50(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, DFT_P03_DFT_P03_ROL_50);
  }
  ORC* getORC_54(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, DFT_P03_DFT_P03_ORC_54);
  }
  PRT* getPRT_55(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P03_DFT_P03_PRT_55);
  }
  TQ1* getTQ1_56(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, DFT_P03_DFT_P03_TQ1_56);
  }
  TQ2* getTQ2_57(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, DFT_P03_DFT_P03_TQ2_57);
  }
  TQ1* getTQ1_58(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, DFT_P03_DFT_P03_TQ1_58);
  }
  TQ2* getTQ2_59(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, DFT_P03_DFT_P03_TQ2_59);
  }
  NTE* getNTE_60(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DFT_P03_DFT_P03_NTE_60);
  }
  OBR* getOBR_61(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, DFT_P03_DFT_P03_OBR_61);
  }
  PRT* getPRT_62(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P03_DFT_P03_PRT_62);
  }
  TQ1* getTQ1_63(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, DFT_P03_DFT_P03_TQ1_63);
  }
  TQ2* getTQ2_64(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, DFT_P03_DFT_P03_TQ2_64);
  }
  NTE* getNTE_65(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DFT_P03_DFT_P03_NTE_65);
  }
  OBR* getOBR_66(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, DFT_P03_DFT_P03_OBR_66);
  }
  PRT* getPRT_67(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P03_DFT_P03_PRT_67);
  }
  NTE* getNTE_68(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DFT_P03_DFT_P03_NTE_68);
  }
  OBX* getOBX_69(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DFT_P03_DFT_P03_OBX_69);
  }
  PRT* getPRT_70(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P03_DFT_P03_PRT_70);
  }
  IN1* getIN1_71(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, DFT_P03_DFT_P03_IN1_71);
  }
  IN2* getIN2_72(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, DFT_P03_DFT_P03_IN2_72);
  }
  IN3* getIN3_73(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, DFT_P03_DFT_P03_IN3_73);
  }
  PRT* getPRT_74(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P03_DFT_P03_PRT_74);
  }
  ROL* getROL_75(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, DFT_P03_DFT_P03_ROL_75);
  }
  PRT* getPRT_76(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P03_DFT_P03_PRT_76);
  }
  PV1* getPV1_77(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, DFT_P03_DFT_P03_PV1_77);
  }
  PV2* getPV2_78(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, DFT_P03_DFT_P03_PV2_78);
  }
  ROL* getROL_79(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, DFT_P03_DFT_P03_ROL_79);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_4(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_EVN_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_5(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_PID_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_6(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_PD1_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_7(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_PRT_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_8(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_ROL_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_10(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_DB1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_14(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_DRG_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_15(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_GT1_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_17(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_ACC_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_21(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_ORC_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_22(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_PRT_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_23(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_TQ1_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_24(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_TQ2_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_25(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_TQ1_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_26(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_TQ2_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_27(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_NTE_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_28(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_OBR_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_29(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_PRT_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_30(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_TQ1_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_31(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_TQ2_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_32(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_NTE_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_33(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_OBR_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_34(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_PRT_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_35(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_NTE_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_36(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_OBX_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_37(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_PRT_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_38(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_DG1_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFT1_41(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_FT1_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_45(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_PR1_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_46(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_PRT_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_47(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_ROL_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_48(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_PR1_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_49(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_PRT_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_50(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_ROL_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_54(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_ORC_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_55(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_PRT_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_56(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_TQ1_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_57(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_TQ2_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_58(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_TQ1_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_59(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_TQ2_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_60(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_NTE_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_61(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_OBR_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_62(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_PRT_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_63(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_TQ1_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_64(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_TQ2_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_65(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_NTE_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_66(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_OBR_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_67(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_PRT_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_68(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_NTE_68) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_69(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_OBX_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_70(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_PRT_70) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_71(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_IN1_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_72(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_IN2_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_73(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_IN3_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_74(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_PRT_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_75(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_ROL_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_76(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_PRT_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_77(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_PV1_77) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_78(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_PV2_78) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_79(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P03_DFT_P03_ROL_79) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DFT_P03_DFT_P03_ */
} /* namespace HL7_29 */
#endif /*  __DFT_P03_DFT_P03__29_H__ */
