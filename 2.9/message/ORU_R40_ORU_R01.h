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


#ifndef __ORU_R40_ORU_R01__29_H__
#define __ORU_R40_ORU_R01__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/CTD.h"
#include "../segment/CTI.h"
#include "../segment/DEV.h"
#include "../segment/DSC.h"
#include "../segment/FT1.h"
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
#include "../segment/SFT.h"
#include "../segment/SPM.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/TXA.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct ORU_R40_ORU_R01_PATIENT_RESULT; /* PATIENT_RESULT */
struct ORU_R40_ORU_R01_PATIENT; /* PATIENT */
struct ORU_R40_ORU_R01_ORDER_OBSERVATION; /* ORDER_OBSERVATION */
struct ORU_R40_ORU_R01_DEVICE; /* DEVICE */
struct ORU_R40_ORU_R01_NEXT_OF_KIN; /* NEXT_OF_KIN */
struct ORU_R40_ORU_R01_PATIENT_OBSERVATION; /* PATIENT_OBSERVATION */
struct ORU_R40_ORU_R01_VISIT; /* VISIT */
struct ORU_R40_ORU_R01_INSURANCE; /* INSURANCE */
struct ORU_R40_ORU_R01_NEXT_OF_KIN; /* NEXT_OF_KIN */
struct ORU_R40_ORU_R01_PATIENT_OBSERVATION; /* PATIENT_OBSERVATION */
struct ORU_R40_ORU_R01_VISIT; /* VISIT */
struct ORU_R40_ORU_R01_INSURANCE; /* INSURANCE */
struct ORU_R40_ORU_R01_SPECIMEN; /* SPECIMEN */
struct ORU_R40_ORU_R01_COMMON_ORDER; /* COMMON_ORDER */
struct ORU_R40_ORU_R01_OBSERVATION_PARTICIPATION; /* OBSERVATION_PARTICIPATION */
struct ORU_R40_ORU_R01_TIMING_QTY; /* TIMING_QTY */
struct ORU_R40_ORU_R01_OBSERVATION; /* OBSERVATION */
struct ORU_R40_ORU_R01_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct ORU_R40_ORU_R01_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct ORU_R40_ORU_R01_ORDER_DOCUMENT; /* ORDER_DOCUMENT */
struct ORU_R40_ORU_R01_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct ORU_R40_ORU_R01_ORDER_DOCUMENT; /* ORDER_DOCUMENT */
struct ORU_R40_ORU_R01_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct ORU_R40_ORU_R01_ORDER_DOCUMENT; /* ORDER_DOCUMENT */
struct ORU_R40_ORU_R01_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct ORU_R40_ORU_R01_ORDER_DOCUMENT; /* ORDER_DOCUMENT */
struct ORU_R40_ORU_R01_NEXT_OF_KIN; /* NEXT_OF_KIN */
struct ORU_R40_ORU_R01_PATIENT_OBSERVATION; /* PATIENT_OBSERVATION */
struct ORU_R40_ORU_R01_VISIT; /* VISIT */
struct ORU_R40_ORU_R01_INSURANCE; /* INSURANCE */
struct ORU_R40_ORU_R01_SPECIMEN; /* SPECIMEN */
struct ORU_R40_ORU_R01_COMMON_ORDER; /* COMMON_ORDER */
struct ORU_R40_ORU_R01_OBSERVATION_PARTICIPATION; /* OBSERVATION_PARTICIPATION */
struct ORU_R40_ORU_R01_TIMING_QTY; /* TIMING_QTY */
struct ORU_R40_ORU_R01_OBSERVATION; /* OBSERVATION */
struct ORU_R40_ORU_R01_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct ORU_R40_ORU_R01_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct ORU_R40_ORU_R01_ORDER_DOCUMENT; /* ORDER_DOCUMENT */
struct ORU_R40_ORU_R01_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct ORU_R40_ORU_R01_ORDER_DOCUMENT; /* ORDER_DOCUMENT */
struct ORU_R40_ORU_R01_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct ORU_R40_ORU_R01_ORDER_DOCUMENT; /* ORDER_DOCUMENT */
struct ORU_R40_ORU_R01_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct ORU_R40_ORU_R01_ORDER_DOCUMENT; /* ORDER_DOCUMENT */

