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


#ifndef __PPP_PCB_PPP_PCB__29_H__
#define __PPP_PCB_PPP_PCB__29_H__

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
struct PPP_PCB_PPP_PCB_PROVIDER; /* PROVIDER */
struct PPP_PCB_PPP_PCB_PATIENT_VISIT; /* PATIENT_VISIT */
struct PPP_PCB_PPP_PCB_PATHWAY; /* PATHWAY */
struct PPP_PCB_PPP_PCB_PATHWAY_PARTICIPATION; /* PATHWAY_PARTICIPATION */
struct PPP_PCB_PPP_PCB_PROBLEM; /* PROBLEM */
struct PPP_PCB_PPP_PCB_PROBLEM_PARTICIPATION; /* PROBLEM_PARTICIPATION */
struct PPP_PCB_PPP_PCB_PROBLEM_OBSERVATION; /* PROBLEM_OBSERVATION */
struct PPP_PCB_PPP_PCB_GOAL; /* GOAL */
struct PPP_PCB_PPP_PCB_ORDER; /* ORDER */
struct PPP_PCB_PPP_PCB_GOAL_PARTICIPATION; /* GOAL_PARTICIPATION */
struct PPP_PCB_PPP_PCB_GOAL_OBSERVATION; /* GOAL_OBSERVATION */
struct PPP_PCB_PPP_PCB_GOAL_PARTICIPATION; /* GOAL_PARTICIPATION */
struct PPP_PCB_PPP_PCB_GOAL_OBSERVATION; /* GOAL_OBSERVATION */
struct PPP_PCB_PPP_PCB_ORDER_DETAIL; /* ORDER_DETAIL */
struct PPP_PCB_PPP_PCB_CHOICE; /* CHOICE */
struct PPP_PCB_PPP_PCB_ORDER_OBSERVATION; /* ORDER_OBSERVATION */

