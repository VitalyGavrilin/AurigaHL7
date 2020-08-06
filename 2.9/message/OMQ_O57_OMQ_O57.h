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


#ifndef __OMQ_O57_OMQ_O57__29_H__
#define __OMQ_O57_OMQ_O57__29_H__

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
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/SFT.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/TXA.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct OMQ_O57_OMQ_O57_PATIENT; /* PATIENT */
struct OMQ_O57_OMQ_O57_ORDER; /* ORDER */
struct OMQ_O57_OMQ_O57_PRIOR_RESULT; /* PRIOR_RESULT */
struct OMQ_O57_OMQ_O57_OBSERVATION; /* OBSERVATION */
struct OMQ_O57_OMQ_O57_PATIENT_PRIOR; /* PATIENT_PRIOR */
struct OMQ_O57_OMQ_O57_PATIENT_VISIT_PRIOR; /* PATIENT_VISIT_PRIOR */
struct OMQ_O57_OMQ_O57_ORDER_PRIOR; /* ORDER_PRIOR */
struct OMQ_O57_OMQ_O57_TIMING_PRIOR; /* TIMING_PRIOR */
struct OMQ_O57_OMQ_O57_OBSERVATION_PARTICIPATION_PRIOR; /* OBSERVATION_PARTICIPATION_PRIOR */
struct OMQ_O57_OMQ_O57_OBSERVATION_PRIOR; /* OBSERVATION_PRIOR */
struct OMQ_O57_OMQ_O57_PATIENT_PRIOR; /* PATIENT_PRIOR */
struct OMQ_O57_OMQ_O57_PATIENT_VISIT_PRIOR; /* PATIENT_VISIT_PRIOR */
struct OMQ_O57_OMQ_O57_ORDER_PRIOR; /* ORDER_PRIOR */
struct OMQ_O57_OMQ_O57_TIMING_PRIOR; /* TIMING_PRIOR */
struct OMQ_O57_OMQ_O57_OBSERVATION_PARTICIPATION_PRIOR; /* OBSERVATION_PARTICIPATION_PRIOR */
struct OMQ_O57_OMQ_O57_OBSERVATION_PRIOR; /* OBSERVATION_PRIOR */
struct OMQ_O57_OMQ_O57_PATIENT_VISIT; /* PATIENT_VISIT */
struct OMQ_O57_OMQ_O57_INSURANCE; /* INSURANCE */

