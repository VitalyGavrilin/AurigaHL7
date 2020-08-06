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


#ifndef __OMI_O23_OMI_O23__29_H__
#define __OMI_O23_OMI_O23__29_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/ARV.h"
#include "../segment/CTD.h"
#include "../segment/DEV.h"
#include "../segment/DG1.h"
#include "../segment/GT1.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IN3.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/OH1.h"
#include "../segment/OH2.h"
#include "../segment/OH3.h"
#include "../segment/OH4.h"
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/REL.h"
#include "../segment/SFT.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct OMI_O23_OMI_O23_PATIENT; /* PATIENT */
struct OMI_O23_OMI_O23_ORDER; /* ORDER */
struct OMI_O23_OMI_O23_DEVICE; /* DEVICE */
struct OMI_O23_OMI_O23_OBSERVATION; /* OBSERVATION */
struct OMI_O23_OMI_O23_TIMING; /* TIMING */
struct OMI_O23_OMI_O23_OCCUPATIONAL_DATA_FOR_HEALTH; /* OCCUPATIONAL_DATA_FOR_HEALTH */
struct OMI_O23_OMI_O23_PATIENT_VISIT; /* PATIENT_VISIT */
struct OMI_O23_OMI_O23_INSURANCE; /* INSURANCE */

