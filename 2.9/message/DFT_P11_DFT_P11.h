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


#ifndef __DFT_P11_DFT_P11__29_H__
#define __DFT_P11_DFT_P11__29_H__

#include "../../common/Util.h"
#include "../segment/ACC.h"
#include "../segment/DB1.h"
#include "../segment/DG1.h"
#include "../segment/DRG.h"
#include "../segment/EVN.h"
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
#include "../segment/PR1.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/ROL.h"
#include "../segment/SFT.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct DFT_P11_DFT_P11_VISIT; /* VISIT */
struct DFT_P11_DFT_P11_COMMON_ORDER; /* COMMON_ORDER */
struct DFT_P11_DFT_P11_DIAGNOSIS; /* DIAGNOSIS */
struct DFT_P11_DFT_P11_INSURANCE; /* INSURANCE */
struct DFT_P11_DFT_P11_FINANCIAL; /* FINANCIAL */
struct DFT_P11_DFT_P11_TIMING_QUANTITY; /* TIMING_QUANTITY */
struct DFT_P11_DFT_P11_ORDER; /* ORDER */
struct DFT_P11_DFT_P11_OBSERVATION; /* OBSERVATION */
struct DFT_P11_DFT_P11_FINANCIAL_INSURANCE; /* FINANCIAL_INSURANCE */
struct DFT_P11_DFT_P11_FINANCIAL_PROCEDURE; /* FINANCIAL_PROCEDURE */
struct DFT_P11_DFT_P11_FINANCIAL_COMMON_ORDER; /* FINANCIAL_COMMON_ORDER */
struct DFT_P11_DFT_P11_DIAGNOSIS_FT1; /* DIAGNOSIS_FT1 */
struct DFT_P11_DFT_P11_FINANCIAL_TIMING_QUANTITY; /* FINANCIAL_TIMING_QUANTITY */
struct DFT_P11_DFT_P11_FINANCIAL_ORDER; /* FINANCIAL_ORDER */
struct DFT_P11_DFT_P11_FINANCIAL_OBSERVATION; /* FINANCIAL_OBSERVATION */
struct DFT_P11_DFT_P11_FINANCIAL_TIMING_QUANTITY; /* FINANCIAL_TIMING_QUANTITY */
struct DFT_P11_DFT_P11_FINANCIAL_ORDER; /* FINANCIAL_ORDER */
struct DFT_P11_DFT_P11_FINANCIAL_OBSERVATION; /* FINANCIAL_OBSERVATION */