/*  */
struct ORU_R40_ORU_R01 : public HL7Message {
  ORU_R40_ORU_R01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORU_R40_ORU_R01_MSH_1,
    ORU_R40_ORU_R01_ARV_2,
    ORU_R40_ORU_R01_SFT_3,
    ORU_R40_ORU_R01_UAC_4,
    ORU_R40_ORU_R01_DSC_6,
    ORU_R40_ORU_R01_ARV_14,
    ORU_R40_ORU_R01_NTE_15,
    ORU_R40_ORU_R01_OH1_16,
    ORU_R40_ORU_R01_OH2_17,
    ORU_R40_ORU_R01_OH3_18,
    ORU_R40_ORU_R01_OH4_19,
    ORU_R40_ORU_R01_PD1_20,
    ORU_R40_ORU_R01_PID_21,
    ORU_R40_ORU_R01_PRT_22,
    ORU_R40_ORU_R01_NK1_23,
    ORU_R40_ORU_R01_OH2_24,
    ORU_R40_ORU_R01_OH3_25,
    ORU_R40_ORU_R01_NK1_26,
    ORU_R40_ORU_R01_OH2_27,
    ORU_R40_ORU_R01_OH3_28,
    ORU_R40_ORU_R01_OBX_29,
    ORU_R40_ORU_R01_PRT_30,
    ORU_R40_ORU_R01_NK1_31,
    ORU_R40_ORU_R01_OH2_32,
    ORU_R40_ORU_R01_OH3_33,
    ORU_R40_ORU_R01_OBX_34,
    ORU_R40_ORU_R01_PRT_35,
    ORU_R40_ORU_R01_PRT_36,
    ORU_R40_ORU_R01_PV1_37,
    ORU_R40_ORU_R01_PV2_38,
    ORU_R40_ORU_R01_NK1_39,
    ORU_R40_ORU_R01_OH2_40,
    ORU_R40_ORU_R01_OH3_41,
    ORU_R40_ORU_R01_OBX_42,
    ORU_R40_ORU_R01_PRT_43,
    ORU_R40_ORU_R01_PRT_44,
    ORU_R40_ORU_R01_PV1_45,
    ORU_R40_ORU_R01_PV2_46,
    ORU_R40_ORU_R01_IN1_47,
    ORU_R40_ORU_R01_IN2_48,
    ORU_R40_ORU_R01_IN3_49,
    ORU_R40_ORU_R01_ARV_54,
    ORU_R40_ORU_R01_NTE_55,
    ORU_R40_ORU_R01_OH1_56,
    ORU_R40_ORU_R01_OH2_57,
    ORU_R40_ORU_R01_OH3_58,
    ORU_R40_ORU_R01_OH4_59,
    ORU_R40_ORU_R01_PD1_60,
    ORU_R40_ORU_R01_PID_61,
    ORU_R40_ORU_R01_PRT_62,
    ORU_R40_ORU_R01_CTD_68,
    ORU_R40_ORU_R01_CTI_69,
    ORU_R40_ORU_R01_FT1_70,
    ORU_R40_ORU_R01_NTE_71,
    ORU_R40_ORU_R01_OBR_72,
    ORU_R40_ORU_R01_NK1_73,
    ORU_R40_ORU_R01_OH2_74,
    ORU_R40_ORU_R01_OH3_75,
    ORU_R40_ORU_R01_NK1_76,
    ORU_R40_ORU_R01_OH2_77,
    ORU_R40_ORU_R01_OH3_78,
    ORU_R40_ORU_R01_OBX_79,
    ORU_R40_ORU_R01_PRT_80,
    ORU_R40_ORU_R01_NK1_81,
    ORU_R40_ORU_R01_OH2_82,
    ORU_R40_ORU_R01_OH3_83,
    ORU_R40_ORU_R01_OBX_84,
    ORU_R40_ORU_R01_PRT_85,
    ORU_R40_ORU_R01_PRT_86,
    ORU_R40_ORU_R01_PV1_87,
    ORU_R40_ORU_R01_PV2_88,
    ORU_R40_ORU_R01_NK1_89,
    ORU_R40_ORU_R01_OH2_90,
    ORU_R40_ORU_R01_OH3_91,
    ORU_R40_ORU_R01_OBX_92,
    ORU_R40_ORU_R01_PRT_93,
    ORU_R40_ORU_R01_PRT_94,
    ORU_R40_ORU_R01_PV1_95,
    ORU_R40_ORU_R01_PV2_96,
    ORU_R40_ORU_R01_IN1_97,
    ORU_R40_ORU_R01_IN2_98,
    ORU_R40_ORU_R01_IN3_99,
    ORU_R40_ORU_R01_NK1_100,
    ORU_R40_ORU_R01_OH2_101,
    ORU_R40_ORU_R01_OH3_102,
    ORU_R40_ORU_R01_OBX_103,
    ORU_R40_ORU_R01_PRT_104,
    ORU_R40_ORU_R01_PRT_105,
    ORU_R40_ORU_R01_PV1_106,
    ORU_R40_ORU_R01_PV2_107,
    ORU_R40_ORU_R01_IN1_108,
    ORU_R40_ORU_R01_IN2_109,
    ORU_R40_ORU_R01_IN3_110,
    ORU_R40_ORU_R01_SPM_112,
    ORU_R40_ORU_R01_OBX_113,
    ORU_R40_ORU_R01_PRT_114,
    ORU_R40_ORU_R01_NK1_115,
    ORU_R40_ORU_R01_OH2_116,
    ORU_R40_ORU_R01_OH3_117,
    ORU_R40_ORU_R01_OBX_118,
    ORU_R40_ORU_R01_PRT_119,
    ORU_R40_ORU_R01_PRT_120,
    ORU_R40_ORU_R01_PV1_121,
    ORU_R40_ORU_R01_PV2_122,
    ORU_R40_ORU_R01_IN1_123,
    ORU_R40_ORU_R01_IN2_124,
    ORU_R40_ORU_R01_IN3_125,
    ORU_R40_ORU_R01_SPM_127,
    ORU_R40_ORU_R01_ORC_129,
    ORU_R40_ORU_R01_PRT_130,
    ORU_R40_ORU_R01_OBX_131,
    ORU_R40_ORU_R01_PRT_132,
    ORU_R40_ORU_R01_OBX_133,
    ORU_R40_ORU_R01_PRT_134,
    ORU_R40_ORU_R01_OBX_135,
    ORU_R40_ORU_R01_PRT_136,
    ORU_R40_ORU_R01_TXA_137,
    ORU_R40_ORU_R01_NK1_138,
    ORU_R40_ORU_R01_OH2_139,
    ORU_R40_ORU_R01_OH3_140,
    ORU_R40_ORU_R01_OBX_141,
    ORU_R40_ORU_R01_PRT_142,
    ORU_R40_ORU_R01_PRT_143,
    ORU_R40_ORU_R01_PV1_144,
    ORU_R40_ORU_R01_PV2_145,
    ORU_R40_ORU_R01_IN1_146,
    ORU_R40_ORU_R01_IN2_147,
    ORU_R40_ORU_R01_IN3_148,
    ORU_R40_ORU_R01_SPM_150,
    ORU_R40_ORU_R01_ORC_152,
    ORU_R40_ORU_R01_PRT_153,
    ORU_R40_ORU_R01_DEV_154,
    ORU_R40_ORU_R01_PRT_155,
    ORU_R40_ORU_R01_OBX_156,
    ORU_R40_ORU_R01_PRT_157,
    ORU_R40_ORU_R01_OBX_158,
    ORU_R40_ORU_R01_PRT_159,
    ORU_R40_ORU_R01_OBX_160,
    ORU_R40_ORU_R01_PRT_161,
    ORU_R40_ORU_R01_TXA_162,
    ORU_R40_ORU_R01_NK1_163,
    ORU_R40_ORU_R01_OH2_164,
    ORU_R40_ORU_R01_OH3_165,
    ORU_R40_ORU_R01_OBX_166,
    ORU_R40_ORU_R01_PRT_167,
    ORU_R40_ORU_R01_PRT_168,
    ORU_R40_ORU_R01_PV1_169,
    ORU_R40_ORU_R01_PV2_170,
    ORU_R40_ORU_R01_IN1_171,
    ORU_R40_ORU_R01_IN2_172,
    ORU_R40_ORU_R01_IN3_173,
    ORU_R40_ORU_R01_SPM_175,
    ORU_R40_ORU_R01_ORC_177,
    ORU_R40_ORU_R01_PRT_178,
    ORU_R40_ORU_R01_DEV_179,
    ORU_R40_ORU_R01_PRT_180,
    ORU_R40_ORU_R01_TQ1_181,
    ORU_R40_ORU_R01_TQ2_182,
    ORU_R40_ORU_R01_OBX_183,
    ORU_R40_ORU_R01_PRT_184,
    ORU_R40_ORU_R01_OBX_185,
    ORU_R40_ORU_R01_PRT_186,
    ORU_R40_ORU_R01_OBX_187,
    ORU_R40_ORU_R01_PRT_188,
    ORU_R40_ORU_R01_TXA_189,
    ORU_R40_ORU_R01_NK1_190,
    ORU_R40_ORU_R01_OH2_191,
    ORU_R40_ORU_R01_OH3_192,
    ORU_R40_ORU_R01_OBX_193,
    ORU_R40_ORU_R01_PRT_194,
    ORU_R40_ORU_R01_PRT_195,
    ORU_R40_ORU_R01_PV1_196,
    ORU_R40_ORU_R01_PV2_197,
    ORU_R40_ORU_R01_IN1_198,
    ORU_R40_ORU_R01_IN2_199,
    ORU_R40_ORU_R01_IN3_200,
    ORU_R40_ORU_R01_SPM_202,
    ORU_R40_ORU_R01_ORC_204,
    ORU_R40_ORU_R01_PRT_205,
    ORU_R40_ORU_R01_DEV_206,
    ORU_R40_ORU_R01_PRT_207,
    ORU_R40_ORU_R01_TQ1_208,
    ORU_R40_ORU_R01_TQ2_209,
    ORU_R40_ORU_R01_NTE_210,
    ORU_R40_ORU_R01_OBX_211,
    ORU_R40_ORU_R01_PRT_212,
    ORU_R40_ORU_R01_OBX_213,
    ORU_R40_ORU_R01_PRT_214,
    ORU_R40_ORU_R01_OBX_215,
    ORU_R40_ORU_R01_PRT_216,
    ORU_R40_ORU_R01_OBX_217,
    ORU_R40_ORU_R01_PRT_218,
    ORU_R40_ORU_R01_TXA_219,
    ORU_R40_ORU_R01_ARV_224,
    ORU_R40_ORU_R01_NTE_225,
    ORU_R40_ORU_R01_OH1_226,
    ORU_R40_ORU_R01_OH2_227,
    ORU_R40_ORU_R01_OH3_228,
    ORU_R40_ORU_R01_OH4_229,
    ORU_R40_ORU_R01_PD1_230,
    ORU_R40_ORU_R01_PID_231,
    ORU_R40_ORU_R01_PRT_232,
    ORU_R40_ORU_R01_CTD_238,
    ORU_R40_ORU_R01_CTI_239,
    ORU_R40_ORU_R01_FT1_240,
    ORU_R40_ORU_R01_NTE_241,
    ORU_R40_ORU_R01_OBR_242,
    ORU_R40_ORU_R01_DEV_243,
    ORU_R40_ORU_R01_OBX_244,
    ORU_R40_ORU_R01_NK1_245,
    ORU_R40_ORU_R01_OH2_246,
    ORU_R40_ORU_R01_OH3_247,
    ORU_R40_ORU_R01_NK1_248,
    ORU_R40_ORU_R01_OH2_249,
    ORU_R40_ORU_R01_OH3_250,
    ORU_R40_ORU_R01_OBX_251,
    ORU_R40_ORU_R01_PRT_252,
    ORU_R40_ORU_R01_NK1_253,
    ORU_R40_ORU_R01_OH2_254,
    ORU_R40_ORU_R01_OH3_255,
    ORU_R40_ORU_R01_OBX_256,
    ORU_R40_ORU_R01_PRT_257,
    ORU_R40_ORU_R01_PRT_258,
    ORU_R40_ORU_R01_PV1_259,
    ORU_R40_ORU_R01_PV2_260,
    ORU_R40_ORU_R01_NK1_261,
    ORU_R40_ORU_R01_OH2_262,
    ORU_R40_ORU_R01_OH3_263,
    ORU_R40_ORU_R01_OBX_264,
    ORU_R40_ORU_R01_PRT_265,
    ORU_R40_ORU_R01_PRT_266,
    ORU_R40_ORU_R01_PV1_267,
    ORU_R40_ORU_R01_PV2_268,
    ORU_R40_ORU_R01_IN1_269,
    ORU_R40_ORU_R01_IN2_270,
    ORU_R40_ORU_R01_IN3_271,
    ORU_R40_ORU_R01_NK1_272,
    ORU_R40_ORU_R01_OH2_273,
    ORU_R40_ORU_R01_OH3_274,
    ORU_R40_ORU_R01_OBX_275,
    ORU_R40_ORU_R01_PRT_276,
    ORU_R40_ORU_R01_PRT_277,
    ORU_R40_ORU_R01_PV1_278,
    ORU_R40_ORU_R01_PV2_279,
    ORU_R40_ORU_R01_IN1_280,
    ORU_R40_ORU_R01_IN2_281,
    ORU_R40_ORU_R01_IN3_282,
    ORU_R40_ORU_R01_SPM_284,
    ORU_R40_ORU_R01_OBX_285,
    ORU_R40_ORU_R01_PRT_286,
    ORU_R40_ORU_R01_NK1_287,
    ORU_R40_ORU_R01_OH2_288,
    ORU_R40_ORU_R01_OH3_289,
    ORU_R40_ORU_R01_OBX_290,
    ORU_R40_ORU_R01_PRT_291,
    ORU_R40_ORU_R01_PRT_292,
    ORU_R40_ORU_R01_PV1_293,
    ORU_R40_ORU_R01_PV2_294,
    ORU_R40_ORU_R01_IN1_295,
    ORU_R40_ORU_R01_IN2_296,
    ORU_R40_ORU_R01_IN3_297,
    ORU_R40_ORU_R01_SPM_299,
    ORU_R40_ORU_R01_ORC_301,
    ORU_R40_ORU_R01_PRT_302,
    ORU_R40_ORU_R01_OBX_303,
    ORU_R40_ORU_R01_PRT_304,
    ORU_R40_ORU_R01_OBX_305,
    ORU_R40_ORU_R01_PRT_306,
    ORU_R40_ORU_R01_OBX_307,
    ORU_R40_ORU_R01_PRT_308,
    ORU_R40_ORU_R01_TXA_309,
    ORU_R40_ORU_R01_NK1_310,
    ORU_R40_ORU_R01_OH2_311,
    ORU_R40_ORU_R01_OH3_312,
    ORU_R40_ORU_R01_OBX_313,
    ORU_R40_ORU_R01_PRT_314,
    ORU_R40_ORU_R01_PRT_315,
    ORU_R40_ORU_R01_PV1_316,
    ORU_R40_ORU_R01_PV2_317,
    ORU_R40_ORU_R01_IN1_318,
    ORU_R40_ORU_R01_IN2_319,
    ORU_R40_ORU_R01_IN3_320,
    ORU_R40_ORU_R01_SPM_322,
    ORU_R40_ORU_R01_ORC_324,
    ORU_R40_ORU_R01_PRT_325,
    ORU_R40_ORU_R01_DEV_326,
    ORU_R40_ORU_R01_PRT_327,
    ORU_R40_ORU_R01_OBX_328,
    ORU_R40_ORU_R01_PRT_329,
    ORU_R40_ORU_R01_OBX_330,
    ORU_R40_ORU_R01_PRT_331,
    ORU_R40_ORU_R01_OBX_332,
    ORU_R40_ORU_R01_PRT_333,
    ORU_R40_ORU_R01_TXA_334,
    ORU_R40_ORU_R01_NK1_335,
    ORU_R40_ORU_R01_OH2_336,
    ORU_R40_ORU_R01_OH3_337,
    ORU_R40_ORU_R01_OBX_338,
    ORU_R40_ORU_R01_PRT_339,
    ORU_R40_ORU_R01_PRT_340,
    ORU_R40_ORU_R01_PV1_341,
    ORU_R40_ORU_R01_PV2_342,
    ORU_R40_ORU_R01_IN1_343,
    ORU_R40_ORU_R01_IN2_344,
    ORU_R40_ORU_R01_IN3_345,
    ORU_R40_ORU_R01_SPM_347,
    ORU_R40_ORU_R01_ORC_349,
    ORU_R40_ORU_R01_PRT_350,
    ORU_R40_ORU_R01_DEV_351,
    ORU_R40_ORU_R01_PRT_352,
    ORU_R40_ORU_R01_TQ1_353,
    ORU_R40_ORU_R01_TQ2_354,
    ORU_R40_ORU_R01_OBX_355,
    ORU_R40_ORU_R01_PRT_356,
    ORU_R40_ORU_R01_OBX_357,
    ORU_R40_ORU_R01_PRT_358,
    ORU_R40_ORU_R01_OBX_359,
    ORU_R40_ORU_R01_PRT_360,
    ORU_R40_ORU_R01_TXA_361,
    ORU_R40_ORU_R01_NK1_362,
    ORU_R40_ORU_R01_OH2_363,
    ORU_R40_ORU_R01_OH3_364,
    ORU_R40_ORU_R01_OBX_365,
    ORU_R40_ORU_R01_PRT_366,
    ORU_R40_ORU_R01_PRT_367,
    ORU_R40_ORU_R01_PV1_368,
    ORU_R40_ORU_R01_PV2_369,
    ORU_R40_ORU_R01_IN1_370,
    ORU_R40_ORU_R01_IN2_371,
    ORU_R40_ORU_R01_IN3_372,
    ORU_R40_ORU_R01_SPM_374,
    ORU_R40_ORU_R01_ORC_376,
    ORU_R40_ORU_R01_PRT_377,
    ORU_R40_ORU_R01_DEV_378,
    ORU_R40_ORU_R01_PRT_379,
    ORU_R40_ORU_R01_TQ1_380,
    ORU_R40_ORU_R01_TQ2_381,
    ORU_R40_ORU_R01_NTE_382,
    ORU_R40_ORU_R01_OBX_383,
    ORU_R40_ORU_R01_PRT_384,
    ORU_R40_ORU_R01_OBX_385,
    ORU_R40_ORU_R01_PRT_386,
    ORU_R40_ORU_R01_OBX_387,
    ORU_R40_ORU_R01_PRT_388,
    ORU_R40_ORU_R01_OBX_389,
    ORU_R40_ORU_R01_PRT_390,
    ORU_R40_ORU_R01_TXA_391,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORU_R40_ORU_R01"; }
  ORU_R40_ORU_R01* create() const { return new ORU_R40_ORU_R01(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORU_R40_ORU_R01");
    addObject<MSH>(ORU_R40_ORU_R01_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ORU_R40_ORU_R01_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ORU_R40_ORU_R01_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ORU_R40_ORU_R01_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<DSC>(ORU_R40_ORU_R01_DSC_6, "DSC.6", HL7::optional, HL7::repetition_off);
    addObject<ARV>(ORU_R40_ORU_R01_ARV_14, "ARV.14", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORU_R40_ORU_R01_NTE_15, "NTE.15", HL7::optional, HL7::repetition_on);
    addObject<OH1>(ORU_R40_ORU_R01_OH1_16, "OH1.16", HL7::optional, HL7::repetition_on);
    addObject<OH2>(ORU_R40_ORU_R01_OH2_17, "OH2.17", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ORU_R40_ORU_R01_OH3_18, "OH3.18", HL7::optional, HL7::repetition_off);
    addObject<OH4>(ORU_R40_ORU_R01_OH4_19, "OH4.19", HL7::optional, HL7::repetition_on);
    addObject<PD1>(ORU_R40_ORU_R01_PD1_20, "PD1.20", HL7::optional, HL7::repetition_off);
    addObject<PID>(ORU_R40_ORU_R01_PID_21, "PID.21", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_22, "PRT.22", HL7::optional, HL7::repetition_on);
    addObject<NK1>(ORU_R40_ORU_R01_NK1_23, "NK1.23", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(ORU_R40_ORU_R01_OH2_24, "OH2.24", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ORU_R40_ORU_R01_OH3_25, "OH3.25", HL7::optional, HL7::repetition_off);
    addObject<NK1>(ORU_R40_ORU_R01_NK1_26, "NK1.26", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(ORU_R40_ORU_R01_OH2_27, "OH2.27", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ORU_R40_ORU_R01_OH3_28, "OH3.28", HL7::optional, HL7::repetition_off);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_29, "OBX.29", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_30, "PRT.30", HL7::optional, HL7::repetition_on);
    addObject<NK1>(ORU_R40_ORU_R01_NK1_31, "NK1.31", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(ORU_R40_ORU_R01_OH2_32, "OH2.32", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ORU_R40_ORU_R01_OH3_33, "OH3.33", HL7::optional, HL7::repetition_off);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_34, "OBX.34", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_35, "PRT.35", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_36, "PRT.36", HL7::optional, HL7::repetition_on);
    addObject<PV1>(ORU_R40_ORU_R01_PV1_37, "PV1.37", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ORU_R40_ORU_R01_PV2_38, "PV2.38", HL7::optional, HL7::repetition_off);
    addObject<NK1>(ORU_R40_ORU_R01_NK1_39, "NK1.39", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(ORU_R40_ORU_R01_OH2_40, "OH2.40", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ORU_R40_ORU_R01_OH3_41, "OH3.41", HL7::optional, HL7::repetition_off);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_42, "OBX.42", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_43, "PRT.43", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_44, "PRT.44", HL7::optional, HL7::repetition_on);
    addObject<PV1>(ORU_R40_ORU_R01_PV1_45, "PV1.45", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ORU_R40_ORU_R01_PV2_46, "PV2.46", HL7::optional, HL7::repetition_off);
    addObject<IN1>(ORU_R40_ORU_R01_IN1_47, "IN1.47", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(ORU_R40_ORU_R01_IN2_48, "IN2.48", HL7::optional, HL7::repetition_off);
    addObject<IN3>(ORU_R40_ORU_R01_IN3_49, "IN3.49", HL7::optional, HL7::repetition_off);
    addObject<ARV>(ORU_R40_ORU_R01_ARV_54, "ARV.54", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORU_R40_ORU_R01_NTE_55, "NTE.55", HL7::optional, HL7::repetition_on);
    addObject<OH1>(ORU_R40_ORU_R01_OH1_56, "OH1.56", HL7::optional, HL7::repetition_on);
    addObject<OH2>(ORU_R40_ORU_R01_OH2_57, "OH2.57", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ORU_R40_ORU_R01_OH3_58, "OH3.58", HL7::optional, HL7::repetition_off);
    addObject<OH4>(ORU_R40_ORU_R01_OH4_59, "OH4.59", HL7::optional, HL7::repetition_on);
    addObject<PD1>(ORU_R40_ORU_R01_PD1_60, "PD1.60", HL7::optional, HL7::repetition_off);
    addObject<PID>(ORU_R40_ORU_R01_PID_61, "PID.61", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_62, "PRT.62", HL7::optional, HL7::repetition_on);
    addObject<CTD>(ORU_R40_ORU_R01_CTD_68, "CTD.68", HL7::optional, HL7::repetition_off);
    addObject<CTI>(ORU_R40_ORU_R01_CTI_69, "CTI.69", HL7::optional, HL7::repetition_on);
    addObject<FT1>(ORU_R40_ORU_R01_FT1_70, "FT1.70", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORU_R40_ORU_R01_NTE_71, "NTE.71", HL7::optional, HL7::repetition_on);
    addObject<OBR>(ORU_R40_ORU_R01_OBR_72, "OBR.72", HL7::initialized, HL7::repetition_off);
    addObject<NK1>(ORU_R40_ORU_R01_NK1_73, "NK1.73", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(ORU_R40_ORU_R01_OH2_74, "OH2.74", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ORU_R40_ORU_R01_OH3_75, "OH3.75", HL7::optional, HL7::repetition_off);
    addObject<NK1>(ORU_R40_ORU_R01_NK1_76, "NK1.76", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(ORU_R40_ORU_R01_OH2_77, "OH2.77", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ORU_R40_ORU_R01_OH3_78, "OH3.78", HL7::optional, HL7::repetition_off);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_79, "OBX.79", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_80, "PRT.80", HL7::optional, HL7::repetition_on);
    addObject<NK1>(ORU_R40_ORU_R01_NK1_81, "NK1.81", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(ORU_R40_ORU_R01_OH2_82, "OH2.82", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ORU_R40_ORU_R01_OH3_83, "OH3.83", HL7::optional, HL7::repetition_off);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_84, "OBX.84", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_85, "PRT.85", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_86, "PRT.86", HL7::optional, HL7::repetition_on);
    addObject<PV1>(ORU_R40_ORU_R01_PV1_87, "PV1.87", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ORU_R40_ORU_R01_PV2_88, "PV2.88", HL7::optional, HL7::repetition_off);
    addObject<NK1>(ORU_R40_ORU_R01_NK1_89, "NK1.89", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(ORU_R40_ORU_R01_OH2_90, "OH2.90", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ORU_R40_ORU_R01_OH3_91, "OH3.91", HL7::optional, HL7::repetition_off);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_92, "OBX.92", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_93, "PRT.93", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_94, "PRT.94", HL7::optional, HL7::repetition_on);
    addObject<PV1>(ORU_R40_ORU_R01_PV1_95, "PV1.95", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ORU_R40_ORU_R01_PV2_96, "PV2.96", HL7::optional, HL7::repetition_off);
    addObject<IN1>(ORU_R40_ORU_R01_IN1_97, "IN1.97", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(ORU_R40_ORU_R01_IN2_98, "IN2.98", HL7::optional, HL7::repetition_off);
    addObject<IN3>(ORU_R40_ORU_R01_IN3_99, "IN3.99", HL7::optional, HL7::repetition_off);
    addObject<NK1>(ORU_R40_ORU_R01_NK1_100, "NK1.100", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(ORU_R40_ORU_R01_OH2_101, "OH2.101", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ORU_R40_ORU_R01_OH3_102, "OH3.102", HL7::optional, HL7::repetition_off);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_103, "OBX.103", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_104, "PRT.104", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_105, "PRT.105", HL7::optional, HL7::repetition_on);
    addObject<PV1>(ORU_R40_ORU_R01_PV1_106, "PV1.106", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ORU_R40_ORU_R01_PV2_107, "PV2.107", HL7::optional, HL7::repetition_off);
    addObject<IN1>(ORU_R40_ORU_R01_IN1_108, "IN1.108", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(ORU_R40_ORU_R01_IN2_109, "IN2.109", HL7::optional, HL7::repetition_off);
    addObject<IN3>(ORU_R40_ORU_R01_IN3_110, "IN3.110", HL7::optional, HL7::repetition_off);
    addObject<SPM>(ORU_R40_ORU_R01_SPM_112, "SPM.112", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_113, "OBX.113", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_114, "PRT.114", HL7::optional, HL7::repetition_on);
    addObject<NK1>(ORU_R40_ORU_R01_NK1_115, "NK1.115", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(ORU_R40_ORU_R01_OH2_116, "OH2.116", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ORU_R40_ORU_R01_OH3_117, "OH3.117", HL7::optional, HL7::repetition_off);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_118, "OBX.118", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_119, "PRT.119", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_120, "PRT.120", HL7::optional, HL7::repetition_on);
    addObject<PV1>(ORU_R40_ORU_R01_PV1_121, "PV1.121", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ORU_R40_ORU_R01_PV2_122, "PV2.122", HL7::optional, HL7::repetition_off);
    addObject<IN1>(ORU_R40_ORU_R01_IN1_123, "IN1.123", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(ORU_R40_ORU_R01_IN2_124, "IN2.124", HL7::optional, HL7::repetition_off);
    addObject<IN3>(ORU_R40_ORU_R01_IN3_125, "IN3.125", HL7::optional, HL7::repetition_off);
    addObject<SPM>(ORU_R40_ORU_R01_SPM_127, "SPM.127", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(ORU_R40_ORU_R01_ORC_129, "ORC.129", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_130, "PRT.130", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_131, "OBX.131", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_132, "PRT.132", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_133, "OBX.133", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_134, "PRT.134", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_135, "OBX.135", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_136, "PRT.136", HL7::optional, HL7::repetition_on);
    addObject<TXA>(ORU_R40_ORU_R01_TXA_137, "TXA.137", HL7::initialized, HL7::repetition_off);
    addObject<NK1>(ORU_R40_ORU_R01_NK1_138, "NK1.138", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(ORU_R40_ORU_R01_OH2_139, "OH2.139", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ORU_R40_ORU_R01_OH3_140, "OH3.140", HL7::optional, HL7::repetition_off);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_141, "OBX.141", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_142, "PRT.142", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_143, "PRT.143", HL7::optional, HL7::repetition_on);
    addObject<PV1>(ORU_R40_ORU_R01_PV1_144, "PV1.144", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ORU_R40_ORU_R01_PV2_145, "PV2.145", HL7::optional, HL7::repetition_off);
    addObject<IN1>(ORU_R40_ORU_R01_IN1_146, "IN1.146", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(ORU_R40_ORU_R01_IN2_147, "IN2.147", HL7::optional, HL7::repetition_off);
    addObject<IN3>(ORU_R40_ORU_R01_IN3_148, "IN3.148", HL7::optional, HL7::repetition_off);
    addObject<SPM>(ORU_R40_ORU_R01_SPM_150, "SPM.150", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(ORU_R40_ORU_R01_ORC_152, "ORC.152", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_153, "PRT.153", HL7::optional, HL7::repetition_on);
    addObject<DEV>(ORU_R40_ORU_R01_DEV_154, "DEV.154", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_155, "PRT.155", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_156, "OBX.156", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_157, "PRT.157", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_158, "OBX.158", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_159, "PRT.159", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_160, "OBX.160", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_161, "PRT.161", HL7::optional, HL7::repetition_on);
    addObject<TXA>(ORU_R40_ORU_R01_TXA_162, "TXA.162", HL7::initialized, HL7::repetition_off);
    addObject<NK1>(ORU_R40_ORU_R01_NK1_163, "NK1.163", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(ORU_R40_ORU_R01_OH2_164, "OH2.164", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ORU_R40_ORU_R01_OH3_165, "OH3.165", HL7::optional, HL7::repetition_off);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_166, "OBX.166", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_167, "PRT.167", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_168, "PRT.168", HL7::optional, HL7::repetition_on);
    addObject<PV1>(ORU_R40_ORU_R01_PV1_169, "PV1.169", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ORU_R40_ORU_R01_PV2_170, "PV2.170", HL7::optional, HL7::repetition_off);
    addObject<IN1>(ORU_R40_ORU_R01_IN1_171, "IN1.171", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(ORU_R40_ORU_R01_IN2_172, "IN2.172", HL7::optional, HL7::repetition_off);
    addObject<IN3>(ORU_R40_ORU_R01_IN3_173, "IN3.173", HL7::optional, HL7::repetition_off);
    addObject<SPM>(ORU_R40_ORU_R01_SPM_175, "SPM.175", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(ORU_R40_ORU_R01_ORC_177, "ORC.177", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_178, "PRT.178", HL7::optional, HL7::repetition_on);
    addObject<DEV>(ORU_R40_ORU_R01_DEV_179, "DEV.179", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_180, "PRT.180", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(ORU_R40_ORU_R01_TQ1_181, "TQ1.181", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORU_R40_ORU_R01_TQ2_182, "TQ2.182", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_183, "OBX.183", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_184, "PRT.184", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_185, "OBX.185", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_186, "PRT.186", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_187, "OBX.187", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_188, "PRT.188", HL7::optional, HL7::repetition_on);
    addObject<TXA>(ORU_R40_ORU_R01_TXA_189, "TXA.189", HL7::initialized, HL7::repetition_off);
    addObject<NK1>(ORU_R40_ORU_R01_NK1_190, "NK1.190", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(ORU_R40_ORU_R01_OH2_191, "OH2.191", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ORU_R40_ORU_R01_OH3_192, "OH3.192", HL7::optional, HL7::repetition_off);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_193, "OBX.193", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_194, "PRT.194", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_195, "PRT.195", HL7::optional, HL7::repetition_on);
    addObject<PV1>(ORU_R40_ORU_R01_PV1_196, "PV1.196", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ORU_R40_ORU_R01_PV2_197, "PV2.197", HL7::optional, HL7::repetition_off);
    addObject<IN1>(ORU_R40_ORU_R01_IN1_198, "IN1.198", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(ORU_R40_ORU_R01_IN2_199, "IN2.199", HL7::optional, HL7::repetition_off);
    addObject<IN3>(ORU_R40_ORU_R01_IN3_200, "IN3.200", HL7::optional, HL7::repetition_off);
    addObject<SPM>(ORU_R40_ORU_R01_SPM_202, "SPM.202", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(ORU_R40_ORU_R01_ORC_204, "ORC.204", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_205, "PRT.205", HL7::optional, HL7::repetition_on);
    addObject<DEV>(ORU_R40_ORU_R01_DEV_206, "DEV.206", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_207, "PRT.207", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(ORU_R40_ORU_R01_TQ1_208, "TQ1.208", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORU_R40_ORU_R01_TQ2_209, "TQ2.209", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORU_R40_ORU_R01_NTE_210, "NTE.210", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_211, "OBX.211", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_212, "PRT.212", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_213, "OBX.213", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_214, "PRT.214", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_215, "OBX.215", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_216, "PRT.216", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_217, "OBX.217", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_218, "PRT.218", HL7::optional, HL7::repetition_on);
    addObject<TXA>(ORU_R40_ORU_R01_TXA_219, "TXA.219", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ORU_R40_ORU_R01_ARV_224, "ARV.224", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORU_R40_ORU_R01_NTE_225, "NTE.225", HL7::optional, HL7::repetition_on);
    addObject<OH1>(ORU_R40_ORU_R01_OH1_226, "OH1.226", HL7::optional, HL7::repetition_on);
    addObject<OH2>(ORU_R40_ORU_R01_OH2_227, "OH2.227", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ORU_R40_ORU_R01_OH3_228, "OH3.228", HL7::optional, HL7::repetition_off);
    addObject<OH4>(ORU_R40_ORU_R01_OH4_229, "OH4.229", HL7::optional, HL7::repetition_on);
    addObject<PD1>(ORU_R40_ORU_R01_PD1_230, "PD1.230", HL7::optional, HL7::repetition_off);
    addObject<PID>(ORU_R40_ORU_R01_PID_231, "PID.231", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_232, "PRT.232", HL7::optional, HL7::repetition_on);
    addObject<CTD>(ORU_R40_ORU_R01_CTD_238, "CTD.238", HL7::optional, HL7::repetition_off);
    addObject<CTI>(ORU_R40_ORU_R01_CTI_239, "CTI.239", HL7::optional, HL7::repetition_on);
    addObject<FT1>(ORU_R40_ORU_R01_FT1_240, "FT1.240", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORU_R40_ORU_R01_NTE_241, "NTE.241", HL7::optional, HL7::repetition_on);
    addObject<OBR>(ORU_R40_ORU_R01_OBR_242, "OBR.242", HL7::initialized, HL7::repetition_off);
    addObject<DEV>(ORU_R40_ORU_R01_DEV_243, "DEV.243", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_244, "OBX.244", HL7::optional, HL7::repetition_on);
    addObject<NK1>(ORU_R40_ORU_R01_NK1_245, "NK1.245", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(ORU_R40_ORU_R01_OH2_246, "OH2.246", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ORU_R40_ORU_R01_OH3_247, "OH3.247", HL7::optional, HL7::repetition_off);
    addObject<NK1>(ORU_R40_ORU_R01_NK1_248, "NK1.248", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(ORU_R40_ORU_R01_OH2_249, "OH2.249", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ORU_R40_ORU_R01_OH3_250, "OH3.250", HL7::optional, HL7::repetition_off);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_251, "OBX.251", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_252, "PRT.252", HL7::optional, HL7::repetition_on);
    addObject<NK1>(ORU_R40_ORU_R01_NK1_253, "NK1.253", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(ORU_R40_ORU_R01_OH2_254, "OH2.254", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ORU_R40_ORU_R01_OH3_255, "OH3.255", HL7::optional, HL7::repetition_off);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_256, "OBX.256", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_257, "PRT.257", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_258, "PRT.258", HL7::optional, HL7::repetition_on);
    addObject<PV1>(ORU_R40_ORU_R01_PV1_259, "PV1.259", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ORU_R40_ORU_R01_PV2_260, "PV2.260", HL7::optional, HL7::repetition_off);
    addObject<NK1>(ORU_R40_ORU_R01_NK1_261, "NK1.261", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(ORU_R40_ORU_R01_OH2_262, "OH2.262", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ORU_R40_ORU_R01_OH3_263, "OH3.263", HL7::optional, HL7::repetition_off);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_264, "OBX.264", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_265, "PRT.265", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_266, "PRT.266", HL7::optional, HL7::repetition_on);
    addObject<PV1>(ORU_R40_ORU_R01_PV1_267, "PV1.267", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ORU_R40_ORU_R01_PV2_268, "PV2.268", HL7::optional, HL7::repetition_off);
    addObject<IN1>(ORU_R40_ORU_R01_IN1_269, "IN1.269", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(ORU_R40_ORU_R01_IN2_270, "IN2.270", HL7::optional, HL7::repetition_off);
    addObject<IN3>(ORU_R40_ORU_R01_IN3_271, "IN3.271", HL7::optional, HL7::repetition_off);
    addObject<NK1>(ORU_R40_ORU_R01_NK1_272, "NK1.272", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(ORU_R40_ORU_R01_OH2_273, "OH2.273", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ORU_R40_ORU_R01_OH3_274, "OH3.274", HL7::optional, HL7::repetition_off);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_275, "OBX.275", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_276, "PRT.276", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_277, "PRT.277", HL7::optional, HL7::repetition_on);
    addObject<PV1>(ORU_R40_ORU_R01_PV1_278, "PV1.278", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ORU_R40_ORU_R01_PV2_279, "PV2.279", HL7::optional, HL7::repetition_off);
    addObject<IN1>(ORU_R40_ORU_R01_IN1_280, "IN1.280", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(ORU_R40_ORU_R01_IN2_281, "IN2.281", HL7::optional, HL7::repetition_off);
    addObject<IN3>(ORU_R40_ORU_R01_IN3_282, "IN3.282", HL7::optional, HL7::repetition_off);
    addObject<SPM>(ORU_R40_ORU_R01_SPM_284, "SPM.284", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_285, "OBX.285", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_286, "PRT.286", HL7::optional, HL7::repetition_on);
    addObject<NK1>(ORU_R40_ORU_R01_NK1_287, "NK1.287", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(ORU_R40_ORU_R01_OH2_288, "OH2.288", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ORU_R40_ORU_R01_OH3_289, "OH3.289", HL7::optional, HL7::repetition_off);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_290, "OBX.290", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_291, "PRT.291", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_292, "PRT.292", HL7::optional, HL7::repetition_on);
    addObject<PV1>(ORU_R40_ORU_R01_PV1_293, "PV1.293", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ORU_R40_ORU_R01_PV2_294, "PV2.294", HL7::optional, HL7::repetition_off);
    addObject<IN1>(ORU_R40_ORU_R01_IN1_295, "IN1.295", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(ORU_R40_ORU_R01_IN2_296, "IN2.296", HL7::optional, HL7::repetition_off);
    addObject<IN3>(ORU_R40_ORU_R01_IN3_297, "IN3.297", HL7::optional, HL7::repetition_off);
    addObject<SPM>(ORU_R40_ORU_R01_SPM_299, "SPM.299", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(ORU_R40_ORU_R01_ORC_301, "ORC.301", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_302, "PRT.302", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_303, "OBX.303", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_304, "PRT.304", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_305, "OBX.305", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_306, "PRT.306", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_307, "OBX.307", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_308, "PRT.308", HL7::optional, HL7::repetition_on);
    addObject<TXA>(ORU_R40_ORU_R01_TXA_309, "TXA.309", HL7::initialized, HL7::repetition_off);
    addObject<NK1>(ORU_R40_ORU_R01_NK1_310, "NK1.310", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(ORU_R40_ORU_R01_OH2_311, "OH2.311", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ORU_R40_ORU_R01_OH3_312, "OH3.312", HL7::optional, HL7::repetition_off);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_313, "OBX.313", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_314, "PRT.314", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_315, "PRT.315", HL7::optional, HL7::repetition_on);
    addObject<PV1>(ORU_R40_ORU_R01_PV1_316, "PV1.316", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ORU_R40_ORU_R01_PV2_317, "PV2.317", HL7::optional, HL7::repetition_off);
    addObject<IN1>(ORU_R40_ORU_R01_IN1_318, "IN1.318", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(ORU_R40_ORU_R01_IN2_319, "IN2.319", HL7::optional, HL7::repetition_off);
    addObject<IN3>(ORU_R40_ORU_R01_IN3_320, "IN3.320", HL7::optional, HL7::repetition_off);
    addObject<SPM>(ORU_R40_ORU_R01_SPM_322, "SPM.322", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(ORU_R40_ORU_R01_ORC_324, "ORC.324", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_325, "PRT.325", HL7::optional, HL7::repetition_on);
    addObject<DEV>(ORU_R40_ORU_R01_DEV_326, "DEV.326", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_327, "PRT.327", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_328, "OBX.328", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_329, "PRT.329", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_330, "OBX.330", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_331, "PRT.331", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_332, "OBX.332", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_333, "PRT.333", HL7::optional, HL7::repetition_on);
    addObject<TXA>(ORU_R40_ORU_R01_TXA_334, "TXA.334", HL7::initialized, HL7::repetition_off);
    addObject<NK1>(ORU_R40_ORU_R01_NK1_335, "NK1.335", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(ORU_R40_ORU_R01_OH2_336, "OH2.336", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ORU_R40_ORU_R01_OH3_337, "OH3.337", HL7::optional, HL7::repetition_off);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_338, "OBX.338", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_339, "PRT.339", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_340, "PRT.340", HL7::optional, HL7::repetition_on);
    addObject<PV1>(ORU_R40_ORU_R01_PV1_341, "PV1.341", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ORU_R40_ORU_R01_PV2_342, "PV2.342", HL7::optional, HL7::repetition_off);
    addObject<IN1>(ORU_R40_ORU_R01_IN1_343, "IN1.343", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(ORU_R40_ORU_R01_IN2_344, "IN2.344", HL7::optional, HL7::repetition_off);
    addObject<IN3>(ORU_R40_ORU_R01_IN3_345, "IN3.345", HL7::optional, HL7::repetition_off);
    addObject<SPM>(ORU_R40_ORU_R01_SPM_347, "SPM.347", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(ORU_R40_ORU_R01_ORC_349, "ORC.349", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_350, "PRT.350", HL7::optional, HL7::repetition_on);
    addObject<DEV>(ORU_R40_ORU_R01_DEV_351, "DEV.351", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_352, "PRT.352", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(ORU_R40_ORU_R01_TQ1_353, "TQ1.353", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORU_R40_ORU_R01_TQ2_354, "TQ2.354", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_355, "OBX.355", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_356, "PRT.356", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_357, "OBX.357", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_358, "PRT.358", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_359, "OBX.359", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_360, "PRT.360", HL7::optional, HL7::repetition_on);
    addObject<TXA>(ORU_R40_ORU_R01_TXA_361, "TXA.361", HL7::initialized, HL7::repetition_off);
    addObject<NK1>(ORU_R40_ORU_R01_NK1_362, "NK1.362", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(ORU_R40_ORU_R01_OH2_363, "OH2.363", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ORU_R40_ORU_R01_OH3_364, "OH3.364", HL7::optional, HL7::repetition_off);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_365, "OBX.365", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_366, "PRT.366", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_367, "PRT.367", HL7::optional, HL7::repetition_on);
    addObject<PV1>(ORU_R40_ORU_R01_PV1_368, "PV1.368", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ORU_R40_ORU_R01_PV2_369, "PV2.369", HL7::optional, HL7::repetition_off);
    addObject<IN1>(ORU_R40_ORU_R01_IN1_370, "IN1.370", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(ORU_R40_ORU_R01_IN2_371, "IN2.371", HL7::optional, HL7::repetition_off);
    addObject<IN3>(ORU_R40_ORU_R01_IN3_372, "IN3.372", HL7::optional, HL7::repetition_off);
    addObject<SPM>(ORU_R40_ORU_R01_SPM_374, "SPM.374", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(ORU_R40_ORU_R01_ORC_376, "ORC.376", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_377, "PRT.377", HL7::optional, HL7::repetition_on);
    addObject<DEV>(ORU_R40_ORU_R01_DEV_378, "DEV.378", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_379, "PRT.379", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(ORU_R40_ORU_R01_TQ1_380, "TQ1.380", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORU_R40_ORU_R01_TQ2_381, "TQ2.381", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORU_R40_ORU_R01_NTE_382, "NTE.382", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_383, "OBX.383", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_384, "PRT.384", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_385, "OBX.385", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_386, "PRT.386", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_387, "OBX.387", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_388, "PRT.388", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ORU_R40_ORU_R01_OBX_389, "OBX.389", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORU_R40_ORU_R01_PRT_390, "PRT.390", HL7::optional, HL7::repetition_on);
    addObject<TXA>(ORU_R40_ORU_R01_TXA_391, "TXA.391", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORU_R40_ORU_R01_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORU_R40_ORU_R01_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ORU_R40_ORU_R01_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ORU_R40_ORU_R01_UAC_4);
  }
  DSC* getDSC_6(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, ORU_R40_ORU_R01_DSC_6);
  }
  ARV* getARV_14(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORU_R40_ORU_R01_ARV_14);
  }
  NTE* getNTE_15(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORU_R40_ORU_R01_NTE_15);
  }
  OH1* getOH1_16(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH1_16);
  }
  OH2* getOH2_17(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH2_17);
  }
  OH3* getOH3_18(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH3_18);
  }
  OH4* getOH4_19(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH4_19);
  }
  PD1* getPD1_20(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ORU_R40_ORU_R01_PD1_20);
  }
  PID* getPID_21(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORU_R40_ORU_R01_PID_21);
  }
  PRT* getPRT_22(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_22);
  }
  NK1* getNK1_23(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ORU_R40_ORU_R01_NK1_23);
  }
  OH2* getOH2_24(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH2_24);
  }
  OH3* getOH3_25(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH3_25);
  }
  NK1* getNK1_26(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ORU_R40_ORU_R01_NK1_26);
  }
  OH2* getOH2_27(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH2_27);
  }
  OH3* getOH3_28(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH3_28);
  }
  OBX* getOBX_29(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_29);
  }
  PRT* getPRT_30(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_30);
  }
  NK1* getNK1_31(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ORU_R40_ORU_R01_NK1_31);
  }
  OH2* getOH2_32(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH2_32);
  }
  OH3* getOH3_33(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH3_33);
  }
  OBX* getOBX_34(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_34);
  }
  PRT* getPRT_35(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_35);
  }
  PRT* getPRT_36(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_36);
  }
  PV1* getPV1_37(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV1_37);
  }
  PV2* getPV2_38(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV2_38);
  }
  NK1* getNK1_39(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ORU_R40_ORU_R01_NK1_39);
  }
  OH2* getOH2_40(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH2_40);
  }
  OH3* getOH3_41(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH3_41);
  }
  OBX* getOBX_42(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_42);
  }
  PRT* getPRT_43(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_43);
  }
  PRT* getPRT_44(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_44);
  }
  PV1* getPV1_45(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV1_45);
  }
  PV2* getPV2_46(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV2_46);
  }
  IN1* getIN1_47(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN1_47);
  }
  IN2* getIN2_48(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN2_48);
  }
  IN3* getIN3_49(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN3_49);
  }
  ARV* getARV_54(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORU_R40_ORU_R01_ARV_54);
  }
  NTE* getNTE_55(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORU_R40_ORU_R01_NTE_55);
  }
  OH1* getOH1_56(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH1_56);
  }
  OH2* getOH2_57(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH2_57);
  }
  OH3* getOH3_58(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH3_58);
  }
  OH4* getOH4_59(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH4_59);
  }
  PD1* getPD1_60(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ORU_R40_ORU_R01_PD1_60);
  }
  PID* getPID_61(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORU_R40_ORU_R01_PID_61);
  }
  PRT* getPRT_62(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_62);
  }
  CTD* getCTD_68(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, ORU_R40_ORU_R01_CTD_68);
  }
  CTI* getCTI_69(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, ORU_R40_ORU_R01_CTI_69);
  }
  FT1* getFT1_70(size_t index = 0) {
    return (FT1*)this->getObjectSafe(index, ORU_R40_ORU_R01_FT1_70);
  }
  NTE* getNTE_71(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORU_R40_ORU_R01_NTE_71);
  }
  OBR* getOBR_72(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBR_72);
  }
  NK1* getNK1_73(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ORU_R40_ORU_R01_NK1_73);
  }
  OH2* getOH2_74(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH2_74);
  }
  OH3* getOH3_75(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH3_75);
  }
  NK1* getNK1_76(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ORU_R40_ORU_R01_NK1_76);
  }
  OH2* getOH2_77(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH2_77);
  }
  OH3* getOH3_78(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH3_78);
  }
  OBX* getOBX_79(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_79);
  }
  PRT* getPRT_80(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_80);
  }
  NK1* getNK1_81(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ORU_R40_ORU_R01_NK1_81);
  }
  OH2* getOH2_82(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH2_82);
  }
  OH3* getOH3_83(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH3_83);
  }
  OBX* getOBX_84(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_84);
  }
  PRT* getPRT_85(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_85);
  }
  PRT* getPRT_86(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_86);
  }
  PV1* getPV1_87(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV1_87);
  }
  PV2* getPV2_88(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV2_88);
  }
  NK1* getNK1_89(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ORU_R40_ORU_R01_NK1_89);
  }
  OH2* getOH2_90(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH2_90);
  }
  OH3* getOH3_91(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH3_91);
  }
  OBX* getOBX_92(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_92);
  }
  PRT* getPRT_93(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_93);
  }
  PRT* getPRT_94(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_94);
  }
  PV1* getPV1_95(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV1_95);
  }
  PV2* getPV2_96(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV2_96);
  }
  IN1* getIN1_97(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN1_97);
  }
  IN2* getIN2_98(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN2_98);
  }
  IN3* getIN3_99(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN3_99);
  }
  NK1* getNK1_100(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ORU_R40_ORU_R01_NK1_100);
  }
  OH2* getOH2_101(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH2_101);
  }
  OH3* getOH3_102(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH3_102);
  }
  OBX* getOBX_103(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_103);
  }
  PRT* getPRT_104(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_104);
  }
  PRT* getPRT_105(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_105);
  }
  PV1* getPV1_106(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV1_106);
  }
  PV2* getPV2_107(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV2_107);
  }
  IN1* getIN1_108(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN1_108);
  }
  IN2* getIN2_109(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN2_109);
  }
  IN3* getIN3_110(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN3_110);
  }
  SPM* getSPM_112(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, ORU_R40_ORU_R01_SPM_112);
  }
  OBX* getOBX_113(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_113);
  }
  PRT* getPRT_114(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_114);
  }
  NK1* getNK1_115(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ORU_R40_ORU_R01_NK1_115);
  }
  OH2* getOH2_116(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH2_116);
  }
  OH3* getOH3_117(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH3_117);
  }
  OBX* getOBX_118(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_118);
  }
  PRT* getPRT_119(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_119);
  }
  PRT* getPRT_120(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_120);
  }
  PV1* getPV1_121(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV1_121);
  }
  PV2* getPV2_122(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV2_122);
  }
  IN1* getIN1_123(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN1_123);
  }
  IN2* getIN2_124(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN2_124);
  }
  IN3* getIN3_125(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN3_125);
  }
  SPM* getSPM_127(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, ORU_R40_ORU_R01_SPM_127);
  }
  ORC* getORC_129(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORU_R40_ORU_R01_ORC_129);
  }
  PRT* getPRT_130(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_130);
  }
  OBX* getOBX_131(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_131);
  }
  PRT* getPRT_132(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_132);
  }
  OBX* getOBX_133(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_133);
  }
  PRT* getPRT_134(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_134);
  }
  OBX* getOBX_135(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_135);
  }
  PRT* getPRT_136(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_136);
  }
  TXA* getTXA_137(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, ORU_R40_ORU_R01_TXA_137);
  }
  NK1* getNK1_138(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ORU_R40_ORU_R01_NK1_138);
  }
  OH2* getOH2_139(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH2_139);
  }
  OH3* getOH3_140(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH3_140);
  }
  OBX* getOBX_141(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_141);
  }
  PRT* getPRT_142(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_142);
  }
  PRT* getPRT_143(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_143);
  }
  PV1* getPV1_144(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV1_144);
  }
  PV2* getPV2_145(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV2_145);
  }
  IN1* getIN1_146(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN1_146);
  }
  IN2* getIN2_147(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN2_147);
  }
  IN3* getIN3_148(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN3_148);
  }
  SPM* getSPM_150(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, ORU_R40_ORU_R01_SPM_150);
  }
  ORC* getORC_152(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORU_R40_ORU_R01_ORC_152);
  }
  PRT* getPRT_153(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_153);
  }
  DEV* getDEV_154(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, ORU_R40_ORU_R01_DEV_154);
  }
  PRT* getPRT_155(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_155);
  }
  OBX* getOBX_156(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_156);
  }
  PRT* getPRT_157(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_157);
  }
  OBX* getOBX_158(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_158);
  }
  PRT* getPRT_159(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_159);
  }
  OBX* getOBX_160(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_160);
  }
  PRT* getPRT_161(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_161);
  }
  TXA* getTXA_162(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, ORU_R40_ORU_R01_TXA_162);
  }
  NK1* getNK1_163(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ORU_R40_ORU_R01_NK1_163);
  }
  OH2* getOH2_164(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH2_164);
  }
  OH3* getOH3_165(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH3_165);
  }
  OBX* getOBX_166(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_166);
  }
  PRT* getPRT_167(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_167);
  }
  PRT* getPRT_168(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_168);
  }
  PV1* getPV1_169(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV1_169);
  }
  PV2* getPV2_170(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV2_170);
  }
  IN1* getIN1_171(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN1_171);
  }
  IN2* getIN2_172(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN2_172);
  }
  IN3* getIN3_173(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN3_173);
  }
  SPM* getSPM_175(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, ORU_R40_ORU_R01_SPM_175);
  }
  ORC* getORC_177(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORU_R40_ORU_R01_ORC_177);
  }
  PRT* getPRT_178(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_178);
  }
  DEV* getDEV_179(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, ORU_R40_ORU_R01_DEV_179);
  }
  PRT* getPRT_180(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_180);
  }
  TQ1* getTQ1_181(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORU_R40_ORU_R01_TQ1_181);
  }
  TQ2* getTQ2_182(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORU_R40_ORU_R01_TQ2_182);
  }
  OBX* getOBX_183(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_183);
  }
  PRT* getPRT_184(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_184);
  }
  OBX* getOBX_185(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_185);
  }
  PRT* getPRT_186(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_186);
  }
  OBX* getOBX_187(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_187);
  }
  PRT* getPRT_188(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_188);
  }
  TXA* getTXA_189(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, ORU_R40_ORU_R01_TXA_189);
  }
  NK1* getNK1_190(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ORU_R40_ORU_R01_NK1_190);
  }
  OH2* getOH2_191(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH2_191);
  }
  OH3* getOH3_192(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH3_192);
  }
  OBX* getOBX_193(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_193);
  }
  PRT* getPRT_194(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_194);
  }
  PRT* getPRT_195(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_195);
  }
  PV1* getPV1_196(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV1_196);
  }
  PV2* getPV2_197(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV2_197);
  }
  IN1* getIN1_198(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN1_198);
  }
  IN2* getIN2_199(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN2_199);
  }
  IN3* getIN3_200(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN3_200);
  }
  SPM* getSPM_202(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, ORU_R40_ORU_R01_SPM_202);
  }
  ORC* getORC_204(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORU_R40_ORU_R01_ORC_204);
  }
  PRT* getPRT_205(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_205);
  }
  DEV* getDEV_206(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, ORU_R40_ORU_R01_DEV_206);
  }
  PRT* getPRT_207(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_207);
  }
  TQ1* getTQ1_208(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORU_R40_ORU_R01_TQ1_208);
  }
  TQ2* getTQ2_209(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORU_R40_ORU_R01_TQ2_209);
  }
  NTE* getNTE_210(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORU_R40_ORU_R01_NTE_210);
  }
  OBX* getOBX_211(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_211);
  }
  PRT* getPRT_212(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_212);
  }
  OBX* getOBX_213(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_213);
  }
  PRT* getPRT_214(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_214);
  }
  OBX* getOBX_215(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_215);
  }
  PRT* getPRT_216(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_216);
  }
  OBX* getOBX_217(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_217);
  }
  PRT* getPRT_218(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_218);
  }
  TXA* getTXA_219(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, ORU_R40_ORU_R01_TXA_219);
  }
  ARV* getARV_224(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORU_R40_ORU_R01_ARV_224);
  }
  NTE* getNTE_225(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORU_R40_ORU_R01_NTE_225);
  }
  OH1* getOH1_226(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH1_226);
  }
  OH2* getOH2_227(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH2_227);
  }
  OH3* getOH3_228(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH3_228);
  }
  OH4* getOH4_229(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH4_229);
  }
  PD1* getPD1_230(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ORU_R40_ORU_R01_PD1_230);
  }
  PID* getPID_231(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORU_R40_ORU_R01_PID_231);
  }
  PRT* getPRT_232(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_232);
  }
  CTD* getCTD_238(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, ORU_R40_ORU_R01_CTD_238);
  }
  CTI* getCTI_239(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, ORU_R40_ORU_R01_CTI_239);
  }
  FT1* getFT1_240(size_t index = 0) {
    return (FT1*)this->getObjectSafe(index, ORU_R40_ORU_R01_FT1_240);
  }
  NTE* getNTE_241(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORU_R40_ORU_R01_NTE_241);
  }
  OBR* getOBR_242(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBR_242);
  }
  DEV* getDEV_243(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, ORU_R40_ORU_R01_DEV_243);
  }
  OBX* getOBX_244(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_244);
  }
  NK1* getNK1_245(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ORU_R40_ORU_R01_NK1_245);
  }
  OH2* getOH2_246(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH2_246);
  }
  OH3* getOH3_247(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH3_247);
  }
  NK1* getNK1_248(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ORU_R40_ORU_R01_NK1_248);
  }
  OH2* getOH2_249(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH2_249);
  }
  OH3* getOH3_250(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH3_250);
  }
  OBX* getOBX_251(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_251);
  }
  PRT* getPRT_252(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_252);
  }
  NK1* getNK1_253(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ORU_R40_ORU_R01_NK1_253);
  }
  OH2* getOH2_254(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH2_254);
  }
  OH3* getOH3_255(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH3_255);
  }
  OBX* getOBX_256(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_256);
  }
  PRT* getPRT_257(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_257);
  }
  PRT* getPRT_258(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_258);
  }
  PV1* getPV1_259(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV1_259);
  }
  PV2* getPV2_260(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV2_260);
  }
  NK1* getNK1_261(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ORU_R40_ORU_R01_NK1_261);
  }
  OH2* getOH2_262(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH2_262);
  }
  OH3* getOH3_263(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH3_263);
  }
  OBX* getOBX_264(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_264);
  }
  PRT* getPRT_265(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_265);
  }
  PRT* getPRT_266(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_266);
  }
  PV1* getPV1_267(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV1_267);
  }
  PV2* getPV2_268(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV2_268);
  }
  IN1* getIN1_269(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN1_269);
  }
  IN2* getIN2_270(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN2_270);
  }
  IN3* getIN3_271(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN3_271);
  }
  NK1* getNK1_272(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ORU_R40_ORU_R01_NK1_272);
  }
  OH2* getOH2_273(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH2_273);
  }
  OH3* getOH3_274(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH3_274);
  }
  OBX* getOBX_275(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_275);
  }
  PRT* getPRT_276(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_276);
  }
  PRT* getPRT_277(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_277);
  }
  PV1* getPV1_278(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV1_278);
  }
  PV2* getPV2_279(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV2_279);
  }
  IN1* getIN1_280(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN1_280);
  }
  IN2* getIN2_281(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN2_281);
  }
  IN3* getIN3_282(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN3_282);
  }
  SPM* getSPM_284(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, ORU_R40_ORU_R01_SPM_284);
  }
  OBX* getOBX_285(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_285);
  }
  PRT* getPRT_286(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_286);
  }
  NK1* getNK1_287(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ORU_R40_ORU_R01_NK1_287);
  }
  OH2* getOH2_288(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH2_288);
  }
  OH3* getOH3_289(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH3_289);
  }
  OBX* getOBX_290(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_290);
  }
  PRT* getPRT_291(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_291);
  }
  PRT* getPRT_292(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_292);
  }
  PV1* getPV1_293(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV1_293);
  }
  PV2* getPV2_294(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV2_294);
  }
  IN1* getIN1_295(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN1_295);
  }
  IN2* getIN2_296(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN2_296);
  }
  IN3* getIN3_297(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN3_297);
  }
  SPM* getSPM_299(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, ORU_R40_ORU_R01_SPM_299);
  }
  ORC* getORC_301(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORU_R40_ORU_R01_ORC_301);
  }
  PRT* getPRT_302(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_302);
  }
  OBX* getOBX_303(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_303);
  }
  PRT* getPRT_304(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_304);
  }
  OBX* getOBX_305(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_305);
  }
  PRT* getPRT_306(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_306);
  }
  OBX* getOBX_307(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_307);
  }
  PRT* getPRT_308(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_308);
  }
  TXA* getTXA_309(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, ORU_R40_ORU_R01_TXA_309);
  }
  NK1* getNK1_310(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ORU_R40_ORU_R01_NK1_310);
  }
  OH2* getOH2_311(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH2_311);
  }
  OH3* getOH3_312(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH3_312);
  }
  OBX* getOBX_313(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_313);
  }
  PRT* getPRT_314(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_314);
  }
  PRT* getPRT_315(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_315);
  }
  PV1* getPV1_316(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV1_316);
  }
  PV2* getPV2_317(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV2_317);
  }
  IN1* getIN1_318(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN1_318);
  }
  IN2* getIN2_319(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN2_319);
  }
  IN3* getIN3_320(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN3_320);
  }
  SPM* getSPM_322(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, ORU_R40_ORU_R01_SPM_322);
  }
  ORC* getORC_324(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORU_R40_ORU_R01_ORC_324);
  }
  PRT* getPRT_325(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_325);
  }
  DEV* getDEV_326(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, ORU_R40_ORU_R01_DEV_326);
  }
  PRT* getPRT_327(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_327);
  }
  OBX* getOBX_328(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_328);
  }
  PRT* getPRT_329(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_329);
  }
  OBX* getOBX_330(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_330);
  }
  PRT* getPRT_331(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_331);
  }
  OBX* getOBX_332(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_332);
  }
  PRT* getPRT_333(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_333);
  }
  TXA* getTXA_334(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, ORU_R40_ORU_R01_TXA_334);
  }
  NK1* getNK1_335(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ORU_R40_ORU_R01_NK1_335);
  }
  OH2* getOH2_336(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH2_336);
  }
  OH3* getOH3_337(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH3_337);
  }
  OBX* getOBX_338(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_338);
  }
  PRT* getPRT_339(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_339);
  }
  PRT* getPRT_340(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_340);
  }
  PV1* getPV1_341(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV1_341);
  }
  PV2* getPV2_342(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV2_342);
  }
  IN1* getIN1_343(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN1_343);
  }
  IN2* getIN2_344(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN2_344);
  }
  IN3* getIN3_345(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN3_345);
  }
  SPM* getSPM_347(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, ORU_R40_ORU_R01_SPM_347);
  }
  ORC* getORC_349(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORU_R40_ORU_R01_ORC_349);
  }
  PRT* getPRT_350(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_350);
  }
  DEV* getDEV_351(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, ORU_R40_ORU_R01_DEV_351);
  }
  PRT* getPRT_352(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_352);
  }
  TQ1* getTQ1_353(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORU_R40_ORU_R01_TQ1_353);
  }
  TQ2* getTQ2_354(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORU_R40_ORU_R01_TQ2_354);
  }
  OBX* getOBX_355(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_355);
  }
  PRT* getPRT_356(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_356);
  }
  OBX* getOBX_357(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_357);
  }
  PRT* getPRT_358(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_358);
  }
  OBX* getOBX_359(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_359);
  }
  PRT* getPRT_360(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_360);
  }
  TXA* getTXA_361(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, ORU_R40_ORU_R01_TXA_361);
  }
  NK1* getNK1_362(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ORU_R40_ORU_R01_NK1_362);
  }
  OH2* getOH2_363(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH2_363);
  }
  OH3* getOH3_364(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ORU_R40_ORU_R01_OH3_364);
  }
  OBX* getOBX_365(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_365);
  }
  PRT* getPRT_366(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_366);
  }
  PRT* getPRT_367(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_367);
  }
  PV1* getPV1_368(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV1_368);
  }
  PV2* getPV2_369(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ORU_R40_ORU_R01_PV2_369);
  }
  IN1* getIN1_370(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN1_370);
  }
  IN2* getIN2_371(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN2_371);
  }
  IN3* getIN3_372(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, ORU_R40_ORU_R01_IN3_372);
  }
  SPM* getSPM_374(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, ORU_R40_ORU_R01_SPM_374);
  }
  ORC* getORC_376(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORU_R40_ORU_R01_ORC_376);
  }
  PRT* getPRT_377(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_377);
  }
  DEV* getDEV_378(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, ORU_R40_ORU_R01_DEV_378);
  }
  PRT* getPRT_379(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_379);
  }
  TQ1* getTQ1_380(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORU_R40_ORU_R01_TQ1_380);
  }
  TQ2* getTQ2_381(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORU_R40_ORU_R01_TQ2_381);
  }
  NTE* getNTE_382(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORU_R40_ORU_R01_NTE_382);
  }
  OBX* getOBX_383(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_383);
  }
  PRT* getPRT_384(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_384);
  }
  OBX* getOBX_385(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_385);
  }
  PRT* getPRT_386(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_386);
  }
  OBX* getOBX_387(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_387);
  }
  PRT* getPRT_388(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_388);
  }
  OBX* getOBX_389(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORU_R40_ORU_R01_OBX_389);
  }
  PRT* getPRT_390(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORU_R40_ORU_R01_PRT_390);
  }
  TXA* getTXA_391(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, ORU_R40_ORU_R01_TXA_391);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_6(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_DSC_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_14(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_ARV_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_15(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NTE_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_16(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH1_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_17(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH2_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_18(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH3_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_19(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH4_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_20(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PD1_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_21(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PID_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_22(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_23(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NK1_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_24(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH2_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_25(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH3_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_26(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NK1_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_27(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH2_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_28(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH3_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_29(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_30(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_31(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NK1_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_32(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH2_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_33(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH3_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_34(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_35(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_36(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_37(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV1_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_38(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV2_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_39(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NK1_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_40(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH2_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_41(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH3_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_42(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_43(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_44(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_45(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV1_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_46(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV2_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_47(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN1_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_48(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN2_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_49(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN3_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_54(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_ARV_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_55(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NTE_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_56(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH1_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_57(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH2_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_58(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH3_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_59(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH4_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_60(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PD1_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_61(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PID_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_62(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_68(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_CTD_68) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_69(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_CTI_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFT1_70(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_FT1_70) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_71(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NTE_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_72(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBR_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_73(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NK1_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_74(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH2_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_75(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH3_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_76(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NK1_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_77(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH2_77) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_78(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH3_78) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_79(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_79) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_80(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_80) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_81(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NK1_81) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_82(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH2_82) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_83(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH3_83) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_84(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_84) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_85(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_85) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_86(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_86) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_87(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV1_87) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_88(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV2_88) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_89(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NK1_89) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_90(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH2_90) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_91(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH3_91) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_92(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_92) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_93(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_93) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_94(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_94) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_95(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV1_95) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_96(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV2_96) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_97(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN1_97) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_98(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN2_98) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_99(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN3_99) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_100(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NK1_100) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_101(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH2_101) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_102(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH3_102) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_103(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_103) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_104(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_104) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_105(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_105) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_106(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV1_106) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_107(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV2_107) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_108(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN1_108) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_109(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN2_109) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_110(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN3_110) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_112(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_SPM_112) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_113(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_113) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_114(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_114) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_115(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NK1_115) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_116(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH2_116) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_117(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH3_117) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_118(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_118) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_119(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_119) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_120(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_120) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_121(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV1_121) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_122(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV2_122) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_123(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN1_123) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_124(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN2_124) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_125(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN3_125) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_127(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_SPM_127) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_129(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_ORC_129) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_130(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_130) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_131(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_131) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_132(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_132) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_133(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_133) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_134(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_134) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_135(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_135) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_136(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_136) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_137(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_TXA_137) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_138(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NK1_138) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_139(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH2_139) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_140(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH3_140) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_141(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_141) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_142(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_142) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_143(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_143) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_144(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV1_144) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_145(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV2_145) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_146(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN1_146) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_147(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN2_147) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_148(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN3_148) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_150(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_SPM_150) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_152(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_ORC_152) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_153(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_153) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_154(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_DEV_154) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_155(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_155) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_156(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_156) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_157(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_157) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_158(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_158) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_159(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_159) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_160(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_160) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_161(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_161) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_162(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_TXA_162) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_163(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NK1_163) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_164(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH2_164) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_165(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH3_165) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_166(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_166) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_167(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_167) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_168(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_168) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_169(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV1_169) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_170(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV2_170) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_171(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN1_171) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_172(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN2_172) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_173(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN3_173) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_175(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_SPM_175) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_177(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_ORC_177) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_178(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_178) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_179(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_DEV_179) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_180(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_180) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_181(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_TQ1_181) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_182(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_TQ2_182) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_183(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_183) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_184(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_184) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_185(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_185) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_186(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_186) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_187(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_187) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_188(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_188) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_189(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_TXA_189) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_190(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NK1_190) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_191(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH2_191) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_192(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH3_192) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_193(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_193) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_194(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_194) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_195(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_195) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_196(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV1_196) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_197(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV2_197) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_198(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN1_198) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_199(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN2_199) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_200(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN3_200) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_202(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_SPM_202) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_204(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_ORC_204) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_205(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_205) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_206(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_DEV_206) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_207(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_207) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_208(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_TQ1_208) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_209(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_TQ2_209) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_210(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NTE_210) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_211(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_211) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_212(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_212) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_213(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_213) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_214(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_214) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_215(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_215) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_216(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_216) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_217(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_217) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_218(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_218) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_219(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_TXA_219) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_224(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_ARV_224) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_225(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NTE_225) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_226(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH1_226) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_227(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH2_227) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_228(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH3_228) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_229(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH4_229) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_230(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PD1_230) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_231(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PID_231) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_232(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_232) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_238(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_CTD_238) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_239(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_CTI_239) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFT1_240(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_FT1_240) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_241(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NTE_241) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_242(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBR_242) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_243(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_DEV_243) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_244(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_244) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_245(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NK1_245) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_246(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH2_246) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_247(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH3_247) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_248(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NK1_248) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_249(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH2_249) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_250(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH3_250) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_251(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_251) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_252(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_252) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_253(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NK1_253) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_254(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH2_254) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_255(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH3_255) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_256(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_256) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_257(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_257) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_258(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_258) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_259(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV1_259) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_260(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV2_260) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_261(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NK1_261) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_262(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH2_262) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_263(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH3_263) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_264(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_264) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_265(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_265) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_266(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_266) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_267(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV1_267) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_268(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV2_268) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_269(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN1_269) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_270(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN2_270) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_271(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN3_271) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_272(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NK1_272) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_273(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH2_273) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_274(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH3_274) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_275(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_275) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_276(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_276) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_277(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_277) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_278(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV1_278) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_279(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV2_279) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_280(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN1_280) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_281(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN2_281) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_282(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN3_282) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_284(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_SPM_284) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_285(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_285) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_286(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_286) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_287(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NK1_287) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_288(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH2_288) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_289(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH3_289) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_290(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_290) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_291(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_291) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_292(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_292) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_293(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV1_293) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_294(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV2_294) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_295(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN1_295) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_296(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN2_296) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_297(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN3_297) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_299(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_SPM_299) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_301(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_ORC_301) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_302(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_302) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_303(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_303) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_304(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_304) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_305(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_305) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_306(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_306) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_307(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_307) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_308(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_308) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_309(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_TXA_309) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_310(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NK1_310) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_311(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH2_311) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_312(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH3_312) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_313(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_313) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_314(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_314) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_315(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_315) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_316(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV1_316) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_317(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV2_317) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_318(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN1_318) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_319(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN2_319) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_320(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN3_320) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_322(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_SPM_322) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_324(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_ORC_324) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_325(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_325) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_326(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_DEV_326) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_327(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_327) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_328(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_328) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_329(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_329) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_330(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_330) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_331(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_331) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_332(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_332) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_333(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_333) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_334(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_TXA_334) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_335(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NK1_335) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_336(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH2_336) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_337(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH3_337) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_338(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_338) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_339(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_339) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_340(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_340) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_341(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV1_341) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_342(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV2_342) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_343(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN1_343) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_344(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN2_344) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_345(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN3_345) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_347(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_SPM_347) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_349(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_ORC_349) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_350(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_350) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_351(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_DEV_351) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_352(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_352) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_353(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_TQ1_353) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_354(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_TQ2_354) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_355(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_355) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_356(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_356) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_357(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_357) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_358(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_358) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_359(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_359) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_360(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_360) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_361(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_TXA_361) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_362(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NK1_362) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_363(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH2_363) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_364(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OH3_364) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_365(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_365) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_366(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_366) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_367(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_367) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_368(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV1_368) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_369(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PV2_369) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_370(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN1_370) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_371(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN2_371) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_372(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_IN3_372) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_374(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_SPM_374) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_376(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_ORC_376) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_377(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_377) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_378(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_DEV_378) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_379(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_379) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_380(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_TQ1_380) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_381(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_TQ2_381) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_382(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_NTE_382) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_383(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_383) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_384(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_384) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_385(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_385) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_386(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_386) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_387(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_387) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_388(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_388) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_389(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_OBX_389) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_390(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_PRT_390) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_391(size_t index = 0) {
    try {
      return this->getObject(index, ORU_R40_ORU_R01_TXA_391) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORU_R40_ORU_R01_ */
} /* namespace HL7_29 */
#endif /*  __ORU_R40_ORU_R01__29_H__ */
