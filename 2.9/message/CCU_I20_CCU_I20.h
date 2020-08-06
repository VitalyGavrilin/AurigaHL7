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


#ifndef __CCU_I20_CCU_I20__29_H__
#define __CCU_I20_CCU_I20__29_H__

#include "../../common/Util.h"
#include "../segment/ACC.h"
#include "../segment/AIG.h"
#include "../segment/AIL.h"
#include "../segment/AIP.h"
#include "../segment/AIS.h"
#include "../segment/AL1.h"
#include "../segment/CTD.h"
#include "../segment/CTI.h"
#include "../segment/DB1.h"
#include "../segment/DG1.h"
#include "../segment/DRG.h"
#include "../segment/GOL.h"
#include "../segment/IAM.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IN3.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/ODS.h"
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PDA.h"
#include "../segment/PID.h"
#include "../segment/PR1.h"
#include "../segment/PRB.h"
#include "../segment/PRD.h"
#include "../segment/PRT.h"
#include "../segment/PTH.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/REL.h"
#include "../segment/RF1.h"
#include "../segment/RGS.h"
#include "../segment/RMI.h"
#include "../segment/ROL.h"
#include "../segment/RXA.h"
#include "../segment/RXC.h"
#include "../segment/RXE.h"
#include "../segment/RXO.h"
#include "../segment/RXR.h"
#include "../segment/SCH.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"
#include "../segment/VAR.h"