/*  */
struct DFT_P11_DFT_P11 : public HL7Message {
  DFT_P11_DFT_P11() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DFT_P11_DFT_P11_MSH_1,
    DFT_P11_DFT_P11_SFT_2,
    DFT_P11_DFT_P11_UAC_3,
    DFT_P11_DFT_P11_EVN_4,
    DFT_P11_DFT_P11_PID_5,
    DFT_P11_DFT_P11_PRT_6,
    DFT_P11_DFT_P11_PD1_7,
    DFT_P11_DFT_P11_PRT_8,
    DFT_P11_DFT_P11_ROL_9,
    DFT_P11_DFT_P11_DB1_11,
    DFT_P11_DFT_P11_DRG_14,
    DFT_P11_DFT_P11_GT1_15,
    DFT_P11_DFT_P11_ACC_17,
    DFT_P11_DFT_P11_ORC_22,
    DFT_P11_DFT_P11_PRT_23,
    DFT_P11_DFT_P11_TQ1_24,
    DFT_P11_DFT_P11_TQ2_25,
    DFT_P11_DFT_P11_TQ1_26,
    DFT_P11_DFT_P11_TQ2_27,
    DFT_P11_DFT_P11_NTE_28,
    DFT_P11_DFT_P11_OBR_29,
    DFT_P11_DFT_P11_PRT_30,
    DFT_P11_DFT_P11_TQ1_31,
    DFT_P11_DFT_P11_TQ2_32,
    DFT_P11_DFT_P11_NTE_33,
    DFT_P11_DFT_P11_OBR_34,
    DFT_P11_DFT_P11_PRT_35,
    DFT_P11_DFT_P11_NTE_36,
    DFT_P11_DFT_P11_OBX_37,
    DFT_P11_DFT_P11_PRT_38,
    DFT_P11_DFT_P11_DG1_39,
    DFT_P11_DFT_P11_DRG_44,
    DFT_P11_DFT_P11_FT1_45,
    DFT_P11_DFT_P11_GT1_46,
    DFT_P11_DFT_P11_NTE_47,
    DFT_P11_DFT_P11_PRT_48,
    DFT_P11_DFT_P11_IN1_49,
    DFT_P11_DFT_P11_IN2_50,
    DFT_P11_DFT_P11_IN3_51,
    DFT_P11_DFT_P11_PRT_52,
    DFT_P11_DFT_P11_ROL_53,
    DFT_P11_DFT_P11_IN1_54,
    DFT_P11_DFT_P11_IN2_55,
    DFT_P11_DFT_P11_IN3_56,
    DFT_P11_DFT_P11_PRT_57,
    DFT_P11_DFT_P11_ROL_58,
    DFT_P11_DFT_P11_PR1_59,
    DFT_P11_DFT_P11_PRT_60,
    DFT_P11_DFT_P11_ROL_61,
    DFT_P11_DFT_P11_IN1_62,
    DFT_P11_DFT_P11_IN2_63,
    DFT_P11_DFT_P11_IN3_64,
    DFT_P11_DFT_P11_PRT_65,
    DFT_P11_DFT_P11_ROL_66,
    DFT_P11_DFT_P11_PR1_67,
    DFT_P11_DFT_P11_PRT_68,
    DFT_P11_DFT_P11_ROL_69,
    DFT_P11_DFT_P11_ORC_73,
    DFT_P11_DFT_P11_PRT_74,
    DFT_P11_DFT_P11_TQ1_75,
    DFT_P11_DFT_P11_TQ2_76,
    DFT_P11_DFT_P11_TQ1_77,
    DFT_P11_DFT_P11_TQ2_78,
    DFT_P11_DFT_P11_NTE_79,
    DFT_P11_DFT_P11_OBR_80,
    DFT_P11_DFT_P11_PRT_81,
    DFT_P11_DFT_P11_TQ1_82,
    DFT_P11_DFT_P11_TQ2_83,
    DFT_P11_DFT_P11_NTE_84,
    DFT_P11_DFT_P11_OBR_85,
    DFT_P11_DFT_P11_PRT_86,
    DFT_P11_DFT_P11_NTE_87,
    DFT_P11_DFT_P11_OBX_88,
    DFT_P11_DFT_P11_PRT_89,
    DFT_P11_DFT_P11_IN1_90,
    DFT_P11_DFT_P11_IN2_91,
    DFT_P11_DFT_P11_IN3_92,
    DFT_P11_DFT_P11_PRT_93,
    DFT_P11_DFT_P11_ROL_94,
    DFT_P11_DFT_P11_PR1_95,
    DFT_P11_DFT_P11_PRT_96,
    DFT_P11_DFT_P11_ROL_97,
    DFT_P11_DFT_P11_ORC_101,
    DFT_P11_DFT_P11_PRT_102,
    DFT_P11_DFT_P11_DG1_103,
    DFT_P11_DFT_P11_TQ1_104,
    DFT_P11_DFT_P11_TQ2_105,
    DFT_P11_DFT_P11_TQ1_106,
    DFT_P11_DFT_P11_TQ2_107,
    DFT_P11_DFT_P11_NTE_108,
    DFT_P11_DFT_P11_OBR_109,
    DFT_P11_DFT_P11_PRT_110,
    DFT_P11_DFT_P11_TQ1_111,
    DFT_P11_DFT_P11_TQ2_112,
    DFT_P11_DFT_P11_NTE_113,
    DFT_P11_DFT_P11_OBR_114,
    DFT_P11_DFT_P11_PRT_115,
    DFT_P11_DFT_P11_NTE_116,
    DFT_P11_DFT_P11_OBX_117,
    DFT_P11_DFT_P11_PRT_118,
    DFT_P11_DFT_P11_IN1_119,
    DFT_P11_DFT_P11_IN2_120,
    DFT_P11_DFT_P11_IN3_121,
    DFT_P11_DFT_P11_PRT_122,
    DFT_P11_DFT_P11_ROL_123,
    DFT_P11_DFT_P11_PRT_124,
    DFT_P11_DFT_P11_PV1_125,
    DFT_P11_DFT_P11_PV2_126,
    DFT_P11_DFT_P11_ROL_127,
    FIELD_ID_MAX
  };

  const char* className() const { return "DFT_P11_DFT_P11"; }
  DFT_P11_DFT_P11* create() const { return new DFT_P11_DFT_P11(); }

 private:
  /* Initialize object */
  void init() {
    setName("DFT_P11_DFT_P11");
    addObject<MSH>(DFT_P11_DFT_P11_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(DFT_P11_DFT_P11_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(DFT_P11_DFT_P11_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EVN>(DFT_P11_DFT_P11_EVN_4, "EVN.4", HL7::initialized, HL7::repetition_off);
    addObject<PID>(DFT_P11_DFT_P11_PID_5, "PID.5", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DFT_P11_DFT_P11_PRT_6, "PRT.6", HL7::optional, HL7::repetition_on);
    addObject<PD1>(DFT_P11_DFT_P11_PD1_7, "PD1.7", HL7::optional, HL7::repetition_off);
    addObject<PRT>(DFT_P11_DFT_P11_PRT_8, "PRT.8", HL7::optional, HL7::repetition_on);
    addObject<ROL>(DFT_P11_DFT_P11_ROL_9, "ROL.9", HL7::optional, HL7::repetition_on);
    addObject<DB1>(DFT_P11_DFT_P11_DB1_11, "DB1.11", HL7::optional, HL7::repetition_on);
    addObject<DRG>(DFT_P11_DFT_P11_DRG_14, "DRG.14", HL7::optional, HL7::repetition_off);
    addObject<GT1>(DFT_P11_DFT_P11_GT1_15, "GT1.15", HL7::optional, HL7::repetition_on);
    addObject<ACC>(DFT_P11_DFT_P11_ACC_17, "ACC.17", HL7::optional, HL7::repetition_off);
    addObject<ORC>(DFT_P11_DFT_P11_ORC_22, "ORC.22", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DFT_P11_DFT_P11_PRT_23, "PRT.23", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(DFT_P11_DFT_P11_TQ1_24, "TQ1.24", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(DFT_P11_DFT_P11_TQ2_25, "TQ2.25", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(DFT_P11_DFT_P11_TQ1_26, "TQ1.26", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(DFT_P11_DFT_P11_TQ2_27, "TQ2.27", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DFT_P11_DFT_P11_NTE_28, "NTE.28", HL7::optional, HL7::repetition_on);
    addObject<OBR>(DFT_P11_DFT_P11_OBR_29, "OBR.29", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DFT_P11_DFT_P11_PRT_30, "PRT.30", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(DFT_P11_DFT_P11_TQ1_31, "TQ1.31", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(DFT_P11_DFT_P11_TQ2_32, "TQ2.32", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DFT_P11_DFT_P11_NTE_33, "NTE.33", HL7::optional, HL7::repetition_on);
    addObject<OBR>(DFT_P11_DFT_P11_OBR_34, "OBR.34", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DFT_P11_DFT_P11_PRT_35, "PRT.35", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DFT_P11_DFT_P11_NTE_36, "NTE.36", HL7::optional, HL7::repetition_on);
    addObject<OBX>(DFT_P11_DFT_P11_OBX_37, "OBX.37", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DFT_P11_DFT_P11_PRT_38, "PRT.38", HL7::optional, HL7::repetition_on);
    addObject<DG1>(DFT_P11_DFT_P11_DG1_39, "DG1.39", HL7::initialized, HL7::repetition_off);
    addObject<DRG>(DFT_P11_DFT_P11_DRG_44, "DRG.44", HL7::optional, HL7::repetition_off);
    addObject<FT1>(DFT_P11_DFT_P11_FT1_45, "FT1.45", HL7::initialized, HL7::repetition_off);
    addObject<GT1>(DFT_P11_DFT_P11_GT1_46, "GT1.46", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DFT_P11_DFT_P11_NTE_47, "NTE.47", HL7::optional, HL7::repetition_on);
    addObject<PRT>(DFT_P11_DFT_P11_PRT_48, "PRT.48", HL7::optional, HL7::repetition_on);
    addObject<IN1>(DFT_P11_DFT_P11_IN1_49, "IN1.49", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(DFT_P11_DFT_P11_IN2_50, "IN2.50", HL7::optional, HL7::repetition_off);
    addObject<IN3>(DFT_P11_DFT_P11_IN3_51, "IN3.51", HL7::optional, HL7::repetition_on);
    addObject<PRT>(DFT_P11_DFT_P11_PRT_52, "PRT.52", HL7::optional, HL7::repetition_on);
    addObject<ROL>(DFT_P11_DFT_P11_ROL_53, "ROL.53", HL7::optional, HL7::repetition_on);
    addObject<IN1>(DFT_P11_DFT_P11_IN1_54, "IN1.54", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(DFT_P11_DFT_P11_IN2_55, "IN2.55", HL7::optional, HL7::repetition_off);
    addObject<IN3>(DFT_P11_DFT_P11_IN3_56, "IN3.56", HL7::optional, HL7::repetition_on);
    addObject<PRT>(DFT_P11_DFT_P11_PRT_57, "PRT.57", HL7::optional, HL7::repetition_on);
    addObject<ROL>(DFT_P11_DFT_P11_ROL_58, "ROL.58", HL7::optional, HL7::repetition_on);
    addObject<PR1>(DFT_P11_DFT_P11_PR1_59, "PR1.59", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DFT_P11_DFT_P11_PRT_60, "PRT.60", HL7::optional, HL7::repetition_on);
    addObject<ROL>(DFT_P11_DFT_P11_ROL_61, "ROL.61", HL7::optional, HL7::repetition_on);
    addObject<IN1>(DFT_P11_DFT_P11_IN1_62, "IN1.62", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(DFT_P11_DFT_P11_IN2_63, "IN2.63", HL7::optional, HL7::repetition_off);
    addObject<IN3>(DFT_P11_DFT_P11_IN3_64, "IN3.64", HL7::optional, HL7::repetition_on);
    addObject<PRT>(DFT_P11_DFT_P11_PRT_65, "PRT.65", HL7::optional, HL7::repetition_on);
    addObject<ROL>(DFT_P11_DFT_P11_ROL_66, "ROL.66", HL7::optional, HL7::repetition_on);
    addObject<PR1>(DFT_P11_DFT_P11_PR1_67, "PR1.67", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DFT_P11_DFT_P11_PRT_68, "PRT.68", HL7::optional, HL7::repetition_on);
    addObject<ROL>(DFT_P11_DFT_P11_ROL_69, "ROL.69", HL7::optional, HL7::repetition_on);
    addObject<ORC>(DFT_P11_DFT_P11_ORC_73, "ORC.73", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DFT_P11_DFT_P11_PRT_74, "PRT.74", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(DFT_P11_DFT_P11_TQ1_75, "TQ1.75", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(DFT_P11_DFT_P11_TQ2_76, "TQ2.76", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(DFT_P11_DFT_P11_TQ1_77, "TQ1.77", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(DFT_P11_DFT_P11_TQ2_78, "TQ2.78", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DFT_P11_DFT_P11_NTE_79, "NTE.79", HL7::optional, HL7::repetition_on);
    addObject<OBR>(DFT_P11_DFT_P11_OBR_80, "OBR.80", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DFT_P11_DFT_P11_PRT_81, "PRT.81", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(DFT_P11_DFT_P11_TQ1_82, "TQ1.82", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(DFT_P11_DFT_P11_TQ2_83, "TQ2.83", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DFT_P11_DFT_P11_NTE_84, "NTE.84", HL7::optional, HL7::repetition_on);
    addObject<OBR>(DFT_P11_DFT_P11_OBR_85, "OBR.85", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DFT_P11_DFT_P11_PRT_86, "PRT.86", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DFT_P11_DFT_P11_NTE_87, "NTE.87", HL7::optional, HL7::repetition_on);
    addObject<OBX>(DFT_P11_DFT_P11_OBX_88, "OBX.88", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DFT_P11_DFT_P11_PRT_89, "PRT.89", HL7::optional, HL7::repetition_on);
    addObject<IN1>(DFT_P11_DFT_P11_IN1_90, "IN1.90", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(DFT_P11_DFT_P11_IN2_91, "IN2.91", HL7::optional, HL7::repetition_off);
    addObject<IN3>(DFT_P11_DFT_P11_IN3_92, "IN3.92", HL7::optional, HL7::repetition_on);
    addObject<PRT>(DFT_P11_DFT_P11_PRT_93, "PRT.93", HL7::optional, HL7::repetition_on);
    addObject<ROL>(DFT_P11_DFT_P11_ROL_94, "ROL.94", HL7::optional, HL7::repetition_on);
    addObject<PR1>(DFT_P11_DFT_P11_PR1_95, "PR1.95", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DFT_P11_DFT_P11_PRT_96, "PRT.96", HL7::optional, HL7::repetition_on);
    addObject<ROL>(DFT_P11_DFT_P11_ROL_97, "ROL.97", HL7::optional, HL7::repetition_on);
    addObject<ORC>(DFT_P11_DFT_P11_ORC_101, "ORC.101", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DFT_P11_DFT_P11_PRT_102, "PRT.102", HL7::optional, HL7::repetition_on);
    addObject<DG1>(DFT_P11_DFT_P11_DG1_103, "DG1.103", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(DFT_P11_DFT_P11_TQ1_104, "TQ1.104", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(DFT_P11_DFT_P11_TQ2_105, "TQ2.105", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(DFT_P11_DFT_P11_TQ1_106, "TQ1.106", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(DFT_P11_DFT_P11_TQ2_107, "TQ2.107", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DFT_P11_DFT_P11_NTE_108, "NTE.108", HL7::optional, HL7::repetition_on);
    addObject<OBR>(DFT_P11_DFT_P11_OBR_109, "OBR.109", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DFT_P11_DFT_P11_PRT_110, "PRT.110", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(DFT_P11_DFT_P11_TQ1_111, "TQ1.111", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(DFT_P11_DFT_P11_TQ2_112, "TQ2.112", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DFT_P11_DFT_P11_NTE_113, "NTE.113", HL7::optional, HL7::repetition_on);
    addObject<OBR>(DFT_P11_DFT_P11_OBR_114, "OBR.114", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DFT_P11_DFT_P11_PRT_115, "PRT.115", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DFT_P11_DFT_P11_NTE_116, "NTE.116", HL7::optional, HL7::repetition_on);
    addObject<OBX>(DFT_P11_DFT_P11_OBX_117, "OBX.117", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DFT_P11_DFT_P11_PRT_118, "PRT.118", HL7::optional, HL7::repetition_on);
    addObject<IN1>(DFT_P11_DFT_P11_IN1_119, "IN1.119", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(DFT_P11_DFT_P11_IN2_120, "IN2.120", HL7::optional, HL7::repetition_off);
    addObject<IN3>(DFT_P11_DFT_P11_IN3_121, "IN3.121", HL7::optional, HL7::repetition_on);
    addObject<PRT>(DFT_P11_DFT_P11_PRT_122, "PRT.122", HL7::optional, HL7::repetition_on);
    addObject<ROL>(DFT_P11_DFT_P11_ROL_123, "ROL.123", HL7::optional, HL7::repetition_on);
    addObject<PRT>(DFT_P11_DFT_P11_PRT_124, "PRT.124", HL7::optional, HL7::repetition_on);
    addObject<PV1>(DFT_P11_DFT_P11_PV1_125, "PV1.125", HL7::optional, HL7::repetition_off);
    addObject<PV2>(DFT_P11_DFT_P11_PV2_126, "PV2.126", HL7::optional, HL7::repetition_off);
    addObject<ROL>(DFT_P11_DFT_P11_ROL_127, "ROL.127", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, DFT_P11_DFT_P11_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, DFT_P11_DFT_P11_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, DFT_P11_DFT_P11_UAC_3);
  }
  EVN* getEVN_4(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, DFT_P11_DFT_P11_EVN_4);
  }
  PID* getPID_5(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, DFT_P11_DFT_P11_PID_5);
  }
  PRT* getPRT_6(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P11_DFT_P11_PRT_6);
  }
  PD1* getPD1_7(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, DFT_P11_DFT_P11_PD1_7);
  }
  PRT* getPRT_8(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P11_DFT_P11_PRT_8);
  }
  ROL* getROL_9(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, DFT_P11_DFT_P11_ROL_9);
  }
  DB1* getDB1_11(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, DFT_P11_DFT_P11_DB1_11);
  }
  DRG* getDRG_14(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, DFT_P11_DFT_P11_DRG_14);
  }
  GT1* getGT1_15(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, DFT_P11_DFT_P11_GT1_15);
  }
  ACC* getACC_17(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, DFT_P11_DFT_P11_ACC_17);
  }
  ORC* getORC_22(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, DFT_P11_DFT_P11_ORC_22);
  }
  PRT* getPRT_23(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P11_DFT_P11_PRT_23);
  }
  TQ1* getTQ1_24(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, DFT_P11_DFT_P11_TQ1_24);
  }
  TQ2* getTQ2_25(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, DFT_P11_DFT_P11_TQ2_25);
  }
  TQ1* getTQ1_26(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, DFT_P11_DFT_P11_TQ1_26);
  }
  TQ2* getTQ2_27(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, DFT_P11_DFT_P11_TQ2_27);
  }
  NTE* getNTE_28(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DFT_P11_DFT_P11_NTE_28);
  }
  OBR* getOBR_29(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, DFT_P11_DFT_P11_OBR_29);
  }
  PRT* getPRT_30(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P11_DFT_P11_PRT_30);
  }
  TQ1* getTQ1_31(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, DFT_P11_DFT_P11_TQ1_31);
  }
  TQ2* getTQ2_32(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, DFT_P11_DFT_P11_TQ2_32);
  }
  NTE* getNTE_33(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DFT_P11_DFT_P11_NTE_33);
  }
  OBR* getOBR_34(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, DFT_P11_DFT_P11_OBR_34);
  }
  PRT* getPRT_35(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P11_DFT_P11_PRT_35);
  }
  NTE* getNTE_36(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DFT_P11_DFT_P11_NTE_36);
  }
  OBX* getOBX_37(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DFT_P11_DFT_P11_OBX_37);
  }
  PRT* getPRT_38(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P11_DFT_P11_PRT_38);
  }
  DG1* getDG1_39(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, DFT_P11_DFT_P11_DG1_39);
  }
  DRG* getDRG_44(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, DFT_P11_DFT_P11_DRG_44);
  }
  FT1* getFT1_45(size_t index = 0) {
    return (FT1*)this->getObjectSafe(index, DFT_P11_DFT_P11_FT1_45);
  }
  GT1* getGT1_46(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, DFT_P11_DFT_P11_GT1_46);
  }
  NTE* getNTE_47(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DFT_P11_DFT_P11_NTE_47);
  }
  PRT* getPRT_48(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P11_DFT_P11_PRT_48);
  }
  IN1* getIN1_49(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, DFT_P11_DFT_P11_IN1_49);
  }
  IN2* getIN2_50(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, DFT_P11_DFT_P11_IN2_50);
  }
  IN3* getIN3_51(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, DFT_P11_DFT_P11_IN3_51);
  }
  PRT* getPRT_52(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P11_DFT_P11_PRT_52);
  }
  ROL* getROL_53(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, DFT_P11_DFT_P11_ROL_53);
  }
  IN1* getIN1_54(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, DFT_P11_DFT_P11_IN1_54);
  }
  IN2* getIN2_55(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, DFT_P11_DFT_P11_IN2_55);
  }
  IN3* getIN3_56(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, DFT_P11_DFT_P11_IN3_56);
  }
  PRT* getPRT_57(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P11_DFT_P11_PRT_57);
  }
  ROL* getROL_58(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, DFT_P11_DFT_P11_ROL_58);
  }
  PR1* getPR1_59(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, DFT_P11_DFT_P11_PR1_59);
  }
  PRT* getPRT_60(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P11_DFT_P11_PRT_60);
  }
  ROL* getROL_61(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, DFT_P11_DFT_P11_ROL_61);
  }
  IN1* getIN1_62(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, DFT_P11_DFT_P11_IN1_62);
  }
  IN2* getIN2_63(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, DFT_P11_DFT_P11_IN2_63);
  }
  IN3* getIN3_64(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, DFT_P11_DFT_P11_IN3_64);
  }
  PRT* getPRT_65(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P11_DFT_P11_PRT_65);
  }
  ROL* getROL_66(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, DFT_P11_DFT_P11_ROL_66);
  }
  PR1* getPR1_67(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, DFT_P11_DFT_P11_PR1_67);
  }
  PRT* getPRT_68(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P11_DFT_P11_PRT_68);
  }
  ROL* getROL_69(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, DFT_P11_DFT_P11_ROL_69);
  }
  ORC* getORC_73(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, DFT_P11_DFT_P11_ORC_73);
  }
  PRT* getPRT_74(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P11_DFT_P11_PRT_74);
  }
  TQ1* getTQ1_75(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, DFT_P11_DFT_P11_TQ1_75);
  }
  TQ2* getTQ2_76(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, DFT_P11_DFT_P11_TQ2_76);
  }
  TQ1* getTQ1_77(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, DFT_P11_DFT_P11_TQ1_77);
  }
  TQ2* getTQ2_78(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, DFT_P11_DFT_P11_TQ2_78);
  }
  NTE* getNTE_79(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DFT_P11_DFT_P11_NTE_79);
  }
  OBR* getOBR_80(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, DFT_P11_DFT_P11_OBR_80);
  }
  PRT* getPRT_81(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P11_DFT_P11_PRT_81);
  }
  TQ1* getTQ1_82(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, DFT_P11_DFT_P11_TQ1_82);
  }
  TQ2* getTQ2_83(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, DFT_P11_DFT_P11_TQ2_83);
  }
  NTE* getNTE_84(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DFT_P11_DFT_P11_NTE_84);
  }
  OBR* getOBR_85(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, DFT_P11_DFT_P11_OBR_85);
  }
  PRT* getPRT_86(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P11_DFT_P11_PRT_86);
  }
  NTE* getNTE_87(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DFT_P11_DFT_P11_NTE_87);
  }
  OBX* getOBX_88(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DFT_P11_DFT_P11_OBX_88);
  }
  PRT* getPRT_89(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P11_DFT_P11_PRT_89);
  }
  IN1* getIN1_90(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, DFT_P11_DFT_P11_IN1_90);
  }
  IN2* getIN2_91(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, DFT_P11_DFT_P11_IN2_91);
  }
  IN3* getIN3_92(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, DFT_P11_DFT_P11_IN3_92);
  }
  PRT* getPRT_93(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P11_DFT_P11_PRT_93);
  }
  ROL* getROL_94(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, DFT_P11_DFT_P11_ROL_94);
  }
  PR1* getPR1_95(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, DFT_P11_DFT_P11_PR1_95);
  }
  PRT* getPRT_96(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P11_DFT_P11_PRT_96);
  }
  ROL* getROL_97(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, DFT_P11_DFT_P11_ROL_97);
  }
  ORC* getORC_101(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, DFT_P11_DFT_P11_ORC_101);
  }
  PRT* getPRT_102(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P11_DFT_P11_PRT_102);
  }
  DG1* getDG1_103(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, DFT_P11_DFT_P11_DG1_103);
  }
  TQ1* getTQ1_104(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, DFT_P11_DFT_P11_TQ1_104);
  }
  TQ2* getTQ2_105(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, DFT_P11_DFT_P11_TQ2_105);
  }
  TQ1* getTQ1_106(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, DFT_P11_DFT_P11_TQ1_106);
  }
  TQ2* getTQ2_107(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, DFT_P11_DFT_P11_TQ2_107);
  }
  NTE* getNTE_108(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DFT_P11_DFT_P11_NTE_108);
  }
  OBR* getOBR_109(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, DFT_P11_DFT_P11_OBR_109);
  }
  PRT* getPRT_110(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P11_DFT_P11_PRT_110);
  }
  TQ1* getTQ1_111(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, DFT_P11_DFT_P11_TQ1_111);
  }
  TQ2* getTQ2_112(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, DFT_P11_DFT_P11_TQ2_112);
  }
  NTE* getNTE_113(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DFT_P11_DFT_P11_NTE_113);
  }
  OBR* getOBR_114(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, DFT_P11_DFT_P11_OBR_114);
  }
  PRT* getPRT_115(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P11_DFT_P11_PRT_115);
  }
  NTE* getNTE_116(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DFT_P11_DFT_P11_NTE_116);
  }
  OBX* getOBX_117(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DFT_P11_DFT_P11_OBX_117);
  }
  PRT* getPRT_118(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P11_DFT_P11_PRT_118);
  }
  IN1* getIN1_119(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, DFT_P11_DFT_P11_IN1_119);
  }
  IN2* getIN2_120(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, DFT_P11_DFT_P11_IN2_120);
  }
  IN3* getIN3_121(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, DFT_P11_DFT_P11_IN3_121);
  }
  PRT* getPRT_122(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P11_DFT_P11_PRT_122);
  }
  ROL* getROL_123(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, DFT_P11_DFT_P11_ROL_123);
  }
  PRT* getPRT_124(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DFT_P11_DFT_P11_PRT_124);
  }
  PV1* getPV1_125(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, DFT_P11_DFT_P11_PV1_125);
  }
  PV2* getPV2_126(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, DFT_P11_DFT_P11_PV2_126);
  }
  ROL* getROL_127(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, DFT_P11_DFT_P11_ROL_127);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_4(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_EVN_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_5(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PID_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_6(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PRT_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_7(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PD1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_8(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PRT_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_9(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_ROL_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_11(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_DB1_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_14(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_DRG_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_15(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_GT1_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_17(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_ACC_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_22(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_ORC_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_23(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PRT_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_24(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_TQ1_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_25(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_TQ2_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_26(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_TQ1_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_27(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_TQ2_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_28(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_NTE_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_29(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_OBR_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_30(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PRT_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_31(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_TQ1_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_32(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_TQ2_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_33(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_NTE_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_34(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_OBR_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_35(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PRT_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_36(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_NTE_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_37(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_OBX_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_38(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PRT_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_39(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_DG1_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_44(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_DRG_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFT1_45(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_FT1_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_46(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_GT1_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_47(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_NTE_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_48(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PRT_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_49(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_IN1_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_50(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_IN2_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_51(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_IN3_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_52(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PRT_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_53(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_ROL_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_54(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_IN1_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_55(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_IN2_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_56(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_IN3_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_57(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PRT_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_58(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_ROL_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_59(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PR1_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_60(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PRT_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_61(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_ROL_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_62(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_IN1_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_63(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_IN2_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_64(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_IN3_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_65(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PRT_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_66(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_ROL_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_67(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PR1_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_68(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PRT_68) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_69(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_ROL_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_73(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_ORC_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_74(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PRT_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_75(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_TQ1_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_76(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_TQ2_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_77(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_TQ1_77) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_78(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_TQ2_78) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_79(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_NTE_79) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_80(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_OBR_80) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_81(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PRT_81) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_82(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_TQ1_82) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_83(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_TQ2_83) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_84(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_NTE_84) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_85(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_OBR_85) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_86(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PRT_86) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_87(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_NTE_87) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_88(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_OBX_88) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_89(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PRT_89) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_90(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_IN1_90) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_91(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_IN2_91) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_92(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_IN3_92) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_93(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PRT_93) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_94(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_ROL_94) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_95(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PR1_95) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_96(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PRT_96) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_97(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_ROL_97) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_101(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_ORC_101) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_102(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PRT_102) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_103(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_DG1_103) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_104(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_TQ1_104) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_105(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_TQ2_105) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_106(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_TQ1_106) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_107(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_TQ2_107) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_108(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_NTE_108) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_109(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_OBR_109) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_110(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PRT_110) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_111(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_TQ1_111) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_112(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_TQ2_112) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_113(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_NTE_113) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_114(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_OBR_114) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_115(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PRT_115) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_116(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_NTE_116) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_117(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_OBX_117) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_118(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PRT_118) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_119(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_IN1_119) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_120(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_IN2_120) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_121(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_IN3_121) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_122(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PRT_122) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_123(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_ROL_123) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_124(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PRT_124) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_125(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PV1_125) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_126(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_PV2_126) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_127(size_t index = 0) {
    try {
      return this->getObject(index, DFT_P11_DFT_P11_ROL_127) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DFT_P11_DFT_P11_ */
} /* namespace HL7_29 */
#endif /*  __DFT_P11_DFT_P11__29_H__ */
