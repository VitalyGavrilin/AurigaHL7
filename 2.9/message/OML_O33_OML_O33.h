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


#ifndef __OML_O33_OML_O33__29_H__
#define __OML_O33_OML_O33__29_H__

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
struct OML_O33_OML_O33_PATIENT; /* PATIENT */
struct OML_O33_OML_O33_SPECIMEN; /* SPECIMEN */
struct OML_O33_OML_O33_DEVICE; /* DEVICE */
struct OML_O33_OML_O33_INSURANCE; /* INSURANCE */
struct OML_O33_OML_O33_OCCUPATIONAL_DATA_FOR_HEALTH; /* OCCUPATIONAL_DATA_FOR_HEALTH */
struct OML_O33_OML_O33_NEXT_OF_KIN; /* NEXT_OF_KIN */
struct OML_O33_OML_O33_PATIENT_VISIT; /* PATIENT_VISIT */
struct OML_O33_OML_O33_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct OML_O33_OML_O33_SPECIMEN_CONTAINER; /* SPECIMEN_CONTAINER */
struct OML_O33_OML_O33_ORDER; /* ORDER */
struct OML_O33_OML_O33_TIMING; /* TIMING */
struct OML_O33_OML_O33_OBSERVATION_REQUEST; /* OBSERVATION_REQUEST */
struct OML_O33_OML_O33_PRIOR_RESULT; /* PRIOR_RESULT */
struct OML_O33_OML_O33_OBSERVATION; /* OBSERVATION */
struct OML_O33_OML_O33_PATIENT_PRIOR; /* PATIENT_PRIOR */
struct OML_O33_OML_O33_PATIENT_VISIT_PRIOR; /* PATIENT_VISIT_PRIOR */
struct OML_O33_OML_O33_ORDER_PRIOR; /* ORDER_PRIOR */
struct OML_O33_OML_O33_OBSERVATION_PARTICIPATION_PRIOR; /* OBSERVATION_PARTICIPATION_PRIOR */
struct OML_O33_OML_O33_TIMING_PRIOR; /* TIMING_PRIOR */
struct OML_O33_OML_O33_OBSERVATION_PRIOR; /* OBSERVATION_PRIOR */
struct OML_O33_OML_O33_PATIENT_PRIOR; /* PATIENT_PRIOR */
struct OML_O33_OML_O33_PATIENT_VISIT_PRIOR; /* PATIENT_VISIT_PRIOR */
struct OML_O33_OML_O33_ORDER_PRIOR; /* ORDER_PRIOR */
struct OML_O33_OML_O33_OBSERVATION_PARTICIPATION_PRIOR; /* OBSERVATION_PARTICIPATION_PRIOR */
struct OML_O33_OML_O33_TIMING_PRIOR; /* TIMING_PRIOR */
struct OML_O33_OML_O33_OBSERVATION_PRIOR; /* OBSERVATION_PRIOR */

