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


#ifndef __RSP_Z82_RSP_Z82__29_H__
#define __RSP_Z82_RSP_Z82__29_H__

#include "../../common/Util.h"
#include "../segment/DSC.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/QAK.h"
#include "../segment/QPD.h"
#include "../segment/RCP.h"
#include "../segment/RXC.h"
#include "../segment/RXD.h"
#include "../segment/RXE.h"
#include "../segment/RXO.h"
#include "../segment/SFT.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct RSP_Z82_RSP_Z82_QUERY_RESPONSE; /* QUERY_RESPONSE */
struct RSP_Z82_RSP_Z82_PATIENT; /* PATIENT */
struct RSP_Z82_RSP_Z82_COMMON_ORDER; /* COMMON_ORDER */
struct RSP_Z82_RSP_Z82_VISIT; /* VISIT */
struct RSP_Z82_RSP_Z82_VISIT; /* VISIT */
struct RSP_Z82_RSP_Z82_TIMING; /* TIMING */
struct RSP_Z82_RSP_Z82_ORDER_DETAIL; /* ORDER_DETAIL */
struct RSP_Z82_RSP_Z82_ENCODED_ORDER; /* ENCODED_ORDER */
struct RSP_Z82_RSP_Z82_OBSERVATION; /* OBSERVATION */
struct RSP_Z82_RSP_Z82_TREATMENT; /* TREATMENT */
struct RSP_Z82_RSP_Z82_TREATMENT; /* TREATMENT */
struct RSP_Z82_RSP_Z82_TIMING_ENCODED; /* TIMING_ENCODED */
struct RSP_Z82_RSP_Z82_TREATMENT; /* TREATMENT */
struct RSP_Z82_RSP_Z82_TIMING_ENCODED; /* TIMING_ENCODED */

