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


#ifndef __OUL_R23_OUL_R23__29_H__
#define __OUL_R23_OUL_R23__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/CTI.h"
#include "../segment/DEV.h"
#include "../segment/DSC.h"
#include "../segment/INV.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
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
#include "../segment/SAC.h"
#include "../segment/SFT.h"
#include "../segment/SID.h"
#include "../segment/SPM.h"
#include "../segment/TCD.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/TXA.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct OUL_R23_OUL_R23_PATIENT; /* PATIENT */
struct OUL_R23_OUL_R23_SPECIMEN; /* SPECIMEN */
struct OUL_R23_OUL_R23_DEVICE; /* DEVICE */
struct OUL_R23_OUL_R23_PATIENT_OBSERVATION; /* PATIENT_OBSERVATION */
struct OUL_R23_OUL_R23_VISIT; /* VISIT */
struct OUL_R23_OUL_R23_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct OUL_R23_OUL_R23_CONTAINER; /* CONTAINER */
struct OUL_R23_OUL_R23_ORDER; /* ORDER */
struct OUL_R23_OUL_R23_COMMON_ORDER; /* COMMON_ORDER */
struct OUL_R23_OUL_R23_TIMING_QTY; /* TIMING_QTY */
struct OUL_R23_OUL_R23_RESULT; /* RESULT */
struct OUL_R23_OUL_R23_ORDER_DOCUMENT; /* ORDER_DOCUMENT */
struct OUL_R23_OUL_R23_ORDER_DOCUMENT; /* ORDER_DOCUMENT */
struct OUL_R23_OUL_R23_ORDER_DOCUMENT; /* ORDER_DOCUMENT */