namespace HL7_29 {

/* Internal structures/groups */
struct CCU_I20_CCU_I20_PROVIDER_CONTACT; /* PROVIDER_CONTACT */
struct CCU_I20_CCU_I20_PATIENT; /* PATIENT */
struct CCU_I20_CCU_I20_INSURANCE; /* INSURANCE */
struct CCU_I20_CCU_I20_APPOINTMENT_HISTORY; /* APPOINTMENT_HISTORY */
struct CCU_I20_CCU_I20_CLINICAL_HISTORY; /* CLINICAL_HISTORY */
struct CCU_I20_CCU_I20_PATIENT_VISITS; /* PATIENT_VISITS */
struct CCU_I20_CCU_I20_MEDICATION_HISTORY; /* MEDICATION_HISTORY */
struct CCU_I20_CCU_I20_PROBLEM; /* PROBLEM */
struct CCU_I20_CCU_I20_GOAL; /* GOAL */
struct CCU_I20_CCU_I20_PATHWAY; /* PATHWAY */
struct CCU_I20_CCU_I20_RESOURCES; /* RESOURCES */
struct CCU_I20_CCU_I20_RESOURCE_DETAIL; /* RESOURCE_DETAIL */
struct CCU_I20_CCU_I20_RESOURCE_OBJECT; /* RESOURCE_OBJECT */
struct CCU_I20_CCU_I20_RESOURCE_OBSERVATION; /* RESOURCE_OBSERVATION */
struct CCU_I20_CCU_I20_CLINICAL_HISTORY_DETAIL; /* CLINICAL_HISTORY_DETAIL */
struct CCU_I20_CCU_I20_PARTICIPATION_CLINICAL_HISTORY; /* PARTICIPATION_CLINICAL_HISTORY */
struct CCU_I20_CCU_I20_CLINICAL_HISTORY_OBJECT; /* CLINICAL_HISTORY_OBJECT */
struct CCU_I20_CCU_I20_CLINICAL_HISTORY_OBSERVATION; /* CLINICAL_HISTORY_OBSERVATION */
struct CCU_I20_CCU_I20_CLINICAL_HISTORY_OBJECT; /* CLINICAL_HISTORY_OBJECT */
struct CCU_I20_CCU_I20_CLINICAL_HISTORY_OBSERVATION; /* CLINICAL_HISTORY_OBSERVATION */
struct CCU_I20_CCU_I20_PARTICIPATION_CLINICAL_HISTORY_OBJECT; /* PARTICIPATION_CLINICAL_HISTORY_OBJECT */
struct CCU_I20_CCU_I20_PARTICIPATION_GOAL; /* PARTICIPATION_GOAL */
struct CCU_I20_CCU_I20_GOAL_OBSERVATION; /* GOAL_OBSERVATION */
struct CCU_I20_CCU_I20_PARTICIPATION_GOAL_OBJECT; /* PARTICIPATION_GOAL_OBJECT */
struct CCU_I20_CCU_I20_PARTICIPATION_GOAL_OBJECT; /* PARTICIPATION_GOAL_OBJECT */
struct CCU_I20_CCU_I20_MEDICATION_ORDER_DETAIL; /* MEDICATION_ORDER_DETAIL */
struct CCU_I20_CCU_I20_MEDICATION_ENCODING_DETAIL; /* MEDICATION_ENCODING_DETAIL */
struct CCU_I20_CCU_I20_MEDICATION_ADMINISTRATION_DETAIL; /* MEDICATION_ADMINISTRATION_DETAIL */
struct CCU_I20_CCU_I20_MEDICATION_ORDER_OBSERVATION; /* MEDICATION_ORDER_OBSERVATION */
struct CCU_I20_CCU_I20_MEDICATION_ORDER_OBSERVATION; /* MEDICATION_ORDER_OBSERVATION */
struct CCU_I20_CCU_I20_MEDICATION_ENCODING_OBSERVATION; /* MEDICATION_ENCODING_OBSERVATION */
struct CCU_I20_CCU_I20_MEDICATION_ORDER_OBSERVATION; /* MEDICATION_ORDER_OBSERVATION */
struct CCU_I20_CCU_I20_MEDICATION_ENCODING_OBSERVATION; /* MEDICATION_ENCODING_OBSERVATION */
struct CCU_I20_CCU_I20_MEDICATION_ADMINISTRATION_OBSERVATION; /* MEDICATION_ADMINISTRATION_OBSERVATION */
struct CCU_I20_CCU_I20_PARTICIPATION_PATHWAY; /* PARTICIPATION_PATHWAY */
struct CCU_I20_CCU_I20_PATHWAY_OBSERVATION; /* PATHWAY_OBSERVATION */
struct CCU_I20_CCU_I20_PARTICIPATION_PATHWAY_OBJECT; /* PARTICIPATION_PATHWAY_OBJECT */
struct CCU_I20_CCU_I20_PARTICIPATION_PATHWAY_OBJECT; /* PARTICIPATION_PATHWAY_OBJECT */
struct CCU_I20_CCU_I20_PARTICIPATION_PROBLEM; /* PARTICIPATION_PROBLEM */
struct CCU_I20_CCU_I20_PROBLEM_OBSERVATION; /* PROBLEM_OBSERVATION */
struct CCU_I20_CCU_I20_PARTICIPATION_PROBLEM_OBJECT; /* PARTICIPATION_PROBLEM_OBJECT */
struct CCU_I20_CCU_I20_PARTICIPATION_PROBLEM_OBJECT; /* PARTICIPATION_PROBLEM_OBJECT */

/*  */
struct CCU_I20_CCU_I20 : public HL7Message {
  CCU_I20_CCU_I20() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    CCU_I20_CCU_I20_MSH_1,
    CCU_I20_CCU_I20_SFT_2,
    CCU_I20_CCU_I20_UAC_3,
    CCU_I20_CCU_I20_RF1_4,
    CCU_I20_CCU_I20_NK1_7,
    CCU_I20_CCU_I20_REL_16,
    CCU_I20_CCU_I20_SCH_18,
    CCU_I20_CCU_I20_RGS_20,
    CCU_I20_CCU_I20_AIG_23,
    CCU_I20_CCU_I20_AIL_24,
    CCU_I20_CCU_I20_AIP_25,
    CCU_I20_CCU_I20_AIS_26,
    CCU_I20_CCU_I20_AIG_27,
    CCU_I20_CCU_I20_AIL_28,
    CCU_I20_CCU_I20_AIP_29,
    CCU_I20_CCU_I20_AIS_30,
    CCU_I20_CCU_I20_OBX_31,
    CCU_I20_CCU_I20_PRT_32,
    CCU_I20_CCU_I20_CTI_35,
    CCU_I20_CCU_I20_ORC_36,
    CCU_I20_CCU_I20_ACC_39,
    CCU_I20_CCU_I20_AL1_40,
    CCU_I20_CCU_I20_DB1_41,
    CCU_I20_CCU_I20_DG1_42,
    CCU_I20_CCU_I20_DRG_43,
    CCU_I20_CCU_I20_IAM_44,
    CCU_I20_CCU_I20_OBR_45,
    CCU_I20_CCU_I20_ODS_46,
    CCU_I20_CCU_I20_PDA_47,
    CCU_I20_CCU_I20_PR1_48,
    CCU_I20_CCU_I20_PRT_49,
    CCU_I20_CCU_I20_RF1_50,
    CCU_I20_CCU_I20_RMI_51,
    CCU_I20_CCU_I20_ACC_52,
    CCU_I20_CCU_I20_AL1_53,
    CCU_I20_CCU_I20_DB1_54,
    CCU_I20_CCU_I20_DG1_55,
    CCU_I20_CCU_I20_DRG_56,
    CCU_I20_CCU_I20_IAM_57,
    CCU_I20_CCU_I20_OBR_58,
    CCU_I20_CCU_I20_ODS_59,
    CCU_I20_CCU_I20_PDA_60,
    CCU_I20_CCU_I20_PR1_61,
    CCU_I20_CCU_I20_PRT_62,
    CCU_I20_CCU_I20_RF1_63,
    CCU_I20_CCU_I20_RMI_64,
    CCU_I20_CCU_I20_OBX_65,
    CCU_I20_CCU_I20_PRT_66,
    CCU_I20_CCU_I20_VAR_70,
    CCU_I20_CCU_I20_ACC_71,
    CCU_I20_CCU_I20_AL1_72,
    CCU_I20_CCU_I20_DB1_73,
    CCU_I20_CCU_I20_DG1_74,
    CCU_I20_CCU_I20_DRG_75,
    CCU_I20_CCU_I20_IAM_76,
    CCU_I20_CCU_I20_OBR_77,
    CCU_I20_CCU_I20_ODS_78,
    CCU_I20_CCU_I20_PDA_79,
    CCU_I20_CCU_I20_PR1_80,
    CCU_I20_CCU_I20_PRT_81,
    CCU_I20_CCU_I20_RF1_82,
    CCU_I20_CCU_I20_RMI_83,
    CCU_I20_CCU_I20_ACC_84,
    CCU_I20_CCU_I20_AL1_85,
    CCU_I20_CCU_I20_DB1_86,
    CCU_I20_CCU_I20_DG1_87,
    CCU_I20_CCU_I20_DRG_88,
    CCU_I20_CCU_I20_IAM_89,
    CCU_I20_CCU_I20_OBR_90,
    CCU_I20_CCU_I20_ODS_91,
    CCU_I20_CCU_I20_PDA_92,
    CCU_I20_CCU_I20_PR1_93,
    CCU_I20_CCU_I20_PRT_94,
    CCU_I20_CCU_I20_RF1_95,
    CCU_I20_CCU_I20_RMI_96,
    CCU_I20_CCU_I20_OBX_97,
    CCU_I20_CCU_I20_PRT_98,
    CCU_I20_CCU_I20_ACC_99,
    CCU_I20_CCU_I20_AL1_100,
    CCU_I20_CCU_I20_DB1_101,
    CCU_I20_CCU_I20_DG1_102,
    CCU_I20_CCU_I20_DRG_103,
    CCU_I20_CCU_I20_IAM_104,
    CCU_I20_CCU_I20_OBR_105,
    CCU_I20_CCU_I20_ODS_106,
    CCU_I20_CCU_I20_PDA_107,
    CCU_I20_CCU_I20_PR1_108,
    CCU_I20_CCU_I20_PRT_109,
    CCU_I20_CCU_I20_RF1_110,
    CCU_I20_CCU_I20_RMI_111,
    CCU_I20_CCU_I20_OBX_112,
    CCU_I20_CCU_I20_PRT_113,
    CCU_I20_CCU_I20_PRD_114,
    CCU_I20_CCU_I20_PRT_115,
    CCU_I20_CCU_I20_ROL_116,
    CCU_I20_CCU_I20_GOL_119,
    CCU_I20_CCU_I20_VAR_120,
    CCU_I20_CCU_I20_VAR_122,
    CCU_I20_CCU_I20_PRD_123,
    CCU_I20_CCU_I20_PRT_124,
    CCU_I20_CCU_I20_ROL_125,
    CCU_I20_CCU_I20_VAR_127,
    CCU_I20_CCU_I20_OBX_128,
    CCU_I20_CCU_I20_PRT_129,
    CCU_I20_CCU_I20_PRD_130,
    CCU_I20_CCU_I20_PRT_131,
    CCU_I20_CCU_I20_ROL_132,
    CCU_I20_CCU_I20_IN1_133,
    CCU_I20_CCU_I20_IN2_134,
    CCU_I20_CCU_I20_IN3_135,
    CCU_I20_CCU_I20_CTI_139,
    CCU_I20_CCU_I20_ORC_140,
    CCU_I20_CCU_I20_PRT_142,
    CCU_I20_CCU_I20_RXC_143,
    CCU_I20_CCU_I20_RXO_144,
    CCU_I20_CCU_I20_OBX_146,
    CCU_I20_CCU_I20_PRT_147,
    CCU_I20_CCU_I20_PRT_149,
    CCU_I20_CCU_I20_RXC_150,
    CCU_I20_CCU_I20_RXO_151,
    CCU_I20_CCU_I20_PRT_154,
    CCU_I20_CCU_I20_RXC_155,
    CCU_I20_CCU_I20_RXE_156,
    CCU_I20_CCU_I20_OBX_158,
    CCU_I20_CCU_I20_PRT_159,
    CCU_I20_CCU_I20_OBX_160,
    CCU_I20_CCU_I20_PRT_161,
    CCU_I20_CCU_I20_OBX_162,
    CCU_I20_CCU_I20_PRT_163,
    CCU_I20_CCU_I20_PRT_165,
    CCU_I20_CCU_I20_RXC_166,
    CCU_I20_CCU_I20_RXO_167,
    CCU_I20_CCU_I20_PRT_170,
    CCU_I20_CCU_I20_RXC_171,
    CCU_I20_CCU_I20_RXE_172,
    CCU_I20_CCU_I20_PRT_175,
    CCU_I20_CCU_I20_RXA_176,
    CCU_I20_CCU_I20_RXR_177,
    CCU_I20_CCU_I20_OBX_178,
    CCU_I20_CCU_I20_PRT_179,
    CCU_I20_CCU_I20_OBX_180,
    CCU_I20_CCU_I20_PRT_181,
    CCU_I20_CCU_I20_OBX_182,
    CCU_I20_CCU_I20_PRT_183,
    CCU_I20_CCU_I20_OBX_184,
    CCU_I20_CCU_I20_PRT_185,
    CCU_I20_CCU_I20_OBX_186,
    CCU_I20_CCU_I20_PRT_187,
    CCU_I20_CCU_I20_OBX_188,
    CCU_I20_CCU_I20_PRT_189,
    CCU_I20_CCU_I20_PTH_192,
    CCU_I20_CCU_I20_VAR_193,
    CCU_I20_CCU_I20_VAR_195,
    CCU_I20_CCU_I20_PRD_196,
    CCU_I20_CCU_I20_PRT_197,
    CCU_I20_CCU_I20_ROL_198,
    CCU_I20_CCU_I20_VAR_200,
    CCU_I20_CCU_I20_OBX_201,
    CCU_I20_CCU_I20_PRT_202,
    CCU_I20_CCU_I20_PRD_203,
    CCU_I20_CCU_I20_PRT_204,
    CCU_I20_CCU_I20_ROL_205,
    CCU_I20_CCU_I20_PD1_206,
    CCU_I20_CCU_I20_PID_207,
    CCU_I20_CCU_I20_PV1_208,
    CCU_I20_CCU_I20_PV2_209,
    CCU_I20_CCU_I20_PRB_212,
    CCU_I20_CCU_I20_VAR_213,
    CCU_I20_CCU_I20_VAR_215,
    CCU_I20_CCU_I20_PRD_216,
    CCU_I20_CCU_I20_PRT_217,
    CCU_I20_CCU_I20_ROL_218,
    CCU_I20_CCU_I20_VAR_220,
    CCU_I20_CCU_I20_OBX_221,
    CCU_I20_CCU_I20_PRT_222,
    CCU_I20_CCU_I20_PRD_223,
    CCU_I20_CCU_I20_PRT_224,
    CCU_I20_CCU_I20_ROL_225,
    CCU_I20_CCU_I20_CTD_226,
    CCU_I20_CCU_I20_PRD_227,
    FIELD_ID_MAX
  };

