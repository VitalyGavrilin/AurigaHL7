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


#ifndef __OML_O59_OML_O59__29_H__
#define __OML_O59_OML_O59__29_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/ARV.h"
#include "../segment/BLG.h"
#include "../segment/CTD.h"
#include "../segment/CTI.h"
#include "../segment/DEV.h"
#include "../segment/DG1.h"
#include "../segment/FT1.h"
#include "../segment/GT1.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IN3.h"
#include "../segment/IPC.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/REL.h"
#include "../segment/SAC.h"
#include "../segment/SFT.h"
#include "../segment/SGH.h"
#include "../segment/SGT.h"
#include "../segment/SPM.h"
#include "../segment/TCD.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct OML_O59_OML_O59_PATIENT; /* PATIENT */
struct OML_O59_OML_O59_ORDER; /* ORDER */
struct OML_O59_OML_O59_TIMING; /* TIMING */
struct OML_O59_OML_O59_OBSERVATION_REQUEST; /* OBSERVATION_REQUEST */
struct OML_O59_OML_O59_SPECIMEN; /* SPECIMEN */
struct OML_O59_OML_O59_PRIOR_RESULT; /* PRIOR_RESULT */
struct OML_O59_OML_O59_OBSERVATION; /* OBSERVATION */
struct OML_O59_OML_O59_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct OML_O59_OML_O59_CONTAINER; /* CONTAINER */
struct OML_O59_OML_O59_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OML_O59_OML_O59_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct OML_O59_OML_O59_CONTAINER; /* CONTAINER */
struct OML_O59_OML_O59_PATIENT_PRIOR; /* PATIENT_PRIOR */
struct OML_O59_OML_O59_PATIENT_VISIT_PRIOR; /* PATIENT_VISIT_PRIOR */
struct OML_O59_OML_O59_ORDER_PRIOR; /* ORDER_PRIOR */
struct OML_O59_OML_O59_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OML_O59_OML_O59_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OML_O59_OML_O59_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OML_O59_OML_O59_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OML_O59_OML_O59_OBSERVATION_PARTICIPATION_PRIOR; /* OBSERVATION_PARTICIPATION_PRIOR */
struct OML_O59_OML_O59_TIMING_PRIOR; /* TIMING_PRIOR */
struct OML_O59_OML_O59_OBSERVATION_PRIOR; /* OBSERVATION_PRIOR */
struct OML_O59_OML_O59_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct OML_O59_OML_O59_CONTAINER; /* CONTAINER */
struct OML_O59_OML_O59_PATIENT_PRIOR; /* PATIENT_PRIOR */
struct OML_O59_OML_O59_PATIENT_VISIT_PRIOR; /* PATIENT_VISIT_PRIOR */
struct OML_O59_OML_O59_ORDER_PRIOR; /* ORDER_PRIOR */
struct OML_O59_OML_O59_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OML_O59_OML_O59_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OML_O59_OML_O59_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OML_O59_OML_O59_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OML_O59_OML_O59_OBSERVATION_PARTICIPATION_PRIOR; /* OBSERVATION_PARTICIPATION_PRIOR */
struct OML_O59_OML_O59_TIMING_PRIOR; /* TIMING_PRIOR */
struct OML_O59_OML_O59_OBSERVATION_PRIOR; /* OBSERVATION_PRIOR */
struct OML_O59_OML_O59_PATIENT_VISIT; /* PATIENT_VISIT */
struct OML_O59_OML_O59_INSURANCE; /* INSURANCE */