/*  */
struct PPP_PCB_PPP_PCB : public HL7Message {
  PPP_PCB_PPP_PCB() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PPP_PCB_PPP_PCB_MSH_1,
    PPP_PCB_PPP_PCB_SFT_2,
    PPP_PCB_PPP_PCB_UAC_3,
    PPP_PCB_PPP_PCB_PID_4,
    PPP_PCB_PPP_PCB_NTE_10,
    PPP_PCB_PPP_PCB_PTH_11,
    PPP_PCB_PPP_PCB_VAR_12,
    PPP_PCB_PPP_PCB_PRT_13,
    PPP_PCB_PPP_PCB_ROL_14,
    PPP_PCB_PPP_PCB_VAR_15,
    PPP_PCB_PPP_PCB_PRT_16,
    PPP_PCB_PPP_PCB_ROL_17,
    PPP_PCB_PPP_PCB_VAR_18,
    PPP_PCB_PPP_PCB_NTE_23,
    PPP_PCB_PPP_PCB_PRB_24,
    PPP_PCB_PPP_PCB_VAR_25,
    PPP_PCB_PPP_PCB_PRT_26,
    PPP_PCB_PPP_PCB_ROL_27,
    PPP_PCB_PPP_PCB_VAR_28,
    PPP_PCB_PPP_PCB_PRT_29,
    PPP_PCB_PPP_PCB_ROL_30,
    PPP_PCB_PPP_PCB_VAR_31,
    PPP_PCB_PPP_PCB_NTE_32,
    PPP_PCB_PPP_PCB_OBX_33,
    PPP_PCB_PPP_PCB_PRT_34,
    PPP_PCB_PPP_PCB_PRT_35,
    PPP_PCB_PPP_PCB_ROL_36,
    PPP_PCB_PPP_PCB_VAR_37,
    PPP_PCB_PPP_PCB_NTE_38,
    PPP_PCB_PPP_PCB_OBX_39,
    PPP_PCB_PPP_PCB_PRT_40,
    PPP_PCB_PPP_PCB_GOL_43,
    PPP_PCB_PPP_PCB_NTE_44,
    PPP_PCB_PPP_PCB_VAR_45,
    PPP_PCB_PPP_PCB_PRT_46,
    PPP_PCB_PPP_PCB_ROL_47,
    PPP_PCB_PPP_PCB_VAR_48,
    PPP_PCB_PPP_PCB_PRT_49,
    PPP_PCB_PPP_PCB_ROL_50,
    PPP_PCB_PPP_PCB_VAR_51,
    PPP_PCB_PPP_PCB_NTE_52,
    PPP_PCB_PPP_PCB_OBX_53,
    PPP_PCB_PPP_PCB_PRT_54,
    PPP_PCB_PPP_PCB_PRT_55,
    PPP_PCB_PPP_PCB_ROL_56,
    PPP_PCB_PPP_PCB_VAR_57,
    PPP_PCB_PPP_PCB_NTE_58,
    PPP_PCB_PPP_PCB_OBX_59,
    PPP_PCB_PPP_PCB_PRT_60,
    PPP_PCB_PPP_PCB_GOL_63,
    PPP_PCB_PPP_PCB_NTE_64,
    PPP_PCB_PPP_PCB_VAR_65,
    PPP_PCB_PPP_PCB_ORC_67,
    PPP_PCB_PPP_PCB_PRT_68,
    PPP_PCB_PPP_PCB_ROL_69,
    PPP_PCB_PPP_PCB_VAR_70,
    PPP_PCB_PPP_PCB_PRT_71,
    PPP_PCB_PPP_PCB_ROL_72,
    PPP_PCB_PPP_PCB_VAR_73,
    PPP_PCB_PPP_PCB_NTE_74,
    PPP_PCB_PPP_PCB_OBX_75,
    PPP_PCB_PPP_PCB_PRT_76,
    PPP_PCB_PPP_PCB_PRT_77,
    PPP_PCB_PPP_PCB_ROL_78,
    PPP_PCB_PPP_PCB_VAR_79,
    PPP_PCB_PPP_PCB_NTE_80,
    PPP_PCB_PPP_PCB_OBX_81,
    PPP_PCB_PPP_PCB_PRT_82,
    PPP_PCB_PPP_PCB_NTE_85,
    PPP_PCB_PPP_PCB_VAR_86,
    PPP_PCB_PPP_PCB_OBR_87,
    PPP_PCB_PPP_PCB_OBR_88,
    PPP_PCB_PPP_PCB_NTE_89,
    PPP_PCB_PPP_PCB_OBX_90,
    PPP_PCB_PPP_PCB_PRT_91,
    PPP_PCB_PPP_PCB_VAR_92,
    PPP_PCB_PPP_PCB_PV1_93,
    PPP_PCB_PPP_PCB_PV2_94,
    PPP_PCB_PPP_PCB_CTD_95,
    PPP_PCB_PPP_PCB_PRD_96,
    FIELD_ID_MAX
  };

  const char* className() const { return "PPP_PCB_PPP_PCB"; }
  PPP_PCB_PPP_PCB* create() const { return new PPP_PCB_PPP_PCB(); }

 private:
  /* Initialize object */
  void init() {
    setName("PPP_PCB_PPP_PCB");
    addObject<MSH>(PPP_PCB_PPP_PCB_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(PPP_PCB_PPP_PCB_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(PPP_PCB_PPP_PCB_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<PID>(PPP_PCB_PPP_PCB_PID_4, "PID.4", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(PPP_PCB_PPP_PCB_NTE_10, "NTE.10", HL7::optional, HL7::repetition_on);
    addObject<PTH>(PPP_PCB_PPP_PCB_PTH_11, "PTH.11", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPP_PCB_PPP_PCB_VAR_12, "VAR.12", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PPP_PCB_PPP_PCB_PRT_13, "PRT.13", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PPP_PCB_PPP_PCB_ROL_14, "ROL.14", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPP_PCB_PPP_PCB_VAR_15, "VAR.15", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PPP_PCB_PPP_PCB_PRT_16, "PRT.16", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PPP_PCB_PPP_PCB_ROL_17, "ROL.17", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPP_PCB_PPP_PCB_VAR_18, "VAR.18", HL7::optional, HL7::repetition_on);
    addObject<NTE>(PPP_PCB_PPP_PCB_NTE_23, "NTE.23", HL7::optional, HL7::repetition_on);
    addObject<PRB>(PPP_PCB_PPP_PCB_PRB_24, "PRB.24", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPP_PCB_PPP_PCB_VAR_25, "VAR.25", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PPP_PCB_PPP_PCB_PRT_26, "PRT.26", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PPP_PCB_PPP_PCB_ROL_27, "ROL.27", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPP_PCB_PPP_PCB_VAR_28, "VAR.28", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PPP_PCB_PPP_PCB_PRT_29, "PRT.29", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PPP_PCB_PPP_PCB_ROL_30, "ROL.30", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPP_PCB_PPP_PCB_VAR_31, "VAR.31", HL7::optional, HL7::repetition_on);
    addObject<NTE>(PPP_PCB_PPP_PCB_NTE_32, "NTE.32", HL7::optional, HL7::repetition_on);
    addObject<OBX>(PPP_PCB_PPP_PCB_OBX_33, "OBX.33", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(PPP_PCB_PPP_PCB_PRT_34, "PRT.34", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PPP_PCB_PPP_PCB_PRT_35, "PRT.35", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PPP_PCB_PPP_PCB_ROL_36, "ROL.36", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPP_PCB_PPP_PCB_VAR_37, "VAR.37", HL7::optional, HL7::repetition_on);
    addObject<NTE>(PPP_PCB_PPP_PCB_NTE_38, "NTE.38", HL7::optional, HL7::repetition_on);
    addObject<OBX>(PPP_PCB_PPP_PCB_OBX_39, "OBX.39", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(PPP_PCB_PPP_PCB_PRT_40, "PRT.40", HL7::optional, HL7::repetition_on);
    addObject<GOL>(PPP_PCB_PPP_PCB_GOL_43, "GOL.43", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(PPP_PCB_PPP_PCB_NTE_44, "NTE.44", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PPP_PCB_PPP_PCB_VAR_45, "VAR.45", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PPP_PCB_PPP_PCB_PRT_46, "PRT.46", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PPP_PCB_PPP_PCB_ROL_47, "ROL.47", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPP_PCB_PPP_PCB_VAR_48, "VAR.48", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PPP_PCB_PPP_PCB_PRT_49, "PRT.49", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PPP_PCB_PPP_PCB_ROL_50, "ROL.50", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPP_PCB_PPP_PCB_VAR_51, "VAR.51", HL7::optional, HL7::repetition_on);
    addObject<NTE>(PPP_PCB_PPP_PCB_NTE_52, "NTE.52", HL7::optional, HL7::repetition_on);
    addObject<OBX>(PPP_PCB_PPP_PCB_OBX_53, "OBX.53", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(PPP_PCB_PPP_PCB_PRT_54, "PRT.54", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PPP_PCB_PPP_PCB_PRT_55, "PRT.55", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PPP_PCB_PPP_PCB_ROL_56, "ROL.56", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPP_PCB_PPP_PCB_VAR_57, "VAR.57", HL7::optional, HL7::repetition_on);
    addObject<NTE>(PPP_PCB_PPP_PCB_NTE_58, "NTE.58", HL7::optional, HL7::repetition_on);
    addObject<OBX>(PPP_PCB_PPP_PCB_OBX_59, "OBX.59", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(PPP_PCB_PPP_PCB_PRT_60, "PRT.60", HL7::optional, HL7::repetition_on);
    addObject<GOL>(PPP_PCB_PPP_PCB_GOL_63, "GOL.63", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(PPP_PCB_PPP_PCB_NTE_64, "NTE.64", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PPP_PCB_PPP_PCB_VAR_65, "VAR.65", HL7::optional, HL7::repetition_on);
    addObject<ORC>(PPP_PCB_PPP_PCB_ORC_67, "ORC.67", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(PPP_PCB_PPP_PCB_PRT_68, "PRT.68", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PPP_PCB_PPP_PCB_ROL_69, "ROL.69", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPP_PCB_PPP_PCB_VAR_70, "VAR.70", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PPP_PCB_PPP_PCB_PRT_71, "PRT.71", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PPP_PCB_PPP_PCB_ROL_72, "ROL.72", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPP_PCB_PPP_PCB_VAR_73, "VAR.73", HL7::optional, HL7::repetition_on);
    addObject<NTE>(PPP_PCB_PPP_PCB_NTE_74, "NTE.74", HL7::optional, HL7::repetition_on);
    addObject<OBX>(PPP_PCB_PPP_PCB_OBX_75, "OBX.75", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(PPP_PCB_PPP_PCB_PRT_76, "PRT.76", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PPP_PCB_PPP_PCB_PRT_77, "PRT.77", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PPP_PCB_PPP_PCB_ROL_78, "ROL.78", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PPP_PCB_PPP_PCB_VAR_79, "VAR.79", HL7::optional, HL7::repetition_on);
    addObject<NTE>(PPP_PCB_PPP_PCB_NTE_80, "NTE.80", HL7::optional, HL7::repetition_on);
    addObject<OBX>(PPP_PCB_PPP_PCB_OBX_81, "OBX.81", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(PPP_PCB_PPP_PCB_PRT_82, "PRT.82", HL7::optional, HL7::repetition_on);
    addObject<NTE>(PPP_PCB_PPP_PCB_NTE_85, "NTE.85", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PPP_PCB_PPP_PCB_VAR_86, "VAR.86", HL7::optional, HL7::repetition_on);
    addObject<OBR>(PPP_PCB_PPP_PCB_OBR_87, "OBR.87", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(PPP_PCB_PPP_PCB_OBR_88, "OBR.88", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(PPP_PCB_PPP_PCB_NTE_89, "NTE.89", HL7::optional, HL7::repetition_on);
    addObject<OBX>(PPP_PCB_PPP_PCB_OBX_90, "OBX.90", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(PPP_PCB_PPP_PCB_PRT_91, "PRT.91", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PPP_PCB_PPP_PCB_VAR_92, "VAR.92", HL7::optional, HL7::repetition_on);
    addObject<PV1>(PPP_PCB_PPP_PCB_PV1_93, "PV1.93", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(PPP_PCB_PPP_PCB_PV2_94, "PV2.94", HL7::optional, HL7::repetition_off);
    addObject<CTD>(PPP_PCB_PPP_PCB_CTD_95, "CTD.95", HL7::optional, HL7::repetition_on);
    addObject<PRD>(PPP_PCB_PPP_PCB_PRD_96, "PRD.96", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_UAC_3);
  }
  PID* getPID_4(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_PID_4);
  }
  NTE* getNTE_10(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_NTE_10);
  }
  PTH* getPTH_11(size_t index = 0) {
    return (PTH*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_PTH_11);
  }
  VAR* getVAR_12(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_VAR_12);
  }
  PRT* getPRT_13(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_PRT_13);
  }
  ROL* getROL_14(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_ROL_14);
  }
  VAR* getVAR_15(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_VAR_15);
  }
  PRT* getPRT_16(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_PRT_16);
  }
  ROL* getROL_17(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_ROL_17);
  }
  VAR* getVAR_18(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_VAR_18);
  }
  NTE* getNTE_23(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_NTE_23);
  }
  PRB* getPRB_24(size_t index = 0) {
    return (PRB*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_PRB_24);
  }
  VAR* getVAR_25(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_VAR_25);
  }
  PRT* getPRT_26(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_PRT_26);
  }
  ROL* getROL_27(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_ROL_27);
  }
  VAR* getVAR_28(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_VAR_28);
  }
  PRT* getPRT_29(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_PRT_29);
  }
  ROL* getROL_30(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_ROL_30);
  }
  VAR* getVAR_31(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_VAR_31);
  }
  NTE* getNTE_32(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_NTE_32);
  }
  OBX* getOBX_33(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_OBX_33);
  }
  PRT* getPRT_34(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_PRT_34);
  }
  PRT* getPRT_35(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_PRT_35);
  }
  ROL* getROL_36(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_ROL_36);
  }
  VAR* getVAR_37(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_VAR_37);
  }
  NTE* getNTE_38(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_NTE_38);
  }
  OBX* getOBX_39(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_OBX_39);
  }
  PRT* getPRT_40(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_PRT_40);
  }
  GOL* getGOL_43(size_t index = 0) {
    return (GOL*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_GOL_43);
  }
  NTE* getNTE_44(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_NTE_44);
  }
  VAR* getVAR_45(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_VAR_45);
  }
  PRT* getPRT_46(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_PRT_46);
  }
  ROL* getROL_47(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_ROL_47);
  }
  VAR* getVAR_48(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_VAR_48);
  }
  PRT* getPRT_49(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_PRT_49);
  }
  ROL* getROL_50(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_ROL_50);
  }
  VAR* getVAR_51(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_VAR_51);
  }
  NTE* getNTE_52(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_NTE_52);
  }
  OBX* getOBX_53(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_OBX_53);
  }
  PRT* getPRT_54(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_PRT_54);
  }
  PRT* getPRT_55(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_PRT_55);
  }
  ROL* getROL_56(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_ROL_56);
  }
  VAR* getVAR_57(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_VAR_57);
  }
  NTE* getNTE_58(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_NTE_58);
  }
  OBX* getOBX_59(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_OBX_59);
  }
  PRT* getPRT_60(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_PRT_60);
  }
  GOL* getGOL_63(size_t index = 0) {
    return (GOL*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_GOL_63);
  }
  NTE* getNTE_64(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_NTE_64);
  }
  VAR* getVAR_65(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_VAR_65);
  }
  ORC* getORC_67(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_ORC_67);
  }
  PRT* getPRT_68(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_PRT_68);
  }
  ROL* getROL_69(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_ROL_69);
  }
  VAR* getVAR_70(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_VAR_70);
  }
  PRT* getPRT_71(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_PRT_71);
  }
  ROL* getROL_72(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_ROL_72);
  }
  VAR* getVAR_73(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_VAR_73);
  }
  NTE* getNTE_74(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_NTE_74);
  }
  OBX* getOBX_75(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_OBX_75);
  }
  PRT* getPRT_76(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_PRT_76);
  }
  PRT* getPRT_77(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_PRT_77);
  }
  ROL* getROL_78(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_ROL_78);
  }
  VAR* getVAR_79(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_VAR_79);
  }
  NTE* getNTE_80(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_NTE_80);
  }
  OBX* getOBX_81(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_OBX_81);
  }
  PRT* getPRT_82(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_PRT_82);
  }
  NTE* getNTE_85(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_NTE_85);
  }
  VAR* getVAR_86(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_VAR_86);
  }
  OBR* getOBR_87(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_OBR_87);
  }
  OBR* getOBR_88(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_OBR_88);
  }
  NTE* getNTE_89(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_NTE_89);
  }
  OBX* getOBX_90(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_OBX_90);
  }
  PRT* getPRT_91(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_PRT_91);
  }
  VAR* getVAR_92(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_VAR_92);
  }
  PV1* getPV1_93(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_PV1_93);
  }
  PV2* getPV2_94(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_PV2_94);
  }
  CTD* getCTD_95(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_CTD_95);
  }
  PRD* getPRD_96(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, PPP_PCB_PPP_PCB_PRD_96);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_4(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_PID_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_10(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_NTE_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPTH_11(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_PTH_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_12(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_VAR_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_13(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_PRT_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_14(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_ROL_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_15(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_VAR_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_16(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_PRT_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_17(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_ROL_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_18(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_VAR_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_23(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_NTE_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRB_24(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_PRB_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_25(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_VAR_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_26(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_PRT_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_27(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_ROL_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_28(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_VAR_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_29(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_PRT_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_30(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_ROL_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_31(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_VAR_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_32(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_NTE_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_33(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_OBX_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_34(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_PRT_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_35(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_PRT_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_36(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_ROL_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_37(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_VAR_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_38(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_NTE_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_39(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_OBX_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_40(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_PRT_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOL_43(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_GOL_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_44(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_NTE_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_45(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_VAR_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_46(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_PRT_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_47(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_ROL_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_48(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_VAR_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_49(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_PRT_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_50(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_ROL_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_51(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_VAR_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_52(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_NTE_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_53(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_OBX_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_54(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_PRT_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_55(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_PRT_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_56(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_ROL_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_57(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_VAR_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_58(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_NTE_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_59(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_OBX_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_60(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_PRT_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOL_63(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_GOL_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_64(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_NTE_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_65(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_VAR_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_67(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_ORC_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_68(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_PRT_68) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_69(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_ROL_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_70(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_VAR_70) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_71(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_PRT_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_72(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_ROL_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_73(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_VAR_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_74(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_NTE_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_75(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_OBX_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_76(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_PRT_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_77(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_PRT_77) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_78(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_ROL_78) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_79(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_VAR_79) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_80(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_NTE_80) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_81(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_OBX_81) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_82(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_PRT_82) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_85(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_NTE_85) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_86(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_VAR_86) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_87(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_OBR_87) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_88(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_OBR_88) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_89(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_NTE_89) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_90(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_OBX_90) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_91(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_PRT_91) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_92(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_VAR_92) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_93(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_PV1_93) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_94(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_PV2_94) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_95(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_CTD_95) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_96(size_t index = 0) {
    try {
      return this->getObject(index, PPP_PCB_PPP_PCB_PRD_96) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PPP_PCB_PPP_PCB_ */
} /* namespace HL7_29 */
#endif /*  __PPP_PCB_PPP_PCB__29_H__ */
