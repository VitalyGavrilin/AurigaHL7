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


#ifndef __PPR_PC2_PPR_PC1__29_H__
#define __PPR_PC2_PPR_PC1__29_H__

#include "../../common/Util.h"
#include "../segment/CTD.h"
#include "../segment/GOL.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/PRB.h"
#include "../segment/PRD.h"
#include "../segment/PRT.h"
#include "../segment/PTH.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/ROL.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"
#include "../segment/VAR.h"

namespace HL7_29 {

/* Internal structures/groups */
struct PPR_PC2_PPR_PC1_PROVIDER; /* PROVIDER */
struct PPR_PC2_PPR_PC1_PATIENT_VISIT; /* PATIENT_VISIT */
struct PPR_PC2_PPR_PC1_PROBLEM; /* PROBLEM */
struct PPR_PC2_PPR_PC1_PROBLEM_PARTICIPATION; /* PROBLEM_PARTICIPATION */
struct PPR_PC2_PPR_PC1_PATHWAY; /* PATHWAY */
struct PPR_PC2_PPR_PC1_PROBLEM_OBSERVATION; /* PROBLEM_OBSERVATION */
struct PPR_PC2_PPR_PC1_GOAL; /* GOAL */
struct PPR_PC2_PPR_PC1_ORDER; /* ORDER */
struct PPR_PC2_PPR_PC1_GOAL_PARTICIPATION; /* GOAL_PARTICIPATION */
struct PPR_PC2_PPR_PC1_GOAL_OBSERVATION; /* GOAL_OBSERVATION */
struct PPR_PC2_PPR_PC1_GOAL_PARTICIPATION; /* GOAL_PARTICIPATION */
struct PPR_PC2_PPR_PC1_GOAL_OBSERVATION; /* GOAL_OBSERVATION */
struct PPR_PC2_PPR_PC1_ORDER_DETAIL; /* ORDER_DETAIL */
struct PPR_PC2_PPR_PC1_CHOICE; /* CHOICE */
struct PPR_PC2_PPR_PC1_ORDER_OBSERVATION; /* ORDER_OBSERVATION */

/*  */
struct PPR_PC2_PPR_PC1 : public HL7Message {
  PPR_PC2_PPR_PC1() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPR_PC2_PPR_PC1_MSH_1,
    PPR_PC2_PPR_PC1_SFT_2,
    PPR_PC2_PPR_PC1_UAC_3,
    PPR_PC2_PPR_PC1_PID_4,
    PPR_PC2_PPR_PC1_PV1_8,
    PPR_PC2_PPR_PC1_PV2_9,
    PPR_PC2_PPR_PC1_NTE_15,
    PPR_PC2_PPR_PC1_PRB_16,
    PPR_PC2_PPR_PC1_VAR_17,
    PPR_PC2_PPR_PC1_PRT_18,
    PPR_PC2_PPR_PC1_ROL_19,
    PPR_PC2_PPR_PC1_VAR_20,
    PPR_PC2_PPR_PC1_PRT_21,
    PPR_PC2_PPR_PC1_ROL_22,
    PPR_PC2_PPR_PC1_VAR_23,
    PPR_PC2_PPR_PC1_PTH_24,
    PPR_PC2_PPR_PC1_VAR_25,
    PPR_PC2_PPR_PC1_PRT_26,
    PPR_PC2_PPR_PC1_ROL_27,
    PPR_PC2_PPR_PC1_VAR_28,
    PPR_PC2_PPR_PC1_PTH_29,
    PPR_PC2_PPR_PC1_VAR_30,
    PPR_PC2_PPR_PC1_NTE_31,
    PPR_PC2_PPR_PC1_OBX_32,
    PPR_PC2_PPR_PC1_PRT_33,
    PPR_PC2_PPR_PC1_PRT_34,
    PPR_PC2_PPR_PC1_ROL_35,
    PPR_PC2_PPR_PC1_VAR_36,
    PPR_PC2_PPR_PC1_PTH_37,
    PPR_PC2_PPR_PC1_VAR_38,
    PPR_PC2_PPR_PC1_NTE_39,
    PPR_PC2_PPR_PC1_OBX_40,
    PPR_PC2_PPR_PC1_PRT_41,
    PPR_PC2_PPR_PC1_GOL_44,
    PPR_PC2_PPR_PC1_NTE_45,
    PPR_PC2_PPR_PC1_VAR_46,
    PPR_PC2_PPR_PC1_PRT_47,
    PPR_PC2_PPR_PC1_ROL_48,
    PPR_PC2_PPR_PC1_VAR_49,
    PPR_PC2_PPR_PC1_PRT_50,
    PPR_PC2_PPR_PC1_ROL_51,
    PPR_PC2_PPR_PC1_VAR_52,
    PPR_PC2_PPR_PC1_NTE_53,
    PPR_PC2_PPR_PC1_OBX_54,
    PPR_PC2_PPR_PC1_PRT_55,
    PPR_PC2_PPR_PC1_PRT_56,
    PPR_PC2_PPR_PC1_ROL_57,
    PPR_PC2_PPR_PC1_VAR_58,
    PPR_PC2_PPR_PC1_PTH_59,
    PPR_PC2_PPR_PC1_VAR_60,
    PPR_PC2_PPR_PC1_NTE_61,
    PPR_PC2_PPR_PC1_OBX_62,
    PPR_PC2_PPR_PC1_PRT_63,
    PPR_PC2_PPR_PC1_GOL_66,
    PPR_PC2_PPR_PC1_NTE_67,
    PPR_PC2_PPR_PC1_VAR_68,
    PPR_PC2_PPR_PC1_ORC_70,
    PPR_PC2_PPR_PC1_PRT_71,
    PPR_PC2_PPR_PC1_ROL_72,
    PPR_PC2_PPR_PC1_VAR_73,
    PPR_PC2_PPR_PC1_PRT_74,
    PPR_PC2_PPR_PC1_ROL_75,
    PPR_PC2_PPR_PC1_VAR_76,
    PPR_PC2_PPR_PC1_NTE_77,
    PPR_PC2_PPR_PC1_OBX_78,
    PPR_PC2_PPR_PC1_PRT_79,
    PPR_PC2_PPR_PC1_PRT_80,
    PPR_PC2_PPR_PC1_ROL_81,
    PPR_PC2_PPR_PC1_VAR_82,
    PPR_PC2_PPR_PC1_NTE_83,
    PPR_PC2_PPR_PC1_OBX_84,
    PPR_PC2_PPR_PC1_PRT_85,
    PPR_PC2_PPR_PC1_NTE_88,
    PPR_PC2_PPR_PC1_VAR_89,
    PPR_PC2_PPR_PC1_OBR_90,
    PPR_PC2_PPR_PC1_OBR_91,
    PPR_PC2_PPR_PC1_NTE_92,
    PPR_PC2_PPR_PC1_OBX_93,
    PPR_PC2_PPR_PC1_PRT_94,
    PPR_PC2_PPR_PC1_VAR_95,
    PPR_PC2_PPR_PC1_CTD_96,
    PPR_PC2_PPR_PC1_PRD_97,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPR_PC2_PPR_PC1"; }
  PPR_PC2_PPR_PC1* create() const { return new PPR_PC2_PPR_PC1(); }