/*  */
struct OML_O33_OML_O33 : public HL7Message {
  OML_O33_OML_O33() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OML_O33_OML_O33_MSH_1,
    OML_O33_OML_O33_ARV_2,
    OML_O33_OML_O33_SFT_3,
    OML_O33_OML_O33_UAC_4,
    OML_O33_OML_O33_NTE_5,
    OML_O33_OML_O33_DEV_9,
    OML_O33_OML_O33_OBX_10,
    OML_O33_OML_O33_AL1_15,
    OML_O33_OML_O33_ARV_16,
    OML_O33_OML_O33_GT1_17,
    OML_O33_OML_O33_NTE_18,
    OML_O33_OML_O33_PD1_19,
    OML_O33_OML_O33_PID_20,
    OML_O33_OML_O33_PRT_21,
    OML_O33_OML_O33_IN1_22,
    OML_O33_OML_O33_IN2_23,
    OML_O33_OML_O33_IN3_24,
    OML_O33_OML_O33_IN1_25,
    OML_O33_OML_O33_IN2_26,
    OML_O33_OML_O33_IN3_27,
    OML_O33_OML_O33_OH1_28,
    OML_O33_OML_O33_OH2_29,
    OML_O33_OML_O33_OH3_30,
    OML_O33_OML_O33_OH4_31,
    OML_O33_OML_O33_IN1_32,
    OML_O33_OML_O33_IN2_33,
    OML_O33_OML_O33_IN3_34,
    OML_O33_OML_O33_OH1_35,
    OML_O33_OML_O33_OH2_36,
    OML_O33_OML_O33_OH3_37,
    OML_O33_OML_O33_OH4_38,
    OML_O33_OML_O33_NK1_39,
    OML_O33_OML_O33_OH2_40,
    OML_O33_OML_O33_OH3_41,
    OML_O33_OML_O33_IN1_42,
    OML_O33_OML_O33_IN2_43,
    OML_O33_OML_O33_IN3_44,
    OML_O33_OML_O33_OH1_45,
    OML_O33_OML_O33_OH2_46,
    OML_O33_OML_O33_OH3_47,
    OML_O33_OML_O33_OH4_48,
    OML_O33_OML_O33_NK1_49,
    OML_O33_OML_O33_OH2_50,
    OML_O33_OML_O33_OH3_51,
    OML_O33_OML_O33_PRT_52,
    OML_O33_OML_O33_PV1_53,
    OML_O33_OML_O33_PV2_54,
    OML_O33_OML_O33_NTE_58,
    OML_O33_OML_O33_SPM_59,
    OML_O33_OML_O33_OBX_60,
    OML_O33_OML_O33_PRT_61,
    OML_O33_OML_O33_OBX_62,
    OML_O33_OML_O33_PRT_63,
    OML_O33_OML_O33_NTE_64,
    OML_O33_OML_O33_SAC_65,
    OML_O33_OML_O33_OBX_66,
    OML_O33_OML_O33_PRT_67,
    OML_O33_OML_O33_NTE_68,
    OML_O33_OML_O33_SAC_69,
    OML_O33_OML_O33_BLG_72,
    OML_O33_OML_O33_CTI_73,
    OML_O33_OML_O33_FT1_74,
    OML_O33_OML_O33_NTE_75,
    OML_O33_OML_O33_ORC_76,
    OML_O33_OML_O33_PRT_77,
    OML_O33_OML_O33_TQ1_78,
    OML_O33_OML_O33_TQ2_79,
    OML_O33_OML_O33_TQ1_80,
    OML_O33_OML_O33_TQ2_81,
    OML_O33_OML_O33_DG1_84,
    OML_O33_OML_O33_IPC_85,
    OML_O33_OML_O33_NTE_86,
    OML_O33_OML_O33_OBR_87,
    OML_O33_OML_O33_PRT_88,
    OML_O33_OML_O33_REL_89,
    OML_O33_OML_O33_SGH_90,
    OML_O33_OML_O33_SGT_91,
    OML_O33_OML_O33_TCD_92,
    OML_O33_OML_O33_AL1_96,
    OML_O33_OML_O33_ARV_97,
    OML_O33_OML_O33_PD1_98,
    OML_O33_OML_O33_PID_99,
    OML_O33_OML_O33_PRT_100,
    OML_O33_OML_O33_ARV_101,
    OML_O33_OML_O33_PD1_102,
    OML_O33_OML_O33_PID_103,
    OML_O33_OML_O33_PRT_104,
    OML_O33_OML_O33_PRT_105,
    OML_O33_OML_O33_PV1_106,
    OML_O33_OML_O33_PV2_107,
    OML_O33_OML_O33_ARV_108,
    OML_O33_OML_O33_PD1_109,
    OML_O33_OML_O33_PID_110,
    OML_O33_OML_O33_PRT_111,
    OML_O33_OML_O33_PRT_112,
    OML_O33_OML_O33_PV1_113,
    OML_O33_OML_O33_PV2_114,
    OML_O33_OML_O33_NTE_118,
    OML_O33_OML_O33_OBR_119,
    OML_O33_OML_O33_ORC_120,
    OML_O33_OML_O33_PRT_121,
    OML_O33_OML_O33_DEV_122,
    OML_O33_OML_O33_PRT_123,
    OML_O33_OML_O33_DEV_124,
    OML_O33_OML_O33_PRT_125,
    OML_O33_OML_O33_TQ1_126,
    OML_O33_OML_O33_TQ2_127,
    OML_O33_OML_O33_DEV_128,
    OML_O33_OML_O33_PRT_129,
    OML_O33_OML_O33_TQ1_130,
    OML_O33_OML_O33_TQ2_131,
    OML_O33_OML_O33_NTE_132,
    OML_O33_OML_O33_OBX_133,
    OML_O33_OML_O33_PRT_134,
    OML_O33_OML_O33_AL1_138,
    OML_O33_OML_O33_NTE_139,
    OML_O33_OML_O33_OBX_140,
    OML_O33_OML_O33_PRT_141,
    OML_O33_OML_O33_TCD_142,
    OML_O33_OML_O33_ARV_143,
    OML_O33_OML_O33_PD1_144,
    OML_O33_OML_O33_PID_145,
    OML_O33_OML_O33_PRT_146,
    OML_O33_OML_O33_ARV_147,
    OML_O33_OML_O33_PD1_148,
    OML_O33_OML_O33_PID_149,
    OML_O33_OML_O33_PRT_150,
    OML_O33_OML_O33_PRT_151,
    OML_O33_OML_O33_PV1_152,
    OML_O33_OML_O33_PV2_153,
    OML_O33_OML_O33_ARV_154,
    OML_O33_OML_O33_PD1_155,
    OML_O33_OML_O33_PID_156,
    OML_O33_OML_O33_PRT_157,
    OML_O33_OML_O33_PRT_158,
    OML_O33_OML_O33_PV1_159,
    OML_O33_OML_O33_PV2_160,
    OML_O33_OML_O33_NTE_164,
    OML_O33_OML_O33_OBR_165,
    OML_O33_OML_O33_ORC_166,
    OML_O33_OML_O33_PRT_167,
    OML_O33_OML_O33_DEV_168,
    OML_O33_OML_O33_PRT_169,
    OML_O33_OML_O33_DEV_170,
    OML_O33_OML_O33_PRT_171,
    OML_O33_OML_O33_TQ1_172,
    OML_O33_OML_O33_TQ2_173,
    OML_O33_OML_O33_DEV_174,
    OML_O33_OML_O33_PRT_175,
    OML_O33_OML_O33_TQ1_176,
    OML_O33_OML_O33_TQ2_177,
    OML_O33_OML_O33_NTE_178,
    OML_O33_OML_O33_OBX_179,
    OML_O33_OML_O33_PRT_180,
    FIELD_ID_MAX
  };

  const char* className() const { return "OML_O33_OML_O33"; }
  OML_O33_OML_O33* create() const { return new OML_O33_OML_O33(); }

 private:
  /* Initialize object */
  void init() {
    setName("OML_O33_OML_O33");
    addObject<MSH>(OML_O33_OML_O33_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OML_O33_OML_O33_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(OML_O33_OML_O33_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(OML_O33_OML_O33_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OML_O33_OML_O33_NTE_5, "NTE.5", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OML_O33_OML_O33_DEV_9, "DEV.9", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OML_O33_OML_O33_OBX_10, "OBX.10", HL7::optional, HL7::repetition_on);
    addObject<AL1>(OML_O33_OML_O33_AL1_15, "AL1.15", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OML_O33_OML_O33_ARV_16, "ARV.16", HL7::optional, HL7::repetition_on);
    addObject<GT1>(OML_O33_OML_O33_GT1_17, "GT1.17", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OML_O33_OML_O33_NTE_18, "NTE.18", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OML_O33_OML_O33_PD1_19, "PD1.19", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O33_OML_O33_PID_20, "PID.20", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O33_OML_O33_PRT_21, "PRT.21", HL7::optional, HL7::repetition_on);
    addObject<IN1>(OML_O33_OML_O33_IN1_22, "IN1.22", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OML_O33_OML_O33_IN2_23, "IN2.23", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OML_O33_OML_O33_IN3_24, "IN3.24", HL7::optional, HL7::repetition_off);
    addObject<IN1>(OML_O33_OML_O33_IN1_25, "IN1.25", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OML_O33_OML_O33_IN2_26, "IN2.26", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OML_O33_OML_O33_IN3_27, "IN3.27", HL7::optional, HL7::repetition_off);
    addObject<OH1>(OML_O33_OML_O33_OH1_28, "OH1.28", HL7::optional, HL7::repetition_on);
    addObject<OH2>(OML_O33_OML_O33_OH2_29, "OH2.29", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OML_O33_OML_O33_OH3_30, "OH3.30", HL7::optional, HL7::repetition_off);
    addObject<OH4>(OML_O33_OML_O33_OH4_31, "OH4.31", HL7::optional, HL7::repetition_on);
    addObject<IN1>(OML_O33_OML_O33_IN1_32, "IN1.32", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OML_O33_OML_O33_IN2_33, "IN2.33", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OML_O33_OML_O33_IN3_34, "IN3.34", HL7::optional, HL7::repetition_off);
    addObject<OH1>(OML_O33_OML_O33_OH1_35, "OH1.35", HL7::optional, HL7::repetition_on);
    addObject<OH2>(OML_O33_OML_O33_OH2_36, "OH2.36", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OML_O33_OML_O33_OH3_37, "OH3.37", HL7::optional, HL7::repetition_off);
    addObject<OH4>(OML_O33_OML_O33_OH4_38, "OH4.38", HL7::optional, HL7::repetition_on);
    addObject<NK1>(OML_O33_OML_O33_NK1_39, "NK1.39", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(OML_O33_OML_O33_OH2_40, "OH2.40", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OML_O33_OML_O33_OH3_41, "OH3.41", HL7::optional, HL7::repetition_off);
    addObject<IN1>(OML_O33_OML_O33_IN1_42, "IN1.42", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OML_O33_OML_O33_IN2_43, "IN2.43", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OML_O33_OML_O33_IN3_44, "IN3.44", HL7::optional, HL7::repetition_off);
    addObject<OH1>(OML_O33_OML_O33_OH1_45, "OH1.45", HL7::optional, HL7::repetition_on);
    addObject<OH2>(OML_O33_OML_O33_OH2_46, "OH2.46", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OML_O33_OML_O33_OH3_47, "OH3.47", HL7::optional, HL7::repetition_off);
    addObject<OH4>(OML_O33_OML_O33_OH4_48, "OH4.48", HL7::optional, HL7::repetition_on);
    addObject<NK1>(OML_O33_OML_O33_NK1_49, "NK1.49", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(OML_O33_OML_O33_OH2_50, "OH2.50", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OML_O33_OML_O33_OH3_51, "OH3.51", HL7::optional, HL7::repetition_off);
    addObject<PRT>(OML_O33_OML_O33_PRT_52, "PRT.52", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OML_O33_OML_O33_PV1_53, "PV1.53", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OML_O33_OML_O33_PV2_54, "PV2.54", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OML_O33_OML_O33_NTE_58, "NTE.58", HL7::optional, HL7::repetition_on);
    addObject<SPM>(OML_O33_OML_O33_SPM_59, "SPM.59", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OML_O33_OML_O33_OBX_60, "OBX.60", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O33_OML_O33_PRT_61, "PRT.61", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O33_OML_O33_OBX_62, "OBX.62", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O33_OML_O33_PRT_63, "PRT.63", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O33_OML_O33_NTE_64, "NTE.64", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OML_O33_OML_O33_SAC_65, "SAC.65", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OML_O33_OML_O33_OBX_66, "OBX.66", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O33_OML_O33_PRT_67, "PRT.67", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O33_OML_O33_NTE_68, "NTE.68", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OML_O33_OML_O33_SAC_69, "SAC.69", HL7::initialized, HL7::repetition_off);
    addObject<BLG>(OML_O33_OML_O33_BLG_72, "BLG.72", HL7::optional, HL7::repetition_off);
    addObject<CTI>(OML_O33_OML_O33_CTI_73, "CTI.73", HL7::optional, HL7::repetition_on);
    addObject<FT1>(OML_O33_OML_O33_FT1_74, "FT1.74", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O33_OML_O33_NTE_75, "NTE.75", HL7::optional, HL7::repetition_on);
    addObject<ORC>(OML_O33_OML_O33_ORC_76, "ORC.76", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O33_OML_O33_PRT_77, "PRT.77", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OML_O33_OML_O33_TQ1_78, "TQ1.78", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OML_O33_OML_O33_TQ2_79, "TQ2.79", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OML_O33_OML_O33_TQ1_80, "TQ1.80", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OML_O33_OML_O33_TQ2_81, "TQ2.81", HL7::optional, HL7::repetition_on);
    addObject<DG1>(OML_O33_OML_O33_DG1_84, "DG1.84", HL7::optional, HL7::repetition_on);
    addObject<IPC>(OML_O33_OML_O33_IPC_85, "IPC.85", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OML_O33_OML_O33_NTE_86, "NTE.86", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OML_O33_OML_O33_OBR_87, "OBR.87", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O33_OML_O33_PRT_88, "PRT.88", HL7::optional, HL7::repetition_on);
    addObject<REL>(OML_O33_OML_O33_REL_89, "REL.89", HL7::optional, HL7::repetition_off);
    addObject<SGH>(OML_O33_OML_O33_SGH_90, "SGH.90", HL7::optional, HL7::repetition_off);
    addObject<SGT>(OML_O33_OML_O33_SGT_91, "SGT.91", HL7::optional, HL7::repetition_off);
    addObject<TCD>(OML_O33_OML_O33_TCD_92, "TCD.92", HL7::optional, HL7::repetition_off);
    addObject<AL1>(OML_O33_OML_O33_AL1_96, "AL1.96", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OML_O33_OML_O33_ARV_97, "ARV.97", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OML_O33_OML_O33_PD1_98, "PD1.98", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O33_OML_O33_PID_99, "PID.99", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O33_OML_O33_PRT_100, "PRT.100", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OML_O33_OML_O33_ARV_101, "ARV.101", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OML_O33_OML_O33_PD1_102, "PD1.102", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O33_OML_O33_PID_103, "PID.103", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O33_OML_O33_PRT_104, "PRT.104", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O33_OML_O33_PRT_105, "PRT.105", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OML_O33_OML_O33_PV1_106, "PV1.106", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OML_O33_OML_O33_PV2_107, "PV2.107", HL7::optional, HL7::repetition_off);
    addObject<ARV>(OML_O33_OML_O33_ARV_108, "ARV.108", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OML_O33_OML_O33_PD1_109, "PD1.109", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O33_OML_O33_PID_110, "PID.110", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O33_OML_O33_PRT_111, "PRT.111", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O33_OML_O33_PRT_112, "PRT.112", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OML_O33_OML_O33_PV1_113, "PV1.113", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OML_O33_OML_O33_PV2_114, "PV2.114", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OML_O33_OML_O33_NTE_118, "NTE.118", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OML_O33_OML_O33_OBR_119, "OBR.119", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(OML_O33_OML_O33_ORC_120, "ORC.120", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O33_OML_O33_PRT_121, "PRT.121", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OML_O33_OML_O33_DEV_122, "DEV.122", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O33_OML_O33_PRT_123, "PRT.123", HL7::initialized, HL7::repetition_off);
    addObject<DEV>(OML_O33_OML_O33_DEV_124, "DEV.124", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O33_OML_O33_PRT_125, "PRT.125", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(OML_O33_OML_O33_TQ1_126, "TQ1.126", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OML_O33_OML_O33_TQ2_127, "TQ2.127", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OML_O33_OML_O33_DEV_128, "DEV.128", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O33_OML_O33_PRT_129, "PRT.129", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(OML_O33_OML_O33_TQ1_130, "TQ1.130", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OML_O33_OML_O33_TQ2_131, "TQ2.131", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O33_OML_O33_NTE_132, "NTE.132", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O33_OML_O33_OBX_133, "OBX.133", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O33_OML_O33_PRT_134, "PRT.134", HL7::optional, HL7::repetition_on);
    addObject<AL1>(OML_O33_OML_O33_AL1_138, "AL1.138", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O33_OML_O33_NTE_139, "NTE.139", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O33_OML_O33_OBX_140, "OBX.140", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O33_OML_O33_PRT_141, "PRT.141", HL7::optional, HL7::repetition_on);
    addObject<TCD>(OML_O33_OML_O33_TCD_142, "TCD.142", HL7::optional, HL7::repetition_off);
    addObject<ARV>(OML_O33_OML_O33_ARV_143, "ARV.143", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OML_O33_OML_O33_PD1_144, "PD1.144", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O33_OML_O33_PID_145, "PID.145", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O33_OML_O33_PRT_146, "PRT.146", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OML_O33_OML_O33_ARV_147, "ARV.147", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OML_O33_OML_O33_PD1_148, "PD1.148", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O33_OML_O33_PID_149, "PID.149", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O33_OML_O33_PRT_150, "PRT.150", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O33_OML_O33_PRT_151, "PRT.151", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OML_O33_OML_O33_PV1_152, "PV1.152", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OML_O33_OML_O33_PV2_153, "PV2.153", HL7::optional, HL7::repetition_off);
    addObject<ARV>(OML_O33_OML_O33_ARV_154, "ARV.154", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OML_O33_OML_O33_PD1_155, "PD1.155", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O33_OML_O33_PID_156, "PID.156", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O33_OML_O33_PRT_157, "PRT.157", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O33_OML_O33_PRT_158, "PRT.158", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OML_O33_OML_O33_PV1_159, "PV1.159", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OML_O33_OML_O33_PV2_160, "PV2.160", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OML_O33_OML_O33_NTE_164, "NTE.164", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OML_O33_OML_O33_OBR_165, "OBR.165", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(OML_O33_OML_O33_ORC_166, "ORC.166", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O33_OML_O33_PRT_167, "PRT.167", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OML_O33_OML_O33_DEV_168, "DEV.168", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O33_OML_O33_PRT_169, "PRT.169", HL7::initialized, HL7::repetition_off);
    addObject<DEV>(OML_O33_OML_O33_DEV_170, "DEV.170", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O33_OML_O33_PRT_171, "PRT.171", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(OML_O33_OML_O33_TQ1_172, "TQ1.172", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OML_O33_OML_O33_TQ2_173, "TQ2.173", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OML_O33_OML_O33_DEV_174, "DEV.174", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O33_OML_O33_PRT_175, "PRT.175", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(OML_O33_OML_O33_TQ1_176, "TQ1.176", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OML_O33_OML_O33_TQ2_177, "TQ2.177", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O33_OML_O33_NTE_178, "NTE.178", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O33_OML_O33_OBX_179, "OBX.179", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O33_OML_O33_PRT_180, "PRT.180", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OML_O33_OML_O33_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O33_OML_O33_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, OML_O33_OML_O33_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, OML_O33_OML_O33_UAC_4);
  }
  NTE* getNTE_5(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O33_OML_O33_NTE_5);
  }
  DEV* getDEV_9(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O33_OML_O33_DEV_9);
  }
  OBX* getOBX_10(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O33_OML_O33_OBX_10);
  }
  AL1* getAL1_15(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OML_O33_OML_O33_AL1_15);
  }
  ARV* getARV_16(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O33_OML_O33_ARV_16);
  }
  GT1* getGT1_17(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, OML_O33_OML_O33_GT1_17);
  }
  NTE* getNTE_18(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O33_OML_O33_NTE_18);
  }
  PD1* getPD1_19(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O33_OML_O33_PD1_19);
  }
  PID* getPID_20(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O33_OML_O33_PID_20);
  }
  PRT* getPRT_21(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_21);
  }
  IN1* getIN1_22(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OML_O33_OML_O33_IN1_22);
  }
  IN2* getIN2_23(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OML_O33_OML_O33_IN2_23);
  }
  IN3* getIN3_24(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OML_O33_OML_O33_IN3_24);
  }
  IN1* getIN1_25(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OML_O33_OML_O33_IN1_25);
  }
  IN2* getIN2_26(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OML_O33_OML_O33_IN2_26);
  }
  IN3* getIN3_27(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OML_O33_OML_O33_IN3_27);
  }
  OH1* getOH1_28(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, OML_O33_OML_O33_OH1_28);
  }
  OH2* getOH2_29(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OML_O33_OML_O33_OH2_29);
  }
  OH3* getOH3_30(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OML_O33_OML_O33_OH3_30);
  }
  OH4* getOH4_31(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, OML_O33_OML_O33_OH4_31);
  }
  IN1* getIN1_32(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OML_O33_OML_O33_IN1_32);
  }
  IN2* getIN2_33(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OML_O33_OML_O33_IN2_33);
  }
  IN3* getIN3_34(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OML_O33_OML_O33_IN3_34);
  }
  OH1* getOH1_35(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, OML_O33_OML_O33_OH1_35);
  }
  OH2* getOH2_36(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OML_O33_OML_O33_OH2_36);
  }
  OH3* getOH3_37(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OML_O33_OML_O33_OH3_37);
  }
  OH4* getOH4_38(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, OML_O33_OML_O33_OH4_38);
  }
  NK1* getNK1_39(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, OML_O33_OML_O33_NK1_39);
  }
  OH2* getOH2_40(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OML_O33_OML_O33_OH2_40);
  }
  OH3* getOH3_41(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OML_O33_OML_O33_OH3_41);
  }
  IN1* getIN1_42(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OML_O33_OML_O33_IN1_42);
  }
  IN2* getIN2_43(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OML_O33_OML_O33_IN2_43);
  }
  IN3* getIN3_44(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OML_O33_OML_O33_IN3_44);
  }
  OH1* getOH1_45(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, OML_O33_OML_O33_OH1_45);
  }
  OH2* getOH2_46(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OML_O33_OML_O33_OH2_46);
  }
  OH3* getOH3_47(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OML_O33_OML_O33_OH3_47);
  }
  OH4* getOH4_48(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, OML_O33_OML_O33_OH4_48);
  }
  NK1* getNK1_49(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, OML_O33_OML_O33_NK1_49);
  }
  OH2* getOH2_50(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OML_O33_OML_O33_OH2_50);
  }
  OH3* getOH3_51(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OML_O33_OML_O33_OH3_51);
  }
  PRT* getPRT_52(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_52);
  }
  PV1* getPV1_53(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OML_O33_OML_O33_PV1_53);
  }
  PV2* getPV2_54(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OML_O33_OML_O33_PV2_54);
  }
  NTE* getNTE_58(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O33_OML_O33_NTE_58);
  }
  SPM* getSPM_59(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, OML_O33_OML_O33_SPM_59);
  }
  OBX* getOBX_60(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O33_OML_O33_OBX_60);
  }
  PRT* getPRT_61(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_61);
  }
  OBX* getOBX_62(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O33_OML_O33_OBX_62);
  }
  PRT* getPRT_63(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_63);
  }
  NTE* getNTE_64(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O33_OML_O33_NTE_64);
  }
  SAC* getSAC_65(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OML_O33_OML_O33_SAC_65);
  }
  OBX* getOBX_66(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O33_OML_O33_OBX_66);
  }
  PRT* getPRT_67(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_67);
  }
  NTE* getNTE_68(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O33_OML_O33_NTE_68);
  }
  SAC* getSAC_69(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OML_O33_OML_O33_SAC_69);
  }
  BLG* getBLG_72(size_t index = 0) {
    return (BLG*)this->getObjectSafe(index, OML_O33_OML_O33_BLG_72);
  }
  CTI* getCTI_73(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, OML_O33_OML_O33_CTI_73);
  }
  FT1* getFT1_74(size_t index = 0) {
    return (FT1*)this->getObjectSafe(index, OML_O33_OML_O33_FT1_74);
  }
  NTE* getNTE_75(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O33_OML_O33_NTE_75);
  }
  ORC* getORC_76(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OML_O33_OML_O33_ORC_76);
  }
  PRT* getPRT_77(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_77);
  }
  TQ1* getTQ1_78(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OML_O33_OML_O33_TQ1_78);
  }
  TQ2* getTQ2_79(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OML_O33_OML_O33_TQ2_79);
  }
  TQ1* getTQ1_80(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OML_O33_OML_O33_TQ1_80);
  }
  TQ2* getTQ2_81(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OML_O33_OML_O33_TQ2_81);
  }
  DG1* getDG1_84(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, OML_O33_OML_O33_DG1_84);
  }
  IPC* getIPC_85(size_t index = 0) {
    return (IPC*)this->getObjectSafe(index, OML_O33_OML_O33_IPC_85);
  }
  NTE* getNTE_86(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O33_OML_O33_NTE_86);
  }
  OBR* getOBR_87(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OML_O33_OML_O33_OBR_87);
  }
  PRT* getPRT_88(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_88);
  }
  REL* getREL_89(size_t index = 0) {
    return (REL*)this->getObjectSafe(index, OML_O33_OML_O33_REL_89);
  }
  SGH* getSGH_90(size_t index = 0) {
    return (SGH*)this->getObjectSafe(index, OML_O33_OML_O33_SGH_90);
  }
  SGT* getSGT_91(size_t index = 0) {
    return (SGT*)this->getObjectSafe(index, OML_O33_OML_O33_SGT_91);
  }
  TCD* getTCD_92(size_t index = 0) {
    return (TCD*)this->getObjectSafe(index, OML_O33_OML_O33_TCD_92);
  }
  AL1* getAL1_96(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OML_O33_OML_O33_AL1_96);
  }
  ARV* getARV_97(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O33_OML_O33_ARV_97);
  }
  PD1* getPD1_98(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O33_OML_O33_PD1_98);
  }
  PID* getPID_99(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O33_OML_O33_PID_99);
  }
  PRT* getPRT_100(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_100);
  }
  ARV* getARV_101(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O33_OML_O33_ARV_101);
  }
  PD1* getPD1_102(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O33_OML_O33_PD1_102);
  }
  PID* getPID_103(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O33_OML_O33_PID_103);
  }
  PRT* getPRT_104(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_104);
  }
  PRT* getPRT_105(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_105);
  }
  PV1* getPV1_106(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OML_O33_OML_O33_PV1_106);
  }
  PV2* getPV2_107(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OML_O33_OML_O33_PV2_107);
  }
  ARV* getARV_108(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O33_OML_O33_ARV_108);
  }
  PD1* getPD1_109(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O33_OML_O33_PD1_109);
  }
  PID* getPID_110(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O33_OML_O33_PID_110);
  }
  PRT* getPRT_111(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_111);
  }
  PRT* getPRT_112(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_112);
  }
  PV1* getPV1_113(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OML_O33_OML_O33_PV1_113);
  }
  PV2* getPV2_114(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OML_O33_OML_O33_PV2_114);
  }
  NTE* getNTE_118(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O33_OML_O33_NTE_118);
  }
  OBR* getOBR_119(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OML_O33_OML_O33_OBR_119);
  }
  ORC* getORC_120(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OML_O33_OML_O33_ORC_120);
  }
  PRT* getPRT_121(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_121);
  }
  DEV* getDEV_122(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O33_OML_O33_DEV_122);
  }
  PRT* getPRT_123(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_123);
  }
  DEV* getDEV_124(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O33_OML_O33_DEV_124);
  }
  PRT* getPRT_125(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_125);
  }
  TQ1* getTQ1_126(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OML_O33_OML_O33_TQ1_126);
  }
  TQ2* getTQ2_127(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OML_O33_OML_O33_TQ2_127);
  }
  DEV* getDEV_128(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O33_OML_O33_DEV_128);
  }
  PRT* getPRT_129(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_129);
  }
  TQ1* getTQ1_130(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OML_O33_OML_O33_TQ1_130);
  }
  TQ2* getTQ2_131(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OML_O33_OML_O33_TQ2_131);
  }
  NTE* getNTE_132(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O33_OML_O33_NTE_132);
  }
  OBX* getOBX_133(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O33_OML_O33_OBX_133);
  }
  PRT* getPRT_134(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_134);
  }
  AL1* getAL1_138(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OML_O33_OML_O33_AL1_138);
  }
  NTE* getNTE_139(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O33_OML_O33_NTE_139);
  }
  OBX* getOBX_140(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O33_OML_O33_OBX_140);
  }
  PRT* getPRT_141(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_141);
  }
  TCD* getTCD_142(size_t index = 0) {
    return (TCD*)this->getObjectSafe(index, OML_O33_OML_O33_TCD_142);
  }
  ARV* getARV_143(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O33_OML_O33_ARV_143);
  }
  PD1* getPD1_144(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O33_OML_O33_PD1_144);
  }
  PID* getPID_145(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O33_OML_O33_PID_145);
  }
  PRT* getPRT_146(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_146);
  }
  ARV* getARV_147(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O33_OML_O33_ARV_147);
  }
  PD1* getPD1_148(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O33_OML_O33_PD1_148);
  }
  PID* getPID_149(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O33_OML_O33_PID_149);
  }
  PRT* getPRT_150(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_150);
  }
  PRT* getPRT_151(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_151);
  }
  PV1* getPV1_152(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OML_O33_OML_O33_PV1_152);
  }
  PV2* getPV2_153(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OML_O33_OML_O33_PV2_153);
  }
  ARV* getARV_154(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O33_OML_O33_ARV_154);
  }
  PD1* getPD1_155(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O33_OML_O33_PD1_155);
  }
  PID* getPID_156(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O33_OML_O33_PID_156);
  }
  PRT* getPRT_157(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_157);
  }
  PRT* getPRT_158(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_158);
  }
  PV1* getPV1_159(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OML_O33_OML_O33_PV1_159);
  }
  PV2* getPV2_160(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OML_O33_OML_O33_PV2_160);
  }
  NTE* getNTE_164(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O33_OML_O33_NTE_164);
  }
  OBR* getOBR_165(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OML_O33_OML_O33_OBR_165);
  }
  ORC* getORC_166(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OML_O33_OML_O33_ORC_166);
  }
  PRT* getPRT_167(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_167);
  }
  DEV* getDEV_168(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O33_OML_O33_DEV_168);
  }
  PRT* getPRT_169(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_169);
  }
  DEV* getDEV_170(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O33_OML_O33_DEV_170);
  }
  PRT* getPRT_171(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_171);
  }
  TQ1* getTQ1_172(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OML_O33_OML_O33_TQ1_172);
  }
  TQ2* getTQ2_173(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OML_O33_OML_O33_TQ2_173);
  }
  DEV* getDEV_174(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O33_OML_O33_DEV_174);
  }
  PRT* getPRT_175(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_175);
  }
  TQ1* getTQ1_176(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OML_O33_OML_O33_TQ1_176);
  }
  TQ2* getTQ2_177(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OML_O33_OML_O33_TQ2_177);
  }
  NTE* getNTE_178(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O33_OML_O33_NTE_178);
  }
  OBX* getOBX_179(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O33_OML_O33_OBX_179);
  }
  PRT* getPRT_180(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O33_OML_O33_PRT_180);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_5(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_NTE_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_9(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_DEV_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_10(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_OBX_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_15(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_AL1_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_16(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_ARV_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_17(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_GT1_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_18(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_NTE_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_19(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PD1_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_20(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PID_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_21(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_22(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_IN1_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_23(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_IN2_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_24(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_IN3_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_25(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_IN1_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_26(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_IN2_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_27(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_IN3_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_28(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_OH1_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_29(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_OH2_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_30(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_OH3_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_31(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_OH4_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_32(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_IN1_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_33(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_IN2_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_34(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_IN3_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_35(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_OH1_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_36(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_OH2_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_37(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_OH3_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_38(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_OH4_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_39(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_NK1_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_40(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_OH2_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_41(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_OH3_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_42(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_IN1_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_43(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_IN2_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_44(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_IN3_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_45(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_OH1_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_46(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_OH2_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_47(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_OH3_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_48(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_OH4_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_49(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_NK1_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_50(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_OH2_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_51(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_OH3_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_52(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_53(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PV1_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_54(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PV2_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_58(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_NTE_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_59(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_SPM_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_60(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_OBX_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_61(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_62(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_OBX_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_63(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_64(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_NTE_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_65(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_SAC_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_66(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_OBX_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_67(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_68(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_NTE_68) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_69(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_SAC_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBLG_72(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_BLG_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_73(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_CTI_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFT1_74(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_FT1_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_75(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_NTE_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_76(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_ORC_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_77(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_77) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_78(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_TQ1_78) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_79(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_TQ2_79) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_80(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_TQ1_80) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_81(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_TQ2_81) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_84(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_DG1_84) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIPC_85(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_IPC_85) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_86(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_NTE_86) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_87(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_OBR_87) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_88(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_88) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isREL_89(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_REL_89) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSGH_90(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_SGH_90) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSGT_91(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_SGT_91) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTCD_92(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_TCD_92) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_96(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_AL1_96) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_97(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_ARV_97) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_98(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PD1_98) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_99(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PID_99) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_100(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_100) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_101(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_ARV_101) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_102(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PD1_102) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_103(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PID_103) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_104(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_104) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_105(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_105) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_106(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PV1_106) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_107(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PV2_107) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_108(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_ARV_108) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_109(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PD1_109) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_110(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PID_110) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_111(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_111) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_112(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_112) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_113(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PV1_113) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_114(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PV2_114) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_118(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_NTE_118) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_119(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_OBR_119) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_120(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_ORC_120) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_121(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_121) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_122(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_DEV_122) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_123(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_123) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_124(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_DEV_124) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_125(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_125) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_126(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_TQ1_126) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_127(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_TQ2_127) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_128(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_DEV_128) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_129(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_129) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_130(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_TQ1_130) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_131(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_TQ2_131) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_132(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_NTE_132) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_133(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_OBX_133) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_134(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_134) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_138(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_AL1_138) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_139(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_NTE_139) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_140(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_OBX_140) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_141(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_141) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTCD_142(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_TCD_142) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_143(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_ARV_143) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_144(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PD1_144) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_145(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PID_145) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_146(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_146) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_147(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_ARV_147) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_148(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PD1_148) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_149(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PID_149) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_150(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_150) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_151(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_151) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_152(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PV1_152) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_153(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PV2_153) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_154(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_ARV_154) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_155(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PD1_155) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_156(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PID_156) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_157(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_157) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_158(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_158) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_159(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PV1_159) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_160(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PV2_160) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_164(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_NTE_164) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_165(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_OBR_165) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_166(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_ORC_166) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_167(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_167) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_168(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_DEV_168) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_169(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_169) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_170(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_DEV_170) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_171(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_171) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_172(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_TQ1_172) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_173(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_TQ2_173) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_174(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_DEV_174) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_175(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_175) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_176(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_TQ1_176) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_177(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_TQ2_177) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_178(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_NTE_178) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_179(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_OBX_179) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_180(size_t index = 0) {
    try {
      return this->getObject(index, OML_O33_OML_O33_PRT_180) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OML_O33_OML_O33_ */
} /* namespace HL7_29 */
#endif /*  __OML_O33_OML_O33__29_H__ */
