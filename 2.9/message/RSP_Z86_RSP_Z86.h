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


#ifndef __RSP_Z86_RSP_Z86__29_H__
#define __RSP_Z86_RSP_Z86__29_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/DSC.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/QAK.h"
#include "../segment/QPD.h"
#include "../segment/RXA.h"
#include "../segment/RXC.h"
#include "../segment/RXD.h"
#include "../segment/RXE.h"
#include "../segment/RXG.h"
#include "../segment/RXO.h"
#include "../segment/SFT.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct RSP_Z86_RSP_Z86_QUERY_RESPONSE; /* QUERY_RESPONSE */
struct RSP_Z86_RSP_Z86_PATIENT; /* PATIENT */
struct RSP_Z86_RSP_Z86_COMMON_ORDER; /* COMMON_ORDER */
struct RSP_Z86_RSP_Z86_TIMING; /* TIMING */
struct RSP_Z86_RSP_Z86_ORDER_DETAIL; /* ORDER_DETAIL */
struct RSP_Z86_RSP_Z86_ENCODED_ORDER; /* ENCODED_ORDER */
struct RSP_Z86_RSP_Z86_DISPENSE; /* DISPENSE */
struct RSP_Z86_RSP_Z86_GIVE; /* GIVE */
struct RSP_Z86_RSP_Z86_ADMINISTRATION; /* ADMINISTRATION */
struct RSP_Z86_RSP_Z86_OBSERVATION; /* OBSERVATION */
struct RSP_Z86_RSP_Z86_TIMING_ENCODED; /* TIMING_ENCODED */
struct RSP_Z86_RSP_Z86_TIMING_ENCODED; /* TIMING_ENCODED */
struct RSP_Z86_RSP_Z86_TIMING_ENCODED; /* TIMING_ENCODED */
struct RSP_Z86_RSP_Z86_TIMING_ENCODED; /* TIMING_ENCODED */
struct RSP_Z86_RSP_Z86_TIMING_ENCODED; /* TIMING_ENCODED */

