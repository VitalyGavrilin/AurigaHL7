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


#ifndef __CCM_I21_CCM_I21__29_H__
#define __CCM_I21_CCM_I21__29_H__

#include "../../common/Util.h"
#include "../segment/ACC.h"
#include "../segment/AIG.h"
#include "../segment/AIL.h"
#include "../segment/AIP.h"
#include "../segment/AIS.h"
#include "../segment/AL1.h"
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
struct CCM_I21_CCM_I21_INSURANCE; /* INSURANCE */
struct CCM_I21_CCM_I21_APPOINTMENT_HISTORY; /* APPOINTMENT_HISTORY */
struct CCM_I21_CCM_I21_CLINICAL_HISTORY; /* CLINICAL_HISTORY */
struct CCM_I21_CCM_I21_PATIENT_VISITS; /* PATIENT_VISITS */
struct CCM_I21_CCM_I21_MEDICATION_HISTORY; /* MEDICATION_HISTORY */
struct CCM_I21_CCM_I21_PROBLEM; /* PROBLEM */
struct CCM_I21_CCM_I21_GOAL; /* GOAL */
struct CCM_I21_CCM_I21_PATHWAY; /* PATHWAY */
struct CCM_I21_CCM_I21_RESOURCES; /* RESOURCES */
struct CCM_I21_CCM_I21_RESOURCE_DETAIL; /* RESOURCE_DETAIL */
struct CCM_I21_CCM_I21_RESOURCE_OBJECT; /* RESOURCE_OBJECT */
struct CCM_I21_CCM_I21_RESOURCE_OBSERVATION; /* RESOURCE_OBSERVATION */
struct CCM_I21_CCM_I21_CLINICAL_HISTORY_DETAIL; /* CLINICAL_HISTORY_DETAIL */
struct CCM_I21_CCM_I21_PARTICIPATION_CLINICAL_HISTORY; /* PARTICIPATION_CLINICAL_HISTORY */
struct CCM_I21_CCM_I21_CLINICAL_HISTORY_OBJECT; /* CLINICAL_HISTORY_OBJECT */
struct CCM_I21_CCM_I21_CLINICAL_HISTORY_OBSERVATION; /* CLINICAL_HISTORY_OBSERVATION */
struct CCM_I21_CCM_I21_CLINICAL_HISTORY_OBJECT; /* CLINICAL_HISTORY_OBJECT */
struct CCM_I21_CCM_I21_CLINICAL_HISTORY_OBSERVATION; /* CLINICAL_HISTORY_OBSERVATION */
struct CCM_I21_CCM_I21_PARTICIPATION_CLINICAL_HISTORY_OBJECT; /* PARTICIPATION_CLINICAL_HISTORY_OBJECT */
struct CCM_I21_CCM_I21_PARTICIPATION_GOAL; /* PARTICIPATION_GOAL */
struct CCM_I21_CCM_I21_GOAL_OBSERVATION; /* GOAL_OBSERVATION */
struct CCM_I21_CCM_I21_PARTICIPATION_GOAL_OBJECT; /* PARTICIPATION_GOAL_OBJECT */
struct CCM_I21_CCM_I21_PARTICIPATION_GOAL_OBJECT; /* PARTICIPATION_GOAL_OBJECT */
struct CCM_I21_CCM_I21_MEDICATION_ORDER_DETAIL; /* MEDICATION_ORDER_DETAIL */
struct CCM_I21_CCM_I21_MEDICATION_ENCODING_DETAIL; /* MEDICATION_ENCODING_DETAIL */
struct CCM_I21_CCM_I21_MEDICATION_ADMINISTRATION_DETAIL; /* MEDICATION_ADMINISTRATION_DETAIL */
struct CCM_I21_CCM_I21_MEDICATION_ORDER_OBSERVATION; /* MEDICATION_ORDER_OBSERVATION */
struct CCM_I21_CCM_I21_MEDICATION_ORDER_OBSERVATION; /* MEDICATION_ORDER_OBSERVATION */
struct CCM_I21_CCM_I21_MEDICATION_ENCODING_OBSERVATION; /* MEDICATION_ENCODING_OBSERVATION */
struct CCM_I21_CCM_I21_MEDICATION_ORDER_OBSERVATION; /* MEDICATION_ORDER_OBSERVATION */
struct CCM_I21_CCM_I21_MEDICATION_ENCODING_OBSERVATION; /* MEDICATION_ENCODING_OBSERVATION */
struct CCM_I21_CCM_I21_MEDICATION_ADMINISTRATION_OBSERVATION; /* MEDICATION_ADMINISTRATION_OBSERVATION */
struct CCM_I21_CCM_I21_PARTICIPATION_PATHWAY; /* PARTICIPATION_PATHWAY */
struct CCM_I21_CCM_I21_PATHWAY_OBSERVATION; /* PATHWAY_OBSERVATION */
struct CCM_I21_CCM_I21_PARTICIPATION_PATHWAY_OBJECT; /* PARTICIPATION_PATHWAY_OBJECT */
struct CCM_I21_CCM_I21_PARTICIPATION_PATHWAY_OBJECT; /* PARTICIPATION_PATHWAY_OBJECT */
struct CCM_I21_CCM_I21_PARTICIPATION_PROBLEM; /* PARTICIPATION_PROBLEM */
struct CCM_I21_CCM_I21_PROBLEM_OBSERVATION; /* PROBLEM_OBSERVATION */
struct CCM_I21_CCM_I21_PARTICIPATION_PROBLEM_OBJECT; /* PARTICIPATION_PROBLEM_OBJECT */
struct CCM_I21_CCM_I21_PARTICIPATION_PROBLEM_OBJECT; /* PARTICIPATION_PROBLEM_OBJECT */

