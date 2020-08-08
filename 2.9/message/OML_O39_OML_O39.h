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


#ifndef __OML_O39_OML_O39__29_H__
#define __OML_O39_OML_O39__29_H__

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
#include "../segment/OH1.h"
#include "../segment/OH2.h"
#include "../segment/OH3.h"
#include "../segment/OH4.h"
#include "../segment/ORC.h"
#include "../segment/PAC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/REL.h"
#include "../segment/SAC.h"
#include "../segment/SFT.h"
#include "../segment/SHP.h"
#include "../segment/SPM.h"
#include "../segment/TCD.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct OML_O39_OML_O39_PATIENT; /* PATIENT */
struct OML_O39_OML_O39_ORDER; /* ORDER */
struct OML_O39_OML_O39_DEVICE; /* DEVICE */
struct OML_O39_OML_O39_TIMING; /* TIMING */
struct OML_O39_OML_O39_OBSERVATION_REQUEST; /* OBSERVATION_REQUEST */
struct OML_O39_OML_O39_SPECIMEN_SHIPMENT; /* SPECIMEN_SHIPMENT */
struct OML_O39_OML_O39_OBSERVATION; /* OBSERVATION */
struct OML_O39_OML_O39_SHIPMENT_OBSERVATION; /* SHIPMENT_OBSERVATION */
struct OML_O39_OML_O39_PACKAGE; /* PACKAGE */
struct OML_O39_OML_O39_SPECIMEN_IN_PACKAGE; /* SPECIMEN_IN_PACKAGE */
struct OML_O39_OML_O39_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct OML_O39_OML_O39_SPECIMEN_CONTAINER_IN_PACKAGE; /* SPECIMEN_CONTAINER_IN_PACKAGE */
struct OML_O39_OML_O39_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OML_O39_OML_O39_SHIPMENT_OBSERVATION; /* SHIPMENT_OBSERVATION */
struct OML_O39_OML_O39_PACKAGE; /* PACKAGE */
struct OML_O39_OML_O39_SPECIMEN_IN_PACKAGE; /* SPECIMEN_IN_PACKAGE */
struct OML_O39_OML_O39_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct OML_O39_OML_O39_SPECIMEN_CONTAINER_IN_PACKAGE; /* SPECIMEN_CONTAINER_IN_PACKAGE */
struct OML_O39_OML_O39_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OML_O39_OML_O39_INSURANCE; /* INSURANCE */
struct OML_O39_OML_O39_OCCUPATIONAL_DATA_FOR_HEALTH; /* OCCUPATIONAL_DATA_FOR_HEALTH */
struct OML_O39_OML_O39_NEXT_OF_KIN; /* NEXT_OF_KIN */
struct OML_O39_OML_O39_PATIENT_VISIT; /* PATIENT_VISIT */

