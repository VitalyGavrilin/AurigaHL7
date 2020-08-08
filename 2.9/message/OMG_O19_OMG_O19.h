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


#ifndef __OMG_O19_OMG_O19__29_H__
#define __OMG_O19_OMG_O19__29_H__

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
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct OMG_O19_OMG_O19_PATIENT; /* PATIENT */
struct OMG_O19_OMG_O19_ORDER; /* ORDER */
struct OMG_O19_OMG_O19_DEVICE; /* DEVICE */
struct OMG_O19_OMG_O19_OBSERVATION; /* OBSERVATION */
struct OMG_O19_OMG_O19_SPECIMEN; /* SPECIMEN */
struct OMG_O19_OMG_O19_PRIOR_RESULT; /* PRIOR_RESULT */
struct OMG_O19_OMG_O19_TIMING; /* TIMING */
struct OMG_O19_OMG_O19_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct OMG_O19_OMG_O19_CONTAINER; /* CONTAINER */
struct OMG_O19_OMG_O19_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OMG_O19_OMG_O19_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct OMG_O19_OMG_O19_CONTAINER; /* CONTAINER */
struct OMG_O19_OMG_O19_PATIENT_PRIOR; /* PATIENT_PRIOR */
struct OMG_O19_OMG_O19_PATIENT_VISIT_PRIOR; /* PATIENT_VISIT_PRIOR */
struct OMG_O19_OMG_O19_ORDER_PRIOR; /* ORDER_PRIOR */
struct OMG_O19_OMG_O19_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OMG_O19_OMG_O19_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OMG_O19_OMG_O19_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OMG_O19_OMG_O19_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OMG_O19_OMG_O19_TIMING_PRIOR; /* TIMING_PRIOR */
struct OMG_O19_OMG_O19_ORDER_DETAIL_PARTICIPATION_PRIOR; /* ORDER_DETAIL_PARTICIPATION_PRIOR */
struct OMG_O19_OMG_O19_OBSERVATION_PRIOR; /* OBSERVATION_PRIOR */
struct OMG_O19_OMG_O19_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct OMG_O19_OMG_O19_CONTAINER; /* CONTAINER */
struct OMG_O19_OMG_O19_PATIENT_PRIOR; /* PATIENT_PRIOR */
struct OMG_O19_OMG_O19_PATIENT_VISIT_PRIOR; /* PATIENT_VISIT_PRIOR */
struct OMG_O19_OMG_O19_ORDER_PRIOR; /* ORDER_PRIOR */
struct OMG_O19_OMG_O19_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OMG_O19_OMG_O19_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OMG_O19_OMG_O19_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OMG_O19_OMG_O19_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OMG_O19_OMG_O19_TIMING_PRIOR; /* TIMING_PRIOR */
struct OMG_O19_OMG_O19_ORDER_DETAIL_PARTICIPATION_PRIOR; /* ORDER_DETAIL_PARTICIPATION_PRIOR */
struct OMG_O19_OMG_O19_OBSERVATION_PRIOR; /* OBSERVATION_PRIOR */
struct OMG_O19_OMG_O19_INSURANCE; /* INSURANCE */
struct OMG_O19_OMG_O19_OCCUPATIONAL_DATA_FOR_HEALTH; /* OCCUPATIONAL_DATA_FOR_HEALTH */
struct OMG_O19_OMG_O19_NEXT_OF_KIN; /* NEXT_OF_KIN */
struct OMG_O19_OMG_O19_PATIENT_VISIT; /* PATIENT_VISIT */

