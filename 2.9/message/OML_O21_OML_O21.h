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


#ifndef __OML_O21_OML_O21__29_H__
#define __OML_O21_OML_O21__29_H__

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
struct OML_O21_OML_O21_PATIENT; /* PATIENT */
struct OML_O21_OML_O21_ORDER; /* ORDER */
struct OML_O21_OML_O21_DEVICE; /* DEVICE */
struct OML_O21_OML_O21_TIMING; /* TIMING */
struct OML_O21_OML_O21_OBSERVATION_REQUEST; /* OBSERVATION_REQUEST */
struct OML_O21_OML_O21_SPECIMEN; /* SPECIMEN */
struct OML_O21_OML_O21_PRIOR_RESULT; /* PRIOR_RESULT */
struct OML_O21_OML_O21_OBSERVATION; /* OBSERVATION */
struct OML_O21_OML_O21_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct OML_O21_OML_O21_CONTAINER; /* CONTAINER */
struct OML_O21_OML_O21_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OML_O21_OML_O21_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct OML_O21_OML_O21_CONTAINER; /* CONTAINER */
struct OML_O21_OML_O21_PATIENT_PRIOR; /* PATIENT_PRIOR */
struct OML_O21_OML_O21_PATIENT_VISIT_PRIOR; /* PATIENT_VISIT_PRIOR */
struct OML_O21_OML_O21_ORDER_PRIOR; /* ORDER_PRIOR */
struct OML_O21_OML_O21_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OML_O21_OML_O21_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OML_O21_OML_O21_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OML_O21_OML_O21_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OML_O21_OML_O21_OBSERVATION_PARTICIPATION_PRIOR; /* OBSERVATION_PARTICIPATION_PRIOR */
struct OML_O21_OML_O21_TIMING_PRIOR; /* TIMING_PRIOR */
struct OML_O21_OML_O21_OBSERVATION_PRIOR; /* OBSERVATION_PRIOR */
struct OML_O21_OML_O21_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct OML_O21_OML_O21_CONTAINER; /* CONTAINER */
struct OML_O21_OML_O21_PATIENT_PRIOR; /* PATIENT_PRIOR */
struct OML_O21_OML_O21_PATIENT_VISIT_PRIOR; /* PATIENT_VISIT_PRIOR */
struct OML_O21_OML_O21_ORDER_PRIOR; /* ORDER_PRIOR */
struct OML_O21_OML_O21_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OML_O21_OML_O21_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OML_O21_OML_O21_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OML_O21_OML_O21_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OML_O21_OML_O21_OBSERVATION_PARTICIPATION_PRIOR; /* OBSERVATION_PARTICIPATION_PRIOR */
struct OML_O21_OML_O21_TIMING_PRIOR; /* TIMING_PRIOR */
struct OML_O21_OML_O21_OBSERVATION_PRIOR; /* OBSERVATION_PRIOR */
struct OML_O21_OML_O21_INSURANCE; /* INSURANCE */
struct OML_O21_OML_O21_OCCUPATIONAL_DATA_FOR_HEALTH; /* OCCUPATIONAL_DATA_FOR_HEALTH */
struct OML_O21_OML_O21_NEXT_OF_KIN; /* NEXT_OF_KIN */
struct OML_O21_OML_O21_PATIENT_VISIT; /* PATIENT_VISIT */