/*  */
struct OML_O39_OML_O39 : public HL7Message {
  OML_O39_OML_O39() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OML_O39_OML_O39_MSH_1,
    OML_O39_OML_O39_ARV_2,
    OML_O39_OML_O39_SFT_3,
    OML_O39_OML_O39_UAC_4,
    OML_O39_OML_O39_NTE_5,
    OML_O39_OML_O39_DEV_9,
    OML_O39_OML_O39_OBX_10,
    OML_O39_OML_O39_BLG_13,
    OML_O39_OML_O39_CTI_14,
    OML_O39_OML_O39_FT1_15,
    OML_O39_OML_O39_NTE_16,
    OML_O39_OML_O39_ORC_17,
    OML_O39_OML_O39_PRT_18,
    OML_O39_OML_O39_TQ1_19,
    OML_O39_OML_O39_TQ2_20,
    OML_O39_OML_O39_TQ1_21,
    OML_O39_OML_O39_TQ2_22,
    OML_O39_OML_O39_CTD_25,
    OML_O39_OML_O39_DG1_26,
    OML_O39_OML_O39_NTE_27,
    OML_O39_OML_O39_OBR_28,
    OML_O39_OML_O39_PRT_29,
    OML_O39_OML_O39_REL_30,
    OML_O39_OML_O39_TCD_31,
    OML_O39_OML_O39_SHP_34,
    OML_O39_OML_O39_OBX_35,
    OML_O39_OML_O39_PRT_36,
    OML_O39_OML_O39_OBX_37,
    OML_O39_OML_O39_PRT_38,
    OML_O39_OML_O39_PAC_40,
    OML_O39_OML_O39_NTE_43,
    OML_O39_OML_O39_SPM_44,
    OML_O39_OML_O39_OBX_45,
    OML_O39_OML_O39_PRT_46,
    OML_O39_OML_O39_OBX_47,
    OML_O39_OML_O39_PRT_48,
    OML_O39_OML_O39_NTE_50,
    OML_O39_OML_O39_SAC_51,
    OML_O39_OML_O39_OBX_52,
    OML_O39_OML_O39_PRT_53,
    OML_O39_OML_O39_SHP_56,
    OML_O39_OML_O39_NTE_57,
    OML_O39_OML_O39_OBX_58,
    OML_O39_OML_O39_PRT_59,
    OML_O39_OML_O39_TCD_60,
    OML_O39_OML_O39_OBX_61,
    OML_O39_OML_O39_PRT_62,
    OML_O39_OML_O39_OBX_63,
    OML_O39_OML_O39_PRT_64,
    OML_O39_OML_O39_PAC_66,
    OML_O39_OML_O39_NTE_69,
    OML_O39_OML_O39_SPM_70,
    OML_O39_OML_O39_OBX_71,
    OML_O39_OML_O39_PRT_72,
    OML_O39_OML_O39_OBX_73,
    OML_O39_OML_O39_PRT_74,
    OML_O39_OML_O39_NTE_76,
    OML_O39_OML_O39_SAC_77,
    OML_O39_OML_O39_OBX_78,
    OML_O39_OML_O39_PRT_79,
    OML_O39_OML_O39_AL1_84,
    OML_O39_OML_O39_ARV_85,
    OML_O39_OML_O39_GT1_86,
    OML_O39_OML_O39_NTE_87,
    OML_O39_OML_O39_PD1_88,
    OML_O39_OML_O39_PID_89,
    OML_O39_OML_O39_PRT_90,
    OML_O39_OML_O39_IN1_91,
    OML_O39_OML_O39_IN2_92,
    OML_O39_OML_O39_IN3_93,
    OML_O39_OML_O39_IN1_94,
    OML_O39_OML_O39_IN2_95,
    OML_O39_OML_O39_IN3_96,
    OML_O39_OML_O39_OH1_97,
    OML_O39_OML_O39_OH2_98,
    OML_O39_OML_O39_OH3_99,
    OML_O39_OML_O39_OH4_100,
    OML_O39_OML_O39_IN1_101,
    OML_O39_OML_O39_IN2_102,
    OML_O39_OML_O39_IN3_103,
    OML_O39_OML_O39_OH1_104,
    OML_O39_OML_O39_OH2_105,
    OML_O39_OML_O39_OH3_106,
    OML_O39_OML_O39_OH4_107,
    OML_O39_OML_O39_NK1_108,
    OML_O39_OML_O39_OH2_109,
    OML_O39_OML_O39_OH3_110,
    OML_O39_OML_O39_IN1_111,
    OML_O39_OML_O39_IN2_112,
    OML_O39_OML_O39_IN3_113,
    OML_O39_OML_O39_OH1_114,
    OML_O39_OML_O39_OH2_115,
    OML_O39_OML_O39_OH3_116,
    OML_O39_OML_O39_OH4_117,
    OML_O39_OML_O39_NK1_118,
    OML_O39_OML_O39_OH2_119,
    OML_O39_OML_O39_OH3_120,
    OML_O39_OML_O39_PRT_121,
    OML_O39_OML_O39_PV1_122,
    OML_O39_OML_O39_PV2_123,
    FIELD_ID_MAX
  };

  const char* className() const { return "OML_O39_OML_O39"; }
  OML_O39_OML_O39* create() const { return new OML_O39_OML_O39(); }

 private:
  /* Initialize object */
  void init() {
    setName("OML_O39_OML_O39");
    addObject<MSH>(OML_O39_OML_O39_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OML_O39_OML_O39_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(OML_O39_OML_O39_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(OML_O39_OML_O39_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OML_O39_OML_O39_NTE_5, "NTE.5", HL7::optional, HL7::repetition_on);
    addObject<DEV>(OML_O39_OML_O39_DEV_9, "DEV.9", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OML_O39_OML_O39_OBX_10, "OBX.10", HL7::optional, HL7::repetition_on);
    addObject<BLG>(OML_O39_OML_O39_BLG_13, "BLG.13", HL7::optional, HL7::repetition_off);
    addObject<CTI>(OML_O39_OML_O39_CTI_14, "CTI.14", HL7::optional, HL7::repetition_on);
    addObject<FT1>(OML_O39_OML_O39_FT1_15, "FT1.15", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O39_OML_O39_NTE_16, "NTE.16", HL7::optional, HL7::repetition_on);
    addObject<ORC>(OML_O39_OML_O39_ORC_17, "ORC.17", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O39_OML_O39_PRT_18, "PRT.18", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OML_O39_OML_O39_TQ1_19, "TQ1.19", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OML_O39_OML_O39_TQ2_20, "TQ2.20", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OML_O39_OML_O39_TQ1_21, "TQ1.21", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OML_O39_OML_O39_TQ2_22, "TQ2.22", HL7::optional, HL7::repetition_on);
    addObject<CTD>(OML_O39_OML_O39_CTD_25, "CTD.25", HL7::optional, HL7::repetition_off);
    addObject<DG1>(OML_O39_OML_O39_DG1_26, "DG1.26", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O39_OML_O39_NTE_27, "NTE.27", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OML_O39_OML_O39_OBR_28, "OBR.28", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O39_OML_O39_PRT_29, "PRT.29", HL7::optional, HL7::repetition_on);
    addObject<REL>(OML_O39_OML_O39_REL_30, "REL.30", HL7::optional, HL7::repetition_off);
    addObject<TCD>(OML_O39_OML_O39_TCD_31, "TCD.31", HL7::optional, HL7::repetition_off);
    addObject<SHP>(OML_O39_OML_O39_SHP_34, "SHP.34", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OML_O39_OML_O39_OBX_35, "OBX.35", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O39_OML_O39_PRT_36, "PRT.36", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O39_OML_O39_OBX_37, "OBX.37", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O39_OML_O39_PRT_38, "PRT.38", HL7::optional, HL7::repetition_on);
    addObject<PAC>(OML_O39_OML_O39_PAC_40, "PAC.40", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(OML_O39_OML_O39_NTE_43, "NTE.43", HL7::optional, HL7::repetition_on);
    addObject<SPM>(OML_O39_OML_O39_SPM_44, "SPM.44", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OML_O39_OML_O39_OBX_45, "OBX.45", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O39_OML_O39_PRT_46, "PRT.46", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O39_OML_O39_OBX_47, "OBX.47", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O39_OML_O39_PRT_48, "PRT.48", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O39_OML_O39_NTE_50, "NTE.50", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OML_O39_OML_O39_SAC_51, "SAC.51", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OML_O39_OML_O39_OBX_52, "OBX.52", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O39_OML_O39_PRT_53, "PRT.53", HL7::optional, HL7::repetition_on);
    addObject<SHP>(OML_O39_OML_O39_SHP_56, "SHP.56", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(OML_O39_OML_O39_NTE_57, "NTE.57", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O39_OML_O39_OBX_58, "OBX.58", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O39_OML_O39_PRT_59, "PRT.59", HL7::optional, HL7::repetition_on);
    addObject<TCD>(OML_O39_OML_O39_TCD_60, "TCD.60", HL7::optional, HL7::repetition_off);
    addObject<OBX>(OML_O39_OML_O39_OBX_61, "OBX.61", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O39_OML_O39_PRT_62, "PRT.62", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O39_OML_O39_OBX_63, "OBX.63", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O39_OML_O39_PRT_64, "PRT.64", HL7::optional, HL7::repetition_on);
    addObject<PAC>(OML_O39_OML_O39_PAC_66, "PAC.66", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(OML_O39_OML_O39_NTE_69, "NTE.69", HL7::optional, HL7::repetition_on);
    addObject<SPM>(OML_O39_OML_O39_SPM_70, "SPM.70", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OML_O39_OML_O39_OBX_71, "OBX.71", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O39_OML_O39_PRT_72, "PRT.72", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OML_O39_OML_O39_OBX_73, "OBX.73", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O39_OML_O39_PRT_74, "PRT.74", HL7::optional, HL7::repetition_on);
    addObject<NTE>(OML_O39_OML_O39_NTE_76, "NTE.76", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OML_O39_OML_O39_SAC_77, "SAC.77", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OML_O39_OML_O39_OBX_78, "OBX.78", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O39_OML_O39_PRT_79, "PRT.79", HL7::optional, HL7::repetition_on);
    addObject<AL1>(OML_O39_OML_O39_AL1_84, "AL1.84", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OML_O39_OML_O39_ARV_85, "ARV.85", HL7::optional, HL7::repetition_on);
    addObject<GT1>(OML_O39_OML_O39_GT1_86, "GT1.86", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OML_O39_OML_O39_NTE_87, "NTE.87", HL7::optional, HL7::repetition_on);
    addObject<PD1>(OML_O39_OML_O39_PD1_88, "PD1.88", HL7::optional, HL7::repetition_off);
    addObject<PID>(OML_O39_OML_O39_PID_89, "PID.89", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OML_O39_OML_O39_PRT_90, "PRT.90", HL7::optional, HL7::repetition_on);
    addObject<IN1>(OML_O39_OML_O39_IN1_91, "IN1.91", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OML_O39_OML_O39_IN2_92, "IN2.92", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OML_O39_OML_O39_IN3_93, "IN3.93", HL7::optional, HL7::repetition_off);
    addObject<IN1>(OML_O39_OML_O39_IN1_94, "IN1.94", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OML_O39_OML_O39_IN2_95, "IN2.95", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OML_O39_OML_O39_IN3_96, "IN3.96", HL7::optional, HL7::repetition_off);
    addObject<OH1>(OML_O39_OML_O39_OH1_97, "OH1.97", HL7::optional, HL7::repetition_on);
    addObject<OH2>(OML_O39_OML_O39_OH2_98, "OH2.98", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OML_O39_OML_O39_OH3_99, "OH3.99", HL7::optional, HL7::repetition_off);
    addObject<OH4>(OML_O39_OML_O39_OH4_100, "OH4.100", HL7::optional, HL7::repetition_on);
    addObject<IN1>(OML_O39_OML_O39_IN1_101, "IN1.101", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OML_O39_OML_O39_IN2_102, "IN2.102", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OML_O39_OML_O39_IN3_103, "IN3.103", HL7::optional, HL7::repetition_off);
    addObject<OH1>(OML_O39_OML_O39_OH1_104, "OH1.104", HL7::optional, HL7::repetition_on);
    addObject<OH2>(OML_O39_OML_O39_OH2_105, "OH2.105", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OML_O39_OML_O39_OH3_106, "OH3.106", HL7::optional, HL7::repetition_off);
    addObject<OH4>(OML_O39_OML_O39_OH4_107, "OH4.107", HL7::optional, HL7::repetition_on);
    addObject<NK1>(OML_O39_OML_O39_NK1_108, "NK1.108", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(OML_O39_OML_O39_OH2_109, "OH2.109", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OML_O39_OML_O39_OH3_110, "OH3.110", HL7::optional, HL7::repetition_off);
    addObject<IN1>(OML_O39_OML_O39_IN1_111, "IN1.111", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(OML_O39_OML_O39_IN2_112, "IN2.112", HL7::optional, HL7::repetition_off);
    addObject<IN3>(OML_O39_OML_O39_IN3_113, "IN3.113", HL7::optional, HL7::repetition_off);
    addObject<OH1>(OML_O39_OML_O39_OH1_114, "OH1.114", HL7::optional, HL7::repetition_on);
    addObject<OH2>(OML_O39_OML_O39_OH2_115, "OH2.115", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OML_O39_OML_O39_OH3_116, "OH3.116", HL7::optional, HL7::repetition_off);
    addObject<OH4>(OML_O39_OML_O39_OH4_117, "OH4.117", HL7::optional, HL7::repetition_on);
    addObject<NK1>(OML_O39_OML_O39_NK1_118, "NK1.118", HL7::initialized, HL7::repetition_off);
    addObject<OH2>(OML_O39_OML_O39_OH2_119, "OH2.119", HL7::optional, HL7::repetition_on);
    addObject<OH3>(OML_O39_OML_O39_OH3_120, "OH3.120", HL7::optional, HL7::repetition_off);
    addObject<PRT>(OML_O39_OML_O39_PRT_121, "PRT.121", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OML_O39_OML_O39_PV1_122, "PV1.122", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(OML_O39_OML_O39_PV2_123, "PV2.123", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OML_O39_OML_O39_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O39_OML_O39_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, OML_O39_OML_O39_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, OML_O39_OML_O39_UAC_4);
  }
  NTE* getNTE_5(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O39_OML_O39_NTE_5);
  }
  DEV* getDEV_9(size_t index = 0) {
    return (DEV*)this->getObjectSafe(index, OML_O39_OML_O39_DEV_9);
  }
  OBX* getOBX_10(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O39_OML_O39_OBX_10);
  }
  BLG* getBLG_13(size_t index = 0) {
    return (BLG*)this->getObjectSafe(index, OML_O39_OML_O39_BLG_13);
  }
  CTI* getCTI_14(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, OML_O39_OML_O39_CTI_14);
  }
  FT1* getFT1_15(size_t index = 0) {
    return (FT1*)this->getObjectSafe(index, OML_O39_OML_O39_FT1_15);
  }
  NTE* getNTE_16(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O39_OML_O39_NTE_16);
  }
  ORC* getORC_17(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OML_O39_OML_O39_ORC_17);
  }
  PRT* getPRT_18(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O39_OML_O39_PRT_18);
  }
  TQ1* getTQ1_19(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OML_O39_OML_O39_TQ1_19);
  }
  TQ2* getTQ2_20(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OML_O39_OML_O39_TQ2_20);
  }
  TQ1* getTQ1_21(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OML_O39_OML_O39_TQ1_21);
  }
  TQ2* getTQ2_22(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OML_O39_OML_O39_TQ2_22);
  }
  CTD* getCTD_25(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, OML_O39_OML_O39_CTD_25);
  }
  DG1* getDG1_26(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, OML_O39_OML_O39_DG1_26);
  }
  NTE* getNTE_27(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O39_OML_O39_NTE_27);
  }
  OBR* getOBR_28(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OML_O39_OML_O39_OBR_28);
  }
  PRT* getPRT_29(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O39_OML_O39_PRT_29);
  }
  REL* getREL_30(size_t index = 0) {
    return (REL*)this->getObjectSafe(index, OML_O39_OML_O39_REL_30);
  }
  TCD* getTCD_31(size_t index = 0) {
    return (TCD*)this->getObjectSafe(index, OML_O39_OML_O39_TCD_31);
  }
  SHP* getSHP_34(size_t index = 0) {
    return (SHP*)this->getObjectSafe(index, OML_O39_OML_O39_SHP_34);
  }
  OBX* getOBX_35(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O39_OML_O39_OBX_35);
  }
  PRT* getPRT_36(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O39_OML_O39_PRT_36);
  }
  OBX* getOBX_37(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O39_OML_O39_OBX_37);
  }
  PRT* getPRT_38(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O39_OML_O39_PRT_38);
  }
  PAC* getPAC_40(size_t index = 0) {
    return (PAC*)this->getObjectSafe(index, OML_O39_OML_O39_PAC_40);
  }
  NTE* getNTE_43(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O39_OML_O39_NTE_43);
  }
  SPM* getSPM_44(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, OML_O39_OML_O39_SPM_44);
  }
  OBX* getOBX_45(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O39_OML_O39_OBX_45);
  }
  PRT* getPRT_46(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O39_OML_O39_PRT_46);
  }
  OBX* getOBX_47(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O39_OML_O39_OBX_47);
  }
  PRT* getPRT_48(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O39_OML_O39_PRT_48);
  }
  NTE* getNTE_50(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O39_OML_O39_NTE_50);
  }
  SAC* getSAC_51(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OML_O39_OML_O39_SAC_51);
  }
  OBX* getOBX_52(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O39_OML_O39_OBX_52);
  }
  PRT* getPRT_53(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O39_OML_O39_PRT_53);
  }
  SHP* getSHP_56(size_t index = 0) {
    return (SHP*)this->getObjectSafe(index, OML_O39_OML_O39_SHP_56);
  }
  NTE* getNTE_57(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O39_OML_O39_NTE_57);
  }
  OBX* getOBX_58(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O39_OML_O39_OBX_58);
  }
  PRT* getPRT_59(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O39_OML_O39_PRT_59);
  }
  TCD* getTCD_60(size_t index = 0) {
    return (TCD*)this->getObjectSafe(index, OML_O39_OML_O39_TCD_60);
  }
  OBX* getOBX_61(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O39_OML_O39_OBX_61);
  }
  PRT* getPRT_62(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O39_OML_O39_PRT_62);
  }
  OBX* getOBX_63(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O39_OML_O39_OBX_63);
  }
  PRT* getPRT_64(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O39_OML_O39_PRT_64);
  }
  PAC* getPAC_66(size_t index = 0) {
    return (PAC*)this->getObjectSafe(index, OML_O39_OML_O39_PAC_66);
  }
  NTE* getNTE_69(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O39_OML_O39_NTE_69);
  }
  SPM* getSPM_70(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, OML_O39_OML_O39_SPM_70);
  }
  OBX* getOBX_71(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O39_OML_O39_OBX_71);
  }
  PRT* getPRT_72(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O39_OML_O39_PRT_72);
  }
  OBX* getOBX_73(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O39_OML_O39_OBX_73);
  }
  PRT* getPRT_74(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O39_OML_O39_PRT_74);
  }
  NTE* getNTE_76(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O39_OML_O39_NTE_76);
  }
  SAC* getSAC_77(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OML_O39_OML_O39_SAC_77);
  }
  OBX* getOBX_78(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OML_O39_OML_O39_OBX_78);
  }
  PRT* getPRT_79(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O39_OML_O39_PRT_79);
  }
  AL1* getAL1_84(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, OML_O39_OML_O39_AL1_84);
  }
  ARV* getARV_85(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OML_O39_OML_O39_ARV_85);
  }
  GT1* getGT1_86(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, OML_O39_OML_O39_GT1_86);
  }
  NTE* getNTE_87(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OML_O39_OML_O39_NTE_87);
  }
  PD1* getPD1_88(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, OML_O39_OML_O39_PD1_88);
  }
  PID* getPID_89(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OML_O39_OML_O39_PID_89);
  }
  PRT* getPRT_90(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O39_OML_O39_PRT_90);
  }
  IN1* getIN1_91(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OML_O39_OML_O39_IN1_91);
  }
  IN2* getIN2_92(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OML_O39_OML_O39_IN2_92);
  }
  IN3* getIN3_93(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OML_O39_OML_O39_IN3_93);
  }
  IN1* getIN1_94(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OML_O39_OML_O39_IN1_94);
  }
  IN2* getIN2_95(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OML_O39_OML_O39_IN2_95);
  }
  IN3* getIN3_96(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OML_O39_OML_O39_IN3_96);
  }
  OH1* getOH1_97(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, OML_O39_OML_O39_OH1_97);
  }
  OH2* getOH2_98(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OML_O39_OML_O39_OH2_98);
  }
  OH3* getOH3_99(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OML_O39_OML_O39_OH3_99);
  }
  OH4* getOH4_100(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, OML_O39_OML_O39_OH4_100);
  }
  IN1* getIN1_101(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OML_O39_OML_O39_IN1_101);
  }
  IN2* getIN2_102(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OML_O39_OML_O39_IN2_102);
  }
  IN3* getIN3_103(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OML_O39_OML_O39_IN3_103);
  }
  OH1* getOH1_104(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, OML_O39_OML_O39_OH1_104);
  }
  OH2* getOH2_105(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OML_O39_OML_O39_OH2_105);
  }
  OH3* getOH3_106(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OML_O39_OML_O39_OH3_106);
  }
  OH4* getOH4_107(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, OML_O39_OML_O39_OH4_107);
  }
  NK1* getNK1_108(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, OML_O39_OML_O39_NK1_108);
  }
  OH2* getOH2_109(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OML_O39_OML_O39_OH2_109);
  }
  OH3* getOH3_110(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OML_O39_OML_O39_OH3_110);
  }
  IN1* getIN1_111(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, OML_O39_OML_O39_IN1_111);
  }
  IN2* getIN2_112(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, OML_O39_OML_O39_IN2_112);
  }
  IN3* getIN3_113(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, OML_O39_OML_O39_IN3_113);
  }
  OH1* getOH1_114(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, OML_O39_OML_O39_OH1_114);
  }
  OH2* getOH2_115(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OML_O39_OML_O39_OH2_115);
  }
  OH3* getOH3_116(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OML_O39_OML_O39_OH3_116);
  }
  OH4* getOH4_117(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, OML_O39_OML_O39_OH4_117);
  }
  NK1* getNK1_118(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, OML_O39_OML_O39_NK1_118);
  }
  OH2* getOH2_119(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, OML_O39_OML_O39_OH2_119);
  }
  OH3* getOH3_120(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, OML_O39_OML_O39_OH3_120);
  }
  PRT* getPRT_121(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OML_O39_OML_O39_PRT_121);
  }
  PV1* getPV1_122(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OML_O39_OML_O39_PV1_122);
  }
  PV2* getPV2_123(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, OML_O39_OML_O39_PV2_123);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_5(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_NTE_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDEV_9(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_DEV_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_10(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OBX_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBLG_13(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_BLG_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_14(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_CTI_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFT1_15(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_FT1_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_16(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_NTE_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_17(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_ORC_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_18(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_PRT_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_19(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_TQ1_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_20(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_TQ2_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_21(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_TQ1_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_22(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_TQ2_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_25(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_CTD_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_26(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_DG1_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_27(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_NTE_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_28(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OBR_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_29(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_PRT_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isREL_30(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_REL_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTCD_31(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_TCD_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSHP_34(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_SHP_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_35(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OBX_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_36(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_PRT_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_37(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OBX_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_38(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_PRT_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPAC_40(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_PAC_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_43(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_NTE_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_44(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_SPM_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_45(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OBX_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_46(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_PRT_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_47(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OBX_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_48(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_PRT_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_50(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_NTE_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_51(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_SAC_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_52(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OBX_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_53(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_PRT_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSHP_56(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_SHP_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_57(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_NTE_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_58(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OBX_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_59(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_PRT_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTCD_60(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_TCD_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_61(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OBX_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_62(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_PRT_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_63(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OBX_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_64(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_PRT_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPAC_66(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_PAC_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_69(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_NTE_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_70(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_SPM_70) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_71(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OBX_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_72(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_PRT_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_73(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OBX_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_74(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_PRT_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_76(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_NTE_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_77(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_SAC_77) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_78(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OBX_78) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_79(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_PRT_79) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_84(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_AL1_84) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_85(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_ARV_85) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_86(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_GT1_86) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_87(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_NTE_87) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_88(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_PD1_88) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_89(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_PID_89) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_90(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_PRT_90) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_91(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_IN1_91) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_92(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_IN2_92) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_93(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_IN3_93) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_94(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_IN1_94) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_95(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_IN2_95) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_96(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_IN3_96) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_97(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OH1_97) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_98(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OH2_98) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_99(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OH3_99) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_100(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OH4_100) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_101(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_IN1_101) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_102(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_IN2_102) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_103(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_IN3_103) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_104(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OH1_104) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_105(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OH2_105) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_106(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OH3_106) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_107(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OH4_107) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_108(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_NK1_108) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_109(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OH2_109) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_110(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OH3_110) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_111(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_IN1_111) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_112(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_IN2_112) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_113(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_IN3_113) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_114(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OH1_114) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_115(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OH2_115) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_116(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OH3_116) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_117(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OH4_117) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_118(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_NK1_118) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_119(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OH2_119) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_120(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_OH3_120) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_121(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_PRT_121) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_122(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_PV1_122) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_123(size_t index = 0) {
    try {
      return this->getObject(index, OML_O39_OML_O39_PV2_123) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OML_O39_OML_O39_ */
} /* namespace HL7_29 */
#endif /*  __OML_O39_OML_O39__29_H__ */
