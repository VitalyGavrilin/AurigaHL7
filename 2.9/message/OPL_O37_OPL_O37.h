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


#ifndef __OPL_O37_OPL_O37__29_H__
#define __OPL_O37_OPL_O37__29_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/ARV.h"
#include "../segment/BLG.h"
#include "../segment/CTI.h"
#include "../segment/DEV.h"
#include "../segment/DG1.h"
#include "../segment/FT1.h"
#include "../segment/GT1.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IN3.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
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
struct OPL_O37_OPL_O37_GUARANTOR; /* GUARANTOR */
struct OPL_O37_OPL_O37_ORDER; /* ORDER */
struct OPL_O37_OPL_O37_PATIENT; /* PATIENT */
struct OPL_O37_OPL_O37_SPECIMEN; /* SPECIMEN */
struct OPL_O37_OPL_O37_PRIOR_RESULT; /* PRIOR_RESULT */
struct OPL_O37_OPL_O37_OBSERVATIONS_ON_PATIENT; /* OBSERVATIONS_ON_PATIENT */
struct OPL_O37_OPL_O37_INSURANCE; /* INSURANCE */
struct OPL_O37_OPL_O37_OBSERVATIONS_ON_PATIENT; /* OBSERVATIONS_ON_PATIENT */
struct OPL_O37_OPL_O37_INSURANCE; /* INSURANCE */
struct OPL_O37_OPL_O37_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct OPL_O37_OPL_O37_CONTAINER; /* CONTAINER */
struct OPL_O37_OPL_O37_OBSERVATION_REQUEST; /* OBSERVATION_REQUEST */
struct OPL_O37_OPL_O37_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OPL_O37_OPL_O37_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OPL_O37_OPL_O37_TIMING; /* TIMING */
struct OPL_O37_OPL_O37_ORDER_RELATED_OBSERVATION; /* ORDER_RELATED_OBSERVATION */
struct OPL_O37_OPL_O37_OBSERVATIONS_ON_PATIENT; /* OBSERVATIONS_ON_PATIENT */
struct OPL_O37_OPL_O37_INSURANCE; /* INSURANCE */
struct OPL_O37_OPL_O37_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct OPL_O37_OPL_O37_CONTAINER; /* CONTAINER */
struct OPL_O37_OPL_O37_OBSERVATION_REQUEST; /* OBSERVATION_REQUEST */
struct OPL_O37_OPL_O37_PATIENT_PRIOR; /* PATIENT_PRIOR */
struct OPL_O37_OPL_O37_PATIENT_VISIT_PRIOR; /* PATIENT_VISIT_PRIOR */
struct OPL_O37_OPL_O37_ORDER_PRIOR; /* ORDER_PRIOR */
struct OPL_O37_OPL_O37_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OPL_O37_OPL_O37_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OPL_O37_OPL_O37_TIMING; /* TIMING */
struct OPL_O37_OPL_O37_ORDER_RELATED_OBSERVATION; /* ORDER_RELATED_OBSERVATION */
struct OPL_O37_OPL_O37_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OPL_O37_OPL_O37_TIMING; /* TIMING */
struct OPL_O37_OPL_O37_ORDER_RELATED_OBSERVATION; /* ORDER_RELATED_OBSERVATION */
struct OPL_O37_OPL_O37_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OPL_O37_OPL_O37_TIMING; /* TIMING */
struct OPL_O37_OPL_O37_ORDER_RELATED_OBSERVATION; /* ORDER_RELATED_OBSERVATION */
struct OPL_O37_OPL_O37_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OPL_O37_OPL_O37_TIMING; /* TIMING */
struct OPL_O37_OPL_O37_ORDER_RELATED_OBSERVATION; /* ORDER_RELATED_OBSERVATION */
struct OPL_O37_OPL_O37_OBSERVATION_PARTICIPATION_PRIOR; /* OBSERVATION_PARTICIPATION_PRIOR */
struct OPL_O37_OPL_O37_TIMING; /* TIMING */
struct OPL_O37_OPL_O37_OBSERVATION_RESULT_GROUP; /* OBSERVATION_RESULT_GROUP */

