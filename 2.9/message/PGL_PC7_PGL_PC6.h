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


#ifndef __PGL_PC7_PGL_PC6__29_H__
#define __PGL_PC7_PGL_PC6__29_H__

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
struct PGL_PC7_PGL_PC6_PROVIDER; /* PROVIDER */
struct PGL_PC7_PGL_PC6_PATIENT_VISIT; /* PATIENT_VISIT */
struct PGL_PC7_PGL_PC6_GOAL; /* GOAL */
struct PGL_PC7_PGL_PC6_GOAL_PARTICIPATION; /* GOAL_PARTICIPATION */
struct PGL_PC7_PGL_PC6_PATHWAY; /* PATHWAY */
struct PGL_PC7_PGL_PC6_OBSERVATION; /* OBSERVATION */
struct PGL_PC7_PGL_PC6_PROBLEM; /* PROBLEM */
struct PGL_PC7_PGL_PC6_ORDER; /* ORDER */
struct PGL_PC7_PGL_PC6_PROBLEM_PARTICIPATION; /* PROBLEM_PARTICIPATION */
struct PGL_PC7_PGL_PC6_PROBLEM_OBSERVATION; /* PROBLEM_OBSERVATION */
struct PGL_PC7_PGL_PC6_PROBLEM_PARTICIPATION; /* PROBLEM_PARTICIPATION */
struct PGL_PC7_PGL_PC6_PROBLEM_OBSERVATION; /* PROBLEM_OBSERVATION */
struct PGL_PC7_PGL_PC6_ORDER_DETAIL; /* ORDER_DETAIL */
struct PGL_PC7_PGL_PC6_CHOICE; /* CHOICE */
struct PGL_PC7_PGL_PC6_ORDER_OBSERVATION; /* ORDER_OBSERVATION */

