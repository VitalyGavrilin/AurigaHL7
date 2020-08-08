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


#ifndef __CCI_I22_CCI_I22__29_H__
#define __CCI_I22_CCI_I22__29_H__

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
struct CCI_I22_CCI_I22_INSURANCE; /* INSURANCE */
struct CCI_I22_CCI_I22_APPOINTMENT_HISTORY; /* APPOINTMENT_HISTORY */
struct CCI_I22_CCI_I22_CLINICAL_HISTORY; /* CLINICAL_HISTORY */
struct CCI_I22_CCI_I22_PATIENT_VISITS; /* PATIENT_VISITS */
struct CCI_I22_CCI_I22_MEDICATION_HISTORY; /* MEDICATION_HISTORY */
struct CCI_I22_CCI_I22_PROBLEM; /* PROBLEM */
struct CCI_I22_CCI_I22_GOAL; /* GOAL */
struct CCI_I22_CCI_I22_PATHWAY; /* PATHWAY */
struct CCI_I22_CCI_I22_RESOURCES; /* RESOURCES */
struct CCI_I22_CCI_I22_RESOURCE_DETAIL; /* RESOURCE_DETAIL */
struct CCI_I22_CCI_I22_RESOURCE_OBJECT; /* RESOURCE_OBJECT */
struct CCI_I22_CCI_I22_RESOURCE_OBSERVATION; /* RESOURCE_OBSERVATION */
struct CCI_I22_CCI_I22_CLINICAL_HISTORY_DETAIL; /* CLINICAL_HISTORY_DETAIL */
struct CCI_I22_CCI_I22_PARTICIPATION_CLINICAL_HISTORY; /* PARTICIPATION_CLINICAL_HISTORY */
struct CCI_I22_CCI_I22_CLINICAL_HISTORY_OBJECT; /* CLINICAL_HISTORY_OBJECT */
struct CCI_I22_CCI_I22_CLINICAL_HISTORY_OBSERVATION; /* CLINICAL_HISTORY_OBSERVATION */
struct CCI_I22_CCI_I22_CLINICAL_HISTORY_OBJECT; /* CLINICAL_HISTORY_OBJECT */
struct CCI_I22_CCI_I22_CLINICAL_HISTORY_OBSERVATION; /* CLINICAL_HISTORY_OBSERVATION */
struct CCI_I22_CCI_I22_PARTICIPATION_CLINICAL_HISTORY_OBJECT; /* PARTICIPATION_CLINICAL_HISTORY_OBJECT */
struct CCI_I22_CCI_I22_PARTICIPATION_GOAL; /* PARTICIPATION_GOAL */
struct CCI_I22_CCI_I22_GOAL_OBSERVATION; /* GOAL_OBSERVATION */
struct CCI_I22_CCI_I22_PARTICIPATION_GOAL_OBJECT; /* PARTICIPATION_GOAL_OBJECT */
struct CCI_I22_CCI_I22_PARTICIPATION_GOAL_OBJECT; /* PARTICIPATION_GOAL_OBJECT */
struct CCI_I22_CCI_I22_MEDICATION_ORDER_DETAIL; /* MEDICATION_ORDER_DETAIL */
struct CCI_I22_CCI_I22_MEDICATION_ENCODING_DETAIL; /* MEDICATION_ENCODING_DETAIL */
struct CCI_I22_CCI_I22_MEDICATION_ADMINISTRATION_DETAIL; /* MEDICATION_ADMINISTRATION_DETAIL */
struct CCI_I22_CCI_I22_MEDICATION_ORDER_OBSERVATION; /* MEDICATION_ORDER_OBSERVATION */
struct CCI_I22_CCI_I22_MEDICATION_ORDER_OBSERVATION; /* MEDICATION_ORDER_OBSERVATION */
struct CCI_I22_CCI_I22_MEDICATION_ENCODING_OBSERVATION; /* MEDICATION_ENCODING_OBSERVATION */
struct CCI_I22_CCI_I22_MEDICATION_ORDER_OBSERVATION; /* MEDICATION_ORDER_OBSERVATION */
struct CCI_I22_CCI_I22_MEDICATION_ENCODING_OBSERVATION; /* MEDICATION_ENCODING_OBSERVATION */
struct CCI_I22_CCI_I22_MEDICATION_ADMINISTRATION_OBSERVATION; /* MEDICATION_ADMINISTRATION_OBSERVATION */
struct CCI_I22_CCI_I22_PARTICIPATION_PATHWAY; /* PARTICIPATION_PATHWAY */
struct CCI_I22_CCI_I22_PATHWAY_OBSERVATION; /* PATHWAY_OBSERVATION */
struct CCI_I22_CCI_I22_PARTICIPATION_PATHWAY_OBJECT; /* PARTICIPATION_PATHWAY_OBJECT */
struct CCI_I22_CCI_I22_PARTICIPATION_PATHWAY_OBJECT; /* PARTICIPATION_PATHWAY_OBJECT */
struct CCI_I22_CCI_I22_PARTICIPATION_PROBLEM; /* PARTICIPATION_PROBLEM */
struct CCI_I22_CCI_I22_PROBLEM_OBSERVATION; /* PROBLEM_OBSERVATION */
struct CCI_I22_CCI_I22_PARTICIPATION_PROBLEM_OBJECT; /* PARTICIPATION_PROBLEM_OBJECT */
struct CCI_I22_CCI_I22_PARTICIPATION_PROBLEM_OBJECT; /* PARTICIPATION_PROBLEM_OBJECT */

