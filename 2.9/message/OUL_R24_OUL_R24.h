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


#ifndef __OUL_R24_OUL_R24__29_H__
#define __OUL_R24_OUL_R24__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/CTI.h"
#include "../segment/DEV.h"
#include "../segment/DSC.h"
#include "../segment/INV.h"
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
#include "../segment/SAC.h"
#include "../segment/SFT.h"
#include "../segment/SID.h"
#include "../segment/SPM.h"
#include "../segment/TCD.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/TXA.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct OUL_R24_OUL_R24_PATIENT; /* PATIENT */
struct OUL_R24_OUL_R24_ORDER; /* ORDER */
struct OUL_R24_OUL_R24_DEVICE; /* DEVICE */
struct OUL_R24_OUL_R24_COMMON_ORDER; /* COMMON_ORDER */
struct OUL_R24_OUL_R24_TIMING_QTY; /* TIMING_QTY */
struct OUL_R24_OUL_R24_SPECIMEN; /* SPECIMEN */
struct OUL_R24_OUL_R24_RESULT; /* RESULT */
struct OUL_R24_OUL_R24_ORDER_DOCUMENT; /* ORDER_DOCUMENT */
struct OUL_R24_OUL_R24_ORDER_DOCUMENT; /* ORDER_DOCUMENT */
struct OUL_R24_OUL_R24_ORDER_DOCUMENT; /* ORDER_DOCUMENT */
struct OUL_R24_OUL_R24_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct OUL_R24_OUL_R24_CONTAINER; /* CONTAINER */
struct OUL_R24_OUL_R24_ORDER_DOCUMENT; /* ORDER_DOCUMENT */
struct OUL_R24_OUL_R24_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct OUL_R24_OUL_R24_CONTAINER; /* CONTAINER */
struct OUL_R24_OUL_R24_PATIENT_OBSERVATION; /* PATIENT_OBSERVATION */
struct OUL_R24_OUL_R24_VISIT; /* VISIT */

