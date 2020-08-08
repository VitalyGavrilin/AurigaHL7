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


#ifndef __OML_O35_OML_O35__29_H__
#define __OML_O35_OML_O35__29_H__

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
struct OML_O35_OML_O35_PATIENT; /* PATIENT */
struct OML_O35_OML_O35_SPECIMEN; /* SPECIMEN */
struct OML_O35_OML_O35_DEVICE; /* DEVICE */
struct OML_O35_OML_O35_INSURANCE; /* INSURANCE */
struct OML_O35_OML_O35_OCCUPATIONAL_DATA_FOR_HEALTH; /* OCCUPATIONAL_DATA_FOR_HEALTH */
struct OML_O35_OML_O35_NEXT_OF_KIN; /* NEXT_OF_KIN */
struct OML_O35_OML_O35_PATIENT_VISIT; /* PATIENT_VISIT */
struct OML_O35_OML_O35_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct OML_O35_OML_O35_SPECIMEN_CONTAINER; /* SPECIMEN_CONTAINER */
struct OML_O35_OML_O35_ORDER; /* ORDER */
struct OML_O35_OML_O35_TIMING; /* TIMING */
struct OML_O35_OML_O35_OBSERVATION_REQUEST; /* OBSERVATION_REQUEST */
struct OML_O35_OML_O35_PRIOR_RESULT; /* PRIOR_RESULT */
struct OML_O35_OML_O35_OBSERVATION; /* OBSERVATION */
struct OML_O35_OML_O35_PATIENT_PRIOR; /* PATIENT_PRIOR */
struct OML_O35_OML_O35_PATIENT_VISIT_PRIOR; /* PATIENT_VISIT_PRIOR */
struct OML_O35_OML_O35_ORDER_PRIOR; /* ORDER_PRIOR */
struct OML_O35_OML_O35_OBSERVATION_PARTICIPATION; /* OBSERVATION_PARTICIPATION */
struct OML_O35_OML_O35_TIMING_PRIOR; /* TIMING_PRIOR */
struct OML_O35_OML_O35_OBSERVATION_PRIOR; /* OBSERVATION_PRIOR */
struct OML_O35_OML_O35_PATIENT_PRIOR; /* PATIENT_PRIOR */
struct OML_O35_OML_O35_PATIENT_VISIT_PRIOR; /* PATIENT_VISIT_PRIOR */
struct OML_O35_OML_O35_ORDER_PRIOR; /* ORDER_PRIOR */
struct OML_O35_OML_O35_OBSERVATION_PARTICIPATION; /* OBSERVATION_PARTICIPATION */
struct OML_O35_OML_O35_TIMING_PRIOR; /* TIMING_PRIOR */
struct OML_O35_OML_O35_OBSERVATION_PRIOR; /* OBSERVATION_PRIOR */