/*  */
struct OMQ_O57_OMQ_O57 : public HL7Message {
  OMQ_O57_OMQ_O57() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OMQ_O57_OMQ_O57_MSH_1,
    OMQ_O57_OMQ_O57_ARV_2,
    OMQ_O57_OMQ_O57_SFT_3,
    OMQ_O57_OMQ_O57_UAC_4,
    OMQ_O57_OMQ_O57_NTE_5,
    OMQ_O57_OMQ_O57_BLG_10,
    OMQ_O57_OMQ_O57_CTD_11,
    OMQ_O57_OMQ_O57_CTI_12,
    OMQ_O57_OMQ_O57_DG1_13,
    OMQ_O57_OMQ_O57_FT1_14,
    OMQ_O57_OMQ_O57_OBX_15,
    OMQ_O57_OMQ_O57_ORC_16,
    OMQ_O57_OMQ_O57_PRT_17,
    OMQ_O57_OMQ_O57_PRT_18,
    OMQ_O57_OMQ_O57_TXA_19,
    OMQ_O57_OMQ_O57_AL1_23,
    OMQ_O57_OMQ_O57_ARV_24,
    OMQ_O57_OMQ_O57_PD1_25,
    OMQ_O57_OMQ_O57_PID_26,
    OMQ_O57_OMQ_O57_PRT_27,
    OMQ_O57_OMQ_O57_ARV_28,
    OMQ_O57_OMQ_O57_PD1_29,
    OMQ_O57_OMQ_O57_PID_30,
    OMQ_O57_OMQ_O57_PRT_31,
    OMQ_O57_OMQ_O57_PRT_32,
    OMQ_O57_OMQ_O57_PV1_33,
    OMQ_O57_OMQ_O57_PV2_34,
    OMQ_O57_OMQ_O57_ARV_35,
    OMQ_O57_OMQ_O57_PD1_36,
    OMQ_O57_OMQ_O57_PID_37,
    OMQ_O57_OMQ_O57_PRT_38,
    OMQ_O57_OMQ_O57_PRT_39,
    OMQ_O57_OMQ_O57_PV1_40,
    OMQ_O57_OMQ_O57_PV2_41,
    OMQ_O57_OMQ_O57_CTD_45,
    OMQ_O57_OMQ_O57_NTE_46,
    OMQ_O57_OMQ_O57_OBR_47,
    OMQ_O57_OMQ_O57_ORC_48,
    OMQ_O57_OMQ_O57_PRT_49,
    OMQ_O57_OMQ_O57_TQ1_50,
    OMQ_O57_OMQ_O57_TQ2_51,
    OMQ_O57_OMQ_O57_TQ1_52,
    OMQ_O57_OMQ_O57_TQ2_53,
    OMQ_O57_OMQ_O57_DEV_54,
    OMQ_O57_OMQ_O57_PRT_55,
    OMQ_O57_OMQ_O57_TQ1_56,
    OMQ_O57_OMQ_O57_TQ2_57,
    OMQ_O57_OMQ_O57_DEV_58,
    OMQ_O57_OMQ_O57_PRT_59,
    OMQ_O57_OMQ_O57_NTE_60,
    OMQ_O57_OMQ_O57_OBX_61,
    OMQ_O57_OMQ_O57_PRT_62,
    OMQ_O57_OMQ_O57_AL1_66,
    OMQ_O57_OMQ_O57_NTE_67,
    OMQ_O57_OMQ_O57_OBX_68,
    OMQ_O57_OMQ_O57_PRT_69,
    OMQ_O57_OMQ_O57_ARV_70,
    OMQ_O57_OMQ_O57_PD1_71,
    OMQ_O57_OMQ_O57_PID_72,
    OMQ_O57_OMQ_O57_PRT_73,
    OMQ_O57_OMQ_O57_ARV_74,
    OMQ_O57_OMQ_O57_PD1_75,
    OMQ_O57_OMQ_O57_PID_76,
    OMQ_O57_OMQ_O57_PRT_77,
    OMQ_O57_OMQ_O57_PRT_78,
    OMQ_O57_OMQ_O57_PV1_79,
    OMQ_O57_OMQ_O57_PV2_80,
    OMQ_O57_OMQ_O57_ARV_81,
    OMQ_O57_OMQ_O57_PD1_82,
    OMQ_O57_OMQ_O57_PID_83,
    OMQ_O57_OMQ_O57_PRT_84,
    OMQ_O57_OMQ_O57_PRT_85,
    OMQ_O57_OMQ_O57_PV1_86,
    OMQ_O57_OMQ_O57_PV2_87,
    OMQ_O57_OMQ_O57_CTD_91,
    OMQ_O57_OMQ_O57_NTE_92,
    OMQ_O57_OMQ_O57_OBR_93,
    OMQ_O57_OMQ_O57_ORC_94,
    OMQ_O57_OMQ_O57_PRT_95,
    OMQ_O57_OMQ_O57_TQ1_96,
    OMQ_O57_OMQ_O57_TQ2_97,
    OMQ_O57_OMQ_O57_TQ1_98,
    OMQ_O57_OMQ_O57_TQ2_99,
    OMQ_O57_OMQ_O57_DEV_100,
    OMQ_O57_OMQ_O57_PRT_101,
    OMQ_O57_OMQ_O57_TQ1_102,
    OMQ_O57_OMQ_O57_TQ2_103,
    OMQ_O57_OMQ_O57_DEV_104,
    OMQ_O57_OMQ_O57_PRT_105,
    OMQ_O57_OMQ_O57_NTE_106,
    OMQ_O57_OMQ_O57_OBX_107,
    OMQ_O57_OMQ_O57_PRT_108,
    OMQ_O57_OMQ_O57_AL1_111,
    OMQ_O57_OMQ_O57_ARV_112,
    OMQ_O57_OMQ_O57_GT1_113,
    OMQ_O57_OMQ_O57_NK1_114,
    OMQ_O57_OMQ_O57_NTE_115,
    OMQ_O57_OMQ_O57_PD1_116,
    OMQ_O57_OMQ_O57_PID_117,
    OMQ_O57_OMQ_O57_PRT_118,
    OMQ_O57_OMQ_O57_PRT_119,
    OMQ_O57_OMQ_O57_PV1_120,
    OMQ_O57_OMQ_O57_PV2_121,
    OMQ_O57_OMQ_O57_PRT_122,
    OMQ_O57_OMQ_O57_PV1_123,
    OMQ_O57_OMQ_O57_PV2_124,
    OMQ_O57_OMQ_O57_IN1_125,
    OMQ_O57_OMQ_O57_IN2_126,
    OMQ_O57_OMQ_O57_IN3_127,
    FIELD_ID_MAX
  };

  const char* className() const { return "OMQ_O57_OMQ_O57"; }
  OMQ_O57_OMQ_O57* create() const { return new OMQ_O57_OMQ_O57(); }

 private:
  /* Initialize object */
  void init() {
    setName("OMQ_O57_OMQ_O57");
    addObject<MSH>(OMQ_O57_OMQ_O57_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OMQ_O57_OMQ_O57_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(OMQ_O57_OMQ_O57_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(OMQ_O57_OMQ_O57_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OMQ_O57_OMQ_O57_NTE_5, "NTE.5", HL7::optional, HL7::repetition_on);
    addObject<BLG>(OMQ_O57_OMQ_O57_BLG_10, "BLG.10", HL7::optional, HL7::repetition_off);
    addObject<CTD>(OMQ_O57_OMQ_O57_CTD_11, "CTD.11", HL7::optional, HL7::repetition_off);
    addObject<CTI>(OMQ_O57_OMQ_O57_CTI_12, "CTI.12", HL7::optional, HL7::repetition_on);
    addObject<DG1>(OMQ_O57_OMQ_O57_DG1_13, "DG1.13", HL7::optional, HL7::repetition_on);
    addObject<FT1>(OMQ_O57_OMQ_O57_FT1_14, "FT1.14", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMQ_O57_OMQ_O57_OBX_15, "OBX.15", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(OMQ_O57_OMQ_O57_ORC_16, "ORC.16", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMQ_O57_OMQ_O57_PRT_17, "PRT.17", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMQ_O57_OMQ_O57_PRT_18, "PRT.18", HL7::optional, HL7::repetition_on);
    addObject<TXA>(OMQ_O57_OMQ_O57_TXA_19, "TXA.19", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(OMQ_O57_OMQ_O57_AL1_23, "AL1.23", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OMQ_O57_OMQ_O57_ARV_24, "ARV.24", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OMQ_O57_OMQ_O57_PD1_25, "PD1.25", HL7::optional, HL7::repetition_off);
    addObject<PID>(OMQ_O57_OMQ_O57_PID_26, "PID.26", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMQ_O57_OMQ_O57_PRT_27, "PRT.27", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OMQ_O57_OMQ_O57_ARV_28, "ARV.28", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OMQ_O57_OMQ_O57_PD1_29, "PD1.29", HL7::optional, HL7::repetition_off);
    addObject<PID>(OMQ_O57_OMQ_O57_PID_30, "PID.30", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMQ_O57_OMQ_O57_PRT_31, "PRT.31", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMQ_O57_OMQ_O57_PRT_32, "PRT.32", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OMQ_O57_OMQ_O57_PV1_33, "PV1.33", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OMQ_O57_OMQ_O57_PV2_34, "PV2.34", HL7::optional, HL7::repetition_off);
    addObject<ARV>(OMQ_O57_OMQ_O57_ARV_35, "ARV.35", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OMQ_O57_OMQ_O57_PD1_36, "PD1.36", HL7::optional, HL7::repetition_off);
    addObject<PID>(OMQ_O57_OMQ_O57_PID_37, "PID.37", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMQ_O57_OMQ_O57_PRT_38, "PRT.38", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMQ_O57_OMQ_O57_PRT_39, "PRT.39", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OMQ_O57_OMQ_O57_PV1_40, "PV1.40", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OMQ_O57_OMQ_O57_PV2_41, "PV2.41", HL7::optional, HL7::repetition_off);
    addObject<CTD>(OMQ_O57_OMQ_O57_CTD_45, "CTD.45", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OMQ_O57_OMQ_O57_NTE_46, "NTE.46", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OMQ_O57_OMQ_O57_OBR_47, "OBR.47", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(OMQ_O57_OMQ_O57_ORC_48, "ORC.48", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMQ_O57_OMQ_O57_PRT_49, "PRT.49", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OMQ_O57_OMQ_O57_TQ1_50, "TQ1.50", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OMQ_O57_OMQ_O57_TQ2_51, "TQ2.51", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OMQ_O57_OMQ_O57_TQ1_52, "TQ1.52", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OMQ_O57_OMQ_O57_TQ2_53, "TQ2.53", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OMQ_O57_OMQ_O57_DEV_54, "DEV.54", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMQ_O57_OMQ_O57_PRT_55, "PRT.55", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(OMQ_O57_OMQ_O57_TQ1_56, "TQ1.56", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OMQ_O57_OMQ_O57_TQ2_57, "TQ2.57", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OMQ_O57_OMQ_O57_DEV_58, "DEV.58", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMQ_O57_OMQ_O57_PRT_59, "PRT.59", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(OMQ_O57_OMQ_O57_NTE_60, "NTE.60", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMQ_O57_OMQ_O57_OBX_61, "OBX.61", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMQ_O57_OMQ_O57_PRT_62, "PRT.62", HL7::optional, HL7::repetition_on);
    addObject<AL1>(OMQ_O57_OMQ_O57_AL1_66, "AL1.66", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMQ_O57_OMQ_O57_NTE_67, "NTE.67", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMQ_O57_OMQ_O57_OBX_68, "OBX.68", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMQ_O57_OMQ_O57_PRT_69, "PRT.69", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OMQ_O57_OMQ_O57_ARV_70, "ARV.70", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OMQ_O57_OMQ_O57_PD1_71, "PD1.71", HL7::optional, HL7::repetition_off);
    addObject<PID>(OMQ_O57_OMQ_O57_PID_72, "PID.72", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMQ_O57_OMQ_O57_PRT_73, "PRT.73", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OMQ_O57_OMQ_O57_ARV_74, "ARV.74", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OMQ_O57_OMQ_O57_PD1_75, "PD1.75", HL7::optional, HL7::repetition_off);
    addObject<PID>(OMQ_O57_OMQ_O57_PID_76, "PID.76", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMQ_O57_OMQ_O57_PRT_77, "PRT.77", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMQ_O57_OMQ_O57_PRT_78, "PRT.78", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OMQ_O57_OMQ_O57_PV1_79, "PV1.79", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OMQ_O57_OMQ_O57_PV2_80, "PV2.80", HL7::optional, HL7::repetition_off);
    addObject<ARV>(OMQ_O57_OMQ_O57_ARV_81, "ARV.81", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OMQ_O57_OMQ_O57_PD1_82, "PD1.82", HL7::optional, HL7::repetition_off);
    addObject<PID>(OMQ_O57_OMQ_O57_PID_83, "PID.83", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMQ_O57_OMQ_O57_PRT_84, "PRT.84", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMQ_O57_OMQ_O57_PRT_85, "PRT.85", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OMQ_O57_OMQ_O57_PV1_86, "PV1.86", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OMQ_O57_OMQ_O57_PV2_87, "PV2.87", HL7::optional, HL7::repetition_off);
    addObject<CTD>(OMQ_O57_OMQ_O57_CTD_91, "CTD.91", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OMQ_O57_OMQ_O57_NTE_92, "NTE.92", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OMQ_O57_OMQ_O57_OBR_93, "OBR.93", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(OMQ_O57_OMQ_O57_ORC_94, "ORC.94", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMQ_O57_OMQ_O57_PRT_95, "PRT.95", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OMQ_O57_OMQ_O57_TQ1_96, "TQ1.96", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OMQ_O57_OMQ_O57_TQ2_97, "TQ2.97", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OMQ_O57_OMQ_O57_TQ1_98, "TQ1.98", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OMQ_O57_OMQ_O57_TQ2_99, "TQ2.99", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OMQ_O57_OMQ_O57_DEV_100, "DEV.100", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMQ_O57_OMQ_O57_PRT_101, "PRT.101", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(OMQ_O57_OMQ_O57_TQ1_102, "TQ1.102", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OMQ_O57_OMQ_O57_TQ2_103, "TQ2.103", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OMQ_O57_OMQ_O57_DEV_104, "DEV.104", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMQ_O57_OMQ_O57_PRT_105, "PRT.105", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(OMQ_O57_OMQ_O57_NTE_106, "NTE.106", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OMQ_O57_OMQ_O57_OBX_107, "OBX.107", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMQ_O57_OMQ_O57_PRT_108, "PRT.108", HL7::optional, HL7::repetition_on);
    addObject<AL1>(OMQ_O57_OMQ_O57_AL1_111, "AL1.111", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OMQ_O57_OMQ_O57_ARV_112, "ARV.112", HL7::optional, HL7::repetition_on);
    addObject<GT1>(OMQ_O57_OMQ_O57_GT1_113, "GT1.113", HL7::optional, HL7::repetition_off);
    addObject<NK1>(OMQ_O57_OMQ_O57_NK1_114, "NK1.114", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OMQ_O57_OMQ_O57_NTE_115, "NTE.115", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OMQ_O57_OMQ_O57_PD1_116, "PD1.116", HL7::optional, HL7::repetition_off);
    addObject<PID>(OMQ_O57_OMQ_O57_PID_117, "PID.117", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OMQ_O57_OMQ_O57_PRT_118, "PRT.118", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OMQ_O57_OMQ_O57_PRT_119, "PRT.119", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OMQ_O57_OMQ_O57_PV1_120, "PV1.120", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OMQ_O57_OMQ_O57_PV2_121, "PV2.121", HL7::optional, HL7::repetition_off);
    addObject<PRT>(OMQ_O57_OMQ_O57_PRT_122, "PRT.122", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OMQ_O57_OMQ_O57_PV1_123, "PV1.123", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OMQ_O57_OMQ_O57_PV2_124, "PV2.124", HL7::optional, HL7::repetition_off);
    addObject<IN1>(OMQ_O57_OMQ_O57_IN1_125, "IN1.125", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OMQ_O57_OMQ_O57_IN2_126, "IN2.126", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OMQ_O57_OMQ_O57_IN3_127, "IN3.127", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_UAC_4);
  }
  NTE* getNTE_5(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_NTE_5);
  }
  BLG* getBLG_10(size_t index = 0) {
    return (BLG*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_BLG_10);
  }
  CTD* getCTD_11(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_CTD_11);
  }
  CTI* getCTI_12(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_CTI_12);
  }
  DG1* getDG1_13(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_DG1_13);
  }
  FT1* getFT1_14(size_t index = 0) {
    return (FT1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_FT1_14);
  }
  OBX* getOBX_15(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_OBX_15);
  }
  ORC* getORC_16(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_ORC_16);
  }
  PRT* getPRT_17(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PRT_17);
  }
  PRT* getPRT_18(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PRT_18);
  }
  TXA* getTXA_19(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_TXA_19);
  }
  AL1* getAL1_23(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_AL1_23);
  }
  ARV* getARV_24(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_ARV_24);
  }
  PD1* getPD1_25(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PD1_25);
  }
  PID* getPID_26(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PID_26);
  }
  PRT* getPRT_27(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PRT_27);
  }
  ARV* getARV_28(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_ARV_28);
  }
  PD1* getPD1_29(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PD1_29);
  }
  PID* getPID_30(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PID_30);
  }
  PRT* getPRT_31(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PRT_31);
  }
  PRT* getPRT_32(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PRT_32);
  }
  PV1* getPV1_33(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PV1_33);
  }
  PV2* getPV2_34(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PV2_34);
  }
  ARV* getARV_35(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_ARV_35);
  }
  PD1* getPD1_36(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PD1_36);
  }
  PID* getPID_37(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PID_37);
  }
  PRT* getPRT_38(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PRT_38);
  }
  PRT* getPRT_39(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PRT_39);
  }
  PV1* getPV1_40(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PV1_40);
  }
  PV2* getPV2_41(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PV2_41);
  }
  CTD* getCTD_45(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_CTD_45);
  }
  NTE* getNTE_46(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_NTE_46);
  }
  OBR* getOBR_47(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_OBR_47);
  }
  ORC* getORC_48(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_ORC_48);
  }
  PRT* getPRT_49(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PRT_49);
  }
  TQ1* getTQ1_50(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_TQ1_50);
  }
  TQ2* getTQ2_51(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_TQ2_51);
  }
  TQ1* getTQ1_52(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_TQ1_52);
  }
  TQ2* getTQ2_53(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_TQ2_53);
  }
  DEV* getDEV_54(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_DEV_54);
  }
  PRT* getPRT_55(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PRT_55);
  }
  TQ1* getTQ1_56(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_TQ1_56);
  }
  TQ2* getTQ2_57(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_TQ2_57);
  }
  DEV* getDEV_58(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_DEV_58);
  }
  PRT* getPRT_59(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PRT_59);
  }
  NTE* getNTE_60(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_NTE_60);
  }
  OBX* getOBX_61(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_OBX_61);
  }
  PRT* getPRT_62(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PRT_62);
  }
  AL1* getAL1_66(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_AL1_66);
  }
  NTE* getNTE_67(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_NTE_67);
  }
  OBX* getOBX_68(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_OBX_68);
  }
  PRT* getPRT_69(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PRT_69);
  }
  ARV* getARV_70(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_ARV_70);
  }
  PD1* getPD1_71(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PD1_71);
  }
  PID* getPID_72(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PID_72);
  }
  PRT* getPRT_73(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PRT_73);
  }
  ARV* getARV_74(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_ARV_74);
  }
  PD1* getPD1_75(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PD1_75);
  }
  PID* getPID_76(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PID_76);
  }
  PRT* getPRT_77(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PRT_77);
  }
  PRT* getPRT_78(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PRT_78);
  }
  PV1* getPV1_79(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PV1_79);
  }
  PV2* getPV2_80(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PV2_80);
  }
  ARV* getARV_81(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_ARV_81);
  }
  PD1* getPD1_82(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PD1_82);
  }
  PID* getPID_83(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PID_83);
  }
  PRT* getPRT_84(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PRT_84);
  }
  PRT* getPRT_85(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PRT_85);
  }
  PV1* getPV1_86(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PV1_86);
  }
  PV2* getPV2_87(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PV2_87);
  }
  CTD* getCTD_91(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_CTD_91);
  }
  NTE* getNTE_92(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_NTE_92);
  }
  OBR* getOBR_93(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_OBR_93);
  }
  ORC* getORC_94(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_ORC_94);
  }
  PRT* getPRT_95(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PRT_95);
  }
  TQ1* getTQ1_96(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_TQ1_96);
  }
  TQ2* getTQ2_97(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_TQ2_97);
  }
  TQ1* getTQ1_98(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_TQ1_98);
  }
  TQ2* getTQ2_99(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_TQ2_99);
  }
  DEV* getDEV_100(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_DEV_100);
  }
  PRT* getPRT_101(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PRT_101);
  }
  TQ1* getTQ1_102(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_TQ1_102);
  }
  TQ2* getTQ2_103(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_TQ2_103);
  }
  DEV* getDEV_104(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_DEV_104);
  }
  PRT* getPRT_105(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PRT_105);
  }
  NTE* getNTE_106(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_NTE_106);
  }
  OBX* getOBX_107(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_OBX_107);
  }
  PRT* getPRT_108(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PRT_108);
  }
  AL1* getAL1_111(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_AL1_111);
  }
  ARV* getARV_112(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_ARV_112);
  }
  GT1* getGT1_113(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_GT1_113);
  }
  NK1* getNK1_114(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_NK1_114);
  }
  NTE* getNTE_115(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_NTE_115);
  }
  PD1* getPD1_116(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PD1_116);
  }
  PID* getPID_117(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PID_117);
  }
  PRT* getPRT_118(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PRT_118);
  }
  PRT* getPRT_119(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PRT_119);
  }
  PV1* getPV1_120(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PV1_120);
  }
  PV2* getPV2_121(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PV2_121);
  }
  PRT* getPRT_122(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PRT_122);
  }
  PV1* getPV1_123(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PV1_123);
  }
  PV2* getPV2_124(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_PV2_124);
  }
  IN1* getIN1_125(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_IN1_125);
  }
  IN2* getIN2_126(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_IN2_126);
  }
  IN3* getIN3_127(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OMQ_O57_OMQ_O57_IN3_127);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_5(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_NTE_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBLG_10(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_BLG_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_11(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_CTD_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_12(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_CTI_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_13(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_DG1_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFT1_14(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_FT1_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_15(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_OBX_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_16(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_ORC_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_17(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PRT_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_18(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PRT_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_19(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_TXA_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_23(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_AL1_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_24(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_ARV_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_25(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PD1_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_26(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PID_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_27(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PRT_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_28(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_ARV_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_29(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PD1_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_30(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PID_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_31(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PRT_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_32(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PRT_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_33(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PV1_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_34(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PV2_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_35(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_ARV_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_36(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PD1_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_37(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PID_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_38(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PRT_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_39(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PRT_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_40(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PV1_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_41(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PV2_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_45(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_CTD_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_46(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_NTE_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_47(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_OBR_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_48(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_ORC_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_49(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PRT_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_50(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_TQ1_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_51(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_TQ2_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_52(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_TQ1_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_53(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_TQ2_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_54(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_DEV_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_55(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PRT_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_56(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_TQ1_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_57(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_TQ2_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_58(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_DEV_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_59(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PRT_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_60(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_NTE_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_61(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_OBX_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_62(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PRT_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_66(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_AL1_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_67(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_NTE_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_68(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_OBX_68) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_69(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PRT_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_70(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_ARV_70) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_71(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PD1_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_72(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PID_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_73(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PRT_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_74(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_ARV_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_75(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PD1_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_76(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PID_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_77(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PRT_77) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_78(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PRT_78) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_79(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PV1_79) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_80(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PV2_80) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_81(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_ARV_81) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_82(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PD1_82) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_83(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PID_83) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_84(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PRT_84) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_85(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PRT_85) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_86(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PV1_86) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_87(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PV2_87) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_91(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_CTD_91) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_92(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_NTE_92) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_93(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_OBR_93) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_94(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_ORC_94) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_95(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PRT_95) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_96(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_TQ1_96) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_97(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_TQ2_97) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_98(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_TQ1_98) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_99(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_TQ2_99) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_100(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_DEV_100) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_101(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PRT_101) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_102(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_TQ1_102) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_103(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_TQ2_103) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_104(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_DEV_104) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_105(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PRT_105) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_106(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_NTE_106) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_107(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_OBX_107) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_108(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PRT_108) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_111(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_AL1_111) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_112(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_ARV_112) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_113(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_GT1_113) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_114(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_NK1_114) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_115(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_NTE_115) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_116(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PD1_116) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_117(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PID_117) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_118(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PRT_118) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_119(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PRT_119) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_120(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PV1_120) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_121(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PV2_121) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_122(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PRT_122) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_123(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PV1_123) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_124(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_PV2_124) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_125(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_IN1_125) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_126(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_IN2_126) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_127(size_t index = 0) {
    try {
      return this->getObject(index, OMQ_O57_OMQ_O57_IN3_127) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OMQ_O57_OMQ_O57_ */
} /* namespace HL7_29 */
#endif /*  __OMQ_O57_OMQ_O57__29_H__ */