/*  */
struct OUL_R23_OUL_R23 : public HL7Message {
  OUL_R23_OUL_R23() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OUL_R23_OUL_R23_MSH_1,
    OUL_R23_OUL_R23_ARV_2,
    OUL_R23_OUL_R23_SFT_3,
    OUL_R23_OUL_R23_UAC_4,
    OUL_R23_OUL_R23_NTE_5,
    OUL_R23_OUL_R23_NK1_7,
    OUL_R23_OUL_R23_DEV_11,
    OUL_R23_OUL_R23_DSC_12,
    OUL_R23_OUL_R23_OBX_13,
    OUL_R23_OUL_R23_ARV_16,
    OUL_R23_OUL_R23_NTE_17,
    OUL_R23_OUL_R23_OH1_18,
    OUL_R23_OUL_R23_OH2_19,
    OUL_R23_OUL_R23_OH3_20,
    OUL_R23_OUL_R23_OH4_21,
    OUL_R23_OUL_R23_PD1_22,
    OUL_R23_OUL_R23_PID_23,
    OUL_R23_OUL_R23_PRT_24,
    OUL_R23_OUL_R23_OBX_25,
    OUL_R23_OUL_R23_PRT_26,
    OUL_R23_OUL_R23_OBX_27,
    OUL_R23_OUL_R23_PRT_28,
    OUL_R23_OUL_R23_PRT_29,
    OUL_R23_OUL_R23_PV1_30,
    OUL_R23_OUL_R23_PV2_31,
    OUL_R23_OUL_R23_SPM_34,
    OUL_R23_OUL_R23_OBX_35,
    OUL_R23_OUL_R23_PRT_36,
    OUL_R23_OUL_R23_OBX_37,
    OUL_R23_OUL_R23_PRT_38,
    OUL_R23_OUL_R23_INV_40,
    OUL_R23_OUL_R23_SAC_41,
    OUL_R23_OUL_R23_CTI_45,
    OUL_R23_OUL_R23_NTE_46,
    OUL_R23_OUL_R23_OBR_47,
    OUL_R23_OUL_R23_PRT_48,
    OUL_R23_OUL_R23_PRT_49,
    OUL_R23_OUL_R23_ORC_51,
    OUL_R23_OUL_R23_PRT_52,
    OUL_R23_OUL_R23_OBX_53,
    OUL_R23_OUL_R23_PRT_54,
    OUL_R23_OUL_R23_TXA_55,
    OUL_R23_OUL_R23_ORC_57,
    OUL_R23_OUL_R23_PRT_58,
    OUL_R23_OUL_R23_TQ1_59,
    OUL_R23_OUL_R23_TQ2_60,
    OUL_R23_OUL_R23_OBX_61,
    OUL_R23_OUL_R23_PRT_62,
    OUL_R23_OUL_R23_TXA_63,
    OUL_R23_OUL_R23_ORC_65,
    OUL_R23_OUL_R23_PRT_66,
    OUL_R23_OUL_R23_TQ1_67,
    OUL_R23_OUL_R23_TQ2_68,
    OUL_R23_OUL_R23_INV_69,
    OUL_R23_OUL_R23_NTE_70,
    OUL_R23_OUL_R23_OBX_71,
    OUL_R23_OUL_R23_PRT_72,
    OUL_R23_OUL_R23_SID_73,
    OUL_R23_OUL_R23_TCD_74,
    OUL_R23_OUL_R23_OBX_75,
    OUL_R23_OUL_R23_PRT_76,
    OUL_R23_OUL_R23_TXA_77,
    FIELD_ID_MAX
  };

  const char* className() const { return "OUL_R23_OUL_R23"; }
  OUL_R23_OUL_R23* create() const { return new OUL_R23_OUL_R23(); }

 private:
  /* Initialize object */
  void init() {
    setName("OUL_R23_OUL_R23");
    addObject<MSH>(OUL_R23_OUL_R23_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OUL_R23_OUL_R23_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(OUL_R23_OUL_R23_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(OUL_R23_OUL_R23_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OUL_R23_OUL_R23_NTE_5, "NTE.5", HL7::optional, HL7::repetition_off);
    addObject<NK1>(OUL_R23_OUL_R23_NK1_7, "NK1.7", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OUL_R23_OUL_R23_DEV_11, "DEV.11", HL7::initialized, HL7::repetition_off);
    addObject<DSC>(OUL_R23_OUL_R23_DSC_12, "DSC.12", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OUL_R23_OUL_R23_OBX_13, "OBX.13", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OUL_R23_OUL_R23_ARV_16, "ARV.16", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OUL_R23_OUL_R23_NTE_17, "NTE.17", HL7::optional, HL7::repetition_on);
    addObject<OH1>(OUL_R23_OUL_R23_OH1_18, "OH1.18", HL7::optional, HL7::repetition_on);
    addObject<OH2>(OUL_R23_OUL_R23_OH2_19, "OH2.19", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OUL_R23_OUL_R23_OH3_20, "OH3.20", HL7::optional, HL7::repetition_off);
    addObject<OH4>(OUL_R23_OUL_R23_OH4_21, "OH4.21", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OUL_R23_OUL_R23_PD1_22, "PD1.22", HL7::optional, HL7::repetition_off);
    addObject<PID>(OUL_R23_OUL_R23_PID_23, "PID.23", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R23_OUL_R23_PRT_24, "PRT.24", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OUL_R23_OUL_R23_OBX_25, "OBX.25", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R23_OUL_R23_PRT_26, "PRT.26", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OUL_R23_OUL_R23_OBX_27, "OBX.27", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R23_OUL_R23_PRT_28, "PRT.28", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OUL_R23_OUL_R23_PRT_29, "PRT.29", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OUL_R23_OUL_R23_PV1_30, "PV1.30", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OUL_R23_OUL_R23_PV2_31, "PV2.31", HL7::optional, HL7::repetition_off);
    addObject<SPM>(OUL_R23_OUL_R23_SPM_34, "SPM.34", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OUL_R23_OUL_R23_OBX_35, "OBX.35", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R23_OUL_R23_PRT_36, "PRT.36", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OUL_R23_OUL_R23_OBX_37, "OBX.37", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R23_OUL_R23_PRT_38, "PRT.38", HL7::optional, HL7::repetition_on);
    addObject<INV>(OUL_R23_OUL_R23_INV_40, "INV.40", HL7::optional, HL7::repetition_off);
    addObject<SAC>(OUL_R23_OUL_R23_SAC_41, "SAC.41", HL7::initialized, HL7::repetition_off);
    addObject<CTI>(OUL_R23_OUL_R23_CTI_45, "CTI.45", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OUL_R23_OUL_R23_NTE_46, "NTE.46", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OUL_R23_OUL_R23_OBR_47, "OBR.47", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R23_OUL_R23_PRT_48, "PRT.48", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OUL_R23_OUL_R23_PRT_49, "PRT.49", HL7::optional, HL7::repetition_on);
    addObject<ORC>(OUL_R23_OUL_R23_ORC_51, "ORC.51", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R23_OUL_R23_PRT_52, "PRT.52", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OUL_R23_OUL_R23_OBX_53, "OBX.53", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R23_OUL_R23_PRT_54, "PRT.54", HL7::optional, HL7::repetition_on);
    addObject<TXA>(OUL_R23_OUL_R23_TXA_55, "TXA.55", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(OUL_R23_OUL_R23_ORC_57, "ORC.57", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R23_OUL_R23_PRT_58, "PRT.58", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OUL_R23_OUL_R23_TQ1_59, "TQ1.59", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OUL_R23_OUL_R23_TQ2_60, "TQ2.60", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OUL_R23_OUL_R23_OBX_61, "OBX.61", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R23_OUL_R23_PRT_62, "PRT.62", HL7::optional, HL7::repetition_on);
    addObject<TXA>(OUL_R23_OUL_R23_TXA_63, "TXA.63", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(OUL_R23_OUL_R23_ORC_65, "ORC.65", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R23_OUL_R23_PRT_66, "PRT.66", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OUL_R23_OUL_R23_TQ1_67, "TQ1.67", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OUL_R23_OUL_R23_TQ2_68, "TQ2.68", HL7::optional, HL7::repetition_on);
    addObject<INV>(OUL_R23_OUL_R23_INV_69, "INV.69", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OUL_R23_OUL_R23_NTE_70, "NTE.70", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OUL_R23_OUL_R23_OBX_71, "OBX.71", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R23_OUL_R23_PRT_72, "PRT.72", HL7::optional, HL7::repetition_on);
    addObject<SID>(OUL_R23_OUL_R23_SID_73, "SID.73", HL7::optional, HL7::repetition_on);
    addObject<TCD>(OUL_R23_OUL_R23_TCD_74, "TCD.74", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OUL_R23_OUL_R23_OBX_75, "OBX.75", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R23_OUL_R23_PRT_76, "PRT.76", HL7::optional, HL7::repetition_on);
    addObject<TXA>(OUL_R23_OUL_R23_TXA_77, "TXA.77", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OUL_R23_OUL_R23_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OUL_R23_OUL_R23_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, OUL_R23_OUL_R23_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, OUL_R23_OUL_R23_UAC_4);
  }
  NTE* getNTE_5(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OUL_R23_OUL_R23_NTE_5);
  }
  NK1* getNK1_7(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, OUL_R23_OUL_R23_NK1_7);
  }
  DEV* getDEV_11(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OUL_R23_OUL_R23_DEV_11);
  }
  DSC* getDSC_12(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, OUL_R23_OUL_R23_DSC_12);
  }
  OBX* getOBX_13(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R23_OUL_R23_OBX_13);
  }
  ARV* getARV_16(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OUL_R23_OUL_R23_ARV_16);
  }
  NTE* getNTE_17(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OUL_R23_OUL_R23_NTE_17);
  }
  OH1* getOH1_18(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, OUL_R23_OUL_R23_OH1_18);
  }
  OH2* getOH2_19(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OUL_R23_OUL_R23_OH2_19);
  }
  OH3* getOH3_20(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OUL_R23_OUL_R23_OH3_20);
  }
  OH4* getOH4_21(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, OUL_R23_OUL_R23_OH4_21);
  }
  PD1* getPD1_22(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OUL_R23_OUL_R23_PD1_22);
  }
  PID* getPID_23(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OUL_R23_OUL_R23_PID_23);
  }
  PRT* getPRT_24(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R23_OUL_R23_PRT_24);
  }
  OBX* getOBX_25(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R23_OUL_R23_OBX_25);
  }
  PRT* getPRT_26(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R23_OUL_R23_PRT_26);
  }
  OBX* getOBX_27(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R23_OUL_R23_OBX_27);
  }
  PRT* getPRT_28(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R23_OUL_R23_PRT_28);
  }
  PRT* getPRT_29(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R23_OUL_R23_PRT_29);
  }
  PV1* getPV1_30(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OUL_R23_OUL_R23_PV1_30);
  }
  PV2* getPV2_31(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OUL_R23_OUL_R23_PV2_31);
  }
  SPM* getSPM_34(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, OUL_R23_OUL_R23_SPM_34);
  }
  OBX* getOBX_35(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R23_OUL_R23_OBX_35);
  }
  PRT* getPRT_36(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R23_OUL_R23_PRT_36);
  }
  OBX* getOBX_37(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R23_OUL_R23_OBX_37);
  }
  PRT* getPRT_38(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R23_OUL_R23_PRT_38);
  }
  INV* getINV_40(size_t index = 0) {
    return (INV*)this->getObjectSafe(index, OUL_R23_OUL_R23_INV_40);
  }
  SAC* getSAC_41(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OUL_R23_OUL_R23_SAC_41);
  }
  CTI* getCTI_45(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, OUL_R23_OUL_R23_CTI_45);
  }
  NTE* getNTE_46(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OUL_R23_OUL_R23_NTE_46);
  }
  OBR* getOBR_47(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OUL_R23_OUL_R23_OBR_47);
  }
  PRT* getPRT_48(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R23_OUL_R23_PRT_48);
  }
  PRT* getPRT_49(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R23_OUL_R23_PRT_49);
  }
  ORC* getORC_51(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OUL_R23_OUL_R23_ORC_51);
  }
  PRT* getPRT_52(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R23_OUL_R23_PRT_52);
  }
  OBX* getOBX_53(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R23_OUL_R23_OBX_53);
  }
  PRT* getPRT_54(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R23_OUL_R23_PRT_54);
  }
  TXA* getTXA_55(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, OUL_R23_OUL_R23_TXA_55);
  }
  ORC* getORC_57(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OUL_R23_OUL_R23_ORC_57);
  }
  PRT* getPRT_58(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R23_OUL_R23_PRT_58);
  }
  TQ1* getTQ1_59(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OUL_R23_OUL_R23_TQ1_59);
  }
  TQ2* getTQ2_60(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OUL_R23_OUL_R23_TQ2_60);
  }
  OBX* getOBX_61(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R23_OUL_R23_OBX_61);
  }
  PRT* getPRT_62(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R23_OUL_R23_PRT_62);
  }
  TXA* getTXA_63(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, OUL_R23_OUL_R23_TXA_63);
  }
  ORC* getORC_65(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OUL_R23_OUL_R23_ORC_65);
  }
  PRT* getPRT_66(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R23_OUL_R23_PRT_66);
  }
  TQ1* getTQ1_67(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OUL_R23_OUL_R23_TQ1_67);
  }
  TQ2* getTQ2_68(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OUL_R23_OUL_R23_TQ2_68);
  }
  INV* getINV_69(size_t index = 0) {
    return (INV*)this->getObjectSafe(index, OUL_R23_OUL_R23_INV_69);
  }
  NTE* getNTE_70(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OUL_R23_OUL_R23_NTE_70);
  }
  OBX* getOBX_71(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R23_OUL_R23_OBX_71);
  }
  PRT* getPRT_72(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R23_OUL_R23_PRT_72);
  }
  SID* getSID_73(size_t index = 0) {
    return (SID*)this->getObjectSafe(index, OUL_R23_OUL_R23_SID_73);
  }
  TCD* getTCD_74(size_t index = 0) {
    return (TCD*)this->getObjectSafe(index, OUL_R23_OUL_R23_TCD_74);
  }
  OBX* getOBX_75(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R23_OUL_R23_OBX_75);
  }
  PRT* getPRT_76(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R23_OUL_R23_PRT_76);
  }
  TXA* getTXA_77(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, OUL_R23_OUL_R23_TXA_77);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_5(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_NTE_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_7(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_NK1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_11(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_DEV_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_12(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_DSC_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_13(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_OBX_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_16(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_ARV_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_17(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_NTE_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_18(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_OH1_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_19(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_OH2_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_20(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_OH3_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_21(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_OH4_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_22(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_PD1_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_23(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_PID_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_24(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_PRT_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_25(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_OBX_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_26(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_PRT_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_27(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_OBX_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_28(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_PRT_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_29(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_PRT_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_30(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_PV1_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_31(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_PV2_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_34(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_SPM_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_35(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_OBX_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_36(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_PRT_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_37(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_OBX_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_38(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_PRT_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINV_40(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_INV_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_41(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_SAC_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_45(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_CTI_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_46(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_NTE_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_47(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_OBR_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_48(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_PRT_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_49(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_PRT_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_51(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_ORC_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_52(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_PRT_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_53(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_OBX_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_54(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_PRT_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_55(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_TXA_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_57(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_ORC_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_58(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_PRT_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_59(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_TQ1_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_60(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_TQ2_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_61(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_OBX_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_62(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_PRT_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_63(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_TXA_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_65(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_ORC_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_66(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_PRT_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_67(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_TQ1_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_68(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_TQ2_68) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINV_69(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_INV_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_70(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_NTE_70) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_71(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_OBX_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_72(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_PRT_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSID_73(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_SID_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTCD_74(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_TCD_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_75(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_OBX_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_76(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_PRT_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_77(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R23_OUL_R23_TXA_77) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OUL_R23_OUL_R23_ */
} /* namespace HL7_29 */
#endif /*  __OUL_R23_OUL_R23__29_H__ */
