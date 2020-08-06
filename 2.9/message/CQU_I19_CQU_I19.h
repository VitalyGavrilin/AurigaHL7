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


#ifndef __CQU_I19_CQU_I19__29_H__
#define __CQU_I19_CQU_I19__29_H__

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
#include "../segment/ERR.h"
#include "../segment/GOL.h"
#include "../segment/IAM.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IN3.h"
#include "../segment/MSA.h"
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
struct CQU_I19_CQU_I19_PROVIDER_CONTACT; /* PROVIDER_CONTACT */
struct CQU_I19_CQU_I19_PATIENT; /* PATIENT */
struct CQU_I19_CQU_I19_INSURANCE; /* INSURANCE */
struct CQU_I19_CQU_I19_APPOINTMENT_HISTORY; /* APPOINTMENT_HISTORY */
struct CQU_I19_CQU_I19_CLINICAL_HISTORY; /* CLINICAL_HISTORY */
struct CQU_I19_CQU_I19_PATIENT_VISITS; /* PATIENT_VISITS */
struct CQU_I19_CQU_I19_MEDICATION_HISTORY; /* MEDICATION_HISTORY */
struct CQU_I19_CQU_I19_PROBLEM; /* PROBLEM */
struct CQU_I19_CQU_I19_GOAL; /* GOAL */
struct CQU_I19_CQU_I19_PATHWAY; /* PATHWAY */
struct CQU_I19_CQU_I19_RESOURCES; /* RESOURCES */
struct CQU_I19_CQU_I19_RESOURCE_DETAIL; /* RESOURCE_DETAIL */
struct CQU_I19_CQU_I19_RESOURCE_OBJECT; /* RESOURCE_OBJECT */
struct CQU_I19_CQU_I19_RESOURCE_OBSERVATION; /* RESOURCE_OBSERVATION */
struct CQU_I19_CQU_I19_CLINICAL_HISTORY_DETAIL; /* CLINICAL_HISTORY_DETAIL */
struct CQU_I19_CQU_I19_PARTICIPATION_CLINICAL_HISTORY; /* PARTICIPATION_CLINICAL_HISTORY */
struct CQU_I19_CQU_I19_CLINICAL_HISTORY_OBJECT; /* CLINICAL_HISTORY_OBJECT */
struct CQU_I19_CQU_I19_CLINICAL_HISTORY_OBSERVATION; /* CLINICAL_HISTORY_OBSERVATION */
struct CQU_I19_CQU_I19_CLINICAL_HISTORY_OBJECT; /* CLINICAL_HISTORY_OBJECT */
struct CQU_I19_CQU_I19_CLINICAL_HISTORY_OBSERVATION; /* CLINICAL_HISTORY_OBSERVATION */
struct CQU_I19_CQU_I19_PARTICIPATION_CLINICAL_HISTORY_OBJECT; /* PARTICIPATION_CLINICAL_HISTORY_OBJECT */
struct CQU_I19_CQU_I19_PARTICIPATION_GOAL; /* PARTICIPATION_GOAL */
struct CQU_I19_CQU_I19_GOAL_OBSERVATION; /* GOAL_OBSERVATION */
struct CQU_I19_CQU_I19_PARTICIPATION_GOAL_OBJECT; /* PARTICIPATION_GOAL_OBJECT */
struct CQU_I19_CQU_I19_PARTICIPATION_GOAL_OBJECT; /* PARTICIPATION_GOAL_OBJECT */
struct CQU_I19_CQU_I19_MEDICATION_ORDER_DETAIL; /* MEDICATION_ORDER_DETAIL */
struct CQU_I19_CQU_I19_MEDICATION_ENCODING_DETAIL; /* MEDICATION_ENCODING_DETAIL */
struct CQU_I19_CQU_I19_MEDICATION_ADMINISTRATION_DETAIL; /* MEDICATION_ADMINISTRATION_DETAIL */
struct CQU_I19_CQU_I19_MEDICATION_ORDER_OBSERVATION; /* MEDICATION_ORDER_OBSERVATION */
struct CQU_I19_CQU_I19_MEDICATION_ORDER_OBSERVATION; /* MEDICATION_ORDER_OBSERVATION */
struct CQU_I19_CQU_I19_MEDICATION_ENCODING_OBSERVATION; /* MEDICATION_ENCODING_OBSERVATION */
struct CQU_I19_CQU_I19_MEDICATION_ORDER_OBSERVATION; /* MEDICATION_ORDER_OBSERVATION */
struct CQU_I19_CQU_I19_MEDICATION_ENCODING_OBSERVATION; /* MEDICATION_ENCODING_OBSERVATION */
struct CQU_I19_CQU_I19_MEDICATION_ADMINISTRATION_OBSERVATION; /* MEDICATION_ADMINISTRATION_OBSERVATION */
struct CQU_I19_CQU_I19_PARTICIPATION_PATHWAY; /* PARTICIPATION_PATHWAY */
struct CQU_I19_CQU_I19_PATHWAY_OBSERVATION; /* PATHWAY_OBSERVATION */
struct CQU_I19_CQU_I19_PARTICIPATION_PATHWAY_OBJECT; /* PARTICIPATION_PATHWAY_OBJECT */
struct CQU_I19_CQU_I19_PARTICIPATION_PATHWAY_OBJECT; /* PARTICIPATION_PATHWAY_OBJECT */
struct CQU_I19_CQU_I19_PARTICIPATION_PROBLEM; /* PARTICIPATION_PROBLEM */
struct CQU_I19_CQU_I19_PROBLEM_OBSERVATION; /* PROBLEM_OBSERVATION */
struct CQU_I19_CQU_I19_PARTICIPATION_PROBLEM_OBJECT; /* PARTICIPATION_PROBLEM_OBJECT */
struct CQU_I19_CQU_I19_PARTICIPATION_PROBLEM_OBJECT; /* PARTICIPATION_PROBLEM_OBJECT */

