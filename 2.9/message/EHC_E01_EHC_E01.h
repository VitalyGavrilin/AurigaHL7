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


#ifndef __EHC_E01_EHC_E01__29_H__
#define __EHC_E01_EHC_E01__29_H__

#include "../../common/Util.h"
#include "../segment/ACC.h"
#include "../segment/ADJ.h"
#include "../segment/AUT.h"
#include "../segment/CTD.h"
#include "../segment/DG1.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IPR.h"
#include "../segment/IVC.h"
#include "../segment/LOC.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBX.h"
#include "../segment/PID.h"
#include "../segment/PR1.h"
#include "../segment/PRT.h"
#include "../segment/PSG.h"
#include "../segment/PSL.h"
#include "../segment/PSS.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/PYE.h"
#include "../segment/ROL.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct EHC_E01_EHC_E01_INVOICE_INFORMATION_SUBMIT; /* INVOICE_INFORMATION_SUBMIT */
struct EHC_E01_EHC_E01_PRODUCT_SERVICE_SECTION; /* PRODUCT_SERVICE_SECTION */
struct EHC_E01_EHC_E01_PRODUCT_SERVICE_GROUP; /* PRODUCT_SERVICE_GROUP */
struct EHC_E01_EHC_E01_PATIENT_INFO; /* PATIENT_INFO */
struct EHC_E01_EHC_E01_PRODUCT_SERVICE_LINE_ITEM; /* PRODUCT_SERVICE_LINE_ITEM */
struct EHC_E01_EHC_E01_PROCEDURE; /* PROCEDURE */
struct EHC_E01_EHC_E01_INSURANCE; /* INSURANCE */
struct EHC_E01_EHC_E01_DIAGNOSIS; /* DIAGNOSIS */
struct EHC_E01_EHC_E01_INSURANCE; /* INSURANCE */
struct EHC_E01_EHC_E01_DIAGNOSIS; /* DIAGNOSIS */
struct EHC_E01_EHC_E01_INSURANCE; /* INSURANCE */
struct EHC_E01_EHC_E01_DIAGNOSIS; /* DIAGNOSIS */

