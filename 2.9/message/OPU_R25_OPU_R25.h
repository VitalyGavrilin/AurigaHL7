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


#ifndef __OPU_R25_OPU_R25__29_H__
#define __OPU_R25_OPU_R25__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/INV.h"
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
#include "../segment/SAC.h"
#include "../segment/SFT.h"
#include "../segment/SPM.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct OPU_R25_OPU_R25_PATIENT_VISIT_OBSERVATION; /* PATIENT_VISIT_OBSERVATION */
struct OPU_R25_OPU_R25_ACCESSION_DETAIL; /* ACCESSION_DETAIL */
struct OPU_R25_OPU_R25_PATIENT; /* PATIENT */
struct OPU_R25_OPU_R25_SPECIMEN; /* SPECIMEN */
struct OPU_R25_OPU_R25_PATIENT_OBSERVATION; /* PATIENT_OBSERVATION */
struct OPU_R25_OPU_R25_PATIENT_OBSERVATION; /* PATIENT_OBSERVATION */
struct OPU_R25_OPU_R25_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct OPU_R25_OPU_R25_CONTAINER; /* CONTAINER */
struct OPU_R25_OPU_R25_ORDER; /* ORDER */
struct OPU_R25_OPU_R25_COMMON_ORDER; /* COMMON_ORDER */
struct OPU_R25_OPU_R25_TIMING_QTY; /* TIMING_QTY */
struct OPU_R25_OPU_R25_RESULT; /* RESULT */