/*  */
struct CCI_I22_CCI_I22 : public HL7Message {
  CCI_I22_CCI_I22() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    CCI_I22_CCI_I22_MSH_1,
    CCI_I22_CCI_I22_SFT_2,
    CCI_I22_CCI_I22_UAC_3,
    CCI_I22_CCI_I22_MSA_4,
    CCI_I22_CCI_I22_ERR_5,
    CCI_I22_CCI_I22_PID_6,
    CCI_I22_CCI_I22_PD1_7,
    CCI_I22_CCI_I22_NK1_8,
    CCI_I22_CCI_I22_REL_17,
    CCI_I22_CCI_I22_SCH_19,
    CCI_I22_CCI_I22_RGS_21,
    CCI_I22_CCI_I22_AIG_24,
    CCI_I22_CCI_I22_AIL_25,
    CCI_I22_CCI_I22_AIP_26,
    CCI_I22_CCI_I22_AIS_27,
    CCI_I22_CCI_I22_AIG_28,
    CCI_I22_CCI_I22_AIL_29,
    CCI_I22_CCI_I22_AIP_30,
    CCI_I22_CCI_I22_AIS_31,
    CCI_I22_CCI_I22_OBX_32,
    CCI_I22_CCI_I22_PRT_33,
    CCI_I22_CCI_I22_CTI_36,
    CCI_I22_CCI_I22_ORC_37,
    CCI_I22_CCI_I22_ACC_40,
    CCI_I22_CCI_I22_AL1_41,
    CCI_I22_CCI_I22_DB1_42,
    CCI_I22_CCI_I22_DG1_43,
    CCI_I22_CCI_I22_DRG_44,
    CCI_I22_CCI_I22_IAM_45,
    CCI_I22_CCI_I22_OBR_46,
    CCI_I22_CCI_I22_ODS_47,
    CCI_I22_CCI_I22_PDA_48,
    CCI_I22_CCI_I22_PR1_49,
    CCI_I22_CCI_I22_PRT_50,
    CCI_I22_CCI_I22_RF1_51,
    CCI_I22_CCI_I22_RMI_52,
    CCI_I22_CCI_I22_ACC_53,
    CCI_I22_CCI_I22_AL1_54,
    CCI_I22_CCI_I22_DB1_55,
    CCI_I22_CCI_I22_DG1_56,
    CCI_I22_CCI_I22_DRG_57,
    CCI_I22_CCI_I22_IAM_58,
    CCI_I22_CCI_I22_OBR_59,
    CCI_I22_CCI_I22_ODS_60,
    CCI_I22_CCI_I22_PDA_61,
    CCI_I22_CCI_I22_PR1_62,
    CCI_I22_CCI_I22_PRT_63,
    CCI_I22_CCI_I22_RF1_64,
    CCI_I22_CCI_I22_RMI_65,
    CCI_I22_CCI_I22_OBX_66,
    CCI_I22_CCI_I22_PRT_67,
    CCI_I22_CCI_I22_VAR_71,
    CCI_I22_CCI_I22_ACC_72,
    CCI_I22_CCI_I22_AL1_73,
    CCI_I22_CCI_I22_DB1_74,
    CCI_I22_CCI_I22_DG1_75,
    CCI_I22_CCI_I22_DRG_76,
    CCI_I22_CCI_I22_IAM_77,
    CCI_I22_CCI_I22_OBR_78,
    CCI_I22_CCI_I22_ODS_79,
    CCI_I22_CCI_I22_PDA_80,
    CCI_I22_CCI_I22_PR1_81,
    CCI_I22_CCI_I22_PRT_82,
    CCI_I22_CCI_I22_RF1_83,
    CCI_I22_CCI_I22_RMI_84,
    CCI_I22_CCI_I22_ACC_85,
    CCI_I22_CCI_I22_AL1_86,
    CCI_I22_CCI_I22_DB1_87,
    CCI_I22_CCI_I22_DG1_88,
    CCI_I22_CCI_I22_DRG_89,
    CCI_I22_CCI_I22_IAM_90,
    CCI_I22_CCI_I22_OBR_91,
    CCI_I22_CCI_I22_ODS_92,
    CCI_I22_CCI_I22_PDA_93,
    CCI_I22_CCI_I22_PR1_94,
    CCI_I22_CCI_I22_PRT_95,
    CCI_I22_CCI_I22_RF1_96,
    CCI_I22_CCI_I22_RMI_97,
    CCI_I22_CCI_I22_OBX_98,
    CCI_I22_CCI_I22_PRT_99,
    CCI_I22_CCI_I22_ACC_100,
    CCI_I22_CCI_I22_AL1_101,
    CCI_I22_CCI_I22_DB1_102,
    CCI_I22_CCI_I22_DG1_103,
    CCI_I22_CCI_I22_DRG_104,
    CCI_I22_CCI_I22_IAM_105,
    CCI_I22_CCI_I22_OBR_106,
    CCI_I22_CCI_I22_ODS_107,
    CCI_I22_CCI_I22_PDA_108,
    CCI_I22_CCI_I22_PR1_109,
    CCI_I22_CCI_I22_PRT_110,
    CCI_I22_CCI_I22_RF1_111,
    CCI_I22_CCI_I22_RMI_112,
    CCI_I22_CCI_I22_OBX_113,
    CCI_I22_CCI_I22_PRT_114,
    CCI_I22_CCI_I22_PRD_115,
    CCI_I22_CCI_I22_PRT_116,
    CCI_I22_CCI_I22_ROL_117,
    CCI_I22_CCI_I22_GOL_120,
    CCI_I22_CCI_I22_VAR_121,
    CCI_I22_CCI_I22_VAR_123,
    CCI_I22_CCI_I22_PRD_124,
    CCI_I22_CCI_I22_PRT_125,
    CCI_I22_CCI_I22_ROL_126,
    CCI_I22_CCI_I22_VAR_128,
    CCI_I22_CCI_I22_OBX_129,
    CCI_I22_CCI_I22_PRT_130,
    CCI_I22_CCI_I22_PRD_131,
    CCI_I22_CCI_I22_PRT_132,
    CCI_I22_CCI_I22_ROL_133,
    CCI_I22_CCI_I22_IN1_134,
    CCI_I22_CCI_I22_IN2_135,
    CCI_I22_CCI_I22_IN3_136,
    CCI_I22_CCI_I22_CTI_140,
    CCI_I22_CCI_I22_ORC_141,
    CCI_I22_CCI_I22_PRT_143,
    CCI_I22_CCI_I22_RXC_144,
    CCI_I22_CCI_I22_RXO_145,
    CCI_I22_CCI_I22_OBX_147,
    CCI_I22_CCI_I22_PRT_148,
    CCI_I22_CCI_I22_PRT_150,
    CCI_I22_CCI_I22_RXC_151,
    CCI_I22_CCI_I22_RXO_152,
    CCI_I22_CCI_I22_PRT_155,
    CCI_I22_CCI_I22_RXC_156,
    CCI_I22_CCI_I22_RXE_157,
    CCI_I22_CCI_I22_OBX_159,
    CCI_I22_CCI_I22_PRT_160,
    CCI_I22_CCI_I22_OBX_161,
    CCI_I22_CCI_I22_PRT_162,
    CCI_I22_CCI_I22_OBX_163,
    CCI_I22_CCI_I22_PRT_164,
    CCI_I22_CCI_I22_PRT_166,
    CCI_I22_CCI_I22_RXC_167,
    CCI_I22_CCI_I22_RXO_168,
    CCI_I22_CCI_I22_PRT_171,
    CCI_I22_CCI_I22_RXC_172,
    CCI_I22_CCI_I22_RXE_173,
    CCI_I22_CCI_I22_PRT_176,
    CCI_I22_CCI_I22_RXA_177,
    CCI_I22_CCI_I22_RXR_178,
    CCI_I22_CCI_I22_OBX_179,
    CCI_I22_CCI_I22_PRT_180,
    CCI_I22_CCI_I22_OBX_181,
    CCI_I22_CCI_I22_PRT_182,
    CCI_I22_CCI_I22_OBX_183,
    CCI_I22_CCI_I22_PRT_184,
    CCI_I22_CCI_I22_OBX_185,
    CCI_I22_CCI_I22_PRT_186,
    CCI_I22_CCI_I22_OBX_187,
    CCI_I22_CCI_I22_PRT_188,
    CCI_I22_CCI_I22_OBX_189,
    CCI_I22_CCI_I22_PRT_190,
    CCI_I22_CCI_I22_PTH_193,
    CCI_I22_CCI_I22_VAR_194,
    CCI_I22_CCI_I22_VAR_196,
    CCI_I22_CCI_I22_PRD_197,
    CCI_I22_CCI_I22_PRT_198,
    CCI_I22_CCI_I22_ROL_199,
    CCI_I22_CCI_I22_VAR_201,
    CCI_I22_CCI_I22_OBX_202,
    CCI_I22_CCI_I22_PRT_203,
    CCI_I22_CCI_I22_PRD_204,
    CCI_I22_CCI_I22_PRT_205,
    CCI_I22_CCI_I22_ROL_206,
    CCI_I22_CCI_I22_PV1_207,
    CCI_I22_CCI_I22_PV2_208,
    CCI_I22_CCI_I22_PRB_211,
    CCI_I22_CCI_I22_VAR_212,
    CCI_I22_CCI_I22_VAR_214,
    CCI_I22_CCI_I22_PRD_215,
    CCI_I22_CCI_I22_PRT_216,
    CCI_I22_CCI_I22_ROL_217,
    CCI_I22_CCI_I22_VAR_219,
    CCI_I22_CCI_I22_OBX_220,
    CCI_I22_CCI_I22_PRT_221,
    CCI_I22_CCI_I22_PRD_222,
    CCI_I22_CCI_I22_PRT_223,
    CCI_I22_CCI_I22_ROL_224,
    FIELD_ID_MAX
  };

  const char* className() const { return "CCI_I22_CCI_I22"; }
  CCI_I22_CCI_I22* create() const { return new CCI_I22_CCI_I22(); }

 private:
  /* Initialize object */
  void init() {
    setName("CCI_I22_CCI_I22");
    addObject<MSH>(CCI_I22_CCI_I22_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(CCI_I22_CCI_I22_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(CCI_I22_CCI_I22_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MSA>(CCI_I22_CCI_I22_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(CCI_I22_CCI_I22_ERR_5, "ERR.5", HL7::optional, HL7::repetition_on);
    addObject<PID>(CCI_I22_CCI_I22_PID_6, "PID.6", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(CCI_I22_CCI_I22_PD1_7, "PD1.7", HL7::optional, HL7::repetition_off);
    addObject<NK1>(CCI_I22_CCI_I22_NK1_8, "NK1.8", HL7::optional, HL7::repetition_on);
    addObject<REL>(CCI_I22_CCI_I22_REL_17, "REL.17", HL7::optional, HL7::repetition_on);
    addObject<SCH>(CCI_I22_CCI_I22_SCH_19, "SCH.19", HL7::initialized, HL7::repetition_off);
    addObject<RGS>(CCI_I22_CCI_I22_RGS_21, "RGS.21", HL7::initialized, HL7::repetition_off);
    addObject<AIG>(CCI_I22_CCI_I22_AIG_24, "AIG.24", HL7::initialized, HL7::repetition_off);
    addObject<AIL>(CCI_I22_CCI_I22_AIL_25, "AIL.25", HL7::initialized, HL7::repetition_off);
    addObject<AIP>(CCI_I22_CCI_I22_AIP_26, "AIP.26", HL7::initialized, HL7::repetition_off);
    addObject<AIS>(CCI_I22_CCI_I22_AIS_27, "AIS.27", HL7::initialized, HL7::repetition_off);
    addObject<AIG>(CCI_I22_CCI_I22_AIG_28, "AIG.28", HL7::initialized, HL7::repetition_off);
    addObject<AIL>(CCI_I22_CCI_I22_AIL_29, "AIL.29", HL7::initialized, HL7::repetition_off);
    addObject<AIP>(CCI_I22_CCI_I22_AIP_30, "AIP.30", HL7::initialized, HL7::repetition_off);
    addObject<AIS>(CCI_I22_CCI_I22_AIS_31, "AIS.31", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CCI_I22_CCI_I22_OBX_32, "OBX.32", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_33, "PRT.33", HL7::optional, HL7::repetition_on);
    addObject<CTI>(CCI_I22_CCI_I22_CTI_36, "CTI.36", HL7::optional, HL7::repetition_on);
    addObject<ORC>(CCI_I22_CCI_I22_ORC_37, "ORC.37", HL7::initialized, HL7::repetition_off);
    addObject<ACC>(CCI_I22_CCI_I22_ACC_40, "ACC.40", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(CCI_I22_CCI_I22_AL1_41, "AL1.41", HL7::initialized, HL7::repetition_off);
    addObject<DB1>(CCI_I22_CCI_I22_DB1_42, "DB1.42", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(CCI_I22_CCI_I22_DG1_43, "DG1.43", HL7::initialized, HL7::repetition_off);
    addObject<DRG>(CCI_I22_CCI_I22_DRG_44, "DRG.44", HL7::initialized, HL7::repetition_off);
    addObject<IAM>(CCI_I22_CCI_I22_IAM_45, "IAM.45", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(CCI_I22_CCI_I22_OBR_46, "OBR.46", HL7::initialized, HL7::repetition_off);
    addObject<ODS>(CCI_I22_CCI_I22_ODS_47, "ODS.47", HL7::initialized, HL7::repetition_off);
    addObject<PDA>(CCI_I22_CCI_I22_PDA_48, "PDA.48", HL7::initialized, HL7::repetition_off);
    addObject<PR1>(CCI_I22_CCI_I22_PR1_49, "PR1.49", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_50, "PRT.50", HL7::optional, HL7::repetition_on);
    addObject<RF1>(CCI_I22_CCI_I22_RF1_51, "RF1.51", HL7::initialized, HL7::repetition_off);
    addObject<RMI>(CCI_I22_CCI_I22_RMI_52, "RMI.52", HL7::initialized, HL7::repetition_off);
    addObject<ACC>(CCI_I22_CCI_I22_ACC_53, "ACC.53", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(CCI_I22_CCI_I22_AL1_54, "AL1.54", HL7::initialized, HL7::repetition_off);
    addObject<DB1>(CCI_I22_CCI_I22_DB1_55, "DB1.55", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(CCI_I22_CCI_I22_DG1_56, "DG1.56", HL7::initialized, HL7::repetition_off);
    addObject<DRG>(CCI_I22_CCI_I22_DRG_57, "DRG.57", HL7::initialized, HL7::repetition_off);
    addObject<IAM>(CCI_I22_CCI_I22_IAM_58, "IAM.58", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(CCI_I22_CCI_I22_OBR_59, "OBR.59", HL7::initialized, HL7::repetition_off);
    addObject<ODS>(CCI_I22_CCI_I22_ODS_60, "ODS.60", HL7::initialized, HL7::repetition_off);
    addObject<PDA>(CCI_I22_CCI_I22_PDA_61, "PDA.61", HL7::initialized, HL7::repetition_off);
    addObject<PR1>(CCI_I22_CCI_I22_PR1_62, "PR1.62", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_63, "PRT.63", HL7::optional, HL7::repetition_on);
    addObject<RF1>(CCI_I22_CCI_I22_RF1_64, "RF1.64", HL7::initialized, HL7::repetition_off);
    addObject<RMI>(CCI_I22_CCI_I22_RMI_65, "RMI.65", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CCI_I22_CCI_I22_OBX_66, "OBX.66", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_67, "PRT.67", HL7::optional, HL7::repetition_on);
    addObject<VAR>(CCI_I22_CCI_I22_VAR_71, "VAR.71", HL7::optional, HL7::repetition_on);
    addObject<ACC>(CCI_I22_CCI_I22_ACC_72, "ACC.72", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(CCI_I22_CCI_I22_AL1_73, "AL1.73", HL7::initialized, HL7::repetition_off);
    addObject<DB1>(CCI_I22_CCI_I22_DB1_74, "DB1.74", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(CCI_I22_CCI_I22_DG1_75, "DG1.75", HL7::initialized, HL7::repetition_off);
    addObject<DRG>(CCI_I22_CCI_I22_DRG_76, "DRG.76", HL7::initialized, HL7::repetition_off);
    addObject<IAM>(CCI_I22_CCI_I22_IAM_77, "IAM.77", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(CCI_I22_CCI_I22_OBR_78, "OBR.78", HL7::initialized, HL7::repetition_off);
    addObject<ODS>(CCI_I22_CCI_I22_ODS_79, "ODS.79", HL7::initialized, HL7::repetition_off);
    addObject<PDA>(CCI_I22_CCI_I22_PDA_80, "PDA.80", HL7::initialized, HL7::repetition_off);
    addObject<PR1>(CCI_I22_CCI_I22_PR1_81, "PR1.81", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_82, "PRT.82", HL7::optional, HL7::repetition_on);
    addObject<RF1>(CCI_I22_CCI_I22_RF1_83, "RF1.83", HL7::initialized, HL7::repetition_off);
    addObject<RMI>(CCI_I22_CCI_I22_RMI_84, "RMI.84", HL7::initialized, HL7::repetition_off);
    addObject<ACC>(CCI_I22_CCI_I22_ACC_85, "ACC.85", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(CCI_I22_CCI_I22_AL1_86, "AL1.86", HL7::initialized, HL7::repetition_off);
    addObject<DB1>(CCI_I22_CCI_I22_DB1_87, "DB1.87", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(CCI_I22_CCI_I22_DG1_88, "DG1.88", HL7::initialized, HL7::repetition_off);
    addObject<DRG>(CCI_I22_CCI_I22_DRG_89, "DRG.89", HL7::initialized, HL7::repetition_off);
    addObject<IAM>(CCI_I22_CCI_I22_IAM_90, "IAM.90", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(CCI_I22_CCI_I22_OBR_91, "OBR.91", HL7::initialized, HL7::repetition_off);
    addObject<ODS>(CCI_I22_CCI_I22_ODS_92, "ODS.92", HL7::initialized, HL7::repetition_off);
    addObject<PDA>(CCI_I22_CCI_I22_PDA_93, "PDA.93", HL7::initialized, HL7::repetition_off);
    addObject<PR1>(CCI_I22_CCI_I22_PR1_94, "PR1.94", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_95, "PRT.95", HL7::optional, HL7::repetition_on);
    addObject<RF1>(CCI_I22_CCI_I22_RF1_96, "RF1.96", HL7::initialized, HL7::repetition_off);
    addObject<RMI>(CCI_I22_CCI_I22_RMI_97, "RMI.97", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CCI_I22_CCI_I22_OBX_98, "OBX.98", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_99, "PRT.99", HL7::optional, HL7::repetition_on);
    addObject<ACC>(CCI_I22_CCI_I22_ACC_100, "ACC.100", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(CCI_I22_CCI_I22_AL1_101, "AL1.101", HL7::initialized, HL7::repetition_off);
    addObject<DB1>(CCI_I22_CCI_I22_DB1_102, "DB1.102", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(CCI_I22_CCI_I22_DG1_103, "DG1.103", HL7::initialized, HL7::repetition_off);
    addObject<DRG>(CCI_I22_CCI_I22_DRG_104, "DRG.104", HL7::initialized, HL7::repetition_off);
    addObject<IAM>(CCI_I22_CCI_I22_IAM_105, "IAM.105", HL7::initialized, HL7::repetition_off);
    addObject<OBR>(CCI_I22_CCI_I22_OBR_106, "OBR.106", HL7::initialized, HL7::repetition_off);
    addObject<ODS>(CCI_I22_CCI_I22_ODS_107, "ODS.107", HL7::initialized, HL7::repetition_off);
    addObject<PDA>(CCI_I22_CCI_I22_PDA_108, "PDA.108", HL7::initialized, HL7::repetition_off);
    addObject<PR1>(CCI_I22_CCI_I22_PR1_109, "PR1.109", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_110, "PRT.110", HL7::optional, HL7::repetition_on);
    addObject<RF1>(CCI_I22_CCI_I22_RF1_111, "RF1.111", HL7::initialized, HL7::repetition_off);
    addObject<RMI>(CCI_I22_CCI_I22_RMI_112, "RMI.112", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CCI_I22_CCI_I22_OBX_113, "OBX.113", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_114, "PRT.114", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CCI_I22_CCI_I22_PRD_115, "PRD.115", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_116, "PRT.116", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(CCI_I22_CCI_I22_ROL_117, "ROL.117", HL7::initialized, HL7::repetition_off);
    addObject<GOL>(CCI_I22_CCI_I22_GOL_120, "GOL.120", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(CCI_I22_CCI_I22_VAR_121, "VAR.121", HL7::optional, HL7::repetition_on);
    addObject<VAR>(CCI_I22_CCI_I22_VAR_123, "VAR.123", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CCI_I22_CCI_I22_PRD_124, "PRD.124", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_125, "PRT.125", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(CCI_I22_CCI_I22_ROL_126, "ROL.126", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(CCI_I22_CCI_I22_VAR_128, "VAR.128", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCI_I22_CCI_I22_OBX_129, "OBX.129", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_130, "PRT.130", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CCI_I22_CCI_I22_PRD_131, "PRD.131", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_132, "PRT.132", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(CCI_I22_CCI_I22_ROL_133, "ROL.133", HL7::initialized, HL7::repetition_off);
    addObject<IN1>(CCI_I22_CCI_I22_IN1_134, "IN1.134", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(CCI_I22_CCI_I22_IN2_135, "IN2.135", HL7::optional, HL7::repetition_off);
    addObject<IN3>(CCI_I22_CCI_I22_IN3_136, "IN3.136", HL7::optional, HL7::repetition_off);
    addObject<CTI>(CCI_I22_CCI_I22_CTI_140, "CTI.140", HL7::optional, HL7::repetition_on);
    addObject<ORC>(CCI_I22_CCI_I22_ORC_141, "ORC.141", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_143, "PRT.143", HL7::optional, HL7::repetition_on);
    addObject<RXC>(CCI_I22_CCI_I22_RXC_144, "RXC.144", HL7::optional, HL7::repetition_on);
    addObject<RXO>(CCI_I22_CCI_I22_RXO_145, "RXO.145", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CCI_I22_CCI_I22_OBX_147, "OBX.147", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_148, "PRT.148", HL7::optional, HL7::repetition_on);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_150, "PRT.150", HL7::optional, HL7::repetition_on);
    addObject<RXC>(CCI_I22_CCI_I22_RXC_151, "RXC.151", HL7::optional, HL7::repetition_on);
    addObject<RXO>(CCI_I22_CCI_I22_RXO_152, "RXO.152", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_155, "PRT.155", HL7::optional, HL7::repetition_on);
    addObject<RXC>(CCI_I22_CCI_I22_RXC_156, "RXC.156", HL7::optional, HL7::repetition_on);
    addObject<RXE>(CCI_I22_CCI_I22_RXE_157, "RXE.157", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CCI_I22_CCI_I22_OBX_159, "OBX.159", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_160, "PRT.160", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCI_I22_CCI_I22_OBX_161, "OBX.161", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_162, "PRT.162", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCI_I22_CCI_I22_OBX_163, "OBX.163", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_164, "PRT.164", HL7::optional, HL7::repetition_on);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_166, "PRT.166", HL7::optional, HL7::repetition_on);
    addObject<RXC>(CCI_I22_CCI_I22_RXC_167, "RXC.167", HL7::optional, HL7::repetition_on);
    addObject<RXO>(CCI_I22_CCI_I22_RXO_168, "RXO.168", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_171, "PRT.171", HL7::optional, HL7::repetition_on);
    addObject<RXC>(CCI_I22_CCI_I22_RXC_172, "RXC.172", HL7::optional, HL7::repetition_on);
    addObject<RXE>(CCI_I22_CCI_I22_RXE_173, "RXE.173", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_176, "PRT.176", HL7::optional, HL7::repetition_on);
    addObject<RXA>(CCI_I22_CCI_I22_RXA_177, "RXA.177", HL7::initialized, HL7::repetition_off);
    addObject<RXR>(CCI_I22_CCI_I22_RXR_178, "RXR.178", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(CCI_I22_CCI_I22_OBX_179, "OBX.179", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_180, "PRT.180", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCI_I22_CCI_I22_OBX_181, "OBX.181", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_182, "PRT.182", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCI_I22_CCI_I22_OBX_183, "OBX.183", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_184, "PRT.184", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCI_I22_CCI_I22_OBX_185, "OBX.185", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_186, "PRT.186", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCI_I22_CCI_I22_OBX_187, "OBX.187", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_188, "PRT.188", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCI_I22_CCI_I22_OBX_189, "OBX.189", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_190, "PRT.190", HL7::optional, HL7::repetition_on);
    addObject<PTH>(CCI_I22_CCI_I22_PTH_193, "PTH.193", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(CCI_I22_CCI_I22_VAR_194, "VAR.194", HL7::optional, HL7::repetition_on);
    addObject<VAR>(CCI_I22_CCI_I22_VAR_196, "VAR.196", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CCI_I22_CCI_I22_PRD_197, "PRD.197", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_198, "PRT.198", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(CCI_I22_CCI_I22_ROL_199, "ROL.199", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(CCI_I22_CCI_I22_VAR_201, "VAR.201", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCI_I22_CCI_I22_OBX_202, "OBX.202", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_203, "PRT.203", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CCI_I22_CCI_I22_PRD_204, "PRD.204", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_205, "PRT.205", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(CCI_I22_CCI_I22_ROL_206, "ROL.206", HL7::initialized, HL7::repetition_off);
    addObject<PV1>(CCI_I22_CCI_I22_PV1_207, "PV1.207", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(CCI_I22_CCI_I22_PV2_208, "PV2.208", HL7::optional, HL7::repetition_off);
    addObject<PRB>(CCI_I22_CCI_I22_PRB_211, "PRB.211", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(CCI_I22_CCI_I22_VAR_212, "VAR.212", HL7::optional, HL7::repetition_on);
    addObject<VAR>(CCI_I22_CCI_I22_VAR_214, "VAR.214", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CCI_I22_CCI_I22_PRD_215, "PRD.215", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_216, "PRT.216", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(CCI_I22_CCI_I22_ROL_217, "ROL.217", HL7::initialized, HL7::repetition_off);
    addObject<VAR>(CCI_I22_CCI_I22_VAR_219, "VAR.219", HL7::optional, HL7::repetition_on);
    addObject<OBX>(CCI_I22_CCI_I22_OBX_220, "OBX.220", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_221, "PRT.221", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CCI_I22_CCI_I22_PRD_222, "PRD.222", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(CCI_I22_CCI_I22_PRT_223, "PRT.223", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(CCI_I22_CCI_I22_ROL_224, "ROL.224", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, CCI_I22_CCI_I22_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, CCI_I22_CCI_I22_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, CCI_I22_CCI_I22_UAC_3);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, CCI_I22_CCI_I22_MSA_4);
  }
  ERR* getERR_5(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, CCI_I22_CCI_I22_ERR_5);
  }
  PID* getPID_6(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, CCI_I22_CCI_I22_PID_6);
  }
  PD1* getPD1_7(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, CCI_I22_CCI_I22_PD1_7);
  }
  NK1* getNK1_8(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, CCI_I22_CCI_I22_NK1_8);
  }
  REL* getREL_17(size_t index = 0) {
    return (REL*)this->getObjectSafe(index, CCI_I22_CCI_I22_REL_17);
  }
  SCH* getSCH_19(size_t index = 0) {
    return (SCH*)this->getObjectSafe(index, CCI_I22_CCI_I22_SCH_19);
  }
  RGS* getRGS_21(size_t index = 0) {
    return (RGS*)this->getObjectSafe(index, CCI_I22_CCI_I22_RGS_21);
  }
  AIG* getAIG_24(size_t index = 0) {
    return (AIG*)this->getObjectSafe(index, CCI_I22_CCI_I22_AIG_24);
  }
  AIL* getAIL_25(size_t index = 0) {
    return (AIL*)this->getObjectSafe(index, CCI_I22_CCI_I22_AIL_25);
  }
  AIP* getAIP_26(size_t index = 0) {
    return (AIP*)this->getObjectSafe(index, CCI_I22_CCI_I22_AIP_26);
  }
  AIS* getAIS_27(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, CCI_I22_CCI_I22_AIS_27);
  }
  AIG* getAIG_28(size_t index = 0) {
    return (AIG*)this->getObjectSafe(index, CCI_I22_CCI_I22_AIG_28);
  }
  AIL* getAIL_29(size_t index = 0) {
    return (AIL*)this->getObjectSafe(index, CCI_I22_CCI_I22_AIL_29);
  }
  AIP* getAIP_30(size_t index = 0) {
    return (AIP*)this->getObjectSafe(index, CCI_I22_CCI_I22_AIP_30);
  }
  AIS* getAIS_31(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, CCI_I22_CCI_I22_AIS_31);
  }
  OBX* getOBX_32(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCI_I22_CCI_I22_OBX_32);
  }
  PRT* getPRT_33(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_33);
  }
  CTI* getCTI_36(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, CCI_I22_CCI_I22_CTI_36);
  }
  ORC* getORC_37(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, CCI_I22_CCI_I22_ORC_37);
  }
  ACC* getACC_40(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, CCI_I22_CCI_I22_ACC_40);
  }
  AL1* getAL1_41(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, CCI_I22_CCI_I22_AL1_41);
  }
  DB1* getDB1_42(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, CCI_I22_CCI_I22_DB1_42);
  }
  DG1* getDG1_43(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, CCI_I22_CCI_I22_DG1_43);
  }
  DRG* getDRG_44(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, CCI_I22_CCI_I22_DRG_44);
  }
  IAM* getIAM_45(size_t index = 0) {
    return (IAM*)this->getObjectSafe(index, CCI_I22_CCI_I22_IAM_45);
  }
  OBR* getOBR_46(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, CCI_I22_CCI_I22_OBR_46);
  }
  ODS* getODS_47(size_t index = 0) {
    return (ODS*)this->getObjectSafe(index, CCI_I22_CCI_I22_ODS_47);
  }
  PDA* getPDA_48(size_t index = 0) {
    return (PDA*)this->getObjectSafe(index, CCI_I22_CCI_I22_PDA_48);
  }
  PR1* getPR1_49(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, CCI_I22_CCI_I22_PR1_49);
  }
  PRT* getPRT_50(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_50);
  }
  RF1* getRF1_51(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, CCI_I22_CCI_I22_RF1_51);
  }
  RMI* getRMI_52(size_t index = 0) {
    return (RMI*)this->getObjectSafe(index, CCI_I22_CCI_I22_RMI_52);
  }
  ACC* getACC_53(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, CCI_I22_CCI_I22_ACC_53);
  }
  AL1* getAL1_54(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, CCI_I22_CCI_I22_AL1_54);
  }
  DB1* getDB1_55(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, CCI_I22_CCI_I22_DB1_55);
  }
  DG1* getDG1_56(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, CCI_I22_CCI_I22_DG1_56);
  }
  DRG* getDRG_57(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, CCI_I22_CCI_I22_DRG_57);
  }
  IAM* getIAM_58(size_t index = 0) {
    return (IAM*)this->getObjectSafe(index, CCI_I22_CCI_I22_IAM_58);
  }
  OBR* getOBR_59(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, CCI_I22_CCI_I22_OBR_59);
  }
  ODS* getODS_60(size_t index = 0) {
    return (ODS*)this->getObjectSafe(index, CCI_I22_CCI_I22_ODS_60);
  }
  PDA* getPDA_61(size_t index = 0) {
    return (PDA*)this->getObjectSafe(index, CCI_I22_CCI_I22_PDA_61);
  }
  PR1* getPR1_62(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, CCI_I22_CCI_I22_PR1_62);
  }
  PRT* getPRT_63(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_63);
  }
  RF1* getRF1_64(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, CCI_I22_CCI_I22_RF1_64);
  }
  RMI* getRMI_65(size_t index = 0) {
    return (RMI*)this->getObjectSafe(index, CCI_I22_CCI_I22_RMI_65);
  }
  OBX* getOBX_66(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCI_I22_CCI_I22_OBX_66);
  }
  PRT* getPRT_67(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_67);
  }
  VAR* getVAR_71(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCI_I22_CCI_I22_VAR_71);
  }
  ACC* getACC_72(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, CCI_I22_CCI_I22_ACC_72);
  }
  AL1* getAL1_73(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, CCI_I22_CCI_I22_AL1_73);
  }
  DB1* getDB1_74(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, CCI_I22_CCI_I22_DB1_74);
  }
  DG1* getDG1_75(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, CCI_I22_CCI_I22_DG1_75);
  }
  DRG* getDRG_76(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, CCI_I22_CCI_I22_DRG_76);
  }
  IAM* getIAM_77(size_t index = 0) {
    return (IAM*)this->getObjectSafe(index, CCI_I22_CCI_I22_IAM_77);
  }
  OBR* getOBR_78(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, CCI_I22_CCI_I22_OBR_78);
  }
  ODS* getODS_79(size_t index = 0) {
    return (ODS*)this->getObjectSafe(index, CCI_I22_CCI_I22_ODS_79);
  }
  PDA* getPDA_80(size_t index = 0) {
    return (PDA*)this->getObjectSafe(index, CCI_I22_CCI_I22_PDA_80);
  }
  PR1* getPR1_81(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, CCI_I22_CCI_I22_PR1_81);
  }
  PRT* getPRT_82(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_82);
  }
  RF1* getRF1_83(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, CCI_I22_CCI_I22_RF1_83);
  }
  RMI* getRMI_84(size_t index = 0) {
    return (RMI*)this->getObjectSafe(index, CCI_I22_CCI_I22_RMI_84);
  }
  ACC* getACC_85(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, CCI_I22_CCI_I22_ACC_85);
  }
  AL1* getAL1_86(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, CCI_I22_CCI_I22_AL1_86);
  }
  DB1* getDB1_87(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, CCI_I22_CCI_I22_DB1_87);
  }
  DG1* getDG1_88(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, CCI_I22_CCI_I22_DG1_88);
  }
  DRG* getDRG_89(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, CCI_I22_CCI_I22_DRG_89);
  }
  IAM* getIAM_90(size_t index = 0) {
    return (IAM*)this->getObjectSafe(index, CCI_I22_CCI_I22_IAM_90);
  }
  OBR* getOBR_91(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, CCI_I22_CCI_I22_OBR_91);
  }
  ODS* getODS_92(size_t index = 0) {
    return (ODS*)this->getObjectSafe(index, CCI_I22_CCI_I22_ODS_92);
  }
  PDA* getPDA_93(size_t index = 0) {
    return (PDA*)this->getObjectSafe(index, CCI_I22_CCI_I22_PDA_93);
  }
  PR1* getPR1_94(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, CCI_I22_CCI_I22_PR1_94);
  }
  PRT* getPRT_95(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_95);
  }
  RF1* getRF1_96(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, CCI_I22_CCI_I22_RF1_96);
  }
  RMI* getRMI_97(size_t index = 0) {
    return (RMI*)this->getObjectSafe(index, CCI_I22_CCI_I22_RMI_97);
  }
  OBX* getOBX_98(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCI_I22_CCI_I22_OBX_98);
  }
  PRT* getPRT_99(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_99);
  }
  ACC* getACC_100(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, CCI_I22_CCI_I22_ACC_100);
  }
  AL1* getAL1_101(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, CCI_I22_CCI_I22_AL1_101);
  }
  DB1* getDB1_102(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, CCI_I22_CCI_I22_DB1_102);
  }
  DG1* getDG1_103(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, CCI_I22_CCI_I22_DG1_103);
  }
  DRG* getDRG_104(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, CCI_I22_CCI_I22_DRG_104);
  }
  IAM* getIAM_105(size_t index = 0) {
    return (IAM*)this->getObjectSafe(index, CCI_I22_CCI_I22_IAM_105);
  }
  OBR* getOBR_106(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, CCI_I22_CCI_I22_OBR_106);
  }
  ODS* getODS_107(size_t index = 0) {
    return (ODS*)this->getObjectSafe(index, CCI_I22_CCI_I22_ODS_107);
  }
  PDA* getPDA_108(size_t index = 0) {
    return (PDA*)this->getObjectSafe(index, CCI_I22_CCI_I22_PDA_108);
  }
  PR1* getPR1_109(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, CCI_I22_CCI_I22_PR1_109);
  }
  PRT* getPRT_110(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_110);
  }
  RF1* getRF1_111(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, CCI_I22_CCI_I22_RF1_111);
  }
  RMI* getRMI_112(size_t index = 0) {
    return (RMI*)this->getObjectSafe(index, CCI_I22_CCI_I22_RMI_112);
  }
  OBX* getOBX_113(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCI_I22_CCI_I22_OBX_113);
  }
  PRT* getPRT_114(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_114);
  }
  PRD* getPRD_115(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRD_115);
  }
  PRT* getPRT_116(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_116);
  }
  ROL* getROL_117(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, CCI_I22_CCI_I22_ROL_117);
  }
  GOL* getGOL_120(size_t index = 0) {
    return (GOL*)this->getObjectSafe(index, CCI_I22_CCI_I22_GOL_120);
  }
  VAR* getVAR_121(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCI_I22_CCI_I22_VAR_121);
  }
  VAR* getVAR_123(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCI_I22_CCI_I22_VAR_123);
  }
  PRD* getPRD_124(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRD_124);
  }
  PRT* getPRT_125(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_125);
  }
  ROL* getROL_126(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, CCI_I22_CCI_I22_ROL_126);
  }
  VAR* getVAR_128(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCI_I22_CCI_I22_VAR_128);
  }
  OBX* getOBX_129(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCI_I22_CCI_I22_OBX_129);
  }
  PRT* getPRT_130(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_130);
  }
  PRD* getPRD_131(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRD_131);
  }
  PRT* getPRT_132(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_132);
  }
  ROL* getROL_133(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, CCI_I22_CCI_I22_ROL_133);
  }
  IN1* getIN1_134(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, CCI_I22_CCI_I22_IN1_134);
  }
  IN2* getIN2_135(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, CCI_I22_CCI_I22_IN2_135);
  }
  IN3* getIN3_136(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, CCI_I22_CCI_I22_IN3_136);
  }
  CTI* getCTI_140(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, CCI_I22_CCI_I22_CTI_140);
  }
  ORC* getORC_141(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, CCI_I22_CCI_I22_ORC_141);
  }
  PRT* getPRT_143(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_143);
  }
  RXC* getRXC_144(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, CCI_I22_CCI_I22_RXC_144);
  }
  RXO* getRXO_145(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, CCI_I22_CCI_I22_RXO_145);
  }
  OBX* getOBX_147(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCI_I22_CCI_I22_OBX_147);
  }
  PRT* getPRT_148(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_148);
  }
  PRT* getPRT_150(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_150);
  }
  RXC* getRXC_151(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, CCI_I22_CCI_I22_RXC_151);
  }
  RXO* getRXO_152(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, CCI_I22_CCI_I22_RXO_152);
  }
  PRT* getPRT_155(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_155);
  }
  RXC* getRXC_156(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, CCI_I22_CCI_I22_RXC_156);
  }
  RXE* getRXE_157(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, CCI_I22_CCI_I22_RXE_157);
  }
  OBX* getOBX_159(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCI_I22_CCI_I22_OBX_159);
  }
  PRT* getPRT_160(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_160);
  }
  OBX* getOBX_161(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCI_I22_CCI_I22_OBX_161);
  }
  PRT* getPRT_162(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_162);
  }
  OBX* getOBX_163(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCI_I22_CCI_I22_OBX_163);
  }
  PRT* getPRT_164(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_164);
  }
  PRT* getPRT_166(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_166);
  }
  RXC* getRXC_167(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, CCI_I22_CCI_I22_RXC_167);
  }
  RXO* getRXO_168(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, CCI_I22_CCI_I22_RXO_168);
  }
  PRT* getPRT_171(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_171);
  }
  RXC* getRXC_172(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, CCI_I22_CCI_I22_RXC_172);
  }
  RXE* getRXE_173(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, CCI_I22_CCI_I22_RXE_173);
  }
  PRT* getPRT_176(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_176);
  }
  RXA* getRXA_177(size_t index = 0) {
    return (RXA*)this->getObjectSafe(index, CCI_I22_CCI_I22_RXA_177);
  }
  RXR* getRXR_178(size_t index = 0) {
    return (RXR*)this->getObjectSafe(index, CCI_I22_CCI_I22_RXR_178);
  }
  OBX* getOBX_179(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCI_I22_CCI_I22_OBX_179);
  }
  PRT* getPRT_180(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_180);
  }
  OBX* getOBX_181(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCI_I22_CCI_I22_OBX_181);
  }
  PRT* getPRT_182(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_182);
  }
  OBX* getOBX_183(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCI_I22_CCI_I22_OBX_183);
  }
  PRT* getPRT_184(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_184);
  }
  OBX* getOBX_185(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCI_I22_CCI_I22_OBX_185);
  }
  PRT* getPRT_186(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_186);
  }
  OBX* getOBX_187(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCI_I22_CCI_I22_OBX_187);
  }
  PRT* getPRT_188(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_188);
  }
  OBX* getOBX_189(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCI_I22_CCI_I22_OBX_189);
  }
  PRT* getPRT_190(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_190);
  }
  PTH* getPTH_193(size_t index = 0) {
    return (PTH*)this->getObjectSafe(index, CCI_I22_CCI_I22_PTH_193);
  }
  VAR* getVAR_194(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCI_I22_CCI_I22_VAR_194);
  }
  VAR* getVAR_196(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCI_I22_CCI_I22_VAR_196);
  }
  PRD* getPRD_197(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRD_197);
  }
  PRT* getPRT_198(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_198);
  }
  ROL* getROL_199(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, CCI_I22_CCI_I22_ROL_199);
  }
  VAR* getVAR_201(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCI_I22_CCI_I22_VAR_201);
  }
  OBX* getOBX_202(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCI_I22_CCI_I22_OBX_202);
  }
  PRT* getPRT_203(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_203);
  }
  PRD* getPRD_204(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRD_204);
  }
  PRT* getPRT_205(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_205);
  }
  ROL* getROL_206(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, CCI_I22_CCI_I22_ROL_206);
  }
  PV1* getPV1_207(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, CCI_I22_CCI_I22_PV1_207);
  }
  PV2* getPV2_208(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, CCI_I22_CCI_I22_PV2_208);
  }
  PRB* getPRB_211(size_t index = 0) {
    return (PRB*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRB_211);
  }
  VAR* getVAR_212(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCI_I22_CCI_I22_VAR_212);
  }
  VAR* getVAR_214(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCI_I22_CCI_I22_VAR_214);
  }
  PRD* getPRD_215(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRD_215);
  }
  PRT* getPRT_216(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_216);
  }
  ROL* getROL_217(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, CCI_I22_CCI_I22_ROL_217);
  }
  VAR* getVAR_219(size_t index = 0) {
    return (VAR*)this->getObjectSafe(index, CCI_I22_CCI_I22_VAR_219);
  }
  OBX* getOBX_220(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, CCI_I22_CCI_I22_OBX_220);
  }
  PRT* getPRT_221(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_221);
  }
  PRD* getPRD_222(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRD_222);
  }
  PRT* getPRT_223(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, CCI_I22_CCI_I22_PRT_223);
  }
  ROL* getROL_224(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, CCI_I22_CCI_I22_ROL_224);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_5(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_ERR_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_6(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PID_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_7(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PD1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_8(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_NK1_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isREL_17(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_REL_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSCH_19(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_SCH_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRGS_21(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_RGS_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIG_24(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_AIG_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIL_25(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_AIL_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIP_26(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_AIP_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIS_27(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_AIS_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIG_28(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_AIG_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIL_29(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_AIL_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIP_30(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_AIP_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIS_31(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_AIS_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_32(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_OBX_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_33(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_36(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_CTI_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_37(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_ORC_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_40(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_ACC_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_41(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_AL1_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_42(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_DB1_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_43(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_DG1_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_44(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_DRG_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIAM_45(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_IAM_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_46(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_OBR_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODS_47(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_ODS_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPDA_48(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PDA_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_49(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PR1_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_50(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_51(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_RF1_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRMI_52(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_RMI_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_53(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_ACC_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_54(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_AL1_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_55(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_DB1_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_56(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_DG1_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_57(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_DRG_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIAM_58(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_IAM_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_59(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_OBR_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODS_60(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_ODS_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPDA_61(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PDA_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_62(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PR1_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_63(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_64(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_RF1_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRMI_65(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_RMI_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_66(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_OBX_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_67(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_71(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_VAR_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_72(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_ACC_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_73(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_AL1_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_74(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_DB1_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_75(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_DG1_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_76(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_DRG_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIAM_77(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_IAM_77) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_78(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_OBR_78) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODS_79(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_ODS_79) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPDA_80(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PDA_80) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_81(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PR1_81) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_82(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_82) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_83(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_RF1_83) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRMI_84(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_RMI_84) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_85(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_ACC_85) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_86(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_AL1_86) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_87(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_DB1_87) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_88(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_DG1_88) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_89(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_DRG_89) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIAM_90(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_IAM_90) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_91(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_OBR_91) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODS_92(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_ODS_92) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPDA_93(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PDA_93) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_94(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PR1_94) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_95(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_95) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_96(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_RF1_96) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRMI_97(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_RMI_97) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_98(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_OBX_98) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_99(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_99) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_100(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_ACC_100) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_101(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_AL1_101) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_102(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_DB1_102) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_103(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_DG1_103) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_104(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_DRG_104) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIAM_105(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_IAM_105) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_106(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_OBR_106) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODS_107(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_ODS_107) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPDA_108(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PDA_108) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_109(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PR1_109) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_110(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_110) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_111(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_RF1_111) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRMI_112(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_RMI_112) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_113(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_OBX_113) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_114(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_114) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_115(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRD_115) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_116(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_116) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_117(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_ROL_117) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGOL_120(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_GOL_120) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_121(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_VAR_121) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_123(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_VAR_123) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_124(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRD_124) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_125(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_125) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_126(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_ROL_126) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_128(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_VAR_128) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_129(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_OBX_129) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_130(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_130) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_131(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRD_131) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_132(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_132) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_133(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_ROL_133) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_134(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_IN1_134) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_135(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_IN2_135) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_136(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_IN3_136) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_140(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_CTI_140) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_141(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_ORC_141) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_143(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_143) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_144(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_RXC_144) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_145(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_RXO_145) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_147(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_OBX_147) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_148(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_148) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_150(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_150) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_151(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_RXC_151) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_152(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_RXO_152) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_155(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_155) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_156(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_RXC_156) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXE_157(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_RXE_157) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_159(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_OBX_159) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_160(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_160) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_161(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_OBX_161) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_162(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_162) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_163(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_OBX_163) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_164(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_164) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_166(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_166) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_167(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_RXC_167) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_168(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_RXO_168) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_171(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_171) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_172(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_RXC_172) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXE_173(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_RXE_173) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_176(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_176) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXA_177(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_RXA_177) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXR_178(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_RXR_178) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_179(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_OBX_179) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_180(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_180) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_181(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_OBX_181) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_182(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_182) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_183(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_OBX_183) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_184(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_184) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_185(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_OBX_185) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_186(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_186) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_187(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_OBX_187) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_188(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_188) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_189(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_OBX_189) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_190(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_190) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPTH_193(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PTH_193) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_194(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_VAR_194) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_196(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_VAR_196) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_197(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRD_197) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_198(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_198) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_199(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_ROL_199) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_201(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_VAR_201) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_202(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_OBX_202) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_203(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_203) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_204(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRD_204) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_205(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_205) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_206(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_ROL_206) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_207(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PV1_207) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_208(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PV2_208) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRB_211(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRB_211) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_212(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_VAR_212) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_214(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_VAR_214) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_215(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRD_215) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_216(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_216) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_217(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_ROL_217) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isVAR_219(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_VAR_219) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_220(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_OBX_220) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_221(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_221) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_222(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRD_222) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_223(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_PRT_223) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_224(size_t index = 0) {
    try {
      return this->getObject(index, CCI_I22_CCI_I22_ROL_224) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* CCI_I22_CCI_I22_ */
} /* namespace HL7_29 */
#endif /*  __CCI_I22_CCI_I22__29_H__ */