/*  */
struct OML_O35_OML_O35 : public HL7Message {
  OML_O35_OML_O35() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OML_O35_OML_O35_MSH_1,
    OML_O35_OML_O35_ARV_2,
    OML_O35_OML_O35_SFT_3,
    OML_O35_OML_O35_UAC_4,
    OML_O35_OML_O35_NTE_5,
    OML_O35_OML_O35_DEV_9,
    OML_O35_OML_O35_OBX_10,
    OML_O35_OML_O35_AL1_15,
    OML_O35_OML_O35_ARV_16,
    OML_O35_OML_O35_GT1_17,
    OML_O35_OML_O35_NTE_18,
    OML_O35_OML_O35_PD1_19,
    OML_O35_OML_O35_PID_20,
    OML_O35_OML_O35_PRT_21,
    OML_O35_OML_O35_IN1_22,
    OML_O35_OML_O35_IN2_23,
    OML_O35_OML_O35_IN3_24,
    OML_O35_OML_O35_IN1_25,
    OML_O35_OML_O35_IN2_26,
    OML_O35_OML_O35_IN3_27,
    OML_O35_OML_O35_OH1_28,
    OML_O35_OML_O35_OH2_29,
    OML_O35_OML_O35_OH3_30,
    OML_O35_OML_O35_OH4_31,
    OML_O35_OML_O35_IN1_32,
    OML_O35_OML_O35_IN2_33,
    OML_O35_OML_O35_IN3_34,
    OML_O35_OML_O35_OH1_35,
    OML_O35_OML_O35_OH2_36,
    OML_O35_OML_O35_OH3_37,
    OML_O35_OML_O35_OH4_38,
    OML_O35_OML_O35_NK1_39,
    OML_O35_OML_O35_OH2_40,
    OML_O35_OML_O35_OH3_41,
    OML_O35_OML_O35_IN1_42,
    OML_O35_OML_O35_IN2_43,
    OML_O35_OML_O35_IN3_44,
    OML_O35_OML_O35_OH1_45,
    OML_O35_OML_O35_OH2_46,
    OML_O35_OML_O35_OH3_47,
    OML_O35_OML_O35_OH4_48,
    OML_O35_OML_O35_NK1_49,
    OML_O35_OML_O35_OH2_50,
    OML_O35_OML_O35_OH3_51,
    OML_O35_OML_O35_PRT_52,
    OML_O35_OML_O35_PV1_53,
    OML_O35_OML_O35_PV2_54,
    OML_O35_OML_O35_NTE_57,
    OML_O35_OML_O35_SPM_58,
    OML_O35_OML_O35_OBX_59,
    OML_O35_OML_O35_PRT_60,
    OML_O35_OML_O35_OBX_61,
    OML_O35_OML_O35_PRT_62,
    OML_O35_OML_O35_NTE_64,
    OML_O35_OML_O35_SAC_65,
    OML_O35_OML_O35_BLG_68,
    OML_O35_OML_O35_CTI_69,
    OML_O35_OML_O35_FT1_70,
    OML_O35_OML_O35_NTE_71,
    OML_O35_OML_O35_ORC_72,
    OML_O35_OML_O35_PRT_73,
    OML_O35_OML_O35_TQ1_74,
    OML_O35_OML_O35_TQ2_75,
    OML_O35_OML_O35_TQ1_76,
    OML_O35_OML_O35_TQ2_77,
    OML_O35_OML_O35_DG1_80,
    OML_O35_OML_O35_IPC_81,
    OML_O35_OML_O35_NTE_82,
    OML_O35_OML_O35_OBR_83,
    OML_O35_OML_O35_PRT_84,
    OML_O35_OML_O35_REL_85,
    OML_O35_OML_O35_SGH_86,
    OML_O35_OML_O35_SGT_87,
    OML_O35_OML_O35_TCD_88,
    OML_O35_OML_O35_AL1_92,
    OML_O35_OML_O35_ARV_93,
    OML_O35_OML_O35_PD1_94,
    OML_O35_OML_O35_PID_95,
    OML_O35_OML_O35_PRT_96,
    OML_O35_OML_O35_ARV_97,
    OML_O35_OML_O35_PD1_98,
    OML_O35_OML_O35_PID_99,
    OML_O35_OML_O35_PRT_100,
    OML_O35_OML_O35_PRT_101,
    OML_O35_OML_O35_PV1_102,
    OML_O35_OML_O35_PV2_103,
    OML_O35_OML_O35_ARV_104,
    OML_O35_OML_O35_PD1_105,
    OML_O35_OML_O35_PID_106,
    OML_O35_OML_O35_PRT_107,
    OML_O35_OML_O35_PRT_108,
    OML_O35_OML_O35_PV1_109,
    OML_O35_OML_O35_PV2_110,
    OML_O35_OML_O35_NTE_114,
    OML_O35_OML_O35_OBR_115,
    OML_O35_OML_O35_ORC_116,
    OML_O35_OML_O35_PRT_117,
    OML_O35_OML_O35_DEV_118,
    OML_O35_OML_O35_PRT_119,
    OML_O35_OML_O35_DEV_120,
    OML_O35_OML_O35_PRT_121,
    OML_O35_OML_O35_TQ1_122,
    OML_O35_OML_O35_TQ2_123,
    OML_O35_OML_O35_DEV_124,
    OML_O35_OML_O35_PRT_125,
    OML_O35_OML_O35_TQ1_126,
    OML_O35_OML_O35_TQ2_127,
    OML_O35_OML_O35_NTE_128,
    OML_O35_OML_O35_OBX_129,
    OML_O35_OML_O35_PRT_130,
    OML_O35_OML_O35_AL1_134,
    OML_O35_OML_O35_NTE_135,
    OML_O35_OML_O35_OBX_136,
    OML_O35_OML_O35_PRT_137,
    OML_O35_OML_O35_TCD_138,
    OML_O35_OML_O35_ARV_139,
    OML_O35_OML_O35_PD1_140,
    OML_O35_OML_O35_PID_141,
    OML_O35_OML_O35_PRT_142,
    OML_O35_OML_O35_ARV_143,
    OML_O35_OML_O35_PD1_144,
    OML_O35_OML_O35_PID_145,
    OML_O35_OML_O35_PRT_146,
    OML_O35_OML_O35_PRT_147,
    OML_O35_OML_O35_PV1_148,
    OML_O35_OML_O35_PV2_149,
    OML_O35_OML_O35_ARV_150,
    OML_O35_OML_O35_PD1_151,
    OML_O35_OML_O35_PID_152,
    OML_O35_OML_O35_PRT_153,
    OML_O35_OML_O35_PRT_154,
    OML_O35_OML_O35_PV1_155,
    OML_O35_OML_O35_PV2_156,
    OML_O35_OML_O35_NTE_160,
    OML_O35_OML_O35_OBR_161,
    OML_O35_OML_O35_ORC_162,
    OML_O35_OML_O35_PRT_163,
    OML_O35_OML_O35_DEV_164,
    OML_O35_OML_O35_PRT_165,
    OML_O35_OML_O35_DEV_166,
    OML_O35_OML_O35_PRT_167,
    OML_O35_OML_O35_TQ1_168,
    OML_O35_OML_O35_TQ2_169,
    OML_O35_OML_O35_DEV_170,
    OML_O35_OML_O35_PRT_171,
    OML_O35_OML_O35_TQ1_172,
    OML_O35_OML_O35_TQ2_173,
    OML_O35_OML_O35_NTE_174,
    OML_O35_OML_O35_OBX_175,
    OML_O35_OML_O35_PRT_176,
    FIELD_ID_MAX
  };

  const char* className() const { return "OML_O35_OML_O35"; }
  OML_O35_OML_O35* create() const { return new OML_O35_OML_O35(); }

 private:
  /* Initialize object */
  void init() {
    setName("OML_O35_OML_O35");
    addObject<MSH>(OML_O35_OML_O35_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OML_O35_OML_O35_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(OML_O35_OML_O35_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(OML_O35_OML_O35_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OML_O35_OML_O35_NTE_5, "NTE.5", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OML_O35_OML_O35_DEV_9, "DEV.9", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OML_O35_OML_O35_OBX_10, "OBX.10", HL7::optional, HL7::repetition_on);
    addObject<AL1>(OML_O35_OML_O35_AL1_15, "AL1.15", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OML_O35_OML_O35_ARV_16, "ARV.16", HL7::optional, HL7::repetition_on);
    addObject<GT1>(OML_O35_OML_O35_GT1_17, "GT1.17", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OML_O35_OML_O35_NTE_18, "NTE.18", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OML_O35_OML_O35_PD1_19, "PD1.19", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O35_OML_O35_PID_20, "PID.20", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O35_OML_O35_PRT_21, "PRT.21", HL7::optional, HL7::repetition_on);
    addObject<IN1>(OML_O35_OML_O35_IN1_22, "IN1.22", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OML_O35_OML_O35_IN2_23, "IN2.23", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OML_O35_OML_O35_IN3_24, "IN3.24", HL7::optional, HL7::repetition_off);
    addObject<IN1>(OML_O35_OML_O35_IN1_25, "IN1.25", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OML_O35_OML_O35_IN2_26, "IN2.26", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OML_O35_OML_O35_IN3_27, "IN3.27", HL7::optional, HL7::repetition_off);
    addObject<OH1>(OML_O35_OML_O35_OH1_28, "OH1.28", HL7::optional, HL7::repetition_on);
    addObject<OH2>(OML_O35_OML_O35_OH2_29, "OH2.29", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OML_O35_OML_O35_OH3_30, "OH3.30", HL7::optional, HL7::repetition_off);
    addObject<OH4>(OML_O35_OML_O35_OH4_31, "OH4.31", HL7::optional, HL7::repetition_on);
    addObject<IN1>(OML_O35_OML_O35_IN1_32, "IN1.32", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OML_O35_OML_O35_IN2_33, "IN2.33", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OML_O35_OML_O35_IN3_34, "IN3.34", HL7::optional, HL7::repetition_off);
    addObject<OH1>(OML_O35_OML_O35_OH1_35, "OH1.35", HL7::optional, HL7::repetition_on);
    addObject<OH2>(OML_O35_OML_O35_OH2_36, "OH2.36", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OML_O35_OML_O35_OH3_37, "OH3.37", HL7::optional, HL7::repetition_off);
    addObject<OH4>(OML_O35_OML_O35_OH4_38, "OH4.38", HL7::optional, HL7::repetition_on);
    addObject<NK1>(OML_O35_OML_O35_NK1_39, "NK1.39", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(OML_O35_OML_O35_OH2_40, "OH2.40", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OML_O35_OML_O35_OH3_41, "OH3.41", HL7::optional, HL7::repetition_off);
    addObject<IN1>(OML_O35_OML_O35_IN1_42, "IN1.42", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OML_O35_OML_O35_IN2_43, "IN2.43", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OML_O35_OML_O35_IN3_44, "IN3.44", HL7::optional, HL7::repetition_off);
    addObject<OH1>(OML_O35_OML_O35_OH1_45, "OH1.45", HL7::optional, HL7::repetition_on);
    addObject<OH2>(OML_O35_OML_O35_OH2_46, "OH2.46", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OML_O35_OML_O35_OH3_47, "OH3.47", HL7::optional, HL7::repetition_off);
    addObject<OH4>(OML_O35_OML_O35_OH4_48, "OH4.48", HL7::optional, HL7::repetition_on);
    addObject<NK1>(OML_O35_OML_O35_NK1_49, "NK1.49", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(OML_O35_OML_O35_OH2_50, "OH2.50", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OML_O35_OML_O35_OH3_51, "OH3.51", HL7::optional, HL7::repetition_off);
    addObject<PRT>(OML_O35_OML_O35_PRT_52, "PRT.52", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OML_O35_OML_O35_PV1_53, "PV1.53", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OML_O35_OML_O35_PV2_54, "PV2.54", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OML_O35_OML_O35_NTE_57, "NTE.57", HL7::optional, HL7::repetition_on);
    addObject<SPM>(OML_O35_OML_O35_SPM_58, "SPM.58", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OML_O35_OML_O35_OBX_59, "OBX.59", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O35_OML_O35_PRT_60, "PRT.60", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O35_OML_O35_OBX_61, "OBX.61", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O35_OML_O35_PRT_62, "PRT.62", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O35_OML_O35_NTE_64, "NTE.64", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OML_O35_OML_O35_SAC_65, "SAC.65", HL7::initialized, HL7::repetition_off);
    addObject<BLG>(OML_O35_OML_O35_BLG_68, "BLG.68", HL7::optional, HL7::repetition_off);
    addObject<CTI>(OML_O35_OML_O35_CTI_69, "CTI.69", HL7::optional, HL7::repetition_on);
    addObject<FT1>(OML_O35_OML_O35_FT1_70, "FT1.70", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O35_OML_O35_NTE_71, "NTE.71", HL7::optional, HL7::repetition_on);
    addObject<ORC>(OML_O35_OML_O35_ORC_72, "ORC.72", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O35_OML_O35_PRT_73, "PRT.73", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OML_O35_OML_O35_TQ1_74, "TQ1.74", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OML_O35_OML_O35_TQ2_75, "TQ2.75", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OML_O35_OML_O35_TQ1_76, "TQ1.76", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OML_O35_OML_O35_TQ2_77, "TQ2.77", HL7::optional, HL7::repetition_on);
    addObject<DG1>(OML_O35_OML_O35_DG1_80, "DG1.80", HL7::optional, HL7::repetition_on);
    addObject<IPC>(OML_O35_OML_O35_IPC_81, "IPC.81", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OML_O35_OML_O35_NTE_82, "NTE.82", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OML_O35_OML_O35_OBR_83, "OBR.83", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O35_OML_O35_PRT_84, "PRT.84", HL7::optional, HL7::repetition_on);
    addObject<REL>(OML_O35_OML_O35_REL_85, "REL.85", HL7::optional, HL7::repetition_off);
    addObject<SGH>(OML_O35_OML_O35_SGH_86, "SGH.86", HL7::optional, HL7::repetition_off);
    addObject<SGT>(OML_O35_OML_O35_SGT_87, "SGT.87", HL7::optional, HL7::repetition_off);
    addObject<TCD>(OML_O35_OML_O35_TCD_88, "TCD.88", HL7::optional, HL7::repetition_off);
    addObject<AL1>(OML_O35_OML_O35_AL1_92, "AL1.92", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OML_O35_OML_O35_ARV_93, "ARV.93", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OML_O35_OML_O35_PD1_94, "PD1.94", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O35_OML_O35_PID_95, "PID.95", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O35_OML_O35_PRT_96, "PRT.96", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OML_O35_OML_O35_ARV_97, "ARV.97", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OML_O35_OML_O35_PD1_98, "PD1.98", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O35_OML_O35_PID_99, "PID.99", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O35_OML_O35_PRT_100, "PRT.100", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O35_OML_O35_PRT_101, "PRT.101", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OML_O35_OML_O35_PV1_102, "PV1.102", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OML_O35_OML_O35_PV2_103, "PV2.103", HL7::optional, HL7::repetition_off);
    addObject<ARV>(OML_O35_OML_O35_ARV_104, "ARV.104", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OML_O35_OML_O35_PD1_105, "PD1.105", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O35_OML_O35_PID_106, "PID.106", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O35_OML_O35_PRT_107, "PRT.107", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O35_OML_O35_PRT_108, "PRT.108", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OML_O35_OML_O35_PV1_109, "PV1.109", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OML_O35_OML_O35_PV2_110, "PV2.110", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OML_O35_OML_O35_NTE_114, "NTE.114", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OML_O35_OML_O35_OBR_115, "OBR.115", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(OML_O35_OML_O35_ORC_116, "ORC.116", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O35_OML_O35_PRT_117, "PRT.117", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OML_O35_OML_O35_DEV_118, "DEV.118", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O35_OML_O35_PRT_119, "PRT.119", HL7::initialized, HL7::repetition_off);
    addObject<DEV>(OML_O35_OML_O35_DEV_120, "DEV.120", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O35_OML_O35_PRT_121, "PRT.121", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(OML_O35_OML_O35_TQ1_122, "TQ1.122", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OML_O35_OML_O35_TQ2_123, "TQ2.123", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OML_O35_OML_O35_DEV_124, "DEV.124", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O35_OML_O35_PRT_125, "PRT.125", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(OML_O35_OML_O35_TQ1_126, "TQ1.126", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OML_O35_OML_O35_TQ2_127, "TQ2.127", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O35_OML_O35_NTE_128, "NTE.128", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O35_OML_O35_OBX_129, "OBX.129", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O35_OML_O35_PRT_130, "PRT.130", HL7::optional, HL7::repetition_on);
    addObject<AL1>(OML_O35_OML_O35_AL1_134, "AL1.134", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O35_OML_O35_NTE_135, "NTE.135", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O35_OML_O35_OBX_136, "OBX.136", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O35_OML_O35_PRT_137, "PRT.137", HL7::optional, HL7::repetition_on);
    addObject<TCD>(OML_O35_OML_O35_TCD_138, "TCD.138", HL7::optional, HL7::repetition_off);
    addObject<ARV>(OML_O35_OML_O35_ARV_139, "ARV.139", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OML_O35_OML_O35_PD1_140, "PD1.140", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O35_OML_O35_PID_141, "PID.141", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O35_OML_O35_PRT_142, "PRT.142", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OML_O35_OML_O35_ARV_143, "ARV.143", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OML_O35_OML_O35_PD1_144, "PD1.144", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O35_OML_O35_PID_145, "PID.145", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O35_OML_O35_PRT_146, "PRT.146", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O35_OML_O35_PRT_147, "PRT.147", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OML_O35_OML_O35_PV1_148, "PV1.148", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OML_O35_OML_O35_PV2_149, "PV2.149", HL7::optional, HL7::repetition_off);
    addObject<ARV>(OML_O35_OML_O35_ARV_150, "ARV.150", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OML_O35_OML_O35_PD1_151, "PD1.151", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O35_OML_O35_PID_152, "PID.152", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O35_OML_O35_PRT_153, "PRT.153", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O35_OML_O35_PRT_154, "PRT.154", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OML_O35_OML_O35_PV1_155, "PV1.155", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OML_O35_OML_O35_PV2_156, "PV2.156", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OML_O35_OML_O35_NTE_160, "NTE.160", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OML_O35_OML_O35_OBR_161, "OBR.161", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(OML_O35_OML_O35_ORC_162, "ORC.162", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O35_OML_O35_PRT_163, "PRT.163", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OML_O35_OML_O35_DEV_164, "DEV.164", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O35_OML_O35_PRT_165, "PRT.165", HL7::initialized, HL7::repetition_off);
    addObject<DEV>(OML_O35_OML_O35_DEV_166, "DEV.166", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O35_OML_O35_PRT_167, "PRT.167", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(OML_O35_OML_O35_TQ1_168, "TQ1.168", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OML_O35_OML_O35_TQ2_169, "TQ2.169", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OML_O35_OML_O35_DEV_170, "DEV.170", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OML_O35_OML_O35_PRT_171, "PRT.171", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(OML_O35_OML_O35_TQ1_172, "TQ1.172", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OML_O35_OML_O35_TQ2_173, "TQ2.173", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O35_OML_O35_NTE_174, "NTE.174", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O35_OML_O35_OBX_175, "OBX.175", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O35_OML_O35_PRT_176, "PRT.176", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OML_O35_OML_O35_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O35_OML_O35_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, OML_O35_OML_O35_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, OML_O35_OML_O35_UAC_4);
  }
  NTE* getNTE_5(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O35_OML_O35_NTE_5);
  }
  DEV* getDEV_9(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O35_OML_O35_DEV_9);
  }
  OBX* getOBX_10(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O35_OML_O35_OBX_10);
  }
  AL1* getAL1_15(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OML_O35_OML_O35_AL1_15);
  }
  ARV* getARV_16(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O35_OML_O35_ARV_16);
  }
  GT1* getGT1_17(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, OML_O35_OML_O35_GT1_17);
  }
  NTE* getNTE_18(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O35_OML_O35_NTE_18);
  }
  PD1* getPD1_19(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O35_OML_O35_PD1_19);
  }
  PID* getPID_20(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O35_OML_O35_PID_20);
  }
  PRT* getPRT_21(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_21);
  }
  IN1* getIN1_22(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OML_O35_OML_O35_IN1_22);
  }
  IN2* getIN2_23(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OML_O35_OML_O35_IN2_23);
  }
  IN3* getIN3_24(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OML_O35_OML_O35_IN3_24);
  }
  IN1* getIN1_25(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OML_O35_OML_O35_IN1_25);
  }
  IN2* getIN2_26(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OML_O35_OML_O35_IN2_26);
  }
  IN3* getIN3_27(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OML_O35_OML_O35_IN3_27);
  }
  OH1* getOH1_28(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, OML_O35_OML_O35_OH1_28);
  }
  OH2* getOH2_29(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OML_O35_OML_O35_OH2_29);
  }
  OH3* getOH3_30(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OML_O35_OML_O35_OH3_30);
  }
  OH4* getOH4_31(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, OML_O35_OML_O35_OH4_31);
  }
  IN1* getIN1_32(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OML_O35_OML_O35_IN1_32);
  }
  IN2* getIN2_33(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OML_O35_OML_O35_IN2_33);
  }
  IN3* getIN3_34(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OML_O35_OML_O35_IN3_34);
  }
  OH1* getOH1_35(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, OML_O35_OML_O35_OH1_35);
  }
  OH2* getOH2_36(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OML_O35_OML_O35_OH2_36);
  }
  OH3* getOH3_37(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OML_O35_OML_O35_OH3_37);
  }
  OH4* getOH4_38(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, OML_O35_OML_O35_OH4_38);
  }
  NK1* getNK1_39(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, OML_O35_OML_O35_NK1_39);
  }
  OH2* getOH2_40(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OML_O35_OML_O35_OH2_40);
  }
  OH3* getOH3_41(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OML_O35_OML_O35_OH3_41);
  }
  IN1* getIN1_42(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OML_O35_OML_O35_IN1_42);
  }
  IN2* getIN2_43(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OML_O35_OML_O35_IN2_43);
  }
  IN3* getIN3_44(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OML_O35_OML_O35_IN3_44);
  }
  OH1* getOH1_45(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, OML_O35_OML_O35_OH1_45);
  }
  OH2* getOH2_46(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OML_O35_OML_O35_OH2_46);
  }
  OH3* getOH3_47(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OML_O35_OML_O35_OH3_47);
  }
  OH4* getOH4_48(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, OML_O35_OML_O35_OH4_48);
  }
  NK1* getNK1_49(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, OML_O35_OML_O35_NK1_49);
  }
  OH2* getOH2_50(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OML_O35_OML_O35_OH2_50);
  }
  OH3* getOH3_51(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OML_O35_OML_O35_OH3_51);
  }
  PRT* getPRT_52(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_52);
  }
  PV1* getPV1_53(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OML_O35_OML_O35_PV1_53);
  }
  PV2* getPV2_54(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OML_O35_OML_O35_PV2_54);
  }
  NTE* getNTE_57(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O35_OML_O35_NTE_57);
  }
  SPM* getSPM_58(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, OML_O35_OML_O35_SPM_58);
  }
  OBX* getOBX_59(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O35_OML_O35_OBX_59);
  }
  PRT* getPRT_60(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_60);
  }
  OBX* getOBX_61(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O35_OML_O35_OBX_61);
  }
  PRT* getPRT_62(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_62);
  }
  NTE* getNTE_64(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O35_OML_O35_NTE_64);
  }
  SAC* getSAC_65(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OML_O35_OML_O35_SAC_65);
  }
  BLG* getBLG_68(size_t index = 0) {
    return (BLG*)this->getObjectSafe(index, OML_O35_OML_O35_BLG_68);
  }
  CTI* getCTI_69(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, OML_O35_OML_O35_CTI_69);
  }
  FT1* getFT1_70(size_t index = 0) {
    return (FT1*)this->getObjectSafe(index, OML_O35_OML_O35_FT1_70);
  }
  NTE* getNTE_71(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O35_OML_O35_NTE_71);
  }
  ORC* getORC_72(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OML_O35_OML_O35_ORC_72);
  }
  PRT* getPRT_73(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_73);
  }
  TQ1* getTQ1_74(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OML_O35_OML_O35_TQ1_74);
  }
  TQ2* getTQ2_75(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OML_O35_OML_O35_TQ2_75);
  }
  TQ1* getTQ1_76(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OML_O35_OML_O35_TQ1_76);
  }
  TQ2* getTQ2_77(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OML_O35_OML_O35_TQ2_77);
  }
  DG1* getDG1_80(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, OML_O35_OML_O35_DG1_80);
  }
  IPC* getIPC_81(size_t index = 0) {
    return (IPC*)this->getObjectSafe(index, OML_O35_OML_O35_IPC_81);
  }
  NTE* getNTE_82(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O35_OML_O35_NTE_82);
  }
  OBR* getOBR_83(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OML_O35_OML_O35_OBR_83);
  }
  PRT* getPRT_84(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_84);
  }
  REL* getREL_85(size_t index = 0) {
    return (REL*)this->getObjectSafe(index, OML_O35_OML_O35_REL_85);
  }
  SGH* getSGH_86(size_t index = 0) {
    return (SGH*)this->getObjectSafe(index, OML_O35_OML_O35_SGH_86);
  }
  SGT* getSGT_87(size_t index = 0) {
    return (SGT*)this->getObjectSafe(index, OML_O35_OML_O35_SGT_87);
  }
  TCD* getTCD_88(size_t index = 0) {
    return (TCD*)this->getObjectSafe(index, OML_O35_OML_O35_TCD_88);
  }
  AL1* getAL1_92(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OML_O35_OML_O35_AL1_92);
  }
  ARV* getARV_93(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O35_OML_O35_ARV_93);
  }
  PD1* getPD1_94(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O35_OML_O35_PD1_94);
  }
  PID* getPID_95(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O35_OML_O35_PID_95);
  }
  PRT* getPRT_96(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_96);
  }
  ARV* getARV_97(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O35_OML_O35_ARV_97);
  }
  PD1* getPD1_98(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O35_OML_O35_PD1_98);
  }
  PID* getPID_99(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O35_OML_O35_PID_99);
  }
  PRT* getPRT_100(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_100);
  }
  PRT* getPRT_101(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_101);
  }
  PV1* getPV1_102(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OML_O35_OML_O35_PV1_102);
  }
  PV2* getPV2_103(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OML_O35_OML_O35_PV2_103);
  }
  ARV* getARV_104(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O35_OML_O35_ARV_104);
  }
  PD1* getPD1_105(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O35_OML_O35_PD1_105);
  }
  PID* getPID_106(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O35_OML_O35_PID_106);
  }
  PRT* getPRT_107(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_107);
  }
  PRT* getPRT_108(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_108);
  }
  PV1* getPV1_109(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OML_O35_OML_O35_PV1_109);
  }
  PV2* getPV2_110(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OML_O35_OML_O35_PV2_110);
  }
  NTE* getNTE_114(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O35_OML_O35_NTE_114);
  }
  OBR* getOBR_115(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OML_O35_OML_O35_OBR_115);
  }
  ORC* getORC_116(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OML_O35_OML_O35_ORC_116);
  }
  PRT* getPRT_117(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_117);
  }
  DEV* getDEV_118(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O35_OML_O35_DEV_118);
  }
  PRT* getPRT_119(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_119);
  }
  DEV* getDEV_120(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O35_OML_O35_DEV_120);
  }
  PRT* getPRT_121(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_121);
  }
  TQ1* getTQ1_122(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OML_O35_OML_O35_TQ1_122);
  }
  TQ2* getTQ2_123(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OML_O35_OML_O35_TQ2_123);
  }
  DEV* getDEV_124(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O35_OML_O35_DEV_124);
  }
  PRT* getPRT_125(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_125);
  }
  TQ1* getTQ1_126(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OML_O35_OML_O35_TQ1_126);
  }
  TQ2* getTQ2_127(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OML_O35_OML_O35_TQ2_127);
  }
  NTE* getNTE_128(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O35_OML_O35_NTE_128);
  }
  OBX* getOBX_129(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O35_OML_O35_OBX_129);
  }
  PRT* getPRT_130(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_130);
  }
  AL1* getAL1_134(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OML_O35_OML_O35_AL1_134);
  }
  NTE* getNTE_135(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O35_OML_O35_NTE_135);
  }
  OBX* getOBX_136(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O35_OML_O35_OBX_136);
  }
  PRT* getPRT_137(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_137);
  }
  TCD* getTCD_138(size_t index = 0) {
    return (TCD*)this->getObjectSafe(index, OML_O35_OML_O35_TCD_138);
  }
  ARV* getARV_139(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O35_OML_O35_ARV_139);
  }
  PD1* getPD1_140(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O35_OML_O35_PD1_140);
  }
  PID* getPID_141(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O35_OML_O35_PID_141);
  }
  PRT* getPRT_142(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_142);
  }
  ARV* getARV_143(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O35_OML_O35_ARV_143);
  }
  PD1* getPD1_144(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O35_OML_O35_PD1_144);
  }
  PID* getPID_145(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O35_OML_O35_PID_145);
  }
  PRT* getPRT_146(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_146);
  }
  PRT* getPRT_147(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_147);
  }
  PV1* getPV1_148(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OML_O35_OML_O35_PV1_148);
  }
  PV2* getPV2_149(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OML_O35_OML_O35_PV2_149);
  }
  ARV* getARV_150(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O35_OML_O35_ARV_150);
  }
  PD1* getPD1_151(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O35_OML_O35_PD1_151);
  }
  PID* getPID_152(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O35_OML_O35_PID_152);
  }
  PRT* getPRT_153(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_153);
  }
  PRT* getPRT_154(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_154);
  }
  PV1* getPV1_155(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OML_O35_OML_O35_PV1_155);
  }
  PV2* getPV2_156(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OML_O35_OML_O35_PV2_156);
  }
  NTE* getNTE_160(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O35_OML_O35_NTE_160);
  }
  OBR* getOBR_161(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OML_O35_OML_O35_OBR_161);
  }
  ORC* getORC_162(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OML_O35_OML_O35_ORC_162);
  }
  PRT* getPRT_163(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_163);
  }
  DEV* getDEV_164(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O35_OML_O35_DEV_164);
  }
  PRT* getPRT_165(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_165);
  }
  DEV* getDEV_166(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O35_OML_O35_DEV_166);
  }
  PRT* getPRT_167(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_167);
  }
  TQ1* getTQ1_168(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OML_O35_OML_O35_TQ1_168);
  }
  TQ2* getTQ2_169(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OML_O35_OML_O35_TQ2_169);
  }
  DEV* getDEV_170(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O35_OML_O35_DEV_170);
  }
  PRT* getPRT_171(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_171);
  }
  TQ1* getTQ1_172(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OML_O35_OML_O35_TQ1_172);
  }
  TQ2* getTQ2_173(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OML_O35_OML_O35_TQ2_173);
  }
  NTE* getNTE_174(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O35_OML_O35_NTE_174);
  }
  OBX* getOBX_175(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O35_OML_O35_OBX_175);
  }
  PRT* getPRT_176(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O35_OML_O35_PRT_176);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_5(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_NTE_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_9(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_DEV_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_10(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_OBX_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_15(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_AL1_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_16(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_ARV_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_17(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_GT1_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_18(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_NTE_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_19(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PD1_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_20(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PID_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_21(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_22(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_IN1_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_23(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_IN2_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_24(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_IN3_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_25(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_IN1_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_26(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_IN2_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_27(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_IN3_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_28(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_OH1_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_29(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_OH2_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_30(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_OH3_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_31(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_OH4_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_32(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_IN1_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_33(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_IN2_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_34(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_IN3_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_35(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_OH1_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_36(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_OH2_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_37(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_OH3_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_38(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_OH4_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_39(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_NK1_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_40(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_OH2_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_41(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_OH3_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_42(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_IN1_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_43(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_IN2_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_44(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_IN3_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_45(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_OH1_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_46(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_OH2_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_47(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_OH3_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_48(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_OH4_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_49(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_NK1_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_50(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_OH2_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_51(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_OH3_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_52(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_53(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PV1_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_54(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PV2_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_57(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_NTE_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_58(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_SPM_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_59(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_OBX_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_60(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_61(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_OBX_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_62(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_64(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_NTE_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_65(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_SAC_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBLG_68(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_BLG_68) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_69(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_CTI_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFT1_70(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_FT1_70) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_71(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_NTE_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_72(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_ORC_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_73(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_74(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_TQ1_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_75(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_TQ2_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_76(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_TQ1_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_77(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_TQ2_77) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_80(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_DG1_80) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIPC_81(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_IPC_81) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_82(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_NTE_82) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_83(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_OBR_83) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_84(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_84) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isREL_85(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_REL_85) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSGH_86(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_SGH_86) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSGT_87(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_SGT_87) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTCD_88(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_TCD_88) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_92(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_AL1_92) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_93(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_ARV_93) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_94(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PD1_94) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_95(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PID_95) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_96(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_96) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_97(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_ARV_97) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_98(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PD1_98) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_99(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PID_99) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_100(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_100) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_101(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_101) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_102(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PV1_102) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_103(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PV2_103) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_104(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_ARV_104) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_105(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PD1_105) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_106(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PID_106) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_107(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_107) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_108(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_108) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_109(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PV1_109) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_110(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PV2_110) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_114(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_NTE_114) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_115(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_OBR_115) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_116(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_ORC_116) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_117(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_117) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_118(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_DEV_118) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_119(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_119) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_120(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_DEV_120) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_121(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_121) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_122(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_TQ1_122) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_123(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_TQ2_123) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_124(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_DEV_124) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_125(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_125) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_126(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_TQ1_126) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_127(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_TQ2_127) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_128(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_NTE_128) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_129(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_OBX_129) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_130(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_130) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_134(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_AL1_134) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_135(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_NTE_135) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_136(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_OBX_136) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_137(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_137) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTCD_138(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_TCD_138) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_139(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_ARV_139) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_140(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PD1_140) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_141(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PID_141) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_142(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_142) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_143(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_ARV_143) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_144(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PD1_144) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_145(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PID_145) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_146(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_146) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_147(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_147) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_148(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PV1_148) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_149(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PV2_149) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_150(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_ARV_150) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_151(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PD1_151) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_152(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PID_152) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_153(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_153) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_154(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_154) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_155(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PV1_155) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_156(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PV2_156) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_160(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_NTE_160) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_161(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_OBR_161) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_162(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_ORC_162) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_163(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_163) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_164(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_DEV_164) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_165(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_165) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_166(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_DEV_166) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_167(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_167) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_168(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_TQ1_168) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_169(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_TQ2_169) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_170(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_DEV_170) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_171(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_171) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_172(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_TQ1_172) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_173(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_TQ2_173) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_174(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_NTE_174) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_175(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_OBX_175) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_176(size_t index = 0) {
    try {
      return this->getObject(index, OML_O35_OML_O35_PRT_176) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OML_O35_OML_O35_ */
} /* namespace HL7_29 */
#endif /*  __OML_O35_OML_O35__29_H__ */