 private:
  /* Initialize object */
  void init() {
    setName("PPR_PC2_PPR_PC1");
    addObject<MSH>(PPR_PC2_PPR_PC1_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(PPR_PC2_PPR_PC1_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(PPR_PC2_PPR_PC1_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<PID>(PPR_PC2_PPR_PC1_PID_4, "PID.4", HL7::initialized, HL7::repetition_off);
    addObject<PV1>(PPR_PC2_PPR_PC1_PV1_8, "PV1.8", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(PPR_PC2_PPR_PC1_PV2_9, "PV2.9", HL7::optional, HL7::repetition_off);
    addObject<NTE>(PPR_PC2_PPR_PC1_NTE_15, "NTE.15", HL7::optional, HL7::repetition_on);
    addObject<PRB>(PPR_PC2_PPR_PC1_PRB_16, "PRB.16", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPR_PC2_PPR_PC1_VAR_17, "VAR.17", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PPR_PC2_PPR_PC1_PRT_18, "PRT.18", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PPR_PC2_PPR_PC1_ROL_19, "ROL.19", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPR_PC2_PPR_PC1_VAR_20, "VAR.20", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PPR_PC2_PPR_PC1_PRT_21, "PRT.21", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PPR_PC2_PPR_PC1_ROL_22, "ROL.22", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPR_PC2_PPR_PC1_VAR_23, "VAR.23", HL7::optional, HL7::repetition_on);
    addObject<PTH>(PPR_PC2_PPR_PC1_PTH_24, "PTH.24", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPR_PC2_PPR_PC1_VAR_25, "VAR.25", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PPR_PC2_PPR_PC1_PRT_26, "PRT.26", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PPR_PC2_PPR_PC1_ROL_27, "ROL.27", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPR_PC2_PPR_PC1_VAR_28, "VAR.28", HL7::optional, HL7::repetition_on);
    addObject<PTH>(PPR_PC2_PPR_PC1_PTH_29, "PTH.29", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPR_PC2_PPR_PC1_VAR_30, "VAR.30", HL7::optional, HL7::repetition_on);
    addObject<NTE>(PPR_PC2_PPR_PC1_NTE_31, "NTE.31", HL7::optional, HL7::repetition_on);
    addObject<OBX>(PPR_PC2_PPR_PC1_OBX_32, "OBX.32", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(PPR_PC2_PPR_PC1_PRT_33, "PRT.33", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PPR_PC2_PPR_PC1_PRT_34, "PRT.34", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PPR_PC2_PPR_PC1_ROL_35, "ROL.35", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPR_PC2_PPR_PC1_VAR_36, "VAR.36", HL7::optional, HL7::repetition_on);
    addObject<PTH>(PPR_PC2_PPR_PC1_PTH_37, "PTH.37", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPR_PC2_PPR_PC1_VAR_38, "VAR.38", HL7::optional, HL7::repetition_on);
    addObject<NTE>(PPR_PC2_PPR_PC1_NTE_39, "NTE.39", HL7::optional, HL7::repetition_on);
    addObject<OBX>(PPR_PC2_PPR_PC1_OBX_40, "OBX.40", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(PPR_PC2_PPR_PC1_PRT_41, "PRT.41", HL7::optional, HL7::repetition_on);
    addObject<GOL>(PPR_PC2_PPR_PC1_GOL_44, "GOL.44", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(PPR_PC2_PPR_PC1_NTE_45, "NTE.45", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PPR_PC2_PPR_PC1_VAR_46, "VAR.46", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PPR_PC2_PPR_PC1_PRT_47, "PRT.47", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PPR_PC2_PPR_PC1_ROL_48, "ROL.48", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPR_PC2_PPR_PC1_VAR_49, "VAR.49", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PPR_PC2_PPR_PC1_PRT_50, "PRT.50", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PPR_PC2_PPR_PC1_ROL_51, "ROL.51", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPR_PC2_PPR_PC1_VAR_52, "VAR.52", HL7::optional, HL7::repetition_on);
    addObject<NTE>(PPR_PC2_PPR_PC1_NTE_53, "NTE.53", HL7::optional, HL7::repetition_on);
    addObject<OBX>(PPR_PC2_PPR_PC1_OBX_54, "OBX.54", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(PPR_PC2_PPR_PC1_PRT_55, "PRT.55", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PPR_PC2_PPR_PC1_PRT_56, "PRT.56", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PPR_PC2_PPR_PC1_ROL_57, "ROL.57", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPR_PC2_PPR_PC1_VAR_58, "VAR.58", HL7::optional, HL7::repetition_on);
    addObject<PTH>(PPR_PC2_PPR_PC1_PTH_59, "PTH.59", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPR_PC2_PPR_PC1_VAR_60, "VAR.60", HL7::optional, HL7::repetition_on);
    addObject<NTE>(PPR_PC2_PPR_PC1_NTE_61, "NTE.61", HL7::optional, HL7::repetition_on);
    addObject<OBX>(PPR_PC2_PPR_PC1_OBX_62, "OBX.62", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(PPR_PC2_PPR_PC1_PRT_63, "PRT.63", HL7::optional, HL7::repetition_on);
    addObject<GOL>(PPR_PC2_PPR_PC1_GOL_66, "GOL.66", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(PPR_PC2_PPR_PC1_NTE_67, "NTE.67", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PPR_PC2_PPR_PC1_VAR_68, "VAR.68", HL7::optional, HL7::repetition_on);
    addObject<ORC>(PPR_PC2_PPR_PC1_ORC_70, "ORC.70", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(PPR_PC2_PPR_PC1_PRT_71, "PRT.71", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PPR_PC2_PPR_PC1_ROL_72, "ROL.72", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPR_PC2_PPR_PC1_VAR_73, "VAR.73", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PPR_PC2_PPR_PC1_PRT_74, "PRT.74", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PPR_PC2_PPR_PC1_ROL_75, "ROL.75", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPR_PC2_PPR_PC1_VAR_76, "VAR.76", HL7::optional, HL7::repetition_on);
    addObject<NTE>(PPR_PC2_PPR_PC1_NTE_77, "NTE.77", HL7::optional, HL7::repetition_on);
    addObject<OBX>(PPR_PC2_PPR_PC1_OBX_78, "OBX.78", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(PPR_PC2_PPR_PC1_PRT_79, "PRT.79", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PPR_PC2_PPR_PC1_PRT_80, "PRT.80", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PPR_PC2_PPR_PC1_ROL_81, "ROL.81", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPR_PC2_PPR_PC1_VAR_82, "VAR.82", HL7::optional, HL7::repetition_on);
    addObject<NTE>(PPR_PC2_PPR_PC1_NTE_83, "NTE.83", HL7::optional, HL7::repetition_on);
    addObject<OBX>(PPR_PC2_PPR_PC1_OBX_84, "OBX.84", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(PPR_PC2_PPR_PC1_PRT_85, "PRT.85", HL7::optional, HL7::repetition_on);
    addObject<NTE>(PPR_PC2_PPR_PC1_NTE_88, "NTE.88", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PPR_PC2_PPR_PC1_VAR_89, "VAR.89", HL7::optional, HL7::repetition_on);
    addObject<OBR>(PPR_PC2_PPR_PC1_OBR_90, "OBR.90", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(PPR_PC2_PPR_PC1_OBR_91, "OBR.91", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(PPR_PC2_PPR_PC1_NTE_92, "NTE.92", HL7::optional, HL7::repetition_on);
    addObject<OBX>(PPR_PC2_PPR_PC1_OBX_93, "OBX.93", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(PPR_PC2_PPR_PC1_PRT_94, "PRT.94", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PPR_PC2_PPR_PC1_VAR_95, "VAR.95", HL7::optional, HL7::repetition_on);
    addObject<CTD>(PPR_PC2_PPR_PC1_CTD_96, "CTD.96", HL7::optional, HL7::repetition_on);
    addObject<PRD>(PPR_PC2_PPR_PC1_PRD_97, "PRD.97", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_UAC_3);
  }
  PID* getPID_4(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_PID_4);
  }
  PV1* getPV1_8(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_PV1_8);
  }
  PV2* getPV2_9(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_PV2_9);
  }
  NTE* getNTE_15(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_NTE_15);
  }
  PRB* getPRB_16(size_t index = 0) {
    return (PRB*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_PRB_16);
  }
  VAR* getVAR_17(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_VAR_17);
  }
  PRT* getPRT_18(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_PRT_18);
  }
  ROL* getROL_19(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_ROL_19);
  }
  VAR* getVAR_20(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_VAR_20);
  }
  PRT* getPRT_21(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_PRT_21);
  }
  ROL* getROL_22(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_ROL_22);
  }
  VAR* getVAR_23(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_VAR_23);
  }
  PTH* getPTH_24(size_t index = 0) {
    return (PTH*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_PTH_24);
  }
  VAR* getVAR_25(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_VAR_25);
  }
  PRT* getPRT_26(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_PRT_26);
  }
  ROL* getROL_27(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_ROL_27);
  }
  VAR* getVAR_28(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_VAR_28);
  }
  PTH* getPTH_29(size_t index = 0) {
    return (PTH*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_PTH_29);
  }
  VAR* getVAR_30(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_VAR_30);
  }
  NTE* getNTE_31(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_NTE_31);
  }
  OBX* getOBX_32(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_OBX_32);
  }
  PRT* getPRT_33(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_PRT_33);
  }
  PRT* getPRT_34(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_PRT_34);
  }
  ROL* getROL_35(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_ROL_35);
  }
  VAR* getVAR_36(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_VAR_36);
  }
  PTH* getPTH_37(size_t index = 0) {
    return (PTH*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_PTH_37);
  }
  VAR* getVAR_38(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_VAR_38);
  }
  NTE* getNTE_39(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_NTE_39);
  }
  OBX* getOBX_40(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_OBX_40);
  }
  PRT* getPRT_41(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_PRT_41);
  }
  GOL* getGOL_44(size_t index = 0) {
    return (GOL*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_GOL_44);
  }
  NTE* getNTE_45(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_NTE_45);
  }
  VAR* getVAR_46(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_VAR_46);
  }
  PRT* getPRT_47(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_PRT_47);
  }
  ROL* getROL_48(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_ROL_48);
  }
  VAR* getVAR_49(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_VAR_49);
  }
  PRT* getPRT_50(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_PRT_50);
  }
  ROL* getROL_51(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_ROL_51);
  }
  VAR* getVAR_52(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_VAR_52);
  }
  NTE* getNTE_53(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_NTE_53);
  }
  OBX* getOBX_54(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_OBX_54);
  }
  PRT* getPRT_55(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_PRT_55);
  }
  PRT* getPRT_56(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_PRT_56);
  }
  ROL* getROL_57(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_ROL_57);
  }
  VAR* getVAR_58(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_VAR_58);
  }
  PTH* getPTH_59(size_t index = 0) {
    return (PTH*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_PTH_59);
  }
  VAR* getVAR_60(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_VAR_60);
  }
  NTE* getNTE_61(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_NTE_61);
  }
  OBX* getOBX_62(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_OBX_62);
  }
  PRT* getPRT_63(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_PRT_63);
  }
  GOL* getGOL_66(size_t index = 0) {
    return (GOL*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_GOL_66);
  }
  NTE* getNTE_67(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_NTE_67);
  }
  VAR* getVAR_68(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_VAR_68);
  }
  ORC* getORC_70(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_ORC_70);
  }
  PRT* getPRT_71(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_PRT_71);
  }
  ROL* getROL_72(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_ROL_72);
  }
  VAR* getVAR_73(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_VAR_73);
  }
  PRT* getPRT_74(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_PRT_74);
  }
  ROL* getROL_75(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_ROL_75);
  }
  VAR* getVAR_76(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_VAR_76);
  }
  NTE* getNTE_77(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_NTE_77);
  }
  OBX* getOBX_78(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_OBX_78);
  }
  PRT* getPRT_79(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_PRT_79);
  }
  PRT* getPRT_80(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_PRT_80);
  }
  ROL* getROL_81(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_ROL_81);
  }
  VAR* getVAR_82(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_VAR_82);
  }
  NTE* getNTE_83(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_NTE_83);
  }
  OBX* getOBX_84(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_OBX_84);
  }
  PRT* getPRT_85(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_PRT_85);
  }
  NTE* getNTE_88(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_NTE_88);
  }
  VAR* getVAR_89(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_VAR_89);
  }
  OBR* getOBR_90(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_OBR_90);
  }
  OBR* getOBR_91(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_OBR_91);
  }
  NTE* getNTE_92(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_NTE_92);
  }
  OBX* getOBX_93(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_OBX_93);
  }
  PRT* getPRT_94(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_PRT_94);
  }
  VAR* getVAR_95(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_VAR_95);
  }
  CTD* getCTD_96(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_CTD_96);
  }
  PRD* getPRD_97(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, PPR_PC2_PPR_PC1_PRD_97);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_4(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_PID_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_8(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_PV1_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_9(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_PV2_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_15(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_NTE_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRB_16(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_PRB_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_17(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_VAR_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_18(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_PRT_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_19(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_ROL_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_20(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_VAR_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_21(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_PRT_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_22(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_ROL_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_23(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_VAR_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPTH_24(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_PTH_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_25(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_VAR_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_26(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_PRT_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_27(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_ROL_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_28(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_VAR_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPTH_29(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_PTH_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_30(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_VAR_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_31(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_NTE_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_32(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_OBX_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_33(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_PRT_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_34(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_PRT_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_35(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_ROL_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_36(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_VAR_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPTH_37(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_PTH_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_38(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_VAR_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_39(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_NTE_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_40(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_OBX_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_41(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_PRT_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOL_44(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_GOL_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_45(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_NTE_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_46(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_VAR_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_47(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_PRT_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_48(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_ROL_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_49(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_VAR_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_50(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_PRT_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_51(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_ROL_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_52(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_VAR_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_53(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_NTE_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_54(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_OBX_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_55(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_PRT_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_56(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_PRT_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_57(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_ROL_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_58(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_VAR_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPTH_59(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_PTH_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_60(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_VAR_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_61(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_NTE_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_62(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_OBX_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_63(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_PRT_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOL_66(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_GOL_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_67(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_NTE_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_68(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_VAR_68) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_70(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_ORC_70) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_71(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_PRT_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_72(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_ROL_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_73(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_VAR_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_74(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_PRT_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_75(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_ROL_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_76(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_VAR_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_77(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_NTE_77) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_78(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_OBX_78) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_79(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_PRT_79) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_80(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_PRT_80) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_81(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_ROL_81) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_82(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_VAR_82) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_83(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_NTE_83) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_84(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_OBX_84) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_85(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_PRT_85) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_88(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_NTE_88) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_89(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_VAR_89) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_90(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_OBR_90) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_91(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_OBR_91) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_92(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_NTE_92) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_93(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_OBX_93) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_94(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_PRT_94) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_95(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_VAR_95) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_96(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_CTD_96) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_97(size_t index = 0) {
    try {
      return this->getObject(index, PPR_PC2_PPR_PC1_PRD_97) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPR_PC2_PPR_PC1_ */
} /* namespace HL7_29 */
#endif /*  __PPR_PC2_PPR_PC1__29_H__ */