/*  */
struct OMI_O23_OMI_O23 : public HL7Message {
  OMI_O23_OMI_O23() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMI_O23_OMI_O23_MSH_1,
    OMI_O23_OMI_O23_ARV_2,
    OMI_O23_OMI_O23_SFT_3,
    OMI_O23_OMI_O23_UAC_4,
    OMI_O23_OMI_O23_NTE_5,
    OMI_O23_OMI_O23_DEV_9,
    OMI_O23_OMI_O23_OBX_10,
    OMI_O23_OMI_O23_CTD_13,
    OMI_O23_OMI_O23_DG1_14,
    OMI_O23_OMI_O23_NTE_16,
    OMI_O23_OMI_O23_OBR_17,
    OMI_O23_OMI_O23_ORC_18,
    OMI_O23_OMI_O23_PRT_19,
    OMI_O23_OMI_O23_PRT_20,
    OMI_O23_OMI_O23_REL_21,
    OMI_O23_OMI_O23_NTE_22,
    OMI_O23_OMI_O23_OBX_23,
    OMI_O23_OMI_O23_PRT_24,
    OMI_O23_OMI_O23_NTE_25,
    OMI_O23_OMI_O23_OBX_26,
    OMI_O23_OMI_O23_PRT_27,
    OMI_O23_OMI_O23_TQ1_28,
    OMI_O23_OMI_O23_TQ2_29,
    OMI_O23_OMI_O23_AL1_33,
    OMI_O23_OMI_O23_ARV_34,
    OMI_O23_OMI_O23_GT1_35,
    OMI_O23_OMI_O23_NTE_36,
    OMI_O23_OMI_O23_PD1_37,
    OMI_O23_OMI_O23_PID_38,
    OMI_O23_OMI_O23_PRT_39,
    OMI_O23_OMI_O23_OH1_40,
    OMI_O23_OMI_O23_OH2_41,
    OMI_O23_OMI_O23_OH3_42,
    OMI_O23_OMI_O23_OH4_43,
    OMI_O23_OMI_O23_OH1_44,
    OMI_O23_OMI_O23_OH2_45,
    OMI_O23_OMI_O23_OH3_46,
    OMI_O23_OMI_O23_OH4_47,
    OMI_O23_OMI_O23_PRT_48,
    OMI_O23_OMI_O23_PV1_49,
    OMI_O23_OMI_O23_PV2_50,
    OMI_O23_OMI_O23_OH1_51,
    OMI_O23_OMI_O23_OH2_52,
    OMI_O23_OMI_O23_OH3_53,
    OMI_O23_OMI_O23_OH4_54,
    OMI_O23_OMI_O23_PRT_55,
    OMI_O23_OMI_O23_PV1_56,
    OMI_O23_OMI_O23_PV2_57,
    OMI_O23_OMI_O23_IN1_58,
    OMI_O23_OMI_O23_IN2_59,
    OMI_O23_OMI_O23_IN3_60,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMI_O23_OMI_O23"; }
  OMI_O23_OMI_O23* create() const { return new OMI_O23_OMI_O23(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMI_O23_OMI_O23");
    addObject<MSH>(OMI_O23_OMI_O23_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OMI_O23_OMI_O23_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(OMI_O23_OMI_O23_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(OMI_O23_OMI_O23_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OMI_O23_OMI_O23_NTE_5, "NTE.5", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OMI_O23_OMI_O23_DEV_9, "DEV.9", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OMI_O23_OMI_O23_OBX_10, "OBX.10", HL7::optional, HL7::repetition_on);
    addObject<CTD>(OMI_O23_OMI_O23_CTD_13, "CTD.13", HL7::optional, HL7::repetition_off);
    addObject<DG1>(OMI_O23_OMI_O23_DG1_14, "DG1.14", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMI_O23_OMI_O23_NTE_16, "NTE.16", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OMI_O23_OMI_O23_OBR_17, "OBR.17", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(OMI_O23_OMI_O23_ORC_18, "ORC.18", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMI_O23_OMI_O23_PRT_19, "PRT.19", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMI_O23_OMI_O23_PRT_20, "PRT.20", HL7::optional, HL7::repetition_on);
    addObject<REL>(OMI_O23_OMI_O23_REL_21, "REL.21", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OMI_O23_OMI_O23_NTE_22, "NTE.22", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMI_O23_OMI_O23_OBX_23, "OBX.23", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMI_O23_OMI_O23_PRT_24, "PRT.24", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMI_O23_OMI_O23_NTE_25, "NTE.25", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMI_O23_OMI_O23_OBX_26, "OBX.26", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMI_O23_OMI_O23_PRT_27, "PRT.27", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OMI_O23_OMI_O23_TQ1_28, "TQ1.28", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OMI_O23_OMI_O23_TQ2_29, "TQ2.29", HL7::optional, HL7::repetition_on);
    addObject<AL1>(OMI_O23_OMI_O23_AL1_33, "AL1.33", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OMI_O23_OMI_O23_ARV_34, "ARV.34", HL7::optional, HL7::repetition_on);
    addObject<GT1>(OMI_O23_OMI_O23_GT1_35, "GT1.35", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OMI_O23_OMI_O23_NTE_36, "NTE.36", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OMI_O23_OMI_O23_PD1_37, "PD1.37", HL7::optional, HL7::repetition_off);
    addObject<PID>(OMI_O23_OMI_O23_PID_38, "PID.38", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMI_O23_OMI_O23_PRT_39, "PRT.39", HL7::optional, HL7::repetition_on);
    addObject<OH1>(OMI_O23_OMI_O23_OH1_40, "OH1.40", HL7::optional, HL7::repetition_on);
    addObject<OH2>(OMI_O23_OMI_O23_OH2_41, "OH2.41", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OMI_O23_OMI_O23_OH3_42, "OH3.42", HL7::optional, HL7::repetition_off);
    addObject<OH4>(OMI_O23_OMI_O23_OH4_43, "OH4.43", HL7::optional, HL7::repetition_on);
    addObject<OH1>(OMI_O23_OMI_O23_OH1_44, "OH1.44", HL7::optional, HL7::repetition_on);
    addObject<OH2>(OMI_O23_OMI_O23_OH2_45, "OH2.45", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OMI_O23_OMI_O23_OH3_46, "OH3.46", HL7::optional, HL7::repetition_off);
    addObject<OH4>(OMI_O23_OMI_O23_OH4_47, "OH4.47", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMI_O23_OMI_O23_PRT_48, "PRT.48", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OMI_O23_OMI_O23_PV1_49, "PV1.49", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OMI_O23_OMI_O23_PV2_50, "PV2.50", HL7::optional, HL7::repetition_off);
    addObject<OH1>(OMI_O23_OMI_O23_OH1_51, "OH1.51", HL7::optional, HL7::repetition_on);
    addObject<OH2>(OMI_O23_OMI_O23_OH2_52, "OH2.52", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OMI_O23_OMI_O23_OH3_53, "OH3.53", HL7::optional, HL7::repetition_off);
    addObject<OH4>(OMI_O23_OMI_O23_OH4_54, "OH4.54", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMI_O23_OMI_O23_PRT_55, "PRT.55", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OMI_O23_OMI_O23_PV1_56, "PV1.56", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OMI_O23_OMI_O23_PV2_57, "PV2.57", HL7::optional, HL7::repetition_off);
    addObject<IN1>(OMI_O23_OMI_O23_IN1_58, "IN1.58", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OMI_O23_OMI_O23_IN2_59, "IN2.59", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OMI_O23_OMI_O23_IN3_60, "IN3.60", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OMI_O23_OMI_O23_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMI_O23_OMI_O23_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, OMI_O23_OMI_O23_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, OMI_O23_OMI_O23_UAC_4);
  }
  NTE* getNTE_5(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMI_O23_OMI_O23_NTE_5);
  }
  DEV* getDEV_9(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OMI_O23_OMI_O23_DEV_9);
  }
  OBX* getOBX_10(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMI_O23_OMI_O23_OBX_10);
  }
  CTD* getCTD_13(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, OMI_O23_OMI_O23_CTD_13);
  }
  DG1* getDG1_14(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, OMI_O23_OMI_O23_DG1_14);
  }
  NTE* getNTE_16(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMI_O23_OMI_O23_NTE_16);
  }
  OBR* getOBR_17(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OMI_O23_OMI_O23_OBR_17);
  }
  ORC* getORC_18(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OMI_O23_OMI_O23_ORC_18);
  }
  PRT* getPRT_19(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMI_O23_OMI_O23_PRT_19);
  }
  PRT* getPRT_20(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMI_O23_OMI_O23_PRT_20);
  }
  REL* getREL_21(size_t index = 0) {
    return (REL*)this->getObjectSafe(index, OMI_O23_OMI_O23_REL_21);
  }
  NTE* getNTE_22(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMI_O23_OMI_O23_NTE_22);
  }
  OBX* getOBX_23(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMI_O23_OMI_O23_OBX_23);
  }
  PRT* getPRT_24(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMI_O23_OMI_O23_PRT_24);
  }
  NTE* getNTE_25(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMI_O23_OMI_O23_NTE_25);
  }
  OBX* getOBX_26(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMI_O23_OMI_O23_OBX_26);
  }
  PRT* getPRT_27(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMI_O23_OMI_O23_PRT_27);
  }
  TQ1* getTQ1_28(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMI_O23_OMI_O23_TQ1_28);
  }
  TQ2* getTQ2_29(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMI_O23_OMI_O23_TQ2_29);
  }
  AL1* getAL1_33(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OMI_O23_OMI_O23_AL1_33);
  }
  ARV* getARV_34(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMI_O23_OMI_O23_ARV_34);
  }
  GT1* getGT1_35(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, OMI_O23_OMI_O23_GT1_35);
  }
  NTE* getNTE_36(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMI_O23_OMI_O23_NTE_36);
  }
  PD1* getPD1_37(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMI_O23_OMI_O23_PD1_37);
  }
  PID* getPID_38(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMI_O23_OMI_O23_PID_38);
  }
  PRT* getPRT_39(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMI_O23_OMI_O23_PRT_39);
  }
  OH1* getOH1_40(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, OMI_O23_OMI_O23_OH1_40);
  }
  OH2* getOH2_41(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OMI_O23_OMI_O23_OH2_41);
  }
  OH3* getOH3_42(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OMI_O23_OMI_O23_OH3_42);
  }
  OH4* getOH4_43(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, OMI_O23_OMI_O23_OH4_43);
  }
  OH1* getOH1_44(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, OMI_O23_OMI_O23_OH1_44);
  }
  OH2* getOH2_45(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OMI_O23_OMI_O23_OH2_45);
  }
  OH3* getOH3_46(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OMI_O23_OMI_O23_OH3_46);
  }
  OH4* getOH4_47(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, OMI_O23_OMI_O23_OH4_47);
  }
  PRT* getPRT_48(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMI_O23_OMI_O23_PRT_48);
  }
  PV1* getPV1_49(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMI_O23_OMI_O23_PV1_49);
  }
  PV2* getPV2_50(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMI_O23_OMI_O23_PV2_50);
  }
  OH1* getOH1_51(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, OMI_O23_OMI_O23_OH1_51);
  }
  OH2* getOH2_52(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OMI_O23_OMI_O23_OH2_52);
  }
  OH3* getOH3_53(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OMI_O23_OMI_O23_OH3_53);
  }
  OH4* getOH4_54(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, OMI_O23_OMI_O23_OH4_54);
  }
  PRT* getPRT_55(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMI_O23_OMI_O23_PRT_55);
  }
  PV1* getPV1_56(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMI_O23_OMI_O23_PV1_56);
  }
  PV2* getPV2_57(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMI_O23_OMI_O23_PV2_57);
  }
  IN1* getIN1_58(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OMI_O23_OMI_O23_IN1_58);
  }
  IN2* getIN2_59(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OMI_O23_OMI_O23_IN2_59);
  }
  IN3* getIN3_60(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OMI_O23_OMI_O23_IN3_60);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_5(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_NTE_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_9(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_DEV_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_10(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_OBX_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_13(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_CTD_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_14(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_DG1_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_16(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_NTE_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_17(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_OBR_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_18(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_ORC_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_19(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_PRT_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_20(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_PRT_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isREL_21(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_REL_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_22(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_NTE_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_23(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_OBX_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_24(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_PRT_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_25(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_NTE_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_26(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_OBX_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_27(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_PRT_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_28(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_TQ1_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_29(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_TQ2_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_33(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_AL1_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_34(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_ARV_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_35(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_GT1_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_36(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_NTE_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_37(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_PD1_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_38(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_PID_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_39(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_PRT_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_40(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_OH1_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_41(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_OH2_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_42(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_OH3_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_43(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_OH4_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_44(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_OH1_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_45(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_OH2_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_46(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_OH3_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_47(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_OH4_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_48(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_PRT_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_49(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_PV1_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_50(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_PV2_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_51(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_OH1_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_52(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_OH2_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_53(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_OH3_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_54(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_OH4_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_55(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_PRT_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_56(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_PV1_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_57(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_PV2_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_58(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_IN1_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_59(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_IN2_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_60(size_t index = 0) {
    try {
      return this->getObject(index, OMI_O23_OMI_O23_IN3_60) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMI_O23_OMI_O23_ */
} /* namespace HL7_29 */
#endif /*  __OMI_O23_OMI_O23__29_H__ */