/*  */
struct OPU_R25_OPU_R25 : public HL7Message {
  OPU_R25_OPU_R25() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OPU_R25_OPU_R25_MSH_1,
    OPU_R25_OPU_R25_ARV_2,
    OPU_R25_OPU_R25_SFT_3,
    OPU_R25_OPU_R25_UAC_4,
    OPU_R25_OPU_R25_NTE_5,
    OPU_R25_OPU_R25_PV1_6,
    OPU_R25_OPU_R25_PV2_7,
    OPU_R25_OPU_R25_PRT_8,
    OPU_R25_OPU_R25_ARV_15,
    OPU_R25_OPU_R25_OH1_16,
    OPU_R25_OPU_R25_OH2_17,
    OPU_R25_OPU_R25_OH3_18,
    OPU_R25_OPU_R25_OH4_19,
    OPU_R25_OPU_R25_PD1_20,
    OPU_R25_OPU_R25_PID_21,
    OPU_R25_OPU_R25_PRT_22,
    OPU_R25_OPU_R25_NTE_23,
    OPU_R25_OPU_R25_OBX_24,
    OPU_R25_OPU_R25_PRT_25,
    OPU_R25_OPU_R25_ARV_27,
    OPU_R25_OPU_R25_OH1_28,
    OPU_R25_OPU_R25_OH2_29,
    OPU_R25_OPU_R25_OH3_30,
    OPU_R25_OPU_R25_OH4_31,
    OPU_R25_OPU_R25_PD1_32,
    OPU_R25_OPU_R25_PID_33,
    OPU_R25_OPU_R25_PRT_34,
    OPU_R25_OPU_R25_SPM_38,
    OPU_R25_OPU_R25_NTE_39,
    OPU_R25_OPU_R25_OBX_40,
    OPU_R25_OPU_R25_PRT_41,
    OPU_R25_OPU_R25_NTE_42,
    OPU_R25_OPU_R25_OBX_43,
    OPU_R25_OPU_R25_PRT_44,
    OPU_R25_OPU_R25_NTE_45,
    OPU_R25_OPU_R25_OBX_46,
    OPU_R25_OPU_R25_PRT_47,
    OPU_R25_OPU_R25_NTE_48,
    OPU_R25_OPU_R25_OBX_49,
    OPU_R25_OPU_R25_PRT_50,
    OPU_R25_OPU_R25_NTE_51,
    OPU_R25_OPU_R25_OBX_52,
    OPU_R25_OPU_R25_PRT_53,
    OPU_R25_OPU_R25_INV_54,
    OPU_R25_OPU_R25_SAC_55,
    OPU_R25_OPU_R25_NTE_56,
    OPU_R25_OPU_R25_OBX_57,
    OPU_R25_OPU_R25_PRT_58,
    OPU_R25_OPU_R25_NTE_59,
    OPU_R25_OPU_R25_OBX_60,
    OPU_R25_OPU_R25_PRT_61,
    OPU_R25_OPU_R25_INV_62,
    OPU_R25_OPU_R25_SAC_63,
    OPU_R25_OPU_R25_NTE_67,
    OPU_R25_OPU_R25_OBR_68,
    OPU_R25_OPU_R25_PRT_69,
    OPU_R25_OPU_R25_PRT_70,
    OPU_R25_OPU_R25_ORC_71,
    OPU_R25_OPU_R25_PRT_72,
    OPU_R25_OPU_R25_ORC_73,
    OPU_R25_OPU_R25_PRT_74,
    OPU_R25_OPU_R25_TQ1_75,
    OPU_R25_OPU_R25_TQ2_76,
    OPU_R25_OPU_R25_ORC_77,
    OPU_R25_OPU_R25_PRT_78,
    OPU_R25_OPU_R25_TQ1_79,
    OPU_R25_OPU_R25_TQ2_80,
    OPU_R25_OPU_R25_NTE_81,
    OPU_R25_OPU_R25_OBX_82,
    OPU_R25_OPU_R25_PRT_83,
    OPU_R25_OPU_R25_NTE_84,
    OPU_R25_OPU_R25_OBX_85,
    OPU_R25_OPU_R25_PRT_86,
    FIELD_ID_MAX
  };

  const char* className() const { return "OPU_R25_OPU_R25"; }
  OPU_R25_OPU_R25* create() const { return new OPU_R25_OPU_R25(); }

 private:
  /* Initialize object */
  void init() {
    setName("OPU_R25_OPU_R25");
    addObject<MSH>(OPU_R25_OPU_R25_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OPU_R25_OPU_R25_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(OPU_R25_OPU_R25_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(OPU_R25_OPU_R25_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OPU_R25_OPU_R25_NTE_5, "NTE.5", HL7::optional, HL7::repetition_off);
    addObject<PV1>(OPU_R25_OPU_R25_PV1_6, "PV1.6", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OPU_R25_OPU_R25_PV2_7, "PV2.7", HL7::optional, HL7::repetition_off);
    addObject<PRT>(OPU_R25_OPU_R25_PRT_8, "PRT.8", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OPU_R25_OPU_R25_ARV_15, "ARV.15", HL7::optional, HL7::repetition_on);
    addObject<OH1>(OPU_R25_OPU_R25_OH1_16, "OH1.16", HL7::optional, HL7::repetition_on);
    addObject<OH2>(OPU_R25_OPU_R25_OH2_17, "OH2.17", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OPU_R25_OPU_R25_OH3_18, "OH3.18", HL7::optional, HL7::repetition_off);
    addObject<OH4>(OPU_R25_OPU_R25_OH4_19, "OH4.19", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OPU_R25_OPU_R25_PD1_20, "PD1.20", HL7::optional, HL7::repetition_off);
    addObject<PID>(OPU_R25_OPU_R25_PID_21, "PID.21", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPU_R25_OPU_R25_PRT_22, "PRT.22", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OPU_R25_OPU_R25_NTE_23, "NTE.23", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPU_R25_OPU_R25_OBX_24, "OBX.24", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPU_R25_OPU_R25_PRT_25, "PRT.25", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OPU_R25_OPU_R25_ARV_27, "ARV.27", HL7::optional, HL7::repetition_on);
    addObject<OH1>(OPU_R25_OPU_R25_OH1_28, "OH1.28", HL7::optional, HL7::repetition_on);
    addObject<OH2>(OPU_R25_OPU_R25_OH2_29, "OH2.29", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OPU_R25_OPU_R25_OH3_30, "OH3.30", HL7::optional, HL7::repetition_off);
    addObject<OH4>(OPU_R25_OPU_R25_OH4_31, "OH4.31", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OPU_R25_OPU_R25_PD1_32, "PD1.32", HL7::optional, HL7::repetition_off);
    addObject<PID>(OPU_R25_OPU_R25_PID_33, "PID.33", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPU_R25_OPU_R25_PRT_34, "PRT.34", HL7::optional, HL7::repetition_on);
    addObject<SPM>(OPU_R25_OPU_R25_SPM_38, "SPM.38", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(OPU_R25_OPU_R25_NTE_39, "NTE.39", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPU_R25_OPU_R25_OBX_40, "OBX.40", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPU_R25_OPU_R25_PRT_41, "PRT.41", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OPU_R25_OPU_R25_NTE_42, "NTE.42", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPU_R25_OPU_R25_OBX_43, "OBX.43", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPU_R25_OPU_R25_PRT_44, "PRT.44", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OPU_R25_OPU_R25_NTE_45, "NTE.45", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPU_R25_OPU_R25_OBX_46, "OBX.46", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPU_R25_OPU_R25_PRT_47, "PRT.47", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OPU_R25_OPU_R25_NTE_48, "NTE.48", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPU_R25_OPU_R25_OBX_49, "OBX.49", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPU_R25_OPU_R25_PRT_50, "PRT.50", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OPU_R25_OPU_R25_NTE_51, "NTE.51", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPU_R25_OPU_R25_OBX_52, "OBX.52", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPU_R25_OPU_R25_PRT_53, "PRT.53", HL7::optional, HL7::repetition_on);
    addObject<INV>(OPU_R25_OPU_R25_INV_54, "INV.54", HL7::optional, HL7::repetition_off);
    addObject<SAC>(OPU_R25_OPU_R25_SAC_55, "SAC.55", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(OPU_R25_OPU_R25_NTE_56, "NTE.56", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPU_R25_OPU_R25_OBX_57, "OBX.57", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPU_R25_OPU_R25_PRT_58, "PRT.58", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OPU_R25_OPU_R25_NTE_59, "NTE.59", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPU_R25_OPU_R25_OBX_60, "OBX.60", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPU_R25_OPU_R25_PRT_61, "PRT.61", HL7::optional, HL7::repetition_on);
    addObject<INV>(OPU_R25_OPU_R25_INV_62, "INV.62", HL7::optional, HL7::repetition_off);
    addObject<SAC>(OPU_R25_OPU_R25_SAC_63, "SAC.63", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(OPU_R25_OPU_R25_NTE_67, "NTE.67", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OPU_R25_OPU_R25_OBR_68, "OBR.68", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPU_R25_OPU_R25_PRT_69, "PRT.69", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OPU_R25_OPU_R25_PRT_70, "PRT.70", HL7::optional, HL7::repetition_on);
    addObject<ORC>(OPU_R25_OPU_R25_ORC_71, "ORC.71", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPU_R25_OPU_R25_PRT_72, "PRT.72", HL7::optional, HL7::repetition_on);
    addObject<ORC>(OPU_R25_OPU_R25_ORC_73, "ORC.73", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPU_R25_OPU_R25_PRT_74, "PRT.74", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OPU_R25_OPU_R25_TQ1_75, "TQ1.75", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OPU_R25_OPU_R25_TQ2_76, "TQ2.76", HL7::optional, HL7::repetition_on);
    addObject<ORC>(OPU_R25_OPU_R25_ORC_77, "ORC.77", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPU_R25_OPU_R25_PRT_78, "PRT.78", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OPU_R25_OPU_R25_TQ1_79, "TQ1.79", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OPU_R25_OPU_R25_TQ2_80, "TQ2.80", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OPU_R25_OPU_R25_NTE_81, "NTE.81", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPU_R25_OPU_R25_OBX_82, "OBX.82", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPU_R25_OPU_R25_PRT_83, "PRT.83", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OPU_R25_OPU_R25_NTE_84, "NTE.84", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPU_R25_OPU_R25_OBX_85, "OBX.85", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPU_R25_OPU_R25_PRT_86, "PRT.86", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OPU_R25_OPU_R25_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OPU_R25_OPU_R25_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, OPU_R25_OPU_R25_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, OPU_R25_OPU_R25_UAC_4);
  }
  NTE* getNTE_5(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OPU_R25_OPU_R25_NTE_5);
  }
  PV1* getPV1_6(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OPU_R25_OPU_R25_PV1_6);
  }
  PV2* getPV2_7(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OPU_R25_OPU_R25_PV2_7);
  }
  PRT* getPRT_8(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPU_R25_OPU_R25_PRT_8);
  }
  ARV* getARV_15(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OPU_R25_OPU_R25_ARV_15);
  }
  OH1* getOH1_16(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, OPU_R25_OPU_R25_OH1_16);
  }
  OH2* getOH2_17(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OPU_R25_OPU_R25_OH2_17);
  }
  OH3* getOH3_18(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OPU_R25_OPU_R25_OH3_18);
  }
  OH4* getOH4_19(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, OPU_R25_OPU_R25_OH4_19);
  }
  PD1* getPD1_20(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OPU_R25_OPU_R25_PD1_20);
  }
  PID* getPID_21(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OPU_R25_OPU_R25_PID_21);
  }
  PRT* getPRT_22(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPU_R25_OPU_R25_PRT_22);
  }
  NTE* getNTE_23(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OPU_R25_OPU_R25_NTE_23);
  }
  OBX* getOBX_24(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPU_R25_OPU_R25_OBX_24);
  }
  PRT* getPRT_25(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPU_R25_OPU_R25_PRT_25);
  }
  ARV* getARV_27(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OPU_R25_OPU_R25_ARV_27);
  }
  OH1* getOH1_28(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, OPU_R25_OPU_R25_OH1_28);
  }
  OH2* getOH2_29(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OPU_R25_OPU_R25_OH2_29);
  }
  OH3* getOH3_30(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OPU_R25_OPU_R25_OH3_30);
  }
  OH4* getOH4_31(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, OPU_R25_OPU_R25_OH4_31);
  }
  PD1* getPD1_32(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OPU_R25_OPU_R25_PD1_32);
  }
  PID* getPID_33(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OPU_R25_OPU_R25_PID_33);
  }
  PRT* getPRT_34(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPU_R25_OPU_R25_PRT_34);
  }
  SPM* getSPM_38(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, OPU_R25_OPU_R25_SPM_38);
  }
  NTE* getNTE_39(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OPU_R25_OPU_R25_NTE_39);
  }
  OBX* getOBX_40(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPU_R25_OPU_R25_OBX_40);
  }
  PRT* getPRT_41(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPU_R25_OPU_R25_PRT_41);
  }
  NTE* getNTE_42(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OPU_R25_OPU_R25_NTE_42);
  }
  OBX* getOBX_43(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPU_R25_OPU_R25_OBX_43);
  }
  PRT* getPRT_44(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPU_R25_OPU_R25_PRT_44);
  }
  NTE* getNTE_45(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OPU_R25_OPU_R25_NTE_45);
  }
  OBX* getOBX_46(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPU_R25_OPU_R25_OBX_46);
  }
  PRT* getPRT_47(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPU_R25_OPU_R25_PRT_47);
  }
  NTE* getNTE_48(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OPU_R25_OPU_R25_NTE_48);
  }
  OBX* getOBX_49(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPU_R25_OPU_R25_OBX_49);
  }
  PRT* getPRT_50(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPU_R25_OPU_R25_PRT_50);
  }
  NTE* getNTE_51(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OPU_R25_OPU_R25_NTE_51);
  }
  OBX* getOBX_52(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPU_R25_OPU_R25_OBX_52);
  }
  PRT* getPRT_53(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPU_R25_OPU_R25_PRT_53);
  }
  INV* getINV_54(size_t index = 0) {
    return (INV*)this->getObjectSafe(index, OPU_R25_OPU_R25_INV_54);
  }
  SAC* getSAC_55(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OPU_R25_OPU_R25_SAC_55);
  }
  NTE* getNTE_56(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OPU_R25_OPU_R25_NTE_56);
  }
  OBX* getOBX_57(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPU_R25_OPU_R25_OBX_57);
  }
  PRT* getPRT_58(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPU_R25_OPU_R25_PRT_58);
  }
  NTE* getNTE_59(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OPU_R25_OPU_R25_NTE_59);
  }
  OBX* getOBX_60(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPU_R25_OPU_R25_OBX_60);
  }
  PRT* getPRT_61(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPU_R25_OPU_R25_PRT_61);
  }
  INV* getINV_62(size_t index = 0) {
    return (INV*)this->getObjectSafe(index, OPU_R25_OPU_R25_INV_62);
  }
  SAC* getSAC_63(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OPU_R25_OPU_R25_SAC_63);
  }
  NTE* getNTE_67(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OPU_R25_OPU_R25_NTE_67);
  }
  OBR* getOBR_68(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OPU_R25_OPU_R25_OBR_68);
  }
  PRT* getPRT_69(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPU_R25_OPU_R25_PRT_69);
  }
  PRT* getPRT_70(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPU_R25_OPU_R25_PRT_70);
  }
  ORC* getORC_71(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OPU_R25_OPU_R25_ORC_71);
  }
  PRT* getPRT_72(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPU_R25_OPU_R25_PRT_72);
  }
  ORC* getORC_73(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OPU_R25_OPU_R25_ORC_73);
  }
  PRT* getPRT_74(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPU_R25_OPU_R25_PRT_74);
  }
  TQ1* getTQ1_75(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OPU_R25_OPU_R25_TQ1_75);
  }
  TQ2* getTQ2_76(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OPU_R25_OPU_R25_TQ2_76);
  }
  ORC* getORC_77(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OPU_R25_OPU_R25_ORC_77);
  }
  PRT* getPRT_78(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPU_R25_OPU_R25_PRT_78);
  }
  TQ1* getTQ1_79(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OPU_R25_OPU_R25_TQ1_79);
  }
  TQ2* getTQ2_80(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OPU_R25_OPU_R25_TQ2_80);
  }
  NTE* getNTE_81(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OPU_R25_OPU_R25_NTE_81);
  }
  OBX* getOBX_82(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPU_R25_OPU_R25_OBX_82);
  }
  PRT* getPRT_83(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPU_R25_OPU_R25_PRT_83);
  }
  NTE* getNTE_84(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OPU_R25_OPU_R25_NTE_84);
  }
  OBX* getOBX_85(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPU_R25_OPU_R25_OBX_85);
  }
  PRT* getPRT_86(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPU_R25_OPU_R25_PRT_86);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_5(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_NTE_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_6(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_PV1_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_7(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_PV2_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_8(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_PRT_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_15(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_ARV_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_16(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_OH1_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_17(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_OH2_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_18(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_OH3_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_19(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_OH4_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_20(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_PD1_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_21(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_PID_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_22(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_PRT_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_23(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_NTE_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_24(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_OBX_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_25(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_PRT_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_27(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_ARV_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_28(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_OH1_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_29(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_OH2_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_30(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_OH3_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_31(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_OH4_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_32(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_PD1_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_33(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_PID_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_34(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_PRT_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_38(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_SPM_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_39(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_NTE_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_40(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_OBX_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_41(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_PRT_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_42(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_NTE_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_43(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_OBX_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_44(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_PRT_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_45(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_NTE_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_46(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_OBX_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_47(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_PRT_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_48(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_NTE_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_49(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_OBX_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_50(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_PRT_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_51(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_NTE_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_52(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_OBX_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_53(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_PRT_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINV_54(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_INV_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_55(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_SAC_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_56(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_NTE_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_57(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_OBX_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_58(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_PRT_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_59(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_NTE_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_60(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_OBX_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_61(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_PRT_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINV_62(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_INV_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_63(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_SAC_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_67(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_NTE_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_68(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_OBR_68) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_69(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_PRT_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_70(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_PRT_70) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_71(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_ORC_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_72(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_PRT_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_73(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_ORC_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_74(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_PRT_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_75(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_TQ1_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_76(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_TQ2_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_77(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_ORC_77) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_78(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_PRT_78) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_79(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_TQ1_79) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_80(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_TQ2_80) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_81(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_NTE_81) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_82(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_OBX_82) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_83(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_PRT_83) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_84(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_NTE_84) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_85(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_OBX_85) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_86(size_t index = 0) {
    try {
      return this->getObject(index, OPU_R25_OPU_R25_PRT_86) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OPU_R25_OPU_R25_ */
} /* namespace HL7_29 */
#endif /*  __OPU_R25_OPU_R25__29_H__ */