/*  */
struct OMG_O19_OMG_O19 : public HL7Message {
  OMG_O19_OMG_O19() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMG_O19_OMG_O19_MSH_1,
    OMG_O19_OMG_O19_ARV_2,
    OMG_O19_OMG_O19_SFT_3,
    OMG_O19_OMG_O19_UAC_4,
    OMG_O19_OMG_O19_NTE_5,
    OMG_O19_OMG_O19_DEV_9,
    OMG_O19_OMG_O19_OBX_10,
    OMG_O19_OMG_O19_BLG_15,
    OMG_O19_OMG_O19_CTD_16,
    OMG_O19_OMG_O19_CTI_17,
    OMG_O19_OMG_O19_DG1_18,
    OMG_O19_OMG_O19_FT1_19,
    OMG_O19_OMG_O19_NTE_20,
    OMG_O19_OMG_O19_NTE_21,
    OMG_O19_OMG_O19_OBR_22,
    OMG_O19_OMG_O19_ORC_23,
    OMG_O19_OMG_O19_PRT_24,
    OMG_O19_OMG_O19_PRT_25,
    OMG_O19_OMG_O19_REL_26,
    OMG_O19_OMG_O19_SGH_27,
    OMG_O19_OMG_O19_SGT_28,
    OMG_O19_OMG_O19_NTE_29,
    OMG_O19_OMG_O19_OBX_30,
    OMG_O19_OMG_O19_PRT_31,
    OMG_O19_OMG_O19_NTE_32,
    OMG_O19_OMG_O19_OBX_33,
    OMG_O19_OMG_O19_PRT_34,
    OMG_O19_OMG_O19_NTE_37,
    OMG_O19_OMG_O19_SPM_38,
    OMG_O19_OMG_O19_OBX_39,
    OMG_O19_OMG_O19_PRT_40,
    OMG_O19_OMG_O19_OBX_41,
    OMG_O19_OMG_O19_PRT_42,
    OMG_O19_OMG_O19_NTE_44,
    OMG_O19_OMG_O19_SAC_45,
    OMG_O19_OMG_O19_OBX_46,
    OMG_O19_OMG_O19_PRT_47,
    OMG_O19_OMG_O19_NTE_48,
    OMG_O19_OMG_O19_OBX_49,
    OMG_O19_OMG_O19_PRT_50,
    OMG_O19_OMG_O19_NTE_53,
    OMG_O19_OMG_O19_SPM_54,
    OMG_O19_OMG_O19_AL1_58,
    OMG_O19_OMG_O19_OBX_59,
    OMG_O19_OMG_O19_PRT_60,
    OMG_O19_OMG_O19_OBX_61,
    OMG_O19_OMG_O19_PRT_62,
    OMG_O19_OMG_O19_NTE_64,
    OMG_O19_OMG_O19_SAC_65,
    OMG_O19_OMG_O19_OBX_66,
    OMG_O19_OMG_O19_PRT_67,
    OMG_O19_OMG_O19_OBX_68,
    OMG_O19_OMG_O19_PRT_69,
    OMG_O19_OMG_O19_NTE_71,
    OMG_O19_OMG_O19_SAC_72,
    OMG_O19_OMG_O19_ARV_73,
    OMG_O19_OMG_O19_PD1_74,
    OMG_O19_OMG_O19_PID_75,
    OMG_O19_OMG_O19_PRT_76,
    OMG_O19_OMG_O19_OBX_77,
    OMG_O19_OMG_O19_PRT_78,
    OMG_O19_OMG_O19_OBX_79,
    OMG_O19_OMG_O19_PRT_80,
    OMG_O19_OMG_O19_NTE_82,
    OMG_O19_OMG_O19_SAC_83,
    OMG_O19_OMG_O19_ARV_84,
    OMG_O19_OMG_O19_PD1_85,
    OMG_O19_OMG_O19_PID_86,
    OMG_O19_OMG_O19_PRT_87,
    OMG_O19_OMG_O19_PRT_88,
    OMG_O19_OMG_O19_PV1_89,
    OMG_O19_OMG_O19_PV2_90,
    OMG_O19_OMG_O19_OBX_91,
    OMG_O19_OMG_O19_PRT_92,
    OMG_O19_OMG_O19_OBX_93,
    OMG_O19_OMG_O19_PRT_94,
    OMG_O19_OMG_O19_NTE_96,
    OMG_O19_OMG_O19_SAC_97,
    OMG_O19_OMG_O19_ARV_98,
    OMG_O19_OMG_O19_PD1_99,
    OMG_O19_OMG_O19_PID_100,
    OMG_O19_OMG_O19_PRT_101,
    OMG_O19_OMG_O19_PRT_102,
    OMG_O19_OMG_O19_PV1_103,
    OMG_O19_OMG_O19_PV2_104,
    OMG_O19_OMG_O19_CTD_108,
    OMG_O19_OMG_O19_NTE_109,
    OMG_O19_OMG_O19_OBR_110,
    OMG_O19_OMG_O19_ORC_111,
    OMG_O19_OMG_O19_PRT_112,
    OMG_O19_OMG_O19_OBX_113,
    OMG_O19_OMG_O19_PRT_114,
    OMG_O19_OMG_O19_OBX_115,
    OMG_O19_OMG_O19_PRT_116,
    OMG_O19_OMG_O19_TQ1_117,
    OMG_O19_OMG_O19_TQ2_118,
    OMG_O19_OMG_O19_OBX_119,
    OMG_O19_OMG_O19_PRT_120,
    OMG_O19_OMG_O19_TQ1_121,
    OMG_O19_OMG_O19_TQ2_122,
    OMG_O19_OMG_O19_DEV_123,
    OMG_O19_OMG_O19_PRT_124,
    OMG_O19_OMG_O19_OBX_125,
    OMG_O19_OMG_O19_PRT_126,
    OMG_O19_OMG_O19_TQ1_127,
    OMG_O19_OMG_O19_TQ2_128,
    OMG_O19_OMG_O19_DEV_129,
    OMG_O19_OMG_O19_PRT_130,
    OMG_O19_OMG_O19_NTE_131,
    OMG_O19_OMG_O19_OBX_132,
    OMG_O19_OMG_O19_PRT_133,
    OMG_O19_OMG_O19_NTE_134,
    OMG_O19_OMG_O19_OBX_135,
    OMG_O19_OMG_O19_PRT_136,
    OMG_O19_OMG_O19_NTE_139,
    OMG_O19_OMG_O19_SPM_140,
    OMG_O19_OMG_O19_AL1_144,
    OMG_O19_OMG_O19_TQ1_145,
    OMG_O19_OMG_O19_TQ2_146,
    OMG_O19_OMG_O19_OBX_147,
    OMG_O19_OMG_O19_PRT_148,
    OMG_O19_OMG_O19_OBX_149,
    OMG_O19_OMG_O19_PRT_150,
    OMG_O19_OMG_O19_NTE_152,
    OMG_O19_OMG_O19_SAC_153,
    OMG_O19_OMG_O19_OBX_154,
    OMG_O19_OMG_O19_PRT_155,
    OMG_O19_OMG_O19_OBX_156,
    OMG_O19_OMG_O19_PRT_157,
    OMG_O19_OMG_O19_NTE_159,
    OMG_O19_OMG_O19_SAC_160,
    OMG_O19_OMG_O19_ARV_161,
    OMG_O19_OMG_O19_PD1_162,
    OMG_O19_OMG_O19_PID_163,
    OMG_O19_OMG_O19_PRT_164,
    OMG_O19_OMG_O19_OBX_165,
    OMG_O19_OMG_O19_PRT_166,
    OMG_O19_OMG_O19_OBX_167,
    OMG_O19_OMG_O19_PRT_168,
    OMG_O19_OMG_O19_NTE_170,
    OMG_O19_OMG_O19_SAC_171,
    OMG_O19_OMG_O19_ARV_172,
    OMG_O19_OMG_O19_PD1_173,
    OMG_O19_OMG_O19_PID_174,
    OMG_O19_OMG_O19_PRT_175,
    OMG_O19_OMG_O19_PRT_176,
    OMG_O19_OMG_O19_PV1_177,
    OMG_O19_OMG_O19_PV2_178,
    OMG_O19_OMG_O19_OBX_179,
    OMG_O19_OMG_O19_PRT_180,
    OMG_O19_OMG_O19_OBX_181,
    OMG_O19_OMG_O19_PRT_182,
    OMG_O19_OMG_O19_NTE_184,
    OMG_O19_OMG_O19_SAC_185,
    OMG_O19_OMG_O19_ARV_186,
    OMG_O19_OMG_O19_PD1_187,
    OMG_O19_OMG_O19_PID_188,
    OMG_O19_OMG_O19_PRT_189,
    OMG_O19_OMG_O19_PRT_190,
    OMG_O19_OMG_O19_PV1_191,
    OMG_O19_OMG_O19_PV2_192,
    OMG_O19_OMG_O19_CTD_196,
    OMG_O19_OMG_O19_NTE_197,
    OMG_O19_OMG_O19_OBR_198,
    OMG_O19_OMG_O19_ORC_199,
    OMG_O19_OMG_O19_PRT_200,
    OMG_O19_OMG_O19_OBX_201,
    OMG_O19_OMG_O19_PRT_202,
    OMG_O19_OMG_O19_OBX_203,
    OMG_O19_OMG_O19_PRT_204,
    OMG_O19_OMG_O19_TQ1_205,
    OMG_O19_OMG_O19_TQ2_206,
    OMG_O19_OMG_O19_OBX_207,
    OMG_O19_OMG_O19_PRT_208,
    OMG_O19_OMG_O19_TQ1_209,
    OMG_O19_OMG_O19_TQ2_210,
    OMG_O19_OMG_O19_DEV_211,
    OMG_O19_OMG_O19_PRT_212,
    OMG_O19_OMG_O19_OBX_213,
    OMG_O19_OMG_O19_PRT_214,
    OMG_O19_OMG_O19_TQ1_215,
    OMG_O19_OMG_O19_TQ2_216,
    OMG_O19_OMG_O19_DEV_217,
    OMG_O19_OMG_O19_PRT_218,
    OMG_O19_OMG_O19_NTE_219,
    OMG_O19_OMG_O19_OBX_220,
    OMG_O19_OMG_O19_PRT_221,
    OMG_O19_OMG_O19_AL1_226,
    OMG_O19_OMG_O19_ARV_227,
    OMG_O19_OMG_O19_GT1_228,
    OMG_O19_OMG_O19_NTE_229,
    OMG_O19_OMG_O19_PD1_230,
    OMG_O19_OMG_O19_PID_231,
    OMG_O19_OMG_O19_PRT_232,
    OMG_O19_OMG_O19_IN1_233,
    OMG_O19_OMG_O19_IN2_234,
    OMG_O19_OMG_O19_IN3_235,
    OMG_O19_OMG_O19_IN1_236,
    OMG_O19_OMG_O19_IN2_237,
    OMG_O19_OMG_O19_IN3_238,
    OMG_O19_OMG_O19_OH1_239,
    OMG_O19_OMG_O19_OH2_240,
    OMG_O19_OMG_O19_OH3_241,
    OMG_O19_OMG_O19_OH4_242,
    OMG_O19_OMG_O19_IN1_243,
    OMG_O19_OMG_O19_IN2_244,
    OMG_O19_OMG_O19_IN3_245,
    OMG_O19_OMG_O19_OH1_246,
    OMG_O19_OMG_O19_OH2_247,
    OMG_O19_OMG_O19_OH3_248,
    OMG_O19_OMG_O19_OH4_249,
    OMG_O19_OMG_O19_NK1_250,
    OMG_O19_OMG_O19_OH2_251,
    OMG_O19_OMG_O19_OH3_252,
    OMG_O19_OMG_O19_IN1_253,
    OMG_O19_OMG_O19_IN2_254,
    OMG_O19_OMG_O19_IN3_255,
    OMG_O19_OMG_O19_OH1_256,
    OMG_O19_OMG_O19_OH2_257,
    OMG_O19_OMG_O19_OH3_258,
    OMG_O19_OMG_O19_OH4_259,
    OMG_O19_OMG_O19_NK1_260,
    OMG_O19_OMG_O19_OH2_261,
    OMG_O19_OMG_O19_OH3_262,
    OMG_O19_OMG_O19_PRT_263,
    OMG_O19_OMG_O19_PV1_264,
    OMG_O19_OMG_O19_PV2_265,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMG_O19_OMG_O19"; }
  OMG_O19_OMG_O19* create() const { return new OMG_O19_OMG_O19(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMG_O19_OMG_O19");
    addObject<MSH>(OMG_O19_OMG_O19_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OMG_O19_OMG_O19_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(OMG_O19_OMG_O19_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(OMG_O19_OMG_O19_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OMG_O19_OMG_O19_NTE_5, "NTE.5", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OMG_O19_OMG_O19_DEV_9, "DEV.9", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_10, "OBX.10", HL7::optional, HL7::repetition_on);
    addObject<BLG>(OMG_O19_OMG_O19_BLG_15, "BLG.15", HL7::optional, HL7::repetition_off);
    addObject<CTD>(OMG_O19_OMG_O19_CTD_16, "CTD.16", HL7::optional, HL7::repetition_off);
    addObject<CTI>(OMG_O19_OMG_O19_CTI_17, "CTI.17", HL7::optional, HL7::repetition_on);
    addObject<DG1>(OMG_O19_OMG_O19_DG1_18, "DG1.18", HL7::optional, HL7::repetition_on);
    addObject<FT1>(OMG_O19_OMG_O19_FT1_19, "FT1.19", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMG_O19_OMG_O19_NTE_20, "NTE.20", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMG_O19_OMG_O19_NTE_21, "NTE.21", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OMG_O19_OMG_O19_OBR_22, "OBR.22", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(OMG_O19_OMG_O19_ORC_23, "ORC.23", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_24, "PRT.24", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_25, "PRT.25", HL7::optional, HL7::repetition_on);
    addObject<REL>(OMG_O19_OMG_O19_REL_26, "REL.26", HL7::optional, HL7::repetition_off);
    addObject<SGH>(OMG_O19_OMG_O19_SGH_27, "SGH.27", HL7::optional, HL7::repetition_off);
    addObject<SGT>(OMG_O19_OMG_O19_SGT_28, "SGT.28", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OMG_O19_OMG_O19_NTE_29, "NTE.29", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_30, "OBX.30", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_31, "PRT.31", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMG_O19_OMG_O19_NTE_32, "NTE.32", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_33, "OBX.33", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_34, "PRT.34", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMG_O19_OMG_O19_NTE_37, "NTE.37", HL7::optional, HL7::repetition_on);
    addObject<SPM>(OMG_O19_OMG_O19_SPM_38, "SPM.38", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_39, "OBX.39", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_40, "PRT.40", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_41, "OBX.41", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_42, "PRT.42", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMG_O19_OMG_O19_NTE_44, "NTE.44", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OMG_O19_OMG_O19_SAC_45, "SAC.45", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_46, "OBX.46", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_47, "PRT.47", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMG_O19_OMG_O19_NTE_48, "NTE.48", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_49, "OBX.49", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_50, "PRT.50", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMG_O19_OMG_O19_NTE_53, "NTE.53", HL7::optional, HL7::repetition_on);
    addObject<SPM>(OMG_O19_OMG_O19_SPM_54, "SPM.54", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(OMG_O19_OMG_O19_AL1_58, "AL1.58", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_59, "OBX.59", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_60, "PRT.60", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_61, "OBX.61", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_62, "PRT.62", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMG_O19_OMG_O19_NTE_64, "NTE.64", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OMG_O19_OMG_O19_SAC_65, "SAC.65", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_66, "OBX.66", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_67, "PRT.67", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_68, "OBX.68", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_69, "PRT.69", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMG_O19_OMG_O19_NTE_71, "NTE.71", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OMG_O19_OMG_O19_SAC_72, "SAC.72", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OMG_O19_OMG_O19_ARV_73, "ARV.73", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OMG_O19_OMG_O19_PD1_74, "PD1.74", HL7::optional, HL7::repetition_off);
    addObject<PID>(OMG_O19_OMG_O19_PID_75, "PID.75", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_76, "PRT.76", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_77, "OBX.77", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_78, "PRT.78", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_79, "OBX.79", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_80, "PRT.80", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMG_O19_OMG_O19_NTE_82, "NTE.82", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OMG_O19_OMG_O19_SAC_83, "SAC.83", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OMG_O19_OMG_O19_ARV_84, "ARV.84", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OMG_O19_OMG_O19_PD1_85, "PD1.85", HL7::optional, HL7::repetition_off);
    addObject<PID>(OMG_O19_OMG_O19_PID_86, "PID.86", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_87, "PRT.87", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_88, "PRT.88", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OMG_O19_OMG_O19_PV1_89, "PV1.89", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OMG_O19_OMG_O19_PV2_90, "PV2.90", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_91, "OBX.91", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_92, "PRT.92", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_93, "OBX.93", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_94, "PRT.94", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMG_O19_OMG_O19_NTE_96, "NTE.96", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OMG_O19_OMG_O19_SAC_97, "SAC.97", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OMG_O19_OMG_O19_ARV_98, "ARV.98", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OMG_O19_OMG_O19_PD1_99, "PD1.99", HL7::optional, HL7::repetition_off);
    addObject<PID>(OMG_O19_OMG_O19_PID_100, "PID.100", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_101, "PRT.101", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_102, "PRT.102", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OMG_O19_OMG_O19_PV1_103, "PV1.103", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OMG_O19_OMG_O19_PV2_104, "PV2.104", HL7::optional, HL7::repetition_off);
    addObject<CTD>(OMG_O19_OMG_O19_CTD_108, "CTD.108", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OMG_O19_OMG_O19_NTE_109, "NTE.109", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OMG_O19_OMG_O19_OBR_110, "OBR.110", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(OMG_O19_OMG_O19_ORC_111, "ORC.111", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_112, "PRT.112", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_113, "OBX.113", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_114, "PRT.114", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_115, "OBX.115", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_116, "PRT.116", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OMG_O19_OMG_O19_TQ1_117, "TQ1.117", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OMG_O19_OMG_O19_TQ2_118, "TQ2.118", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_119, "OBX.119", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_120, "PRT.120", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OMG_O19_OMG_O19_TQ1_121, "TQ1.121", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OMG_O19_OMG_O19_TQ2_122, "TQ2.122", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OMG_O19_OMG_O19_DEV_123, "DEV.123", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_124, "PRT.124", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_125, "OBX.125", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_126, "PRT.126", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OMG_O19_OMG_O19_TQ1_127, "TQ1.127", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OMG_O19_OMG_O19_TQ2_128, "TQ2.128", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OMG_O19_OMG_O19_DEV_129, "DEV.129", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_130, "PRT.130", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(OMG_O19_OMG_O19_NTE_131, "NTE.131", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_132, "OBX.132", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_133, "PRT.133", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMG_O19_OMG_O19_NTE_134, "NTE.134", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_135, "OBX.135", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_136, "PRT.136", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMG_O19_OMG_O19_NTE_139, "NTE.139", HL7::optional, HL7::repetition_on);
    addObject<SPM>(OMG_O19_OMG_O19_SPM_140, "SPM.140", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(OMG_O19_OMG_O19_AL1_144, "AL1.144", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OMG_O19_OMG_O19_TQ1_145, "TQ1.145", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OMG_O19_OMG_O19_TQ2_146, "TQ2.146", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_147, "OBX.147", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_148, "PRT.148", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_149, "OBX.149", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_150, "PRT.150", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMG_O19_OMG_O19_NTE_152, "NTE.152", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OMG_O19_OMG_O19_SAC_153, "SAC.153", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_154, "OBX.154", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_155, "PRT.155", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_156, "OBX.156", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_157, "PRT.157", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMG_O19_OMG_O19_NTE_159, "NTE.159", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OMG_O19_OMG_O19_SAC_160, "SAC.160", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OMG_O19_OMG_O19_ARV_161, "ARV.161", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OMG_O19_OMG_O19_PD1_162, "PD1.162", HL7::optional, HL7::repetition_off);
    addObject<PID>(OMG_O19_OMG_O19_PID_163, "PID.163", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_164, "PRT.164", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_165, "OBX.165", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_166, "PRT.166", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_167, "OBX.167", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_168, "PRT.168", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMG_O19_OMG_O19_NTE_170, "NTE.170", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OMG_O19_OMG_O19_SAC_171, "SAC.171", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OMG_O19_OMG_O19_ARV_172, "ARV.172", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OMG_O19_OMG_O19_PD1_173, "PD1.173", HL7::optional, HL7::repetition_off);
    addObject<PID>(OMG_O19_OMG_O19_PID_174, "PID.174", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_175, "PRT.175", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_176, "PRT.176", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OMG_O19_OMG_O19_PV1_177, "PV1.177", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OMG_O19_OMG_O19_PV2_178, "PV2.178", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_179, "OBX.179", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_180, "PRT.180", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_181, "OBX.181", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_182, "PRT.182", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMG_O19_OMG_O19_NTE_184, "NTE.184", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OMG_O19_OMG_O19_SAC_185, "SAC.185", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OMG_O19_OMG_O19_ARV_186, "ARV.186", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OMG_O19_OMG_O19_PD1_187, "PD1.187", HL7::optional, HL7::repetition_off);
    addObject<PID>(OMG_O19_OMG_O19_PID_188, "PID.188", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_189, "PRT.189", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_190, "PRT.190", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OMG_O19_OMG_O19_PV1_191, "PV1.191", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OMG_O19_OMG_O19_PV2_192, "PV2.192", HL7::optional, HL7::repetition_off);
    addObject<CTD>(OMG_O19_OMG_O19_CTD_196, "CTD.196", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OMG_O19_OMG_O19_NTE_197, "NTE.197", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OMG_O19_OMG_O19_OBR_198, "OBR.198", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(OMG_O19_OMG_O19_ORC_199, "ORC.199", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_200, "PRT.200", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_201, "OBX.201", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_202, "PRT.202", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_203, "OBX.203", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_204, "PRT.204", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OMG_O19_OMG_O19_TQ1_205, "TQ1.205", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OMG_O19_OMG_O19_TQ2_206, "TQ2.206", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_207, "OBX.207", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_208, "PRT.208", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OMG_O19_OMG_O19_TQ1_209, "TQ1.209", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OMG_O19_OMG_O19_TQ2_210, "TQ2.210", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OMG_O19_OMG_O19_DEV_211, "DEV.211", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_212, "PRT.212", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_213, "OBX.213", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_214, "PRT.214", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OMG_O19_OMG_O19_TQ1_215, "TQ1.215", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OMG_O19_OMG_O19_TQ2_216, "TQ2.216", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OMG_O19_OMG_O19_DEV_217, "DEV.217", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_218, "PRT.218", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(OMG_O19_OMG_O19_NTE_219, "NTE.219", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMG_O19_OMG_O19_OBX_220, "OBX.220", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_221, "PRT.221", HL7::optional, HL7::repetition_on);
    addObject<AL1>(OMG_O19_OMG_O19_AL1_226, "AL1.226", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OMG_O19_OMG_O19_ARV_227, "ARV.227", HL7::optional, HL7::repetition_on);
    addObject<GT1>(OMG_O19_OMG_O19_GT1_228, "GT1.228", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OMG_O19_OMG_O19_NTE_229, "NTE.229", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OMG_O19_OMG_O19_PD1_230, "PD1.230", HL7::optional, HL7::repetition_off);
    addObject<PID>(OMG_O19_OMG_O19_PID_231, "PID.231", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_232, "PRT.232", HL7::optional, HL7::repetition_on);
    addObject<IN1>(OMG_O19_OMG_O19_IN1_233, "IN1.233", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OMG_O19_OMG_O19_IN2_234, "IN2.234", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OMG_O19_OMG_O19_IN3_235, "IN3.235", HL7::optional, HL7::repetition_off);
    addObject<IN1>(OMG_O19_OMG_O19_IN1_236, "IN1.236", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OMG_O19_OMG_O19_IN2_237, "IN2.237", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OMG_O19_OMG_O19_IN3_238, "IN3.238", HL7::optional, HL7::repetition_off);
    addObject<OH1>(OMG_O19_OMG_O19_OH1_239, "OH1.239", HL7::optional, HL7::repetition_on);
    addObject<OH2>(OMG_O19_OMG_O19_OH2_240, "OH2.240", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OMG_O19_OMG_O19_OH3_241, "OH3.241", HL7::optional, HL7::repetition_off);
    addObject<OH4>(OMG_O19_OMG_O19_OH4_242, "OH4.242", HL7::optional, HL7::repetition_on);
    addObject<IN1>(OMG_O19_OMG_O19_IN1_243, "IN1.243", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OMG_O19_OMG_O19_IN2_244, "IN2.244", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OMG_O19_OMG_O19_IN3_245, "IN3.245", HL7::optional, HL7::repetition_off);
    addObject<OH1>(OMG_O19_OMG_O19_OH1_246, "OH1.246", HL7::optional, HL7::repetition_on);
    addObject<OH2>(OMG_O19_OMG_O19_OH2_247, "OH2.247", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OMG_O19_OMG_O19_OH3_248, "OH3.248", HL7::optional, HL7::repetition_off);
    addObject<OH4>(OMG_O19_OMG_O19_OH4_249, "OH4.249", HL7::optional, HL7::repetition_on);
    addObject<NK1>(OMG_O19_OMG_O19_NK1_250, "NK1.250", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(OMG_O19_OMG_O19_OH2_251, "OH2.251", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OMG_O19_OMG_O19_OH3_252, "OH3.252", HL7::optional, HL7::repetition_off);
    addObject<IN1>(OMG_O19_OMG_O19_IN1_253, "IN1.253", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OMG_O19_OMG_O19_IN2_254, "IN2.254", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OMG_O19_OMG_O19_IN3_255, "IN3.255", HL7::optional, HL7::repetition_off);
    addObject<OH1>(OMG_O19_OMG_O19_OH1_256, "OH1.256", HL7::optional, HL7::repetition_on);
    addObject<OH2>(OMG_O19_OMG_O19_OH2_257, "OH2.257", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OMG_O19_OMG_O19_OH3_258, "OH3.258", HL7::optional, HL7::repetition_off);
    addObject<OH4>(OMG_O19_OMG_O19_OH4_259, "OH4.259", HL7::optional, HL7::repetition_on);
    addObject<NK1>(OMG_O19_OMG_O19_NK1_260, "NK1.260", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(OMG_O19_OMG_O19_OH2_261, "OH2.261", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OMG_O19_OMG_O19_OH3_262, "OH3.262", HL7::optional, HL7::repetition_off);
    addObject<PRT>(OMG_O19_OMG_O19_PRT_263, "PRT.263", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OMG_O19_OMG_O19_PV1_264, "PV1.264", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OMG_O19_OMG_O19_PV2_265, "PV2.265", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OMG_O19_OMG_O19_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMG_O19_OMG_O19_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, OMG_O19_OMG_O19_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, OMG_O19_OMG_O19_UAC_4);
  }
  NTE* getNTE_5(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_OMG_O19_NTE_5);
  }
  DEV* getDEV_9(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OMG_O19_OMG_O19_DEV_9);
  }
  OBX* getOBX_10(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_10);
  }
  BLG* getBLG_15(size_t index = 0) {
    return (BLG*)this->getObjectSafe(index, OMG_O19_OMG_O19_BLG_15);
  }
  CTD* getCTD_16(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, OMG_O19_OMG_O19_CTD_16);
  }
  CTI* getCTI_17(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, OMG_O19_OMG_O19_CTI_17);
  }
  DG1* getDG1_18(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, OMG_O19_OMG_O19_DG1_18);
  }
  FT1* getFT1_19(size_t index = 0) {
    return (FT1*)this->getObjectSafe(index, OMG_O19_OMG_O19_FT1_19);
  }
  NTE* getNTE_20(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_OMG_O19_NTE_20);
  }
  NTE* getNTE_21(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_OMG_O19_NTE_21);
  }
  OBR* getOBR_22(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBR_22);
  }
  ORC* getORC_23(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OMG_O19_OMG_O19_ORC_23);
  }
  PRT* getPRT_24(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_24);
  }
  PRT* getPRT_25(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_25);
  }
  REL* getREL_26(size_t index = 0) {
    return (REL*)this->getObjectSafe(index, OMG_O19_OMG_O19_REL_26);
  }
  SGH* getSGH_27(size_t index = 0) {
    return (SGH*)this->getObjectSafe(index, OMG_O19_OMG_O19_SGH_27);
  }
  SGT* getSGT_28(size_t index = 0) {
    return (SGT*)this->getObjectSafe(index, OMG_O19_OMG_O19_SGT_28);
  }
  NTE* getNTE_29(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_OMG_O19_NTE_29);
  }
  OBX* getOBX_30(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_30);
  }
  PRT* getPRT_31(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_31);
  }
  NTE* getNTE_32(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_OMG_O19_NTE_32);
  }
  OBX* getOBX_33(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_33);
  }
  PRT* getPRT_34(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_34);
  }
  NTE* getNTE_37(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_OMG_O19_NTE_37);
  }
  SPM* getSPM_38(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, OMG_O19_OMG_O19_SPM_38);
  }
  OBX* getOBX_39(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_39);
  }
  PRT* getPRT_40(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_40);
  }
  OBX* getOBX_41(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_41);
  }
  PRT* getPRT_42(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_42);
  }
  NTE* getNTE_44(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_OMG_O19_NTE_44);
  }
  SAC* getSAC_45(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OMG_O19_OMG_O19_SAC_45);
  }
  OBX* getOBX_46(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_46);
  }
  PRT* getPRT_47(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_47);
  }
  NTE* getNTE_48(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_OMG_O19_NTE_48);
  }
  OBX* getOBX_49(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_49);
  }
  PRT* getPRT_50(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_50);
  }
  NTE* getNTE_53(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_OMG_O19_NTE_53);
  }
  SPM* getSPM_54(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, OMG_O19_OMG_O19_SPM_54);
  }
  AL1* getAL1_58(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OMG_O19_OMG_O19_AL1_58);
  }
  OBX* getOBX_59(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_59);
  }
  PRT* getPRT_60(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_60);
  }
  OBX* getOBX_61(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_61);
  }
  PRT* getPRT_62(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_62);
  }
  NTE* getNTE_64(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_OMG_O19_NTE_64);
  }
  SAC* getSAC_65(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OMG_O19_OMG_O19_SAC_65);
  }
  OBX* getOBX_66(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_66);
  }
  PRT* getPRT_67(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_67);
  }
  OBX* getOBX_68(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_68);
  }
  PRT* getPRT_69(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_69);
  }
  NTE* getNTE_71(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_OMG_O19_NTE_71);
  }
  SAC* getSAC_72(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OMG_O19_OMG_O19_SAC_72);
  }
  ARV* getARV_73(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMG_O19_OMG_O19_ARV_73);
  }
  PD1* getPD1_74(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMG_O19_OMG_O19_PD1_74);
  }
  PID* getPID_75(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMG_O19_OMG_O19_PID_75);
  }
  PRT* getPRT_76(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_76);
  }
  OBX* getOBX_77(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_77);
  }
  PRT* getPRT_78(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_78);
  }
  OBX* getOBX_79(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_79);
  }
  PRT* getPRT_80(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_80);
  }
  NTE* getNTE_82(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_OMG_O19_NTE_82);
  }
  SAC* getSAC_83(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OMG_O19_OMG_O19_SAC_83);
  }
  ARV* getARV_84(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMG_O19_OMG_O19_ARV_84);
  }
  PD1* getPD1_85(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMG_O19_OMG_O19_PD1_85);
  }
  PID* getPID_86(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMG_O19_OMG_O19_PID_86);
  }
  PRT* getPRT_87(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_87);
  }
  PRT* getPRT_88(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_88);
  }
  PV1* getPV1_89(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMG_O19_OMG_O19_PV1_89);
  }
  PV2* getPV2_90(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMG_O19_OMG_O19_PV2_90);
  }
  OBX* getOBX_91(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_91);
  }
  PRT* getPRT_92(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_92);
  }
  OBX* getOBX_93(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_93);
  }
  PRT* getPRT_94(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_94);
  }
  NTE* getNTE_96(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_OMG_O19_NTE_96);
  }
  SAC* getSAC_97(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OMG_O19_OMG_O19_SAC_97);
  }
  ARV* getARV_98(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMG_O19_OMG_O19_ARV_98);
  }
  PD1* getPD1_99(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMG_O19_OMG_O19_PD1_99);
  }
  PID* getPID_100(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMG_O19_OMG_O19_PID_100);
  }
  PRT* getPRT_101(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_101);
  }
  PRT* getPRT_102(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_102);
  }
  PV1* getPV1_103(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMG_O19_OMG_O19_PV1_103);
  }
  PV2* getPV2_104(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMG_O19_OMG_O19_PV2_104);
  }
  CTD* getCTD_108(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, OMG_O19_OMG_O19_CTD_108);
  }
  NTE* getNTE_109(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_OMG_O19_NTE_109);
  }
  OBR* getOBR_110(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBR_110);
  }
  ORC* getORC_111(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OMG_O19_OMG_O19_ORC_111);
  }
  PRT* getPRT_112(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_112);
  }
  OBX* getOBX_113(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_113);
  }
  PRT* getPRT_114(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_114);
  }
  OBX* getOBX_115(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_115);
  }
  PRT* getPRT_116(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_116);
  }
  TQ1* getTQ1_117(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMG_O19_OMG_O19_TQ1_117);
  }
  TQ2* getTQ2_118(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMG_O19_OMG_O19_TQ2_118);
  }
  OBX* getOBX_119(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_119);
  }
  PRT* getPRT_120(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_120);
  }
  TQ1* getTQ1_121(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMG_O19_OMG_O19_TQ1_121);
  }
  TQ2* getTQ2_122(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMG_O19_OMG_O19_TQ2_122);
  }
  DEV* getDEV_123(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OMG_O19_OMG_O19_DEV_123);
  }
  PRT* getPRT_124(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_124);
  }
  OBX* getOBX_125(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_125);
  }
  PRT* getPRT_126(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_126);
  }
  TQ1* getTQ1_127(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMG_O19_OMG_O19_TQ1_127);
  }
  TQ2* getTQ2_128(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMG_O19_OMG_O19_TQ2_128);
  }
  DEV* getDEV_129(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OMG_O19_OMG_O19_DEV_129);
  }
  PRT* getPRT_130(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_130);
  }
  NTE* getNTE_131(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_OMG_O19_NTE_131);
  }
  OBX* getOBX_132(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_132);
  }
  PRT* getPRT_133(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_133);
  }
  NTE* getNTE_134(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_OMG_O19_NTE_134);
  }
  OBX* getOBX_135(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_135);
  }
  PRT* getPRT_136(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_136);
  }
  NTE* getNTE_139(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_OMG_O19_NTE_139);
  }
  SPM* getSPM_140(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, OMG_O19_OMG_O19_SPM_140);
  }
  AL1* getAL1_144(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OMG_O19_OMG_O19_AL1_144);
  }
  TQ1* getTQ1_145(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMG_O19_OMG_O19_TQ1_145);
  }
  TQ2* getTQ2_146(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMG_O19_OMG_O19_TQ2_146);
  }
  OBX* getOBX_147(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_147);
  }
  PRT* getPRT_148(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_148);
  }
  OBX* getOBX_149(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_149);
  }
  PRT* getPRT_150(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_150);
  }
  NTE* getNTE_152(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_OMG_O19_NTE_152);
  }
  SAC* getSAC_153(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OMG_O19_OMG_O19_SAC_153);
  }
  OBX* getOBX_154(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_154);
  }
  PRT* getPRT_155(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_155);
  }
  OBX* getOBX_156(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_156);
  }
  PRT* getPRT_157(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_157);
  }
  NTE* getNTE_159(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_OMG_O19_NTE_159);
  }
  SAC* getSAC_160(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OMG_O19_OMG_O19_SAC_160);
  }
  ARV* getARV_161(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMG_O19_OMG_O19_ARV_161);
  }
  PD1* getPD1_162(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMG_O19_OMG_O19_PD1_162);
  }
  PID* getPID_163(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMG_O19_OMG_O19_PID_163);
  }
  PRT* getPRT_164(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_164);
  }
  OBX* getOBX_165(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_165);
  }
  PRT* getPRT_166(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_166);
  }
  OBX* getOBX_167(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_167);
  }
  PRT* getPRT_168(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_168);
  }
  NTE* getNTE_170(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_OMG_O19_NTE_170);
  }
  SAC* getSAC_171(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OMG_O19_OMG_O19_SAC_171);
  }
  ARV* getARV_172(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMG_O19_OMG_O19_ARV_172);
  }
  PD1* getPD1_173(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMG_O19_OMG_O19_PD1_173);
  }
  PID* getPID_174(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMG_O19_OMG_O19_PID_174);
  }
  PRT* getPRT_175(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_175);
  }
  PRT* getPRT_176(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_176);
  }
  PV1* getPV1_177(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMG_O19_OMG_O19_PV1_177);
  }
  PV2* getPV2_178(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMG_O19_OMG_O19_PV2_178);
  }
  OBX* getOBX_179(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_179);
  }
  PRT* getPRT_180(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_180);
  }
  OBX* getOBX_181(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_181);
  }
  PRT* getPRT_182(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_182);
  }
  NTE* getNTE_184(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_OMG_O19_NTE_184);
  }
  SAC* getSAC_185(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OMG_O19_OMG_O19_SAC_185);
  }
  ARV* getARV_186(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMG_O19_OMG_O19_ARV_186);
  }
  PD1* getPD1_187(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMG_O19_OMG_O19_PD1_187);
  }
  PID* getPID_188(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMG_O19_OMG_O19_PID_188);
  }
  PRT* getPRT_189(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_189);
  }
  PRT* getPRT_190(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_190);
  }
  PV1* getPV1_191(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMG_O19_OMG_O19_PV1_191);
  }
  PV2* getPV2_192(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMG_O19_OMG_O19_PV2_192);
  }
  CTD* getCTD_196(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, OMG_O19_OMG_O19_CTD_196);
  }
  NTE* getNTE_197(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_OMG_O19_NTE_197);
  }
  OBR* getOBR_198(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBR_198);
  }
  ORC* getORC_199(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OMG_O19_OMG_O19_ORC_199);
  }
  PRT* getPRT_200(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_200);
  }
  OBX* getOBX_201(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_201);
  }
  PRT* getPRT_202(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_202);
  }
  OBX* getOBX_203(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_203);
  }
  PRT* getPRT_204(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_204);
  }
  TQ1* getTQ1_205(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMG_O19_OMG_O19_TQ1_205);
  }
  TQ2* getTQ2_206(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMG_O19_OMG_O19_TQ2_206);
  }
  OBX* getOBX_207(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_207);
  }
  PRT* getPRT_208(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_208);
  }
  TQ1* getTQ1_209(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMG_O19_OMG_O19_TQ1_209);
  }
  TQ2* getTQ2_210(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMG_O19_OMG_O19_TQ2_210);
  }
  DEV* getDEV_211(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OMG_O19_OMG_O19_DEV_211);
  }
  PRT* getPRT_212(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_212);
  }
  OBX* getOBX_213(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_213);
  }
  PRT* getPRT_214(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_214);
  }
  TQ1* getTQ1_215(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMG_O19_OMG_O19_TQ1_215);
  }
  TQ2* getTQ2_216(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMG_O19_OMG_O19_TQ2_216);
  }
  DEV* getDEV_217(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OMG_O19_OMG_O19_DEV_217);
  }
  PRT* getPRT_218(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_218);
  }
  NTE* getNTE_219(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_OMG_O19_NTE_219);
  }
  OBX* getOBX_220(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMG_O19_OMG_O19_OBX_220);
  }
  PRT* getPRT_221(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_221);
  }
  AL1* getAL1_226(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OMG_O19_OMG_O19_AL1_226);
  }
  ARV* getARV_227(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMG_O19_OMG_O19_ARV_227);
  }
  GT1* getGT1_228(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, OMG_O19_OMG_O19_GT1_228);
  }
  NTE* getNTE_229(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMG_O19_OMG_O19_NTE_229);
  }
  PD1* getPD1_230(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMG_O19_OMG_O19_PD1_230);
  }
  PID* getPID_231(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMG_O19_OMG_O19_PID_231);
  }
  PRT* getPRT_232(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_232);
  }
  IN1* getIN1_233(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OMG_O19_OMG_O19_IN1_233);
  }
  IN2* getIN2_234(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OMG_O19_OMG_O19_IN2_234);
  }
  IN3* getIN3_235(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OMG_O19_OMG_O19_IN3_235);
  }
  IN1* getIN1_236(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OMG_O19_OMG_O19_IN1_236);
  }
  IN2* getIN2_237(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OMG_O19_OMG_O19_IN2_237);
  }
  IN3* getIN3_238(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OMG_O19_OMG_O19_IN3_238);
  }
  OH1* getOH1_239(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, OMG_O19_OMG_O19_OH1_239);
  }
  OH2* getOH2_240(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OMG_O19_OMG_O19_OH2_240);
  }
  OH3* getOH3_241(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OMG_O19_OMG_O19_OH3_241);
  }
  OH4* getOH4_242(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, OMG_O19_OMG_O19_OH4_242);
  }
  IN1* getIN1_243(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OMG_O19_OMG_O19_IN1_243);
  }
  IN2* getIN2_244(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OMG_O19_OMG_O19_IN2_244);
  }
  IN3* getIN3_245(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OMG_O19_OMG_O19_IN3_245);
  }
  OH1* getOH1_246(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, OMG_O19_OMG_O19_OH1_246);
  }
  OH2* getOH2_247(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OMG_O19_OMG_O19_OH2_247);
  }
  OH3* getOH3_248(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OMG_O19_OMG_O19_OH3_248);
  }
  OH4* getOH4_249(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, OMG_O19_OMG_O19_OH4_249);
  }
  NK1* getNK1_250(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, OMG_O19_OMG_O19_NK1_250);
  }
  OH2* getOH2_251(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OMG_O19_OMG_O19_OH2_251);
  }
  OH3* getOH3_252(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OMG_O19_OMG_O19_OH3_252);
  }
  IN1* getIN1_253(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OMG_O19_OMG_O19_IN1_253);
  }
  IN2* getIN2_254(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OMG_O19_OMG_O19_IN2_254);
  }
  IN3* getIN3_255(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OMG_O19_OMG_O19_IN3_255);
  }
  OH1* getOH1_256(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, OMG_O19_OMG_O19_OH1_256);
  }
  OH2* getOH2_257(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OMG_O19_OMG_O19_OH2_257);
  }
  OH3* getOH3_258(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OMG_O19_OMG_O19_OH3_258);
  }
  OH4* getOH4_259(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, OMG_O19_OMG_O19_OH4_259);
  }
  NK1* getNK1_260(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, OMG_O19_OMG_O19_NK1_260);
  }
  OH2* getOH2_261(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OMG_O19_OMG_O19_OH2_261);
  }
  OH3* getOH3_262(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OMG_O19_OMG_O19_OH3_262);
  }
  PRT* getPRT_263(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMG_O19_OMG_O19_PRT_263);
  }
  PV1* getPV1_264(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMG_O19_OMG_O19_PV1_264);
  }
  PV2* getPV2_265(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMG_O19_OMG_O19_PV2_265);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_5(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_NTE_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_9(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_DEV_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_10(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBLG_15(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_BLG_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_16(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_CTD_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_17(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_CTI_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_18(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_DG1_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFT1_19(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_FT1_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_20(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_NTE_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_21(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_NTE_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_22(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBR_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_23(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_ORC_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_24(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_25(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isREL_26(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_REL_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSGH_27(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_SGH_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSGT_28(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_SGT_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_29(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_NTE_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_30(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_31(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_32(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_NTE_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_33(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_34(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_37(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_NTE_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_38(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_SPM_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_39(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_40(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_41(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_42(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_44(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_NTE_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_45(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_SAC_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_46(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_47(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_48(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_NTE_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_49(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_50(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_53(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_NTE_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_54(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_SPM_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_58(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_AL1_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_59(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_60(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_61(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_62(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_64(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_NTE_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_65(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_SAC_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_66(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_67(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_68(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_68) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_69(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_71(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_NTE_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_72(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_SAC_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_73(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_ARV_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_74(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PD1_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_75(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PID_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_76(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_77(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_77) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_78(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_78) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_79(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_79) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_80(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_80) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_82(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_NTE_82) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_83(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_SAC_83) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_84(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_ARV_84) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_85(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PD1_85) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_86(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PID_86) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_87(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_87) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_88(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_88) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_89(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PV1_89) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_90(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PV2_90) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_91(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_91) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_92(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_92) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_93(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_93) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_94(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_94) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_96(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_NTE_96) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_97(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_SAC_97) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_98(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_ARV_98) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_99(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PD1_99) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_100(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PID_100) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_101(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_101) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_102(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_102) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_103(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PV1_103) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_104(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PV2_104) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_108(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_CTD_108) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_109(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_NTE_109) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_110(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBR_110) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_111(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_ORC_111) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_112(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_112) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_113(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_113) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_114(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_114) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_115(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_115) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_116(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_116) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_117(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_TQ1_117) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_118(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_TQ2_118) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_119(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_119) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_120(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_120) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_121(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_TQ1_121) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_122(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_TQ2_122) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_123(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_DEV_123) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_124(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_124) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_125(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_125) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_126(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_126) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_127(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_TQ1_127) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_128(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_TQ2_128) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_129(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_DEV_129) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_130(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_130) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_131(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_NTE_131) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_132(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_132) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_133(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_133) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_134(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_NTE_134) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_135(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_135) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_136(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_136) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_139(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_NTE_139) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_140(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_SPM_140) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_144(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_AL1_144) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_145(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_TQ1_145) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_146(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_TQ2_146) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_147(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_147) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_148(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_148) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_149(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_149) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_150(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_150) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_152(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_NTE_152) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_153(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_SAC_153) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_154(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_154) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_155(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_155) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_156(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_156) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_157(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_157) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_159(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_NTE_159) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_160(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_SAC_160) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_161(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_ARV_161) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_162(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PD1_162) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_163(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PID_163) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_164(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_164) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_165(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_165) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_166(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_166) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_167(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_167) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_168(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_168) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_170(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_NTE_170) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_171(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_SAC_171) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_172(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_ARV_172) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_173(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PD1_173) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_174(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PID_174) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_175(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_175) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_176(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_176) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_177(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PV1_177) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_178(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PV2_178) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_179(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_179) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_180(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_180) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_181(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_181) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_182(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_182) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_184(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_NTE_184) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_185(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_SAC_185) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_186(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_ARV_186) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_187(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PD1_187) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_188(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PID_188) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_189(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_189) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_190(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_190) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_191(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PV1_191) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_192(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PV2_192) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_196(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_CTD_196) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_197(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_NTE_197) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_198(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBR_198) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_199(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_ORC_199) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_200(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_200) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_201(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_201) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_202(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_202) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_203(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_203) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_204(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_204) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_205(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_TQ1_205) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_206(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_TQ2_206) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_207(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_207) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_208(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_208) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_209(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_TQ1_209) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_210(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_TQ2_210) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_211(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_DEV_211) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_212(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_212) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_213(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_213) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_214(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_214) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_215(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_TQ1_215) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_216(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_TQ2_216) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_217(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_DEV_217) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_218(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_218) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_219(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_NTE_219) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_220(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OBX_220) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_221(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_221) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_226(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_AL1_226) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_227(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_ARV_227) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_228(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_GT1_228) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_229(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_NTE_229) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_230(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PD1_230) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_231(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PID_231) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_232(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_232) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_233(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_IN1_233) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_234(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_IN2_234) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_235(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_IN3_235) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_236(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_IN1_236) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_237(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_IN2_237) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_238(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_IN3_238) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_239(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OH1_239) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_240(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OH2_240) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_241(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OH3_241) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_242(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OH4_242) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_243(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_IN1_243) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_244(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_IN2_244) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_245(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_IN3_245) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_246(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OH1_246) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_247(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OH2_247) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_248(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OH3_248) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_249(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OH4_249) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_250(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_NK1_250) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_251(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OH2_251) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_252(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OH3_252) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_253(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_IN1_253) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_254(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_IN2_254) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_255(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_IN3_255) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_256(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OH1_256) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_257(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OH2_257) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_258(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OH3_258) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_259(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OH4_259) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_260(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_NK1_260) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_261(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OH2_261) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_262(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_OH3_262) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_263(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PRT_263) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_264(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PV1_264) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_265(size_t index = 0) {
    try {
      return this->getObject(index, OMG_O19_OMG_O19_PV2_265) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMG_O19_OMG_O19_ */
} /* namespace HL7_29 */
#endif /*  __OMG_O19_OMG_O19__29_H__ */