/*  */
struct OML_O59_OML_O59 : public HL7Message {
  OML_O59_OML_O59() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OML_O59_OML_O59_MSH_1,
    OML_O59_OML_O59_ARV_2,
    OML_O59_OML_O59_SFT_3,
    OML_O59_OML_O59_UAC_4,
    OML_O59_OML_O59_NTE_5,
    OML_O59_OML_O59_BLG_10,
    OML_O59_OML_O59_CTI_11,
    OML_O59_OML_O59_FT1_12,
    OML_O59_OML_O59_NTE_13,
    OML_O59_OML_O59_ORC_14,
    OML_O59_OML_O59_PRT_15,
    OML_O59_OML_O59_TQ1_16,
    OML_O59_OML_O59_TQ2_17,
    OML_O59_OML_O59_TQ1_18,
    OML_O59_OML_O59_TQ2_19,
    OML_O59_OML_O59_CTD_23,
    OML_O59_OML_O59_DG1_24,
    OML_O59_OML_O59_IPC_25,
    OML_O59_OML_O59_NTE_26,
    OML_O59_OML_O59_OBR_27,
    OML_O59_OML_O59_PRT_28,
    OML_O59_OML_O59_REL_29,
    OML_O59_OML_O59_SGH_30,
    OML_O59_OML_O59_SGT_31,
    OML_O59_OML_O59_TCD_32,
    OML_O59_OML_O59_NTE_35,
    OML_O59_OML_O59_SPM_36,
    OML_O59_OML_O59_OBX_37,
    OML_O59_OML_O59_PRT_38,
    OML_O59_OML_O59_OBX_39,
    OML_O59_OML_O59_PRT_40,
    OML_O59_OML_O59_SAC_43,
    OML_O59_OML_O59_OBX_44,
    OML_O59_OML_O59_PRT_45,
    OML_O59_OML_O59_NTE_48,
    OML_O59_OML_O59_SPM_49,
    OML_O59_OML_O59_AL1_53,
    OML_O59_OML_O59_OBX_54,
    OML_O59_OML_O59_PRT_55,
    OML_O59_OML_O59_OBX_56,
    OML_O59_OML_O59_PRT_57,
    OML_O59_OML_O59_SAC_60,
    OML_O59_OML_O59_OBX_61,
    OML_O59_OML_O59_PRT_62,
    OML_O59_OML_O59_OBX_63,
    OML_O59_OML_O59_PRT_64,
    OML_O59_OML_O59_SAC_67,
    OML_O59_OML_O59_PD1_68,
    OML_O59_OML_O59_PID_69,
    OML_O59_OML_O59_PRT_70,
    OML_O59_OML_O59_OBX_71,
    OML_O59_OML_O59_PRT_72,
    OML_O59_OML_O59_OBX_73,
    OML_O59_OML_O59_PRT_74,
    OML_O59_OML_O59_SAC_77,
    OML_O59_OML_O59_PD1_78,
    OML_O59_OML_O59_PID_79,
    OML_O59_OML_O59_PRT_80,
    OML_O59_OML_O59_PRT_81,
    OML_O59_OML_O59_PV1_82,
    OML_O59_OML_O59_PV2_83,
    OML_O59_OML_O59_OBX_84,
    OML_O59_OML_O59_PRT_85,
    OML_O59_OML_O59_OBX_86,
    OML_O59_OML_O59_PRT_87,
    OML_O59_OML_O59_SAC_90,
    OML_O59_OML_O59_PD1_91,
    OML_O59_OML_O59_PID_92,
    OML_O59_OML_O59_PRT_93,
    OML_O59_OML_O59_PRT_94,
    OML_O59_OML_O59_PV1_95,
    OML_O59_OML_O59_PV2_96,
    OML_O59_OML_O59_NTE_100,
    OML_O59_OML_O59_OBR_101,
    OML_O59_OML_O59_ORC_102,
    OML_O59_OML_O59_PRT_103,
    OML_O59_OML_O59_OBX_104,
    OML_O59_OML_O59_PRT_105,
    OML_O59_OML_O59_OBX_106,
    OML_O59_OML_O59_PRT_107,
    OML_O59_OML_O59_DEV_108,
    OML_O59_OML_O59_PRT_109,
    OML_O59_OML_O59_OBX_110,
    OML_O59_OML_O59_PRT_111,
    OML_O59_OML_O59_DEV_112,
    OML_O59_OML_O59_PRT_113,
    OML_O59_OML_O59_TQ1_114,
    OML_O59_OML_O59_TQ2_115,
    OML_O59_OML_O59_OBX_116,
    OML_O59_OML_O59_PRT_117,
    OML_O59_OML_O59_DEV_118,
    OML_O59_OML_O59_PRT_119,
    OML_O59_OML_O59_TQ1_120,
    OML_O59_OML_O59_TQ2_121,
    OML_O59_OML_O59_NTE_122,
    OML_O59_OML_O59_OBX_123,
    OML_O59_OML_O59_PRT_124,
    OML_O59_OML_O59_NTE_127,
    OML_O59_OML_O59_SPM_128,
    OML_O59_OML_O59_AL1_132,
    OML_O59_OML_O59_NTE_133,
    OML_O59_OML_O59_OBX_134,
    OML_O59_OML_O59_PRT_135,
    OML_O59_OML_O59_TCD_136,
    OML_O59_OML_O59_OBX_137,
    OML_O59_OML_O59_PRT_138,
    OML_O59_OML_O59_OBX_139,
    OML_O59_OML_O59_PRT_140,
    OML_O59_OML_O59_SAC_143,
    OML_O59_OML_O59_OBX_144,
    OML_O59_OML_O59_PRT_145,
    OML_O59_OML_O59_OBX_146,
    OML_O59_OML_O59_PRT_147,
    OML_O59_OML_O59_SAC_150,
    OML_O59_OML_O59_PD1_151,
    OML_O59_OML_O59_PID_152,
    OML_O59_OML_O59_PRT_153,
    OML_O59_OML_O59_OBX_154,
    OML_O59_OML_O59_PRT_155,
    OML_O59_OML_O59_OBX_156,
    OML_O59_OML_O59_PRT_157,
    OML_O59_OML_O59_SAC_160,
    OML_O59_OML_O59_PD1_161,
    OML_O59_OML_O59_PID_162,
    OML_O59_OML_O59_PRT_163,
    OML_O59_OML_O59_PRT_164,
    OML_O59_OML_O59_PV1_165,
    OML_O59_OML_O59_PV2_166,
    OML_O59_OML_O59_OBX_167,
    OML_O59_OML_O59_PRT_168,
    OML_O59_OML_O59_OBX_169,
    OML_O59_OML_O59_PRT_170,
    OML_O59_OML_O59_SAC_173,
    OML_O59_OML_O59_PD1_174,
    OML_O59_OML_O59_PID_175,
    OML_O59_OML_O59_PRT_176,
    OML_O59_OML_O59_PRT_177,
    OML_O59_OML_O59_PV1_178,
    OML_O59_OML_O59_PV2_179,
    OML_O59_OML_O59_NTE_183,
    OML_O59_OML_O59_OBR_184,
    OML_O59_OML_O59_ORC_185,
    OML_O59_OML_O59_PRT_186,
    OML_O59_OML_O59_OBX_187,
    OML_O59_OML_O59_PRT_188,
    OML_O59_OML_O59_OBX_189,
    OML_O59_OML_O59_PRT_190,
    OML_O59_OML_O59_DEV_191,
    OML_O59_OML_O59_PRT_192,
    OML_O59_OML_O59_OBX_193,
    OML_O59_OML_O59_PRT_194,
    OML_O59_OML_O59_DEV_195,
    OML_O59_OML_O59_PRT_196,
    OML_O59_OML_O59_TQ1_197,
    OML_O59_OML_O59_TQ2_198,
    OML_O59_OML_O59_OBX_199,
    OML_O59_OML_O59_PRT_200,
    OML_O59_OML_O59_DEV_201,
    OML_O59_OML_O59_PRT_202,
    OML_O59_OML_O59_TQ1_203,
    OML_O59_OML_O59_TQ2_204,
    OML_O59_OML_O59_NTE_205,
    OML_O59_OML_O59_OBX_206,
    OML_O59_OML_O59_PRT_207,
    OML_O59_OML_O59_AL1_210,
    OML_O59_OML_O59_GT1_211,
    OML_O59_OML_O59_NK1_212,
    OML_O59_OML_O59_NTE_213,
    OML_O59_OML_O59_PD1_214,
    OML_O59_OML_O59_PID_215,
    OML_O59_OML_O59_PRT_216,
    OML_O59_OML_O59_PRT_217,
    OML_O59_OML_O59_PV1_218,
    OML_O59_OML_O59_PV2_219,
    OML_O59_OML_O59_PRT_220,
    OML_O59_OML_O59_PV1_221,
    OML_O59_OML_O59_PV2_222,
    OML_O59_OML_O59_IN1_223,
    OML_O59_OML_O59_IN2_224,
    OML_O59_OML_O59_IN3_225,
    FIELD_ID_MAX
  };

  const char* className() const { return "OML_O59_OML_O59"; }
  OML_O59_OML_O59* create() const { return new OML_O59_OML_O59(); }

 private:
  /* Initialize object */
  void init() {
    setName("OML_O59_OML_O59");
    addObject<MSH>(OML_O59_OML_O59_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OML_O59_OML_O59_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(OML_O59_OML_O59_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(OML_O59_OML_O59_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OML_O59_OML_O59_NTE_5, "NTE.5", HL7::optional, HL7::repetition_on);
    addObject<BLG>(OML_O59_OML_O59_BLG_10, "BLG.10", HL7::optional, HL7::repetition_off);
    addObject<CTI>(OML_O59_OML_O59_CTI_11, "CTI.11", HL7::optional, HL7::repetition_on);
    addObject<FT1>(OML_O59_OML_O59_FT1_12, "FT1.12", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O59_OML_O59_NTE_13, "NTE.13", HL7::optional, HL7::repetition_on);
    addObject<ORC>(OML_O59_OML_O59_ORC_14, "ORC.14", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_15, "PRT.15", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OML_O59_OML_O59_TQ1_16, "TQ1.16", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OML_O59_OML_O59_TQ2_17, "TQ2.17", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OML_O59_OML_O59_TQ1_18, "TQ1.18", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OML_O59_OML_O59_TQ2_19, "TQ2.19", HL7::optional, HL7::repetition_on);
    addObject<CTD>(OML_O59_OML_O59_CTD_23, "CTD.23", HL7::optional, HL7::repetition_off);
    addObject<DG1>(OML_O59_OML_O59_DG1_24, "DG1.24", HL7::optional, HL7::repetition_on);
    addObject<IPC>(OML_O59_OML_O59_IPC_25, "IPC.25", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OML_O59_OML_O59_NTE_26, "NTE.26", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OML_O59_OML_O59_OBR_27, "OBR.27", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_28, "PRT.28", HL7::optional, HL7::repetition_on);
    addObject<REL>(OML_O59_OML_O59_REL_29, "REL.29", HL7::optional, HL7::repetition_off);
    addObject<SGH>(OML_O59_OML_O59_SGH_30, "SGH.30", HL7::optional, HL7::repetition_off);
    addObject<SGT>(OML_O59_OML_O59_SGT_31, "SGT.31", HL7::optional, HL7::repetition_off);
    addObject<TCD>(OML_O59_OML_O59_TCD_32, "TCD.32", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OML_O59_OML_O59_NTE_35, "NTE.35", HL7::optional, HL7::repetition_on);
    addObject<SPM>(OML_O59_OML_O59_SPM_36, "SPM.36", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OML_O59_OML_O59_OBX_37, "OBX.37", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_38, "PRT.38", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O59_OML_O59_OBX_39, "OBX.39", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_40, "PRT.40", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OML_O59_OML_O59_SAC_43, "SAC.43", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OML_O59_OML_O59_OBX_44, "OBX.44", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_45, "PRT.45", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O59_OML_O59_NTE_48, "NTE.48", HL7::optional, HL7::repetition_on);
    addObject<SPM>(OML_O59_OML_O59_SPM_49, "SPM.49", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(OML_O59_OML_O59_AL1_53, "AL1.53", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O59_OML_O59_OBX_54, "OBX.54", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_55, "PRT.55", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O59_OML_O59_OBX_56, "OBX.56", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_57, "PRT.57", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OML_O59_OML_O59_SAC_60, "SAC.60", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OML_O59_OML_O59_OBX_61, "OBX.61", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_62, "PRT.62", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O59_OML_O59_OBX_63, "OBX.63", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_64, "PRT.64", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OML_O59_OML_O59_SAC_67, "SAC.67", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(OML_O59_OML_O59_PD1_68, "PD1.68", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O59_OML_O59_PID_69, "PID.69", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_70, "PRT.70", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O59_OML_O59_OBX_71, "OBX.71", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_72, "PRT.72", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O59_OML_O59_OBX_73, "OBX.73", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_74, "PRT.74", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OML_O59_OML_O59_SAC_77, "SAC.77", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(OML_O59_OML_O59_PD1_78, "PD1.78", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O59_OML_O59_PID_79, "PID.79", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_80, "PRT.80", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O59_OML_O59_PRT_81, "PRT.81", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OML_O59_OML_O59_PV1_82, "PV1.82", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OML_O59_OML_O59_PV2_83, "PV2.83", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OML_O59_OML_O59_OBX_84, "OBX.84", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_85, "PRT.85", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O59_OML_O59_OBX_86, "OBX.86", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_87, "PRT.87", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OML_O59_OML_O59_SAC_90, "SAC.90", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(OML_O59_OML_O59_PD1_91, "PD1.91", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O59_OML_O59_PID_92, "PID.92", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_93, "PRT.93", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O59_OML_O59_PRT_94, "PRT.94", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OML_O59_OML_O59_PV1_95, "PV1.95", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OML_O59_OML_O59_PV2_96, "PV2.96", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OML_O59_OML_O59_NTE_100, "NTE.100", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OML_O59_OML_O59_OBR_101, "OBR.101", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(OML_O59_OML_O59_ORC_102, "ORC.102", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_103, "PRT.103", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O59_OML_O59_OBX_104, "OBX.104", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_105, "PRT.105", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O59_OML_O59_OBX_106, "OBX.106", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_107, "PRT.107", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OML_O59_OML_O59_DEV_108, "DEV.108", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O59_OML_O59_PRT_109, "PRT.109", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OML_O59_OML_O59_OBX_110, "OBX.110", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_111, "PRT.111", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OML_O59_OML_O59_DEV_112, "DEV.112", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O59_OML_O59_PRT_113, "PRT.113", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(OML_O59_OML_O59_TQ1_114, "TQ1.114", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OML_O59_OML_O59_TQ2_115, "TQ2.115", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O59_OML_O59_OBX_116, "OBX.116", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_117, "PRT.117", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OML_O59_OML_O59_DEV_118, "DEV.118", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O59_OML_O59_PRT_119, "PRT.119", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(OML_O59_OML_O59_TQ1_120, "TQ1.120", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OML_O59_OML_O59_TQ2_121, "TQ2.121", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O59_OML_O59_NTE_122, "NTE.122", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O59_OML_O59_OBX_123, "OBX.123", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_124, "PRT.124", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O59_OML_O59_NTE_127, "NTE.127", HL7::optional, HL7::repetition_on);
    addObject<SPM>(OML_O59_OML_O59_SPM_128, "SPM.128", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(OML_O59_OML_O59_AL1_132, "AL1.132", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O59_OML_O59_NTE_133, "NTE.133", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O59_OML_O59_OBX_134, "OBX.134", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_135, "PRT.135", HL7::optional, HL7::repetition_on);
    addObject<TCD>(OML_O59_OML_O59_TCD_136, "TCD.136", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OML_O59_OML_O59_OBX_137, "OBX.137", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_138, "PRT.138", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O59_OML_O59_OBX_139, "OBX.139", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_140, "PRT.140", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OML_O59_OML_O59_SAC_143, "SAC.143", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OML_O59_OML_O59_OBX_144, "OBX.144", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_145, "PRT.145", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O59_OML_O59_OBX_146, "OBX.146", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_147, "PRT.147", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OML_O59_OML_O59_SAC_150, "SAC.150", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(OML_O59_OML_O59_PD1_151, "PD1.151", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O59_OML_O59_PID_152, "PID.152", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_153, "PRT.153", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O59_OML_O59_OBX_154, "OBX.154", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_155, "PRT.155", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O59_OML_O59_OBX_156, "OBX.156", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_157, "PRT.157", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OML_O59_OML_O59_SAC_160, "SAC.160", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(OML_O59_OML_O59_PD1_161, "PD1.161", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O59_OML_O59_PID_162, "PID.162", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_163, "PRT.163", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O59_OML_O59_PRT_164, "PRT.164", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OML_O59_OML_O59_PV1_165, "PV1.165", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OML_O59_OML_O59_PV2_166, "PV2.166", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OML_O59_OML_O59_OBX_167, "OBX.167", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_168, "PRT.168", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O59_OML_O59_OBX_169, "OBX.169", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_170, "PRT.170", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OML_O59_OML_O59_SAC_173, "SAC.173", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(OML_O59_OML_O59_PD1_174, "PD1.174", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O59_OML_O59_PID_175, "PID.175", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_176, "PRT.176", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O59_OML_O59_PRT_177, "PRT.177", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OML_O59_OML_O59_PV1_178, "PV1.178", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OML_O59_OML_O59_PV2_179, "PV2.179", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OML_O59_OML_O59_NTE_183, "NTE.183", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OML_O59_OML_O59_OBR_184, "OBR.184", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(OML_O59_OML_O59_ORC_185, "ORC.185", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_186, "PRT.186", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O59_OML_O59_OBX_187, "OBX.187", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_188, "PRT.188", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O59_OML_O59_OBX_189, "OBX.189", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_190, "PRT.190", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OML_O59_OML_O59_DEV_191, "DEV.191", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O59_OML_O59_PRT_192, "PRT.192", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OML_O59_OML_O59_OBX_193, "OBX.193", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_194, "PRT.194", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OML_O59_OML_O59_DEV_195, "DEV.195", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O59_OML_O59_PRT_196, "PRT.196", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(OML_O59_OML_O59_TQ1_197, "TQ1.197", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OML_O59_OML_O59_TQ2_198, "TQ2.198", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O59_OML_O59_OBX_199, "OBX.199", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_200, "PRT.200", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OML_O59_OML_O59_DEV_201, "DEV.201", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O59_OML_O59_PRT_202, "PRT.202", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(OML_O59_OML_O59_TQ1_203, "TQ1.203", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OML_O59_OML_O59_TQ2_204, "TQ2.204", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O59_OML_O59_NTE_205, "NTE.205", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O59_OML_O59_OBX_206, "OBX.206", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_207, "PRT.207", HL7::optional, HL7::repetition_on);
    addObject<AL1>(OML_O59_OML_O59_AL1_210, "AL1.210", HL7::optional, HL7::repetition_on);
    addObject<GT1>(OML_O59_OML_O59_GT1_211, "GT1.211", HL7::optional, HL7::repetition_off);
    addObject<NK1>(OML_O59_OML_O59_NK1_212, "NK1.212", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O59_OML_O59_NTE_213, "NTE.213", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OML_O59_OML_O59_PD1_214, "PD1.214", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O59_OML_O59_PID_215, "PID.215", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_216, "PRT.216", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O59_OML_O59_PRT_217, "PRT.217", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OML_O59_OML_O59_PV1_218, "PV1.218", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OML_O59_OML_O59_PV2_219, "PV2.219", HL7::optional, HL7::repetition_off);
    addObject<PRT>(OML_O59_OML_O59_PRT_220, "PRT.220", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OML_O59_OML_O59_PV1_221, "PV1.221", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OML_O59_OML_O59_PV2_222, "PV2.222", HL7::optional, HL7::repetition_off);
    addObject<IN1>(OML_O59_OML_O59_IN1_223, "IN1.223", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OML_O59_OML_O59_IN2_224, "IN2.224", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OML_O59_OML_O59_IN3_225, "IN3.225", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OML_O59_OML_O59_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O59_OML_O59_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, OML_O59_OML_O59_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, OML_O59_OML_O59_UAC_4);
  }
  NTE* getNTE_5(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O59_OML_O59_NTE_5);
  }
  BLG* getBLG_10(size_t index = 0) {
    return (BLG*)this->getObjectSafe(index, OML_O59_OML_O59_BLG_10);
  }
  CTI* getCTI_11(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, OML_O59_OML_O59_CTI_11);
  }
  FT1* getFT1_12(size_t index = 0) {
    return (FT1*)this->getObjectSafe(index, OML_O59_OML_O59_FT1_12);
  }
  NTE* getNTE_13(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O59_OML_O59_NTE_13);
  }
  ORC* getORC_14(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OML_O59_OML_O59_ORC_14);
  }
  PRT* getPRT_15(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_15);
  }
  TQ1* getTQ1_16(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OML_O59_OML_O59_TQ1_16);
  }
  TQ2* getTQ2_17(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OML_O59_OML_O59_TQ2_17);
  }
  TQ1* getTQ1_18(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OML_O59_OML_O59_TQ1_18);
  }
  TQ2* getTQ2_19(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OML_O59_OML_O59_TQ2_19);
  }
  CTD* getCTD_23(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, OML_O59_OML_O59_CTD_23);
  }
  DG1* getDG1_24(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, OML_O59_OML_O59_DG1_24);
  }
  IPC* getIPC_25(size_t index = 0) {
    return (IPC*)this->getObjectSafe(index, OML_O59_OML_O59_IPC_25);
  }
  NTE* getNTE_26(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O59_OML_O59_NTE_26);
  }
  OBR* getOBR_27(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OML_O59_OML_O59_OBR_27);
  }
  PRT* getPRT_28(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_28);
  }
  REL* getREL_29(size_t index = 0) {
    return (REL*)this->getObjectSafe(index, OML_O59_OML_O59_REL_29);
  }
  SGH* getSGH_30(size_t index = 0) {
    return (SGH*)this->getObjectSafe(index, OML_O59_OML_O59_SGH_30);
  }
  SGT* getSGT_31(size_t index = 0) {
    return (SGT*)this->getObjectSafe(index, OML_O59_OML_O59_SGT_31);
  }
  TCD* getTCD_32(size_t index = 0) {
    return (TCD*)this->getObjectSafe(index, OML_O59_OML_O59_TCD_32);
  }
  NTE* getNTE_35(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O59_OML_O59_NTE_35);
  }
  SPM* getSPM_36(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, OML_O59_OML_O59_SPM_36);
  }
  OBX* getOBX_37(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_37);
  }
  PRT* getPRT_38(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_38);
  }
  OBX* getOBX_39(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_39);
  }
  PRT* getPRT_40(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_40);
  }
  SAC* getSAC_43(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OML_O59_OML_O59_SAC_43);
  }
  OBX* getOBX_44(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_44);
  }
  PRT* getPRT_45(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_45);
  }
  NTE* getNTE_48(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O59_OML_O59_NTE_48);
  }
  SPM* getSPM_49(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, OML_O59_OML_O59_SPM_49);
  }
  AL1* getAL1_53(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OML_O59_OML_O59_AL1_53);
  }
  OBX* getOBX_54(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_54);
  }
  PRT* getPRT_55(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_55);
  }
  OBX* getOBX_56(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_56);
  }
  PRT* getPRT_57(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_57);
  }
  SAC* getSAC_60(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OML_O59_OML_O59_SAC_60);
  }
  OBX* getOBX_61(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_61);
  }
  PRT* getPRT_62(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_62);
  }
  OBX* getOBX_63(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_63);
  }
  PRT* getPRT_64(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_64);
  }
  SAC* getSAC_67(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OML_O59_OML_O59_SAC_67);
  }
  PD1* getPD1_68(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O59_OML_O59_PD1_68);
  }
  PID* getPID_69(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O59_OML_O59_PID_69);
  }
  PRT* getPRT_70(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_70);
  }
  OBX* getOBX_71(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_71);
  }
  PRT* getPRT_72(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_72);
  }
  OBX* getOBX_73(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_73);
  }
  PRT* getPRT_74(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_74);
  }
  SAC* getSAC_77(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OML_O59_OML_O59_SAC_77);
  }
  PD1* getPD1_78(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O59_OML_O59_PD1_78);
  }
  PID* getPID_79(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O59_OML_O59_PID_79);
  }
  PRT* getPRT_80(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_80);
  }
  PRT* getPRT_81(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_81);
  }
  PV1* getPV1_82(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OML_O59_OML_O59_PV1_82);
  }
  PV2* getPV2_83(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OML_O59_OML_O59_PV2_83);
  }
  OBX* getOBX_84(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_84);
  }
  PRT* getPRT_85(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_85);
  }
  OBX* getOBX_86(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_86);
  }
  PRT* getPRT_87(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_87);
  }
  SAC* getSAC_90(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OML_O59_OML_O59_SAC_90);
  }
  PD1* getPD1_91(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O59_OML_O59_PD1_91);
  }
  PID* getPID_92(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O59_OML_O59_PID_92);
  }
  PRT* getPRT_93(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_93);
  }
  PRT* getPRT_94(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_94);
  }
  PV1* getPV1_95(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OML_O59_OML_O59_PV1_95);
  }
  PV2* getPV2_96(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OML_O59_OML_O59_PV2_96);
  }
  NTE* getNTE_100(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O59_OML_O59_NTE_100);
  }
  OBR* getOBR_101(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OML_O59_OML_O59_OBR_101);
  }
  ORC* getORC_102(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OML_O59_OML_O59_ORC_102);
  }
  PRT* getPRT_103(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_103);
  }
  OBX* getOBX_104(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_104);
  }
  PRT* getPRT_105(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_105);
  }
  OBX* getOBX_106(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_106);
  }
  PRT* getPRT_107(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_107);
  }
  DEV* getDEV_108(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O59_OML_O59_DEV_108);
  }
  PRT* getPRT_109(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_109);
  }
  OBX* getOBX_110(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_110);
  }
  PRT* getPRT_111(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_111);
  }
  DEV* getDEV_112(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O59_OML_O59_DEV_112);
  }
  PRT* getPRT_113(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_113);
  }
  TQ1* getTQ1_114(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OML_O59_OML_O59_TQ1_114);
  }
  TQ2* getTQ2_115(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OML_O59_OML_O59_TQ2_115);
  }
  OBX* getOBX_116(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_116);
  }
  PRT* getPRT_117(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_117);
  }
  DEV* getDEV_118(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O59_OML_O59_DEV_118);
  }
  PRT* getPRT_119(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_119);
  }
  TQ1* getTQ1_120(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OML_O59_OML_O59_TQ1_120);
  }
  TQ2* getTQ2_121(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OML_O59_OML_O59_TQ2_121);
  }
  NTE* getNTE_122(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O59_OML_O59_NTE_122);
  }
  OBX* getOBX_123(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_123);
  }
  PRT* getPRT_124(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_124);
  }
  NTE* getNTE_127(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O59_OML_O59_NTE_127);
  }
  SPM* getSPM_128(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, OML_O59_OML_O59_SPM_128);
  }
  AL1* getAL1_132(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OML_O59_OML_O59_AL1_132);
  }
  NTE* getNTE_133(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O59_OML_O59_NTE_133);
  }
  OBX* getOBX_134(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_134);
  }
  PRT* getPRT_135(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_135);
  }
  TCD* getTCD_136(size_t index = 0) {
    return (TCD*)this->getObjectSafe(index, OML_O59_OML_O59_TCD_136);
  }
  OBX* getOBX_137(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_137);
  }
  PRT* getPRT_138(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_138);
  }
  OBX* getOBX_139(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_139);
  }
  PRT* getPRT_140(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_140);
  }
  SAC* getSAC_143(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OML_O59_OML_O59_SAC_143);
  }
  OBX* getOBX_144(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_144);
  }
  PRT* getPRT_145(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_145);
  }
  OBX* getOBX_146(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_146);
  }
  PRT* getPRT_147(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_147);
  }
  SAC* getSAC_150(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OML_O59_OML_O59_SAC_150);
  }
  PD1* getPD1_151(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O59_OML_O59_PD1_151);
  }
  PID* getPID_152(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O59_OML_O59_PID_152);
  }
  PRT* getPRT_153(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_153);
  }
  OBX* getOBX_154(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_154);
  }
  PRT* getPRT_155(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_155);
  }
  OBX* getOBX_156(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_156);
  }
  PRT* getPRT_157(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_157);
  }
  SAC* getSAC_160(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OML_O59_OML_O59_SAC_160);
  }
  PD1* getPD1_161(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O59_OML_O59_PD1_161);
  }
  PID* getPID_162(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O59_OML_O59_PID_162);
  }
  PRT* getPRT_163(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_163);
  }
  PRT* getPRT_164(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_164);
  }
  PV1* getPV1_165(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OML_O59_OML_O59_PV1_165);
  }
  PV2* getPV2_166(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OML_O59_OML_O59_PV2_166);
  }
  OBX* getOBX_167(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_167);
  }
  PRT* getPRT_168(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_168);
  }
  OBX* getOBX_169(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_169);
  }
  PRT* getPRT_170(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_170);
  }
  SAC* getSAC_173(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OML_O59_OML_O59_SAC_173);
  }
  PD1* getPD1_174(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O59_OML_O59_PD1_174);
  }
  PID* getPID_175(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O59_OML_O59_PID_175);
  }
  PRT* getPRT_176(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_176);
  }
  PRT* getPRT_177(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_177);
  }
  PV1* getPV1_178(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OML_O59_OML_O59_PV1_178);
  }
  PV2* getPV2_179(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OML_O59_OML_O59_PV2_179);
  }
  NTE* getNTE_183(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O59_OML_O59_NTE_183);
  }
  OBR* getOBR_184(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OML_O59_OML_O59_OBR_184);
  }
  ORC* getORC_185(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OML_O59_OML_O59_ORC_185);
  }
  PRT* getPRT_186(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_186);
  }
  OBX* getOBX_187(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_187);
  }
  PRT* getPRT_188(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_188);
  }
  OBX* getOBX_189(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_189);
  }
  PRT* getPRT_190(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_190);
  }
  DEV* getDEV_191(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O59_OML_O59_DEV_191);
  }
  PRT* getPRT_192(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_192);
  }
  OBX* getOBX_193(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_193);
  }
  PRT* getPRT_194(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_194);
  }
  DEV* getDEV_195(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O59_OML_O59_DEV_195);
  }
  PRT* getPRT_196(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_196);
  }
  TQ1* getTQ1_197(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OML_O59_OML_O59_TQ1_197);
  }
  TQ2* getTQ2_198(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OML_O59_OML_O59_TQ2_198);
  }
  OBX* getOBX_199(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_199);
  }
  PRT* getPRT_200(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_200);
  }
  DEV* getDEV_201(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O59_OML_O59_DEV_201);
  }
  PRT* getPRT_202(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_202);
  }
  TQ1* getTQ1_203(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OML_O59_OML_O59_TQ1_203);
  }
  TQ2* getTQ2_204(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OML_O59_OML_O59_TQ2_204);
  }
  NTE* getNTE_205(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O59_OML_O59_NTE_205);
  }
  OBX* getOBX_206(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O59_OML_O59_OBX_206);
  }
  PRT* getPRT_207(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_207);
  }
  AL1* getAL1_210(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OML_O59_OML_O59_AL1_210);
  }
  GT1* getGT1_211(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, OML_O59_OML_O59_GT1_211);
  }
  NK1* getNK1_212(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, OML_O59_OML_O59_NK1_212);
  }
  NTE* getNTE_213(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O59_OML_O59_NTE_213);
  }
  PD1* getPD1_214(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O59_OML_O59_PD1_214);
  }
  PID* getPID_215(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O59_OML_O59_PID_215);
  }
  PRT* getPRT_216(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_216);
  }
  PRT* getPRT_217(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_217);
  }
  PV1* getPV1_218(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OML_O59_OML_O59_PV1_218);
  }
  PV2* getPV2_219(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OML_O59_OML_O59_PV2_219);
  }
  PRT* getPRT_220(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O59_OML_O59_PRT_220);
  }
  PV1* getPV1_221(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OML_O59_OML_O59_PV1_221);
  }
  PV2* getPV2_222(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OML_O59_OML_O59_PV2_222);
  }
  IN1* getIN1_223(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OML_O59_OML_O59_IN1_223);
  }
  IN2* getIN2_224(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OML_O59_OML_O59_IN2_224);
  }
  IN3* getIN3_225(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OML_O59_OML_O59_IN3_225);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_5(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_NTE_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBLG_10(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_BLG_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_11(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_CTI_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFT1_12(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_FT1_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_13(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_NTE_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_14(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_ORC_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_15(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_16(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_TQ1_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_17(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_TQ2_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_18(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_TQ1_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_19(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_TQ2_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_23(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_CTD_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_24(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_DG1_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIPC_25(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_IPC_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_26(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_NTE_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_27(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBR_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_28(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isREL_29(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_REL_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSGH_30(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_SGH_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSGT_31(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_SGT_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTCD_32(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_TCD_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_35(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_NTE_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_36(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_SPM_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_37(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_38(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_39(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_40(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_43(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_SAC_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_44(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_45(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_48(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_NTE_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_49(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_SPM_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_53(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_AL1_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_54(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_55(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_56(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_57(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_60(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_SAC_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_61(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_62(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_63(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_64(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_67(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_SAC_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_68(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PD1_68) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_69(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PID_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_70(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_70) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_71(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_72(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_73(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_74(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_77(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_SAC_77) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_78(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PD1_78) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_79(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PID_79) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_80(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_80) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_81(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_81) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_82(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PV1_82) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_83(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PV2_83) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_84(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_84) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_85(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_85) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_86(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_86) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_87(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_87) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_90(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_SAC_90) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_91(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PD1_91) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_92(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PID_92) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_93(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_93) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_94(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_94) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_95(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PV1_95) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_96(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PV2_96) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_100(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_NTE_100) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_101(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBR_101) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_102(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_ORC_102) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_103(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_103) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_104(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_104) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_105(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_105) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_106(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_106) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_107(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_107) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_108(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_DEV_108) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_109(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_109) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_110(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_110) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_111(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_111) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_112(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_DEV_112) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_113(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_113) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_114(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_TQ1_114) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_115(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_TQ2_115) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_116(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_116) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_117(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_117) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_118(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_DEV_118) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_119(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_119) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_120(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_TQ1_120) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_121(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_TQ2_121) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_122(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_NTE_122) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_123(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_123) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_124(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_124) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_127(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_NTE_127) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_128(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_SPM_128) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_132(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_AL1_132) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_133(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_NTE_133) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_134(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_134) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_135(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_135) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTCD_136(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_TCD_136) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_137(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_137) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_138(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_138) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_139(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_139) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_140(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_140) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_143(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_SAC_143) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_144(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_144) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_145(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_145) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_146(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_146) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_147(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_147) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_150(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_SAC_150) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_151(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PD1_151) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_152(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PID_152) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_153(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_153) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_154(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_154) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_155(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_155) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_156(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_156) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_157(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_157) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_160(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_SAC_160) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_161(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PD1_161) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_162(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PID_162) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_163(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_163) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_164(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_164) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_165(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PV1_165) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_166(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PV2_166) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_167(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_167) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_168(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_168) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_169(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_169) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_170(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_170) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_173(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_SAC_173) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_174(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PD1_174) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_175(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PID_175) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_176(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_176) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_177(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_177) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_178(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PV1_178) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_179(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PV2_179) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_183(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_NTE_183) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_184(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBR_184) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_185(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_ORC_185) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_186(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_186) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_187(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_187) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_188(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_188) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_189(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_189) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_190(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_190) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_191(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_DEV_191) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_192(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_192) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_193(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_193) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_194(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_194) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_195(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_DEV_195) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_196(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_196) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_197(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_TQ1_197) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_198(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_TQ2_198) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_199(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_199) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_200(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_200) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_201(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_DEV_201) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_202(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_202) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_203(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_TQ1_203) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_204(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_TQ2_204) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_205(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_NTE_205) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_206(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_OBX_206) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_207(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_207) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_210(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_AL1_210) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_211(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_GT1_211) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_212(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_NK1_212) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_213(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_NTE_213) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_214(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PD1_214) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_215(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PID_215) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_216(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_216) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_217(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_217) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_218(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PV1_218) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_219(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PV2_219) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_220(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PRT_220) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_221(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PV1_221) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_222(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_PV2_222) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_223(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_IN1_223) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_224(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_IN2_224) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_225(size_t index = 0) {
    try {
      return this->getObject(index, OML_O59_OML_O59_IN3_225) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OML_O59_OML_O59_ */
} /* namespace HL7_29 */
#endif /*  __OML_O59_OML_O59__29_H__ */