/*  */
struct OPL_O37_OPL_O37 : public HL7Message {
  OPL_O37_OPL_O37() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OPL_O37_OPL_O37_MSH_1,
    OPL_O37_OPL_O37_ARV_2,
    OPL_O37_OPL_O37_SFT_3,
    OPL_O37_OPL_O37_UAC_4,
    OPL_O37_OPL_O37_NTE_5,
    OPL_O37_OPL_O37_GT1_9,
    OPL_O37_OPL_O37_NTE_10,
    OPL_O37_OPL_O37_BLG_14,
    OPL_O37_OPL_O37_CTI_15,
    OPL_O37_OPL_O37_FT1_16,
    OPL_O37_OPL_O37_SGH_18,
    OPL_O37_OPL_O37_SGT_19,
    OPL_O37_OPL_O37_AL1_22,
    OPL_O37_OPL_O37_ARV_23,
    OPL_O37_OPL_O37_PD1_24,
    OPL_O37_OPL_O37_PID_25,
    OPL_O37_OPL_O37_PRT_26,
    OPL_O37_OPL_O37_OBX_27,
    OPL_O37_OPL_O37_PRT_28,
    OPL_O37_OPL_O37_OBX_29,
    OPL_O37_OPL_O37_PRT_30,
    OPL_O37_OPL_O37_IN1_31,
    OPL_O37_OPL_O37_IN2_32,
    OPL_O37_OPL_O37_IN3_33,
    OPL_O37_OPL_O37_AL1_36,
    OPL_O37_OPL_O37_ARV_37,
    OPL_O37_OPL_O37_PD1_38,
    OPL_O37_OPL_O37_PID_39,
    OPL_O37_OPL_O37_PRT_40,
    OPL_O37_OPL_O37_SPM_44,
    OPL_O37_OPL_O37_OBX_45,
    OPL_O37_OPL_O37_PRT_46,
    OPL_O37_OPL_O37_OBX_47,
    OPL_O37_OPL_O37_PRT_48,
    OPL_O37_OPL_O37_IN1_49,
    OPL_O37_OPL_O37_IN2_50,
    OPL_O37_OPL_O37_IN3_51,
    OPL_O37_OPL_O37_OBX_52,
    OPL_O37_OPL_O37_PRT_53,
    OPL_O37_OPL_O37_IN1_54,
    OPL_O37_OPL_O37_IN2_55,
    OPL_O37_OPL_O37_IN3_56,
    OPL_O37_OPL_O37_OBX_57,
    OPL_O37_OPL_O37_PRT_58,
    OPL_O37_OPL_O37_OBX_59,
    OPL_O37_OPL_O37_PRT_60,
    OPL_O37_OPL_O37_IN1_61,
    OPL_O37_OPL_O37_IN2_62,
    OPL_O37_OPL_O37_IN3_63,
    OPL_O37_OPL_O37_OBX_64,
    OPL_O37_OPL_O37_PRT_65,
    OPL_O37_OPL_O37_SAC_67,
    OPL_O37_OPL_O37_OBX_68,
    OPL_O37_OPL_O37_PRT_69,
    OPL_O37_OPL_O37_OBX_70,
    OPL_O37_OPL_O37_PRT_71,
    OPL_O37_OPL_O37_IN1_72,
    OPL_O37_OPL_O37_IN2_73,
    OPL_O37_OPL_O37_IN3_74,
    OPL_O37_OPL_O37_OBX_75,
    OPL_O37_OPL_O37_PRT_76,
    OPL_O37_OPL_O37_SAC_78,
    OPL_O37_OPL_O37_DG1_81,
    OPL_O37_OPL_O37_OBR_82,
    OPL_O37_OPL_O37_ORC_83,
    OPL_O37_OPL_O37_PRT_84,
    OPL_O37_OPL_O37_PRT_85,
    OPL_O37_OPL_O37_TCD_86,
    OPL_O37_OPL_O37_OBX_87,
    OPL_O37_OPL_O37_PRT_88,
    OPL_O37_OPL_O37_OBX_89,
    OPL_O37_OPL_O37_PRT_90,
    OPL_O37_OPL_O37_TQ1_91,
    OPL_O37_OPL_O37_TQ2_92,
    OPL_O37_OPL_O37_OBX_93,
    OPL_O37_OPL_O37_PRT_94,
    OPL_O37_OPL_O37_TQ1_95,
    OPL_O37_OPL_O37_TQ2_96,
    OPL_O37_OPL_O37_OBX_97,
    OPL_O37_OPL_O37_PRT_98,
    OPL_O37_OPL_O37_AL1_101,
    OPL_O37_OPL_O37_ARV_102,
    OPL_O37_OPL_O37_PD1_103,
    OPL_O37_OPL_O37_PID_104,
    OPL_O37_OPL_O37_PRT_105,
    OPL_O37_OPL_O37_SPM_109,
    OPL_O37_OPL_O37_AL1_113,
    OPL_O37_OPL_O37_OBX_115,
    OPL_O37_OPL_O37_PRT_116,
    OPL_O37_OPL_O37_OBX_117,
    OPL_O37_OPL_O37_PRT_118,
    OPL_O37_OPL_O37_IN1_119,
    OPL_O37_OPL_O37_IN2_120,
    OPL_O37_OPL_O37_IN3_121,
    OPL_O37_OPL_O37_OBX_122,
    OPL_O37_OPL_O37_PRT_123,
    OPL_O37_OPL_O37_IN1_124,
    OPL_O37_OPL_O37_IN2_125,
    OPL_O37_OPL_O37_IN3_126,
    OPL_O37_OPL_O37_OBX_127,
    OPL_O37_OPL_O37_PRT_128,
    OPL_O37_OPL_O37_OBX_129,
    OPL_O37_OPL_O37_PRT_130,
    OPL_O37_OPL_O37_IN1_131,
    OPL_O37_OPL_O37_IN2_132,
    OPL_O37_OPL_O37_IN3_133,
    OPL_O37_OPL_O37_OBX_134,
    OPL_O37_OPL_O37_PRT_135,
    OPL_O37_OPL_O37_SAC_137,
    OPL_O37_OPL_O37_OBX_138,
    OPL_O37_OPL_O37_PRT_139,
    OPL_O37_OPL_O37_OBX_140,
    OPL_O37_OPL_O37_PRT_141,
    OPL_O37_OPL_O37_IN1_142,
    OPL_O37_OPL_O37_IN2_143,
    OPL_O37_OPL_O37_IN3_144,
    OPL_O37_OPL_O37_OBX_145,
    OPL_O37_OPL_O37_PRT_146,
    OPL_O37_OPL_O37_SAC_148,
    OPL_O37_OPL_O37_DG1_151,
    OPL_O37_OPL_O37_OBR_152,
    OPL_O37_OPL_O37_ORC_153,
    OPL_O37_OPL_O37_PRT_154,
    OPL_O37_OPL_O37_PRT_155,
    OPL_O37_OPL_O37_TCD_156,
    OPL_O37_OPL_O37_OBX_157,
    OPL_O37_OPL_O37_PRT_158,
    OPL_O37_OPL_O37_OBX_159,
    OPL_O37_OPL_O37_PRT_160,
    OPL_O37_OPL_O37_TQ1_161,
    OPL_O37_OPL_O37_TQ2_162,
    OPL_O37_OPL_O37_OBX_163,
    OPL_O37_OPL_O37_PRT_164,
    OPL_O37_OPL_O37_TQ1_165,
    OPL_O37_OPL_O37_TQ2_166,
    OPL_O37_OPL_O37_OBX_167,
    OPL_O37_OPL_O37_PRT_168,
    OPL_O37_OPL_O37_OBX_169,
    OPL_O37_OPL_O37_PRT_170,
    OPL_O37_OPL_O37_IN1_171,
    OPL_O37_OPL_O37_IN2_172,
    OPL_O37_OPL_O37_IN3_173,
    OPL_O37_OPL_O37_OBX_174,
    OPL_O37_OPL_O37_PRT_175,
    OPL_O37_OPL_O37_SAC_177,
    OPL_O37_OPL_O37_DG1_180,
    OPL_O37_OPL_O37_OBR_181,
    OPL_O37_OPL_O37_ORC_182,
    OPL_O37_OPL_O37_PRT_183,
    OPL_O37_OPL_O37_PRT_184,
    OPL_O37_OPL_O37_TCD_185,
    OPL_O37_OPL_O37_ARV_186,
    OPL_O37_OPL_O37_PD1_187,
    OPL_O37_OPL_O37_PID_188,
    OPL_O37_OPL_O37_PRT_189,
    OPL_O37_OPL_O37_OBX_190,
    OPL_O37_OPL_O37_PRT_191,
    OPL_O37_OPL_O37_OBX_192,
    OPL_O37_OPL_O37_PRT_193,
    OPL_O37_OPL_O37_TQ1_194,
    OPL_O37_OPL_O37_TQ2_195,
    OPL_O37_OPL_O37_OBX_196,
    OPL_O37_OPL_O37_PRT_197,
    OPL_O37_OPL_O37_TQ1_198,
    OPL_O37_OPL_O37_TQ2_199,
    OPL_O37_OPL_O37_OBX_200,
    OPL_O37_OPL_O37_PRT_201,
    OPL_O37_OPL_O37_OBX_202,
    OPL_O37_OPL_O37_PRT_203,
    OPL_O37_OPL_O37_IN1_204,
    OPL_O37_OPL_O37_IN2_205,
    OPL_O37_OPL_O37_IN3_206,
    OPL_O37_OPL_O37_OBX_207,
    OPL_O37_OPL_O37_PRT_208,
    OPL_O37_OPL_O37_SAC_210,
    OPL_O37_OPL_O37_DG1_213,
    OPL_O37_OPL_O37_OBR_214,
    OPL_O37_OPL_O37_ORC_215,
    OPL_O37_OPL_O37_PRT_216,
    OPL_O37_OPL_O37_PRT_217,
    OPL_O37_OPL_O37_TCD_218,
    OPL_O37_OPL_O37_ARV_219,
    OPL_O37_OPL_O37_PD1_220,
    OPL_O37_OPL_O37_PID_221,
    OPL_O37_OPL_O37_PRT_222,
    OPL_O37_OPL_O37_PRT_223,
    OPL_O37_OPL_O37_PV1_224,
    OPL_O37_OPL_O37_PV2_225,
    OPL_O37_OPL_O37_OBX_226,
    OPL_O37_OPL_O37_PRT_227,
    OPL_O37_OPL_O37_OBX_228,
    OPL_O37_OPL_O37_PRT_229,
    OPL_O37_OPL_O37_TQ1_230,
    OPL_O37_OPL_O37_TQ2_231,
    OPL_O37_OPL_O37_OBX_232,
    OPL_O37_OPL_O37_PRT_233,
    OPL_O37_OPL_O37_TQ1_234,
    OPL_O37_OPL_O37_TQ2_235,
    OPL_O37_OPL_O37_OBX_236,
    OPL_O37_OPL_O37_PRT_237,
    OPL_O37_OPL_O37_OBX_238,
    OPL_O37_OPL_O37_PRT_239,
    OPL_O37_OPL_O37_IN1_240,
    OPL_O37_OPL_O37_IN2_241,
    OPL_O37_OPL_O37_IN3_242,
    OPL_O37_OPL_O37_OBX_243,
    OPL_O37_OPL_O37_PRT_244,
    OPL_O37_OPL_O37_SAC_246,
    OPL_O37_OPL_O37_DG1_249,
    OPL_O37_OPL_O37_OBR_250,
    OPL_O37_OPL_O37_ORC_251,
    OPL_O37_OPL_O37_PRT_252,
    OPL_O37_OPL_O37_PRT_253,
    OPL_O37_OPL_O37_TCD_254,
    OPL_O37_OPL_O37_ARV_255,
    OPL_O37_OPL_O37_PD1_256,
    OPL_O37_OPL_O37_PID_257,
    OPL_O37_OPL_O37_PRT_258,
    OPL_O37_OPL_O37_PRT_259,
    OPL_O37_OPL_O37_PV1_260,
    OPL_O37_OPL_O37_PV2_261,
    OPL_O37_OPL_O37_OBR_265,
    OPL_O37_OPL_O37_ORC_266,
    OPL_O37_OPL_O37_OBX_267,
    OPL_O37_OPL_O37_PRT_268,
    OPL_O37_OPL_O37_OBX_269,
    OPL_O37_OPL_O37_PRT_270,
    OPL_O37_OPL_O37_TQ1_271,
    OPL_O37_OPL_O37_TQ2_272,
    OPL_O37_OPL_O37_OBX_273,
    OPL_O37_OPL_O37_PRT_274,
    OPL_O37_OPL_O37_TQ1_275,
    OPL_O37_OPL_O37_TQ2_276,
    OPL_O37_OPL_O37_OBX_277,
    OPL_O37_OPL_O37_PRT_278,
    OPL_O37_OPL_O37_OBX_279,
    OPL_O37_OPL_O37_PRT_280,
    OPL_O37_OPL_O37_TQ1_281,
    OPL_O37_OPL_O37_TQ2_282,
    OPL_O37_OPL_O37_OBX_283,
    OPL_O37_OPL_O37_PRT_284,
    OPL_O37_OPL_O37_DEV_285,
    OPL_O37_OPL_O37_PRT_286,
    OPL_O37_OPL_O37_OBX_287,
    OPL_O37_OPL_O37_PRT_288,
    OPL_O37_OPL_O37_TQ1_289,
    OPL_O37_OPL_O37_TQ2_290,
    OPL_O37_OPL_O37_OBX_291,
    OPL_O37_OPL_O37_PRT_292,
    OPL_O37_OPL_O37_DEV_293,
    OPL_O37_OPL_O37_PRT_294,
    OPL_O37_OPL_O37_TQ1_295,
    OPL_O37_OPL_O37_TQ2_296,
    OPL_O37_OPL_O37_OBX_297,
    OPL_O37_OPL_O37_PRT_298,
    OPL_O37_OPL_O37_TQ1_299,
    OPL_O37_OPL_O37_TQ2_300,
    OPL_O37_OPL_O37_OBX_301,
    OPL_O37_OPL_O37_PRT_302,
    OPL_O37_OPL_O37_DEV_303,
    OPL_O37_OPL_O37_PRT_304,
    OPL_O37_OPL_O37_TQ1_305,
    OPL_O37_OPL_O37_TQ2_306,
    OPL_O37_OPL_O37_OBX_307,
    OPL_O37_OPL_O37_PRT_308,
    FIELD_ID_MAX
  };

  const char* className() const { return "OPL_O37_OPL_O37"; }
  OPL_O37_OPL_O37* create() const { return new OPL_O37_OPL_O37(); }

 private:
  /* Initialize object */
  void init() {
    setName("OPL_O37_OPL_O37");
    addObject<MSH>(OPL_O37_OPL_O37_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OPL_O37_OPL_O37_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(OPL_O37_OPL_O37_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(OPL_O37_OPL_O37_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OPL_O37_OPL_O37_NTE_5, "NTE.5", HL7::optional, HL7::repetition_on);
    addObject<GT1>(OPL_O37_OPL_O37_GT1_9, "GT1.9", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(OPL_O37_OPL_O37_NTE_10, "NTE.10", HL7::optional, HL7::repetition_on);
    addObject<BLG>(OPL_O37_OPL_O37_BLG_14, "BLG.14", HL7::optional, HL7::repetition_off);
    addObject<CTI>(OPL_O37_OPL_O37_CTI_15, "CTI.15", HL7::optional, HL7::repetition_on);
    addObject<FT1>(OPL_O37_OPL_O37_FT1_16, "FT1.16", HL7::optional, HL7::repetition_on);
    addObject<SGH>(OPL_O37_OPL_O37_SGH_18, "SGH.18", HL7::optional, HL7::repetition_off);
    addObject<SGT>(OPL_O37_OPL_O37_SGT_19, "SGT.19", HL7::optional, HL7::repetition_off);
    addObject<AL1>(OPL_O37_OPL_O37_AL1_22, "AL1.22", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OPL_O37_OPL_O37_ARV_23, "ARV.23", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OPL_O37_OPL_O37_PD1_24, "PD1.24", HL7::optional, HL7::repetition_off);
    addObject<PID>(OPL_O37_OPL_O37_PID_25, "PID.25", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_26, "PRT.26", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_27, "OBX.27", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_28, "PRT.28", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_29, "OBX.29", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_30, "PRT.30", HL7::optional, HL7::repetition_on);
    addObject<IN1>(OPL_O37_OPL_O37_IN1_31, "IN1.31", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OPL_O37_OPL_O37_IN2_32, "IN2.32", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OPL_O37_OPL_O37_IN3_33, "IN3.33", HL7::optional, HL7::repetition_off);
    addObject<AL1>(OPL_O37_OPL_O37_AL1_36, "AL1.36", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OPL_O37_OPL_O37_ARV_37, "ARV.37", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OPL_O37_OPL_O37_PD1_38, "PD1.38", HL7::optional, HL7::repetition_off);
    addObject<PID>(OPL_O37_OPL_O37_PID_39, "PID.39", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_40, "PRT.40", HL7::optional, HL7::repetition_on);
    addObject<SPM>(OPL_O37_OPL_O37_SPM_44, "SPM.44", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_45, "OBX.45", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_46, "PRT.46", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_47, "OBX.47", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_48, "PRT.48", HL7::optional, HL7::repetition_on);
    addObject<IN1>(OPL_O37_OPL_O37_IN1_49, "IN1.49", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OPL_O37_OPL_O37_IN2_50, "IN2.50", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OPL_O37_OPL_O37_IN3_51, "IN3.51", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_52, "OBX.52", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_53, "PRT.53", HL7::optional, HL7::repetition_on);
    addObject<IN1>(OPL_O37_OPL_O37_IN1_54, "IN1.54", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OPL_O37_OPL_O37_IN2_55, "IN2.55", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OPL_O37_OPL_O37_IN3_56, "IN3.56", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_57, "OBX.57", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_58, "PRT.58", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_59, "OBX.59", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_60, "PRT.60", HL7::optional, HL7::repetition_on);
    addObject<IN1>(OPL_O37_OPL_O37_IN1_61, "IN1.61", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OPL_O37_OPL_O37_IN2_62, "IN2.62", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OPL_O37_OPL_O37_IN3_63, "IN3.63", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_64, "OBX.64", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_65, "PRT.65", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OPL_O37_OPL_O37_SAC_67, "SAC.67", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_68, "OBX.68", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_69, "PRT.69", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_70, "OBX.70", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_71, "PRT.71", HL7::optional, HL7::repetition_on);
    addObject<IN1>(OPL_O37_OPL_O37_IN1_72, "IN1.72", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OPL_O37_OPL_O37_IN2_73, "IN2.73", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OPL_O37_OPL_O37_IN3_74, "IN3.74", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_75, "OBX.75", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_76, "PRT.76", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OPL_O37_OPL_O37_SAC_78, "SAC.78", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(OPL_O37_OPL_O37_DG1_81, "DG1.81", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OPL_O37_OPL_O37_OBR_82, "OBR.82", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(OPL_O37_OPL_O37_ORC_83, "ORC.83", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_84, "PRT.84", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_85, "PRT.85", HL7::optional, HL7::repetition_on);
    addObject<TCD>(OPL_O37_OPL_O37_TCD_86, "TCD.86", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_87, "OBX.87", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_88, "PRT.88", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_89, "OBX.89", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_90, "PRT.90", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OPL_O37_OPL_O37_TQ1_91, "TQ1.91", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OPL_O37_OPL_O37_TQ2_92, "TQ2.92", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_93, "OBX.93", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_94, "PRT.94", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OPL_O37_OPL_O37_TQ1_95, "TQ1.95", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OPL_O37_OPL_O37_TQ2_96, "TQ2.96", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_97, "OBX.97", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_98, "PRT.98", HL7::optional, HL7::repetition_on);
    addObject<AL1>(OPL_O37_OPL_O37_AL1_101, "AL1.101", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OPL_O37_OPL_O37_ARV_102, "ARV.102", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OPL_O37_OPL_O37_PD1_103, "PD1.103", HL7::optional, HL7::repetition_off);
    addObject<PID>(OPL_O37_OPL_O37_PID_104, "PID.104", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_105, "PRT.105", HL7::optional, HL7::repetition_on);
    addObject<SPM>(OPL_O37_OPL_O37_SPM_109, "SPM.109", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(OPL_O37_OPL_O37_AL1_113, "AL1.113", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_115, "OBX.115", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_116, "PRT.116", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_117, "OBX.117", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_118, "PRT.118", HL7::optional, HL7::repetition_on);
    addObject<IN1>(OPL_O37_OPL_O37_IN1_119, "IN1.119", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OPL_O37_OPL_O37_IN2_120, "IN2.120", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OPL_O37_OPL_O37_IN3_121, "IN3.121", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_122, "OBX.122", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_123, "PRT.123", HL7::optional, HL7::repetition_on);
    addObject<IN1>(OPL_O37_OPL_O37_IN1_124, "IN1.124", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OPL_O37_OPL_O37_IN2_125, "IN2.125", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OPL_O37_OPL_O37_IN3_126, "IN3.126", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_127, "OBX.127", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_128, "PRT.128", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_129, "OBX.129", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_130, "PRT.130", HL7::optional, HL7::repetition_on);
    addObject<IN1>(OPL_O37_OPL_O37_IN1_131, "IN1.131", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OPL_O37_OPL_O37_IN2_132, "IN2.132", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OPL_O37_OPL_O37_IN3_133, "IN3.133", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_134, "OBX.134", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_135, "PRT.135", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OPL_O37_OPL_O37_SAC_137, "SAC.137", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_138, "OBX.138", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_139, "PRT.139", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_140, "OBX.140", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_141, "PRT.141", HL7::optional, HL7::repetition_on);
    addObject<IN1>(OPL_O37_OPL_O37_IN1_142, "IN1.142", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OPL_O37_OPL_O37_IN2_143, "IN2.143", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OPL_O37_OPL_O37_IN3_144, "IN3.144", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_145, "OBX.145", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_146, "PRT.146", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OPL_O37_OPL_O37_SAC_148, "SAC.148", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(OPL_O37_OPL_O37_DG1_151, "DG1.151", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OPL_O37_OPL_O37_OBR_152, "OBR.152", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(OPL_O37_OPL_O37_ORC_153, "ORC.153", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_154, "PRT.154", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_155, "PRT.155", HL7::optional, HL7::repetition_on);
    addObject<TCD>(OPL_O37_OPL_O37_TCD_156, "TCD.156", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_157, "OBX.157", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_158, "PRT.158", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_159, "OBX.159", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_160, "PRT.160", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OPL_O37_OPL_O37_TQ1_161, "TQ1.161", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OPL_O37_OPL_O37_TQ2_162, "TQ2.162", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_163, "OBX.163", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_164, "PRT.164", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OPL_O37_OPL_O37_TQ1_165, "TQ1.165", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OPL_O37_OPL_O37_TQ2_166, "TQ2.166", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_167, "OBX.167", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_168, "PRT.168", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_169, "OBX.169", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_170, "PRT.170", HL7::optional, HL7::repetition_on);
    addObject<IN1>(OPL_O37_OPL_O37_IN1_171, "IN1.171", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OPL_O37_OPL_O37_IN2_172, "IN2.172", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OPL_O37_OPL_O37_IN3_173, "IN3.173", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_174, "OBX.174", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_175, "PRT.175", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OPL_O37_OPL_O37_SAC_177, "SAC.177", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(OPL_O37_OPL_O37_DG1_180, "DG1.180", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OPL_O37_OPL_O37_OBR_181, "OBR.181", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(OPL_O37_OPL_O37_ORC_182, "ORC.182", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_183, "PRT.183", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_184, "PRT.184", HL7::optional, HL7::repetition_on);
    addObject<TCD>(OPL_O37_OPL_O37_TCD_185, "TCD.185", HL7::optional, HL7::repetition_off);
    addObject<ARV>(OPL_O37_OPL_O37_ARV_186, "ARV.186", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OPL_O37_OPL_O37_PD1_187, "PD1.187", HL7::optional, HL7::repetition_off);
    addObject<PID>(OPL_O37_OPL_O37_PID_188, "PID.188", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_189, "PRT.189", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_190, "OBX.190", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_191, "PRT.191", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_192, "OBX.192", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_193, "PRT.193", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OPL_O37_OPL_O37_TQ1_194, "TQ1.194", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OPL_O37_OPL_O37_TQ2_195, "TQ2.195", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_196, "OBX.196", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_197, "PRT.197", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OPL_O37_OPL_O37_TQ1_198, "TQ1.198", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OPL_O37_OPL_O37_TQ2_199, "TQ2.199", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_200, "OBX.200", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_201, "PRT.201", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_202, "OBX.202", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_203, "PRT.203", HL7::optional, HL7::repetition_on);
    addObject<IN1>(OPL_O37_OPL_O37_IN1_204, "IN1.204", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OPL_O37_OPL_O37_IN2_205, "IN2.205", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OPL_O37_OPL_O37_IN3_206, "IN3.206", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_207, "OBX.207", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_208, "PRT.208", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OPL_O37_OPL_O37_SAC_210, "SAC.210", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(OPL_O37_OPL_O37_DG1_213, "DG1.213", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OPL_O37_OPL_O37_OBR_214, "OBR.214", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(OPL_O37_OPL_O37_ORC_215, "ORC.215", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_216, "PRT.216", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_217, "PRT.217", HL7::optional, HL7::repetition_on);
    addObject<TCD>(OPL_O37_OPL_O37_TCD_218, "TCD.218", HL7::optional, HL7::repetition_off);
    addObject<ARV>(OPL_O37_OPL_O37_ARV_219, "ARV.219", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OPL_O37_OPL_O37_PD1_220, "PD1.220", HL7::optional, HL7::repetition_off);
    addObject<PID>(OPL_O37_OPL_O37_PID_221, "PID.221", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_222, "PRT.222", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_223, "PRT.223", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OPL_O37_OPL_O37_PV1_224, "PV1.224", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OPL_O37_OPL_O37_PV2_225, "PV2.225", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_226, "OBX.226", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_227, "PRT.227", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_228, "OBX.228", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_229, "PRT.229", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OPL_O37_OPL_O37_TQ1_230, "TQ1.230", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OPL_O37_OPL_O37_TQ2_231, "TQ2.231", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_232, "OBX.232", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_233, "PRT.233", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OPL_O37_OPL_O37_TQ1_234, "TQ1.234", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OPL_O37_OPL_O37_TQ2_235, "TQ2.235", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_236, "OBX.236", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_237, "PRT.237", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_238, "OBX.238", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_239, "PRT.239", HL7::optional, HL7::repetition_on);
    addObject<IN1>(OPL_O37_OPL_O37_IN1_240, "IN1.240", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OPL_O37_OPL_O37_IN2_241, "IN2.241", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OPL_O37_OPL_O37_IN3_242, "IN3.242", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_243, "OBX.243", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_244, "PRT.244", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OPL_O37_OPL_O37_SAC_246, "SAC.246", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(OPL_O37_OPL_O37_DG1_249, "DG1.249", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OPL_O37_OPL_O37_OBR_250, "OBR.250", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(OPL_O37_OPL_O37_ORC_251, "ORC.251", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_252, "PRT.252", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_253, "PRT.253", HL7::optional, HL7::repetition_on);
    addObject<TCD>(OPL_O37_OPL_O37_TCD_254, "TCD.254", HL7::optional, HL7::repetition_off);
    addObject<ARV>(OPL_O37_OPL_O37_ARV_255, "ARV.255", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OPL_O37_OPL_O37_PD1_256, "PD1.256", HL7::optional, HL7::repetition_off);
    addObject<PID>(OPL_O37_OPL_O37_PID_257, "PID.257", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_258, "PRT.258", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_259, "PRT.259", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OPL_O37_OPL_O37_PV1_260, "PV1.260", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OPL_O37_OPL_O37_PV2_261, "PV2.261", HL7::optional, HL7::repetition_off);
    addObject<OBR>(OPL_O37_OPL_O37_OBR_265, "OBR.265", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(OPL_O37_OPL_O37_ORC_266, "ORC.266", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_267, "OBX.267", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_268, "PRT.268", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_269, "OBX.269", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_270, "PRT.270", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OPL_O37_OPL_O37_TQ1_271, "TQ1.271", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OPL_O37_OPL_O37_TQ2_272, "TQ2.272", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_273, "OBX.273", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_274, "PRT.274", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OPL_O37_OPL_O37_TQ1_275, "TQ1.275", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OPL_O37_OPL_O37_TQ2_276, "TQ2.276", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_277, "OBX.277", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_278, "PRT.278", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_279, "OBX.279", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_280, "PRT.280", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OPL_O37_OPL_O37_TQ1_281, "TQ1.281", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OPL_O37_OPL_O37_TQ2_282, "TQ2.282", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_283, "OBX.283", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_284, "PRT.284", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OPL_O37_OPL_O37_DEV_285, "DEV.285", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_286, "PRT.286", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_287, "OBX.287", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_288, "PRT.288", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OPL_O37_OPL_O37_TQ1_289, "TQ1.289", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OPL_O37_OPL_O37_TQ2_290, "TQ2.290", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_291, "OBX.291", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_292, "PRT.292", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OPL_O37_OPL_O37_DEV_293, "DEV.293", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_294, "PRT.294", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(OPL_O37_OPL_O37_TQ1_295, "TQ1.295", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OPL_O37_OPL_O37_TQ2_296, "TQ2.296", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_297, "OBX.297", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_298, "PRT.298", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OPL_O37_OPL_O37_TQ1_299, "TQ1.299", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OPL_O37_OPL_O37_TQ2_300, "TQ2.300", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_301, "OBX.301", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_302, "PRT.302", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OPL_O37_OPL_O37_DEV_303, "DEV.303", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_304, "PRT.304", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(OPL_O37_OPL_O37_TQ1_305, "TQ1.305", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OPL_O37_OPL_O37_TQ2_306, "TQ2.306", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPL_O37_OPL_O37_OBX_307, "OBX.307", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPL_O37_OPL_O37_PRT_308, "PRT.308", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OPL_O37_OPL_O37_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OPL_O37_OPL_O37_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, OPL_O37_OPL_O37_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, OPL_O37_OPL_O37_UAC_4);
  }
  NTE* getNTE_5(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OPL_O37_OPL_O37_NTE_5);
  }
  GT1* getGT1_9(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, OPL_O37_OPL_O37_GT1_9);
  }
  NTE* getNTE_10(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OPL_O37_OPL_O37_NTE_10);
  }
  BLG* getBLG_14(size_t index = 0) {
    return (BLG*)this->getObjectSafe(index, OPL_O37_OPL_O37_BLG_14);
  }
  CTI* getCTI_15(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, OPL_O37_OPL_O37_CTI_15);
  }
  FT1* getFT1_16(size_t index = 0) {
    return (FT1*)this->getObjectSafe(index, OPL_O37_OPL_O37_FT1_16);
  }
  SGH* getSGH_18(size_t index = 0) {
    return (SGH*)this->getObjectSafe(index, OPL_O37_OPL_O37_SGH_18);
  }
  SGT* getSGT_19(size_t index = 0) {
    return (SGT*)this->getObjectSafe(index, OPL_O37_OPL_O37_SGT_19);
  }
  AL1* getAL1_22(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OPL_O37_OPL_O37_AL1_22);
  }
  ARV* getARV_23(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OPL_O37_OPL_O37_ARV_23);
  }
  PD1* getPD1_24(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OPL_O37_OPL_O37_PD1_24);
  }
  PID* getPID_25(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OPL_O37_OPL_O37_PID_25);
  }
  PRT* getPRT_26(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_26);
  }
  OBX* getOBX_27(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_27);
  }
  PRT* getPRT_28(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_28);
  }
  OBX* getOBX_29(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_29);
  }
  PRT* getPRT_30(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_30);
  }
  IN1* getIN1_31(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN1_31);
  }
  IN2* getIN2_32(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN2_32);
  }
  IN3* getIN3_33(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN3_33);
  }
  AL1* getAL1_36(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OPL_O37_OPL_O37_AL1_36);
  }
  ARV* getARV_37(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OPL_O37_OPL_O37_ARV_37);
  }
  PD1* getPD1_38(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OPL_O37_OPL_O37_PD1_38);
  }
  PID* getPID_39(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OPL_O37_OPL_O37_PID_39);
  }
  PRT* getPRT_40(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_40);
  }
  SPM* getSPM_44(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, OPL_O37_OPL_O37_SPM_44);
  }
  OBX* getOBX_45(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_45);
  }
  PRT* getPRT_46(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_46);
  }
  OBX* getOBX_47(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_47);
  }
  PRT* getPRT_48(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_48);
  }
  IN1* getIN1_49(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN1_49);
  }
  IN2* getIN2_50(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN2_50);
  }
  IN3* getIN3_51(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN3_51);
  }
  OBX* getOBX_52(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_52);
  }
  PRT* getPRT_53(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_53);
  }
  IN1* getIN1_54(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN1_54);
  }
  IN2* getIN2_55(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN2_55);
  }
  IN3* getIN3_56(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN3_56);
  }
  OBX* getOBX_57(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_57);
  }
  PRT* getPRT_58(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_58);
  }
  OBX* getOBX_59(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_59);
  }
  PRT* getPRT_60(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_60);
  }
  IN1* getIN1_61(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN1_61);
  }
  IN2* getIN2_62(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN2_62);
  }
  IN3* getIN3_63(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN3_63);
  }
  OBX* getOBX_64(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_64);
  }
  PRT* getPRT_65(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_65);
  }
  SAC* getSAC_67(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OPL_O37_OPL_O37_SAC_67);
  }
  OBX* getOBX_68(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_68);
  }
  PRT* getPRT_69(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_69);
  }
  OBX* getOBX_70(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_70);
  }
  PRT* getPRT_71(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_71);
  }
  IN1* getIN1_72(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN1_72);
  }
  IN2* getIN2_73(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN2_73);
  }
  IN3* getIN3_74(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN3_74);
  }
  OBX* getOBX_75(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_75);
  }
  PRT* getPRT_76(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_76);
  }
  SAC* getSAC_78(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OPL_O37_OPL_O37_SAC_78);
  }
  DG1* getDG1_81(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, OPL_O37_OPL_O37_DG1_81);
  }
  OBR* getOBR_82(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBR_82);
  }
  ORC* getORC_83(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OPL_O37_OPL_O37_ORC_83);
  }
  PRT* getPRT_84(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_84);
  }
  PRT* getPRT_85(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_85);
  }
  TCD* getTCD_86(size_t index = 0) {
    return (TCD*)this->getObjectSafe(index, OPL_O37_OPL_O37_TCD_86);
  }
  OBX* getOBX_87(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_87);
  }
  PRT* getPRT_88(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_88);
  }
  OBX* getOBX_89(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_89);
  }
  PRT* getPRT_90(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_90);
  }
  TQ1* getTQ1_91(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ1_91);
  }
  TQ2* getTQ2_92(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ2_92);
  }
  OBX* getOBX_93(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_93);
  }
  PRT* getPRT_94(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_94);
  }
  TQ1* getTQ1_95(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ1_95);
  }
  TQ2* getTQ2_96(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ2_96);
  }
  OBX* getOBX_97(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_97);
  }
  PRT* getPRT_98(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_98);
  }
  AL1* getAL1_101(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OPL_O37_OPL_O37_AL1_101);
  }
  ARV* getARV_102(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OPL_O37_OPL_O37_ARV_102);
  }
  PD1* getPD1_103(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OPL_O37_OPL_O37_PD1_103);
  }
  PID* getPID_104(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OPL_O37_OPL_O37_PID_104);
  }
  PRT* getPRT_105(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_105);
  }
  SPM* getSPM_109(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, OPL_O37_OPL_O37_SPM_109);
  }
  AL1* getAL1_113(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OPL_O37_OPL_O37_AL1_113);
  }
  OBX* getOBX_115(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_115);
  }
  PRT* getPRT_116(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_116);
  }
  OBX* getOBX_117(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_117);
  }
  PRT* getPRT_118(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_118);
  }
  IN1* getIN1_119(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN1_119);
  }
  IN2* getIN2_120(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN2_120);
  }
  IN3* getIN3_121(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN3_121);
  }
  OBX* getOBX_122(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_122);
  }
  PRT* getPRT_123(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_123);
  }
  IN1* getIN1_124(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN1_124);
  }
  IN2* getIN2_125(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN2_125);
  }
  IN3* getIN3_126(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN3_126);
  }
  OBX* getOBX_127(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_127);
  }
  PRT* getPRT_128(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_128);
  }
  OBX* getOBX_129(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_129);
  }
  PRT* getPRT_130(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_130);
  }
  IN1* getIN1_131(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN1_131);
  }
  IN2* getIN2_132(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN2_132);
  }
  IN3* getIN3_133(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN3_133);
  }
  OBX* getOBX_134(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_134);
  }
  PRT* getPRT_135(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_135);
  }
  SAC* getSAC_137(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OPL_O37_OPL_O37_SAC_137);
  }
  OBX* getOBX_138(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_138);
  }
  PRT* getPRT_139(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_139);
  }
  OBX* getOBX_140(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_140);
  }
  PRT* getPRT_141(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_141);
  }
  IN1* getIN1_142(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN1_142);
  }
  IN2* getIN2_143(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN2_143);
  }
  IN3* getIN3_144(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN3_144);
  }
  OBX* getOBX_145(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_145);
  }
  PRT* getPRT_146(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_146);
  }
  SAC* getSAC_148(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OPL_O37_OPL_O37_SAC_148);
  }
  DG1* getDG1_151(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, OPL_O37_OPL_O37_DG1_151);
  }
  OBR* getOBR_152(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBR_152);
  }
  ORC* getORC_153(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OPL_O37_OPL_O37_ORC_153);
  }
  PRT* getPRT_154(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_154);
  }
  PRT* getPRT_155(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_155);
  }
  TCD* getTCD_156(size_t index = 0) {
    return (TCD*)this->getObjectSafe(index, OPL_O37_OPL_O37_TCD_156);
  }
  OBX* getOBX_157(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_157);
  }
  PRT* getPRT_158(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_158);
  }
  OBX* getOBX_159(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_159);
  }
  PRT* getPRT_160(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_160);
  }
  TQ1* getTQ1_161(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ1_161);
  }
  TQ2* getTQ2_162(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ2_162);
  }
  OBX* getOBX_163(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_163);
  }
  PRT* getPRT_164(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_164);
  }
  TQ1* getTQ1_165(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ1_165);
  }
  TQ2* getTQ2_166(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ2_166);
  }
  OBX* getOBX_167(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_167);
  }
  PRT* getPRT_168(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_168);
  }
  OBX* getOBX_169(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_169);
  }
  PRT* getPRT_170(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_170);
  }
  IN1* getIN1_171(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN1_171);
  }
  IN2* getIN2_172(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN2_172);
  }
  IN3* getIN3_173(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN3_173);
  }
  OBX* getOBX_174(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_174);
  }
  PRT* getPRT_175(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_175);
  }
  SAC* getSAC_177(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OPL_O37_OPL_O37_SAC_177);
  }
  DG1* getDG1_180(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, OPL_O37_OPL_O37_DG1_180);
  }
  OBR* getOBR_181(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBR_181);
  }
  ORC* getORC_182(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OPL_O37_OPL_O37_ORC_182);
  }
  PRT* getPRT_183(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_183);
  }
  PRT* getPRT_184(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_184);
  }
  TCD* getTCD_185(size_t index = 0) {
    return (TCD*)this->getObjectSafe(index, OPL_O37_OPL_O37_TCD_185);
  }
  ARV* getARV_186(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OPL_O37_OPL_O37_ARV_186);
  }
  PD1* getPD1_187(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OPL_O37_OPL_O37_PD1_187);
  }
  PID* getPID_188(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OPL_O37_OPL_O37_PID_188);
  }
  PRT* getPRT_189(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_189);
  }
  OBX* getOBX_190(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_190);
  }
  PRT* getPRT_191(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_191);
  }
  OBX* getOBX_192(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_192);
  }
  PRT* getPRT_193(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_193);
  }
  TQ1* getTQ1_194(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ1_194);
  }
  TQ2* getTQ2_195(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ2_195);
  }
  OBX* getOBX_196(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_196);
  }
  PRT* getPRT_197(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_197);
  }
  TQ1* getTQ1_198(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ1_198);
  }
  TQ2* getTQ2_199(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ2_199);
  }
  OBX* getOBX_200(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_200);
  }
  PRT* getPRT_201(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_201);
  }
  OBX* getOBX_202(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_202);
  }
  PRT* getPRT_203(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_203);
  }
  IN1* getIN1_204(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN1_204);
  }
  IN2* getIN2_205(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN2_205);
  }
  IN3* getIN3_206(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN3_206);
  }
  OBX* getOBX_207(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_207);
  }
  PRT* getPRT_208(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_208);
  }
  SAC* getSAC_210(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OPL_O37_OPL_O37_SAC_210);
  }
  DG1* getDG1_213(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, OPL_O37_OPL_O37_DG1_213);
  }
  OBR* getOBR_214(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBR_214);
  }
  ORC* getORC_215(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OPL_O37_OPL_O37_ORC_215);
  }
  PRT* getPRT_216(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_216);
  }
  PRT* getPRT_217(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_217);
  }
  TCD* getTCD_218(size_t index = 0) {
    return (TCD*)this->getObjectSafe(index, OPL_O37_OPL_O37_TCD_218);
  }
  ARV* getARV_219(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OPL_O37_OPL_O37_ARV_219);
  }
  PD1* getPD1_220(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OPL_O37_OPL_O37_PD1_220);
  }
  PID* getPID_221(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OPL_O37_OPL_O37_PID_221);
  }
  PRT* getPRT_222(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_222);
  }
  PRT* getPRT_223(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_223);
  }
  PV1* getPV1_224(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OPL_O37_OPL_O37_PV1_224);
  }
  PV2* getPV2_225(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OPL_O37_OPL_O37_PV2_225);
  }
  OBX* getOBX_226(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_226);
  }
  PRT* getPRT_227(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_227);
  }
  OBX* getOBX_228(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_228);
  }
  PRT* getPRT_229(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_229);
  }
  TQ1* getTQ1_230(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ1_230);
  }
  TQ2* getTQ2_231(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ2_231);
  }
  OBX* getOBX_232(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_232);
  }
  PRT* getPRT_233(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_233);
  }
  TQ1* getTQ1_234(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ1_234);
  }
  TQ2* getTQ2_235(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ2_235);
  }
  OBX* getOBX_236(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_236);
  }
  PRT* getPRT_237(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_237);
  }
  OBX* getOBX_238(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_238);
  }
  PRT* getPRT_239(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_239);
  }
  IN1* getIN1_240(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN1_240);
  }
  IN2* getIN2_241(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN2_241);
  }
  IN3* getIN3_242(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OPL_O37_OPL_O37_IN3_242);
  }
  OBX* getOBX_243(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_243);
  }
  PRT* getPRT_244(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_244);
  }
  SAC* getSAC_246(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OPL_O37_OPL_O37_SAC_246);
  }
  DG1* getDG1_249(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, OPL_O37_OPL_O37_DG1_249);
  }
  OBR* getOBR_250(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBR_250);
  }
  ORC* getORC_251(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OPL_O37_OPL_O37_ORC_251);
  }
  PRT* getPRT_252(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_252);
  }
  PRT* getPRT_253(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_253);
  }
  TCD* getTCD_254(size_t index = 0) {
    return (TCD*)this->getObjectSafe(index, OPL_O37_OPL_O37_TCD_254);
  }
  ARV* getARV_255(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OPL_O37_OPL_O37_ARV_255);
  }
  PD1* getPD1_256(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OPL_O37_OPL_O37_PD1_256);
  }
  PID* getPID_257(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OPL_O37_OPL_O37_PID_257);
  }
  PRT* getPRT_258(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_258);
  }
  PRT* getPRT_259(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_259);
  }
  PV1* getPV1_260(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OPL_O37_OPL_O37_PV1_260);
  }
  PV2* getPV2_261(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OPL_O37_OPL_O37_PV2_261);
  }
  OBR* getOBR_265(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBR_265);
  }
  ORC* getORC_266(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OPL_O37_OPL_O37_ORC_266);
  }
  OBX* getOBX_267(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_267);
  }
  PRT* getPRT_268(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_268);
  }
  OBX* getOBX_269(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_269);
  }
  PRT* getPRT_270(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_270);
  }
  TQ1* getTQ1_271(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ1_271);
  }
  TQ2* getTQ2_272(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ2_272);
  }
  OBX* getOBX_273(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_273);
  }
  PRT* getPRT_274(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_274);
  }
  TQ1* getTQ1_275(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ1_275);
  }
  TQ2* getTQ2_276(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ2_276);
  }
  OBX* getOBX_277(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_277);
  }
  PRT* getPRT_278(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_278);
  }
  OBX* getOBX_279(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_279);
  }
  PRT* getPRT_280(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_280);
  }
  TQ1* getTQ1_281(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ1_281);
  }
  TQ2* getTQ2_282(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ2_282);
  }
  OBX* getOBX_283(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_283);
  }
  PRT* getPRT_284(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_284);
  }
  DEV* getDEV_285(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OPL_O37_OPL_O37_DEV_285);
  }
  PRT* getPRT_286(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_286);
  }
  OBX* getOBX_287(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_287);
  }
  PRT* getPRT_288(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_288);
  }
  TQ1* getTQ1_289(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ1_289);
  }
  TQ2* getTQ2_290(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ2_290);
  }
  OBX* getOBX_291(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_291);
  }
  PRT* getPRT_292(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_292);
  }
  DEV* getDEV_293(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OPL_O37_OPL_O37_DEV_293);
  }
  PRT* getPRT_294(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_294);
  }
  TQ1* getTQ1_295(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ1_295);
  }
  TQ2* getTQ2_296(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ2_296);
  }
  OBX* getOBX_297(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_297);
  }
  PRT* getPRT_298(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_298);
  }
  TQ1* getTQ1_299(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ1_299);
  }
  TQ2* getTQ2_300(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ2_300);
  }
  OBX* getOBX_301(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_301);
  }
  PRT* getPRT_302(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_302);
  }
  DEV* getDEV_303(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OPL_O37_OPL_O37_DEV_303);
  }
  PRT* getPRT_304(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_304);
  }
  TQ1* getTQ1_305(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ1_305);
  }
  TQ2* getTQ2_306(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OPL_O37_OPL_O37_TQ2_306);
  }
  OBX* getOBX_307(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPL_O37_OPL_O37_OBX_307);
  }
  PRT* getPRT_308(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPL_O37_OPL_O37_PRT_308);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_5(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_NTE_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_9(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_GT1_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_10(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_NTE_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBLG_14(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_BLG_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_15(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_CTI_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFT1_16(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_FT1_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSGH_18(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_SGH_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSGT_19(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_SGT_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_22(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_AL1_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_23(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_ARV_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_24(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PD1_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_25(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PID_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_26(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_27(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_28(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_29(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_30(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_31(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN1_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_32(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN2_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_33(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN3_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_36(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_AL1_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_37(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_ARV_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_38(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PD1_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_39(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PID_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_40(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_44(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_SPM_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_45(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_46(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_47(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_48(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_49(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN1_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_50(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN2_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_51(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN3_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_52(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_53(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_54(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN1_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_55(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN2_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_56(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN3_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_57(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_58(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_59(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_60(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_61(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN1_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_62(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN2_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_63(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN3_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_64(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_65(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_67(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_SAC_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_68(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_68) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_69(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_70(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_70) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_71(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_72(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN1_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_73(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN2_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_74(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN3_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_75(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_76(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_78(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_SAC_78) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_81(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_DG1_81) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_82(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBR_82) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_83(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_ORC_83) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_84(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_84) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_85(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_85) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTCD_86(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TCD_86) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_87(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_87) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_88(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_88) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_89(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_89) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_90(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_90) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_91(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ1_91) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_92(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ2_92) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_93(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_93) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_94(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_94) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_95(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ1_95) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_96(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ2_96) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_97(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_97) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_98(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_98) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_101(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_AL1_101) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_102(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_ARV_102) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_103(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PD1_103) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_104(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PID_104) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_105(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_105) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_109(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_SPM_109) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_113(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_AL1_113) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_115(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_115) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_116(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_116) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_117(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_117) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_118(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_118) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_119(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN1_119) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_120(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN2_120) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_121(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN3_121) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_122(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_122) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_123(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_123) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_124(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN1_124) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_125(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN2_125) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_126(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN3_126) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_127(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_127) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_128(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_128) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_129(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_129) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_130(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_130) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_131(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN1_131) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_132(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN2_132) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_133(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN3_133) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_134(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_134) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_135(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_135) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_137(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_SAC_137) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_138(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_138) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_139(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_139) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_140(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_140) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_141(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_141) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_142(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN1_142) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_143(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN2_143) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_144(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN3_144) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_145(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_145) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_146(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_146) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_148(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_SAC_148) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_151(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_DG1_151) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_152(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBR_152) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_153(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_ORC_153) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_154(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_154) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_155(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_155) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTCD_156(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TCD_156) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_157(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_157) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_158(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_158) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_159(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_159) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_160(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_160) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_161(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ1_161) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_162(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ2_162) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_163(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_163) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_164(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_164) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_165(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ1_165) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_166(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ2_166) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_167(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_167) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_168(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_168) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_169(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_169) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_170(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_170) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_171(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN1_171) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_172(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN2_172) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_173(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN3_173) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_174(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_174) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_175(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_175) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_177(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_SAC_177) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_180(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_DG1_180) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_181(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBR_181) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_182(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_ORC_182) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_183(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_183) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_184(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_184) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTCD_185(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TCD_185) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_186(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_ARV_186) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_187(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PD1_187) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_188(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PID_188) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_189(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_189) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_190(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_190) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_191(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_191) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_192(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_192) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_193(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_193) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_194(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ1_194) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_195(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ2_195) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_196(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_196) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_197(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_197) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_198(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ1_198) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_199(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ2_199) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_200(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_200) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_201(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_201) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_202(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_202) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_203(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_203) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_204(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN1_204) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_205(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN2_205) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_206(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN3_206) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_207(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_207) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_208(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_208) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_210(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_SAC_210) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_213(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_DG1_213) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_214(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBR_214) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_215(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_ORC_215) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_216(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_216) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_217(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_217) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTCD_218(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TCD_218) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_219(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_ARV_219) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_220(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PD1_220) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_221(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PID_221) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_222(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_222) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_223(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_223) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_224(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PV1_224) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_225(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PV2_225) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_226(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_226) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_227(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_227) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_228(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_228) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_229(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_229) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_230(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ1_230) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_231(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ2_231) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_232(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_232) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_233(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_233) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_234(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ1_234) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_235(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ2_235) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_236(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_236) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_237(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_237) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_238(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_238) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_239(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_239) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_240(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN1_240) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_241(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN2_241) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_242(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_IN3_242) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_243(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_243) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_244(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_244) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_246(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_SAC_246) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_249(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_DG1_249) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_250(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBR_250) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_251(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_ORC_251) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_252(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_252) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_253(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_253) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTCD_254(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TCD_254) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_255(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_ARV_255) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_256(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PD1_256) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_257(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PID_257) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_258(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_258) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_259(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_259) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_260(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PV1_260) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_261(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PV2_261) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_265(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBR_265) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_266(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_ORC_266) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_267(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_267) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_268(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_268) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_269(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_269) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_270(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_270) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_271(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ1_271) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_272(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ2_272) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_273(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_273) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_274(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_274) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_275(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ1_275) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_276(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ2_276) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_277(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_277) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_278(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_278) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_279(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_279) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_280(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_280) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_281(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ1_281) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_282(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ2_282) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_283(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_283) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_284(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_284) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_285(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_DEV_285) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_286(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_286) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_287(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_287) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_288(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_288) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_289(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ1_289) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_290(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ2_290) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_291(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_291) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_292(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_292) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_293(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_DEV_293) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_294(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_294) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_295(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ1_295) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_296(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ2_296) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_297(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_297) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_298(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_298) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_299(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ1_299) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_300(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ2_300) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_301(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_301) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_302(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_302) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_303(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_DEV_303) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_304(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_304) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_305(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ1_305) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_306(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_TQ2_306) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_307(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_OBX_307) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_308(size_t index = 0) {
    try {
      return this->getObject(index, OPL_O37_OPL_O37_PRT_308) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OPL_O37_OPL_O37_ */
} /* namespace HL7_29 */
#endif /*  __OPL_O37_OPL_O37__29_H__ */