/*  */
struct CQU_I19_CQU_I19 : public HL7Message {
  CQU_I19_CQU_I19() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    CQU_I19_CQU_I19_MSH_1,
    CQU_I19_CQU_I19_SFT_2,
    CQU_I19_CQU_I19_UAC_3,
    CQU_I19_CQU_I19_MSA_4,
    CQU_I19_CQU_I19_ERR_5,
    CQU_I19_CQU_I19_RF1_6,
    CQU_I19_CQU_I19_NK1_9,
    CQU_I19_CQU_I19_REL_18,
    CQU_I19_CQU_I19_SCH_20,
    CQU_I19_CQU_I19_RGS_22,
    CQU_I19_CQU_I19_AIG_25,
    CQU_I19_CQU_I19_AIL_26,
    CQU_I19_CQU_I19_AIP_27,
    CQU_I19_CQU_I19_AIS_28,
    CQU_I19_CQU_I19_AIG_29,
    CQU_I19_CQU_I19_AIL_30,
    CQU_I19_CQU_I19_AIP_31,
    CQU_I19_CQU_I19_AIS_32,
    CQU_I19_CQU_I19_OBX_33,
    CQU_I19_CQU_I19_PRT_34,
    CQU_I19_CQU_I19_CTI_37,
    CQU_I19_CQU_I19_ORC_38,
    CQU_I19_CQU_I19_ACC_41,
    CQU_I19_CQU_I19_AL1_42,
    CQU_I19_CQU_I19_DB1_43,
    CQU_I19_CQU_I19_DG1_44,
    CQU_I19_CQU_I19_DRG_45,
    CQU_I19_CQU_I19_IAM_46,
    CQU_I19_CQU_I19_OBR_47,
    CQU_I19_CQU_I19_ODS_48,
    CQU_I19_CQU_I19_PDA_49,
    CQU_I19_CQU_I19_PR1_50,
    CQU_I19_CQU_I19_PRT_51,
    CQU_I19_CQU_I19_RF1_52,
    CQU_I19_CQU_I19_RMI_53,
    CQU_I19_CQU_I19_ACC_54,
    CQU_I19_CQU_I19_AL1_55,
    CQU_I19_CQU_I19_DB1_56,
    CQU_I19_CQU_I19_DG1_57,
    CQU_I19_CQU_I19_DRG_58,
    CQU_I19_CQU_I19_IAM_59,
    CQU_I19_CQU_I19_OBR_60,
    CQU_I19_CQU_I19_ODS_61,
    CQU_I19_CQU_I19_PDA_62,
    CQU_I19_CQU_I19_PR1_63,
    CQU_I19_CQU_I19_PRT_64,
    CQU_I19_CQU_I19_RF1_65,
    CQU_I19_CQU_I19_RMI_66,
    CQU_I19_CQU_I19_OBX_67,
    CQU_I19_CQU_I19_PRT_68,
    CQU_I19_CQU_I19_VAR_72,
    CQU_I19_CQU_I19_ACC_73,
    CQU_I19_CQU_I19_AL1_74,
    CQU_I19_CQU_I19_DB1_75,
    CQU_I19_CQU_I19_DG1_76,
    CQU_I19_CQU_I19_DRG_77,
    CQU_I19_CQU_I19_IAM_78,
    CQU_I19_CQU_I19_OBR_79,
    CQU_I19_CQU_I19_ODS_80,
    CQU_I19_CQU_I19_PDA_81,
    CQU_I19_CQU_I19_PR1_82,
    CQU_I19_CQU_I19_PRT_83,
    CQU_I19_CQU_I19_RF1_84,
    CQU_I19_CQU_I19_RMI_85,
    CQU_I19_CQU_I19_ACC_86,
    CQU_I19_CQU_I19_AL1_87,
    CQU_I19_CQU_I19_DB1_88,
    CQU_I19_CQU_I19_DG1_89,
    CQU_I19_CQU_I19_DRG_90,
    CQU_I19_CQU_I19_IAM_91,
    CQU_I19_CQU_I19_OBR_92,
    CQU_I19_CQU_I19_ODS_93,
    CQU_I19_CQU_I19_PDA_94,
    CQU_I19_CQU_I19_PR1_95,
    CQU_I19_CQU_I19_PRT_96,
    CQU_I19_CQU_I19_RF1_97,
    CQU_I19_CQU_I19_RMI_98,
    CQU_I19_CQU_I19_OBX_99,
    CQU_I19_CQU_I19_PRT_100,
    CQU_I19_CQU_I19_ACC_101,
    CQU_I19_CQU_I19_AL1_102,
    CQU_I19_CQU_I19_DB1_103,
    CQU_I19_CQU_I19_DG1_104,
    CQU_I19_CQU_I19_DRG_105,
    CQU_I19_CQU_I19_IAM_106,
    CQU_I19_CQU_I19_OBR_107,
    CQU_I19_CQU_I19_ODS_108,
    CQU_I19_CQU_I19_PDA_109,
    CQU_I19_CQU_I19_PR1_110,
    CQU_I19_CQU_I19_PRT_111,
    CQU_I19_CQU_I19_RF1_112,
    CQU_I19_CQU_I19_RMI_113,
    CQU_I19_CQU_I19_OBX_114,
    CQU_I19_CQU_I19_PRT_115,
    CQU_I19_CQU_I19_PRD_116,
    CQU_I19_CQU_I19_PRT_117,
    CQU_I19_CQU_I19_ROL_118,
    CQU_I19_CQU_I19_GOL_121,
    CQU_I19_CQU_I19_VAR_122,
    CQU_I19_CQU_I19_VAR_124,
    CQU_I19_CQU_I19_PRD_125,
    CQU_I19_CQU_I19_PRT_126,
    CQU_I19_CQU_I19_ROL_127,
    CQU_I19_CQU_I19_VAR_129,
    CQU_I19_CQU_I19_OBX_130,
    CQU_I19_CQU_I19_PRT_131,
    CQU_I19_CQU_I19_PRD_132,
    CQU_I19_CQU_I19_PRT_133,
    CQU_I19_CQU_I19_ROL_134,
    CQU_I19_CQU_I19_IN1_135,
    CQU_I19_CQU_I19_IN2_136,
    CQU_I19_CQU_I19_IN3_137,
    CQU_I19_CQU_I19_CTI_141,
    CQU_I19_CQU_I19_ORC_142,
    CQU_I19_CQU_I19_PRT_144,
    CQU_I19_CQU_I19_RXC_145,
    CQU_I19_CQU_I19_RXO_146,
    CQU_I19_CQU_I19_OBX_148,
    CQU_I19_CQU_I19_PRT_149,
    CQU_I19_CQU_I19_PRT_151,
    CQU_I19_CQU_I19_RXC_152,
    CQU_I19_CQU_I19_RXO_153,
    CQU_I19_CQU_I19_PRT_156,
    CQU_I19_CQU_I19_RXC_157,
    CQU_I19_CQU_I19_RXE_158,
    CQU_I19_CQU_I19_OBX_160,
    CQU_I19_CQU_I19_PRT_161,
    CQU_I19_CQU_I19_OBX_162,
    CQU_I19_CQU_I19_PRT_163,
    CQU_I19_CQU_I19_OBX_164,
    CQU_I19_CQU_I19_PRT_165,
    CQU_I19_CQU_I19_PRT_167,
    CQU_I19_CQU_I19_RXC_168,
    CQU_I19_CQU_I19_RXO_169,
    CQU_I19_CQU_I19_PRT_172,
    CQU_I19_CQU_I19_RXC_173,
    CQU_I19_CQU_I19_RXE_174,
    CQU_I19_CQU_I19_PRT_177,
    CQU_I19_CQU_I19_RXR_179,
    CQU_I19_CQU_I19_OBX_180,
    CQU_I19_CQU_I19_PRT_181,
    CQU_I19_CQU_I19_OBX_182,
    CQU_I19_CQU_I19_PRT_183,
    CQU_I19_CQU_I19_OBX_184,
    CQU_I19_CQU_I19_PRT_185,
    CQU_I19_CQU_I19_OBX_186,
    CQU_I19_CQU_I19_PRT_187,
    CQU_I19_CQU_I19_OBX_188,
    CQU_I19_CQU_I19_PRT_189,
    CQU_I19_CQU_I19_OBX_190,
    CQU_I19_CQU_I19_PRT_191,
    CQU_I19_CQU_I19_PTH_194,
    CQU_I19_CQU_I19_VAR_195,
    CQU_I19_CQU_I19_VAR_197,
    CQU_I19_CQU_I19_PRD_198,
    CQU_I19_CQU_I19_PRT_199,
    CQU_I19_CQU_I19_ROL_200,
    CQU_I19_CQU_I19_VAR_202,
    CQU_I19_CQU_I19_OBX_203,
    CQU_I19_CQU_I19_PRT_204,
    CQU_I19_CQU_I19_PRD_205,
    CQU_I19_CQU_I19_PRT_206,
    CQU_I19_CQU_I19_ROL_207,
    CQU_I19_CQU_I19_PD1_208,
    CQU_I19_CQU_I19_PID_209,
    CQU_I19_CQU_I19_PV1_210,
    CQU_I19_CQU_I19_PV2_211,
    CQU_I19_CQU_I19_PRB_214,
    CQU_I19_CQU_I19_VAR_215,
    CQU_I19_CQU_I19_VAR_217,
    CQU_I19_CQU_I19_PRD_218,
    CQU_I19_CQU_I19_PRT_219,
    CQU_I19_CQU_I19_ROL_220,
    CQU_I19_CQU_I19_VAR_222,
    CQU_I19_CQU_I19_OBX_223,
    CQU_I19_CQU_I19_PRT_224,
    CQU_I19_CQU_I19_PRD_225,
    CQU_I19_CQU_I19_PRT_226,
    CQU_I19_CQU_I19_ROL_227,
    CQU_I19_CQU_I19_CTD_228,
    CQU_I19_CQU_I19_PRD_229,
    FIELD_ID_MAX
  };

  const char* className() const { return "CQU_I19_CQU_I19"; }
  CQU_I19_CQU_I19* create() const { return new CQU_I19_CQU_I19(); }

 private:
  /* Initialize object */
  void init() {
    setName("CQU_I19_CQU_I19");
    addObject<MSH>(CQU_I19_CQU_I19_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(CQU_I19_CQU_I19_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(CQU_I19_CQU_I19_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MSA>(CQU_I19_CQU_I19_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(CQU_I19_CQU_I19_ERR_5, "ERR.5", HL7::optional, HL7::repetition_on);
    addObject<RF1>(CQU_I19_CQU_I19_RF1_6, "RF1.6", HL7::initialized, HL7::repetition_off);
    addObject<NK1>(CQU_I19_CQU_I19_NK1_9, "NK1.9", HL7::optional, HL7::repetition_on);
    addObject<REL>(CQU_I19_CQU_I19_REL_18, "REL.18", HL7::optional, HL7::repetition_on);
    addObject<SCH>(CQU_I19_CQU_I19_SCH_20, "SCH.20", HL7::initialized, HL7::repetition_off);
    addObject<RGS>(CQU_I19_CQU_I19_RGS_22, "RGS.22", HL7::initialized, HL7::repetition_off);
    addObject<AIG>(CQU_I19_CQU_I19_AIG_25, "AIG.25", HL7::initialized, HL7::repetition_off);
    addObject<AIL>(CQU_I19_CQU_I19_AIL_26, "AIL.26", HL7::initialized, HL7::repetition_off);
    addObject<AIP>(CQU_I19_CQU_I19_AIP_27, "AIP.27", HL7::initialized, HL7::repetition_off);
    addObject<AIS>(CQU_I19_CQU_I19_AIS_28, "AIS.28", HL7::initialized, HL7::repetition_off);
    addObject<AIG>(CQU_I19_CQU_I19_AIG_29, "AIG.29", HL7::initialized, HL7::repetition_off);
    addObject<AIL>(CQU_I19_CQU_I19_AIL_30, "AIL.30", HL7::initialized, HL7::repetition_off);
    addObject<AIP>(CQU_I19_CQU_I19_AIP_31, "AIP.31", HL7::initialized, HL7::repetition_off);
    addObject<AIS>(CQU_I19_CQU_I19_AIS_32, "AIS.32", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CQU_I19_CQU_I19_OBX_33, "OBX.33", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_34, "PRT.34", HL7::optional, HL7::repetition_on);
    addObject<CTI>(CQU_I19_CQU_I19_CTI_37, "CTI.37", HL7::optional, HL7::repetition_on);
    addObject<ORC>(CQU_I19_CQU_I19_ORC_38, "ORC.38", HL7::initialized, HL7::repetition_off);
    addObject<ACC>(CQU_I19_CQU_I19_ACC_41, "ACC.41", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(CQU_I19_CQU_I19_AL1_42, "AL1.42", HL7::initialized, HL7::repetition_off);
    addObject<DB1>(CQU_I19_CQU_I19_DB1_43, "DB1.43", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(CQU_I19_CQU_I19_DG1_44, "DG1.44", HL7::initialized, HL7::repetition_off);
    addObject<DRG>(CQU_I19_CQU_I19_DRG_45, "DRG.45", HL7::initialized, HL7::repetition_off);
    addObject<IAM>(CQU_I19_CQU_I19_IAM_46, "IAM.46", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(CQU_I19_CQU_I19_OBR_47, "OBR.47", HL7::initialized, HL7::repetition_off);
    addObject<ODS>(CQU_I19_CQU_I19_ODS_48, "ODS.48", HL7::initialized, HL7::repetition_off);
    addObject<PDA>(CQU_I19_CQU_I19_PDA_49, "PDA.49", HL7::initialized, HL7::repetition_off);
    addObject<PR1>(CQU_I19_CQU_I19_PR1_50, "PR1.50", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_51, "PRT.51", HL7::optional, HL7::repetition_on);
    addObject<RF1>(CQU_I19_CQU_I19_RF1_52, "RF1.52", HL7::initialized, HL7::repetition_off);
    addObject<RMI>(CQU_I19_CQU_I19_RMI_53, "RMI.53", HL7::initialized, HL7::repetition_off);
    addObject<ACC>(CQU_I19_CQU_I19_ACC_54, "ACC.54", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(CQU_I19_CQU_I19_AL1_55, "AL1.55", HL7::initialized, HL7::repetition_off);
    addObject<DB1>(CQU_I19_CQU_I19_DB1_56, "DB1.56", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(CQU_I19_CQU_I19_DG1_57, "DG1.57", HL7::initialized, HL7::repetition_off);
    addObject<DRG>(CQU_I19_CQU_I19_DRG_58, "DRG.58", HL7::initialized, HL7::repetition_off);
    addObject<IAM>(CQU_I19_CQU_I19_IAM_59, "IAM.59", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(CQU_I19_CQU_I19_OBR_60, "OBR.60", HL7::initialized, HL7::repetition_off);
    addObject<ODS>(CQU_I19_CQU_I19_ODS_61, "ODS.61", HL7::initialized, HL7::repetition_off);
    addObject<PDA>(CQU_I19_CQU_I19_PDA_62, "PDA.62", HL7::initialized, HL7::repetition_off);
    addObject<PR1>(CQU_I19_CQU_I19_PR1_63, "PR1.63", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_64, "PRT.64", HL7::optional, HL7::repetition_on);
    addObject<RF1>(CQU_I19_CQU_I19_RF1_65, "RF1.65", HL7::initialized, HL7::repetition_off);
    addObject<RMI>(CQU_I19_CQU_I19_RMI_66, "RMI.66", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CQU_I19_CQU_I19_OBX_67, "OBX.67", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_68, "PRT.68", HL7::optional, HL7::repetition_on);
    addObject<VAR>(CQU_I19_CQU_I19_VAR_72, "VAR.72", HL7::optional, HL7::repetition_on);
    addObject<ACC>(CQU_I19_CQU_I19_ACC_73, "ACC.73", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(CQU_I19_CQU_I19_AL1_74, "AL1.74", HL7::initialized, HL7::repetition_off);
    addObject<DB1>(CQU_I19_CQU_I19_DB1_75, "DB1.75", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(CQU_I19_CQU_I19_DG1_76, "DG1.76", HL7::initialized, HL7::repetition_off);
    addObject<DRG>(CQU_I19_CQU_I19_DRG_77, "DRG.77", HL7::initialized, HL7::repetition_off);
    addObject<IAM>(CQU_I19_CQU_I19_IAM_78, "IAM.78", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(CQU_I19_CQU_I19_OBR_79, "OBR.79", HL7::initialized, HL7::repetition_off);
    addObject<ODS>(CQU_I19_CQU_I19_ODS_80, "ODS.80", HL7::initialized, HL7::repetition_off);
    addObject<PDA>(CQU_I19_CQU_I19_PDA_81, "PDA.81", HL7::initialized, HL7::repetition_off);
    addObject<PR1>(CQU_I19_CQU_I19_PR1_82, "PR1.82", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_83, "PRT.83", HL7::optional, HL7::repetition_on);
    addObject<RF1>(CQU_I19_CQU_I19_RF1_84, "RF1.84", HL7::initialized, HL7::repetition_off);
    addObject<RMI>(CQU_I19_CQU_I19_RMI_85, "RMI.85", HL7::initialized, HL7::repetition_off);
    addObject<ACC>(CQU_I19_CQU_I19_ACC_86, "ACC.86", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(CQU_I19_CQU_I19_AL1_87, "AL1.87", HL7::initialized, HL7::repetition_off);
    addObject<DB1>(CQU_I19_CQU_I19_DB1_88, "DB1.88", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(CQU_I19_CQU_I19_DG1_89, "DG1.89", HL7::initialized, HL7::repetition_off);
    addObject<DRG>(CQU_I19_CQU_I19_DRG_90, "DRG.90", HL7::initialized, HL7::repetition_off);
    addObject<IAM>(CQU_I19_CQU_I19_IAM_91, "IAM.91", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(CQU_I19_CQU_I19_OBR_92, "OBR.92", HL7::initialized, HL7::repetition_off);
    addObject<ODS>(CQU_I19_CQU_I19_ODS_93, "ODS.93", HL7::initialized, HL7::repetition_off);
    addObject<PDA>(CQU_I19_CQU_I19_PDA_94, "PDA.94", HL7::initialized, HL7::repetition_off);
    addObject<PR1>(CQU_I19_CQU_I19_PR1_95, "PR1.95", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_96, "PRT.96", HL7::optional, HL7::repetition_on);
    addObject<RF1>(CQU_I19_CQU_I19_RF1_97, "RF1.97", HL7::initialized, HL7::repetition_off);
    addObject<RMI>(CQU_I19_CQU_I19_RMI_98, "RMI.98", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CQU_I19_CQU_I19_OBX_99, "OBX.99", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_100, "PRT.100", HL7::optional, HL7::repetition_on);
    addObject<ACC>(CQU_I19_CQU_I19_ACC_101, "ACC.101", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(CQU_I19_CQU_I19_AL1_102, "AL1.102", HL7::initialized, HL7::repetition_off);
    addObject<DB1>(CQU_I19_CQU_I19_DB1_103, "DB1.103", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(CQU_I19_CQU_I19_DG1_104, "DG1.104", HL7::initialized, HL7::repetition_off);
    addObject<DRG>(CQU_I19_CQU_I19_DRG_105, "DRG.105", HL7::initialized, HL7::repetition_off);
    addObject<IAM>(CQU_I19_CQU_I19_IAM_106, "IAM.106", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(CQU_I19_CQU_I19_OBR_107, "OBR.107", HL7::initialized, HL7::repetition_off);
    addObject<ODS>(CQU_I19_CQU_I19_ODS_108, "ODS.108", HL7::initialized, HL7::repetition_off);
    addObject<PDA>(CQU_I19_CQU_I19_PDA_109, "PDA.109", HL7::initialized, HL7::repetition_off);
    addObject<PR1>(CQU_I19_CQU_I19_PR1_110, "PR1.110", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_111, "PRT.111", HL7::optional, HL7::repetition_on);
    addObject<RF1>(CQU_I19_CQU_I19_RF1_112, "RF1.112", HL7::initialized, HL7::repetition_off);
    addObject<RMI>(CQU_I19_CQU_I19_RMI_113, "RMI.113", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CQU_I19_CQU_I19_OBX_114, "OBX.114", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_115, "PRT.115", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CQU_I19_CQU_I19_PRD_116, "PRD.116", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_117, "PRT.117", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(CQU_I19_CQU_I19_ROL_118, "ROL.118", HL7::initialized, HL7::repetition_off);
    addObject<GOL>(CQU_I19_CQU_I19_GOL_121, "GOL.121", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(CQU_I19_CQU_I19_VAR_122, "VAR.122", HL7::optional, HL7::repetition_on);
    addObject<VAR>(CQU_I19_CQU_I19_VAR_124, "VAR.124", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CQU_I19_CQU_I19_PRD_125, "PRD.125", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_126, "PRT.126", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(CQU_I19_CQU_I19_ROL_127, "ROL.127", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(CQU_I19_CQU_I19_VAR_129, "VAR.129", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CQU_I19_CQU_I19_OBX_130, "OBX.130", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_131, "PRT.131", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CQU_I19_CQU_I19_PRD_132, "PRD.132", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_133, "PRT.133", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(CQU_I19_CQU_I19_ROL_134, "ROL.134", HL7::initialized, HL7::repetition_off);
    addObject<IN1>(CQU_I19_CQU_I19_IN1_135, "IN1.135", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(CQU_I19_CQU_I19_IN2_136, "IN2.136", HL7::optional, HL7::repetition_off);
    addObject<IN3>(CQU_I19_CQU_I19_IN3_137, "IN3.137", HL7::optional, HL7::repetition_off);
    addObject<CTI>(CQU_I19_CQU_I19_CTI_141, "CTI.141", HL7::optional, HL7::repetition_on);
    addObject<ORC>(CQU_I19_CQU_I19_ORC_142, "ORC.142", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_144, "PRT.144", HL7::optional, HL7::repetition_on);
    addObject<RXC>(CQU_I19_CQU_I19_RXC_145, "RXC.145", HL7::optional, HL7::repetition_on);
    addObject<RXO>(CQU_I19_CQU_I19_RXO_146, "RXO.146", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CQU_I19_CQU_I19_OBX_148, "OBX.148", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_149, "PRT.149", HL7::optional, HL7::repetition_on);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_151, "PRT.151", HL7::optional, HL7::repetition_on);
    addObject<RXC>(CQU_I19_CQU_I19_RXC_152, "RXC.152", HL7::optional, HL7::repetition_on);
    addObject<RXO>(CQU_I19_CQU_I19_RXO_153, "RXO.153", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_156, "PRT.156", HL7::optional, HL7::repetition_on);
    addObject<RXC>(CQU_I19_CQU_I19_RXC_157, "RXC.157", HL7::optional, HL7::repetition_on);
    addObject<RXE>(CQU_I19_CQU_I19_RXE_158, "RXE.158", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CQU_I19_CQU_I19_OBX_160, "OBX.160", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_161, "PRT.161", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CQU_I19_CQU_I19_OBX_162, "OBX.162", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_163, "PRT.163", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CQU_I19_CQU_I19_OBX_164, "OBX.164", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_165, "PRT.165", HL7::optional, HL7::repetition_on);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_167, "PRT.167", HL7::optional, HL7::repetition_on);
    addObject<RXC>(CQU_I19_CQU_I19_RXC_168, "RXC.168", HL7::optional, HL7::repetition_on);
    addObject<RXO>(CQU_I19_CQU_I19_RXO_169, "RXO.169", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_172, "PRT.172", HL7::optional, HL7::repetition_on);
    addObject<RXC>(CQU_I19_CQU_I19_RXC_173, "RXC.173", HL7::optional, HL7::repetition_on);
    addObject<RXE>(CQU_I19_CQU_I19_RXE_174, "RXE.174", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_177, "PRT.177", HL7::optional, HL7::repetition_on);
    addObject<RXR>(CQU_I19_CQU_I19_RXR_179, "RXR.179", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CQU_I19_CQU_I19_OBX_180, "OBX.180", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_181, "PRT.181", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CQU_I19_CQU_I19_OBX_182, "OBX.182", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_183, "PRT.183", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CQU_I19_CQU_I19_OBX_184, "OBX.184", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_185, "PRT.185", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CQU_I19_CQU_I19_OBX_186, "OBX.186", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_187, "PRT.187", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CQU_I19_CQU_I19_OBX_188, "OBX.188", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_189, "PRT.189", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CQU_I19_CQU_I19_OBX_190, "OBX.190", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_191, "PRT.191", HL7::optional, HL7::repetition_on);
    addObject<PTH>(CQU_I19_CQU_I19_PTH_194, "PTH.194", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(CQU_I19_CQU_I19_VAR_195, "VAR.195", HL7::optional, HL7::repetition_on);
    addObject<VAR>(CQU_I19_CQU_I19_VAR_197, "VAR.197", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CQU_I19_CQU_I19_PRD_198, "PRD.198", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_199, "PRT.199", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(CQU_I19_CQU_I19_ROL_200, "ROL.200", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(CQU_I19_CQU_I19_VAR_202, "VAR.202", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CQU_I19_CQU_I19_OBX_203, "OBX.203", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_204, "PRT.204", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CQU_I19_CQU_I19_PRD_205, "PRD.205", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_206, "PRT.206", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(CQU_I19_CQU_I19_ROL_207, "ROL.207", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(CQU_I19_CQU_I19_PD1_208, "PD1.208", HL7::optional, HL7::repetition_off);
    addObject<PID>(CQU_I19_CQU_I19_PID_209, "PID.209", HL7::initialized, HL7::repetition_off);
    addObject<PV1>(CQU_I19_CQU_I19_PV1_210, "PV1.210", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(CQU_I19_CQU_I19_PV2_211, "PV2.211", HL7::optional, HL7::repetition_off);
    addObject<PRB>(CQU_I19_CQU_I19_PRB_214, "PRB.214", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(CQU_I19_CQU_I19_VAR_215, "VAR.215", HL7::optional, HL7::repetition_on);
    addObject<VAR>(CQU_I19_CQU_I19_VAR_217, "VAR.217", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CQU_I19_CQU_I19_PRD_218, "PRD.218", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_219, "PRT.219", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(CQU_I19_CQU_I19_ROL_220, "ROL.220", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(CQU_I19_CQU_I19_VAR_222, "VAR.222", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CQU_I19_CQU_I19_OBX_223, "OBX.223", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_224, "PRT.224", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CQU_I19_CQU_I19_PRD_225, "PRD.225", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CQU_I19_CQU_I19_PRT_226, "PRT.226", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(CQU_I19_CQU_I19_ROL_227, "ROL.227", HL7::initialized, HL7::repetition_off);
    addObject<CTD>(CQU_I19_CQU_I19_CTD_228, "CTD.228", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CQU_I19_CQU_I19_PRD_229, "PRD.229", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, CQU_I19_CQU_I19_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, CQU_I19_CQU_I19_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, CQU_I19_CQU_I19_UAC_3);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, CQU_I19_CQU_I19_MSA_4);
  }
  ERR* getERR_5(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, CQU_I19_CQU_I19_ERR_5);
  }
  RF1* getRF1_6(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, CQU_I19_CQU_I19_RF1_6);
  }
  NK1* getNK1_9(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, CQU_I19_CQU_I19_NK1_9);
  }
  REL* getREL_18(size_t index = 0) {
    return (REL*)this->getObjectSafe(index, CQU_I19_CQU_I19_REL_18);
  }
  SCH* getSCH_20(size_t index = 0) {
    return (SCH*)this->getObjectSafe(index, CQU_I19_CQU_I19_SCH_20);
  }
  RGS* getRGS_22(size_t index = 0) {
    return (RGS*)this->getObjectSafe(index, CQU_I19_CQU_I19_RGS_22);
  }
  AIG* getAIG_25(size_t index = 0) {
    return (AIG*)this->getObjectSafe(index, CQU_I19_CQU_I19_AIG_25);
  }
  AIL* getAIL_26(size_t index = 0) {
    return (AIL*)this->getObjectSafe(index, CQU_I19_CQU_I19_AIL_26);
  }
  AIP* getAIP_27(size_t index = 0) {
    return (AIP*)this->getObjectSafe(index, CQU_I19_CQU_I19_AIP_27);
  }
  AIS* getAIS_28(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, CQU_I19_CQU_I19_AIS_28);
  }
  AIG* getAIG_29(size_t index = 0) {
    return (AIG*)this->getObjectSafe(index, CQU_I19_CQU_I19_AIG_29);
  }
  AIL* getAIL_30(size_t index = 0) {
    return (AIL*)this->getObjectSafe(index, CQU_I19_CQU_I19_AIL_30);
  }
  AIP* getAIP_31(size_t index = 0) {
    return (AIP*)this->getObjectSafe(index, CQU_I19_CQU_I19_AIP_31);
  }
  AIS* getAIS_32(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, CQU_I19_CQU_I19_AIS_32);
  }
  OBX* getOBX_33(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CQU_I19_CQU_I19_OBX_33);
  }
  PRT* getPRT_34(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_34);
  }
  CTI* getCTI_37(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, CQU_I19_CQU_I19_CTI_37);
  }
  ORC* getORC_38(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, CQU_I19_CQU_I19_ORC_38);
  }
  ACC* getACC_41(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, CQU_I19_CQU_I19_ACC_41);
  }
  AL1* getAL1_42(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, CQU_I19_CQU_I19_AL1_42);
  }
  DB1* getDB1_43(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, CQU_I19_CQU_I19_DB1_43);
  }
  DG1* getDG1_44(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, CQU_I19_CQU_I19_DG1_44);
  }
  DRG* getDRG_45(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, CQU_I19_CQU_I19_DRG_45);
  }
  IAM* getIAM_46(size_t index = 0) {
    return (IAM*)this->getObjectSafe(index, CQU_I19_CQU_I19_IAM_46);
  }
  OBR* getOBR_47(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, CQU_I19_CQU_I19_OBR_47);
  }
  ODS* getODS_48(size_t index = 0) {
    return (ODS*)this->getObjectSafe(index, CQU_I19_CQU_I19_ODS_48);
  }
  PDA* getPDA_49(size_t index = 0) {
    return (PDA*)this->getObjectSafe(index, CQU_I19_CQU_I19_PDA_49);
  }
  PR1* getPR1_50(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, CQU_I19_CQU_I19_PR1_50);
  }
  PRT* getPRT_51(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_51);
  }
  RF1* getRF1_52(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, CQU_I19_CQU_I19_RF1_52);
  }
  RMI* getRMI_53(size_t index = 0) {
    return (RMI*)this->getObjectSafe(index, CQU_I19_CQU_I19_RMI_53);
  }
  ACC* getACC_54(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, CQU_I19_CQU_I19_ACC_54);
  }
  AL1* getAL1_55(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, CQU_I19_CQU_I19_AL1_55);
  }
  DB1* getDB1_56(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, CQU_I19_CQU_I19_DB1_56);
  }
  DG1* getDG1_57(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, CQU_I19_CQU_I19_DG1_57);
  }
  DRG* getDRG_58(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, CQU_I19_CQU_I19_DRG_58);
  }
  IAM* getIAM_59(size_t index = 0) {
    return (IAM*)this->getObjectSafe(index, CQU_I19_CQU_I19_IAM_59);
  }
  OBR* getOBR_60(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, CQU_I19_CQU_I19_OBR_60);
  }
  ODS* getODS_61(size_t index = 0) {
    return (ODS*)this->getObjectSafe(index, CQU_I19_CQU_I19_ODS_61);
  }
  PDA* getPDA_62(size_t index = 0) {
    return (PDA*)this->getObjectSafe(index, CQU_I19_CQU_I19_PDA_62);
  }
  PR1* getPR1_63(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, CQU_I19_CQU_I19_PR1_63);
  }
  PRT* getPRT_64(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_64);
  }
  RF1* getRF1_65(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, CQU_I19_CQU_I19_RF1_65);
  }
  RMI* getRMI_66(size_t index = 0) {
    return (RMI*)this->getObjectSafe(index, CQU_I19_CQU_I19_RMI_66);
  }
  OBX* getOBX_67(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CQU_I19_CQU_I19_OBX_67);
  }
  PRT* getPRT_68(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_68);
  }
  VAR* getVAR_72(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CQU_I19_CQU_I19_VAR_72);
  }
  ACC* getACC_73(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, CQU_I19_CQU_I19_ACC_73);
  }
  AL1* getAL1_74(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, CQU_I19_CQU_I19_AL1_74);
  }
  DB1* getDB1_75(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, CQU_I19_CQU_I19_DB1_75);
  }
  DG1* getDG1_76(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, CQU_I19_CQU_I19_DG1_76);
  }
  DRG* getDRG_77(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, CQU_I19_CQU_I19_DRG_77);
  }
  IAM* getIAM_78(size_t index = 0) {
    return (IAM*)this->getObjectSafe(index, CQU_I19_CQU_I19_IAM_78);
  }
  OBR* getOBR_79(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, CQU_I19_CQU_I19_OBR_79);
  }
  ODS* getODS_80(size_t index = 0) {
    return (ODS*)this->getObjectSafe(index, CQU_I19_CQU_I19_ODS_80);
  }
  PDA* getPDA_81(size_t index = 0) {
    return (PDA*)this->getObjectSafe(index, CQU_I19_CQU_I19_PDA_81);
  }
  PR1* getPR1_82(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, CQU_I19_CQU_I19_PR1_82);
  }
  PRT* getPRT_83(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_83);
  }
  RF1* getRF1_84(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, CQU_I19_CQU_I19_RF1_84);
  }
  RMI* getRMI_85(size_t index = 0) {
    return (RMI*)this->getObjectSafe(index, CQU_I19_CQU_I19_RMI_85);
  }
  ACC* getACC_86(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, CQU_I19_CQU_I19_ACC_86);
  }
  AL1* getAL1_87(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, CQU_I19_CQU_I19_AL1_87);
  }
  DB1* getDB1_88(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, CQU_I19_CQU_I19_DB1_88);
  }
  DG1* getDG1_89(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, CQU_I19_CQU_I19_DG1_89);
  }
  DRG* getDRG_90(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, CQU_I19_CQU_I19_DRG_90);
  }
  IAM* getIAM_91(size_t index = 0) {
    return (IAM*)this->getObjectSafe(index, CQU_I19_CQU_I19_IAM_91);
  }
  OBR* getOBR_92(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, CQU_I19_CQU_I19_OBR_92);
  }
  ODS* getODS_93(size_t index = 0) {
    return (ODS*)this->getObjectSafe(index, CQU_I19_CQU_I19_ODS_93);
  }
  PDA* getPDA_94(size_t index = 0) {
    return (PDA*)this->getObjectSafe(index, CQU_I19_CQU_I19_PDA_94);
  }
  PR1* getPR1_95(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, CQU_I19_CQU_I19_PR1_95);
  }
  PRT* getPRT_96(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_96);
  }
  RF1* getRF1_97(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, CQU_I19_CQU_I19_RF1_97);
  }
  RMI* getRMI_98(size_t index = 0) {
    return (RMI*)this->getObjectSafe(index, CQU_I19_CQU_I19_RMI_98);
  }
  OBX* getOBX_99(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CQU_I19_CQU_I19_OBX_99);
  }
  PRT* getPRT_100(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_100);
  }
  ACC* getACC_101(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, CQU_I19_CQU_I19_ACC_101);
  }
  AL1* getAL1_102(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, CQU_I19_CQU_I19_AL1_102);
  }
  DB1* getDB1_103(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, CQU_I19_CQU_I19_DB1_103);
  }
  DG1* getDG1_104(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, CQU_I19_CQU_I19_DG1_104);
  }
  DRG* getDRG_105(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, CQU_I19_CQU_I19_DRG_105);
  }
  IAM* getIAM_106(size_t index = 0) {
    return (IAM*)this->getObjectSafe(index, CQU_I19_CQU_I19_IAM_106);
  }
  OBR* getOBR_107(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, CQU_I19_CQU_I19_OBR_107);
  }
  ODS* getODS_108(size_t index = 0) {
    return (ODS*)this->getObjectSafe(index, CQU_I19_CQU_I19_ODS_108);
  }
  PDA* getPDA_109(size_t index = 0) {
    return (PDA*)this->getObjectSafe(index, CQU_I19_CQU_I19_PDA_109);
  }
  PR1* getPR1_110(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, CQU_I19_CQU_I19_PR1_110);
  }
  PRT* getPRT_111(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_111);
  }
  RF1* getRF1_112(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, CQU_I19_CQU_I19_RF1_112);
  }
  RMI* getRMI_113(size_t index = 0) {
    return (RMI*)this->getObjectSafe(index, CQU_I19_CQU_I19_RMI_113);
  }
  OBX* getOBX_114(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CQU_I19_CQU_I19_OBX_114);
  }
  PRT* getPRT_115(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_115);
  }
  PRD* getPRD_116(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRD_116);
  }
  PRT* getPRT_117(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_117);
  }
  ROL* getROL_118(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, CQU_I19_CQU_I19_ROL_118);
  }
  GOL* getGOL_121(size_t index = 0) {
    return (GOL*)this->getObjectSafe(index, CQU_I19_CQU_I19_GOL_121);
  }
  VAR* getVAR_122(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CQU_I19_CQU_I19_VAR_122);
  }
  VAR* getVAR_124(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CQU_I19_CQU_I19_VAR_124);
  }
  PRD* getPRD_125(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRD_125);
  }
  PRT* getPRT_126(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_126);
  }
  ROL* getROL_127(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, CQU_I19_CQU_I19_ROL_127);
  }
  VAR* getVAR_129(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CQU_I19_CQU_I19_VAR_129);
  }
  OBX* getOBX_130(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CQU_I19_CQU_I19_OBX_130);
  }
  PRT* getPRT_131(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_131);
  }
  PRD* getPRD_132(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRD_132);
  }
  PRT* getPRT_133(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_133);
  }
  ROL* getROL_134(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, CQU_I19_CQU_I19_ROL_134);
  }
  IN1* getIN1_135(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, CQU_I19_CQU_I19_IN1_135);
  }
  IN2* getIN2_136(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, CQU_I19_CQU_I19_IN2_136);
  }
  IN3* getIN3_137(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, CQU_I19_CQU_I19_IN3_137);
  }
  CTI* getCTI_141(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, CQU_I19_CQU_I19_CTI_141);
  }
  ORC* getORC_142(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, CQU_I19_CQU_I19_ORC_142);
  }
  PRT* getPRT_144(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_144);
  }
  RXC* getRXC_145(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, CQU_I19_CQU_I19_RXC_145);
  }
  RXO* getRXO_146(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, CQU_I19_CQU_I19_RXO_146);
  }
  OBX* getOBX_148(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CQU_I19_CQU_I19_OBX_148);
  }
  PRT* getPRT_149(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_149);
  }
  PRT* getPRT_151(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_151);
  }
  RXC* getRXC_152(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, CQU_I19_CQU_I19_RXC_152);
  }
  RXO* getRXO_153(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, CQU_I19_CQU_I19_RXO_153);
  }
  PRT* getPRT_156(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_156);
  }
  RXC* getRXC_157(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, CQU_I19_CQU_I19_RXC_157);
  }
  RXE* getRXE_158(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, CQU_I19_CQU_I19_RXE_158);
  }
  OBX* getOBX_160(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CQU_I19_CQU_I19_OBX_160);
  }
  PRT* getPRT_161(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_161);
  }
  OBX* getOBX_162(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CQU_I19_CQU_I19_OBX_162);
  }
  PRT* getPRT_163(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_163);
  }
  OBX* getOBX_164(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CQU_I19_CQU_I19_OBX_164);
  }
  PRT* getPRT_165(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_165);
  }
  PRT* getPRT_167(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_167);
  }
  RXC* getRXC_168(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, CQU_I19_CQU_I19_RXC_168);
  }
  RXO* getRXO_169(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, CQU_I19_CQU_I19_RXO_169);
  }
  PRT* getPRT_172(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_172);
  }
  RXC* getRXC_173(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, CQU_I19_CQU_I19_RXC_173);
  }
  RXE* getRXE_174(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, CQU_I19_CQU_I19_RXE_174);
  }
  PRT* getPRT_177(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_177);
  }
  RXR* getRXR_179(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, CQU_I19_CQU_I19_RXR_179);
  }
  OBX* getOBX_180(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CQU_I19_CQU_I19_OBX_180);
  }
  PRT* getPRT_181(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_181);
  }
  OBX* getOBX_182(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CQU_I19_CQU_I19_OBX_182);
  }
  PRT* getPRT_183(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_183);
  }
  OBX* getOBX_184(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CQU_I19_CQU_I19_OBX_184);
  }
  PRT* getPRT_185(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_185);
  }
  OBX* getOBX_186(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CQU_I19_CQU_I19_OBX_186);
  }
  PRT* getPRT_187(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_187);
  }
  OBX* getOBX_188(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CQU_I19_CQU_I19_OBX_188);
  }
  PRT* getPRT_189(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_189);
  }
  OBX* getOBX_190(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CQU_I19_CQU_I19_OBX_190);
  }
  PRT* getPRT_191(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_191);
  }
  PTH* getPTH_194(size_t index = 0) {
    return (PTH*)this->getObjectSafe(index, CQU_I19_CQU_I19_PTH_194);
  }
  VAR* getVAR_195(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CQU_I19_CQU_I19_VAR_195);
  }
  VAR* getVAR_197(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CQU_I19_CQU_I19_VAR_197);
  }
  PRD* getPRD_198(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRD_198);
  }
  PRT* getPRT_199(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_199);
  }
  ROL* getROL_200(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, CQU_I19_CQU_I19_ROL_200);
  }
  VAR* getVAR_202(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CQU_I19_CQU_I19_VAR_202);
  }
  OBX* getOBX_203(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CQU_I19_CQU_I19_OBX_203);
  }
  PRT* getPRT_204(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_204);
  }
  PRD* getPRD_205(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRD_205);
  }
  PRT* getPRT_206(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_206);
  }
  ROL* getROL_207(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, CQU_I19_CQU_I19_ROL_207);
  }
  PD1* getPD1_208(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, CQU_I19_CQU_I19_PD1_208);
  }
  PID* getPID_209(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, CQU_I19_CQU_I19_PID_209);
  }
  PV1* getPV1_210(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, CQU_I19_CQU_I19_PV1_210);
  }
  PV2* getPV2_211(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, CQU_I19_CQU_I19_PV2_211);
  }
  PRB* getPRB_214(size_t index = 0) {
    return (PRB*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRB_214);
  }
  VAR* getVAR_215(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CQU_I19_CQU_I19_VAR_215);
  }
  VAR* getVAR_217(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CQU_I19_CQU_I19_VAR_217);
  }
  PRD* getPRD_218(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRD_218);
  }
  PRT* getPRT_219(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_219);
  }
  ROL* getROL_220(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, CQU_I19_CQU_I19_ROL_220);
  }
  VAR* getVAR_222(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CQU_I19_CQU_I19_VAR_222);
  }
  OBX* getOBX_223(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CQU_I19_CQU_I19_OBX_223);
  }
  PRT* getPRT_224(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_224);
  }
  PRD* getPRD_225(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRD_225);
  }
  PRT* getPRT_226(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRT_226);
  }
  ROL* getROL_227(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, CQU_I19_CQU_I19_ROL_227);
  }
  CTD* getCTD_228(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, CQU_I19_CQU_I19_CTD_228);
  }
  PRD* getPRD_229(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CQU_I19_CQU_I19_PRD_229);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_5(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_ERR_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_6(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_RF1_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_9(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_NK1_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isREL_18(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_REL_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSCH_20(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_SCH_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRGS_22(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_RGS_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIG_25(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_AIG_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIL_26(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_AIL_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIP_27(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_AIP_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIS_28(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_AIS_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIG_29(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_AIG_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIL_30(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_AIL_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIP_31(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_AIP_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIS_32(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_AIS_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_33(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_OBX_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_34(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_37(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_CTI_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_38(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_ORC_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_41(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_ACC_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_42(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_AL1_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_43(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_DB1_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_44(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_DG1_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_45(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_DRG_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIAM_46(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_IAM_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_47(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_OBR_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODS_48(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_ODS_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPDA_49(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PDA_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_50(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PR1_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_51(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_52(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_RF1_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRMI_53(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_RMI_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_54(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_ACC_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_55(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_AL1_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_56(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_DB1_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_57(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_DG1_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_58(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_DRG_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIAM_59(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_IAM_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_60(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_OBR_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODS_61(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_ODS_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPDA_62(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PDA_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_63(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PR1_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_64(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_65(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_RF1_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRMI_66(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_RMI_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_67(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_OBX_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_68(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_68) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_72(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_VAR_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_73(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_ACC_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_74(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_AL1_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_75(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_DB1_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_76(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_DG1_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_77(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_DRG_77) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIAM_78(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_IAM_78) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_79(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_OBR_79) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODS_80(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_ODS_80) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPDA_81(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PDA_81) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_82(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PR1_82) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_83(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_83) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_84(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_RF1_84) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRMI_85(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_RMI_85) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_86(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_ACC_86) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_87(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_AL1_87) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_88(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_DB1_88) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_89(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_DG1_89) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_90(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_DRG_90) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIAM_91(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_IAM_91) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_92(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_OBR_92) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODS_93(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_ODS_93) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPDA_94(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PDA_94) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_95(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PR1_95) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_96(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_96) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_97(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_RF1_97) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRMI_98(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_RMI_98) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_99(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_OBX_99) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_100(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_100) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_101(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_ACC_101) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_102(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_AL1_102) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_103(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_DB1_103) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_104(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_DG1_104) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_105(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_DRG_105) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIAM_106(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_IAM_106) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_107(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_OBR_107) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODS_108(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_ODS_108) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPDA_109(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PDA_109) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_110(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PR1_110) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_111(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_111) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_112(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_RF1_112) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRMI_113(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_RMI_113) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_114(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_OBX_114) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_115(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_115) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_116(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRD_116) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_117(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_117) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_118(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_ROL_118) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOL_121(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_GOL_121) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_122(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_VAR_122) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_124(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_VAR_124) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_125(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRD_125) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_126(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_126) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_127(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_ROL_127) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_129(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_VAR_129) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_130(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_OBX_130) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_131(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_131) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_132(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRD_132) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_133(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_133) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_134(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_ROL_134) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_135(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_IN1_135) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_136(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_IN2_136) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_137(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_IN3_137) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_141(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_CTI_141) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_142(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_ORC_142) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_144(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_144) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_145(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_RXC_145) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_146(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_RXO_146) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_148(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_OBX_148) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_149(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_149) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_151(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_151) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_152(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_RXC_152) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_153(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_RXO_153) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_156(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_156) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_157(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_RXC_157) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXE_158(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_RXE_158) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_160(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_OBX_160) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_161(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_161) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_162(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_OBX_162) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_163(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_163) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_164(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_OBX_164) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_165(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_165) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_167(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_167) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_168(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_RXC_168) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_169(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_RXO_169) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_172(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_172) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_173(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_RXC_173) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXE_174(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_RXE_174) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_177(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_177) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_179(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_RXR_179) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_180(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_OBX_180) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_181(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_181) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_182(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_OBX_182) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_183(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_183) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_184(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_OBX_184) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_185(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_185) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_186(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_OBX_186) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_187(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_187) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_188(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_OBX_188) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_189(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_189) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_190(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_OBX_190) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_191(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_191) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPTH_194(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PTH_194) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_195(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_VAR_195) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_197(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_VAR_197) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_198(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRD_198) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_199(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_199) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_200(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_ROL_200) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_202(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_VAR_202) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_203(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_OBX_203) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_204(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_204) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_205(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRD_205) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_206(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_206) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_207(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_ROL_207) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_208(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PD1_208) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_209(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PID_209) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_210(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PV1_210) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_211(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PV2_211) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRB_214(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRB_214) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_215(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_VAR_215) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_217(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_VAR_217) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_218(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRD_218) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_219(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_219) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_220(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_ROL_220) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_222(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_VAR_222) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_223(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_OBX_223) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_224(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_224) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_225(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRD_225) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_226(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRT_226) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_227(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_ROL_227) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_228(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_CTD_228) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_229(size_t index = 0) {
    try {
      return this->getObject(index, CQU_I19_CQU_I19_PRD_229) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* CQU_I19_CQU_I19_ */
} /* namespace HL7_29 */
#endif /*  __CQU_I19_CQU_I19__29_H__ */