/*  */
struct OML_O21_OML_O21 : public HL7Message {
  OML_O21_OML_O21() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OML_O21_OML_O21_MSH_1,
    OML_O21_OML_O21_ARV_2,
    OML_O21_OML_O21_SFT_3,
    OML_O21_OML_O21_UAC_4,
    OML_O21_OML_O21_NTE_5,
    OML_O21_OML_O21_DEV_9,
    OML_O21_OML_O21_OBX_10,
    OML_O21_OML_O21_BLG_13,
    OML_O21_OML_O21_CTI_14,
    OML_O21_OML_O21_FT1_15,
    OML_O21_OML_O21_NTE_16,
    OML_O21_OML_O21_ORC_17,
    OML_O21_OML_O21_PRT_18,
    OML_O21_OML_O21_TQ1_19,
    OML_O21_OML_O21_TQ2_20,
    OML_O21_OML_O21_TQ1_21,
    OML_O21_OML_O21_TQ2_22,
    OML_O21_OML_O21_CTD_26,
    OML_O21_OML_O21_DG1_27,
    OML_O21_OML_O21_IPC_28,
    OML_O21_OML_O21_NTE_29,
    OML_O21_OML_O21_OBR_30,
    OML_O21_OML_O21_PRT_31,
    OML_O21_OML_O21_REL_32,
    OML_O21_OML_O21_SGH_33,
    OML_O21_OML_O21_SGT_34,
    OML_O21_OML_O21_TCD_35,
    OML_O21_OML_O21_NTE_38,
    OML_O21_OML_O21_SPM_39,
    OML_O21_OML_O21_OBX_40,
    OML_O21_OML_O21_PRT_41,
    OML_O21_OML_O21_OBX_42,
    OML_O21_OML_O21_PRT_43,
    OML_O21_OML_O21_SAC_46,
    OML_O21_OML_O21_OBX_47,
    OML_O21_OML_O21_PRT_48,
    OML_O21_OML_O21_NTE_51,
    OML_O21_OML_O21_SPM_52,
    OML_O21_OML_O21_AL1_56,
    OML_O21_OML_O21_OBX_57,
    OML_O21_OML_O21_PRT_58,
    OML_O21_OML_O21_OBX_59,
    OML_O21_OML_O21_PRT_60,
    OML_O21_OML_O21_SAC_63,
    OML_O21_OML_O21_OBX_64,
    OML_O21_OML_O21_PRT_65,
    OML_O21_OML_O21_OBX_66,
    OML_O21_OML_O21_PRT_67,
    OML_O21_OML_O21_SAC_70,
    OML_O21_OML_O21_ARV_71,
    OML_O21_OML_O21_PD1_72,
    OML_O21_OML_O21_PID_73,
    OML_O21_OML_O21_PRT_74,
    OML_O21_OML_O21_OBX_75,
    OML_O21_OML_O21_PRT_76,
    OML_O21_OML_O21_OBX_77,
    OML_O21_OML_O21_PRT_78,
    OML_O21_OML_O21_SAC_81,
    OML_O21_OML_O21_ARV_82,
    OML_O21_OML_O21_PD1_83,
    OML_O21_OML_O21_PID_84,
    OML_O21_OML_O21_PRT_85,
    OML_O21_OML_O21_PRT_86,
    OML_O21_OML_O21_PV1_87,
    OML_O21_OML_O21_PV2_88,
    OML_O21_OML_O21_OBX_89,
    OML_O21_OML_O21_PRT_90,
    OML_O21_OML_O21_OBX_91,
    OML_O21_OML_O21_PRT_92,
    OML_O21_OML_O21_SAC_95,
    OML_O21_OML_O21_ARV_96,
    OML_O21_OML_O21_PD1_97,
    OML_O21_OML_O21_PID_98,
    OML_O21_OML_O21_PRT_99,
    OML_O21_OML_O21_PRT_100,
    OML_O21_OML_O21_PV1_101,
    OML_O21_OML_O21_PV2_102,
    OML_O21_OML_O21_NTE_106,
    OML_O21_OML_O21_OBR_107,
    OML_O21_OML_O21_ORC_108,
    OML_O21_OML_O21_PRT_109,
    OML_O21_OML_O21_OBX_110,
    OML_O21_OML_O21_PRT_111,
    OML_O21_OML_O21_OBX_112,
    OML_O21_OML_O21_PRT_113,
    OML_O21_OML_O21_DEV_114,
    OML_O21_OML_O21_PRT_115,
    OML_O21_OML_O21_OBX_116,
    OML_O21_OML_O21_PRT_117,
    OML_O21_OML_O21_DEV_118,
    OML_O21_OML_O21_PRT_119,
    OML_O21_OML_O21_TQ1_120,
    OML_O21_OML_O21_TQ2_121,
    OML_O21_OML_O21_OBX_122,
    OML_O21_OML_O21_PRT_123,
    OML_O21_OML_O21_DEV_124,
    OML_O21_OML_O21_PRT_125,
    OML_O21_OML_O21_TQ1_126,
    OML_O21_OML_O21_TQ2_127,
    OML_O21_OML_O21_NTE_128,
    OML_O21_OML_O21_OBX_129,
    OML_O21_OML_O21_PRT_130,
    OML_O21_OML_O21_NTE_133,
    OML_O21_OML_O21_SPM_134,
    OML_O21_OML_O21_AL1_138,
    OML_O21_OML_O21_NTE_139,
    OML_O21_OML_O21_OBX_140,
    OML_O21_OML_O21_PRT_141,
    OML_O21_OML_O21_TCD_142,
    OML_O21_OML_O21_OBX_143,
    OML_O21_OML_O21_PRT_144,
    OML_O21_OML_O21_OBX_145,
    OML_O21_OML_O21_PRT_146,
    OML_O21_OML_O21_SAC_149,
    OML_O21_OML_O21_OBX_150,
    OML_O21_OML_O21_PRT_151,
    OML_O21_OML_O21_OBX_152,
    OML_O21_OML_O21_PRT_153,
    OML_O21_OML_O21_SAC_156,
    OML_O21_OML_O21_ARV_157,
    OML_O21_OML_O21_PD1_158,
    OML_O21_OML_O21_PID_159,
    OML_O21_OML_O21_PRT_160,
    OML_O21_OML_O21_OBX_161,
    OML_O21_OML_O21_PRT_162,
    OML_O21_OML_O21_OBX_163,
    OML_O21_OML_O21_PRT_164,
    OML_O21_OML_O21_SAC_167,
    OML_O21_OML_O21_ARV_168,
    OML_O21_OML_O21_PD1_169,
    OML_O21_OML_O21_PID_170,
    OML_O21_OML_O21_PRT_171,
    OML_O21_OML_O21_PRT_172,
    OML_O21_OML_O21_PV1_173,
    OML_O21_OML_O21_PV2_174,
    OML_O21_OML_O21_OBX_175,
    OML_O21_OML_O21_PRT_176,
    OML_O21_OML_O21_OBX_177,
    OML_O21_OML_O21_PRT_178,
    OML_O21_OML_O21_SAC_181,
    OML_O21_OML_O21_ARV_182,
    OML_O21_OML_O21_PD1_183,
    OML_O21_OML_O21_PID_184,
    OML_O21_OML_O21_PRT_185,
    OML_O21_OML_O21_PRT_186,
    OML_O21_OML_O21_PV1_187,
    OML_O21_OML_O21_PV2_188,
    OML_O21_OML_O21_NTE_192,
    OML_O21_OML_O21_OBR_193,
    OML_O21_OML_O21_ORC_194,
    OML_O21_OML_O21_PRT_195,
    OML_O21_OML_O21_OBX_196,
    OML_O21_OML_O21_PRT_197,
    OML_O21_OML_O21_OBX_198,
    OML_O21_OML_O21_PRT_199,
    OML_O21_OML_O21_DEV_200,
    OML_O21_OML_O21_PRT_201,
    OML_O21_OML_O21_OBX_202,
    OML_O21_OML_O21_PRT_203,
    OML_O21_OML_O21_DEV_204,
    OML_O21_OML_O21_PRT_205,
    OML_O21_OML_O21_TQ1_206,
    OML_O21_OML_O21_TQ2_207,
    OML_O21_OML_O21_OBX_208,
    OML_O21_OML_O21_PRT_209,
    OML_O21_OML_O21_DEV_210,
    OML_O21_OML_O21_PRT_211,
    OML_O21_OML_O21_TQ1_212,
    OML_O21_OML_O21_TQ2_213,
    OML_O21_OML_O21_NTE_214,
    OML_O21_OML_O21_OBX_215,
    OML_O21_OML_O21_PRT_216,
    OML_O21_OML_O21_AL1_221,
    OML_O21_OML_O21_ARV_222,
    OML_O21_OML_O21_GT1_223,
    OML_O21_OML_O21_NTE_224,
    OML_O21_OML_O21_PD1_225,
    OML_O21_OML_O21_PID_226,
    OML_O21_OML_O21_PRT_227,
    OML_O21_OML_O21_IN1_228,
    OML_O21_OML_O21_IN2_229,
    OML_O21_OML_O21_IN3_230,
    OML_O21_OML_O21_IN1_231,
    OML_O21_OML_O21_IN2_232,
    OML_O21_OML_O21_IN3_233,
    OML_O21_OML_O21_OH1_234,
    OML_O21_OML_O21_OH2_235,
    OML_O21_OML_O21_OH3_236,
    OML_O21_OML_O21_OH4_237,
    OML_O21_OML_O21_IN1_238,
    OML_O21_OML_O21_IN2_239,
    OML_O21_OML_O21_IN3_240,
    OML_O21_OML_O21_OH1_241,
    OML_O21_OML_O21_OH2_242,
    OML_O21_OML_O21_OH3_243,
    OML_O21_OML_O21_OH4_244,
    OML_O21_OML_O21_NK1_245,
    OML_O21_OML_O21_OH2_246,
    OML_O21_OML_O21_OH3_247,
    OML_O21_OML_O21_IN1_248,
    OML_O21_OML_O21_IN2_249,
    OML_O21_OML_O21_IN3_250,
    OML_O21_OML_O21_OH1_251,
    OML_O21_OML_O21_OH2_252,
    OML_O21_OML_O21_OH3_253,
    OML_O21_OML_O21_OH4_254,
    OML_O21_OML_O21_NK1_255,
    OML_O21_OML_O21_OH2_256,
    OML_O21_OML_O21_OH3_257,
    OML_O21_OML_O21_PRT_258,
    OML_O21_OML_O21_PV1_259,
    OML_O21_OML_O21_PV2_260,
    FIELD_ID_MAX
  };

  const char* className() const { return "OML_O21_OML_O21"; }
  OML_O21_OML_O21* create() const { return new OML_O21_OML_O21(); }

 private:
  /* Initialize object */
  void init() {
    setName("OML_O21_OML_O21");
    addObject<MSH>(OML_O21_OML_O21_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OML_O21_OML_O21_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(OML_O21_OML_O21_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(OML_O21_OML_O21_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OML_O21_OML_O21_NTE_5, "NTE.5", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OML_O21_OML_O21_DEV_9, "DEV.9", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OML_O21_OML_O21_OBX_10, "OBX.10", HL7::optional, HL7::repetition_on);
    addObject<BLG>(OML_O21_OML_O21_BLG_13, "BLG.13", HL7::optional, HL7::repetition_off);
    addObject<CTI>(OML_O21_OML_O21_CTI_14, "CTI.14", HL7::optional, HL7::repetition_on);
    addObject<FT1>(OML_O21_OML_O21_FT1_15, "FT1.15", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O21_OML_O21_NTE_16, "NTE.16", HL7::optional, HL7::repetition_on);
    addObject<ORC>(OML_O21_OML_O21_ORC_17, "ORC.17", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_18, "PRT.18", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OML_O21_OML_O21_TQ1_19, "TQ1.19", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OML_O21_OML_O21_TQ2_20, "TQ2.20", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OML_O21_OML_O21_TQ1_21, "TQ1.21", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OML_O21_OML_O21_TQ2_22, "TQ2.22", HL7::optional, HL7::repetition_on);
    addObject<CTD>(OML_O21_OML_O21_CTD_26, "CTD.26", HL7::optional, HL7::repetition_off);
    addObject<DG1>(OML_O21_OML_O21_DG1_27, "DG1.27", HL7::optional, HL7::repetition_on);
    addObject<IPC>(OML_O21_OML_O21_IPC_28, "IPC.28", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OML_O21_OML_O21_NTE_29, "NTE.29", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OML_O21_OML_O21_OBR_30, "OBR.30", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_31, "PRT.31", HL7::optional, HL7::repetition_on);
    addObject<REL>(OML_O21_OML_O21_REL_32, "REL.32", HL7::optional, HL7::repetition_off);
    addObject<SGH>(OML_O21_OML_O21_SGH_33, "SGH.33", HL7::optional, HL7::repetition_off);
    addObject<SGT>(OML_O21_OML_O21_SGT_34, "SGT.34", HL7::optional, HL7::repetition_off);
    addObject<TCD>(OML_O21_OML_O21_TCD_35, "TCD.35", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OML_O21_OML_O21_NTE_38, "NTE.38", HL7::optional, HL7::repetition_on);
    addObject<SPM>(OML_O21_OML_O21_SPM_39, "SPM.39", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OML_O21_OML_O21_OBX_40, "OBX.40", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_41, "PRT.41", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O21_OML_O21_OBX_42, "OBX.42", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_43, "PRT.43", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OML_O21_OML_O21_SAC_46, "SAC.46", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OML_O21_OML_O21_OBX_47, "OBX.47", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_48, "PRT.48", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O21_OML_O21_NTE_51, "NTE.51", HL7::optional, HL7::repetition_on);
    addObject<SPM>(OML_O21_OML_O21_SPM_52, "SPM.52", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(OML_O21_OML_O21_AL1_56, "AL1.56", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O21_OML_O21_OBX_57, "OBX.57", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_58, "PRT.58", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O21_OML_O21_OBX_59, "OBX.59", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_60, "PRT.60", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OML_O21_OML_O21_SAC_63, "SAC.63", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OML_O21_OML_O21_OBX_64, "OBX.64", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_65, "PRT.65", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O21_OML_O21_OBX_66, "OBX.66", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_67, "PRT.67", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OML_O21_OML_O21_SAC_70, "SAC.70", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OML_O21_OML_O21_ARV_71, "ARV.71", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OML_O21_OML_O21_PD1_72, "PD1.72", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O21_OML_O21_PID_73, "PID.73", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_74, "PRT.74", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O21_OML_O21_OBX_75, "OBX.75", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_76, "PRT.76", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O21_OML_O21_OBX_77, "OBX.77", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_78, "PRT.78", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OML_O21_OML_O21_SAC_81, "SAC.81", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OML_O21_OML_O21_ARV_82, "ARV.82", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OML_O21_OML_O21_PD1_83, "PD1.83", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O21_OML_O21_PID_84, "PID.84", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_85, "PRT.85", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O21_OML_O21_PRT_86, "PRT.86", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OML_O21_OML_O21_PV1_87, "PV1.87", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OML_O21_OML_O21_PV2_88, "PV2.88", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OML_O21_OML_O21_OBX_89, "OBX.89", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_90, "PRT.90", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O21_OML_O21_OBX_91, "OBX.91", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_92, "PRT.92", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OML_O21_OML_O21_SAC_95, "SAC.95", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OML_O21_OML_O21_ARV_96, "ARV.96", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OML_O21_OML_O21_PD1_97, "PD1.97", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O21_OML_O21_PID_98, "PID.98", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_99, "PRT.99", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O21_OML_O21_PRT_100, "PRT.100", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OML_O21_OML_O21_PV1_101, "PV1.101", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OML_O21_OML_O21_PV2_102, "PV2.102", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OML_O21_OML_O21_NTE_106, "NTE.106", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OML_O21_OML_O21_OBR_107, "OBR.107", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(OML_O21_OML_O21_ORC_108, "ORC.108", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_109, "PRT.109", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O21_OML_O21_OBX_110, "OBX.110", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_111, "PRT.111", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O21_OML_O21_OBX_112, "OBX.112", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_113, "PRT.113", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OML_O21_OML_O21_DEV_114, "DEV.114", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O21_OML_O21_PRT_115, "PRT.115", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OML_O21_OML_O21_OBX_116, "OBX.116", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_117, "PRT.117", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OML_O21_OML_O21_DEV_118, "DEV.118", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O21_OML_O21_PRT_119, "PRT.119", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(OML_O21_OML_O21_TQ1_120, "TQ1.120", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OML_O21_OML_O21_TQ2_121, "TQ2.121", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O21_OML_O21_OBX_122, "OBX.122", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_123, "PRT.123", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OML_O21_OML_O21_DEV_124, "DEV.124", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O21_OML_O21_PRT_125, "PRT.125", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(OML_O21_OML_O21_TQ1_126, "TQ1.126", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OML_O21_OML_O21_TQ2_127, "TQ2.127", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O21_OML_O21_NTE_128, "NTE.128", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O21_OML_O21_OBX_129, "OBX.129", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_130, "PRT.130", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O21_OML_O21_NTE_133, "NTE.133", HL7::optional, HL7::repetition_on);
    addObject<SPM>(OML_O21_OML_O21_SPM_134, "SPM.134", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(OML_O21_OML_O21_AL1_138, "AL1.138", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O21_OML_O21_NTE_139, "NTE.139", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O21_OML_O21_OBX_140, "OBX.140", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_141, "PRT.141", HL7::optional, HL7::repetition_on);
    addObject<TCD>(OML_O21_OML_O21_TCD_142, "TCD.142", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OML_O21_OML_O21_OBX_143, "OBX.143", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_144, "PRT.144", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O21_OML_O21_OBX_145, "OBX.145", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_146, "PRT.146", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OML_O21_OML_O21_SAC_149, "SAC.149", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OML_O21_OML_O21_OBX_150, "OBX.150", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_151, "PRT.151", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O21_OML_O21_OBX_152, "OBX.152", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_153, "PRT.153", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OML_O21_OML_O21_SAC_156, "SAC.156", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OML_O21_OML_O21_ARV_157, "ARV.157", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OML_O21_OML_O21_PD1_158, "PD1.158", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O21_OML_O21_PID_159, "PID.159", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_160, "PRT.160", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O21_OML_O21_OBX_161, "OBX.161", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_162, "PRT.162", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O21_OML_O21_OBX_163, "OBX.163", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_164, "PRT.164", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OML_O21_OML_O21_SAC_167, "SAC.167", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OML_O21_OML_O21_ARV_168, "ARV.168", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OML_O21_OML_O21_PD1_169, "PD1.169", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O21_OML_O21_PID_170, "PID.170", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_171, "PRT.171", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O21_OML_O21_PRT_172, "PRT.172", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OML_O21_OML_O21_PV1_173, "PV1.173", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OML_O21_OML_O21_PV2_174, "PV2.174", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OML_O21_OML_O21_OBX_175, "OBX.175", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_176, "PRT.176", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O21_OML_O21_OBX_177, "OBX.177", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_178, "PRT.178", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OML_O21_OML_O21_SAC_181, "SAC.181", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OML_O21_OML_O21_ARV_182, "ARV.182", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OML_O21_OML_O21_PD1_183, "PD1.183", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O21_OML_O21_PID_184, "PID.184", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_185, "PRT.185", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O21_OML_O21_PRT_186, "PRT.186", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OML_O21_OML_O21_PV1_187, "PV1.187", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OML_O21_OML_O21_PV2_188, "PV2.188", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OML_O21_OML_O21_NTE_192, "NTE.192", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OML_O21_OML_O21_OBR_193, "OBR.193", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(OML_O21_OML_O21_ORC_194, "ORC.194", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_195, "PRT.195", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O21_OML_O21_OBX_196, "OBX.196", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_197, "PRT.197", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O21_OML_O21_OBX_198, "OBX.198", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_199, "PRT.199", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OML_O21_OML_O21_DEV_200, "DEV.200", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O21_OML_O21_PRT_201, "PRT.201", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OML_O21_OML_O21_OBX_202, "OBX.202", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_203, "PRT.203", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OML_O21_OML_O21_DEV_204, "DEV.204", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O21_OML_O21_PRT_205, "PRT.205", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(OML_O21_OML_O21_TQ1_206, "TQ1.206", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OML_O21_OML_O21_TQ2_207, "TQ2.207", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O21_OML_O21_OBX_208, "OBX.208", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_209, "PRT.209", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OML_O21_OML_O21_DEV_210, "DEV.210", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O21_OML_O21_PRT_211, "PRT.211", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(OML_O21_OML_O21_TQ1_212, "TQ1.212", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OML_O21_OML_O21_TQ2_213, "TQ2.213", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O21_OML_O21_NTE_214, "NTE.214", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O21_OML_O21_OBX_215, "OBX.215", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_216, "PRT.216", HL7::optional, HL7::repetition_on);
    addObject<AL1>(OML_O21_OML_O21_AL1_221, "AL1.221", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OML_O21_OML_O21_ARV_222, "ARV.222", HL7::optional, HL7::repetition_on);
    addObject<GT1>(OML_O21_OML_O21_GT1_223, "GT1.223", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OML_O21_OML_O21_NTE_224, "NTE.224", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OML_O21_OML_O21_PD1_225, "PD1.225", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O21_OML_O21_PID_226, "PID.226", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_227, "PRT.227", HL7::optional, HL7::repetition_on);
    addObject<IN1>(OML_O21_OML_O21_IN1_228, "IN1.228", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OML_O21_OML_O21_IN2_229, "IN2.229", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OML_O21_OML_O21_IN3_230, "IN3.230", HL7::optional, HL7::repetition_off);
    addObject<IN1>(OML_O21_OML_O21_IN1_231, "IN1.231", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OML_O21_OML_O21_IN2_232, "IN2.232", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OML_O21_OML_O21_IN3_233, "IN3.233", HL7::optional, HL7::repetition_off);
    addObject<OH1>(OML_O21_OML_O21_OH1_234, "OH1.234", HL7::optional, HL7::repetition_on);
    addObject<OH2>(OML_O21_OML_O21_OH2_235, "OH2.235", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OML_O21_OML_O21_OH3_236, "OH3.236", HL7::optional, HL7::repetition_off);
    addObject<OH4>(OML_O21_OML_O21_OH4_237, "OH4.237", HL7::optional, HL7::repetition_on);
    addObject<IN1>(OML_O21_OML_O21_IN1_238, "IN1.238", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OML_O21_OML_O21_IN2_239, "IN2.239", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OML_O21_OML_O21_IN3_240, "IN3.240", HL7::optional, HL7::repetition_off);
    addObject<OH1>(OML_O21_OML_O21_OH1_241, "OH1.241", HL7::optional, HL7::repetition_on);
    addObject<OH2>(OML_O21_OML_O21_OH2_242, "OH2.242", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OML_O21_OML_O21_OH3_243, "OH3.243", HL7::optional, HL7::repetition_off);
    addObject<OH4>(OML_O21_OML_O21_OH4_244, "OH4.244", HL7::optional, HL7::repetition_on);
    addObject<NK1>(OML_O21_OML_O21_NK1_245, "NK1.245", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(OML_O21_OML_O21_OH2_246, "OH2.246", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OML_O21_OML_O21_OH3_247, "OH3.247", HL7::optional, HL7::repetition_off);
    addObject<IN1>(OML_O21_OML_O21_IN1_248, "IN1.248", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OML_O21_OML_O21_IN2_249, "IN2.249", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OML_O21_OML_O21_IN3_250, "IN3.250", HL7::optional, HL7::repetition_off);
    addObject<OH1>(OML_O21_OML_O21_OH1_251, "OH1.251", HL7::optional, HL7::repetition_on);
    addObject<OH2>(OML_O21_OML_O21_OH2_252, "OH2.252", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OML_O21_OML_O21_OH3_253, "OH3.253", HL7::optional, HL7::repetition_off);
    addObject<OH4>(OML_O21_OML_O21_OH4_254, "OH4.254", HL7::optional, HL7::repetition_on);
    addObject<NK1>(OML_O21_OML_O21_NK1_255, "NK1.255", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(OML_O21_OML_O21_OH2_256, "OH2.256", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OML_O21_OML_O21_OH3_257, "OH3.257", HL7::optional, HL7::repetition_off);
    addObject<PRT>(OML_O21_OML_O21_PRT_258, "PRT.258", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OML_O21_OML_O21_PV1_259, "PV1.259", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OML_O21_OML_O21_PV2_260, "PV2.260", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OML_O21_OML_O21_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O21_OML_O21_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, OML_O21_OML_O21_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, OML_O21_OML_O21_UAC_4);
  }
  NTE* getNTE_5(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O21_OML_O21_NTE_5);
  }
  DEV* getDEV_9(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O21_OML_O21_DEV_9);
  }
  OBX* getOBX_10(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_10);
  }
  BLG* getBLG_13(size_t index = 0) {
    return (BLG*)this->getObjectSafe(index, OML_O21_OML_O21_BLG_13);
  }
  CTI* getCTI_14(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, OML_O21_OML_O21_CTI_14);
  }
  FT1* getFT1_15(size_t index = 0) {
    return (FT1*)this->getObjectSafe(index, OML_O21_OML_O21_FT1_15);
  }
  NTE* getNTE_16(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O21_OML_O21_NTE_16);
  }
  ORC* getORC_17(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OML_O21_OML_O21_ORC_17);
  }
  PRT* getPRT_18(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_18);
  }
  TQ1* getTQ1_19(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OML_O21_OML_O21_TQ1_19);
  }
  TQ2* getTQ2_20(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OML_O21_OML_O21_TQ2_20);
  }
  TQ1* getTQ1_21(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OML_O21_OML_O21_TQ1_21);
  }
  TQ2* getTQ2_22(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OML_O21_OML_O21_TQ2_22);
  }
  CTD* getCTD_26(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, OML_O21_OML_O21_CTD_26);
  }
  DG1* getDG1_27(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, OML_O21_OML_O21_DG1_27);
  }
  IPC* getIPC_28(size_t index = 0) {
    return (IPC*)this->getObjectSafe(index, OML_O21_OML_O21_IPC_28);
  }
  NTE* getNTE_29(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O21_OML_O21_NTE_29);
  }
  OBR* getOBR_30(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OML_O21_OML_O21_OBR_30);
  }
  PRT* getPRT_31(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_31);
  }
  REL* getREL_32(size_t index = 0) {
    return (REL*)this->getObjectSafe(index, OML_O21_OML_O21_REL_32);
  }
  SGH* getSGH_33(size_t index = 0) {
    return (SGH*)this->getObjectSafe(index, OML_O21_OML_O21_SGH_33);
  }
  SGT* getSGT_34(size_t index = 0) {
    return (SGT*)this->getObjectSafe(index, OML_O21_OML_O21_SGT_34);
  }
  TCD* getTCD_35(size_t index = 0) {
    return (TCD*)this->getObjectSafe(index, OML_O21_OML_O21_TCD_35);
  }
  NTE* getNTE_38(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O21_OML_O21_NTE_38);
  }
  SPM* getSPM_39(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, OML_O21_OML_O21_SPM_39);
  }
  OBX* getOBX_40(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_40);
  }
  PRT* getPRT_41(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_41);
  }
  OBX* getOBX_42(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_42);
  }
  PRT* getPRT_43(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_43);
  }
  SAC* getSAC_46(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OML_O21_OML_O21_SAC_46);
  }
  OBX* getOBX_47(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_47);
  }
  PRT* getPRT_48(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_48);
  }
  NTE* getNTE_51(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O21_OML_O21_NTE_51);
  }
  SPM* getSPM_52(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, OML_O21_OML_O21_SPM_52);
  }
  AL1* getAL1_56(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OML_O21_OML_O21_AL1_56);
  }
  OBX* getOBX_57(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_57);
  }
  PRT* getPRT_58(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_58);
  }
  OBX* getOBX_59(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_59);
  }
  PRT* getPRT_60(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_60);
  }
  SAC* getSAC_63(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OML_O21_OML_O21_SAC_63);
  }
  OBX* getOBX_64(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_64);
  }
  PRT* getPRT_65(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_65);
  }
  OBX* getOBX_66(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_66);
  }
  PRT* getPRT_67(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_67);
  }
  SAC* getSAC_70(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OML_O21_OML_O21_SAC_70);
  }
  ARV* getARV_71(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O21_OML_O21_ARV_71);
  }
  PD1* getPD1_72(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O21_OML_O21_PD1_72);
  }
  PID* getPID_73(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O21_OML_O21_PID_73);
  }
  PRT* getPRT_74(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_74);
  }
  OBX* getOBX_75(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_75);
  }
  PRT* getPRT_76(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_76);
  }
  OBX* getOBX_77(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_77);
  }
  PRT* getPRT_78(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_78);
  }
  SAC* getSAC_81(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OML_O21_OML_O21_SAC_81);
  }
  ARV* getARV_82(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O21_OML_O21_ARV_82);
  }
  PD1* getPD1_83(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O21_OML_O21_PD1_83);
  }
  PID* getPID_84(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O21_OML_O21_PID_84);
  }
  PRT* getPRT_85(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_85);
  }
  PRT* getPRT_86(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_86);
  }
  PV1* getPV1_87(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OML_O21_OML_O21_PV1_87);
  }
  PV2* getPV2_88(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OML_O21_OML_O21_PV2_88);
  }
  OBX* getOBX_89(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_89);
  }
  PRT* getPRT_90(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_90);
  }
  OBX* getOBX_91(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_91);
  }
  PRT* getPRT_92(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_92);
  }
  SAC* getSAC_95(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OML_O21_OML_O21_SAC_95);
  }
  ARV* getARV_96(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O21_OML_O21_ARV_96);
  }
  PD1* getPD1_97(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O21_OML_O21_PD1_97);
  }
  PID* getPID_98(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O21_OML_O21_PID_98);
  }
  PRT* getPRT_99(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_99);
  }
  PRT* getPRT_100(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_100);
  }
  PV1* getPV1_101(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OML_O21_OML_O21_PV1_101);
  }
  PV2* getPV2_102(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OML_O21_OML_O21_PV2_102);
  }
  NTE* getNTE_106(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O21_OML_O21_NTE_106);
  }
  OBR* getOBR_107(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OML_O21_OML_O21_OBR_107);
  }
  ORC* getORC_108(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OML_O21_OML_O21_ORC_108);
  }
  PRT* getPRT_109(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_109);
  }
  OBX* getOBX_110(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_110);
  }
  PRT* getPRT_111(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_111);
  }
  OBX* getOBX_112(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_112);
  }
  PRT* getPRT_113(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_113);
  }
  DEV* getDEV_114(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O21_OML_O21_DEV_114);
  }
  PRT* getPRT_115(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_115);
  }
  OBX* getOBX_116(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_116);
  }
  PRT* getPRT_117(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_117);
  }
  DEV* getDEV_118(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O21_OML_O21_DEV_118);
  }
  PRT* getPRT_119(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_119);
  }
  TQ1* getTQ1_120(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OML_O21_OML_O21_TQ1_120);
  }
  TQ2* getTQ2_121(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OML_O21_OML_O21_TQ2_121);
  }
  OBX* getOBX_122(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_122);
  }
  PRT* getPRT_123(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_123);
  }
  DEV* getDEV_124(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O21_OML_O21_DEV_124);
  }
  PRT* getPRT_125(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_125);
  }
  TQ1* getTQ1_126(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OML_O21_OML_O21_TQ1_126);
  }
  TQ2* getTQ2_127(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OML_O21_OML_O21_TQ2_127);
  }
  NTE* getNTE_128(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O21_OML_O21_NTE_128);
  }
  OBX* getOBX_129(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_129);
  }
  PRT* getPRT_130(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_130);
  }
  NTE* getNTE_133(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O21_OML_O21_NTE_133);
  }
  SPM* getSPM_134(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, OML_O21_OML_O21_SPM_134);
  }
  AL1* getAL1_138(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OML_O21_OML_O21_AL1_138);
  }
  NTE* getNTE_139(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O21_OML_O21_NTE_139);
  }
  OBX* getOBX_140(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_140);
  }
  PRT* getPRT_141(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_141);
  }
  TCD* getTCD_142(size_t index = 0) {
    return (TCD*)this->getObjectSafe(index, OML_O21_OML_O21_TCD_142);
  }
  OBX* getOBX_143(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_143);
  }
  PRT* getPRT_144(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_144);
  }
  OBX* getOBX_145(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_145);
  }
  PRT* getPRT_146(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_146);
  }
  SAC* getSAC_149(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OML_O21_OML_O21_SAC_149);
  }
  OBX* getOBX_150(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_150);
  }
  PRT* getPRT_151(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_151);
  }
  OBX* getOBX_152(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_152);
  }
  PRT* getPRT_153(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_153);
  }
  SAC* getSAC_156(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OML_O21_OML_O21_SAC_156);
  }
  ARV* getARV_157(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O21_OML_O21_ARV_157);
  }
  PD1* getPD1_158(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O21_OML_O21_PD1_158);
  }
  PID* getPID_159(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O21_OML_O21_PID_159);
  }
  PRT* getPRT_160(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_160);
  }
  OBX* getOBX_161(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_161);
  }
  PRT* getPRT_162(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_162);
  }
  OBX* getOBX_163(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_163);
  }
  PRT* getPRT_164(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_164);
  }
  SAC* getSAC_167(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OML_O21_OML_O21_SAC_167);
  }
  ARV* getARV_168(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O21_OML_O21_ARV_168);
  }
  PD1* getPD1_169(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O21_OML_O21_PD1_169);
  }
  PID* getPID_170(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O21_OML_O21_PID_170);
  }
  PRT* getPRT_171(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_171);
  }
  PRT* getPRT_172(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_172);
  }
  PV1* getPV1_173(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OML_O21_OML_O21_PV1_173);
  }
  PV2* getPV2_174(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OML_O21_OML_O21_PV2_174);
  }
  OBX* getOBX_175(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_175);
  }
  PRT* getPRT_176(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_176);
  }
  OBX* getOBX_177(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_177);
  }
  PRT* getPRT_178(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_178);
  }
  SAC* getSAC_181(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OML_O21_OML_O21_SAC_181);
  }
  ARV* getARV_182(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O21_OML_O21_ARV_182);
  }
  PD1* getPD1_183(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O21_OML_O21_PD1_183);
  }
  PID* getPID_184(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O21_OML_O21_PID_184);
  }
  PRT* getPRT_185(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_185);
  }
  PRT* getPRT_186(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_186);
  }
  PV1* getPV1_187(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OML_O21_OML_O21_PV1_187);
  }
  PV2* getPV2_188(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OML_O21_OML_O21_PV2_188);
  }
  NTE* getNTE_192(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O21_OML_O21_NTE_192);
  }
  OBR* getOBR_193(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OML_O21_OML_O21_OBR_193);
  }
  ORC* getORC_194(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OML_O21_OML_O21_ORC_194);
  }
  PRT* getPRT_195(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_195);
  }
  OBX* getOBX_196(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_196);
  }
  PRT* getPRT_197(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_197);
  }
  OBX* getOBX_198(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_198);
  }
  PRT* getPRT_199(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_199);
  }
  DEV* getDEV_200(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O21_OML_O21_DEV_200);
  }
  PRT* getPRT_201(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_201);
  }
  OBX* getOBX_202(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_202);
  }
  PRT* getPRT_203(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_203);
  }
  DEV* getDEV_204(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O21_OML_O21_DEV_204);
  }
  PRT* getPRT_205(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_205);
  }
  TQ1* getTQ1_206(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OML_O21_OML_O21_TQ1_206);
  }
  TQ2* getTQ2_207(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OML_O21_OML_O21_TQ2_207);
  }
  OBX* getOBX_208(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_208);
  }
  PRT* getPRT_209(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_209);
  }
  DEV* getDEV_210(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O21_OML_O21_DEV_210);
  }
  PRT* getPRT_211(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_211);
  }
  TQ1* getTQ1_212(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OML_O21_OML_O21_TQ1_212);
  }
  TQ2* getTQ2_213(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OML_O21_OML_O21_TQ2_213);
  }
  NTE* getNTE_214(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O21_OML_O21_NTE_214);
  }
  OBX* getOBX_215(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O21_OML_O21_OBX_215);
  }
  PRT* getPRT_216(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_216);
  }
  AL1* getAL1_221(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OML_O21_OML_O21_AL1_221);
  }
  ARV* getARV_222(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O21_OML_O21_ARV_222);
  }
  GT1* getGT1_223(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, OML_O21_OML_O21_GT1_223);
  }
  NTE* getNTE_224(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O21_OML_O21_NTE_224);
  }
  PD1* getPD1_225(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O21_OML_O21_PD1_225);
  }
  PID* getPID_226(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O21_OML_O21_PID_226);
  }
  PRT* getPRT_227(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_227);
  }
  IN1* getIN1_228(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OML_O21_OML_O21_IN1_228);
  }
  IN2* getIN2_229(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OML_O21_OML_O21_IN2_229);
  }
  IN3* getIN3_230(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OML_O21_OML_O21_IN3_230);
  }
  IN1* getIN1_231(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OML_O21_OML_O21_IN1_231);
  }
  IN2* getIN2_232(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OML_O21_OML_O21_IN2_232);
  }
  IN3* getIN3_233(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OML_O21_OML_O21_IN3_233);
  }
  OH1* getOH1_234(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, OML_O21_OML_O21_OH1_234);
  }
  OH2* getOH2_235(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OML_O21_OML_O21_OH2_235);
  }
  OH3* getOH3_236(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OML_O21_OML_O21_OH3_236);
  }
  OH4* getOH4_237(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, OML_O21_OML_O21_OH4_237);
  }
  IN1* getIN1_238(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OML_O21_OML_O21_IN1_238);
  }
  IN2* getIN2_239(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OML_O21_OML_O21_IN2_239);
  }
  IN3* getIN3_240(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OML_O21_OML_O21_IN3_240);
  }
  OH1* getOH1_241(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, OML_O21_OML_O21_OH1_241);
  }
  OH2* getOH2_242(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OML_O21_OML_O21_OH2_242);
  }
  OH3* getOH3_243(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OML_O21_OML_O21_OH3_243);
  }
  OH4* getOH4_244(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, OML_O21_OML_O21_OH4_244);
  }
  NK1* getNK1_245(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, OML_O21_OML_O21_NK1_245);
  }
  OH2* getOH2_246(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OML_O21_OML_O21_OH2_246);
  }
  OH3* getOH3_247(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OML_O21_OML_O21_OH3_247);
  }
  IN1* getIN1_248(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OML_O21_OML_O21_IN1_248);
  }
  IN2* getIN2_249(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OML_O21_OML_O21_IN2_249);
  }
  IN3* getIN3_250(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OML_O21_OML_O21_IN3_250);
  }
  OH1* getOH1_251(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, OML_O21_OML_O21_OH1_251);
  }
  OH2* getOH2_252(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OML_O21_OML_O21_OH2_252);
  }
  OH3* getOH3_253(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OML_O21_OML_O21_OH3_253);
  }
  OH4* getOH4_254(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, OML_O21_OML_O21_OH4_254);
  }
  NK1* getNK1_255(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, OML_O21_OML_O21_NK1_255);
  }
  OH2* getOH2_256(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OML_O21_OML_O21_OH2_256);
  }
  OH3* getOH3_257(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OML_O21_OML_O21_OH3_257);
  }
  PRT* getPRT_258(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O21_OML_O21_PRT_258);
  }
  PV1* getPV1_259(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OML_O21_OML_O21_PV1_259);
  }
  PV2* getPV2_260(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OML_O21_OML_O21_PV2_260);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_5(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_NTE_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_9(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_DEV_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_10(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBLG_13(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_BLG_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_14(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_CTI_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFT1_15(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_FT1_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_16(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_NTE_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_17(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_ORC_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_18(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_19(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_TQ1_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_20(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_TQ2_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_21(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_TQ1_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_22(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_TQ2_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_26(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_CTD_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_27(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_DG1_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIPC_28(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_IPC_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_29(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_NTE_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_30(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBR_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_31(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isREL_32(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_REL_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSGH_33(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_SGH_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSGT_34(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_SGT_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTCD_35(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_TCD_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_38(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_NTE_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_39(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_SPM_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_40(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_41(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_42(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_43(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_46(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_SAC_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_47(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_48(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_51(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_NTE_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_52(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_SPM_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_56(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_AL1_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_57(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_58(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_59(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_60(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_63(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_SAC_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_64(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_65(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_66(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_67(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_70(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_SAC_70) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_71(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_ARV_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_72(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PD1_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_73(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PID_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_74(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_75(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_76(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_77(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_77) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_78(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_78) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_81(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_SAC_81) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_82(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_ARV_82) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_83(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PD1_83) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_84(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PID_84) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_85(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_85) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_86(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_86) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_87(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PV1_87) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_88(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PV2_88) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_89(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_89) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_90(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_90) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_91(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_91) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_92(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_92) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_95(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_SAC_95) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_96(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_ARV_96) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_97(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PD1_97) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_98(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PID_98) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_99(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_99) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_100(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_100) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_101(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PV1_101) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_102(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PV2_102) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_106(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_NTE_106) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_107(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBR_107) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_108(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_ORC_108) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_109(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_109) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_110(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_110) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_111(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_111) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_112(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_112) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_113(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_113) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_114(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_DEV_114) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_115(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_115) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_116(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_116) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_117(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_117) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_118(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_DEV_118) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_119(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_119) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_120(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_TQ1_120) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_121(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_TQ2_121) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_122(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_122) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_123(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_123) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_124(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_DEV_124) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_125(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_125) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_126(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_TQ1_126) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_127(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_TQ2_127) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_128(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_NTE_128) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_129(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_129) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_130(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_130) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_133(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_NTE_133) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_134(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_SPM_134) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_138(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_AL1_138) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_139(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_NTE_139) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_140(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_140) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_141(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_141) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTCD_142(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_TCD_142) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_143(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_143) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_144(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_144) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_145(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_145) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_146(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_146) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_149(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_SAC_149) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_150(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_150) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_151(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_151) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_152(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_152) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_153(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_153) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_156(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_SAC_156) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_157(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_ARV_157) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_158(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PD1_158) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_159(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PID_159) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_160(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_160) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_161(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_161) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_162(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_162) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_163(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_163) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_164(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_164) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_167(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_SAC_167) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_168(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_ARV_168) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_169(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PD1_169) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_170(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PID_170) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_171(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_171) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_172(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_172) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_173(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PV1_173) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_174(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PV2_174) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_175(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_175) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_176(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_176) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_177(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_177) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_178(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_178) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_181(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_SAC_181) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_182(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_ARV_182) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_183(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PD1_183) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_184(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PID_184) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_185(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_185) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_186(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_186) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_187(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PV1_187) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_188(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PV2_188) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_192(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_NTE_192) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_193(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBR_193) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_194(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_ORC_194) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_195(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_195) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_196(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_196) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_197(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_197) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_198(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_198) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_199(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_199) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_200(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_DEV_200) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_201(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_201) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_202(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_202) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_203(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_203) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_204(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_DEV_204) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_205(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_205) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_206(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_TQ1_206) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_207(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_TQ2_207) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_208(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_208) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_209(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_209) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_210(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_DEV_210) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_211(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_211) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_212(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_TQ1_212) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_213(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_TQ2_213) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_214(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_NTE_214) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_215(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OBX_215) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_216(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_216) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_221(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_AL1_221) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_222(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_ARV_222) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_223(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_GT1_223) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_224(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_NTE_224) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_225(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PD1_225) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_226(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PID_226) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_227(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_227) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_228(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_IN1_228) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_229(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_IN2_229) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_230(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_IN3_230) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_231(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_IN1_231) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_232(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_IN2_232) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_233(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_IN3_233) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_234(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OH1_234) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_235(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OH2_235) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_236(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OH3_236) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_237(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OH4_237) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_238(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_IN1_238) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_239(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_IN2_239) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_240(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_IN3_240) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_241(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OH1_241) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_242(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OH2_242) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_243(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OH3_243) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_244(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OH4_244) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_245(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_NK1_245) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_246(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OH2_246) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_247(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OH3_247) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_248(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_IN1_248) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_249(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_IN2_249) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_250(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_IN3_250) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_251(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OH1_251) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_252(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OH2_252) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_253(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OH3_253) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_254(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OH4_254) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_255(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_NK1_255) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_256(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OH2_256) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_257(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_OH3_257) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_258(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PRT_258) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_259(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PV1_259) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_260(size_t index = 0) {
    try {
      return this->getObject(index, OML_O21_OML_O21_PV2_260) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OML_O21_OML_O21_ */
} /* namespace HL7_29 */
#endif /*  __OML_O21_OML_O21__29_H__ */