/*  */
struct RSP_Z82_RSP_Z82 : public HL7Message {
  RSP_Z82_RSP_Z82() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z82_RSP_Z82_MSH_1,
    RSP_Z82_RSP_Z82_SFT_2,
    RSP_Z82_RSP_Z82_UAC_3,
    RSP_Z82_RSP_Z82_MSA_4,
    RSP_Z82_RSP_Z82_ERR_5,
    RSP_Z82_RSP_Z82_QAK_6,
    RSP_Z82_RSP_Z82_QPD_7,
    RSP_Z82_RSP_Z82_RCP_8,
    RSP_Z82_RSP_Z82_DSC_10,
    RSP_Z82_RSP_Z82_NTE_14,
    RSP_Z82_RSP_Z82_PD1_15,
    RSP_Z82_RSP_Z82_PID_16,
    RSP_Z82_RSP_Z82_PV1_18,
    RSP_Z82_RSP_Z82_PV2_19,
    RSP_Z82_RSP_Z82_NTE_21,
    RSP_Z82_RSP_Z82_PD1_22,
    RSP_Z82_RSP_Z82_PID_23,
    RSP_Z82_RSP_Z82_ORC_28,
    RSP_Z82_RSP_Z82_RXC_30,
    RSP_Z82_RSP_Z82_RXD_31,
    RSP_Z82_RSP_Z82_PV1_33,
    RSP_Z82_RSP_Z82_PV2_34,
    RSP_Z82_RSP_Z82_PV1_36,
    RSP_Z82_RSP_Z82_PV2_37,
    RSP_Z82_RSP_Z82_TQ1_38,
    RSP_Z82_RSP_Z82_TQ2_39,
    RSP_Z82_RSP_Z82_PV1_41,
    RSP_Z82_RSP_Z82_PV2_42,
    RSP_Z82_RSP_Z82_TQ1_43,
    RSP_Z82_RSP_Z82_TQ2_44,
    RSP_Z82_RSP_Z82_NTE_46,
    RSP_Z82_RSP_Z82_RXO_48,
    RSP_Z82_RSP_Z82_NTE_49,
    RSP_Z82_RSP_Z82_PV1_52,
    RSP_Z82_RSP_Z82_PV2_53,
    RSP_Z82_RSP_Z82_TQ1_54,
    RSP_Z82_RSP_Z82_TQ2_55,
    RSP_Z82_RSP_Z82_NTE_57,
    RSP_Z82_RSP_Z82_RXO_59,
    RSP_Z82_RSP_Z82_RXC_62,
    RSP_Z82_RSP_Z82_RXE_63,
    RSP_Z82_RSP_Z82_NTE_64,
    RSP_Z82_RSP_Z82_NTE_66,
    RSP_Z82_RSP_Z82_TQ1_68,
    RSP_Z82_RSP_Z82_TQ2_69,
    RSP_Z82_RSP_Z82_PV1_71,
    RSP_Z82_RSP_Z82_PV2_72,
    RSP_Z82_RSP_Z82_TQ1_73,
    RSP_Z82_RSP_Z82_TQ2_74,
    RSP_Z82_RSP_Z82_NTE_76,
    RSP_Z82_RSP_Z82_RXO_78,
    RSP_Z82_RSP_Z82_RXC_81,
    RSP_Z82_RSP_Z82_RXE_82,
    RSP_Z82_RSP_Z82_NTE_83,
    RSP_Z82_RSP_Z82_OBX_84,
    RSP_Z82_RSP_Z82_NTE_85,
    RSP_Z82_RSP_Z82_NTE_87,
    RSP_Z82_RSP_Z82_TQ1_89,
    RSP_Z82_RSP_Z82_TQ2_90,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z82_RSP_Z82"; }
  RSP_Z82_RSP_Z82* create() const { return new RSP_Z82_RSP_Z82(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_Z82_RSP_Z82");
    addObject<MSH>(RSP_Z82_RSP_Z82_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(RSP_Z82_RSP_Z82_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(RSP_Z82_RSP_Z82_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MSA>(RSP_Z82_RSP_Z82_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(RSP_Z82_RSP_Z82_ERR_5, "ERR.5", HL7::optional, HL7::repetition_off);
    addObject<QAK>(RSP_Z82_RSP_Z82_QAK_6, "QAK.6", HL7::initialized, HL7::repetition_off);
    addObject<QPD>(RSP_Z82_RSP_Z82_QPD_7, "QPD.7", HL7::initialized, HL7::repetition_off);
    addObject<RCP>(RSP_Z82_RSP_Z82_RCP_8, "RCP.8", HL7::initialized, HL7::repetition_off);
    addObject<DSC>(RSP_Z82_RSP_Z82_DSC_10, "DSC.10", HL7::optional, HL7::repetition_off);
    addObject<NTE>(RSP_Z82_RSP_Z82_NTE_14, "NTE.14", HL7::optional, HL7::repetition_on);
    addObject<PD1>(RSP_Z82_RSP_Z82_PD1_15, "PD1.15", HL7::optional, HL7::repetition_off);
    addObject<PID>(RSP_Z82_RSP_Z82_PID_16, "PID.16", HL7::initialized, HL7::repetition_off);
    addObject<PV1>(RSP_Z82_RSP_Z82_PV1_18, "PV1.18", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(RSP_Z82_RSP_Z82_PV2_19, "PV2.19", HL7::optional, HL7::repetition_off);
    addObject<NTE>(RSP_Z82_RSP_Z82_NTE_21, "NTE.21", HL7::optional, HL7::repetition_on);
    addObject<PD1>(RSP_Z82_RSP_Z82_PD1_22, "PD1.22", HL7::optional, HL7::repetition_off);
    addObject<PID>(RSP_Z82_RSP_Z82_PID_23, "PID.23", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(RSP_Z82_RSP_Z82_ORC_28, "ORC.28", HL7::initialized, HL7::repetition_off);
    addObject<RXC>(RSP_Z82_RSP_Z82_RXC_30, "RXC.30", HL7::optional, HL7::repetition_on);
    addObject<RXD>(RSP_Z82_RSP_Z82_RXD_31, "RXD.31", HL7::initialized, HL7::repetition_off);
    addObject<PV1>(RSP_Z82_RSP_Z82_PV1_33, "PV1.33", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(RSP_Z82_RSP_Z82_PV2_34, "PV2.34", HL7::optional, HL7::repetition_off);
    addObject<PV1>(RSP_Z82_RSP_Z82_PV1_36, "PV1.36", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(RSP_Z82_RSP_Z82_PV2_37, "PV2.37", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(RSP_Z82_RSP_Z82_TQ1_38, "TQ1.38", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z82_RSP_Z82_TQ2_39, "TQ2.39", HL7::optional, HL7::repetition_on);
    addObject<PV1>(RSP_Z82_RSP_Z82_PV1_41, "PV1.41", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(RSP_Z82_RSP_Z82_PV2_42, "PV2.42", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(RSP_Z82_RSP_Z82_TQ1_43, "TQ1.43", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z82_RSP_Z82_TQ2_44, "TQ2.44", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RSP_Z82_RSP_Z82_NTE_46, "NTE.46", HL7::optional, HL7::repetition_on);
    addObject<RXO>(RSP_Z82_RSP_Z82_RXO_48, "RXO.48", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(RSP_Z82_RSP_Z82_NTE_49, "NTE.49", HL7::optional, HL7::repetition_on);
    addObject<PV1>(RSP_Z82_RSP_Z82_PV1_52, "PV1.52", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(RSP_Z82_RSP_Z82_PV2_53, "PV2.53", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(RSP_Z82_RSP_Z82_TQ1_54, "TQ1.54", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z82_RSP_Z82_TQ2_55, "TQ2.55", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RSP_Z82_RSP_Z82_NTE_57, "NTE.57", HL7::optional, HL7::repetition_on);
    addObject<RXO>(RSP_Z82_RSP_Z82_RXO_59, "RXO.59", HL7::initialized, HL7::repetition_off);
    addObject<RXC>(RSP_Z82_RSP_Z82_RXC_62, "RXC.62", HL7::optional, HL7::repetition_on);
    addObject<RXE>(RSP_Z82_RSP_Z82_RXE_63, "RXE.63", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(RSP_Z82_RSP_Z82_NTE_64, "NTE.64", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RSP_Z82_RSP_Z82_NTE_66, "NTE.66", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(RSP_Z82_RSP_Z82_TQ1_68, "TQ1.68", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z82_RSP_Z82_TQ2_69, "TQ2.69", HL7::optional, HL7::repetition_on);
    addObject<PV1>(RSP_Z82_RSP_Z82_PV1_71, "PV1.71", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(RSP_Z82_RSP_Z82_PV2_72, "PV2.72", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(RSP_Z82_RSP_Z82_TQ1_73, "TQ1.73", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z82_RSP_Z82_TQ2_74, "TQ2.74", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RSP_Z82_RSP_Z82_NTE_76, "NTE.76", HL7::optional, HL7::repetition_on);
    addObject<RXO>(RSP_Z82_RSP_Z82_RXO_78, "RXO.78", HL7::initialized, HL7::repetition_off);
    addObject<RXC>(RSP_Z82_RSP_Z82_RXC_81, "RXC.81", HL7::optional, HL7::repetition_on);
    addObject<RXE>(RSP_Z82_RSP_Z82_RXE_82, "RXE.82", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(RSP_Z82_RSP_Z82_NTE_83, "NTE.83", HL7::optional, HL7::repetition_on);
    addObject<OBX>(RSP_Z82_RSP_Z82_OBX_84, "OBX.84", HL7::optional, HL7::repetition_off);
    addObject<NTE>(RSP_Z82_RSP_Z82_NTE_85, "NTE.85", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RSP_Z82_RSP_Z82_NTE_87, "NTE.87", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(RSP_Z82_RSP_Z82_TQ1_89, "TQ1.89", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z82_RSP_Z82_TQ2_90, "TQ2.90", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_UAC_3);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_MSA_4);
  }
  ERR* getERR_5(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_ERR_5);
  }
  QAK* getQAK_6(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_QAK_6);
  }
  QPD* getQPD_7(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_QPD_7);
  }
  RCP* getRCP_8(size_t index = 0) {
    return (RCP*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_RCP_8);
  }
  DSC* getDSC_10(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_DSC_10);
  }
  NTE* getNTE_14(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_NTE_14);
  }
  PD1* getPD1_15(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_PD1_15);
  }
  PID* getPID_16(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_PID_16);
  }
  PV1* getPV1_18(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_PV1_18);
  }
  PV2* getPV2_19(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_PV2_19);
  }
  NTE* getNTE_21(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_NTE_21);
  }
  PD1* getPD1_22(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_PD1_22);
  }
  PID* getPID_23(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_PID_23);
  }
  ORC* getORC_28(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_ORC_28);
  }
  RXC* getRXC_30(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_RXC_30);
  }
  RXD* getRXD_31(size_t index = 0) {
    return (RXD*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_RXD_31);
  }
  PV1* getPV1_33(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_PV1_33);
  }
  PV2* getPV2_34(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_PV2_34);
  }
  PV1* getPV1_36(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_PV1_36);
  }
  PV2* getPV2_37(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_PV2_37);
  }
  TQ1* getTQ1_38(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_TQ1_38);
  }
  TQ2* getTQ2_39(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_TQ2_39);
  }
  PV1* getPV1_41(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_PV1_41);
  }
  PV2* getPV2_42(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_PV2_42);
  }
  TQ1* getTQ1_43(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_TQ1_43);
  }
  TQ2* getTQ2_44(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_TQ2_44);
  }
  NTE* getNTE_46(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_NTE_46);
  }
  RXO* getRXO_48(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_RXO_48);
  }
  NTE* getNTE_49(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_NTE_49);
  }
  PV1* getPV1_52(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_PV1_52);
  }
  PV2* getPV2_53(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_PV2_53);
  }
  TQ1* getTQ1_54(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_TQ1_54);
  }
  TQ2* getTQ2_55(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_TQ2_55);
  }
  NTE* getNTE_57(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_NTE_57);
  }
  RXO* getRXO_59(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_RXO_59);
  }
  RXC* getRXC_62(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_RXC_62);
  }
  RXE* getRXE_63(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_RXE_63);
  }
  NTE* getNTE_64(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_NTE_64);
  }
  NTE* getNTE_66(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_NTE_66);
  }
  TQ1* getTQ1_68(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_TQ1_68);
  }
  TQ2* getTQ2_69(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_TQ2_69);
  }
  PV1* getPV1_71(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_PV1_71);
  }
  PV2* getPV2_72(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_PV2_72);
  }
  TQ1* getTQ1_73(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_TQ1_73);
  }
  TQ2* getTQ2_74(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_TQ2_74);
  }
  NTE* getNTE_76(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_NTE_76);
  }
  RXO* getRXO_78(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_RXO_78);
  }
  RXC* getRXC_81(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_RXC_81);
  }
  RXE* getRXE_82(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_RXE_82);
  }
  NTE* getNTE_83(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_NTE_83);
  }
  OBX* getOBX_84(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_OBX_84);
  }
  NTE* getNTE_85(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_NTE_85);
  }
  NTE* getNTE_87(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_NTE_87);
  }
  TQ1* getTQ1_89(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_TQ1_89);
  }
  TQ2* getTQ2_90(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z82_RSP_Z82_TQ2_90);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_5(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_ERR_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_6(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_QAK_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_7(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_QPD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRCP_8(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_RCP_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_10(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_DSC_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_14(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_NTE_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_15(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_PD1_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_16(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_PID_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_18(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_PV1_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_19(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_PV2_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_21(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_NTE_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_22(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_PD1_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_23(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_PID_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_28(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_ORC_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_30(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_RXC_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXD_31(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_RXD_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_33(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_PV1_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_34(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_PV2_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_36(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_PV1_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_37(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_PV2_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_38(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_TQ1_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_39(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_TQ2_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_41(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_PV1_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_42(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_PV2_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_43(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_TQ1_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_44(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_TQ2_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_46(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_NTE_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_48(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_RXO_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_49(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_NTE_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_52(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_PV1_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_53(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_PV2_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_54(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_TQ1_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_55(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_TQ2_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_57(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_NTE_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_59(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_RXO_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_62(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_RXC_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXE_63(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_RXE_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_64(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_NTE_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_66(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_NTE_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_68(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_TQ1_68) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_69(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_TQ2_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_71(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_PV1_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_72(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_PV2_72) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_73(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_TQ1_73) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_74(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_TQ2_74) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_76(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_NTE_76) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_78(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_RXO_78) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_81(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_RXC_81) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXE_82(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_RXE_82) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_83(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_NTE_83) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_84(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_OBX_84) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_85(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_NTE_85) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_87(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_NTE_87) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_89(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_TQ1_89) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_90(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z82_RSP_Z82_TQ2_90) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z82_RSP_Z82_ */
} /* namespace HL7_29 */
#endif /*  __RSP_Z82_RSP_Z82__29_H__ */