/*  */
struct RSP_Z86_RSP_Z86 : public HL7Message {
  RSP_Z86_RSP_Z86() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z86_RSP_Z86_MSH_1,
    RSP_Z86_RSP_Z86_SFT_2,
    RSP_Z86_RSP_Z86_UAC_3,
    RSP_Z86_RSP_Z86_MSA_4,
    RSP_Z86_RSP_Z86_ERR_5,
    RSP_Z86_RSP_Z86_QAK_6,
    RSP_Z86_RSP_Z86_QPD_7,
    RSP_Z86_RSP_Z86_DSC_9,
    RSP_Z86_RSP_Z86_AL1_12,
    RSP_Z86_RSP_Z86_NTE_13,
    RSP_Z86_RSP_Z86_PD1_14,
    RSP_Z86_RSP_Z86_PID_15,
    RSP_Z86_RSP_Z86_AL1_16,
    RSP_Z86_RSP_Z86_NTE_17,
    RSP_Z86_RSP_Z86_PD1_18,
    RSP_Z86_RSP_Z86_PID_19,
    RSP_Z86_RSP_Z86_ORC_27,
    RSP_Z86_RSP_Z86_TQ1_28,
    RSP_Z86_RSP_Z86_TQ2_29,
    RSP_Z86_RSP_Z86_TQ1_30,
    RSP_Z86_RSP_Z86_TQ2_31,
    RSP_Z86_RSP_Z86_RXC_33,
    RSP_Z86_RSP_Z86_RXO_34,
    RSP_Z86_RSP_Z86_TQ1_35,
    RSP_Z86_RSP_Z86_TQ2_36,
    RSP_Z86_RSP_Z86_RXC_38,
    RSP_Z86_RSP_Z86_RXO_39,
    RSP_Z86_RSP_Z86_RXC_42,
    RSP_Z86_RSP_Z86_RXE_43,
    RSP_Z86_RSP_Z86_TQ1_44,
    RSP_Z86_RSP_Z86_TQ2_45,
    RSP_Z86_RSP_Z86_TQ1_46,
    RSP_Z86_RSP_Z86_TQ2_47,
    RSP_Z86_RSP_Z86_RXC_49,
    RSP_Z86_RSP_Z86_RXO_50,
    RSP_Z86_RSP_Z86_RXC_53,
    RSP_Z86_RSP_Z86_RXE_54,
    RSP_Z86_RSP_Z86_RXC_56,
    RSP_Z86_RSP_Z86_RXD_57,
    RSP_Z86_RSP_Z86_TQ1_58,
    RSP_Z86_RSP_Z86_TQ2_59,
    RSP_Z86_RSP_Z86_TQ1_60,
    RSP_Z86_RSP_Z86_TQ2_61,
    RSP_Z86_RSP_Z86_RXC_63,
    RSP_Z86_RSP_Z86_RXO_64,
    RSP_Z86_RSP_Z86_RXC_67,
    RSP_Z86_RSP_Z86_RXE_68,
    RSP_Z86_RSP_Z86_RXC_70,
    RSP_Z86_RSP_Z86_RXD_71,
    RSP_Z86_RSP_Z86_RXC_73,
    RSP_Z86_RSP_Z86_RXG_74,
    RSP_Z86_RSP_Z86_TQ1_75,
    RSP_Z86_RSP_Z86_TQ2_76,
    RSP_Z86_RSP_Z86_TQ1_77,
    RSP_Z86_RSP_Z86_TQ2_78,
    RSP_Z86_RSP_Z86_RXC_80,
    RSP_Z86_RSP_Z86_RXO_81,
    RSP_Z86_RSP_Z86_RXC_84,
    RSP_Z86_RSP_Z86_RXE_85,
    RSP_Z86_RSP_Z86_RXC_87,
    RSP_Z86_RSP_Z86_RXD_88,
    RSP_Z86_RSP_Z86_RXC_90,
    RSP_Z86_RSP_Z86_RXG_91,
    RSP_Z86_RSP_Z86_RXA_93,
    RSP_Z86_RSP_Z86_RXC_94,
    RSP_Z86_RSP_Z86_TQ1_95,
    RSP_Z86_RSP_Z86_TQ2_96,
    RSP_Z86_RSP_Z86_TQ1_97,
    RSP_Z86_RSP_Z86_TQ2_98,
    RSP_Z86_RSP_Z86_RXC_100,
    RSP_Z86_RSP_Z86_RXO_101,
    RSP_Z86_RSP_Z86_RXC_104,
    RSP_Z86_RSP_Z86_RXE_105,
    RSP_Z86_RSP_Z86_RXC_107,
    RSP_Z86_RSP_Z86_RXD_108,
    RSP_Z86_RSP_Z86_RXC_110,
    RSP_Z86_RSP_Z86_RXG_111,
    RSP_Z86_RSP_Z86_RXA_113,
    RSP_Z86_RSP_Z86_RXC_114,
    RSP_Z86_RSP_Z86_NTE_115,
    RSP_Z86_RSP_Z86_OBX_116,
    RSP_Z86_RSP_Z86_TQ1_117,
    RSP_Z86_RSP_Z86_TQ2_118,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z86_RSP_Z86"; }
  RSP_Z86_RSP_Z86* create() const { return new RSP_Z86_RSP_Z86(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_Z86_RSP_Z86");
    addObject<MSH>(RSP_Z86_RSP_Z86_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(RSP_Z86_RSP_Z86_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(RSP_Z86_RSP_Z86_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MSA>(RSP_Z86_RSP_Z86_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(RSP_Z86_RSP_Z86_ERR_5, "ERR.5", HL7::optional, HL7::repetition_off);
    addObject<QAK>(RSP_Z86_RSP_Z86_QAK_6, "QAK.6", HL7::initialized, HL7::repetition_off);
    addObject<QPD>(RSP_Z86_RSP_Z86_QPD_7, "QPD.7", HL7::initialized, HL7::repetition_off);
    addObject<DSC>(RSP_Z86_RSP_Z86_DSC_9, "DSC.9", HL7::optional, HL7::repetition_off);
    addObject<AL1>(RSP_Z86_RSP_Z86_AL1_12, "AL1.12", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RSP_Z86_RSP_Z86_NTE_13, "NTE.13", HL7::optional, HL7::repetition_on);
    addObject<PD1>(RSP_Z86_RSP_Z86_PD1_14, "PD1.14", HL7::optional, HL7::repetition_off);
    addObject<PID>(RSP_Z86_RSP_Z86_PID_15, "PID.15", HL7::initialized, HL7::repetition_off);
    addObject<AL1>(RSP_Z86_RSP_Z86_AL1_16, "AL1.16", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RSP_Z86_RSP_Z86_NTE_17, "NTE.17", HL7::optional, HL7::repetition_on);
    addObject<PD1>(RSP_Z86_RSP_Z86_PD1_18, "PD1.18", HL7::optional, HL7::repetition_off);
    addObject<PID>(RSP_Z86_RSP_Z86_PID_19, "PID.19", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(RSP_Z86_RSP_Z86_ORC_27, "ORC.27", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(RSP_Z86_RSP_Z86_TQ1_28, "TQ1.28", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z86_RSP_Z86_TQ2_29, "TQ2.29", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(RSP_Z86_RSP_Z86_TQ1_30, "TQ1.30", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z86_RSP_Z86_TQ2_31, "TQ2.31", HL7::optional, HL7::repetition_on);
    addObject<RXC>(RSP_Z86_RSP_Z86_RXC_33, "RXC.33", HL7::optional, HL7::repetition_on);
    addObject<RXO>(RSP_Z86_RSP_Z86_RXO_34, "RXO.34", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(RSP_Z86_RSP_Z86_TQ1_35, "TQ1.35", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z86_RSP_Z86_TQ2_36, "TQ2.36", HL7::optional, HL7::repetition_on);
    addObject<RXC>(RSP_Z86_RSP_Z86_RXC_38, "RXC.38", HL7::optional, HL7::repetition_on);
    addObject<RXO>(RSP_Z86_RSP_Z86_RXO_39, "RXO.39", HL7::initialized, HL7::repetition_off);
    addObject<RXC>(RSP_Z86_RSP_Z86_RXC_42, "RXC.42", HL7::optional, HL7::repetition_on);
    addObject<RXE>(RSP_Z86_RSP_Z86_RXE_43, "RXE.43", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(RSP_Z86_RSP_Z86_TQ1_44, "TQ1.44", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z86_RSP_Z86_TQ2_45, "TQ2.45", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(RSP_Z86_RSP_Z86_TQ1_46, "TQ1.46", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z86_RSP_Z86_TQ2_47, "TQ2.47", HL7::optional, HL7::repetition_on);
    addObject<RXC>(RSP_Z86_RSP_Z86_RXC_49, "RXC.49", HL7::optional, HL7::repetition_on);
    addObject<RXO>(RSP_Z86_RSP_Z86_RXO_50, "RXO.50", HL7::initialized, HL7::repetition_off);
    addObject<RXC>(RSP_Z86_RSP_Z86_RXC_53, "RXC.53", HL7::optional, HL7::repetition_on);
    addObject<RXE>(RSP_Z86_RSP_Z86_RXE_54, "RXE.54", HL7::initialized, HL7::repetition_off);
    addObject<RXC>(RSP_Z86_RSP_Z86_RXC_56, "RXC.56", HL7::optional, HL7::repetition_on);
    addObject<RXD>(RSP_Z86_RSP_Z86_RXD_57, "RXD.57", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(RSP_Z86_RSP_Z86_TQ1_58, "TQ1.58", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z86_RSP_Z86_TQ2_59, "TQ2.59", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(RSP_Z86_RSP_Z86_TQ1_60, "TQ1.60", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z86_RSP_Z86_TQ2_61, "TQ2.61", HL7::optional, HL7::repetition_on);
    addObject<RXC>(RSP_Z86_RSP_Z86_RXC_63, "RXC.63", HL7::optional, HL7::repetition_on);
    addObject<RXO>(RSP_Z86_RSP_Z86_RXO_64, "RXO.64", HL7::initialized, HL7::repetition_off);
    addObject<RXC>(RSP_Z86_RSP_Z86_RXC_67, "RXC.67", HL7::optional, HL7::repetition_on);
    addObject<RXE>(RSP_Z86_RSP_Z86_RXE_68, "RXE.68", HL7::initialized, HL7::repetition_off);
    addObject<RXC>(RSP_Z86_RSP_Z86_RXC_70, "RXC.70", HL7::optional, HL7::repetition_on);
    addObject<RXD>(RSP_Z86_RSP_Z86_RXD_71, "RXD.71", HL7::initialized, HL7::repetition_off);
    addObject<RXC>(RSP_Z86_RSP_Z86_RXC_73, "RXC.73", HL7::optional, HL7::repetition_on);
    addObject<RXG>(RSP_Z86_RSP_Z86_RXG_74, "RXG.74", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(RSP_Z86_RSP_Z86_TQ1_75, "TQ1.75", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z86_RSP_Z86_TQ2_76, "TQ2.76", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(RSP_Z86_RSP_Z86_TQ1_77, "TQ1.77", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z86_RSP_Z86_TQ2_78, "TQ2.78", HL7::optional, HL7::repetition_on);
    addObject<RXC>(RSP_Z86_RSP_Z86_RXC_80, "RXC.80", HL7::optional, HL7::repetition_on);
    addObject<RXO>(RSP_Z86_RSP_Z86_RXO_81, "RXO.81", HL7::initialized, HL7::repetition_off);
    addObject<RXC>(RSP_Z86_RSP_Z86_RXC_84, "RXC.84", HL7::optional, HL7::repetition_on);
    addObject<RXE>(RSP_Z86_RSP_Z86_RXE_85, "RXE.85", HL7::initialized, HL7::repetition_off);
    addObject<RXC>(RSP_Z86_RSP_Z86_RXC_87, "RXC.87", HL7::optional, HL7::repetition_on);
    addObject<RXD>(RSP_Z86_RSP_Z86_RXD_88, "RXD.88", HL7::initialized, HL7::repetition_off);
    addObject<RXC>(RSP_Z86_RSP_Z86_RXC_90, "RXC.90", HL7::optional, HL7::repetition_on);
    addObject<RXG>(RSP_Z86_RSP_Z86_RXG_91, "RXG.91", HL7::initialized, HL7::repetition_off);
    addObject<RXA>(RSP_Z86_RSP_Z86_RXA_93, "RXA.93", HL7::initialized, HL7::repetition_off);
    addObject<RXC>(RSP_Z86_RSP_Z86_RXC_94, "RXC.94", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(RSP_Z86_RSP_Z86_TQ1_95, "TQ1.95", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z86_RSP_Z86_TQ2_96, "TQ2.96", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(RSP_Z86_RSP_Z86_TQ1_97, "TQ1.97", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z86_RSP_Z86_TQ2_98, "TQ2.98", HL7::optional, HL7::repetition_on);
    addObject<RXC>(RSP_Z86_RSP_Z86_RXC_100, "RXC.100", HL7::optional, HL7::repetition_on);
    addObject<RXO>(RSP_Z86_RSP_Z86_RXO_101, "RXO.101", HL7::initialized, HL7::repetition_off);
    addObject<RXC>(RSP_Z86_RSP_Z86_RXC_104, "RXC.104", HL7::optional, HL7::repetition_on);
    addObject<RXE>(RSP_Z86_RSP_Z86_RXE_105, "RXE.105", HL7::initialized, HL7::repetition_off);
    addObject<RXC>(RSP_Z86_RSP_Z86_RXC_107, "RXC.107", HL7::optional, HL7::repetition_on);
    addObject<RXD>(RSP_Z86_RSP_Z86_RXD_108, "RXD.108", HL7::initialized, HL7::repetition_off);
    addObject<RXC>(RSP_Z86_RSP_Z86_RXC_110, "RXC.110", HL7::optional, HL7::repetition_on);
    addObject<RXG>(RSP_Z86_RSP_Z86_RXG_111, "RXG.111", HL7::initialized, HL7::repetition_off);
    addObject<RXA>(RSP_Z86_RSP_Z86_RXA_113, "RXA.113", HL7::initialized, HL7::repetition_off);
    addObject<RXC>(RSP_Z86_RSP_Z86_RXC_114, "RXC.114", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RSP_Z86_RSP_Z86_NTE_115, "NTE.115", HL7::optional, HL7::repetition_on);
    addObject<OBX>(RSP_Z86_RSP_Z86_OBX_116, "OBX.116", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(RSP_Z86_RSP_Z86_TQ1_117, "TQ1.117", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z86_RSP_Z86_TQ2_118, "TQ2.118", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_UAC_3);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_MSA_4);
  }
  ERR* getERR_5(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_ERR_5);
  }
  QAK* getQAK_6(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_QAK_6);
  }
  QPD* getQPD_7(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_QPD_7);
  }
  DSC* getDSC_9(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_DSC_9);
  }
  AL1* getAL1_12(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_AL1_12);
  }
  NTE* getNTE_13(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_NTE_13);
  }
  PD1* getPD1_14(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_PD1_14);
  }
  PID* getPID_15(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_PID_15);
  }
  AL1* getAL1_16(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_AL1_16);
  }
  NTE* getNTE_17(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_NTE_17);
  }
  PD1* getPD1_18(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_PD1_18);
  }
  PID* getPID_19(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_PID_19);
  }
  ORC* getORC_27(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_ORC_27);
  }
  TQ1* getTQ1_28(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_TQ1_28);
  }
  TQ2* getTQ2_29(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_TQ2_29);
  }
  TQ1* getTQ1_30(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_TQ1_30);
  }
  TQ2* getTQ2_31(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_TQ2_31);
  }
  RXC* getRXC_33(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXC_33);
  }
  RXO* getRXO_34(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXO_34);
  }
  TQ1* getTQ1_35(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_TQ1_35);
  }
  TQ2* getTQ2_36(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_TQ2_36);
  }
  RXC* getRXC_38(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXC_38);
  }
  RXO* getRXO_39(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXO_39);
  }
  RXC* getRXC_42(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXC_42);
  }
  RXE* getRXE_43(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXE_43);
  }
  TQ1* getTQ1_44(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_TQ1_44);
  }
  TQ2* getTQ2_45(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_TQ2_45);
  }
  TQ1* getTQ1_46(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_TQ1_46);
  }
  TQ2* getTQ2_47(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_TQ2_47);
  }
  RXC* getRXC_49(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXC_49);
  }
  RXO* getRXO_50(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXO_50);
  }
  RXC* getRXC_53(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXC_53);
  }
  RXE* getRXE_54(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXE_54);
  }
  RXC* getRXC_56(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXC_56);
  }
  RXD* getRXD_57(size_t index = 0) {
    return (RXD*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXD_57);
  }
  TQ1* getTQ1_58(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_TQ1_58);
  }
  TQ2* getTQ2_59(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_TQ2_59);
  }
  TQ1* getTQ1_60(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_TQ1_60);
  }
  TQ2* getTQ2_61(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_TQ2_61);
  }
  RXC* getRXC_63(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXC_63);
  }
  RXO* getRXO_64(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXO_64);
  }
  RXC* getRXC_67(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXC_67);
  }
  RXE* getRXE_68(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXE_68);
  }
  RXC* getRXC_70(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXC_70);
  }
  RXD* getRXD_71(size_t index = 0) {
    return (RXD*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXD_71);
  }
  RXC* getRXC_73(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXC_73);
  }
  RXG* getRXG_74(size_t index = 0) {
    return (RXG*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXG_74);
  }
  TQ1* getTQ1_75(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_TQ1_75);
  }
  TQ2* getTQ2_76(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_TQ2_76);
  }
  TQ1* getTQ1_77(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_TQ1_77);
  }
  TQ2* getTQ2_78(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_TQ2_78);
  }
  RXC* getRXC_80(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXC_80);
  }
  RXO* getRXO_81(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXO_81);
  }
  RXC* getRXC_84(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXC_84);
  }
  RXE* getRXE_85(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXE_85);
  }
  RXC* getRXC_87(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXC_87);
  }
  RXD* getRXD_88(size_t index = 0) {
    return (RXD*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXD_88);
  }
  RXC* getRXC_90(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXC_90);
  }
  RXG* getRXG_91(size_t index = 0) {
    return (RXG*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXG_91);
  }
  RXA* getRXA_93(size_t index = 0) {
    return (RXA*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXA_93);
  }
  RXC* getRXC_94(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXC_94);
  }
  TQ1* getTQ1_95(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_TQ1_95);
  }
  TQ2* getTQ2_96(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_TQ2_96);
  }
  TQ1* getTQ1_97(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_TQ1_97);
  }
  TQ2* getTQ2_98(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_TQ2_98);
  }
  RXC* getRXC_100(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXC_100);
  }
  RXO* getRXO_101(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXO_101);
  }
  RXC* getRXC_104(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXC_104);
  }
  RXE* getRXE_105(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXE_105);
  }
  RXC* getRXC_107(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXC_107);
  }
  RXD* getRXD_108(size_t index = 0) {
    return (RXD*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXD_108);
  }
  RXC* getRXC_110(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXC_110);
  }
  RXG* getRXG_111(size_t index = 0) {
    return (RXG*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXG_111);
  }
  RXA* getRXA_113(size_t index = 0) {
    return (RXA*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXA_113);
  }
  RXC* getRXC_114(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_RXC_114);
  }
  NTE* getNTE_115(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_NTE_115);
  }
  OBX* getOBX_116(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_OBX_116);
  }
  TQ1* getTQ1_117(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_TQ1_117);
  }
  TQ2* getTQ2_118(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z86_RSP_Z86_TQ2_118);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_5(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_ERR_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_6(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_QAK_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_7(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_QPD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_9(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_DSC_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_12(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_AL1_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_13(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_NTE_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_14(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_PD1_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_15(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_PID_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_16(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_AL1_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_17(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_NTE_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_18(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_PD1_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_19(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_PID_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_27(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_ORC_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_28(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_TQ1_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_29(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_TQ2_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_30(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_TQ1_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_31(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_TQ2_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_33(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXC_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_34(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXO_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_35(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_TQ1_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_36(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_TQ2_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_38(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXC_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_39(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXO_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_42(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXC_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXE_43(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXE_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_44(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_TQ1_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_45(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_TQ2_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_46(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_TQ1_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_47(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_TQ2_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_49(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXC_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_50(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXO_50) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_53(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXC_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXE_54(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXE_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_56(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXC_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXD_57(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXD_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_58(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_TQ1_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_59(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_TQ2_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_60(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_TQ1_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_61(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_TQ2_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_63(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXC_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_64(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXO_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_67(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXC_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXE_68(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXE_68) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_70(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXC_70) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXD_71(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXD_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_73(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXC_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXG_74(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXG_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_75(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_TQ1_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_76(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_TQ2_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_77(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_TQ1_77) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_78(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_TQ2_78) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_80(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXC_80) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_81(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXO_81) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_84(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXC_84) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXE_85(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXE_85) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_87(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXC_87) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXD_88(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXD_88) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_90(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXC_90) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXG_91(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXG_91) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXA_93(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXA_93) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_94(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXC_94) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_95(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_TQ1_95) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_96(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_TQ2_96) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_97(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_TQ1_97) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_98(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_TQ2_98) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_100(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXC_100) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_101(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXO_101) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_104(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXC_104) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXE_105(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXE_105) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_107(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXC_107) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXD_108(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXD_108) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_110(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXC_110) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXG_111(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXG_111) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXA_113(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXA_113) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_114(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_RXC_114) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_115(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_NTE_115) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_116(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_OBX_116) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_117(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_TQ1_117) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_118(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z86_RSP_Z86_TQ2_118) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z86_RSP_Z86_ */
} /* namespace HL7_29 */
#endif /*  __RSP_Z86_RSP_Z86__29_H__ */