  const char* className() const { return "CCU_I20_CCU_I20"; }
  CCU_I20_CCU_I20* create() const { return new CCU_I20_CCU_I20(); }

 private:
  /* Initialize object */
  void init() {
    setName("CCU_I20_CCU_I20");
    addObject<MSH>(CCU_I20_CCU_I20_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(CCU_I20_CCU_I20_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(CCU_I20_CCU_I20_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<RF1>(CCU_I20_CCU_I20_RF1_4, "RF1.4", HL7::initialized, HL7::repetition_off);
    addObject<NK1>(CCU_I20_CCU_I20_NK1_7, "NK1.7", HL7::optional, HL7::repetition_on);
    addObject<REL>(CCU_I20_CCU_I20_REL_16, "REL.16", HL7::optional, HL7::repetition_on);
    addObject<SCH>(CCU_I20_CCU_I20_SCH_18, "SCH.18", HL7::initialized, HL7::repetition_off);
    addObject<RGS>(CCU_I20_CCU_I20_RGS_20, "RGS.20", HL7::initialized, HL7::repetition_off);
    addObject<AIG>(CCU_I20_CCU_I20_AIG_23, "AIG.23", HL7::initialized, HL7::repetition_off);
    addObject<AIL>(CCU_I20_CCU_I20_AIL_24, "AIL.24", HL7::initialized, HL7::repetition_off);
    addObject<AIP>(CCU_I20_CCU_I20_AIP_25, "AIP.25", HL7::initialized, HL7::repetition_off);
    addObject<AIS>(CCU_I20_CCU_I20_AIS_26, "AIS.26", HL7::initialized, HL7::repetition_off);
    addObject<AIG>(CCU_I20_CCU_I20_AIG_27, "AIG.27", HL7::initialized, HL7::repetition_off);
    addObject<AIL>(CCU_I20_CCU_I20_AIL_28, "AIL.28", HL7::initialized, HL7::repetition_off);
    addObject<AIP>(CCU_I20_CCU_I20_AIP_29, "AIP.29", HL7::initialized, HL7::repetition_off);
    addObject<AIS>(CCU_I20_CCU_I20_AIS_30, "AIS.30", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CCU_I20_CCU_I20_OBX_31, "OBX.31", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_32, "PRT.32", HL7::optional, HL7::repetition_on);
    addObject<CTI>(CCU_I20_CCU_I20_CTI_35, "CTI.35", HL7::optional, HL7::repetition_on);
    addObject<ORC>(CCU_I20_CCU_I20_ORC_36, "ORC.36", HL7::initialized, HL7::repetition_off);
    addObject<ACC>(CCU_I20_CCU_I20_ACC_39, "ACC.39", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(CCU_I20_CCU_I20_AL1_40, "AL1.40", HL7::initialized, HL7::repetition_off);
    addObject<DB1>(CCU_I20_CCU_I20_DB1_41, "DB1.41", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(CCU_I20_CCU_I20_DG1_42, "DG1.42", HL7::initialized, HL7::repetition_off);
    addObject<DRG>(CCU_I20_CCU_I20_DRG_43, "DRG.43", HL7::initialized, HL7::repetition_off);
    addObject<IAM>(CCU_I20_CCU_I20_IAM_44, "IAM.44", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(CCU_I20_CCU_I20_OBR_45, "OBR.45", HL7::initialized, HL7::repetition_off);
    addObject<ODS>(CCU_I20_CCU_I20_ODS_46, "ODS.46", HL7::initialized, HL7::repetition_off);
    addObject<PDA>(CCU_I20_CCU_I20_PDA_47, "PDA.47", HL7::initialized, HL7::repetition_off);
    addObject<PR1>(CCU_I20_CCU_I20_PR1_48, "PR1.48", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_49, "PRT.49", HL7::optional, HL7::repetition_on);
    addObject<RF1>(CCU_I20_CCU_I20_RF1_50, "RF1.50", HL7::initialized, HL7::repetition_off);
    addObject<RMI>(CCU_I20_CCU_I20_RMI_51, "RMI.51", HL7::initialized, HL7::repetition_off);
    addObject<ACC>(CCU_I20_CCU_I20_ACC_52, "ACC.52", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(CCU_I20_CCU_I20_AL1_53, "AL1.53", HL7::initialized, HL7::repetition_off);
    addObject<DB1>(CCU_I20_CCU_I20_DB1_54, "DB1.54", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(CCU_I20_CCU_I20_DG1_55, "DG1.55", HL7::initialized, HL7::repetition_off);
    addObject<DRG>(CCU_I20_CCU_I20_DRG_56, "DRG.56", HL7::initialized, HL7::repetition_off);
    addObject<IAM>(CCU_I20_CCU_I20_IAM_57, "IAM.57", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(CCU_I20_CCU_I20_OBR_58, "OBR.58", HL7::initialized, HL7::repetition_off);
    addObject<ODS>(CCU_I20_CCU_I20_ODS_59, "ODS.59", HL7::initialized, HL7::repetition_off);
    addObject<PDA>(CCU_I20_CCU_I20_PDA_60, "PDA.60", HL7::initialized, HL7::repetition_off);
    addObject<PR1>(CCU_I20_CCU_I20_PR1_61, "PR1.61", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_62, "PRT.62", HL7::optional, HL7::repetition_on);
    addObject<RF1>(CCU_I20_CCU_I20_RF1_63, "RF1.63", HL7::initialized, HL7::repetition_off);
    addObject<RMI>(CCU_I20_CCU_I20_RMI_64, "RMI.64", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CCU_I20_CCU_I20_OBX_65, "OBX.65", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_66, "PRT.66", HL7::optional, HL7::repetition_on);
    addObject<VAR>(CCU_I20_CCU_I20_VAR_70, "VAR.70", HL7::optional, HL7::repetition_on);
    addObject<ACC>(CCU_I20_CCU_I20_ACC_71, "ACC.71", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(CCU_I20_CCU_I20_AL1_72, "AL1.72", HL7::initialized, HL7::repetition_off);
    addObject<DB1>(CCU_I20_CCU_I20_DB1_73, "DB1.73", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(CCU_I20_CCU_I20_DG1_74, "DG1.74", HL7::initialized, HL7::repetition_off);
    addObject<DRG>(CCU_I20_CCU_I20_DRG_75, "DRG.75", HL7::initialized, HL7::repetition_off);
    addObject<IAM>(CCU_I20_CCU_I20_IAM_76, "IAM.76", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(CCU_I20_CCU_I20_OBR_77, "OBR.77", HL7::initialized, HL7::repetition_off);
    addObject<ODS>(CCU_I20_CCU_I20_ODS_78, "ODS.78", HL7::initialized, HL7::repetition_off);
    addObject<PDA>(CCU_I20_CCU_I20_PDA_79, "PDA.79", HL7::initialized, HL7::repetition_off);
    addObject<PR1>(CCU_I20_CCU_I20_PR1_80, "PR1.80", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_81, "PRT.81", HL7::optional, HL7::repetition_on);
    addObject<RF1>(CCU_I20_CCU_I20_RF1_82, "RF1.82", HL7::initialized, HL7::repetition_off);
    addObject<RMI>(CCU_I20_CCU_I20_RMI_83, "RMI.83", HL7::initialized, HL7::repetition_off);
    addObject<ACC>(CCU_I20_CCU_I20_ACC_84, "ACC.84", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(CCU_I20_CCU_I20_AL1_85, "AL1.85", HL7::initialized, HL7::repetition_off);
    addObject<DB1>(CCU_I20_CCU_I20_DB1_86, "DB1.86", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(CCU_I20_CCU_I20_DG1_87, "DG1.87", HL7::initialized, HL7::repetition_off);
    addObject<DRG>(CCU_I20_CCU_I20_DRG_88, "DRG.88", HL7::initialized, HL7::repetition_off);
    addObject<IAM>(CCU_I20_CCU_I20_IAM_89, "IAM.89", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(CCU_I20_CCU_I20_OBR_90, "OBR.90", HL7::initialized, HL7::repetition_off);
    addObject<ODS>(CCU_I20_CCU_I20_ODS_91, "ODS.91", HL7::initialized, HL7::repetition_off);
    addObject<PDA>(CCU_I20_CCU_I20_PDA_92, "PDA.92", HL7::initialized, HL7::repetition_off);
    addObject<PR1>(CCU_I20_CCU_I20_PR1_93, "PR1.93", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_94, "PRT.94", HL7::optional, HL7::repetition_on);
    addObject<RF1>(CCU_I20_CCU_I20_RF1_95, "RF1.95", HL7::initialized, HL7::repetition_off);
    addObject<RMI>(CCU_I20_CCU_I20_RMI_96, "RMI.96", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CCU_I20_CCU_I20_OBX_97, "OBX.97", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_98, "PRT.98", HL7::optional, HL7::repetition_on);
    addObject<ACC>(CCU_I20_CCU_I20_ACC_99, "ACC.99", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(CCU_I20_CCU_I20_AL1_100, "AL1.100", HL7::initialized, HL7::repetition_off);
    addObject<DB1>(CCU_I20_CCU_I20_DB1_101, "DB1.101", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(CCU_I20_CCU_I20_DG1_102, "DG1.102", HL7::initialized, HL7::repetition_off);
    addObject<DRG>(CCU_I20_CCU_I20_DRG_103, "DRG.103", HL7::initialized, HL7::repetition_off);
    addObject<IAM>(CCU_I20_CCU_I20_IAM_104, "IAM.104", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(CCU_I20_CCU_I20_OBR_105, "OBR.105", HL7::initialized, HL7::repetition_off);
    addObject<ODS>(CCU_I20_CCU_I20_ODS_106, "ODS.106", HL7::initialized, HL7::repetition_off);
    addObject<PDA>(CCU_I20_CCU_I20_PDA_107, "PDA.107", HL7::initialized, HL7::repetition_off);
    addObject<PR1>(CCU_I20_CCU_I20_PR1_108, "PR1.108", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_109, "PRT.109", HL7::optional, HL7::repetition_on);
    addObject<RF1>(CCU_I20_CCU_I20_RF1_110, "RF1.110", HL7::initialized, HL7::repetition_off);
    addObject<RMI>(CCU_I20_CCU_I20_RMI_111, "RMI.111", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CCU_I20_CCU_I20_OBX_112, "OBX.112", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_113, "PRT.113", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CCU_I20_CCU_I20_PRD_114, "PRD.114", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_115, "PRT.115", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(CCU_I20_CCU_I20_ROL_116, "ROL.116", HL7::initialized, HL7::repetition_off);
    addObject<GOL>(CCU_I20_CCU_I20_GOL_119, "GOL.119", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(CCU_I20_CCU_I20_VAR_120, "VAR.120", HL7::optional, HL7::repetition_on);
    addObject<VAR>(CCU_I20_CCU_I20_VAR_122, "VAR.122", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CCU_I20_CCU_I20_PRD_123, "PRD.123", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_124, "PRT.124", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(CCU_I20_CCU_I20_ROL_125, "ROL.125", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(CCU_I20_CCU_I20_VAR_127, "VAR.127", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCU_I20_CCU_I20_OBX_128, "OBX.128", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_129, "PRT.129", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CCU_I20_CCU_I20_PRD_130, "PRD.130", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_131, "PRT.131", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(CCU_I20_CCU_I20_ROL_132, "ROL.132", HL7::initialized, HL7::repetition_off);
    addObject<IN1>(CCU_I20_CCU_I20_IN1_133, "IN1.133", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(CCU_I20_CCU_I20_IN2_134, "IN2.134", HL7::optional, HL7::repetition_off);
    addObject<IN3>(CCU_I20_CCU_I20_IN3_135, "IN3.135", HL7::optional, HL7::repetition_off);
    addObject<CTI>(CCU_I20_CCU_I20_CTI_139, "CTI.139", HL7::optional, HL7::repetition_on);
    addObject<ORC>(CCU_I20_CCU_I20_ORC_140, "ORC.140", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_142, "PRT.142", HL7::optional, HL7::repetition_on);
    addObject<RXC>(CCU_I20_CCU_I20_RXC_143, "RXC.143", HL7::optional, HL7::repetition_on);
    addObject<RXO>(CCU_I20_CCU_I20_RXO_144, "RXO.144", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CCU_I20_CCU_I20_OBX_146, "OBX.146", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_147, "PRT.147", HL7::optional, HL7::repetition_on);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_149, "PRT.149", HL7::optional, HL7::repetition_on);
    addObject<RXC>(CCU_I20_CCU_I20_RXC_150, "RXC.150", HL7::optional, HL7::repetition_on);
    addObject<RXO>(CCU_I20_CCU_I20_RXO_151, "RXO.151", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_154, "PRT.154", HL7::optional, HL7::repetition_on);
    addObject<RXC>(CCU_I20_CCU_I20_RXC_155, "RXC.155", HL7::optional, HL7::repetition_on);
    addObject<RXE>(CCU_I20_CCU_I20_RXE_156, "RXE.156", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CCU_I20_CCU_I20_OBX_158, "OBX.158", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_159, "PRT.159", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCU_I20_CCU_I20_OBX_160, "OBX.160", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_161, "PRT.161", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCU_I20_CCU_I20_OBX_162, "OBX.162", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_163, "PRT.163", HL7::optional, HL7::repetition_on);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_165, "PRT.165", HL7::optional, HL7::repetition_on);
    addObject<RXC>(CCU_I20_CCU_I20_RXC_166, "RXC.166", HL7::optional, HL7::repetition_on);
    addObject<RXO>(CCU_I20_CCU_I20_RXO_167, "RXO.167", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_170, "PRT.170", HL7::optional, HL7::repetition_on);
    addObject<RXC>(CCU_I20_CCU_I20_RXC_171, "RXC.171", HL7::optional, HL7::repetition_on);
    addObject<RXE>(CCU_I20_CCU_I20_RXE_172, "RXE.172", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_175, "PRT.175", HL7::optional, HL7::repetition_on);
    addObject<RXA>(CCU_I20_CCU_I20_RXA_176, "RXA.176", HL7::initialized, HL7::repetition_off);
    addObject<RXR>(CCU_I20_CCU_I20_RXR_177, "RXR.177", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CCU_I20_CCU_I20_OBX_178, "OBX.178", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_179, "PRT.179", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCU_I20_CCU_I20_OBX_180, "OBX.180", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_181, "PRT.181", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCU_I20_CCU_I20_OBX_182, "OBX.182", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_183, "PRT.183", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCU_I20_CCU_I20_OBX_184, "OBX.184", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_185, "PRT.185", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCU_I20_CCU_I20_OBX_186, "OBX.186", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_187, "PRT.187", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCU_I20_CCU_I20_OBX_188, "OBX.188", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_189, "PRT.189", HL7::optional, HL7::repetition_on);
    addObject<PTH>(CCU_I20_CCU_I20_PTH_192, "PTH.192", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(CCU_I20_CCU_I20_VAR_193, "VAR.193", HL7::optional, HL7::repetition_on);
    addObject<VAR>(CCU_I20_CCU_I20_VAR_195, "VAR.195", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CCU_I20_CCU_I20_PRD_196, "PRD.196", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_197, "PRT.197", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(CCU_I20_CCU_I20_ROL_198, "ROL.198", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(CCU_I20_CCU_I20_VAR_200, "VAR.200", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCU_I20_CCU_I20_OBX_201, "OBX.201", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_202, "PRT.202", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CCU_I20_CCU_I20_PRD_203, "PRD.203", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_204, "PRT.204", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(CCU_I20_CCU_I20_ROL_205, "ROL.205", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(CCU_I20_CCU_I20_PD1_206, "PD1.206", HL7::optional, HL7::repetition_off);
    addObject<PID>(CCU_I20_CCU_I20_PID_207, "PID.207", HL7::initialized, HL7::repetition_off);
    addObject<PV1>(CCU_I20_CCU_I20_PV1_208, "PV1.208", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(CCU_I20_CCU_I20_PV2_209, "PV2.209", HL7::optional, HL7::repetition_off);
    addObject<PRB>(CCU_I20_CCU_I20_PRB_212, "PRB.212", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(CCU_I20_CCU_I20_VAR_213, "VAR.213", HL7::optional, HL7::repetition_on);
    addObject<VAR>(CCU_I20_CCU_I20_VAR_215, "VAR.215", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CCU_I20_CCU_I20_PRD_216, "PRD.216", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_217, "PRT.217", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(CCU_I20_CCU_I20_ROL_218, "ROL.218", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(CCU_I20_CCU_I20_VAR_220, "VAR.220", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCU_I20_CCU_I20_OBX_221, "OBX.221", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_222, "PRT.222", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CCU_I20_CCU_I20_PRD_223, "PRD.223", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCU_I20_CCU_I20_PRT_224, "PRT.224", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(CCU_I20_CCU_I20_ROL_225, "ROL.225", HL7::initialized, HL7::repetition_off);
    addObject<CTD>(CCU_I20_CCU_I20_CTD_226, "CTD.226", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CCU_I20_CCU_I20_PRD_227, "PRD.227", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, CCU_I20_CCU_I20_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, CCU_I20_CCU_I20_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, CCU_I20_CCU_I20_UAC_3);
  }
  RF1* getRF1_4(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, CCU_I20_CCU_I20_RF1_4);
  }
  NK1* getNK1_7(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, CCU_I20_CCU_I20_NK1_7);
  }
  REL* getREL_16(size_t index = 0) {
    return (REL*)this->getObjectSafe(index, CCU_I20_CCU_I20_REL_16);
  }
  SCH* getSCH_18(size_t index = 0) {
    return (SCH*)this->getObjectSafe(index, CCU_I20_CCU_I20_SCH_18);
  }
  RGS* getRGS_20(size_t index = 0) {
    return (RGS*)this->getObjectSafe(index, CCU_I20_CCU_I20_RGS_20);
  }
  AIG* getAIG_23(size_t index = 0) {
    return (AIG*)this->getObjectSafe(index, CCU_I20_CCU_I20_AIG_23);
  }
  AIL* getAIL_24(size_t index = 0) {
    return (AIL*)this->getObjectSafe(index, CCU_I20_CCU_I20_AIL_24);
  }
  AIP* getAIP_25(size_t index = 0) {
    return (AIP*)this->getObjectSafe(index, CCU_I20_CCU_I20_AIP_25);
  }
  AIS* getAIS_26(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, CCU_I20_CCU_I20_AIS_26);
  }
  AIG* getAIG_27(size_t index = 0) {
    return (AIG*)this->getObjectSafe(index, CCU_I20_CCU_I20_AIG_27);
  }
  AIL* getAIL_28(size_t index = 0) {
    return (AIL*)this->getObjectSafe(index, CCU_I20_CCU_I20_AIL_28);
  }
  AIP* getAIP_29(size_t index = 0) {
    return (AIP*)this->getObjectSafe(index, CCU_I20_CCU_I20_AIP_29);
  }
  AIS* getAIS_30(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, CCU_I20_CCU_I20_AIS_30);
  }
  OBX* getOBX_31(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCU_I20_CCU_I20_OBX_31);
  }
  PRT* getPRT_32(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_32);
  }
  CTI* getCTI_35(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, CCU_I20_CCU_I20_CTI_35);
  }
  ORC* getORC_36(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, CCU_I20_CCU_I20_ORC_36);
  }
  ACC* getACC_39(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, CCU_I20_CCU_I20_ACC_39);
  }
  AL1* getAL1_40(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, CCU_I20_CCU_I20_AL1_40);
  }
  DB1* getDB1_41(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, CCU_I20_CCU_I20_DB1_41);
  }
  DG1* getDG1_42(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, CCU_I20_CCU_I20_DG1_42);
  }
  DRG* getDRG_43(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, CCU_I20_CCU_I20_DRG_43);
  }
  IAM* getIAM_44(size_t index = 0) {
    return (IAM*)this->getObjectSafe(index, CCU_I20_CCU_I20_IAM_44);
  }
  OBR* getOBR_45(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, CCU_I20_CCU_I20_OBR_45);
  }
  ODS* getODS_46(size_t index = 0) {
    return (ODS*)this->getObjectSafe(index, CCU_I20_CCU_I20_ODS_46);
  }
  PDA* getPDA_47(size_t index = 0) {
    return (PDA*)this->getObjectSafe(index, CCU_I20_CCU_I20_PDA_47);
  }
  PR1* getPR1_48(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, CCU_I20_CCU_I20_PR1_48);
  }
  PRT* getPRT_49(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_49);
  }
  RF1* getRF1_50(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, CCU_I20_CCU_I20_RF1_50);
  }
  RMI* getRMI_51(size_t index = 0) {
    return (RMI*)this->getObjectSafe(index, CCU_I20_CCU_I20_RMI_51);
  }
  ACC* getACC_52(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, CCU_I20_CCU_I20_ACC_52);
  }
  AL1* getAL1_53(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, CCU_I20_CCU_I20_AL1_53);
  }
  DB1* getDB1_54(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, CCU_I20_CCU_I20_DB1_54);
  }
  DG1* getDG1_55(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, CCU_I20_CCU_I20_DG1_55);
  }
  DRG* getDRG_56(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, CCU_I20_CCU_I20_DRG_56);
  }
  IAM* getIAM_57(size_t index = 0) {
    return (IAM*)this->getObjectSafe(index, CCU_I20_CCU_I20_IAM_57);
  }
  OBR* getOBR_58(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, CCU_I20_CCU_I20_OBR_58);
  }
  ODS* getODS_59(size_t index = 0) {
    return (ODS*)this->getObjectSafe(index, CCU_I20_CCU_I20_ODS_59);
  }
  PDA* getPDA_60(size_t index = 0) {
    return (PDA*)this->getObjectSafe(index, CCU_I20_CCU_I20_PDA_60);
  }
  PR1* getPR1_61(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, CCU_I20_CCU_I20_PR1_61);
  }
  PRT* getPRT_62(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_62);
  }
  RF1* getRF1_63(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, CCU_I20_CCU_I20_RF1_63);
  }
  RMI* getRMI_64(size_t index = 0) {
    return (RMI*)this->getObjectSafe(index, CCU_I20_CCU_I20_RMI_64);
  }
  OBX* getOBX_65(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCU_I20_CCU_I20_OBX_65);
  }
  PRT* getPRT_66(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_66);
  }
  VAR* getVAR_70(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCU_I20_CCU_I20_VAR_70);
  }
  ACC* getACC_71(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, CCU_I20_CCU_I20_ACC_71);
  }
  AL1* getAL1_72(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, CCU_I20_CCU_I20_AL1_72);
  }
  DB1* getDB1_73(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, CCU_I20_CCU_I20_DB1_73);
  }
  DG1* getDG1_74(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, CCU_I20_CCU_I20_DG1_74);
  }
  DRG* getDRG_75(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, CCU_I20_CCU_I20_DRG_75);
  }
  IAM* getIAM_76(size_t index = 0) {
    return (IAM*)this->getObjectSafe(index, CCU_I20_CCU_I20_IAM_76);
  }
  OBR* getOBR_77(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, CCU_I20_CCU_I20_OBR_77);
  }
  ODS* getODS_78(size_t index = 0) {
    return (ODS*)this->getObjectSafe(index, CCU_I20_CCU_I20_ODS_78);
  }
  PDA* getPDA_79(size_t index = 0) {
    return (PDA*)this->getObjectSafe(index, CCU_I20_CCU_I20_PDA_79);
  }
  PR1* getPR1_80(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, CCU_I20_CCU_I20_PR1_80);
  }
  PRT* getPRT_81(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_81);
  }
  RF1* getRF1_82(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, CCU_I20_CCU_I20_RF1_82);
  }
  RMI* getRMI_83(size_t index = 0) {
    return (RMI*)this->getObjectSafe(index, CCU_I20_CCU_I20_RMI_83);
  }
  ACC* getACC_84(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, CCU_I20_CCU_I20_ACC_84);
  }
  AL1* getAL1_85(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, CCU_I20_CCU_I20_AL1_85);
  }
  DB1* getDB1_86(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, CCU_I20_CCU_I20_DB1_86);
  }
  DG1* getDG1_87(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, CCU_I20_CCU_I20_DG1_87);
  }
  DRG* getDRG_88(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, CCU_I20_CCU_I20_DRG_88);
  }
  IAM* getIAM_89(size_t index = 0) {
    return (IAM*)this->getObjectSafe(index, CCU_I20_CCU_I20_IAM_89);
  }
  OBR* getOBR_90(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, CCU_I20_CCU_I20_OBR_90);
  }
  ODS* getODS_91(size_t index = 0) {
    return (ODS*)this->getObjectSafe(index, CCU_I20_CCU_I20_ODS_91);
  }
  PDA* getPDA_92(size_t index = 0) {
    return (PDA*)this->getObjectSafe(index, CCU_I20_CCU_I20_PDA_92);
  }
  PR1* getPR1_93(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, CCU_I20_CCU_I20_PR1_93);
  }
  PRT* getPRT_94(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_94);
  }
  RF1* getRF1_95(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, CCU_I20_CCU_I20_RF1_95);
  }
  RMI* getRMI_96(size_t index = 0) {
    return (RMI*)this->getObjectSafe(index, CCU_I20_CCU_I20_RMI_96);
  }
  OBX* getOBX_97(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCU_I20_CCU_I20_OBX_97);
  }
  PRT* getPRT_98(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_98);
  }
  ACC* getACC_99(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, CCU_I20_CCU_I20_ACC_99);
  }
  AL1* getAL1_100(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, CCU_I20_CCU_I20_AL1_100);
  }
  DB1* getDB1_101(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, CCU_I20_CCU_I20_DB1_101);
  }
  DG1* getDG1_102(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, CCU_I20_CCU_I20_DG1_102);
  }
  DRG* getDRG_103(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, CCU_I20_CCU_I20_DRG_103);
  }
  IAM* getIAM_104(size_t index = 0) {
    return (IAM*)this->getObjectSafe(index, CCU_I20_CCU_I20_IAM_104);
  }
  OBR* getOBR_105(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, CCU_I20_CCU_I20_OBR_105);
  }
  ODS* getODS_106(size_t index = 0) {
    return (ODS*)this->getObjectSafe(index, CCU_I20_CCU_I20_ODS_106);
  }
  PDA* getPDA_107(size_t index = 0) {
    return (PDA*)this->getObjectSafe(index, CCU_I20_CCU_I20_PDA_107);
  }
  PR1* getPR1_108(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, CCU_I20_CCU_I20_PR1_108);
  }
  PRT* getPRT_109(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_109);
  }
  RF1* getRF1_110(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, CCU_I20_CCU_I20_RF1_110);
  }
  RMI* getRMI_111(size_t index = 0) {
    return (RMI*)this->getObjectSafe(index, CCU_I20_CCU_I20_RMI_111);
  }
  OBX* getOBX_112(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCU_I20_CCU_I20_OBX_112);
  }
  PRT* getPRT_113(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_113);
  }
  PRD* getPRD_114(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRD_114);
  }
  PRT* getPRT_115(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_115);
  }
  ROL* getROL_116(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, CCU_I20_CCU_I20_ROL_116);
  }
  GOL* getGOL_119(size_t index = 0) {
    return (GOL*)this->getObjectSafe(index, CCU_I20_CCU_I20_GOL_119);
  }
  VAR* getVAR_120(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCU_I20_CCU_I20_VAR_120);
  }
  VAR* getVAR_122(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCU_I20_CCU_I20_VAR_122);
  }
  PRD* getPRD_123(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRD_123);
  }
  PRT* getPRT_124(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_124);
  }
  ROL* getROL_125(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, CCU_I20_CCU_I20_ROL_125);
  }
  VAR* getVAR_127(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCU_I20_CCU_I20_VAR_127);
  }
  OBX* getOBX_128(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCU_I20_CCU_I20_OBX_128);
  }
  PRT* getPRT_129(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_129);
  }
  PRD* getPRD_130(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRD_130);
  }
  PRT* getPRT_131(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_131);
  }
  ROL* getROL_132(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, CCU_I20_CCU_I20_ROL_132);
  }
  IN1* getIN1_133(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, CCU_I20_CCU_I20_IN1_133);
  }
  IN2* getIN2_134(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, CCU_I20_CCU_I20_IN2_134);
  }
  IN3* getIN3_135(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, CCU_I20_CCU_I20_IN3_135);
  }
  CTI* getCTI_139(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, CCU_I20_CCU_I20_CTI_139);
  }
  ORC* getORC_140(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, CCU_I20_CCU_I20_ORC_140);
  }
  PRT* getPRT_142(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_142);
  }
  RXC* getRXC_143(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, CCU_I20_CCU_I20_RXC_143);
  }
  RXO* getRXO_144(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, CCU_I20_CCU_I20_RXO_144);
  }
  OBX* getOBX_146(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCU_I20_CCU_I20_OBX_146);
  }
  PRT* getPRT_147(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_147);
  }
  PRT* getPRT_149(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_149);
  }
  RXC* getRXC_150(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, CCU_I20_CCU_I20_RXC_150);
  }
  RXO* getRXO_151(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, CCU_I20_CCU_I20_RXO_151);
  }
  PRT* getPRT_154(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_154);
  }
  RXC* getRXC_155(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, CCU_I20_CCU_I20_RXC_155);
  }
  RXE* getRXE_156(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, CCU_I20_CCU_I20_RXE_156);
  }
  OBX* getOBX_158(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCU_I20_CCU_I20_OBX_158);
  }
  PRT* getPRT_159(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_159);
  }
  OBX* getOBX_160(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCU_I20_CCU_I20_OBX_160);
  }
  PRT* getPRT_161(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_161);
  }
  OBX* getOBX_162(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCU_I20_CCU_I20_OBX_162);
  }
  PRT* getPRT_163(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_163);
  }
  PRT* getPRT_165(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_165);
  }
  RXC* getRXC_166(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, CCU_I20_CCU_I20_RXC_166);
  }
  RXO* getRXO_167(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, CCU_I20_CCU_I20_RXO_167);
  }
  PRT* getPRT_170(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_170);
  }
  RXC* getRXC_171(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, CCU_I20_CCU_I20_RXC_171);
  }
  RXE* getRXE_172(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, CCU_I20_CCU_I20_RXE_172);
  }
  PRT* getPRT_175(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_175);
  }
  RXA* getRXA_176(size_t index = 0) {
    return (RXA*)this->getObjectSafe(index, CCU_I20_CCU_I20_RXA_176);
  }
  RXR* getRXR_177(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, CCU_I20_CCU_I20_RXR_177);
  }
  OBX* getOBX_178(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCU_I20_CCU_I20_OBX_178);
  }
  PRT* getPRT_179(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_179);
  }
  OBX* getOBX_180(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCU_I20_CCU_I20_OBX_180);
  }
  PRT* getPRT_181(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_181);
  }
  OBX* getOBX_182(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCU_I20_CCU_I20_OBX_182);
  }
  PRT* getPRT_183(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_183);
  }
  OBX* getOBX_184(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCU_I20_CCU_I20_OBX_184);
  }
  PRT* getPRT_185(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_185);
  }
  OBX* getOBX_186(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCU_I20_CCU_I20_OBX_186);
  }
  PRT* getPRT_187(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_187);
  }
  OBX* getOBX_188(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCU_I20_CCU_I20_OBX_188);
  }
  PRT* getPRT_189(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_189);
  }
  PTH* getPTH_192(size_t index = 0) {
    return (PTH*)this->getObjectSafe(index, CCU_I20_CCU_I20_PTH_192);
  }
  VAR* getVAR_193(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCU_I20_CCU_I20_VAR_193);
  }
  VAR* getVAR_195(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCU_I20_CCU_I20_VAR_195);
  }
  PRD* getPRD_196(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRD_196);
  }
  PRT* getPRT_197(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_197);
  }
  ROL* getROL_198(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, CCU_I20_CCU_I20_ROL_198);
  }
  VAR* getVAR_200(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCU_I20_CCU_I20_VAR_200);
  }
  OBX* getOBX_201(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCU_I20_CCU_I20_OBX_201);
  }
  PRT* getPRT_202(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_202);
  }
  PRD* getPRD_203(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRD_203);
  }
  PRT* getPRT_204(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_204);
  }
  ROL* getROL_205(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, CCU_I20_CCU_I20_ROL_205);
  }
  PD1* getPD1_206(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, CCU_I20_CCU_I20_PD1_206);
  }
  PID* getPID_207(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, CCU_I20_CCU_I20_PID_207);
  }
  PV1* getPV1_208(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, CCU_I20_CCU_I20_PV1_208);
  }
  PV2* getPV2_209(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, CCU_I20_CCU_I20_PV2_209);
  }
  PRB* getPRB_212(size_t index = 0) {
    return (PRB*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRB_212);
  }
  VAR* getVAR_213(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCU_I20_CCU_I20_VAR_213);
  }
  VAR* getVAR_215(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCU_I20_CCU_I20_VAR_215);
  }
  PRD* getPRD_216(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRD_216);
  }
  PRT* getPRT_217(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_217);
  }
  ROL* getROL_218(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, CCU_I20_CCU_I20_ROL_218);
  }
  VAR* getVAR_220(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCU_I20_CCU_I20_VAR_220);
  }
  OBX* getOBX_221(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCU_I20_CCU_I20_OBX_221);
  }
  PRT* getPRT_222(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_222);
  }
  PRD* getPRD_223(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRD_223);
  }
  PRT* getPRT_224(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRT_224);
  }
  ROL* getROL_225(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, CCU_I20_CCU_I20_ROL_225);
  }
  CTD* getCTD_226(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, CCU_I20_CCU_I20_CTD_226);
  }
  PRD* getPRD_227(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CCU_I20_CCU_I20_PRD_227);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_4(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_RF1_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_7(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_NK1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isREL_16(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_REL_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSCH_18(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_SCH_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRGS_20(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_RGS_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIG_23(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_AIG_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIL_24(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_AIL_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIP_25(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_AIP_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIS_26(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_AIS_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIG_27(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_AIG_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIL_28(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_AIL_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIP_29(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_AIP_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIS_30(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_AIS_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_31(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_OBX_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_32(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_35(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_CTI_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_36(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_ORC_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_39(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_ACC_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_40(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_AL1_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_41(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_DB1_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_42(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_DG1_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_43(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_DRG_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIAM_44(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_IAM_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_45(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_OBR_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODS_46(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_ODS_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPDA_47(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PDA_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_48(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PR1_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_49(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_50(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_RF1_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRMI_51(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_RMI_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_52(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_ACC_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_53(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_AL1_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_54(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_DB1_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_55(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_DG1_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_56(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_DRG_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIAM_57(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_IAM_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_58(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_OBR_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODS_59(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_ODS_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPDA_60(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PDA_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_61(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PR1_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_62(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_63(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_RF1_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRMI_64(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_RMI_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_65(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_OBX_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_66(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_70(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_VAR_70) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_71(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_ACC_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_72(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_AL1_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_73(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_DB1_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_74(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_DG1_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_75(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_DRG_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIAM_76(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_IAM_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_77(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_OBR_77) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODS_78(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_ODS_78) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPDA_79(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PDA_79) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_80(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PR1_80) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_81(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_81) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_82(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_RF1_82) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRMI_83(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_RMI_83) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_84(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_ACC_84) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_85(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_AL1_85) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_86(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_DB1_86) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_87(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_DG1_87) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_88(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_DRG_88) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIAM_89(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_IAM_89) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_90(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_OBR_90) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODS_91(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_ODS_91) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPDA_92(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PDA_92) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_93(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PR1_93) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_94(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_94) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_95(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_RF1_95) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRMI_96(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_RMI_96) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_97(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_OBX_97) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_98(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_98) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_99(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_ACC_99) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_100(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_AL1_100) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_101(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_DB1_101) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_102(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_DG1_102) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_103(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_DRG_103) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIAM_104(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_IAM_104) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_105(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_OBR_105) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODS_106(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_ODS_106) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPDA_107(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PDA_107) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_108(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PR1_108) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_109(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_109) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_110(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_RF1_110) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRMI_111(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_RMI_111) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_112(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_OBX_112) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_113(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_113) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_114(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRD_114) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_115(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_115) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_116(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_ROL_116) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOL_119(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_GOL_119) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_120(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_VAR_120) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_122(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_VAR_122) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_123(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRD_123) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_124(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_124) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_125(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_ROL_125) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_127(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_VAR_127) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_128(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_OBX_128) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_129(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_129) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_130(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRD_130) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_131(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_131) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_132(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_ROL_132) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_133(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_IN1_133) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_134(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_IN2_134) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_135(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_IN3_135) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_139(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_CTI_139) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_140(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_ORC_140) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_142(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_142) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_143(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_RXC_143) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_144(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_RXO_144) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_146(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_OBX_146) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_147(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_147) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_149(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_149) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_150(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_RXC_150) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_151(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_RXO_151) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_154(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_154) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_155(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_RXC_155) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXE_156(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_RXE_156) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_158(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_OBX_158) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_159(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_159) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_160(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_OBX_160) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_161(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_161) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_162(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_OBX_162) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_163(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_163) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_165(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_165) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_166(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_RXC_166) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_167(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_RXO_167) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_170(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_170) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_171(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_RXC_171) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXE_172(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_RXE_172) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_175(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_175) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXA_176(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_RXA_176) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_177(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_RXR_177) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_178(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_OBX_178) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_179(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_179) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_180(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_OBX_180) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_181(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_181) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_182(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_OBX_182) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_183(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_183) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_184(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_OBX_184) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_185(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_185) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_186(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_OBX_186) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_187(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_187) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_188(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_OBX_188) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_189(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_189) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPTH_192(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PTH_192) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_193(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_VAR_193) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_195(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_VAR_195) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_196(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRD_196) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_197(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_197) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_198(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_ROL_198) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_200(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_VAR_200) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_201(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_OBX_201) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_202(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_202) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_203(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRD_203) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_204(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_204) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_205(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_ROL_205) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_206(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PD1_206) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_207(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PID_207) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_208(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PV1_208) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_209(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PV2_209) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRB_212(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRB_212) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_213(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_VAR_213) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_215(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_VAR_215) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_216(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRD_216) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_217(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_217) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_218(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_ROL_218) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_220(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_VAR_220) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_221(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_OBX_221) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_222(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_222) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_223(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRD_223) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_224(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRT_224) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_225(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_ROL_225) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_226(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_CTD_226) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_227(size_t index = 0) {
    try {
      return this->getObject(index, CCU_I20_CCU_I20_PRD_227) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* CCU_I20_CCU_I20_ */
} /* namespace HL7_29 */
#endif /*  __CCU_I20_CCU_I20__29_H__ */