/*  */
struct CCM_I21_CCM_I21 : public HL7Message {
  CCM_I21_CCM_I21() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    CCM_I21_CCM_I21_MSH_1,
    CCM_I21_CCM_I21_SFT_2,
    CCM_I21_CCM_I21_UAC_3,
    CCM_I21_CCM_I21_PID_4,
    CCM_I21_CCM_I21_PD1_5,
    CCM_I21_CCM_I21_NK1_6,
    CCM_I21_CCM_I21_REL_15,
    CCM_I21_CCM_I21_SCH_17,
    CCM_I21_CCM_I21_RGS_19,
    CCM_I21_CCM_I21_AIG_22,
    CCM_I21_CCM_I21_AIL_23,
    CCM_I21_CCM_I21_AIP_24,
    CCM_I21_CCM_I21_AIS_25,
    CCM_I21_CCM_I21_AIG_26,
    CCM_I21_CCM_I21_AIL_27,
    CCM_I21_CCM_I21_AIP_28,
    CCM_I21_CCM_I21_AIS_29,
    CCM_I21_CCM_I21_OBX_30,
    CCM_I21_CCM_I21_PRT_31,
    CCM_I21_CCM_I21_CTI_34,
    CCM_I21_CCM_I21_ORC_35,
    CCM_I21_CCM_I21_ACC_38,
    CCM_I21_CCM_I21_AL1_39,
    CCM_I21_CCM_I21_DB1_40,
    CCM_I21_CCM_I21_DG1_41,
    CCM_I21_CCM_I21_DRG_42,
    CCM_I21_CCM_I21_IAM_43,
    CCM_I21_CCM_I21_OBR_44,
    CCM_I21_CCM_I21_ODS_45,
    CCM_I21_CCM_I21_PDA_46,
    CCM_I21_CCM_I21_PR1_47,
    CCM_I21_CCM_I21_PRT_48,
    CCM_I21_CCM_I21_RF1_49,
    CCM_I21_CCM_I21_RMI_50,
    CCM_I21_CCM_I21_ACC_51,
    CCM_I21_CCM_I21_AL1_52,
    CCM_I21_CCM_I21_DB1_53,
    CCM_I21_CCM_I21_DG1_54,
    CCM_I21_CCM_I21_DRG_55,
    CCM_I21_CCM_I21_IAM_56,
    CCM_I21_CCM_I21_OBR_57,
    CCM_I21_CCM_I21_ODS_58,
    CCM_I21_CCM_I21_PDA_59,
    CCM_I21_CCM_I21_PR1_60,
    CCM_I21_CCM_I21_PRT_61,
    CCM_I21_CCM_I21_RF1_62,
    CCM_I21_CCM_I21_RMI_63,
    CCM_I21_CCM_I21_OBX_64,
    CCM_I21_CCM_I21_PRT_65,
    CCM_I21_CCM_I21_VAR_69,
    CCM_I21_CCM_I21_ACC_70,
    CCM_I21_CCM_I21_AL1_71,
    CCM_I21_CCM_I21_DB1_72,
    CCM_I21_CCM_I21_DG1_73,
    CCM_I21_CCM_I21_DRG_74,
    CCM_I21_CCM_I21_IAM_75,
    CCM_I21_CCM_I21_OBR_76,
    CCM_I21_CCM_I21_ODS_77,
    CCM_I21_CCM_I21_PDA_78,
    CCM_I21_CCM_I21_PR1_79,
    CCM_I21_CCM_I21_PRT_80,
    CCM_I21_CCM_I21_RF1_81,
    CCM_I21_CCM_I21_RMI_82,
    CCM_I21_CCM_I21_ACC_83,
    CCM_I21_CCM_I21_AL1_84,
    CCM_I21_CCM_I21_DB1_85,
    CCM_I21_CCM_I21_DG1_86,
    CCM_I21_CCM_I21_DRG_87,
    CCM_I21_CCM_I21_IAM_88,
    CCM_I21_CCM_I21_OBR_89,
    CCM_I21_CCM_I21_ODS_90,
    CCM_I21_CCM_I21_PDA_91,
    CCM_I21_CCM_I21_PR1_92,
    CCM_I21_CCM_I21_PRT_93,
    CCM_I21_CCM_I21_RF1_94,
    CCM_I21_CCM_I21_RMI_95,
    CCM_I21_CCM_I21_OBX_96,
    CCM_I21_CCM_I21_PRT_97,
    CCM_I21_CCM_I21_ACC_98,
    CCM_I21_CCM_I21_AL1_99,
    CCM_I21_CCM_I21_DB1_100,
    CCM_I21_CCM_I21_DG1_101,
    CCM_I21_CCM_I21_DRG_102,
    CCM_I21_CCM_I21_IAM_103,
    CCM_I21_CCM_I21_OBR_104,
    CCM_I21_CCM_I21_ODS_105,
    CCM_I21_CCM_I21_PDA_106,
    CCM_I21_CCM_I21_PR1_107,
    CCM_I21_CCM_I21_PRT_108,
    CCM_I21_CCM_I21_RF1_109,
    CCM_I21_CCM_I21_RMI_110,
    CCM_I21_CCM_I21_OBX_111,
    CCM_I21_CCM_I21_PRT_112,
    CCM_I21_CCM_I21_PRD_113,
    CCM_I21_CCM_I21_PRT_114,
    CCM_I21_CCM_I21_ROL_115,
    CCM_I21_CCM_I21_GOL_118,
    CCM_I21_CCM_I21_VAR_119,
    CCM_I21_CCM_I21_VAR_121,
    CCM_I21_CCM_I21_PRD_122,
    CCM_I21_CCM_I21_PRT_123,
    CCM_I21_CCM_I21_ROL_124,
    CCM_I21_CCM_I21_VAR_126,
    CCM_I21_CCM_I21_OBX_127,
    CCM_I21_CCM_I21_PRT_128,
    CCM_I21_CCM_I21_PRD_129,
    CCM_I21_CCM_I21_PRT_130,
    CCM_I21_CCM_I21_ROL_131,
    CCM_I21_CCM_I21_IN1_132,
    CCM_I21_CCM_I21_IN2_133,
    CCM_I21_CCM_I21_IN3_134,
    CCM_I21_CCM_I21_CTI_138,
    CCM_I21_CCM_I21_ORC_139,
    CCM_I21_CCM_I21_RXC_141,
    CCM_I21_CCM_I21_RXO_142,
    CCM_I21_CCM_I21_OBX_144,
    CCM_I21_CCM_I21_PRT_145,
    CCM_I21_CCM_I21_RXC_147,
    CCM_I21_CCM_I21_RXO_148,
    CCM_I21_CCM_I21_RXC_151,
    CCM_I21_CCM_I21_RXE_152,
    CCM_I21_CCM_I21_OBX_154,
    CCM_I21_CCM_I21_PRT_155,
    CCM_I21_CCM_I21_OBX_156,
    CCM_I21_CCM_I21_PRT_157,
    CCM_I21_CCM_I21_OBX_158,
    CCM_I21_CCM_I21_PRT_159,
    CCM_I21_CCM_I21_RXC_161,
    CCM_I21_CCM_I21_RXO_162,
    CCM_I21_CCM_I21_RXC_165,
    CCM_I21_CCM_I21_RXE_166,
    CCM_I21_CCM_I21_RXR_170,
    CCM_I21_CCM_I21_OBX_171,
    CCM_I21_CCM_I21_PRT_172,
    CCM_I21_CCM_I21_OBX_173,
    CCM_I21_CCM_I21_PRT_174,
    CCM_I21_CCM_I21_OBX_175,
    CCM_I21_CCM_I21_PRT_176,
    CCM_I21_CCM_I21_OBX_177,
    CCM_I21_CCM_I21_PRT_178,
    CCM_I21_CCM_I21_OBX_179,
    CCM_I21_CCM_I21_PRT_180,
    CCM_I21_CCM_I21_OBX_181,
    CCM_I21_CCM_I21_PRT_182,
    CCM_I21_CCM_I21_PTH_185,
    CCM_I21_CCM_I21_VAR_186,
    CCM_I21_CCM_I21_VAR_188,
    CCM_I21_CCM_I21_PRD_189,
    CCM_I21_CCM_I21_PRT_190,
    CCM_I21_CCM_I21_VAR_192,
    CCM_I21_CCM_I21_OBX_193,
    CCM_I21_CCM_I21_PRT_194,
    CCM_I21_CCM_I21_PRD_195,
    CCM_I21_CCM_I21_PRT_196,
    CCM_I21_CCM_I21_PV1_197,
    CCM_I21_CCM_I21_PV2_198,
    CCM_I21_CCM_I21_PRB_201,
    CCM_I21_CCM_I21_VAR_202,
    CCM_I21_CCM_I21_VAR_204,
    CCM_I21_CCM_I21_PRD_205,
    CCM_I21_CCM_I21_PRT_206,
    CCM_I21_CCM_I21_ROL_207,
    CCM_I21_CCM_I21_VAR_209,
    CCM_I21_CCM_I21_OBX_210,
    CCM_I21_CCM_I21_PRT_211,
    CCM_I21_CCM_I21_PRD_212,
    CCM_I21_CCM_I21_PRT_213,
    CCM_I21_CCM_I21_ROL_214,
    FIELD_ID_MAX
  };

  const char* className() const { return "CCM_I21_CCM_I21"; }
  CCM_I21_CCM_I21* create() const { return new CCM_I21_CCM_I21(); }

 private:
  /* Initialize object */
  void init() {
    setName("CCM_I21_CCM_I21");
    addObject<MSH>(CCM_I21_CCM_I21_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(CCM_I21_CCM_I21_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(CCM_I21_CCM_I21_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<PID>(CCM_I21_CCM_I21_PID_4, "PID.4", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(CCM_I21_CCM_I21_PD1_5, "PD1.5", HL7::optional, HL7::repetition_off);
    addObject<NK1>(CCM_I21_CCM_I21_NK1_6, "NK1.6", HL7::optional, HL7::repetition_on);
    addObject<REL>(CCM_I21_CCM_I21_REL_15, "REL.15", HL7::optional, HL7::repetition_on);
    addObject<SCH>(CCM_I21_CCM_I21_SCH_17, "SCH.17", HL7::initialized, HL7::repetition_off);
    addObject<RGS>(CCM_I21_CCM_I21_RGS_19, "RGS.19", HL7::initialized, HL7::repetition_off);
    addObject<AIG>(CCM_I21_CCM_I21_AIG_22, "AIG.22", HL7::initialized, HL7::repetition_off);
    addObject<AIL>(CCM_I21_CCM_I21_AIL_23, "AIL.23", HL7::initialized, HL7::repetition_off);
    addObject<AIP>(CCM_I21_CCM_I21_AIP_24, "AIP.24", HL7::initialized, HL7::repetition_off);
    addObject<AIS>(CCM_I21_CCM_I21_AIS_25, "AIS.25", HL7::initialized, HL7::repetition_off);
    addObject<AIG>(CCM_I21_CCM_I21_AIG_26, "AIG.26", HL7::initialized, HL7::repetition_off);
    addObject<AIL>(CCM_I21_CCM_I21_AIL_27, "AIL.27", HL7::initialized, HL7::repetition_off);
    addObject<AIP>(CCM_I21_CCM_I21_AIP_28, "AIP.28", HL7::initialized, HL7::repetition_off);
    addObject<AIS>(CCM_I21_CCM_I21_AIS_29, "AIS.29", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CCM_I21_CCM_I21_OBX_30, "OBX.30", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_31, "PRT.31", HL7::optional, HL7::repetition_on);
    addObject<CTI>(CCM_I21_CCM_I21_CTI_34, "CTI.34", HL7::optional, HL7::repetition_on);
    addObject<ORC>(CCM_I21_CCM_I21_ORC_35, "ORC.35", HL7::initialized, HL7::repetition_off);
    addObject<ACC>(CCM_I21_CCM_I21_ACC_38, "ACC.38", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(CCM_I21_CCM_I21_AL1_39, "AL1.39", HL7::initialized, HL7::repetition_off);
    addObject<DB1>(CCM_I21_CCM_I21_DB1_40, "DB1.40", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(CCM_I21_CCM_I21_DG1_41, "DG1.41", HL7::initialized, HL7::repetition_off);
    addObject<DRG>(CCM_I21_CCM_I21_DRG_42, "DRG.42", HL7::initialized, HL7::repetition_off);
    addObject<IAM>(CCM_I21_CCM_I21_IAM_43, "IAM.43", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(CCM_I21_CCM_I21_OBR_44, "OBR.44", HL7::initialized, HL7::repetition_off);
    addObject<ODS>(CCM_I21_CCM_I21_ODS_45, "ODS.45", HL7::initialized, HL7::repetition_off);
    addObject<PDA>(CCM_I21_CCM_I21_PDA_46, "PDA.46", HL7::initialized, HL7::repetition_off);
    addObject<PR1>(CCM_I21_CCM_I21_PR1_47, "PR1.47", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_48, "PRT.48", HL7::optional, HL7::repetition_on);
    addObject<RF1>(CCM_I21_CCM_I21_RF1_49, "RF1.49", HL7::initialized, HL7::repetition_off);
    addObject<RMI>(CCM_I21_CCM_I21_RMI_50, "RMI.50", HL7::initialized, HL7::repetition_off);
    addObject<ACC>(CCM_I21_CCM_I21_ACC_51, "ACC.51", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(CCM_I21_CCM_I21_AL1_52, "AL1.52", HL7::initialized, HL7::repetition_off);
    addObject<DB1>(CCM_I21_CCM_I21_DB1_53, "DB1.53", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(CCM_I21_CCM_I21_DG1_54, "DG1.54", HL7::initialized, HL7::repetition_off);
    addObject<DRG>(CCM_I21_CCM_I21_DRG_55, "DRG.55", HL7::initialized, HL7::repetition_off);
    addObject<IAM>(CCM_I21_CCM_I21_IAM_56, "IAM.56", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(CCM_I21_CCM_I21_OBR_57, "OBR.57", HL7::initialized, HL7::repetition_off);
    addObject<ODS>(CCM_I21_CCM_I21_ODS_58, "ODS.58", HL7::initialized, HL7::repetition_off);
    addObject<PDA>(CCM_I21_CCM_I21_PDA_59, "PDA.59", HL7::initialized, HL7::repetition_off);
    addObject<PR1>(CCM_I21_CCM_I21_PR1_60, "PR1.60", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_61, "PRT.61", HL7::optional, HL7::repetition_on);
    addObject<RF1>(CCM_I21_CCM_I21_RF1_62, "RF1.62", HL7::initialized, HL7::repetition_off);
    addObject<RMI>(CCM_I21_CCM_I21_RMI_63, "RMI.63", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CCM_I21_CCM_I21_OBX_64, "OBX.64", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_65, "PRT.65", HL7::optional, HL7::repetition_on);
    addObject<VAR>(CCM_I21_CCM_I21_VAR_69, "VAR.69", HL7::optional, HL7::repetition_on);
    addObject<ACC>(CCM_I21_CCM_I21_ACC_70, "ACC.70", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(CCM_I21_CCM_I21_AL1_71, "AL1.71", HL7::initialized, HL7::repetition_off);
    addObject<DB1>(CCM_I21_CCM_I21_DB1_72, "DB1.72", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(CCM_I21_CCM_I21_DG1_73, "DG1.73", HL7::initialized, HL7::repetition_off);
    addObject<DRG>(CCM_I21_CCM_I21_DRG_74, "DRG.74", HL7::initialized, HL7::repetition_off);
    addObject<IAM>(CCM_I21_CCM_I21_IAM_75, "IAM.75", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(CCM_I21_CCM_I21_OBR_76, "OBR.76", HL7::initialized, HL7::repetition_off);
    addObject<ODS>(CCM_I21_CCM_I21_ODS_77, "ODS.77", HL7::initialized, HL7::repetition_off);
    addObject<PDA>(CCM_I21_CCM_I21_PDA_78, "PDA.78", HL7::initialized, HL7::repetition_off);
    addObject<PR1>(CCM_I21_CCM_I21_PR1_79, "PR1.79", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_80, "PRT.80", HL7::optional, HL7::repetition_on);
    addObject<RF1>(CCM_I21_CCM_I21_RF1_81, "RF1.81", HL7::initialized, HL7::repetition_off);
    addObject<RMI>(CCM_I21_CCM_I21_RMI_82, "RMI.82", HL7::initialized, HL7::repetition_off);
    addObject<ACC>(CCM_I21_CCM_I21_ACC_83, "ACC.83", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(CCM_I21_CCM_I21_AL1_84, "AL1.84", HL7::initialized, HL7::repetition_off);
    addObject<DB1>(CCM_I21_CCM_I21_DB1_85, "DB1.85", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(CCM_I21_CCM_I21_DG1_86, "DG1.86", HL7::initialized, HL7::repetition_off);
    addObject<DRG>(CCM_I21_CCM_I21_DRG_87, "DRG.87", HL7::initialized, HL7::repetition_off);
    addObject<IAM>(CCM_I21_CCM_I21_IAM_88, "IAM.88", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(CCM_I21_CCM_I21_OBR_89, "OBR.89", HL7::initialized, HL7::repetition_off);
    addObject<ODS>(CCM_I21_CCM_I21_ODS_90, "ODS.90", HL7::initialized, HL7::repetition_off);
    addObject<PDA>(CCM_I21_CCM_I21_PDA_91, "PDA.91", HL7::initialized, HL7::repetition_off);
    addObject<PR1>(CCM_I21_CCM_I21_PR1_92, "PR1.92", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_93, "PRT.93", HL7::optional, HL7::repetition_on);
    addObject<RF1>(CCM_I21_CCM_I21_RF1_94, "RF1.94", HL7::initialized, HL7::repetition_off);
    addObject<RMI>(CCM_I21_CCM_I21_RMI_95, "RMI.95", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CCM_I21_CCM_I21_OBX_96, "OBX.96", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_97, "PRT.97", HL7::optional, HL7::repetition_on);
    addObject<ACC>(CCM_I21_CCM_I21_ACC_98, "ACC.98", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(CCM_I21_CCM_I21_AL1_99, "AL1.99", HL7::initialized, HL7::repetition_off);
    addObject<DB1>(CCM_I21_CCM_I21_DB1_100, "DB1.100", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(CCM_I21_CCM_I21_DG1_101, "DG1.101", HL7::initialized, HL7::repetition_off);
    addObject<DRG>(CCM_I21_CCM_I21_DRG_102, "DRG.102", HL7::initialized, HL7::repetition_off);
    addObject<IAM>(CCM_I21_CCM_I21_IAM_103, "IAM.103", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(CCM_I21_CCM_I21_OBR_104, "OBR.104", HL7::initialized, HL7::repetition_off);
    addObject<ODS>(CCM_I21_CCM_I21_ODS_105, "ODS.105", HL7::initialized, HL7::repetition_off);
    addObject<PDA>(CCM_I21_CCM_I21_PDA_106, "PDA.106", HL7::initialized, HL7::repetition_off);
    addObject<PR1>(CCM_I21_CCM_I21_PR1_107, "PR1.107", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_108, "PRT.108", HL7::optional, HL7::repetition_on);
    addObject<RF1>(CCM_I21_CCM_I21_RF1_109, "RF1.109", HL7::initialized, HL7::repetition_off);
    addObject<RMI>(CCM_I21_CCM_I21_RMI_110, "RMI.110", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CCM_I21_CCM_I21_OBX_111, "OBX.111", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_112, "PRT.112", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CCM_I21_CCM_I21_PRD_113, "PRD.113", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_114, "PRT.114", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(CCM_I21_CCM_I21_ROL_115, "ROL.115", HL7::initialized, HL7::repetition_off);
    addObject<GOL>(CCM_I21_CCM_I21_GOL_118, "GOL.118", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(CCM_I21_CCM_I21_VAR_119, "VAR.119", HL7::optional, HL7::repetition_on);
    addObject<VAR>(CCM_I21_CCM_I21_VAR_121, "VAR.121", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CCM_I21_CCM_I21_PRD_122, "PRD.122", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_123, "PRT.123", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(CCM_I21_CCM_I21_ROL_124, "ROL.124", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(CCM_I21_CCM_I21_VAR_126, "VAR.126", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCM_I21_CCM_I21_OBX_127, "OBX.127", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_128, "PRT.128", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CCM_I21_CCM_I21_PRD_129, "PRD.129", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_130, "PRT.130", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(CCM_I21_CCM_I21_ROL_131, "ROL.131", HL7::initialized, HL7::repetition_off);
    addObject<IN1>(CCM_I21_CCM_I21_IN1_132, "IN1.132", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(CCM_I21_CCM_I21_IN2_133, "IN2.133", HL7::optional, HL7::repetition_off);
    addObject<IN3>(CCM_I21_CCM_I21_IN3_134, "IN3.134", HL7::optional, HL7::repetition_off);
    addObject<CTI>(CCM_I21_CCM_I21_CTI_138, "CTI.138", HL7::optional, HL7::repetition_on);
    addObject<ORC>(CCM_I21_CCM_I21_ORC_139, "ORC.139", HL7::initialized, HL7::repetition_off);
    addObject<RXC>(CCM_I21_CCM_I21_RXC_141, "RXC.141", HL7::optional, HL7::repetition_on);
    addObject<RXO>(CCM_I21_CCM_I21_RXO_142, "RXO.142", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CCM_I21_CCM_I21_OBX_144, "OBX.144", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_145, "PRT.145", HL7::optional, HL7::repetition_on);
    addObject<RXC>(CCM_I21_CCM_I21_RXC_147, "RXC.147", HL7::optional, HL7::repetition_on);
    addObject<RXO>(CCM_I21_CCM_I21_RXO_148, "RXO.148", HL7::initialized, HL7::repetition_off);
    addObject<RXC>(CCM_I21_CCM_I21_RXC_151, "RXC.151", HL7::optional, HL7::repetition_on);
    addObject<RXE>(CCM_I21_CCM_I21_RXE_152, "RXE.152", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CCM_I21_CCM_I21_OBX_154, "OBX.154", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_155, "PRT.155", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCM_I21_CCM_I21_OBX_156, "OBX.156", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_157, "PRT.157", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCM_I21_CCM_I21_OBX_158, "OBX.158", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_159, "PRT.159", HL7::optional, HL7::repetition_on);
    addObject<RXC>(CCM_I21_CCM_I21_RXC_161, "RXC.161", HL7::optional, HL7::repetition_on);
    addObject<RXO>(CCM_I21_CCM_I21_RXO_162, "RXO.162", HL7::initialized, HL7::repetition_off);
    addObject<RXC>(CCM_I21_CCM_I21_RXC_165, "RXC.165", HL7::optional, HL7::repetition_on);
    addObject<RXE>(CCM_I21_CCM_I21_RXE_166, "RXE.166", HL7::initialized, HL7::repetition_off);
    addObject<RXR>(CCM_I21_CCM_I21_RXR_170, "RXR.170", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CCM_I21_CCM_I21_OBX_171, "OBX.171", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_172, "PRT.172", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCM_I21_CCM_I21_OBX_173, "OBX.173", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_174, "PRT.174", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCM_I21_CCM_I21_OBX_175, "OBX.175", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_176, "PRT.176", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCM_I21_CCM_I21_OBX_177, "OBX.177", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_178, "PRT.178", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCM_I21_CCM_I21_OBX_179, "OBX.179", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_180, "PRT.180", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCM_I21_CCM_I21_OBX_181, "OBX.181", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_182, "PRT.182", HL7::optional, HL7::repetition_on);
    addObject<PTH>(CCM_I21_CCM_I21_PTH_185, "PTH.185", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(CCM_I21_CCM_I21_VAR_186, "VAR.186", HL7::optional, HL7::repetition_on);
    addObject<VAR>(CCM_I21_CCM_I21_VAR_188, "VAR.188", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CCM_I21_CCM_I21_PRD_189, "PRD.189", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_190, "PRT.190", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(CCM_I21_CCM_I21_VAR_192, "VAR.192", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCM_I21_CCM_I21_OBX_193, "OBX.193", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_194, "PRT.194", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CCM_I21_CCM_I21_PRD_195, "PRD.195", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_196, "PRT.196", HL7::initialized, HL7::repetition_off);
    addObject<PV1>(CCM_I21_CCM_I21_PV1_197, "PV1.197", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(CCM_I21_CCM_I21_PV2_198, "PV2.198", HL7::optional, HL7::repetition_off);
    addObject<PRB>(CCM_I21_CCM_I21_PRB_201, "PRB.201", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(CCM_I21_CCM_I21_VAR_202, "VAR.202", HL7::optional, HL7::repetition_on);
    addObject<VAR>(CCM_I21_CCM_I21_VAR_204, "VAR.204", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CCM_I21_CCM_I21_PRD_205, "PRD.205", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_206, "PRT.206", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(CCM_I21_CCM_I21_ROL_207, "ROL.207", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(CCM_I21_CCM_I21_VAR_209, "VAR.209", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCM_I21_CCM_I21_OBX_210, "OBX.210", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_211, "PRT.211", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CCM_I21_CCM_I21_PRD_212, "PRD.212", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCM_I21_CCM_I21_PRT_213, "PRT.213", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(CCM_I21_CCM_I21_ROL_214, "ROL.214", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, CCM_I21_CCM_I21_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, CCM_I21_CCM_I21_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, CCM_I21_CCM_I21_UAC_3);
  }
  PID* getPID_4(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, CCM_I21_CCM_I21_PID_4);
  }
  PD1* getPD1_5(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, CCM_I21_CCM_I21_PD1_5);
  }
  NK1* getNK1_6(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, CCM_I21_CCM_I21_NK1_6);
  }
  REL* getREL_15(size_t index = 0) {
    return (REL*)this->getObjectSafe(index, CCM_I21_CCM_I21_REL_15);
  }
  SCH* getSCH_17(size_t index = 0) {
    return (SCH*)this->getObjectSafe(index, CCM_I21_CCM_I21_SCH_17);
  }
  RGS* getRGS_19(size_t index = 0) {
    return (RGS*)this->getObjectSafe(index, CCM_I21_CCM_I21_RGS_19);
  }
  AIG* getAIG_22(size_t index = 0) {
    return (AIG*)this->getObjectSafe(index, CCM_I21_CCM_I21_AIG_22);
  }
  AIL* getAIL_23(size_t index = 0) {
    return (AIL*)this->getObjectSafe(index, CCM_I21_CCM_I21_AIL_23);
  }
  AIP* getAIP_24(size_t index = 0) {
    return (AIP*)this->getObjectSafe(index, CCM_I21_CCM_I21_AIP_24);
  }
  AIS* getAIS_25(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, CCM_I21_CCM_I21_AIS_25);
  }
  AIG* getAIG_26(size_t index = 0) {
    return (AIG*)this->getObjectSafe(index, CCM_I21_CCM_I21_AIG_26);
  }
  AIL* getAIL_27(size_t index = 0) {
    return (AIL*)this->getObjectSafe(index, CCM_I21_CCM_I21_AIL_27);
  }
  AIP* getAIP_28(size_t index = 0) {
    return (AIP*)this->getObjectSafe(index, CCM_I21_CCM_I21_AIP_28);
  }
  AIS* getAIS_29(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, CCM_I21_CCM_I21_AIS_29);
  }
  OBX* getOBX_30(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCM_I21_CCM_I21_OBX_30);
  }
  PRT* getPRT_31(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_31);
  }
  CTI* getCTI_34(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, CCM_I21_CCM_I21_CTI_34);
  }
  ORC* getORC_35(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, CCM_I21_CCM_I21_ORC_35);
  }
  ACC* getACC_38(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, CCM_I21_CCM_I21_ACC_38);
  }
  AL1* getAL1_39(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, CCM_I21_CCM_I21_AL1_39);
  }
  DB1* getDB1_40(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, CCM_I21_CCM_I21_DB1_40);
  }
  DG1* getDG1_41(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, CCM_I21_CCM_I21_DG1_41);
  }
  DRG* getDRG_42(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, CCM_I21_CCM_I21_DRG_42);
  }
  IAM* getIAM_43(size_t index = 0) {
    return (IAM*)this->getObjectSafe(index, CCM_I21_CCM_I21_IAM_43);
  }
  OBR* getOBR_44(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, CCM_I21_CCM_I21_OBR_44);
  }
  ODS* getODS_45(size_t index = 0) {
    return (ODS*)this->getObjectSafe(index, CCM_I21_CCM_I21_ODS_45);
  }
  PDA* getPDA_46(size_t index = 0) {
    return (PDA*)this->getObjectSafe(index, CCM_I21_CCM_I21_PDA_46);
  }
  PR1* getPR1_47(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, CCM_I21_CCM_I21_PR1_47);
  }
  PRT* getPRT_48(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_48);
  }
  RF1* getRF1_49(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, CCM_I21_CCM_I21_RF1_49);
  }
  RMI* getRMI_50(size_t index = 0) {
    return (RMI*)this->getObjectSafe(index, CCM_I21_CCM_I21_RMI_50);
  }
  ACC* getACC_51(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, CCM_I21_CCM_I21_ACC_51);
  }
  AL1* getAL1_52(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, CCM_I21_CCM_I21_AL1_52);
  }
  DB1* getDB1_53(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, CCM_I21_CCM_I21_DB1_53);
  }
  DG1* getDG1_54(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, CCM_I21_CCM_I21_DG1_54);
  }
  DRG* getDRG_55(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, CCM_I21_CCM_I21_DRG_55);
  }
  IAM* getIAM_56(size_t index = 0) {
    return (IAM*)this->getObjectSafe(index, CCM_I21_CCM_I21_IAM_56);
  }
  OBR* getOBR_57(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, CCM_I21_CCM_I21_OBR_57);
  }
  ODS* getODS_58(size_t index = 0) {
    return (ODS*)this->getObjectSafe(index, CCM_I21_CCM_I21_ODS_58);
  }
  PDA* getPDA_59(size_t index = 0) {
    return (PDA*)this->getObjectSafe(index, CCM_I21_CCM_I21_PDA_59);
  }
  PR1* getPR1_60(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, CCM_I21_CCM_I21_PR1_60);
  }
  PRT* getPRT_61(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_61);
  }
  RF1* getRF1_62(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, CCM_I21_CCM_I21_RF1_62);
  }
  RMI* getRMI_63(size_t index = 0) {
    return (RMI*)this->getObjectSafe(index, CCM_I21_CCM_I21_RMI_63);
  }
  OBX* getOBX_64(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCM_I21_CCM_I21_OBX_64);
  }
  PRT* getPRT_65(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_65);
  }
  VAR* getVAR_69(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCM_I21_CCM_I21_VAR_69);
  }
  ACC* getACC_70(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, CCM_I21_CCM_I21_ACC_70);
  }
  AL1* getAL1_71(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, CCM_I21_CCM_I21_AL1_71);
  }
  DB1* getDB1_72(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, CCM_I21_CCM_I21_DB1_72);
  }
  DG1* getDG1_73(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, CCM_I21_CCM_I21_DG1_73);
  }
  DRG* getDRG_74(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, CCM_I21_CCM_I21_DRG_74);
  }
  IAM* getIAM_75(size_t index = 0) {
    return (IAM*)this->getObjectSafe(index, CCM_I21_CCM_I21_IAM_75);
  }
  OBR* getOBR_76(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, CCM_I21_CCM_I21_OBR_76);
  }
  ODS* getODS_77(size_t index = 0) {
    return (ODS*)this->getObjectSafe(index, CCM_I21_CCM_I21_ODS_77);
  }
  PDA* getPDA_78(size_t index = 0) {
    return (PDA*)this->getObjectSafe(index, CCM_I21_CCM_I21_PDA_78);
  }
  PR1* getPR1_79(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, CCM_I21_CCM_I21_PR1_79);
  }
  PRT* getPRT_80(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_80);
  }
  RF1* getRF1_81(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, CCM_I21_CCM_I21_RF1_81);
  }
  RMI* getRMI_82(size_t index = 0) {
    return (RMI*)this->getObjectSafe(index, CCM_I21_CCM_I21_RMI_82);
  }
  ACC* getACC_83(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, CCM_I21_CCM_I21_ACC_83);
  }
  AL1* getAL1_84(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, CCM_I21_CCM_I21_AL1_84);
  }
  DB1* getDB1_85(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, CCM_I21_CCM_I21_DB1_85);
  }
  DG1* getDG1_86(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, CCM_I21_CCM_I21_DG1_86);
  }
  DRG* getDRG_87(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, CCM_I21_CCM_I21_DRG_87);
  }
  IAM* getIAM_88(size_t index = 0) {
    return (IAM*)this->getObjectSafe(index, CCM_I21_CCM_I21_IAM_88);
  }
  OBR* getOBR_89(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, CCM_I21_CCM_I21_OBR_89);
  }
  ODS* getODS_90(size_t index = 0) {
    return (ODS*)this->getObjectSafe(index, CCM_I21_CCM_I21_ODS_90);
  }
  PDA* getPDA_91(size_t index = 0) {
    return (PDA*)this->getObjectSafe(index, CCM_I21_CCM_I21_PDA_91);
  }
  PR1* getPR1_92(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, CCM_I21_CCM_I21_PR1_92);
  }
  PRT* getPRT_93(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_93);
  }
  RF1* getRF1_94(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, CCM_I21_CCM_I21_RF1_94);
  }
  RMI* getRMI_95(size_t index = 0) {
    return (RMI*)this->getObjectSafe(index, CCM_I21_CCM_I21_RMI_95);
  }
  OBX* getOBX_96(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCM_I21_CCM_I21_OBX_96);
  }
  PRT* getPRT_97(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_97);
  }
  ACC* getACC_98(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, CCM_I21_CCM_I21_ACC_98);
  }
  AL1* getAL1_99(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, CCM_I21_CCM_I21_AL1_99);
  }
  DB1* getDB1_100(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, CCM_I21_CCM_I21_DB1_100);
  }
  DG1* getDG1_101(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, CCM_I21_CCM_I21_DG1_101);
  }
  DRG* getDRG_102(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, CCM_I21_CCM_I21_DRG_102);
  }
  IAM* getIAM_103(size_t index = 0) {
    return (IAM*)this->getObjectSafe(index, CCM_I21_CCM_I21_IAM_103);
  }
  OBR* getOBR_104(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, CCM_I21_CCM_I21_OBR_104);
  }
  ODS* getODS_105(size_t index = 0) {
    return (ODS*)this->getObjectSafe(index, CCM_I21_CCM_I21_ODS_105);
  }
  PDA* getPDA_106(size_t index = 0) {
    return (PDA*)this->getObjectSafe(index, CCM_I21_CCM_I21_PDA_106);
  }
  PR1* getPR1_107(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, CCM_I21_CCM_I21_PR1_107);
  }
  PRT* getPRT_108(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_108);
  }
  RF1* getRF1_109(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, CCM_I21_CCM_I21_RF1_109);
  }
  RMI* getRMI_110(size_t index = 0) {
    return (RMI*)this->getObjectSafe(index, CCM_I21_CCM_I21_RMI_110);
  }
  OBX* getOBX_111(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCM_I21_CCM_I21_OBX_111);
  }
  PRT* getPRT_112(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_112);
  }
  PRD* getPRD_113(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRD_113);
  }
  PRT* getPRT_114(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_114);
  }
  ROL* getROL_115(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, CCM_I21_CCM_I21_ROL_115);
  }
  GOL* getGOL_118(size_t index = 0) {
    return (GOL*)this->getObjectSafe(index, CCM_I21_CCM_I21_GOL_118);
  }
  VAR* getVAR_119(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCM_I21_CCM_I21_VAR_119);
  }
  VAR* getVAR_121(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCM_I21_CCM_I21_VAR_121);
  }
  PRD* getPRD_122(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRD_122);
  }
  PRT* getPRT_123(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_123);
  }
  ROL* getROL_124(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, CCM_I21_CCM_I21_ROL_124);
  }
  VAR* getVAR_126(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCM_I21_CCM_I21_VAR_126);
  }
  OBX* getOBX_127(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCM_I21_CCM_I21_OBX_127);
  }
  PRT* getPRT_128(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_128);
  }
  PRD* getPRD_129(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRD_129);
  }
  PRT* getPRT_130(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_130);
  }
  ROL* getROL_131(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, CCM_I21_CCM_I21_ROL_131);
  }
  IN1* getIN1_132(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, CCM_I21_CCM_I21_IN1_132);
  }
  IN2* getIN2_133(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, CCM_I21_CCM_I21_IN2_133);
  }
  IN3* getIN3_134(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, CCM_I21_CCM_I21_IN3_134);
  }
  CTI* getCTI_138(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, CCM_I21_CCM_I21_CTI_138);
  }
  ORC* getORC_139(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, CCM_I21_CCM_I21_ORC_139);
  }
  RXC* getRXC_141(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, CCM_I21_CCM_I21_RXC_141);
  }
  RXO* getRXO_142(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, CCM_I21_CCM_I21_RXO_142);
  }
  OBX* getOBX_144(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCM_I21_CCM_I21_OBX_144);
  }
  PRT* getPRT_145(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_145);
  }
  RXC* getRXC_147(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, CCM_I21_CCM_I21_RXC_147);
  }
  RXO* getRXO_148(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, CCM_I21_CCM_I21_RXO_148);
  }
  RXC* getRXC_151(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, CCM_I21_CCM_I21_RXC_151);
  }
  RXE* getRXE_152(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, CCM_I21_CCM_I21_RXE_152);
  }
  OBX* getOBX_154(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCM_I21_CCM_I21_OBX_154);
  }
  PRT* getPRT_155(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_155);
  }
  OBX* getOBX_156(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCM_I21_CCM_I21_OBX_156);
  }
  PRT* getPRT_157(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_157);
  }
  OBX* getOBX_158(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCM_I21_CCM_I21_OBX_158);
  }
  PRT* getPRT_159(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_159);
  }
  RXC* getRXC_161(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, CCM_I21_CCM_I21_RXC_161);
  }
  RXO* getRXO_162(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, CCM_I21_CCM_I21_RXO_162);
  }
  RXC* getRXC_165(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, CCM_I21_CCM_I21_RXC_165);
  }
  RXE* getRXE_166(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, CCM_I21_CCM_I21_RXE_166);
  }
  RXR* getRXR_170(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, CCM_I21_CCM_I21_RXR_170);
  }
  OBX* getOBX_171(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCM_I21_CCM_I21_OBX_171);
  }
  PRT* getPRT_172(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_172);
  }
  OBX* getOBX_173(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCM_I21_CCM_I21_OBX_173);
  }
  PRT* getPRT_174(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_174);
  }
  OBX* getOBX_175(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCM_I21_CCM_I21_OBX_175);
  }
  PRT* getPRT_176(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_176);
  }
  OBX* getOBX_177(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCM_I21_CCM_I21_OBX_177);
  }
  PRT* getPRT_178(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_178);
  }
  OBX* getOBX_179(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCM_I21_CCM_I21_OBX_179);
  }
  PRT* getPRT_180(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_180);
  }
  OBX* getOBX_181(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCM_I21_CCM_I21_OBX_181);
  }
  PRT* getPRT_182(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_182);
  }
  PTH* getPTH_185(size_t index = 0) {
    return (PTH*)this->getObjectSafe(index, CCM_I21_CCM_I21_PTH_185);
  }
  VAR* getVAR_186(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCM_I21_CCM_I21_VAR_186);
  }
  VAR* getVAR_188(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCM_I21_CCM_I21_VAR_188);
  }
  PRD* getPRD_189(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRD_189);
  }
  PRT* getPRT_190(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_190);
  }
  VAR* getVAR_192(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCM_I21_CCM_I21_VAR_192);
  }
  OBX* getOBX_193(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCM_I21_CCM_I21_OBX_193);
  }
  PRT* getPRT_194(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_194);
  }
  PRD* getPRD_195(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRD_195);
  }
  PRT* getPRT_196(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_196);
  }
  PV1* getPV1_197(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, CCM_I21_CCM_I21_PV1_197);
  }
  PV2* getPV2_198(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, CCM_I21_CCM_I21_PV2_198);
  }
  PRB* getPRB_201(size_t index = 0) {
    return (PRB*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRB_201);
  }
  VAR* getVAR_202(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCM_I21_CCM_I21_VAR_202);
  }
  VAR* getVAR_204(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCM_I21_CCM_I21_VAR_204);
  }
  PRD* getPRD_205(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRD_205);
  }
  PRT* getPRT_206(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_206);
  }
  ROL* getROL_207(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, CCM_I21_CCM_I21_ROL_207);
  }
  VAR* getVAR_209(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCM_I21_CCM_I21_VAR_209);
  }
  OBX* getOBX_210(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCM_I21_CCM_I21_OBX_210);
  }
  PRT* getPRT_211(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_211);
  }
  PRD* getPRD_212(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRD_212);
  }
  PRT* getPRT_213(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCM_I21_CCM_I21_PRT_213);
  }
  ROL* getROL_214(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, CCM_I21_CCM_I21_ROL_214);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_4(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PID_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_5(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PD1_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_6(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_NK1_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isREL_15(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_REL_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSCH_17(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_SCH_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRGS_19(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_RGS_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIG_22(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_AIG_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIL_23(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_AIL_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIP_24(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_AIP_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIS_25(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_AIS_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIG_26(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_AIG_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIL_27(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_AIL_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIP_28(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_AIP_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIS_29(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_AIS_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_30(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_OBX_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_31(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_34(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_CTI_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_35(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_ORC_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_38(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_ACC_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_39(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_AL1_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_40(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_DB1_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_41(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_DG1_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_42(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_DRG_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIAM_43(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_IAM_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_44(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_OBR_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODS_45(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_ODS_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPDA_46(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PDA_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_47(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PR1_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_48(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_49(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_RF1_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRMI_50(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_RMI_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_51(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_ACC_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_52(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_AL1_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_53(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_DB1_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_54(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_DG1_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_55(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_DRG_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIAM_56(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_IAM_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_57(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_OBR_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODS_58(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_ODS_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPDA_59(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PDA_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_60(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PR1_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_61(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_62(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_RF1_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRMI_63(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_RMI_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_64(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_OBX_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_65(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_69(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_VAR_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_70(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_ACC_70) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_71(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_AL1_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_72(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_DB1_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_73(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_DG1_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_74(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_DRG_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIAM_75(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_IAM_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_76(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_OBR_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODS_77(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_ODS_77) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPDA_78(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PDA_78) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_79(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PR1_79) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_80(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_80) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_81(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_RF1_81) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRMI_82(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_RMI_82) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_83(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_ACC_83) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_84(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_AL1_84) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_85(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_DB1_85) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_86(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_DG1_86) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_87(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_DRG_87) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIAM_88(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_IAM_88) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_89(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_OBR_89) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODS_90(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_ODS_90) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPDA_91(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PDA_91) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_92(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PR1_92) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_93(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_93) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_94(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_RF1_94) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRMI_95(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_RMI_95) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_96(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_OBX_96) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_97(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_97) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_98(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_ACC_98) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_99(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_AL1_99) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_100(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_DB1_100) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_101(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_DG1_101) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_102(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_DRG_102) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIAM_103(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_IAM_103) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_104(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_OBR_104) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODS_105(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_ODS_105) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPDA_106(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PDA_106) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_107(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PR1_107) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_108(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_108) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_109(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_RF1_109) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRMI_110(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_RMI_110) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_111(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_OBX_111) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_112(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_112) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_113(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRD_113) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_114(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_114) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_115(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_ROL_115) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOL_118(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_GOL_118) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_119(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_VAR_119) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_121(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_VAR_121) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_122(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRD_122) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_123(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_123) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_124(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_ROL_124) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_126(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_VAR_126) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_127(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_OBX_127) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_128(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_128) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_129(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRD_129) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_130(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_130) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_131(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_ROL_131) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_132(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_IN1_132) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_133(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_IN2_133) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_134(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_IN3_134) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_138(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_CTI_138) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_139(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_ORC_139) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_141(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_RXC_141) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_142(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_RXO_142) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_144(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_OBX_144) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_145(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_145) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_147(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_RXC_147) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_148(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_RXO_148) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_151(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_RXC_151) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXE_152(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_RXE_152) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_154(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_OBX_154) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_155(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_155) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_156(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_OBX_156) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_157(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_157) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_158(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_OBX_158) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_159(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_159) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_161(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_RXC_161) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_162(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_RXO_162) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_165(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_RXC_165) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXE_166(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_RXE_166) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_170(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_RXR_170) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_171(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_OBX_171) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_172(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_172) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_173(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_OBX_173) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_174(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_174) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_175(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_OBX_175) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_176(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_176) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_177(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_OBX_177) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_178(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_178) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_179(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_OBX_179) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_180(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_180) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_181(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_OBX_181) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_182(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_182) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPTH_185(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PTH_185) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_186(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_VAR_186) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_188(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_VAR_188) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_189(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRD_189) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_190(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_190) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_192(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_VAR_192) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_193(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_OBX_193) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_194(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_194) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_195(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRD_195) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_196(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_196) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_197(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PV1_197) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_198(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PV2_198) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRB_201(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRB_201) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_202(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_VAR_202) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_204(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_VAR_204) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_205(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRD_205) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_206(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_206) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_207(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_ROL_207) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_209(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_VAR_209) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_210(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_OBX_210) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_211(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_211) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_212(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRD_212) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_213(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_PRT_213) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_214(size_t index = 0) {
    try {
      return this->getObject(index, CCM_I21_CCM_I21_ROL_214) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* CCM_I21_CCM_I21_ */
} /* namespace HL7_29 */
#endif /*  __CCM_I21_CCM_I21__29_H__ */