/*  */
struct PGL_PC7_PGL_PC6 : public HL7Message {
  PGL_PC7_PGL_PC6() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    PGL_PC7_PGL_PC6_MSH_1,
    PGL_PC7_PGL_PC6_SFT_2,
    PGL_PC7_PGL_PC6_UAC_3,
    PGL_PC7_PGL_PC6_PID_4,
    PGL_PC7_PGL_PC6_GOL_13,
    PGL_PC7_PGL_PC6_NTE_14,
    PGL_PC7_PGL_PC6_VAR_15,
    PGL_PC7_PGL_PC6_PRT_16,
    PGL_PC7_PGL_PC6_ROL_17,
    PGL_PC7_PGL_PC6_VAR_18,
    PGL_PC7_PGL_PC6_PRT_19,
    PGL_PC7_PGL_PC6_ROL_20,
    PGL_PC7_PGL_PC6_VAR_21,
    PGL_PC7_PGL_PC6_PTH_22,
    PGL_PC7_PGL_PC6_VAR_23,
    PGL_PC7_PGL_PC6_PRT_24,
    PGL_PC7_PGL_PC6_ROL_25,
    PGL_PC7_PGL_PC6_VAR_26,
    PGL_PC7_PGL_PC6_PTH_27,
    PGL_PC7_PGL_PC6_VAR_28,
    PGL_PC7_PGL_PC6_NTE_29,
    PGL_PC7_PGL_PC6_OBX_30,
    PGL_PC7_PGL_PC6_PRT_31,
    PGL_PC7_PGL_PC6_PRT_32,
    PGL_PC7_PGL_PC6_ROL_33,
    PGL_PC7_PGL_PC6_VAR_34,
    PGL_PC7_PGL_PC6_PTH_35,
    PGL_PC7_PGL_PC6_VAR_36,
    PGL_PC7_PGL_PC6_NTE_37,
    PGL_PC7_PGL_PC6_OBX_38,
    PGL_PC7_PGL_PC6_PRT_39,
    PGL_PC7_PGL_PC6_NTE_42,
    PGL_PC7_PGL_PC6_PRB_43,
    PGL_PC7_PGL_PC6_VAR_44,
    PGL_PC7_PGL_PC6_PRT_45,
    PGL_PC7_PGL_PC6_ROL_46,
    PGL_PC7_PGL_PC6_VAR_47,
    PGL_PC7_PGL_PC6_PRT_48,
    PGL_PC7_PGL_PC6_ROL_49,
    PGL_PC7_PGL_PC6_VAR_50,
    PGL_PC7_PGL_PC6_NTE_51,
    PGL_PC7_PGL_PC6_OBX_52,
    PGL_PC7_PGL_PC6_PRT_53,
    PGL_PC7_PGL_PC6_PRT_54,
    PGL_PC7_PGL_PC6_ROL_55,
    PGL_PC7_PGL_PC6_VAR_56,
    PGL_PC7_PGL_PC6_PTH_57,
    PGL_PC7_PGL_PC6_VAR_58,
    PGL_PC7_PGL_PC6_NTE_59,
    PGL_PC7_PGL_PC6_OBX_60,
    PGL_PC7_PGL_PC6_PRT_61,
    PGL_PC7_PGL_PC6_NTE_64,
    PGL_PC7_PGL_PC6_PRB_65,
    PGL_PC7_PGL_PC6_VAR_66,
    PGL_PC7_PGL_PC6_ORC_68,
    PGL_PC7_PGL_PC6_PRT_69,
    PGL_PC7_PGL_PC6_ROL_70,
    PGL_PC7_PGL_PC6_VAR_71,
    PGL_PC7_PGL_PC6_PRT_72,
    PGL_PC7_PGL_PC6_ROL_73,
    PGL_PC7_PGL_PC6_VAR_74,
    PGL_PC7_PGL_PC6_NTE_75,
    PGL_PC7_PGL_PC6_OBX_76,
    PGL_PC7_PGL_PC6_PRT_77,
    PGL_PC7_PGL_PC6_PRT_78,
    PGL_PC7_PGL_PC6_ROL_79,
    PGL_PC7_PGL_PC6_VAR_80,
    PGL_PC7_PGL_PC6_NTE_81,
    PGL_PC7_PGL_PC6_OBX_82,
    PGL_PC7_PGL_PC6_PRT_83,
    PGL_PC7_PGL_PC6_NTE_86,
    PGL_PC7_PGL_PC6_VAR_87,
    PGL_PC7_PGL_PC6_OBR_88,
    PGL_PC7_PGL_PC6_OBR_89,
    PGL_PC7_PGL_PC6_NTE_90,
    PGL_PC7_PGL_PC6_OBX_91,
    PGL_PC7_PGL_PC6_PRT_92,
    PGL_PC7_PGL_PC6_VAR_93,
    PGL_PC7_PGL_PC6_PV1_94,
    PGL_PC7_PGL_PC6_PV2_95,
    PGL_PC7_PGL_PC6_CTD_96,
    PGL_PC7_PGL_PC6_PRD_97,
    FIELD_ID_MAX
  };

  const char* className() const { return "PGL_PC7_PGL_PC6"; }
  PGL_PC7_PGL_PC6* create() const { return new PGL_PC7_PGL_PC6(); }

 private:
  /* Initialize object */
  void init() {
    setName("PGL_PC7_PGL_PC6");
    addObject<MSH>(PGL_PC7_PGL_PC6_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(PGL_PC7_PGL_PC6_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(PGL_PC7_PGL_PC6_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<PID>(PGL_PC7_PGL_PC6_PID_4, "PID.4", HL7::initialized, HL7::repetition_off);
    addObject<GOL>(PGL_PC7_PGL_PC6_GOL_13, "GOL.13", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(PGL_PC7_PGL_PC6_NTE_14, "NTE.14", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PGL_PC7_PGL_PC6_VAR_15, "VAR.15", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PGL_PC7_PGL_PC6_PRT_16, "PRT.16", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PGL_PC7_PGL_PC6_ROL_17, "ROL.17", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PGL_PC7_PGL_PC6_VAR_18, "VAR.18", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PGL_PC7_PGL_PC6_PRT_19, "PRT.19", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PGL_PC7_PGL_PC6_ROL_20, "ROL.20", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PGL_PC7_PGL_PC6_VAR_21, "VAR.21", HL7::optional, HL7::repetition_on);
    addObject<PTH>(PGL_PC7_PGL_PC6_PTH_22, "PTH.22", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PGL_PC7_PGL_PC6_VAR_23, "VAR.23", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PGL_PC7_PGL_PC6_PRT_24, "PRT.24", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PGL_PC7_PGL_PC6_ROL_25, "ROL.25", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PGL_PC7_PGL_PC6_VAR_26, "VAR.26", HL7::optional, HL7::repetition_on);
    addObject<PTH>(PGL_PC7_PGL_PC6_PTH_27, "PTH.27", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PGL_PC7_PGL_PC6_VAR_28, "VAR.28", HL7::optional, HL7::repetition_on);
    addObject<NTE>(PGL_PC7_PGL_PC6_NTE_29, "NTE.29", HL7::optional, HL7::repetition_on);
    addObject<OBX>(PGL_PC7_PGL_PC6_OBX_30, "OBX.30", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(PGL_PC7_PGL_PC6_PRT_31, "PRT.31", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PGL_PC7_PGL_PC6_PRT_32, "PRT.32", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PGL_PC7_PGL_PC6_ROL_33, "ROL.33", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PGL_PC7_PGL_PC6_VAR_34, "VAR.34", HL7::optional, HL7::repetition_on);
    addObject<PTH>(PGL_PC7_PGL_PC6_PTH_35, "PTH.35", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PGL_PC7_PGL_PC6_VAR_36, "VAR.36", HL7::optional, HL7::repetition_on);
    addObject<NTE>(PGL_PC7_PGL_PC6_NTE_37, "NTE.37", HL7::optional, HL7::repetition_on);
    addObject<OBX>(PGL_PC7_PGL_PC6_OBX_38, "OBX.38", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(PGL_PC7_PGL_PC6_PRT_39, "PRT.39", HL7::optional, HL7::repetition_on);
    addObject<NTE>(PGL_PC7_PGL_PC6_NTE_42, "NTE.42", HL7::optional, HL7::repetition_on);
    addObject<PRB>(PGL_PC7_PGL_PC6_PRB_43, "PRB.43", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PGL_PC7_PGL_PC6_VAR_44, "VAR.44", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PGL_PC7_PGL_PC6_PRT_45, "PRT.45", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PGL_PC7_PGL_PC6_ROL_46, "ROL.46", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PGL_PC7_PGL_PC6_VAR_47, "VAR.47", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PGL_PC7_PGL_PC6_PRT_48, "PRT.48", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PGL_PC7_PGL_PC6_ROL_49, "ROL.49", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PGL_PC7_PGL_PC6_VAR_50, "VAR.50", HL7::optional, HL7::repetition_on);
    addObject<NTE>(PGL_PC7_PGL_PC6_NTE_51, "NTE.51", HL7::optional, HL7::repetition_on);
    addObject<OBX>(PGL_PC7_PGL_PC6_OBX_52, "OBX.52", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(PGL_PC7_PGL_PC6_PRT_53, "PRT.53", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PGL_PC7_PGL_PC6_PRT_54, "PRT.54", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PGL_PC7_PGL_PC6_ROL_55, "ROL.55", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PGL_PC7_PGL_PC6_VAR_56, "VAR.56", HL7::optional, HL7::repetition_on);
    addObject<PTH>(PGL_PC7_PGL_PC6_PTH_57, "PTH.57", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PGL_PC7_PGL_PC6_VAR_58, "VAR.58", HL7::optional, HL7::repetition_on);
    addObject<NTE>(PGL_PC7_PGL_PC6_NTE_59, "NTE.59", HL7::optional, HL7::repetition_on);
    addObject<OBX>(PGL_PC7_PGL_PC6_OBX_60, "OBX.60", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(PGL_PC7_PGL_PC6_PRT_61, "PRT.61", HL7::optional, HL7::repetition_on);
    addObject<NTE>(PGL_PC7_PGL_PC6_NTE_64, "NTE.64", HL7::optional, HL7::repetition_on);
    addObject<PRB>(PGL_PC7_PGL_PC6_PRB_65, "PRB.65", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PGL_PC7_PGL_PC6_VAR_66, "VAR.66", HL7::optional, HL7::repetition_on);
    addObject<ORC>(PGL_PC7_PGL_PC6_ORC_68, "ORC.68", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(PGL_PC7_PGL_PC6_PRT_69, "PRT.69", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PGL_PC7_PGL_PC6_ROL_70, "ROL.70", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PGL_PC7_PGL_PC6_VAR_71, "VAR.71", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PGL_PC7_PGL_PC6_PRT_72, "PRT.72", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PGL_PC7_PGL_PC6_ROL_73, "ROL.73", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PGL_PC7_PGL_PC6_VAR_74, "VAR.74", HL7::optional, HL7::repetition_on);
    addObject<NTE>(PGL_PC7_PGL_PC6_NTE_75, "NTE.75", HL7::optional, HL7::repetition_on);
    addObject<OBX>(PGL_PC7_PGL_PC6_OBX_76, "OBX.76", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(PGL_PC7_PGL_PC6_PRT_77, "PRT.77", HL7::optional, HL7::repetition_on);
    addObject<PRT>(PGL_PC7_PGL_PC6_PRT_78, "PRT.78", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(PGL_PC7_PGL_PC6_ROL_79, "ROL.79", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(PGL_PC7_PGL_PC6_VAR_80, "VAR.80", HL7::optional, HL7::repetition_on);
    addObject<NTE>(PGL_PC7_PGL_PC6_NTE_81, "NTE.81", HL7::optional, HL7::repetition_on);
    addObject<OBX>(PGL_PC7_PGL_PC6_OBX_82, "OBX.82", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(PGL_PC7_PGL_PC6_PRT_83, "PRT.83", HL7::optional, HL7::repetition_on);
    addObject<NTE>(PGL_PC7_PGL_PC6_NTE_86, "NTE.86", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PGL_PC7_PGL_PC6_VAR_87, "VAR.87", HL7::optional, HL7::repetition_on);
    addObject<OBR>(PGL_PC7_PGL_PC6_OBR_88, "OBR.88", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(PGL_PC7_PGL_PC6_OBR_89, "OBR.89", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(PGL_PC7_PGL_PC6_NTE_90, "NTE.90", HL7::optional, HL7::repetition_on);
    addObject<OBX>(PGL_PC7_PGL_PC6_OBX_91, "OBX.91", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(PGL_PC7_PGL_PC6_PRT_92, "PRT.92", HL7::optional, HL7::repetition_on);
    addObject<VAR>(PGL_PC7_PGL_PC6_VAR_93, "VAR.93", HL7::optional, HL7::repetition_on);
    addObject<PV1>(PGL_PC7_PGL_PC6_PV1_94, "PV1.94", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(PGL_PC7_PGL_PC6_PV2_95, "PV2.95", HL7::optional, HL7::repetition_off);
    addObject<CTD>(PGL_PC7_PGL_PC6_CTD_96, "CTD.96", HL7::optional, HL7::repetition_on);
    addObject<PRD>(PGL_PC7_PGL_PC6_PRD_97, "PRD.97", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_UAC_3);
  }
  PID* getPID_4(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PID_4);
  }
  GOL* getGOL_13(size_t index = 0) {
    return (GOL*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_GOL_13);
  }
  NTE* getNTE_14(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_NTE_14);
  }
  VAR* getVAR_15(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_VAR_15);
  }
  PRT* getPRT_16(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PRT_16);
  }
  ROL* getROL_17(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_ROL_17);
  }
  VAR* getVAR_18(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_VAR_18);
  }
  PRT* getPRT_19(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PRT_19);
  }
  ROL* getROL_20(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_ROL_20);
  }
  VAR* getVAR_21(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_VAR_21);
  }
  PTH* getPTH_22(size_t index = 0) {
    return (PTH*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PTH_22);
  }
  VAR* getVAR_23(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_VAR_23);
  }
  PRT* getPRT_24(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PRT_24);
  }
  ROL* getROL_25(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_ROL_25);
  }
  VAR* getVAR_26(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_VAR_26);
  }
  PTH* getPTH_27(size_t index = 0) {
    return (PTH*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PTH_27);
  }
  VAR* getVAR_28(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_VAR_28);
  }
  NTE* getNTE_29(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_NTE_29);
  }
  OBX* getOBX_30(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_OBX_30);
  }
  PRT* getPRT_31(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PRT_31);
  }
  PRT* getPRT_32(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PRT_32);
  }
  ROL* getROL_33(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_ROL_33);
  }
  VAR* getVAR_34(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_VAR_34);
  }
  PTH* getPTH_35(size_t index = 0) {
    return (PTH*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PTH_35);
  }
  VAR* getVAR_36(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_VAR_36);
  }
  NTE* getNTE_37(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_NTE_37);
  }
  OBX* getOBX_38(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_OBX_38);
  }
  PRT* getPRT_39(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PRT_39);
  }
  NTE* getNTE_42(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_NTE_42);
  }
  PRB* getPRB_43(size_t index = 0) {
    return (PRB*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PRB_43);
  }
  VAR* getVAR_44(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_VAR_44);
  }
  PRT* getPRT_45(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PRT_45);
  }
  ROL* getROL_46(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_ROL_46);
  }
  VAR* getVAR_47(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_VAR_47);
  }
  PRT* getPRT_48(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PRT_48);
  }
  ROL* getROL_49(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_ROL_49);
  }
  VAR* getVAR_50(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_VAR_50);
  }
  NTE* getNTE_51(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_NTE_51);
  }
  OBX* getOBX_52(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_OBX_52);
  }
  PRT* getPRT_53(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PRT_53);
  }
  PRT* getPRT_54(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PRT_54);
  }
  ROL* getROL_55(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_ROL_55);
  }
  VAR* getVAR_56(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_VAR_56);
  }
  PTH* getPTH_57(size_t index = 0) {
    return (PTH*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PTH_57);
  }
  VAR* getVAR_58(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_VAR_58);
  }
  NTE* getNTE_59(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_NTE_59);
  }
  OBX* getOBX_60(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_OBX_60);
  }
  PRT* getPRT_61(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PRT_61);
  }
  NTE* getNTE_64(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_NTE_64);
  }
  PRB* getPRB_65(size_t index = 0) {
    return (PRB*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PRB_65);
  }
  VAR* getVAR_66(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_VAR_66);
  }
  ORC* getORC_68(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_ORC_68);
  }
  PRT* getPRT_69(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PRT_69);
  }
  ROL* getROL_70(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_ROL_70);
  }
  VAR* getVAR_71(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_VAR_71);
  }
  PRT* getPRT_72(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PRT_72);
  }
  ROL* getROL_73(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_ROL_73);
  }
  VAR* getVAR_74(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_VAR_74);
  }
  NTE* getNTE_75(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_NTE_75);
  }
  OBX* getOBX_76(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_OBX_76);
  }
  PRT* getPRT_77(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PRT_77);
  }
  PRT* getPRT_78(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PRT_78);
  }
  ROL* getROL_79(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_ROL_79);
  }
  VAR* getVAR_80(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_VAR_80);
  }
  NTE* getNTE_81(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_NTE_81);
  }
  OBX* getOBX_82(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_OBX_82);
  }
  PRT* getPRT_83(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PRT_83);
  }
  NTE* getNTE_86(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_NTE_86);
  }
  VAR* getVAR_87(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_VAR_87);
  }
  OBR* getOBR_88(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_OBR_88);
  }
  OBR* getOBR_89(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_OBR_89);
  }
  NTE* getNTE_90(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_NTE_90);
  }
  OBX* getOBX_91(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_OBX_91);
  }
  PRT* getPRT_92(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PRT_92);
  }
  VAR* getVAR_93(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_VAR_93);
  }
  PV1* getPV1_94(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PV1_94);
  }
  PV2* getPV2_95(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PV2_95);
  }
  CTD* getCTD_96(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_CTD_96);
  }
  PRD* getPRD_97(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, PGL_PC7_PGL_PC6_PRD_97);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_4(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PID_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOL_13(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_GOL_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_14(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_NTE_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_15(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_VAR_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_16(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PRT_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_17(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_ROL_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_18(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_VAR_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_19(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PRT_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_20(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_ROL_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_21(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_VAR_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPTH_22(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PTH_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_23(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_VAR_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_24(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PRT_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_25(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_ROL_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_26(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_VAR_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPTH_27(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PTH_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_28(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_VAR_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_29(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_NTE_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_30(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_OBX_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_31(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PRT_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_32(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PRT_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_33(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_ROL_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_34(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_VAR_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPTH_35(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PTH_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_36(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_VAR_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_37(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_NTE_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_38(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_OBX_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_39(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PRT_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_42(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_NTE_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRB_43(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PRB_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_44(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_VAR_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_45(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PRT_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_46(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_ROL_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_47(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_VAR_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_48(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PRT_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_49(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_ROL_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_50(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_VAR_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_51(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_NTE_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_52(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_OBX_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_53(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PRT_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_54(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PRT_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_55(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_ROL_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_56(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_VAR_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPTH_57(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PTH_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_58(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_VAR_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_59(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_NTE_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_60(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_OBX_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_61(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PRT_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_64(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_NTE_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRB_65(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PRB_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_66(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_VAR_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_68(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_ORC_68) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_69(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PRT_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_70(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_ROL_70) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_71(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_VAR_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_72(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PRT_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_73(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_ROL_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_74(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_VAR_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_75(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_NTE_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_76(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_OBX_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_77(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PRT_77) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_78(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PRT_78) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_79(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_ROL_79) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_80(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_VAR_80) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_81(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_NTE_81) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_82(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_OBX_82) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_83(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PRT_83) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_86(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_NTE_86) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_87(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_VAR_87) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_88(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_OBR_88) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_89(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_OBR_89) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_90(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_NTE_90) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_91(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_OBX_91) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_92(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PRT_92) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_93(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_VAR_93) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_94(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PV1_94) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_95(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PV2_95) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_96(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_CTD_96) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_97(size_t index = 0) {
    try {
      return this->getObject(index, PGL_PC7_PGL_PC6_PRD_97) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PGL_PC7_PGL_PC6_ */
} /* namespace HL7_29 */
#endif /*  __PGL_PC7_PGL_PC6__29_H__ */