/*  */
struct EHC_E01_EHC_E01 : public HL7Message {
  EHC_E01_EHC_E01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EHC_E01_EHC_E01_MSH_1,
    EHC_E01_EHC_E01_SFT_2,
    EHC_E01_EHC_E01_UAC_3,
    EHC_E01_EHC_E01_AUT_6,
    EHC_E01_EHC_E01_CTD_7,
    EHC_E01_EHC_E01_IVC_8,
    EHC_E01_EHC_E01_LOC_9,
    EHC_E01_EHC_E01_PRT_10,
    EHC_E01_EHC_E01_PYE_11,
    EHC_E01_EHC_E01_ROL_12,
    EHC_E01_EHC_E01_PSS_14,
    EHC_E01_EHC_E01_IPR_18,
    EHC_E01_EHC_E01_LOC_19,
    EHC_E01_EHC_E01_PRT_20,
    EHC_E01_EHC_E01_PSG_21,
    EHC_E01_EHC_E01_ROL_22,
    EHC_E01_EHC_E01_ACC_25,
    EHC_E01_EHC_E01_OBX_26,
    EHC_E01_EHC_E01_PID_27,
    EHC_E01_EHC_E01_PRT_28,
    EHC_E01_EHC_E01_PV1_29,
    EHC_E01_EHC_E01_PV2_30,
    EHC_E01_EHC_E01_IN1_31,
    EHC_E01_EHC_E01_IN2_32,
    EHC_E01_EHC_E01_IN1_33,
    EHC_E01_EHC_E01_IN2_34,
    EHC_E01_EHC_E01_DG1_35,
    EHC_E01_EHC_E01_NTE_36,
    EHC_E01_EHC_E01_ACC_39,
    EHC_E01_EHC_E01_OBX_40,
    EHC_E01_EHC_E01_PID_41,
    EHC_E01_EHC_E01_PRT_42,
    EHC_E01_EHC_E01_PV1_43,
    EHC_E01_EHC_E01_PV2_44,
    EHC_E01_EHC_E01_ADJ_45,
    EHC_E01_EHC_E01_AUT_46,
    EHC_E01_EHC_E01_LOC_47,
    EHC_E01_EHC_E01_NTE_48,
    EHC_E01_EHC_E01_PRT_49,
    EHC_E01_EHC_E01_PSL_50,
    EHC_E01_EHC_E01_ROL_51,
    EHC_E01_EHC_E01_IN1_52,
    EHC_E01_EHC_E01_IN2_53,
    EHC_E01_EHC_E01_IN1_54,
    EHC_E01_EHC_E01_IN2_55,
    EHC_E01_EHC_E01_DG1_56,
    EHC_E01_EHC_E01_NTE_57,
    EHC_E01_EHC_E01_ACC_60,
    EHC_E01_EHC_E01_OBX_61,
    EHC_E01_EHC_E01_PID_62,
    EHC_E01_EHC_E01_PRT_63,
    EHC_E01_EHC_E01_PV1_64,
    EHC_E01_EHC_E01_PV2_65,
    EHC_E01_EHC_E01_ADJ_66,
    EHC_E01_EHC_E01_AUT_67,
    EHC_E01_EHC_E01_LOC_68,
    EHC_E01_EHC_E01_NTE_69,
    EHC_E01_EHC_E01_PRT_70,
    EHC_E01_EHC_E01_PSL_71,
    EHC_E01_EHC_E01_ROL_72,
    EHC_E01_EHC_E01_NTE_73,
    EHC_E01_EHC_E01_PR1_74,
    EHC_E01_EHC_E01_PRT_75,
    EHC_E01_EHC_E01_ROL_76,
    EHC_E01_EHC_E01_IN1_77,
    EHC_E01_EHC_E01_IN2_78,
    EHC_E01_EHC_E01_IN1_79,
    EHC_E01_EHC_E01_IN2_80,
    EHC_E01_EHC_E01_DG1_81,
    EHC_E01_EHC_E01_NTE_82,
    FIELD_ID_MAX
  };

  const char* className() const { return "EHC_E01_EHC_E01"; }
  EHC_E01_EHC_E01* create() const { return new EHC_E01_EHC_E01(); }

 private:
  /* Initialize object */
  void init() {
    setName("EHC_E01_EHC_E01");
    addObject<MSH>(EHC_E01_EHC_E01_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(EHC_E01_EHC_E01_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(EHC_E01_EHC_E01_UAC_3, "UAC.3", HL7::optional, HL7::repetition_on);
    addObject<AUT>(EHC_E01_EHC_E01_AUT_6, "AUT.6", HL7::optional, HL7::repetition_off);
    addObject<CTD>(EHC_E01_EHC_E01_CTD_7, "CTD.7", HL7::optional, HL7::repetition_on);
    addObject<IVC>(EHC_E01_EHC_E01_IVC_8, "IVC.8", HL7::initialized, HL7::repetition_off);
    addObject<LOC>(EHC_E01_EHC_E01_LOC_9, "LOC.9", HL7::optional, HL7::repetition_on);
    addObject<PRT>(EHC_E01_EHC_E01_PRT_10, "PRT.10", HL7::optional, HL7::repetition_on);
    addObject<PYE>(EHC_E01_EHC_E01_PYE_11, "PYE.11", HL7::optional, HL7::repetition_off);
    addObject<ROL>(EHC_E01_EHC_E01_ROL_12, "ROL.12", HL7::optional, HL7::repetition_on);
    addObject<PSS>(EHC_E01_EHC_E01_PSS_14, "PSS.14", HL7::initialized, HL7::repetition_off);
    addObject<IPR>(EHC_E01_EHC_E01_IPR_18, "IPR.18", HL7::optional, HL7::repetition_on);
    addObject<LOC>(EHC_E01_EHC_E01_LOC_19, "LOC.19", HL7::optional, HL7::repetition_on);
    addObject<PRT>(EHC_E01_EHC_E01_PRT_20, "PRT.20", HL7::optional, HL7::repetition_on);
    addObject<PSG>(EHC_E01_EHC_E01_PSG_21, "PSG.21", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(EHC_E01_EHC_E01_ROL_22, "ROL.22", HL7::optional, HL7::repetition_on);
    addObject<ACC>(EHC_E01_EHC_E01_ACC_25, "ACC.25", HL7::optional, HL7::repetition_on);
    addObject<OBX>(EHC_E01_EHC_E01_OBX_26, "OBX.26", HL7::optional, HL7::repetition_on);
    addObject<PID>(EHC_E01_EHC_E01_PID_27, "PID.27", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(EHC_E01_EHC_E01_PRT_28, "PRT.28", HL7::optional, HL7::repetition_on);
    addObject<PV1>(EHC_E01_EHC_E01_PV1_29, "PV1.29", HL7::optional, HL7::repetition_off);
    addObject<PV2>(EHC_E01_EHC_E01_PV2_30, "PV2.30", HL7::optional, HL7::repetition_off);
    addObject<IN1>(EHC_E01_EHC_E01_IN1_31, "IN1.31", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(EHC_E01_EHC_E01_IN2_32, "IN2.32", HL7::optional, HL7::repetition_off);
    addObject<IN1>(EHC_E01_EHC_E01_IN1_33, "IN1.33", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(EHC_E01_EHC_E01_IN2_34, "IN2.34", HL7::optional, HL7::repetition_off);
    addObject<DG1>(EHC_E01_EHC_E01_DG1_35, "DG1.35", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(EHC_E01_EHC_E01_NTE_36, "NTE.36", HL7::optional, HL7::repetition_on);
    addObject<ACC>(EHC_E01_EHC_E01_ACC_39, "ACC.39", HL7::optional, HL7::repetition_on);
    addObject<OBX>(EHC_E01_EHC_E01_OBX_40, "OBX.40", HL7::optional, HL7::repetition_on);
    addObject<PID>(EHC_E01_EHC_E01_PID_41, "PID.41", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(EHC_E01_EHC_E01_PRT_42, "PRT.42", HL7::optional, HL7::repetition_on);
    addObject<PV1>(EHC_E01_EHC_E01_PV1_43, "PV1.43", HL7::optional, HL7::repetition_off);
    addObject<PV2>(EHC_E01_EHC_E01_PV2_44, "PV2.44", HL7::optional, HL7::repetition_off);
    addObject<ADJ>(EHC_E01_EHC_E01_ADJ_45, "ADJ.45", HL7::optional, HL7::repetition_on);
    addObject<AUT>(EHC_E01_EHC_E01_AUT_46, "AUT.46", HL7::optional, HL7::repetition_off);
    addObject<LOC>(EHC_E01_EHC_E01_LOC_47, "LOC.47", HL7::optional, HL7::repetition_on);
    addObject<NTE>(EHC_E01_EHC_E01_NTE_48, "NTE.48", HL7::optional, HL7::repetition_on);
    addObject<PRT>(EHC_E01_EHC_E01_PRT_49, "PRT.49", HL7::optional, HL7::repetition_on);
    addObject<PSL>(EHC_E01_EHC_E01_PSL_50, "PSL.50", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(EHC_E01_EHC_E01_ROL_51, "ROL.51", HL7::optional, HL7::repetition_on);
    addObject<IN1>(EHC_E01_EHC_E01_IN1_52, "IN1.52", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(EHC_E01_EHC_E01_IN2_53, "IN2.53", HL7::optional, HL7::repetition_off);
    addObject<IN1>(EHC_E01_EHC_E01_IN1_54, "IN1.54", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(EHC_E01_EHC_E01_IN2_55, "IN2.55", HL7::optional, HL7::repetition_off);
    addObject<DG1>(EHC_E01_EHC_E01_DG1_56, "DG1.56", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(EHC_E01_EHC_E01_NTE_57, "NTE.57", HL7::optional, HL7::repetition_on);
    addObject<ACC>(EHC_E01_EHC_E01_ACC_60, "ACC.60", HL7::optional, HL7::repetition_on);
    addObject<OBX>(EHC_E01_EHC_E01_OBX_61, "OBX.61", HL7::optional, HL7::repetition_on);
    addObject<PID>(EHC_E01_EHC_E01_PID_62, "PID.62", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(EHC_E01_EHC_E01_PRT_63, "PRT.63", HL7::optional, HL7::repetition_on);
    addObject<PV1>(EHC_E01_EHC_E01_PV1_64, "PV1.64", HL7::optional, HL7::repetition_off);
    addObject<PV2>(EHC_E01_EHC_E01_PV2_65, "PV2.65", HL7::optional, HL7::repetition_off);
    addObject<ADJ>(EHC_E01_EHC_E01_ADJ_66, "ADJ.66", HL7::optional, HL7::repetition_on);
    addObject<AUT>(EHC_E01_EHC_E01_AUT_67, "AUT.67", HL7::optional, HL7::repetition_off);
    addObject<LOC>(EHC_E01_EHC_E01_LOC_68, "LOC.68", HL7::optional, HL7::repetition_on);
    addObject<NTE>(EHC_E01_EHC_E01_NTE_69, "NTE.69", HL7::optional, HL7::repetition_on);
    addObject<PRT>(EHC_E01_EHC_E01_PRT_70, "PRT.70", HL7::optional, HL7::repetition_on);
    addObject<PSL>(EHC_E01_EHC_E01_PSL_71, "PSL.71", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(EHC_E01_EHC_E01_ROL_72, "ROL.72", HL7::optional, HL7::repetition_on);
    addObject<NTE>(EHC_E01_EHC_E01_NTE_73, "NTE.73", HL7::optional, HL7::repetition_on);
    addObject<PR1>(EHC_E01_EHC_E01_PR1_74, "PR1.74", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(EHC_E01_EHC_E01_PRT_75, "PRT.75", HL7::optional, HL7::repetition_on);
    addObject<ROL>(EHC_E01_EHC_E01_ROL_76, "ROL.76", HL7::optional, HL7::repetition_on);
    addObject<IN1>(EHC_E01_EHC_E01_IN1_77, "IN1.77", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(EHC_E01_EHC_E01_IN2_78, "IN2.78", HL7::optional, HL7::repetition_off);
    addObject<IN1>(EHC_E01_EHC_E01_IN1_79, "IN1.79", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(EHC_E01_EHC_E01_IN2_80, "IN2.80", HL7::optional, HL7::repetition_off);
    addObject<DG1>(EHC_E01_EHC_E01_DG1_81, "DG1.81", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(EHC_E01_EHC_E01_NTE_82, "NTE.82", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, EHC_E01_EHC_E01_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, EHC_E01_EHC_E01_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, EHC_E01_EHC_E01_UAC_3);
  }
  AUT* getAUT_6(size_t index = 0) {
    return (AUT*)this->getObjectSafe(index, EHC_E01_EHC_E01_AUT_6);
  }
  CTD* getCTD_7(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, EHC_E01_EHC_E01_CTD_7);
  }
  IVC* getIVC_8(size_t index = 0) {
    return (IVC*)this->getObjectSafe(index, EHC_E01_EHC_E01_IVC_8);
  }
  LOC* getLOC_9(size_t index = 0) {
    return (LOC*)this->getObjectSafe(index, EHC_E01_EHC_E01_LOC_9);
  }
  PRT* getPRT_10(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, EHC_E01_EHC_E01_PRT_10);
  }
  PYE* getPYE_11(size_t index = 0) {
    return (PYE*)this->getObjectSafe(index, EHC_E01_EHC_E01_PYE_11);
  }
  ROL* getROL_12(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, EHC_E01_EHC_E01_ROL_12);
  }
  PSS* getPSS_14(size_t index = 0) {
    return (PSS*)this->getObjectSafe(index, EHC_E01_EHC_E01_PSS_14);
  }
  IPR* getIPR_18(size_t index = 0) {
    return (IPR*)this->getObjectSafe(index, EHC_E01_EHC_E01_IPR_18);
  }
  LOC* getLOC_19(size_t index = 0) {
    return (LOC*)this->getObjectSafe(index, EHC_E01_EHC_E01_LOC_19);
  }
  PRT* getPRT_20(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, EHC_E01_EHC_E01_PRT_20);
  }
  PSG* getPSG_21(size_t index = 0) {
    return (PSG*)this->getObjectSafe(index, EHC_E01_EHC_E01_PSG_21);
  }
  ROL* getROL_22(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, EHC_E01_EHC_E01_ROL_22);
  }
  ACC* getACC_25(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, EHC_E01_EHC_E01_ACC_25);
  }
  OBX* getOBX_26(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, EHC_E01_EHC_E01_OBX_26);
  }
  PID* getPID_27(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, EHC_E01_EHC_E01_PID_27);
  }
  PRT* getPRT_28(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, EHC_E01_EHC_E01_PRT_28);
  }
  PV1* getPV1_29(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, EHC_E01_EHC_E01_PV1_29);
  }
  PV2* getPV2_30(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, EHC_E01_EHC_E01_PV2_30);
  }
  IN1* getIN1_31(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, EHC_E01_EHC_E01_IN1_31);
  }
  IN2* getIN2_32(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, EHC_E01_EHC_E01_IN2_32);
  }
  IN1* getIN1_33(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, EHC_E01_EHC_E01_IN1_33);
  }
  IN2* getIN2_34(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, EHC_E01_EHC_E01_IN2_34);
  }
  DG1* getDG1_35(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, EHC_E01_EHC_E01_DG1_35);
  }
  NTE* getNTE_36(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, EHC_E01_EHC_E01_NTE_36);
  }
  ACC* getACC_39(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, EHC_E01_EHC_E01_ACC_39);
  }
  OBX* getOBX_40(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, EHC_E01_EHC_E01_OBX_40);
  }
  PID* getPID_41(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, EHC_E01_EHC_E01_PID_41);
  }
  PRT* getPRT_42(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, EHC_E01_EHC_E01_PRT_42);
  }
  PV1* getPV1_43(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, EHC_E01_EHC_E01_PV1_43);
  }
  PV2* getPV2_44(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, EHC_E01_EHC_E01_PV2_44);
  }
  ADJ* getADJ_45(size_t index = 0) {
    return (ADJ*)this->getObjectSafe(index, EHC_E01_EHC_E01_ADJ_45);
  }
  AUT* getAUT_46(size_t index = 0) {
    return (AUT*)this->getObjectSafe(index, EHC_E01_EHC_E01_AUT_46);
  }
  LOC* getLOC_47(size_t index = 0) {
    return (LOC*)this->getObjectSafe(index, EHC_E01_EHC_E01_LOC_47);
  }
  NTE* getNTE_48(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, EHC_E01_EHC_E01_NTE_48);
  }
  PRT* getPRT_49(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, EHC_E01_EHC_E01_PRT_49);
  }
  PSL* getPSL_50(size_t index = 0) {
    return (PSL*)this->getObjectSafe(index, EHC_E01_EHC_E01_PSL_50);
  }
  ROL* getROL_51(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, EHC_E01_EHC_E01_ROL_51);
  }
  IN1* getIN1_52(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, EHC_E01_EHC_E01_IN1_52);
  }
  IN2* getIN2_53(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, EHC_E01_EHC_E01_IN2_53);
  }
  IN1* getIN1_54(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, EHC_E01_EHC_E01_IN1_54);
  }
  IN2* getIN2_55(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, EHC_E01_EHC_E01_IN2_55);
  }
  DG1* getDG1_56(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, EHC_E01_EHC_E01_DG1_56);
  }
  NTE* getNTE_57(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, EHC_E01_EHC_E01_NTE_57);
  }
  ACC* getACC_60(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, EHC_E01_EHC_E01_ACC_60);
  }
  OBX* getOBX_61(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, EHC_E01_EHC_E01_OBX_61);
  }
  PID* getPID_62(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, EHC_E01_EHC_E01_PID_62);
  }
  PRT* getPRT_63(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, EHC_E01_EHC_E01_PRT_63);
  }
  PV1* getPV1_64(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, EHC_E01_EHC_E01_PV1_64);
  }
  PV2* getPV2_65(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, EHC_E01_EHC_E01_PV2_65);
  }
  ADJ* getADJ_66(size_t index = 0) {
    return (ADJ*)this->getObjectSafe(index, EHC_E01_EHC_E01_ADJ_66);
  }
  AUT* getAUT_67(size_t index = 0) {
    return (AUT*)this->getObjectSafe(index, EHC_E01_EHC_E01_AUT_67);
  }
  LOC* getLOC_68(size_t index = 0) {
    return (LOC*)this->getObjectSafe(index, EHC_E01_EHC_E01_LOC_68);
  }
  NTE* getNTE_69(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, EHC_E01_EHC_E01_NTE_69);
  }
  PRT* getPRT_70(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, EHC_E01_EHC_E01_PRT_70);
  }
  PSL* getPSL_71(size_t index = 0) {
    return (PSL*)this->getObjectSafe(index, EHC_E01_EHC_E01_PSL_71);
  }
  ROL* getROL_72(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, EHC_E01_EHC_E01_ROL_72);
  }
  NTE* getNTE_73(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, EHC_E01_EHC_E01_NTE_73);
  }
  PR1* getPR1_74(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, EHC_E01_EHC_E01_PR1_74);
  }
  PRT* getPRT_75(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, EHC_E01_EHC_E01_PRT_75);
  }
  ROL* getROL_76(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, EHC_E01_EHC_E01_ROL_76);
  }
  IN1* getIN1_77(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, EHC_E01_EHC_E01_IN1_77);
  }
  IN2* getIN2_78(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, EHC_E01_EHC_E01_IN2_78);
  }
  IN1* getIN1_79(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, EHC_E01_EHC_E01_IN1_79);
  }
  IN2* getIN2_80(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, EHC_E01_EHC_E01_IN2_80);
  }
  DG1* getDG1_81(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, EHC_E01_EHC_E01_DG1_81);
  }
  NTE* getNTE_82(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, EHC_E01_EHC_E01_NTE_82);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAUT_6(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_AUT_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_7(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_CTD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIVC_8(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_IVC_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isLOC_9(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_LOC_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_10(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_PRT_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPYE_11(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_PYE_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_12(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_ROL_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSS_14(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_PSS_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIPR_18(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_IPR_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isLOC_19(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_LOC_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_20(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_PRT_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSG_21(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_PSG_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_22(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_ROL_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_25(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_ACC_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_26(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_OBX_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_27(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_PID_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_28(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_PRT_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_29(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_PV1_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_30(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_PV2_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_31(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_IN1_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_32(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_IN2_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_33(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_IN1_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_34(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_IN2_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_35(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_DG1_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_36(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_NTE_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_39(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_ACC_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_40(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_OBX_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_41(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_PID_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_42(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_PRT_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_43(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_PV1_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_44(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_PV2_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isADJ_45(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_ADJ_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAUT_46(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_AUT_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isLOC_47(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_LOC_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_48(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_NTE_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_49(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_PRT_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSL_50(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_PSL_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_51(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_ROL_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_52(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_IN1_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_53(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_IN2_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_54(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_IN1_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_55(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_IN2_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_56(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_DG1_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_57(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_NTE_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_60(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_ACC_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_61(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_OBX_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_62(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_PID_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_63(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_PRT_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_64(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_PV1_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_65(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_PV2_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isADJ_66(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_ADJ_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAUT_67(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_AUT_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isLOC_68(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_LOC_68) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_69(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_NTE_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_70(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_PRT_70) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSL_71(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_PSL_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_72(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_ROL_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_73(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_NTE_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_74(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_PR1_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_75(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_PRT_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_76(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_ROL_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_77(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_IN1_77) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_78(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_IN2_78) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_79(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_IN1_79) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_80(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_IN2_80) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_81(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_DG1_81) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_82(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E01_EHC_E01_NTE_82) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EHC_E01_EHC_E01_ */
} /* namespace HL7_29 */
#endif /*  __EHC_E01_EHC_E01__29_H__ */