/*  */
struct OUL_R24_OUL_R24 : public HL7Message {
  OUL_R24_OUL_R24() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OUL_R24_OUL_R24_MSH_1,
    OUL_R24_OUL_R24_ARV_2,
    OUL_R24_OUL_R24_SFT_3,
    OUL_R24_OUL_R24_UAC_4,
    OUL_R24_OUL_R24_NTE_5,
    OUL_R24_OUL_R24_NK1_7,
    OUL_R24_OUL_R24_CTI_14,
    OUL_R24_OUL_R24_DSC_15,
    OUL_R24_OUL_R24_NTE_16,
    OUL_R24_OUL_R24_OBR_17,
    OUL_R24_OUL_R24_PRT_18,
    OUL_R24_OUL_R24_PRT_19,
    OUL_R24_OUL_R24_DEV_21,
    OUL_R24_OUL_R24_OBX_22,
    OUL_R24_OUL_R24_DEV_24,
    OUL_R24_OUL_R24_OBX_25,
    OUL_R24_OUL_R24_ORC_27,
    OUL_R24_OUL_R24_PRT_28,
    OUL_R24_OUL_R24_OBX_29,
    OUL_R24_OUL_R24_PRT_30,
    OUL_R24_OUL_R24_TXA_31,
    OUL_R24_OUL_R24_DEV_33,
    OUL_R24_OUL_R24_OBX_34,
    OUL_R24_OUL_R24_ORC_36,
    OUL_R24_OUL_R24_PRT_37,
    OUL_R24_OUL_R24_TQ1_38,
    OUL_R24_OUL_R24_TQ2_39,
    OUL_R24_OUL_R24_OBX_40,
    OUL_R24_OUL_R24_PRT_41,
    OUL_R24_OUL_R24_TXA_42,
    OUL_R24_OUL_R24_DEV_44,
    OUL_R24_OUL_R24_OBX_45,
    OUL_R24_OUL_R24_ORC_47,
    OUL_R24_OUL_R24_PRT_48,
    OUL_R24_OUL_R24_TQ1_49,
    OUL_R24_OUL_R24_TQ2_50,
    OUL_R24_OUL_R24_SPM_53,
    OUL_R24_OUL_R24_OBX_54,
    OUL_R24_OUL_R24_PRT_55,
    OUL_R24_OUL_R24_TXA_56,
    OUL_R24_OUL_R24_OBX_57,
    OUL_R24_OUL_R24_PRT_58,
    OUL_R24_OUL_R24_TXA_59,
    OUL_R24_OUL_R24_OBX_60,
    OUL_R24_OUL_R24_PRT_61,
    OUL_R24_OUL_R24_OBX_62,
    OUL_R24_OUL_R24_PRT_63,
    OUL_R24_OUL_R24_TXA_64,
    OUL_R24_OUL_R24_OBX_65,
    OUL_R24_OUL_R24_PRT_66,
    OUL_R24_OUL_R24_INV_67,
    OUL_R24_OUL_R24_SAC_68,
    OUL_R24_OUL_R24_DEV_70,
    OUL_R24_OUL_R24_OBX_71,
    OUL_R24_OUL_R24_ORC_73,
    OUL_R24_OUL_R24_PRT_74,
    OUL_R24_OUL_R24_TQ1_75,
    OUL_R24_OUL_R24_TQ2_76,
    OUL_R24_OUL_R24_SPM_79,
    OUL_R24_OUL_R24_INV_80,
    OUL_R24_OUL_R24_NTE_81,
    OUL_R24_OUL_R24_OBX_82,
    OUL_R24_OUL_R24_PRT_83,
    OUL_R24_OUL_R24_SID_84,
    OUL_R24_OUL_R24_TCD_85,
    OUL_R24_OUL_R24_OBX_86,
    OUL_R24_OUL_R24_PRT_87,
    OUL_R24_OUL_R24_TXA_88,
    OUL_R24_OUL_R24_OBX_89,
    OUL_R24_OUL_R24_PRT_90,
    OUL_R24_OUL_R24_TXA_91,
    OUL_R24_OUL_R24_OBX_92,
    OUL_R24_OUL_R24_PRT_93,
    OUL_R24_OUL_R24_OBX_94,
    OUL_R24_OUL_R24_PRT_95,
    OUL_R24_OUL_R24_TXA_96,
    OUL_R24_OUL_R24_OBX_97,
    OUL_R24_OUL_R24_PRT_98,
    OUL_R24_OUL_R24_INV_99,
    OUL_R24_OUL_R24_SAC_100,
    OUL_R24_OUL_R24_ARV_103,
    OUL_R24_OUL_R24_NTE_104,
    OUL_R24_OUL_R24_OH1_105,
    OUL_R24_OUL_R24_OH2_106,
    OUL_R24_OUL_R24_OH3_107,
    OUL_R24_OUL_R24_OH4_108,
    OUL_R24_OUL_R24_PD1_109,
    OUL_R24_OUL_R24_PID_110,
    OUL_R24_OUL_R24_PRT_111,
    OUL_R24_OUL_R24_OBX_112,
    OUL_R24_OUL_R24_PRT_113,
    OUL_R24_OUL_R24_OBX_114,
    OUL_R24_OUL_R24_PRT_115,
    OUL_R24_OUL_R24_PRT_116,
    OUL_R24_OUL_R24_PV1_117,
    OUL_R24_OUL_R24_PV2_118,
    FIELD_ID_MAX
  };

  const char* className() const { return "OUL_R24_OUL_R24"; }
  OUL_R24_OUL_R24* create() const { return new OUL_R24_OUL_R24(); }

 private:
  /* Initialize object */
  void init() {
    setName("OUL_R24_OUL_R24");
    addObject<MSH>(OUL_R24_OUL_R24_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OUL_R24_OUL_R24_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(OUL_R24_OUL_R24_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(OUL_R24_OUL_R24_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OUL_R24_OUL_R24_NTE_5, "NTE.5", HL7::optional, HL7::repetition_off);
    addObject<NK1>(OUL_R24_OUL_R24_NK1_7, "NK1.7", HL7::optional, HL7::repetition_on);
    addObject<CTI>(OUL_R24_OUL_R24_CTI_14, "CTI.14", HL7::optional, HL7::repetition_on);
    addObject<DSC>(OUL_R24_OUL_R24_DSC_15, "DSC.15", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OUL_R24_OUL_R24_NTE_16, "NTE.16", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OUL_R24_OUL_R24_OBR_17, "OBR.17", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R24_OUL_R24_PRT_18, "PRT.18", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OUL_R24_OUL_R24_PRT_19, "PRT.19", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OUL_R24_OUL_R24_DEV_21, "DEV.21", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OUL_R24_OUL_R24_OBX_22, "OBX.22", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OUL_R24_OUL_R24_DEV_24, "DEV.24", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OUL_R24_OUL_R24_OBX_25, "OBX.25", HL7::optional, HL7::repetition_on);
    addObject<ORC>(OUL_R24_OUL_R24_ORC_27, "ORC.27", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R24_OUL_R24_PRT_28, "PRT.28", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OUL_R24_OUL_R24_OBX_29, "OBX.29", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R24_OUL_R24_PRT_30, "PRT.30", HL7::optional, HL7::repetition_on);
    addObject<TXA>(OUL_R24_OUL_R24_TXA_31, "TXA.31", HL7::initialized, HL7::repetition_off);
    addObject<DEV>(OUL_R24_OUL_R24_DEV_33, "DEV.33", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OUL_R24_OUL_R24_OBX_34, "OBX.34", HL7::optional, HL7::repetition_on);
    addObject<ORC>(OUL_R24_OUL_R24_ORC_36, "ORC.36", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R24_OUL_R24_PRT_37, "PRT.37", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OUL_R24_OUL_R24_TQ1_38, "TQ1.38", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OUL_R24_OUL_R24_TQ2_39, "TQ2.39", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OUL_R24_OUL_R24_OBX_40, "OBX.40", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R24_OUL_R24_PRT_41, "PRT.41", HL7::optional, HL7::repetition_on);
    addObject<TXA>(OUL_R24_OUL_R24_TXA_42, "TXA.42", HL7::initialized, HL7::repetition_off);
    addObject<DEV>(OUL_R24_OUL_R24_DEV_44, "DEV.44", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OUL_R24_OUL_R24_OBX_45, "OBX.45", HL7::optional, HL7::repetition_on);
    addObject<ORC>(OUL_R24_OUL_R24_ORC_47, "ORC.47", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R24_OUL_R24_PRT_48, "PRT.48", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OUL_R24_OUL_R24_TQ1_49, "TQ1.49", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OUL_R24_OUL_R24_TQ2_50, "TQ2.50", HL7::optional, HL7::repetition_on);
    addObject<SPM>(OUL_R24_OUL_R24_SPM_53, "SPM.53", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OUL_R24_OUL_R24_OBX_54, "OBX.54", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R24_OUL_R24_PRT_55, "PRT.55", HL7::optional, HL7::repetition_on);
    addObject<TXA>(OUL_R24_OUL_R24_TXA_56, "TXA.56", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OUL_R24_OUL_R24_OBX_57, "OBX.57", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R24_OUL_R24_PRT_58, "PRT.58", HL7::optional, HL7::repetition_on);
    addObject<TXA>(OUL_R24_OUL_R24_TXA_59, "TXA.59", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OUL_R24_OUL_R24_OBX_60, "OBX.60", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R24_OUL_R24_PRT_61, "PRT.61", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OUL_R24_OUL_R24_OBX_62, "OBX.62", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R24_OUL_R24_PRT_63, "PRT.63", HL7::optional, HL7::repetition_on);
    addObject<TXA>(OUL_R24_OUL_R24_TXA_64, "TXA.64", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OUL_R24_OUL_R24_OBX_65, "OBX.65", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R24_OUL_R24_PRT_66, "PRT.66", HL7::optional, HL7::repetition_on);
    addObject<INV>(OUL_R24_OUL_R24_INV_67, "INV.67", HL7::optional, HL7::repetition_off);
    addObject<SAC>(OUL_R24_OUL_R24_SAC_68, "SAC.68", HL7::initialized, HL7::repetition_off);
    addObject<DEV>(OUL_R24_OUL_R24_DEV_70, "DEV.70", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OUL_R24_OUL_R24_OBX_71, "OBX.71", HL7::optional, HL7::repetition_on);
    addObject<ORC>(OUL_R24_OUL_R24_ORC_73, "ORC.73", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R24_OUL_R24_PRT_74, "PRT.74", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OUL_R24_OUL_R24_TQ1_75, "TQ1.75", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OUL_R24_OUL_R24_TQ2_76, "TQ2.76", HL7::optional, HL7::repetition_on);
    addObject<SPM>(OUL_R24_OUL_R24_SPM_79, "SPM.79", HL7::initialized, HL7::repetition_off);
    addObject<INV>(OUL_R24_OUL_R24_INV_80, "INV.80", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OUL_R24_OUL_R24_NTE_81, "NTE.81", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OUL_R24_OUL_R24_OBX_82, "OBX.82", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R24_OUL_R24_PRT_83, "PRT.83", HL7::optional, HL7::repetition_on);
    addObject<SID>(OUL_R24_OUL_R24_SID_84, "SID.84", HL7::optional, HL7::repetition_on);
    addObject<TCD>(OUL_R24_OUL_R24_TCD_85, "TCD.85", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OUL_R24_OUL_R24_OBX_86, "OBX.86", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R24_OUL_R24_PRT_87, "PRT.87", HL7::optional, HL7::repetition_on);
    addObject<TXA>(OUL_R24_OUL_R24_TXA_88, "TXA.88", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OUL_R24_OUL_R24_OBX_89, "OBX.89", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R24_OUL_R24_PRT_90, "PRT.90", HL7::optional, HL7::repetition_on);
    addObject<TXA>(OUL_R24_OUL_R24_TXA_91, "TXA.91", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OUL_R24_OUL_R24_OBX_92, "OBX.92", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R24_OUL_R24_PRT_93, "PRT.93", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OUL_R24_OUL_R24_OBX_94, "OBX.94", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R24_OUL_R24_PRT_95, "PRT.95", HL7::optional, HL7::repetition_on);
    addObject<TXA>(OUL_R24_OUL_R24_TXA_96, "TXA.96", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OUL_R24_OUL_R24_OBX_97, "OBX.97", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R24_OUL_R24_PRT_98, "PRT.98", HL7::optional, HL7::repetition_on);
    addObject<INV>(OUL_R24_OUL_R24_INV_99, "INV.99", HL7::optional, HL7::repetition_off);
    addObject<SAC>(OUL_R24_OUL_R24_SAC_100, "SAC.100", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OUL_R24_OUL_R24_ARV_103, "ARV.103", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OUL_R24_OUL_R24_NTE_104, "NTE.104", HL7::optional, HL7::repetition_on);
    addObject<OH1>(OUL_R24_OUL_R24_OH1_105, "OH1.105", HL7::optional, HL7::repetition_on);
    addObject<OH2>(OUL_R24_OUL_R24_OH2_106, "OH2.106", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OUL_R24_OUL_R24_OH3_107, "OH3.107", HL7::optional, HL7::repetition_off);
    addObject<OH4>(OUL_R24_OUL_R24_OH4_108, "OH4.108", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OUL_R24_OUL_R24_PD1_109, "PD1.109", HL7::optional, HL7::repetition_off);
    addObject<PID>(OUL_R24_OUL_R24_PID_110, "PID.110", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R24_OUL_R24_PRT_111, "PRT.111", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OUL_R24_OUL_R24_OBX_112, "OBX.112", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R24_OUL_R24_PRT_113, "PRT.113", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OUL_R24_OUL_R24_OBX_114, "OBX.114", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OUL_R24_OUL_R24_PRT_115, "PRT.115", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OUL_R24_OUL_R24_PRT_116, "PRT.116", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OUL_R24_OUL_R24_PV1_117, "PV1.117", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OUL_R24_OUL_R24_PV2_118, "PV2.118", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OUL_R24_OUL_R24_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OUL_R24_OUL_R24_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, OUL_R24_OUL_R24_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, OUL_R24_OUL_R24_UAC_4);
  }
  NTE* getNTE_5(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OUL_R24_OUL_R24_NTE_5);
  }
  NK1* getNK1_7(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, OUL_R24_OUL_R24_NK1_7);
  }
  CTI* getCTI_14(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, OUL_R24_OUL_R24_CTI_14);
  }
  DSC* getDSC_15(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, OUL_R24_OUL_R24_DSC_15);
  }
  NTE* getNTE_16(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OUL_R24_OUL_R24_NTE_16);
  }
  OBR* getOBR_17(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OUL_R24_OUL_R24_OBR_17);
  }
  PRT* getPRT_18(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R24_OUL_R24_PRT_18);
  }
  PRT* getPRT_19(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R24_OUL_R24_PRT_19);
  }
  DEV* getDEV_21(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OUL_R24_OUL_R24_DEV_21);
  }
  OBX* getOBX_22(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R24_OUL_R24_OBX_22);
  }
  DEV* getDEV_24(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OUL_R24_OUL_R24_DEV_24);
  }
  OBX* getOBX_25(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R24_OUL_R24_OBX_25);
  }
  ORC* getORC_27(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OUL_R24_OUL_R24_ORC_27);
  }
  PRT* getPRT_28(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R24_OUL_R24_PRT_28);
  }
  OBX* getOBX_29(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R24_OUL_R24_OBX_29);
  }
  PRT* getPRT_30(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R24_OUL_R24_PRT_30);
  }
  TXA* getTXA_31(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, OUL_R24_OUL_R24_TXA_31);
  }
  DEV* getDEV_33(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OUL_R24_OUL_R24_DEV_33);
  }
  OBX* getOBX_34(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R24_OUL_R24_OBX_34);
  }
  ORC* getORC_36(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OUL_R24_OUL_R24_ORC_36);
  }
  PRT* getPRT_37(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R24_OUL_R24_PRT_37);
  }
  TQ1* getTQ1_38(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OUL_R24_OUL_R24_TQ1_38);
  }
  TQ2* getTQ2_39(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OUL_R24_OUL_R24_TQ2_39);
  }
  OBX* getOBX_40(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R24_OUL_R24_OBX_40);
  }
  PRT* getPRT_41(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R24_OUL_R24_PRT_41);
  }
  TXA* getTXA_42(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, OUL_R24_OUL_R24_TXA_42);
  }
  DEV* getDEV_44(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OUL_R24_OUL_R24_DEV_44);
  }
  OBX* getOBX_45(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R24_OUL_R24_OBX_45);
  }
  ORC* getORC_47(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OUL_R24_OUL_R24_ORC_47);
  }
  PRT* getPRT_48(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R24_OUL_R24_PRT_48);
  }
  TQ1* getTQ1_49(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OUL_R24_OUL_R24_TQ1_49);
  }
  TQ2* getTQ2_50(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OUL_R24_OUL_R24_TQ2_50);
  }
  SPM* getSPM_53(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, OUL_R24_OUL_R24_SPM_53);
  }
  OBX* getOBX_54(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R24_OUL_R24_OBX_54);
  }
  PRT* getPRT_55(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R24_OUL_R24_PRT_55);
  }
  TXA* getTXA_56(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, OUL_R24_OUL_R24_TXA_56);
  }
  OBX* getOBX_57(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R24_OUL_R24_OBX_57);
  }
  PRT* getPRT_58(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R24_OUL_R24_PRT_58);
  }
  TXA* getTXA_59(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, OUL_R24_OUL_R24_TXA_59);
  }
  OBX* getOBX_60(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R24_OUL_R24_OBX_60);
  }
  PRT* getPRT_61(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R24_OUL_R24_PRT_61);
  }
  OBX* getOBX_62(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R24_OUL_R24_OBX_62);
  }
  PRT* getPRT_63(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R24_OUL_R24_PRT_63);
  }
  TXA* getTXA_64(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, OUL_R24_OUL_R24_TXA_64);
  }
  OBX* getOBX_65(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R24_OUL_R24_OBX_65);
  }
  PRT* getPRT_66(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R24_OUL_R24_PRT_66);
  }
  INV* getINV_67(size_t index = 0) {
    return (INV*)this->getObjectSafe(index, OUL_R24_OUL_R24_INV_67);
  }
  SAC* getSAC_68(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OUL_R24_OUL_R24_SAC_68);
  }
  DEV* getDEV_70(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OUL_R24_OUL_R24_DEV_70);
  }
  OBX* getOBX_71(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R24_OUL_R24_OBX_71);
  }
  ORC* getORC_73(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OUL_R24_OUL_R24_ORC_73);
  }
  PRT* getPRT_74(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R24_OUL_R24_PRT_74);
  }
  TQ1* getTQ1_75(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OUL_R24_OUL_R24_TQ1_75);
  }
  TQ2* getTQ2_76(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OUL_R24_OUL_R24_TQ2_76);
  }
  SPM* getSPM_79(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, OUL_R24_OUL_R24_SPM_79);
  }
  INV* getINV_80(size_t index = 0) {
    return (INV*)this->getObjectSafe(index, OUL_R24_OUL_R24_INV_80);
  }
  NTE* getNTE_81(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OUL_R24_OUL_R24_NTE_81);
  }
  OBX* getOBX_82(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R24_OUL_R24_OBX_82);
  }
  PRT* getPRT_83(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R24_OUL_R24_PRT_83);
  }
  SID* getSID_84(size_t index = 0) {
    return (SID*)this->getObjectSafe(index, OUL_R24_OUL_R24_SID_84);
  }
  TCD* getTCD_85(size_t index = 0) {
    return (TCD*)this->getObjectSafe(index, OUL_R24_OUL_R24_TCD_85);
  }
  OBX* getOBX_86(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R24_OUL_R24_OBX_86);
  }
  PRT* getPRT_87(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R24_OUL_R24_PRT_87);
  }
  TXA* getTXA_88(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, OUL_R24_OUL_R24_TXA_88);
  }
  OBX* getOBX_89(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R24_OUL_R24_OBX_89);
  }
  PRT* getPRT_90(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R24_OUL_R24_PRT_90);
  }
  TXA* getTXA_91(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, OUL_R24_OUL_R24_TXA_91);
  }
  OBX* getOBX_92(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R24_OUL_R24_OBX_92);
  }
  PRT* getPRT_93(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R24_OUL_R24_PRT_93);
  }
  OBX* getOBX_94(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R24_OUL_R24_OBX_94);
  }
  PRT* getPRT_95(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R24_OUL_R24_PRT_95);
  }
  TXA* getTXA_96(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, OUL_R24_OUL_R24_TXA_96);
  }
  OBX* getOBX_97(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R24_OUL_R24_OBX_97);
  }
  PRT* getPRT_98(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R24_OUL_R24_PRT_98);
  }
  INV* getINV_99(size_t index = 0) {
    return (INV*)this->getObjectSafe(index, OUL_R24_OUL_R24_INV_99);
  }
  SAC* getSAC_100(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OUL_R24_OUL_R24_SAC_100);
  }
  ARV* getARV_103(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OUL_R24_OUL_R24_ARV_103);
  }
  NTE* getNTE_104(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OUL_R24_OUL_R24_NTE_104);
  }
  OH1* getOH1_105(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, OUL_R24_OUL_R24_OH1_105);
  }
  OH2* getOH2_106(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OUL_R24_OUL_R24_OH2_106);
  }
  OH3* getOH3_107(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OUL_R24_OUL_R24_OH3_107);
  }
  OH4* getOH4_108(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, OUL_R24_OUL_R24_OH4_108);
  }
  PD1* getPD1_109(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OUL_R24_OUL_R24_PD1_109);
  }
  PID* getPID_110(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OUL_R24_OUL_R24_PID_110);
  }
  PRT* getPRT_111(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R24_OUL_R24_PRT_111);
  }
  OBX* getOBX_112(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R24_OUL_R24_OBX_112);
  }
  PRT* getPRT_113(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R24_OUL_R24_PRT_113);
  }
  OBX* getOBX_114(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OUL_R24_OUL_R24_OBX_114);
  }
  PRT* getPRT_115(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R24_OUL_R24_PRT_115);
  }
  PRT* getPRT_116(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OUL_R24_OUL_R24_PRT_116);
  }
  PV1* getPV1_117(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OUL_R24_OUL_R24_PV1_117);
  }
  PV2* getPV2_118(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OUL_R24_OUL_R24_PV2_118);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_5(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_NTE_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_7(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_NK1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_14(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_CTI_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_15(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_DSC_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_16(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_NTE_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_17(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_OBR_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_18(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PRT_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_19(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PRT_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_21(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_DEV_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_22(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_OBX_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_24(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_DEV_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_25(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_OBX_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_27(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_ORC_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_28(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PRT_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_29(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_OBX_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_30(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PRT_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_31(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_TXA_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_33(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_DEV_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_34(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_OBX_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_36(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_ORC_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_37(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PRT_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_38(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_TQ1_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_39(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_TQ2_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_40(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_OBX_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_41(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PRT_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_42(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_TXA_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_44(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_DEV_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_45(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_OBX_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_47(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_ORC_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_48(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PRT_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_49(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_TQ1_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_50(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_TQ2_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_53(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_SPM_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_54(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_OBX_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_55(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PRT_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_56(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_TXA_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_57(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_OBX_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_58(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PRT_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_59(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_TXA_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_60(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_OBX_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_61(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PRT_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_62(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_OBX_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_63(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PRT_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_64(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_TXA_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_65(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_OBX_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_66(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PRT_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINV_67(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_INV_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_68(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_SAC_68) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_70(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_DEV_70) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_71(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_OBX_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_73(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_ORC_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_74(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PRT_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_75(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_TQ1_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_76(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_TQ2_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_79(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_SPM_79) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINV_80(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_INV_80) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_81(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_NTE_81) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_82(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_OBX_82) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_83(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PRT_83) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSID_84(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_SID_84) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTCD_85(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_TCD_85) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_86(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_OBX_86) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_87(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PRT_87) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_88(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_TXA_88) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_89(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_OBX_89) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_90(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PRT_90) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_91(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_TXA_91) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_92(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_OBX_92) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_93(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PRT_93) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_94(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_OBX_94) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_95(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PRT_95) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_96(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_TXA_96) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_97(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_OBX_97) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_98(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PRT_98) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINV_99(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_INV_99) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_100(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_SAC_100) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_103(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_ARV_103) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_104(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_NTE_104) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_105(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_OH1_105) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_106(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_OH2_106) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_107(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_OH3_107) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_108(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_OH4_108) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_109(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PD1_109) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_110(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PID_110) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_111(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PRT_111) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_112(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_OBX_112) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_113(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PRT_113) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_114(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_OBX_114) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_115(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PRT_115) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_116(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PRT_116) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_117(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PV1_117) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_118(size_t index = 0) {
    try {
      return this->getObject(index, OUL_R24_OUL_R24_PV2_118) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OUL_R24_OUL_R24_ */
} /* namespace HL7_29 */
#endif /*  __OUL_R24_OUL_R24__29_H__ */
